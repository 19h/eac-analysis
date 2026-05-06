/*
 * Targeted RetDec C for native executable gap queue batch 738.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1db85a-0x1dba5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dba5a-0x1dbc5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dbc5a-0x1dbe5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dbe5a-0x1dc05a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dc05a-0x1dc25a rank=- name=- kind=- bytes=- uncovered=-
 *   0x277e41-0x278041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x278341-0x278441 rank=- name=- kind=- bytes=- uncovered=-
 *   0x278641-0x278841 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_1db85a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1db880(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1db8bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1db960(void);
int64_t function_1db986(int64_t a1);
int64_t function_1db9b2(int64_t a1);
int64_t function_1db9b3(void);
int64_t function_1db9c0(int64_t a1);
int64_t function_1db9d2(void);
int64_t function_1db9de(void);
int64_t function_1dba0a(int64_t a1);
int64_t function_1dba1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dba6d(void);
int64_t function_1dba7d(void);
int64_t function_1dbaab(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1dbb06(void);
int64_t function_1dbb11(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dbb3e(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_1dbbb8(void);
int64_t function_1dbbc8(void);
int64_t function_1dbbd8(int64_t a1, int64_t a2);
int64_t function_1dbbe9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dbbf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dbc85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dbcbb(void);
int64_t function_1dbcc4(int64_t a1);
int64_t function_1dbcdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dbcfc(void);
int64_t function_1dbd01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1dbdc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dbde3(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1dbe6f(void);
int64_t function_1dbea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dbf01(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1dbf21(int64_t a1);
int64_t function_1dbf6d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1dbfb9(void);
int64_t function_1dbff3(int64_t a1);
int64_t function_1dbff5(void);
int64_t function_1dc006(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dc022(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dc03b(void);
int64_t function_1dc092(int64_t a1, int64_t a2);
int64_t function_1dc0bf(void);
int64_t function_1dc0ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dc148(void);
int64_t function_1dc15c(void);
int64_t function_1dc1c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dc1d4(int64_t a1);
int64_t function_1dc1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dc215(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20792c();
int64_t function_277e0f();
int64_t function_277e41(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_277e7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_277edd(void);
int64_t function_277f41(int64_t a1, int64_t a2, int64_t a3);
int64_t function_277fb5(void);
int64_t function_278035(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_278341(void);
int64_t function_278363(void);
int64_t function_278366(void);
int64_t function_278379(void);
int64_t function_27838f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2783a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2783a5(void);
int64_t function_2783ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2783d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27843b(void);
int64_t function_278641(void);
int64_t function_27867c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27868a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27872e(void);
int64_t function_27882d(int64_t a1);
int64_t function_3e2897e7();
int64_t function_4720e2ed();
int64_t function_676a1fe();
int64_t function_ffffffff92d24f8a();
int64_t function_ffffffff9efa2641();
int64_t function_ffffffffc4511214();
int64_t function_ffffffffcf1ef995();
int64_t function_ffffffffe9324e95();
int64_t unknown_1647ea0();
int64_t unknown_16841707();
int64_t unknown_1b2410ac();
int64_t unknown_2eabbc8a();
int64_t unknown_4b5b352b();
int64_t unknown_5c1fba37();
int64_t unknown_6aeb8d67();
int64_t unknown_71298831();
int64_t unknown_ffffffff88286226();
int64_t unknown_ffffffff9a19f747();
int64_t unknown_ffffffffa41f1710();
int64_t unknown_ffffffffaeccc126();
int64_t unknown_ffffffffc02ef409();
int64_t unknown_ffffffffd50cce75();

// Address range: 0x1db85a - 0x1db87f
int64_t function_1db85a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x1db85a
    int32_t v2 = __asm_insd(v1); // 0x1db85a
    int32_t * v3 = (int32_t *)a1; // 0x1db85a
    *v3 = v2;
    int64_t v4; // 0x1db85a
    *(char *)(a2 + 0x2583f06) = (char)v4;
    int64_t result = unknown_6aeb8d67(); // 0x1db861
    char * v5 = (char *)(result + 92); // 0x1db86a
    *v5 = *v5 + (char)v4;
    *(int32_t *)(a2 - 0x1f78b076) = (int32_t)a4;
    *v3 = __asm_insd(v1);
    float80_t v6; // 0x1db85a
    *(int64_t *)(result + 0x37440658) = (int64_t)v6;
    return result;
}

// Address range: 0x1db880 - 0x1db8bf
int64_t function_1db880(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x2daef38b; // 0x1db884
    int64_t v2; // 0x1db880
    *(char *)0x2daef38b = v1 + (char)((uint64_t)v2 / 256);
    *(int32_t *)(a4 - 3) = (int32_t)a2;
    int64_t v3 = __asm_wait(unknown_1b2410ac() & 0xffffffff); // 0x1db8ac
    return (v3 + ((v2 & 0x3a30566a) < 0xab0d701 ? 192 : 191)) % 256 | v3 & -256;
}

// Address range: 0x1db8bf - 0x1db93a
int64_t function_1db8bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x329481d4; // 0x1db8cd
    int64_t v2; // 0x1db8bf
    char v3 = v1 + (*(char *)(a1 + 73) | (char)((uint64_t)v2 / 256)); // 0x1db8cd
    *(char *)0x329481d4 = v3;
    if (v3 != 0) {
        // 0x1db8ed
        __asm_int(108);
        return a2 & 0xffffffff;
    }
    // 0x1db8d5
    __asm_in(80);
    return function_676a1fe();
}

// Address range: 0x1db960 - 0x1db961
int64_t function_1db960(void) {
    // 0x1db960
    int64_t result; // 0x1db960
    return result;
}

// Address range: 0x1db986 - 0x1db99f
int64_t function_1db986(int64_t a1) {
    // 0x1db986
    int64_t v1; // 0x1db986
    char v2 = v1; // 0x1db986
    *(char *)a1 = v2;
    bool v3; // 0x1db986
    __asm_out(6, v2 + 120 + (char)v3);
    return function_ffffffffc4511214();
}

// Address range: 0x1db9b2 - 0x1db9b3
int64_t function_1db9b2(int64_t a1) {
    // 0x1db9b2
    int64_t result; // 0x1db9b2
    return result;
}

// Address range: 0x1db9b3 - 0x1db9bc
int64_t function_1db9b3(void) {
    // 0x1db9b3
    int64_t v1; // 0x1db9b3
    return function_1dba1b(v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x1db9c0 - 0x1db9c9
int64_t function_1db9c0(int64_t a1) {
    // 0x1db9c0
    int64_t v1; // 0x1db9c0
    int32_t * v2 = (int32_t *)(v1 - 0x5bdda6f4); // 0x1db9c0
    int32_t v3 = *v2 + (int32_t)v1; // 0x1db9c0
    *v2 = v3;
    int64_t result; // 0x1db9c0
    if (v3 == 0) {
        result = function_1db960();
    }
    // 0x1db9c8
    return result;
}

// Address range: 0x1db9d2 - 0x1db9d5
int64_t function_1db9d2(void) {
    // 0x1db9d2
    int64_t result; // 0x1db9d2
    return result;
}

// Address range: 0x1db9de - 0x1db9e3
int64_t function_1db9de(void) {
    // 0x1db9de
    return function_4720e2ed();
}

// Address range: 0x1dba0a - 0x1dba0d
int64_t function_1dba0a(int64_t a1) {
    // 0x1dba0a
    int64_t result; // 0x1dba0a
    return result;
}

// Address range: 0x1dba1b - 0x1dba4f
int64_t function_1dba1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dba1b
    int64_t v1; // 0x1dba1b
    int32_t * v2 = (int32_t *)(v1 & -47); // 0x1dba1d
    *v2 = *v2 & (int32_t)a3;
    int64_t result = unknown_5c1fba37(a4); // 0x1dba31
    *(char *)0x30fa3f4f9e4a842f = (char)result;
    *(char *)((v1 & -256 | 12) + a2) = 36;
    return result;
}

// Address range: 0x1dba6d - 0x1dba6e
int64_t function_1dba6d(void) {
    // 0x1dba6d
    int64_t result; // 0x1dba6d
    return result;
}

// Address range: 0x1dba7d - 0x1dba7e
int64_t function_1dba7d(void) {
    // 0x1dba7d
    int64_t result; // 0x1dba7d
    return result;
}

// Address range: 0x1dbaab - 0x1dbaf1
int64_t function_1dbaab(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)0x687a61203733f66f; // 0x1dbaab
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    unsigned char v2 = (char)a3; // 0x1dbab5
    int64_t v3 = (int64_t)(v2 / 2 | 128 * v2); // 0x1dbab5
    int64_t v4 = a3 & -256 | v3; // 0x1dbab5
    char * v5 = (char *)(v4 + 0x3d00000d); // 0x1dbabe
    int64_t v6; // 0x1dbaab
    *v5 = *v5 + (char)((uint64_t)v6 / 256);
    int32_t * v7 = (int32_t *)(a4 + 0x21903c8); // 0x1dbac4
    *v7 = *v7 + (int32_t)a4;
    float80_t v8; // 0x1dbaab
    *(float32_t *)(v4 + 2) = (float32_t)v8;
    int64_t v9 = a4 & 0xff00 & 256 * v1 | a4 & -0xff01; // 0x1dbad5
    int32_t * v10 = (int32_t *)(4 * v1 + a2); // 0x1dbad7
    *v10 = *v10 + (int32_t)v4;
    int64_t v11 = v9 - 1; // 0x1dbae5
    if (v11 != 0) {
        function_1dba6d();
    }
    unsigned char v12 = *(char *)v9 + (char)(a3 / 256); // 0x1dbae1
    *(char *)a1 = __asm_insb((int16_t)(256 * (int64_t)v12 | v3));
    char * v13 = (char *)v11; // 0x1dbae8
    *v13 = *v13 + v12;
    return function_1dba7d();
}

// Address range: 0x1dbb06 - 0x1dbb07
int64_t function_1dbb06(void) {
    // 0x1dbb06
    int64_t result; // 0x1dbb06
    return result;
}

// Address range: 0x1dbb11 - 0x1dbb3d
int64_t function_1dbb11(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dbb11
    int64_t v1; // 0x1dbb11
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x1dbb11
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    char * v4 = (char *)(v1 + a4); // 0x1dbb14
    *v4 = *v4 + (char)(v2 / 256);
    *(char *)0x655bb1f = *(char *)0x655bb1f + (char)(v1 / 256);
    bool v5; // 0x1dbb11
    int64_t v6 = unknown_4b5b352b((v5 ? -4 : 4) + a1); // 0x1dbb25
    return (int64_t)(*(int32_t *)v6 + (int32_t)v6);
}

// Address range: 0x1dbb3e - 0x1dbbab
int64_t function_1dbb3e(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x1dbb3e
    int64_t v1; // 0x1dbb3e
    uint64_t v2 = v1;
    char v3 = a3 / 256; // 0x1dbb4d
    char v4 = v2 / 256; // 0x1dbb4d
    unsigned char v5 = v4 + v3; // 0x1dbb4d
    char v6 = unknown_2eabbc8a() / 256; // 0x1dbb4f
    int64_t result = __asm_iretd(); // 0x1dbb51
    if ((v6 & 64) != 0 || v6 < 0 != ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        result = function_1dbb06();
    }
    int64_t v7 = 256 * (int64_t)v5 | a3 & -0xff01; // 0x1dbb4d
    char * v8 = (char *)(result + 17); // 0x1dbb53
    *v8 = *v8 + (char)(a4 / 256);
    char * v9 = (char *)(v7 + ((a4 & 0xffffff00 | 128) + a2 & 0xffffffff)); // 0x1dbb58
    char v10 = result; // 0x1dbb58
    *v9 = *v9 + v10;
    char v11 = *(char *)0x7c12fa67 + v4; // 0x1dbb60
    *(char *)0x7c12fa67 = v11;
    if (v11 == 0) {
        // 0x1dbb68
        __asm_out_133((int16_t)v7, v10);
        return result;
    }
    // 0x1dbb91
    float80_t v12; // 0x1dbb3e
    *(float80_t *)((4 * v2 & -1024) - 44 + v7) = __asm_fbstp(v12);
    *(int16_t *)0x64fea965 = (int16_t)v1;
    return 0x274afbff;
}

// Address range: 0x1dbbb8 - 0x1dbbc4
int64_t function_1dbbb8(void) {
    // 0x1dbbb8
    return 0x7eefed96;
}

// Address range: 0x1dbbc8 - 0x1dbbcb
int64_t function_1dbbc8(void) {
    // 0x1dbbc8
    int64_t result; // 0x1dbbc8
    return result;
}

// Address range: 0x1dbbd8 - 0x1dbbe8
int64_t function_1dbbd8(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x3dc5eabf); // 0x1dbbd8
    int64_t v2; // 0x1dbbd8
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x1dbbd8
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    int32_t * v5 = (int32_t *)(v2 + 0x9d3b95b); // 0x1dbbe0
    *v5 = -*v5;
    int64_t v6 = v3;
    return (v6 + 202) % 256 | v6 & -256;
}

// Address range: 0x1dbbe9 - 0x1dbbee
int64_t function_1dbbe9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dbbe9
    int64_t v1; // 0x1dbbe9
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x1dbbf0 - 0x1dbbf9
int64_t function_1dbbf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dbbf0
    return function_ffffffffcf1ef995();
}

// Address range: 0x1dbc85 - 0x1dbc8a
int64_t function_1dbc85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dbc85
    int64_t v1; // 0x1dbc85
    return v1 + a4 & 0xffffffff;
}

// Address range: 0x1dbcbb - 0x1dbcbc
int64_t function_1dbcbb(void) {
    // 0x1dbcbb
    int64_t result; // 0x1dbcbb
    return result;
}

// Address range: 0x1dbcc4 - 0x1dbcc5
int64_t function_1dbcc4(int64_t a1) {
    // 0x1dbcc4
    int64_t result; // 0x1dbcc4
    return result;
}

// Address range: 0x1dbcdf - 0x1dbcee
int64_t function_1dbcdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dbcdf
    int64_t v1; // 0x1dbcdf
    char v2 = v1;
    unsigned char v3 = llvm_ctpop_i8(v2 & -27); // 0x1dbce4
    char v4 = v2; // 0x1dbce6
    int64_t v5; // 0x1dbcdf
    if (v3 % 2 == 0) {
        int64_t v6 = function_1dbcbb(); // 0x1dbce6
        v4 = v6;
        v5 = v6;
    }
    // 0x1dbce8
    return v5 & -256 | (int64_t)(*(char *)(v1 - 25) & v4);
}

// Address range: 0x1dbcfc - 0x1dbcfd
int64_t function_1dbcfc(void) {
    // 0x1dbcfc
    int64_t result; // 0x1dbcfc
    return result;
}

// Address range: 0x1dbd01 - 0x1dbdc4
int64_t function_1dbd01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1dbd01
    int64_t v1; // 0x1dbd01
    uint64_t v2 = v1;
    int64_t v3 = a5;
    uint64_t v4 = unknown_ffffffffc02ef409(); // 0x1dbd03
    bool v5; // 0x1dbd01
    if (!v5) {
        unsigned char v6 = *(char *)(v4 % 256 + v2); // 0x1dbd08
        char v7 = *(char *)(a1 + 73); // 0x1dbd0b
        return v4 & -0x10000 | (int64_t)v6 | 256 * (int64_t)(v7 | (char)(v4 / 256));
    }
    // 0x1dbd52
    __asm_hlt(a1 - 1);
    *(char *)v3 = *(char *)&v3 / 2;
    *(char *)0x697a074 = *(char *)0x697a074 >> 5;
    char v8 = *(char *)0x50b4667a + (char)(v2 / 256); // 0x1dbd73
    *(char *)0x50b4667a = v8;
    if (v8 >= 0) {
        function_1dbcfc();
    }
    // 0x1dbd7b
    return __asm_sti() & 0xffffffff ^ 0xf900d033;
}

// Address range: 0x1dbdc9 - 0x1dbdcc
int64_t function_1dbdc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dbdc9
    int64_t result; // 0x1dbdc9
    return result;
}

// Address range: 0x1dbde3 - 0x1dbe34
int64_t function_1dbde3(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1dbde3
    *(char *)(a3 + 0x508f838) = (char)(a3 / 256);
    bool v1; // 0x1dbde3
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = a2; // 0x1dbded
    int64_t v4 = a1; // 0x1dbded
    int64_t v5 = a3;
    int64_t v6; // 0x1dbde3
    int64_t result = v6 & -256 | (int64_t)*(char *)-0x46fe17ede8748cc6;
    int64_t v7; // 0x1dbde3
    int64_t v8 = v7 - 1; // 0x1dbdf3
    while (v8 != 0) {
        int64_t v9 = v5 + result; // 0x1dbdf7
        __asm_int1();
        int64_t v10; // 0x1dbde3
        *(int32_t *)v10 = *(int32_t *)&v10 - (int32_t)v8;
        __asm_in_134(101);
        int64_t v11 = unknown_16841707(); // 0x1dbe01
        *(char *)v4 = *(char *)v3;
        v4 += v2;
        v3 += v2;
        unsigned char v12 = (char)v11 & 9; // 0x1dbe07
        if (llvm_ctpop_i8(v12) % 2 != 0) {
            int64_t v13 = v10 + v6 & 0xffffffff; // 0x1dbe0b
            char * v14 = (char *)(v13 + (int64_t)&g1); // 0x1dbe14
            *v14 = *v14 | (char)v9;
            unknown_ffffffffaeccc126(v4, v3);
            int32_t * v15 = (int32_t *)(v13 - 119 + v10); // 0x1dbe26
            *v15 = *v15 + 0x17adc800;
            return v10 + a2 & 0xffffffff;
        }
        v5 = v9 & 0xffffffff;
        result = v11 & -256 | (int64_t)v12;
        v8--;
    }
    // 0x1dbdf5
    __asm_out_133((int16_t)v5, (char)result);
    return result;
}

// Address range: 0x1dbe6f - 0x1dbe72
int64_t function_1dbe6f(void) {
    // 0x1dbe6f
    int64_t result; // 0x1dbe6f
    return result;
}

// Address range: 0x1dbea7 - 0x1dbeb5
int64_t function_1dbea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1dbea7
    int64_t v1; // 0x1dbea7
    __asm_out_133((int16_t)a3, (char)v1);
    return __asm_int1();
}

// Address range: 0x1dbf01 - 0x1dbf14
int64_t function_1dbf01(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1dbf01
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x1dbf01
    char * v2 = (char *)(v1 + 0x3a88abd4); // 0x1dbf02
    *v2 = *v2 + (char)a3;
    return unknown_ffffffffa41f1710();
}

// Address range: 0x1dbf21 - 0x1dbf25
int64_t function_1dbf21(int64_t a1) {
    // 0x1dbf21
    int64_t result; // 0x1dbf21
    return result;
}

// Address range: 0x1dbf6d - 0x1dbf79
int64_t function_1dbf6d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1dbf6d
    __asm_in(7);
    unknown_ffffffffd50cce75();
    __asm_in_135((int16_t)a3);
    __asm_in(85);
    return function_1dbff5();
}

// Address range: 0x1dbfb9 - 0x1dbfba
int64_t function_1dbfb9(void) {
    // 0x1dbfb9
    int64_t result; // 0x1dbfb9
    return result;
}

// Address range: 0x1dbff3 - 0x1dbff4
int64_t function_1dbff3(int64_t a1) {
    // 0x1dbff3
    int64_t result; // 0x1dbff3
    return result;
}

// Address range: 0x1dbff5 - 0x1dbffe
int64_t function_1dbff5(void) {
    // 0x1dbff5
    int64_t v1; // 0x1dbff5
    return v1 & -256 | (int64_t)__asm_in_134(17);
}

// Address range: 0x1dc006 - 0x1dc020
int64_t function_1dc006(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1dc006
    int64_t v1; // 0x1dc006
    float80_t v2; // 0x1dc006
    *(float32_t *)(v1 + 34) = (float32_t)v2;
    return v1 & -84;
}

// Address range: 0x1dc022 - 0x1dc035
int64_t function_1dc022(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_20792c(); // 0x1dc026
    uint32_t v1 = (int32_t)a4 % 32; // 0x1dc030
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)result; // 0x1dc030
        *v2 = *v2 >> v1;
    }
    return result;
}

// Address range: 0x1dc03b - 0x1dc040
int64_t function_1dc03b(void) {
    // 0x1dc03b
    return function_ffffffff9efa2641();
}

// Address range: 0x1dc092 - 0x1dc0a6
int64_t function_1dc092(int64_t a1, int64_t a2) {
    char v1 = *(char *)0x16350fa7; // 0x1dc0a0
    int64_t v2; // 0x1dc092
    *(char *)0x16350fa7 = v1 + (char)((uint64_t)v2 / 256);
    return 0x10000 * (int32_t)v2 >> 16 | 80;
}

// Address range: 0x1dc0bf - 0x1dc0c2
int64_t function_1dc0bf(void) {
    // 0x1dc0bf
    int64_t result; // 0x1dc0bf
    return result;
}

// Address range: 0x1dc0ff - 0x1dc106
int64_t function_1dc0ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1dc0ff
    int64_t result; // 0x1dc0ff
    return result;
}

// Address range: 0x1dc148 - 0x1dc149
int64_t function_1dc148(void) {
    // 0x1dc148
    int64_t result; // 0x1dc148
    return result;
}

// Address range: 0x1dc15c - 0x1dc163
int64_t function_1dc15c(void) {
    // 0x1dc15c
    return function_1dc148();
}

// Address range: 0x1dc1c2 - 0x1dc1d3
int64_t function_1dc1c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dc1c2
    int64_t result; // 0x1dc1c2
    int32_t * v1 = (int32_t *)(4 * a2 + 0x13da836 + result); // 0x1dc1c2
    *v1 = *v1 + (int32_t)result;
    char * v2 = (char *)(a1 + 0x625c0dba); // 0x1dc1c9
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x1dc1d4 - 0x1dc1d5
int64_t function_1dc1d4(int64_t a1) {
    // 0x1dc1d4
    int64_t result; // 0x1dc1d4
    return result;
}

// Address range: 0x1dc1f1 - 0x1dc210
int64_t function_1dc1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dc1f1
    __asm_in_134(93);
    return function_ffffffff92d24f8a();
}

// Address range: 0x1dc215 - 0x1dc24a
int64_t function_1dc215(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t result = __asm_in_136((int16_t)a3); // 0x1dc219
    bool v2; // 0x1dc215
    if (!v2) {
        // 0x1dc21d
        return result;
    }
    // 0x1dc220
    unknown_ffffffff88286226();
    uint32_t v3 = (int32_t)a4 % 32; // 0x1dc226
    bool v4; // 0x1dc215
    if (v3 != 0) {
        uint32_t v5 = (int32_t)a5; // 0x1dc226
        int32_t v6 = v5 >> 32 - v3 | v5 << v3; // 0x1dc226
        v1 = v6;
        v4 = v6 % 2 != 0;
    }
    if (!v2) {
        // 0x1dc29a
        return (int64_t)&v1;
    }
    int64_t v7 = unknown_71298831(); // 0x1dc22b
    uint64_t v8 = v7 + (v4 ? 113 : 112); // 0x1dc230
    return (v8 % 256 | v7 & 0xffffff00) + 0xcd9c84d & 0xffffff00 | (v8 + 85) % 256;
}

// Address range: 0x277e41 - 0x277e44
int64_t function_277e41(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x277e41
    int64_t result; // 0x277e41
    return result;
}

// Address range: 0x277e7c - 0x277ea4
int64_t function_277e7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x277e7c
    int64_t v1; // 0x277e7c
    int32_t * v2 = (int32_t *)(v1 + 0x5a06e00c); // 0x277e7c
    *v2 = *v2 - (int32_t)a4;
    *(char *)-0x7907b577 = *(char *)-0x7907b577 + (char)(v1 / 256);
    if ((*(int32_t *)(v1 + 14) || (int32_t)v1) != 0) {
        function_277e0f();
    }
    // 0x277e8d
    unknown_1647ea0();
    return function_ffffffffe9324e95();
}

// Address range: 0x277edd - 0x277ede
int64_t function_277edd(void) {
    // 0x277edd
    int64_t result; // 0x277edd
    return result;
}

// Address range: 0x277f41 - 0x277f5c
int64_t function_277f41(int64_t a1, int64_t a2, int64_t a3) {
    // 0x277f41
    int64_t v1; // 0x277f41
    *(char *)0x3d0018bc7a149a9f = (char)v1;
    int32_t * v2 = (int32_t *)(a1 - 107); // 0x277f4a
    *v2 = *v2 + (int32_t)a3;
    return function_277edd();
}

// Address range: 0x277fb5 - 0x277fbd
int64_t function_277fb5(void) {
    // 0x277fb5
    int64_t v1; // 0x277fb5
    char v2 = v1;
    *(char *)v1 = 2 * v2;
    char v3 = v2 + 53; // 0x277fb7
    int64_t result = v1 & -256 | (int64_t)v3; // 0x277fba
    if (v3 >= 0) {
        result = function_277f41(v1, v1, v1);
    }
    // 0x277fbc
    return result;
}

// Address range: 0x278035 - 0x278038
int64_t function_278035(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x278035
    int64_t result; // 0x278035
    *(char *)a4 = -(char)result;
    return result;
}

// Address range: 0x278341 - 0x278342
int64_t function_278341(void) {
    // 0x278341
    int64_t result; // 0x278341
    return result;
}

// Address range: 0x278363 - 0x278364
int64_t function_278363(void) {
    // 0x278363
    int64_t result; // 0x278363
    return result;
}

// Address range: 0x278366 - 0x27836b
int64_t function_278366(void) {
    // 0x278366
    return function_3e2897e7();
}

// Address range: 0x278379 - 0x27837a
int64_t function_278379(void) {
    // 0x278379
    int64_t result; // 0x278379
    return result;
}

// Address range: 0x27838f - 0x2783a0
int64_t function_27838f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27838f
    int64_t result; // 0x27838f
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)(result | result) + (int32_t)v1;
    return result;
}

// Address range: 0x2783a1 - 0x2783a5
int64_t function_2783a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 47); // 0x2783a1
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x2783a1
    return result;
}

// Address range: 0x2783a5 - 0x2783a6
int64_t function_2783a5(void) {
    // 0x2783a5
    int64_t result; // 0x2783a5
    return result;
}

// Address range: 0x2783ad - 0x2783cb
int64_t function_2783ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2783ad
    int64_t v1; // 0x2783ad
    v1 = function_278363();
    char * v2 = (char *)(a1 - 0x1fc8); // 0x2783af
    *v2 = *v2 ^ (char)v1;
    char * v3 = (char *)(a4 - 80); // 0x2783b5
    *v3 = *v3 + (char)a3;
    __asm_int(82);
    int64_t v4; // 0x2783ad
    return (int64_t)&v4;
}

// Address range: 0x2783d3 - 0x278409
int64_t function_2783d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2783d3
    int64_t v1; // 0x2783d3
    __writegsdword(0x4a0ee1c861700fdb, (int32_t)v1);
    bool v2; // 0x2783d3
    *(char *)a4 = (v2 ? 103 : 102) + (char)v1;
    int64_t v3 = v1 | a4;
    int64_t v4 = v3 & 0xffffffff; // 0x2783e9
    if ((int32_t)v3 >= 0x1f2e8b02) {
        v4 = function_2783a5();
    }
    // 0x2783eb
    *(char *)0x5e776749 = (char)v4;
    *(int32_t *)-0x30fec2ff86d20644 = (int32_t)v4;
    return v1 & 0xffffffff;
}

// Address range: 0x27843b - 0x27843e
int64_t function_27843b(void) {
    // 0x27843b
    int64_t result; // 0x27843b
    return result;
}

// Address range: 0x278641 - 0x278646
int64_t function_278641(void) {
    // 0x278641
    return unknown_ffffffff9a19f747();
}

// Address range: 0x27867c - 0x278681
int64_t function_27867c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27867c
    int64_t result; // 0x27867c
    *(int32_t *)a3 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x27868a - 0x2786a2
int64_t function_27868a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)*(int32_t *)-0x704b8397f87bfe18; // 0x27868d
    char * v1 = (char *)(result + 0x1e8974a); // 0x278699
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x27872e - 0x278731
int64_t function_27872e(void) {
    // 0x27872e
    int64_t result; // 0x27872e
    return result;
}

// Address range: 0x27882d - 0x27882e
int64_t function_27882d(int64_t a1) {
    // 0x27882d
    int64_t result; // 0x27882d
    return result;
}
