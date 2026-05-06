/*
 * Targeted RetDec C for native executable gap queue batch 745.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe0766-0xe0966 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe0966-0xe0b66 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe0b66-0xe0d66 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe0d66-0xe0f66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x430893-0x430a93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x430a93-0x430c93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x430c93-0x430e93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x430e93-0x431093 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_30433435();
int64_t function_430871();
int64_t function_430893(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4308c8(int64_t a1);
int64_t function_4308ea(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43090c(void);
int64_t function_430914(int64_t a1, int64_t a2, int64_t a3);
int64_t function_430957(int64_t a1);
int64_t function_430965(void);
int64_t function_43096e(int64_t a1);
int64_t function_430980(void);
int64_t function_430992(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_430a56(void);
int64_t function_430a6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_430a76(void);
int64_t function_430aeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_430b07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_430d38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_430e2c(void);
int64_t function_430e55(int64_t a1);
int64_t function_430e90(void);
int64_t function_430edb(void);
int64_t function_430ef3(int64_t a1);
int64_t function_430f06(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_430f39(int64_t a1);
int64_t function_430f6d(int64_t a1);
int64_t function_430fd9(void);
int64_t function_430fdd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_430ff0(void);
int64_t function_43102c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_7c401f1c();
int64_t function_c57b8();
int64_t function_e0766(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e07d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e08e2(void);
int64_t function_e08e9(void);
int64_t function_e08f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e09ca(void);
int64_t function_e09d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e0ab8(int64_t a1);
int64_t function_e0b36(void);
int64_t function_e0b49(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e0b72(void);
int64_t function_e0b77(void);
int64_t function_e0b90(int64_t a1, int64_t a2);
int64_t function_e0b99(int64_t a1);
int64_t function_e0bb2(void);
int64_t function_e0bb9(void);
int64_t function_e0bd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e0cdf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_e0f21(int64_t a1);
int64_t function_ffffffff988441b5();
int64_t function_ffffffffafe35eb0();
int64_t function_ffffffffe63401f6();
int64_t unknown_235e750d();
int64_t unknown_332d9d7d();
int64_t unknown_3d7b7ff5();
int64_t unknown_5b0eb096();
int64_t unknown_b132430();
int64_t unknown_cfee8e0();
int64_t unknown_ffffffff830059e3();
int64_t unknown_ffffffff91e79ed3();
int64_t unknown_ffffffffa4e2f7e8();
int64_t unknown_ffffffffa8348144();
int64_t unknown_ffffffffaf23b5f1();
int64_t unknown_ffffffffd87b2079();
int64_t unknown_ffffffffe8a037c2();

// Address range: 0xe0766 - 0xe07d4
int64_t function_e0766(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe0766
    int64_t v1; // 0xe0766
    uint64_t v2 = v1;
    int64_t v3 = (int64_t)*(int32_t *)-0x1440fe68; // 0xe0766
    int64_t v4 = -57 * v3; // 0xe0766
    int64_t v5 = (v2 / 256 + a3 + (int64_t)(v4 != -0x3900000000 * v3 >> 32)) % 256 | a3 & -256; // 0xe076f
    int64_t v6 = unknown_ffffffffd87b2079(); // 0xe0773
    int32_t * v7 = (int32_t *)(2 * a2 - 102); // 0xe0778
    *v7 = *v7 | (int32_t)v5;
    int64_t v8 = v6 + 0xe8d81c2f; // 0xe077c
    int32_t * v9 = (int32_t *)(a4 - 0x4361960b); // 0xe0781
    uint32_t v10 = *v9; // 0xe0781
    int32_t v11 = v2; // 0xe0781
    uint32_t v12 = v10 + v11; // 0xe0781
    *v9 = v12;
    int64_t v13; // 0xe0766
    if (a4 == 0) {
        int64_t v14 = ((a1 & (int64_t)&g1) == 0 ? 1 : -1) + a1; // 0xe07b7
        __asm_int(7);
        int32_t * v15 = (int32_t *)(v2 + 0x134a01e8 + (v4 & 0xffffffff)); // 0xe07bb
        *v15 = *v15 + v11;
        char v16 = *(char *)v14; // 0xe07c2
        uint32_t v17 = (int32_t)v8 + (int32_t)v14 + (int32_t)(v16 != 0); // 0xe07c6
        __asm_hlt(v17, a2);
        v13 = v17;
    } else {
        // 0xe0789
        v13 = a1;
        if (v12 >= v10) {
            // 0xe078b
            return v8 & 0xffffffff;
        }
    }
    // 0xe07cb
    *(int32_t *)v13 = __asm_insd((int16_t)v5);
    int64_t result = unknown_ffffffff91e79ed3(); // 0xe07cd
    char * v18 = (char *)v5; // 0xe07d2
    *v18 = *v18 + (char)v2;
    return result;
}

// Address range: 0xe07d5 - 0xe0832
int64_t function_e07d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_cfee8e0(); // 0xe07da
    unsigned char v3 = (char)a4; // 0xe07df
    unsigned char v4 = *(char *)(v2 - 23); // 0xe07df
    char v5 = v3 - v4; // 0xe07df
    *(char *)a1 = (char)v2;
    int64_t result = v2; // 0xe07e4
    if (v4 > v3 || v5 == 0) {
        // 0xe07e6
        bool v6; // 0xe07d5
        int64_t v7 = (v6 ? -1 : 1) + a1; // 0xe07e3
        uint32_t v8 = (int32_t)v2; // 0xe07e6
        bool v9 = v4 > v3 ? v8 + 0x4c6a00d3 + (int32_t)(v4 > v3) <= v8 : v8 > 0xb395ff2c; // 0xe07e6
        uint64_t v10 = unknown_ffffffffaf23b5f1(v7); // 0xe07eb
        char v11 = *(char *)(v7 - 0x78bbff45); // 0xe07f0
        int32_t * v12 = (int32_t *)(v10 + 6); // 0xe07fb
        int64_t v13; // 0xe07d5
        *v12 = *v12 + (int32_t)v13;
        *(char *)(v7 + 0x44223f92) = (char)(v10 / 256);
        int64_t v14 = (a4 & -256 | (int64_t)(v5 + (char)v9 + v11)) - 1; // 0xe0809
        int32_t * v15 = (int32_t *)(4 * v14 + 0x7dbb5570); // 0xe0812
        *v15 = *v15 + (int32_t)v1;
        *(char *)v1 = *(char *)&v1 + (char)v14;
        result = (int64_t)*(int32_t *)0x3eb7cba68afc49e3;
    }
    // 0xe082d
    return result;
}

// Address range: 0xe08e2 - 0xe08e9
int64_t function_e08e2(void) {
    // 0xe08e2
    unknown_ffffffffa4e2f7e8();
    int64_t v1; // 0xe08e2
    return function_e08f9(v1, v1, v1, v1);
}

// Address range: 0xe08e9 - 0xe08f9
int64_t function_e08e9(void) {
    // 0xe08e9
    int64_t v1; // 0xe08e9
    int64_t v2 = 0x100000000 * v1 >> 32; // 0xe08e9
    uint64_t v3 = v2 * v2; // 0xe08e9
    int32_t * v4 = (int32_t *)(v3 / 0x100000000); // 0xe08ec
    *v4 = *v4 + (int32_t)v3;
    int64_t result = unknown_3d7b7ff5(); // 0xe08ef
    int32_t * v5 = (int32_t *)(result + 16); // 0xe08f4
    *v5 = *v5 + (int32_t)v1;
    return result;
}

// Address range: 0xe08f9 - 0xe097c
int64_t function_e08f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0xe08f9
    char v3 = v2; // 0xe08f9
    *(char *)-0x17992d6e = *(char *)-0x17992d6e | v3;
    char * v4 = (char *)(v2 + 0x7a160080); // 0xe0901
    *v4 = *v4 | v3;
    unknown_235e750d();
    int64_t v5 = __asm_int1(); // 0xe090c
    unsigned char v6 = *(char *)-0x2b7af79afe17d4df; // 0xe090f
    int64_t v7; // 0xe08f9
    *(char *)a1 = *(char *)&v7;
    bool v8; // 0xe08f9
    int64_t v9 = v8 ? -1 : 1; // 0xe0918
    int64_t v10 = v9 + a1; // 0xe0918
    v7 = v9 + a2;
    if ((v5 & 35) == 0) {
        // 0xe0957
        float80_t v11; // 0xe08f9
        *(int16_t *)v1 = (int16_t)v11;
        int32_t * v12 = (int32_t *)((v1 / 256 % 256 | a4 & -256) + 0x23134cf5); // 0xe0960
        int32_t v13 = v1 & 0xffff00ff | 256 * a4 & 0xff00; // 0xe0960
        *v12 = *v12 + v13;
        int64_t v14 = 2 * (v5 & 0x7fffffffffffff00 | (int64_t)v6) + 0x2b9278054; // 0xe0968
        int32_t * v15 = (int32_t *)((v14 & 0xfffffffe) + 6); // 0xe096d
        *v15 = *v15 + (int32_t)v2;
        *(int32_t *)v10 = *(int32_t *)v7;
        int64_t result = v14 & 0xffffff00 | (int64_t)__asm_in(-94); // 0xe0973
        int32_t * v16 = (int32_t *)(8 * v2 - 0x119dafff + result); // 0xe0975
        *v16 = *v16 & v13;
        return result;
    }
    int64_t v17 = v2 + a3 & 0xffffffff; // 0xe08ff
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v10;
    int32_t v18 = *(int32_t *)v7 | 0xbdcfa93; // 0xe0924
    unsigned char v19 = llvm_ctpop_i8((char)v18); // 0xe0924
    *(int64_t *)(v17 - 8) = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)(v18 < 0) | 4 * (int64_t)(v19 % 2 == 0) | 2;
    unknown_b132430(v10, v7 + (v8 ? -4 : 4));
    *(int64_t *)(v17 - 16) = v10;
    *(char *)0x380ff171 = *(char *)0x380ff171 + 65;
    *(char *)(v1 - 0x6f345c00) = (char)v2;
    int64_t v20 = unknown_ffffffffa8348144(); // 0xe093e
    int16_t v21 = v20; // 0xe0943
    int16_t v22 = (int16_t)*(char *)v20; // 0xe0943
    return v20 & -0x10000 | (int64_t)(v21 / v22 % 256) | (int64_t)(256 * (v21 % v22));
}

// Address range: 0xe09ca - 0xe09cb
int64_t function_e09ca(void) {
    // 0xe09ca
    int64_t result; // 0xe09ca
    return result;
}

// Address range: 0xe09d1 - 0xe0a80
int64_t function_e09d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffffe8a037c2(); // 0xe09d1
    int64_t v2; // 0xe09d1
    int64_t v3 = v2 + a1; // 0xe09d6
    *(char *)(v3 & 0xffffffff) = *(char *)0x9880028d58ff5;
    __asm_in_133(-86);
    bool v4; // 0xe09d1
    int64_t v5 = __asm_hlt((int32_t)((v4 ? 0xffffffff : 1) + v3), 0x1e8a822); // 0xe09f5
    int32_t * v6 = (int32_t *)(a5 - 0x189bf7a0 + 8 * a5); // 0xe0a79
    *v6 = *v6 + (int32_t)v1;
    return v5 & 0x1881035;
}

// Address range: 0xe0ab8 - 0xe0abb
int64_t function_e0ab8(int64_t a1) {
    // 0xe0ab8
    int64_t v1; // 0xe0ab8
    bool v2; // 0xe0ab8
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0xe0b36 - 0xe0b37
int64_t function_e0b36(void) {
    // 0xe0b36
    int64_t result; // 0xe0b36
    return result;
}

// Address range: 0xe0b49 - 0xe0b56
int64_t function_e0b49(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe0b49
    bool v1; // 0xe0b49
    if (true == !v1) {
        function_e0b36();
    }
    // 0xe0b4e
    *(int32_t *)-0x523581aa = *(int32_t *)-0x523581aa + (int32_t)a1;
    return unknown_5b0eb096(a1, a2);
}

// Address range: 0xe0b72 - 0xe0b73
int64_t function_e0b72(void) {
    // 0xe0b72
    int64_t result; // 0xe0b72
    return result;
}

// Address range: 0xe0b77 - 0xe0b81
int64_t function_e0b77(void) {
    // 0xe0b77
    unknown_332d9d7d();
    return function_ffffffffe63401f6();
}

// Address range: 0xe0b90 - 0xe0b98
int64_t function_e0b90(int64_t a1, int64_t a2) {
    int64_t result = unknown_5b0eb096(a1, a2); // 0xe0b90
    int32_t * v1 = (int32_t *)(result + 57); // 0xe0b95
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0xe0b99 - 0xe0bad
int64_t function_e0b99(int64_t a1) {
    // 0xe0b99
    int64_t v1; // 0xe0b99
    return (v1 | v1) & 0xffffff00 | (int64_t)*(char *)0x264ae1f287b001e8;
}

// Address range: 0xe0bb2 - 0xe0bb7
int64_t function_e0bb2(void) {
    // 0xe0bb2
    return function_ffffffffafe35eb0();
}

// Address range: 0xe0bb9 - 0xe0bbe
int64_t function_e0bb9(void) {
    // 0xe0bb9
    return function_e0b72();
}

// Address range: 0xe0bd7 - 0xe0bf7
int64_t function_e0bd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe0bd7
    int64_t v1; // 0xe0bd7
    int32_t v2 = v1;
    int32_t v3 = a4; // 0xe0bd9
    *(int32_t *)v1 = v2 + v3;
    int64_t result = unknown_ffffffff830059e3(); // 0xe0bdd
    if (v2 != -v3) {
        // 0xe0c4f
        return result;
    }
    int32_t * v4 = (int32_t *)(result - 0x5da8381d); // 0xe0be5
    *v4 = *v4 + (int32_t)a2;
    return result & -256 | (int64_t)*(char *)0x3700cb17d401e809;
}

// Address range: 0xe0cdf - 0xe0ee6
int64_t function_e0cdf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xe0cdf
    int64_t v1; // 0xe0cdf
    char * v2 = (char *)(v1 - 0x27fe1726); // 0xe0cdf
    *v2 = *v2 & (char)(a3 / 256);
    int64_t v3; // 0xe0cdf
    char v4 = *(char *)&v3; // 0xe0ce5
    int64_t v5; // 0xe0cdf
    *(int32_t *)a1 = *(int32_t *)&v5 + (int32_t)a2;
    *(char *)a1 = -1;
    *(char *)-0x16fa8c54 = *(char *)-0x16fa8c54 | (char)a5;
    int32_t v6 = *(int32_t *)0x2407ba44; // 0xe0cf9
    *(int32_t *)0x2407ba44 = v6 + (int32_t)(a4 & 0xffffff00 | (int64_t)(v4 | (char)a4));
    int64_t v7; // bp-64, 0xe0cdf
    v7 = (int64_t)&v7;
    return function_c57b8();
}

// Address range: 0xe0f21 - 0xe0f22
int64_t function_e0f21(int64_t a1) {
    // 0xe0f21
    int64_t result; // 0xe0f21
    return result;
}

// Address range: 0x430893 - 0x4308a5
int64_t function_430893(int64_t a1, int64_t a2, int64_t a3) {
    // 0x430893
    int64_t result; // 0x430893
    return result;
}

// Address range: 0x4308c8 - 0x4308d4
int64_t function_4308c8(int64_t a1) {
    // 0x4308c8
    int64_t v1; // 0x4308c8
    return v1 & -256 | (int64_t)*(char *)0x5255aedf622d9a0c;
}

// Address range: 0x4308ea - 0x4308ee
int64_t function_4308ea(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4308ea
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_430871();
}

// Address range: 0x43090c - 0x43090f
int64_t function_43090c(void) {
    // 0x43090c
    int64_t result; // 0x43090c
    return result;
}

// Address range: 0x430914 - 0x43091b
int64_t function_430914(int64_t a1, int64_t a2, int64_t a3) {
    // 0x430914
    int64_t result; // 0x430914
    *(int32_t *)a2 = (int32_t)(result | result);
    return result;
}

// Address range: 0x430957 - 0x43095b
int64_t function_430957(int64_t a1) {
    // 0x430957
    int64_t result; // 0x430957
    return result;
}

// Address range: 0x430965 - 0x43096a
int64_t function_430965(void) {
    // 0x430965
    return function_7c401f1c();
}

// Address range: 0x43096e - 0x430972
int64_t function_43096e(int64_t a1) {
    // 0x43096e
    int64_t result; // 0x43096e
    return result;
}

// Address range: 0x430980 - 0x430981
int64_t function_430980(void) {
    // 0x430980
    int64_t result; // 0x430980
    return result;
}

// Address range: 0x430992 - 0x430a4b
int64_t function_430992(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = -31; // bp-8, 0x430992
    int64_t v2; // 0x430992
    uint32_t v3 = (int32_t)v2; // 0x430995
    uint32_t v4 = v3 + (int32_t)a1; // 0x430995
    int32_t v5 = v4 < v3 ? 0x77efe928 : 0x77efe927; // 0x430997
    uint32_t v6 = v4 - v5; // 0x430997
    int64_t result = v6; // 0x430997
    if (v4 < v3 || v4 < v5 || v6 == 0) {
        // 0x4309d5
        return result;
    }
    if (v4 < v5) {
        char * v7 = (char *)result; // 0x4309c7
        *v7 = *v7 - (char)v6;
        return result;
    }
    int16_t v8 = a3 - 256 * a4 & 0xff00 | a3 % 256; // 0x430a29
    char v9 = __asm_in_134(v8); // 0x430a29
    *(char *)-0x1aaac0da4eb0c1a9 = v9;
    char * v10 = (char *)((int64_t)&v1 + 100 + 2 * (result & 0xffffff00 | (int64_t)v9)); // 0x430a37
    *v10 = *v10 & (char)a3;
    bool v11; // 0x430992
    int64_t v12 = v11 ? -4 : 4; // 0x430a3b
    int64_t v13 = v12 + a1; // 0x430a3b
    *(int32_t *)v13 = __asm_insd(v8);
    int64_t v14 = 0x100000000 * v13 >> 32; // 0x430a3f
    __asm_out(v8, (char)v14);
    uint64_t v15 = v2 + a2 + v12 + v14; // 0x430a41
    return v15 & 0xffffff00 | (int64_t)*(char *)(v15 % 256 + v2);
}

// Address range: 0x430a56 - 0x430a5c
int64_t function_430a56(void) {
    // 0x430a56
    int64_t result; // 0x430a56
    return result;
}

// Address range: 0x430a6f - 0x430a76
int64_t function_430a6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x430a6f
    int64_t result; // 0x430a6f
    return result;
}

// Address range: 0x430a76 - 0x430a79
int64_t function_430a76(void) {
    // 0x430a76
    int64_t v1; // 0x430a76
    int64_t v2 = v1;
    return (v2 + 59) % 256 | v2 & -256;
}

// Address range: 0x430aeb - 0x430af2
int64_t function_430aeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x430aeb
    return function_30433435();
}

// Address range: 0x430b07 - 0x430be1
int64_t function_430b07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x430b07
    int64_t v1; // 0x430b07
    int64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x430b07
    if (v4) {
        // 0x430b09
        int64_t result; // 0x430b07
        return result;
    }
    int64_t v5 = 25; // bp-8, 0x430b48
    char * v6 = (char *)(v1 + 9); // 0x430b4c
    unsigned char v7 = *v6; // 0x430b4c
    char v8 = v1; // 0x430b4c
    char v9 = v7 + v8; // 0x430b4c
    *v6 = v9;
    bool v10 = ((v9 ^ v7) & (v9 ^ v8)) < 0; // 0x430b4f
    int64_t v11 = a3; // 0x430b4f
    char v12 = v9; // 0x430b4f
    int64_t v13 = a1; // 0x430b4f
    if (v9 < v7 || v9 == 0) {
        // 0x430b51
        *(char *)a1 = *(char *)&v3;
        int64_t v14 = v4 ? -1 : 1; // 0x430b5e
        v3 += v14;
        char * v15 = (char *)(v1 - 2); // 0x430b63
        int64_t v16 = ((v2 + 70) % 256 | v2 & 0xffffff00) + 0x3004885 + (int64_t)((char)v2 > 185) & 0xffffffff; // 0x430b5e
        int64_t v17 = v14 + a1; // 0x430b5e
        int64_t v18 = (int64_t)&v5;
        *(int64_t *)(v18 - 8) = v18;
        int64_t v19 = v16 & -20; // 0x430b60
        *(char *)v17 = (char)v19;
        int64_t v20 = v17 + v14; // 0x430b62
        *v15 = *v15 + v8;
        int64_t v21 = v18 - 16; // 0x430b67
        *(int64_t *)v21 = -111;
        v11 = (0x100000000 * v19 >> 32) * (int64_t)*(int32_t *)v3 / 0x100000000;
        int64_t v22 = __asm_wait(v20, v3, v11); // 0x430b6c
        v13 = v20 + v14;
        int64_t v23; // 0x430b07
        int64_t v24 = (int64_t)(*(int32_t *)(v1 + 0x41635154) + (int32_t)v23); // 0x430b6f
        uint32_t v25 = *(int32_t *)(v24 + 0xa09c124) & (int32_t)v3; // 0x430b75
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0x430b75
        v3 = v25;
        v23 = v24;
        v17 = v13;
        while (v26 % 2 != 0) {
            // 0x430b5f
            v18 = v21;
            *(int64_t *)(v18 - 8) = v18;
            v19 = v22 & -20;
            *(char *)v17 = (char)v19;
            v20 = v17 + v14;
            *v15 = *v15 + v8;
            v21 = v18 - 16;
            *(int64_t *)v21 = -111;
            v11 = (0x100000000 * v19 >> 32) * (int64_t)*(int32_t *)v3 / 0x100000000;
            v22 = __asm_wait(v20, v3, v11);
            v13 = v20 + v14;
            v24 = (int64_t)(*(int32_t *)(v1 + 0x41635154) + (int32_t)v23);
            v25 = *(int32_t *)(v24 + 0xa09c124) & (int32_t)v3;
            v26 = llvm_ctpop_i8((char)v25);
            v3 = v25;
            v23 = v24;
            v17 = v13;
        }
        // 0x430b7f
        v10 = false;
        v12 = (char)v22 ^ 10;
    }
    // 0x430b83
    if (v12 < 0 != v10) {
        // 0x430b85
        return __asm_in_135((int16_t)v11);
    }
    int64_t v27 = __asm_int1(); // 0x430bb5
    char v28 = __asm_in(-126); // 0x430bb8
    int64_t result2 = v27 & -256 | (int64_t)v28; // 0x430bb8
    if (*(char *)v3 > *(char *)v13) {
        // 0x430b09
        return result2;
    }
    // 0x430be0
    *(char *)(v13 + (v4 ? -1 : 1)) = v28;
    return result2;
}

// Address range: 0x430d38 - 0x430dd8
int64_t function_430d38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x430d38
    bool v1; // 0x430d38
    bool v2 = v1;
    int64_t v3; // 0x430d38
    __asm_outsb((int16_t)a3, (char)v3);
    uint32_t v4 = (int32_t)v3; // 0x430d3b
    uint32_t v5 = *(int32_t *)(v3 - 0x21f23bbf) + v4; // 0x430d3b
    bool v6 = v2 ? v5 + (int32_t)v2 <= v4 : v5 < v4; // 0x430d3b
    uint32_t v7 = (int32_t)v3; // 0x430d41
    int32_t v8 = v6; // 0x430d41
    uint32_t v9 = v7 - 0x1694d7e1 + v8; // 0x430d41
    int32_t v10 = v9 + v8; // 0x430d41
    int64_t result = v9; // 0x430d41
    if (((v10 ^ v7) & (v10 ^ -0x80000000)) < 0) {
        // 0x430d48
        return result;
    }
    // 0x430d67
    if (llvm_ctpop_i8((char)v9) % 2 != 0) {
        // 0x430d48
        return result & 0xffffff00 | (int64_t)((v9 + 148) % 256);
    }
    // 0x430dcb
    if (v9 != 0 && !((v6 ? v9 <= v7 : v7 > 0x1694d7e0))) {
        // 0x430dce
        return v3 & 0xffffffff;
    }
    // 0x430d48
    return result;
}

// Address range: 0x430e2c - 0x430e2f
int64_t function_430e2c(void) {
    // 0x430e2c
    int64_t result; // 0x430e2c
    return result;
}

// Address range: 0x430e55 - 0x430e58
int64_t function_430e55(int64_t a1) {
    // 0x430e55
    int64_t result; // 0x430e55
    return result;
}

// Address range: 0x430e90 - 0x430e92
int64_t function_430e90(void) {
    // 0x430e90
    int64_t v1; // 0x430e90
    return function_430f06(v1, v1, v1, v1);
}

// Address range: 0x430edb - 0x430edc
int64_t function_430edb(void) {
    // 0x430edb
    int64_t result; // 0x430edb
    return result;
}

// Address range: 0x430ef3 - 0x430ef6
int64_t function_430ef3(int64_t a1) {
    // 0x430ef3
    return function_430edb();
}

// Address range: 0x430f06 - 0x430f39
int64_t function_430f06(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x430f06
    int64_t v1; // 0x430f06
    int64_t result = v1;
    bool v2; // 0x430f06
    if ((a4 & -0xff01 || (int64_t)&g2) != 1 == v2) {
        // 0x430f37
        return result;
    }
    // 0x430f0a
    return (result + 65) % 256 | result & -256;
}

// Address range: 0x430f39 - 0x430f3a
int64_t function_430f39(int64_t a1) {
    // 0x430f39
    int64_t result; // 0x430f39
    return result;
}

// Address range: 0x430f6d - 0x430f70
int64_t function_430f6d(int64_t a1) {
    // 0x430f6d
    int64_t result; // 0x430f6d
    return result;
}

// Address range: 0x430fd9 - 0x430fdb
int64_t function_430fd9(void) {
    // 0x430fd9
    int64_t result; // 0x430fd9
    return result;
}

// Address range: 0x430fdd - 0x430fee
int64_t function_430fdd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x430fdd
    int64_t v1; // 0x430fdd
    bool v2; // 0x430fdd
    __asm_out((int16_t)a3, (char)(v1 + 23 + (int64_t)v2));
    return function_ffffffff988441b5();
}

// Address range: 0x430ff0 - 0x430ff1
int64_t function_430ff0(void) {
    // 0x430ff0
    int64_t result; // 0x430ff0
    return result;
}

// Address range: 0x43102c - 0x431053
int64_t function_43102c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43102c
    if (*(int32_t *)(a3 + 117) >= (int32_t)a4) {
        function_430ff0();
    }
    // 0x43103b
    return (int64_t)(*(int32_t *)0x210eb54bc008a897 & -0xff01 ^ 0x34c3ae75);
}
