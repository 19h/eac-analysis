/*
 * Targeted RetDec C for native executable gap queue batch 1465.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x385630-0x385830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x385830-0x385a30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x385a30-0x385c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x385c30-0x385e30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x385e30-0x386030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x386030-0x386230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x386230-0x386394 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39cdb1-0x39cfb1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39cfb1-0x39d1b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c4ddd-0x3c4fdd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c4fdd-0x3c51dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c51dd-0x3c53dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c53dd-0x3c55dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c55dd-0x3c57dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c57dd-0x3c59dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c59dd-0x3c5b46 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_17959ed();
int64_t function_1f776364();
int64_t function_385630(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_385732(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38584f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38598e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_385b72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_385c93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_385df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_385fa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_386102(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_386347(void);
int64_t function_39cdb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39ce96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39cfd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c4ddd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5);
int64_t function_3c4e43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c4f9f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c50f4(void);
int64_t function_3c51ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c526d(int64_t a1, int64_t a2);
int64_t function_3c5297(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c53e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c5486(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c548e(void);
int64_t function_3c5505(void);
int64_t function_3c5520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c56d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c57f3(void);
int64_t function_3c584d(int64_t a1);
int64_t function_3c585b(int64_t a1, int64_t a2);
int64_t function_3c5890(int64_t a1);
int64_t function_3c58d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c5908(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c5964(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c59e2(void);
int64_t function_3c59f2(int64_t a1, int64_t a2);
int64_t function_3c5a08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3c5a6e(int64_t a1);
int64_t function_3c5ad9(void);
int64_t function_3c5af5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c5b39(void);
int64_t function_7d656986();
int64_t function_c4258();
int64_t function_c823b();
int64_t function_cc59c();
int64_t function_cf3c7();
int64_t function_ffffffffb5cc55f9();
int64_t function_ffffffffcbba5c13();
int64_t unknown_32b14863();
int64_t unknown_3a5f1b97();
int64_t unknown_3deaa3f6();
int64_t unknown_40173076();
int64_t unknown_44b8eba0();
int64_t unknown_50bd6fb();
int64_t unknown_6fcaafd8();
int64_t unknown_7d3abf8a();
int64_t unknown_ff4d14();
int64_t unknown_ffffffff8ed658bb();
int64_t unknown_ffffffff913d8ef9();
int64_t unknown_ffffffffa3e659e8();
int64_t unknown_ffffffffaa37793d();
int64_t unknown_ffffffffbe3ac52b();
int64_t unknown_ffffffffcb2eb2c8();
int64_t unknown_ffffffffe0b13e81();
int64_t unknown_ffffffffece7d827();

// Address range: 0x385630 - 0x385732
int64_t function_385630(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x385630
    bool v1; // 0x385630
    bool v2 = v1;
    int64_t v3 = a4;
    int64_t v4; // 0x385630
    if (true != !v2 || !v2) {
        // 0x385632
        return true != !v2 ? v4 : a4;
    }
    int64_t v5 = (int64_t)&v3; // 0x38569f
    int64_t v6 = v5 + 16; // 0x3856a5
    v3 = a4;
    *(int64_t *)(v5 + 32) = a4;
    int64_t * v7 = (int64_t *)(v5 + 8); // 0x3856ed
    int64_t v8 = *v7; // 0x3856ed
    v3 = v8;
    *(int64_t *)(v5 - 8) = v8;
    *v7 = *(int64_t *)v6;
    v3 = v6;
    return function_cc59c(a1, a2, a3, v4, v4, v4, v4 ^ 36);
}

// Address range: 0x385732 - 0x38584f
int64_t function_385732(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x385732
    int64_t v1; // 0x385732
    return function_cc59c(a1, a2, a3, a4, a5, v1, 0x2eb4f7dd);
}

// Address range: 0x38584f - 0x38598e
int64_t function_38584f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38584f
    int64_t v1; // 0x38584f
    return function_cc59c(a1, a2, a3, a4, a5, v1, 0x1176d5e9);
}

// Address range: 0x38598e - 0x385b72
int64_t function_38598e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x38598e
    int64_t v1; // bp-32, 0x38598e
    int64_t v2 = (int64_t)&v1; // 0x385a1b
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x385a35
    *v3 = a5;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x385a46
    int64_t v5 = *v3; // 0x385a52
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x385a54
    *v3 = v6;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x385a64
    *v7 = a2;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x385a76
    *v8 = a1;
    *(int64_t *)(v2 - 40) = a3;
    *v4 = v2;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x385abd
    *v8 = v6;
    *v9 = v6;
    *v4 = a4;
    *v7 = v5;
    *(int64_t *)(v2 + 16) = *v9;
    *v7 = v2;
    int64_t v10 = *v4; // 0x385b3a
    *v8 = v10;
    *v7 = *v3;
    *v4 = v2;
    return function_cc59c(*v8, *v7, a3, v10, v5, a6, 0x37aeff);
}

// Address range: 0x385b72 - 0x385c93
int64_t function_385b72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x37b1d3; // bp-32, 0x385c0c
    int64_t v2 = (int64_t)&v1; // 0x385c18
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x385c45
    *v3 = a7;
    *(int64_t *)(v2 + 16) = v1;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x385c53
    *v4 = 0x726de1a7;
    *v3 = 0x37b1d3;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x385c63
    int64_t v6 = *v5; // 0x385c63
    *v4 = v6;
    *v5 = v6;
    v1 = v2 + 24;
    *v4 = *v5;
    return function_cc59c(a1, a2, a3, a4, a5, a6, 0x5e819bb4);
}

// Address range: 0x385c93 - 0x385df0
int64_t function_385c93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x385c93
    bool v1; // 0x385c93
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x385c93
    int64_t v3 = v2; // bp-48, 0x385d2e
    int64_t v4 = (int64_t)&v3; // 0x385d71
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x385d79
    *v5 = a4;
    *v5 = v2;
    *(int64_t *)(v4 + 16) = v3;
    v3 = 0x70081457;
    *v5 = 0x190c4381;
    *(int64_t *)(v4 - 16) = a2;
    *(int64_t *)(v4 + 32) = v3;
    int64_t * v6 = (int64_t *)(v4 + 8); // 0x385dbb
    int64_t v7 = *v6; // 0x385dbb
    v3 = v7;
    *v5 = v7;
    *v6 = v4 + 24;
    int64_t v8; // 0x385c93
    return function_cc59c(v8, a2, a3, *v5, a5, v8, 0x1e0722eb);
}

// Address range: 0x385df0 - 0x385fa6
int64_t function_385df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x385df0
    int64_t v1; // bp-32, 0x385df0
    int64_t v2 = (int64_t)&v1; // 0x385e83
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x385e8f
    int64_t v4 = v2 - 8; // 0x385e8f
    int64_t * v5 = (int64_t *)v4; // 0x385e8f
    *v5 = v3;
    int64_t v6 = v2 - 16; // 0x385e93
    int64_t * v7 = (int64_t *)v6; // 0x385e93
    *v7 = a3;
    int64_t v8 = v2 - 24; // 0x385e9f
    int64_t * v9 = (int64_t *)v8; // 0x385e9f
    *v9 = a5;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x385ec0
    *v10 = v3;
    *v7 = v2;
    int64_t * v11 = (int64_t *)(v2 + 8); // 0x385ed9
    int64_t v12 = *v11; // 0x385ed9
    *v7 = v12;
    *v9 = a6;
    *v10 = v3;
    *v9 = v4;
    *v11 = v3;
    *v10 = v8;
    *v9 = v6;
    *v7 = v12;
    *(int64_t *)(v2 + 24) = *v5;
    *v5 = v1;
    *v7 = v2;
    *v5 = v1;
    *v7 = v2;
    return function_cc59c(a1, a2, *v7, a4, *v9, *v9, 0x3515549f);
}

// Address range: 0x385fa6 - 0x386102
int64_t function_385fa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x385fa6
    int64_t v1; // bp-40, 0x385fa6
    int64_t v2 = (int64_t)&v1; // 0x386024
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x386034
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x386037
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x38603b
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x386047
    *v6 = a5;
    *v5 = v2;
    int64_t v7 = *(int64_t *)(v2 + 8); // 0x38605d
    *v5 = v7;
    *v6 = v7;
    int64_t v8 = v2 - 32; // 0x38606d
    int64_t * v9 = (int64_t *)v8; // 0x38606d
    *v9 = a4;
    int64_t v10 = *v6; // 0x38607c
    *v9 = v8;
    *v6 = v4;
    v1 = *v5;
    *(int64_t *)(v2 - 40) = v10;
    *v5 = v10;
    *(int64_t *)(v2 + 16) = v10;
    int64_t v11 = *v3; // 0x3860c2
    *v5 = v11;
    *v6 = v11;
    *v3 = v1;
    *v5 = v2;
    int64_t v12; // 0x385fa6
    return function_cc59c(a1, a2, a3, a4, a5, a6, v12);
}

// Address range: 0x386102 - 0x38625d
int64_t function_386102(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x386102
    int64_t v1; // bp-32, 0x386102
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x386102
    bool v3; // 0x386102
    return function_cc59c(a1, v2, a3, a4, a5, v2, 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2);
}

// Address range: 0x386347 - 0x386348
int64_t function_386347(void) {
    // 0x386347
    int64_t result; // 0x386347
    return result;
}

// Address range: 0x39cdb1 - 0x39ce96
int64_t function_39cdb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39cdb1
    int64_t v1; // bp-16, 0x39cdb1
    int64_t v2 = (int64_t)&v1; // 0x39ce60
    v1 = a2;
    *(int64_t *)(v2 - 8) = v2 + 16;
    *(int64_t *)(v2 - 16) = v1;
    return function_cf3c7(a1, v1, a3, a4);
}

// Address range: 0x39ce96 - 0x39cfd2
int64_t function_39ce96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ce96
    int64_t v1; // bp-48, 0x39ce96
    v1 = (int64_t)&v1;
    return function_cf3c7(a1, a2, a3, a4);
}

// Address range: 0x39cfd2 - 0x39d101
int64_t function_39cfd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x7c31b2c5; // bp-32, 0x39d046
    int64_t v2 = (int64_t)&v1; // 0x39d075
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x39d07d
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x39d081
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x39d084
    *v3 = 0x4193e1b;
    *v5 = a5;
    *v4 = a5;
    int64_t v6 = v2 + 8; // 0x39d0a9
    *(int64_t *)v6 = *v3;
    *v3 = 0x58d3478f;
    *v4 = 0x213c7c2a;
    *v5 = a5;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v6;
    *v3 = v1;
    *v4 = v1;
    return function_cf3c7(a1, a2, a3, 0x39bdf8);
}

// Address range: 0x3c4ddd - 0x3c4e43
int64_t function_3c4ddd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5) {
    // 0x3c4ddd
    int64_t v1; // 0x3c4ddd
    char * v2 = (char *)(a1 + 20 + 4 * v1); // 0x3c4ddd
    *v2 = *v2 + (char)a4;
    int64_t v3 = a5; // 0x3c4de3
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x3c4de7
    *v4 = v1 & -184;
    int64_t * v5 = (int64_t *)v3; // 0x3c4dea
    int64_t v6 = v3 + 16; // 0x3c4dea
    *(int64_t *)v6 = *v5;
    *v5 = 0x6b76cbb1;
    *(int64_t *)(v3 + 32) = *v5;
    *v4 = v3;
    *v5 = v6;
    int64_t v7 = *(int64_t *)(v3 + 8); // 0x3c4e25
    *v5 = v7;
    *v4 = v7;
    return function_c823b(a1, a2);
}

// Address range: 0x3c4e43 - 0x3c4f9f
int64_t function_3c4e43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3c4e43
    int64_t v1; // bp-48, 0x3c4e43
    v1 = (int64_t)&v1 + 16;
    return function_c823b(a1, a2);
}

// Address range: 0x3c4f9f - 0x3c50f4
int64_t function_3c4f9f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c4f9f
    return function_c823b(a1, a2);
}

// Address range: 0x3c50f4 - 0x3c50f9
int64_t function_3c50f4(void) {
    // 0x3c50f4
    return function_3c57f3();
}

// Address range: 0x3c51ac - 0x3c526c
int64_t function_3c51ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x3c51ac
    char * v4 = (char *)(a4 + 0x7d829f20 + v3); // 0x3c51ae
    unsigned char v5 = *v4; // 0x3c51ae
    unsigned char v6 = (char)(v3 / 256); // 0x3c51ae
    unsigned char v7 = v5 + v6; // 0x3c51ae
    *v4 = v7;
    int64_t v8 = unknown_ffffffff8ed658bb(); // 0x3c51b5
    if (v7 < v5 || v7 == 0) {
        int64_t v9 = unknown_ffffffffcb2eb2c8(); // 0x3c51c2
        *(int32_t *)v1 = *(int32_t *)&v1 / 16;
        int32_t * v10 = (int32_t *)v9; // 0x3c51cb
        uint32_t v11 = *v10; // 0x3c51cb
        *v10 = v11 / 0x10000000 | 16 * v11;
        int32_t * v12 = (int32_t *)(v1 - 45); // 0x3c51cd
        *v12 = -*v12;
        *(char *)v2 = *(char *)&v2 + (char)(v1 / 256);
        int32_t * v13 = (int32_t *)(a1 + 0x32a473d1); // 0x3c51d4
        *v13 = *v13 + (int32_t)v3;
        __asm_in((int16_t)v1);
        *(char *)0xc7660d04 = 4;
        unknown_ffffffffa3e659e8();
        int64_t v14 = 256 * (int64_t)(__readgsbyte(v3 - 0x17bac3fd) | 13) | 0xc7660004; // 0x3c51e9
        int32_t * v15 = (int32_t *)(v14 - 11); // 0x3c51f0
        *v15 = *v15 + (int32_t)v14;
        unknown_ffffffff913d8ef9();
        return v1 & 0xffffffff;
    }
    uint64_t v16 = 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 + v6 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v7) % 2 == 0)) | 512; // 0x3c51ba
    int64_t v17 = v16 | v8 & -0xff01; // 0x3c51ba
    __asm_rcl(*(int32_t *)v17);
    char * v18 = (char *)(2 * v3 + 0x7fb2308c + v17); // 0x3c5201
    *v18 = *v18 | (char)(v16 / 256);
    return function_3c51ac(a1, v2, v1, 0xc7660d04, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x3c526d - 0x3c5297
int64_t function_3c526d(int64_t a1, int64_t a2) {
    unsigned char v1 = 119 - *(char *)0x7b46119a; // 0x3c5274
    int64_t v2 = (int64_t)v1 | 0x7b461100; // 0x3c5274
    int16_t v3 = v2; // 0x3c5281
    int64_t v4; // 0x3c526d
    __asm_outsb(v3, (char)v4);
    *(char *)a1 = __asm_insb(v3);
    char * v5 = (char *)v2; // 0x3c5289
    char v6 = *v5; // 0x3c5289
    *v5 = v6 + 48;
    int32_t v7 = *(int32_t *)0x4b9c303a; // 0x3c528b
    *(int32_t *)0x4b9c303a = v7 - (int32_t)v4 + (int32_t)((v6 ^ -16) < 48);
    unsigned char v8 = *(char *)-0x6fc9bb6c; // 0x3c528d
    *(char *)-0x6fc9bb6c = v8 + 48;
    return (int64_t)(v1 - 34 + (char)(v8 > 207)) | 0x7b461100;
}

// Address range: 0x3c5297 - 0x3c53a1
int64_t function_3c5297(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c5299
    return function_7d656986();
    // 0x3c5301
    int64_t v1; // 0x3c5297
    __asm_out((int16_t)a3, (int32_t)v1);
    *(int32_t *)a2 = (int32_t)a4 + (int32_t)a2;
    *(int32_t *)0x5a238111 = *(int32_t *)0x5a238111 + (int32_t)a1;
    unknown_ffffffffece7d827();
    uint16_t v2 = *(int16_t *)(unknown_ffffffffaa37793d() + 0xf001e864); // 0x3c533c
    int32_t * v3 = (int32_t *)((a4 & -0x10000 | (int64_t)v2) + 5); // 0x3c5345
    *v3 = *v3 - 0xffe17d6;
    __asm_in_133(-126);
    *(char *)0x723e3b6c = *(char *)0x723e3b6c - 101;
    bool v4; // 0x3c5297
    int32_t * v5 = (int32_t *)(8 * v1 + a1 + (v4 ? -1 : 1)); // 0x3c5351
    *v5 = *v5 + 1;
    int64_t v6 = __asm_int3(); // 0x3c535e
    __asm_in_133(58);
    __asm_int3();
    __asm_in_134(-20);
    char * v7 = (char *)(2 * v1); // 0x3c536d
    char v8 = v1 / 256; // 0x3c536d
    *v7 = *v7 + v8 + (char)(((int32_t)v6 ^ -32) < 0x1801e820);
    unknown_40173076();
    *(char *)0x13d61fa62 = *(char *)0x13d61fa62 | v8;
    __asm_out_135(-16, (char)unknown_ffffffffe0b13e81());
    unknown_7d3abf8a();
    unknown_3a5f1b97();
    return unknown_44b8eba0();
}

// Address range: 0x3c53e1 - 0x3c5411
int64_t function_3c53e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a4; // 0x3c53e1
    *(int32_t *)-0xfc4a273 = *(int32_t *)-0xfc4a273 + v1;
    int64_t v2; // 0x3c53e1
    __asm_outsd((int16_t)a3, (int32_t)v2);
    unsigned char v3 = *(char *)(a2 + 86) | (char)v2; // 0x3c53e8
    int64_t v4 = v2 & -256 | (int64_t)v3; // 0x3c53e8
    int32_t * v5 = (int32_t *)(2 * a4 + a1); // 0x3c53f0
    *v5 = *v5 + v1;
    char * v6 = (char *)v4; // 0x3c53f3
    *v6 = *v6 - v3;
    char v7 = *(char *)0x290b8f7f; // 0x3c53f5
    char * v8 = (char *)(a2 + 0x2601e8f8); // 0x3c53fb
    *v8 = *v8 + (char)(v2 / 256);
    *(char *)0x55537e69 = *(char *)0x55537e69 | 28;
    int64_t v9 = v4 & 0xffffffff; // 0x3c5409
    *(int32_t *)a1 = *(int32_t *)v9;
    bool v10; // 0x3c53e1
    int64_t v11 = v10 ? -4 : 4; // 0x3c540b
    return function_ffffffffb5cc55f9(v11 + a1, v9 + v11, 0xe8ed1c62, a4 & -256 | (int64_t)(v7 & (char)a4));
}

// Address range: 0x3c5486 - 0x3c548b
int64_t function_3c5486(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c5486
    int64_t result; // 0x3c5486
    return result;
}

// Address range: 0x3c548e - 0x3c548f
int64_t function_3c548e(void) {
    // 0x3c548e
    int64_t result; // 0x3c548e
    return result;
}

// Address range: 0x3c5505 - 0x3c5506
int64_t function_3c5505(void) {
    // 0x3c5505
    int64_t result; // 0x3c5505
    return result;
}

// Address range: 0x3c5520 - 0x3c56d5
int64_t function_3c5520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x3c5520
    int64_t v3 = a4 - a2 + (int64_t)((int32_t)v2 < 4); // 0x3c5523
    int32_t * v4 = (int32_t *)(a2 - 94); // 0x3c5527
    unsigned char v5 = (char)v3 % 32; // 0x3c552a
    uint64_t v6 = v2 + 0xfffffffc & 0xffffffff;
    *v4 = *v4 + (int32_t)v2;
    unsigned char v7; // 0x3c552a
    if (v5 != 0) {
        v7 = *(char *)&v1;
        *(char *)v1 = v7 >> v5 | v7 << 8 - v5;
    }
    unsigned char v8 = *(char *)-0x174f5005; // 0x3c552c
    char v9 = v8 / 128; // 0x3c552c
    *(char *)-0x174f5005 = v9 | 2 * v8;
    int32_t v10 = *(int32_t *)(v6 - 0x7251df88); // 0x3c5533
    int64_t v11; // 0x3c5520
    uint32_t v12 = v10 + (int32_t)(v11 - v6) + (int32_t)(v9 != 0); // 0x3c5533
    while (v12 < 0) {
        // 0x3c553b
        v6 = function_3c5505();
        *v4 = *v4 + (int32_t)v2;
        if (v5 != 0) {
            v7 = *(char *)&v1;
            *(char *)v1 = v7 >> v5 | v7 << 8 - v5;
        }
        v8 = *(char *)-0x174f5005;
        v9 = v8 / 128;
        *(char *)-0x174f5005 = v9 | 2 * v8;
        v10 = *(int32_t *)(v6 - 0x7251df88);
        v12 = v10 + (int32_t)((int64_t)v12 - v6) + (int32_t)(v9 != 0);
    }
    int64_t v13 = v3 & 0xffffffff; // 0x3c5523
    int32_t * v14 = (int32_t *)(a2 - 119); // 0x3c553d
    *v14 = *v14 + v12;
    char v15 = *(char *)v13; // 0x3c5540
    int32_t v16 = *(int32_t *)(a2 + 0x11775b4e); // 0x3c554a
    int32_t v17 = *(int32_t *)(v1 - 24); // 0x3c5550
    uint64_t v18 = 0x100000000 * (256 * (int64_t)((char)(v6 / 256) - v15) | v6 & 0xffff00ff) / 0x100000000 * (int64_t)v17; // 0x3c5550
    uint64_t v19 = v18 / 0x100000000; // 0x3c5550
    int32_t * v20 = (int32_t *)((int64_t)(v16 + (int32_t)a1) - 6); // 0x3c5553
    *v20 = *v20 + (int32_t)v19;
    uint32_t v21 = *(int32_t *)((v18 & 0xffffffff) + (8 * v2 | 3)); // 0x3c5556
    char v22 = *(char *)v19; // 0x3c555a
    int64_t v23 = 256 * (int64_t)(v22 & (char)(v18 / 0x10000000000)) | v19 & 0xffff00ff; // 0x3c555a
    v1 = v23;
    unknown_32b14863(v21);
    int32_t * v24 = (int32_t *)((4 * v2 & 0x3fffffc00 | 176) + v2); // 0x3c5567
    *v24 = *v24 + (int32_t)v2;
    __asm_iretd();
    char * v25 = (char *)(v23 + 0x1e80099); // 0x3c556d
    *v25 = *v25 ^ (char)v19;
    int64_t v26 = 0x30e1ffd9; // bp-32, 0x3c55de
    int64_t v27 = (int64_t)&v26; // 0x3c560e
    int64_t * v28 = (int64_t *)(v27 + 16); // 0x3c5616
    int64_t v29 = *v28; // 0x3c5616
    *(int64_t *)(v27 - 8) = v29;
    int64_t * v30 = (int64_t *)(v27 - 16); // 0x3c561a
    *v30 = v13;
    *(int64_t *)(v27 - 24) = v27;
    v26 = a5;
    *(int64_t *)(v27 - 32) = v29 - 0x3fdbec52;
    *v28 = v29;
    *v30 = v27;
    return function_c4258((int64_t)v21, a2, v1, *v30, v2, v2, v26);
}

// Address range: 0x3c56d5 - 0x3c57f3
int64_t function_3c56d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3c56d5
    return function_c4258(a1, a2, a3, a4, a5, a6, 0x330e1756);
}

// Address range: 0x3c57f3 - 0x3c57f8
int64_t function_3c57f3(void) {
    // 0x3c57f3
    int64_t result; // 0x3c57f3
    return result;
}

// Address range: 0x3c584d - 0x3c584e
int64_t function_3c584d(int64_t a1) {
    // 0x3c584d
    int64_t result; // 0x3c584d
    return result;
}

// Address range: 0x3c585b - 0x3c585f
int64_t function_3c585b(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 40); // 0x3c585b
    int64_t result; // 0x3c585b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3c5890 - 0x3c5893
int64_t function_3c5890(int64_t a1) {
    // 0x3c5890
    int64_t result; // 0x3c5890
    bool v1; // 0x3c5890
    if (v1) {
        result = function_3c584d((int64_t)&g1);
    }
    // 0x3c5892
    return result;
}

// Address range: 0x3c58d2 - 0x3c5907
int64_t function_3c58d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    unknown_6fcaafd8();
    uint32_t v3 = (int32_t)a4 % 32; // 0x3c58da
    int64_t v4; // 0x3c58d2
    char v5; // 0x3c58d2
    if (v3 == 0) {
        // 0x3c58d2
        v4 = a3;
        v5 = a3;
    } else {
        uint32_t v6 = (int32_t)a3;
        *(int32_t *)a3 = v6 << 32 - v3 | v6 >> v3;
        v4 = v1;
        v5 = *(char *)&v1;
    }
    unsigned char v7 = v5; // 0x3c58dc
    *(char *)v4 = v7 / 2 | 128 * v7;
    uint64_t v8 = v2 ^ a4;
    unknown_3deaa3f6();
    int32_t * v9 = (int32_t *)(v8 & 0xffffffff); // 0x3c58f9
    uint32_t v10 = *v9; // 0x3c58f9
    int64_t v11; // 0x3c58d2
    uint32_t v12 = v10 + (int32_t)v11; // 0x3c58f9
    *v9 = v12;
    char v13 = *(char *)&v2; // 0x3c58fc
    *(char *)v2 = v13 + (char)(v8 / 256) + (char)(v12 < v10);
    return -24;
}

// Address range: 0x3c5908 - 0x3c592a
int64_t function_3c5908(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3c5908
    int64_t v2; // 0x3c5908
    if (v1 != 0) {
        char * v3 = (char *)(v2 + 0x893379e); // 0x3c5908
        *v3 = *v3 >> v1;
    }
    unknown_ff4d14();
    int32_t * v4 = (int32_t *)(5 * a1); // 0x3c5918
    *v4 = 0x8000000 * *v4;
    uint64_t result = unknown_ffffffffbe3ac52b(); // 0x3c591f
    char * v5 = (char *)(v2 - 81); // 0x3c5926
    *v5 = *v5 & (char)(result / 256);
    return result;
}

// Address range: 0x3c5964 - 0x3c5987
int64_t function_3c5964(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c5964
    int64_t v1; // 0x3c5964
    uint64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)a2);
    char * v3 = (char *)(a2 + 0x2e470fe5); // 0x3c5970
    *v3 = *v3 + (char)(v2 / 256);
    int64_t v4 = (v2 + 183) % 256 | v2 & -256; // 0x3c5976
    int32_t * v5 = (int32_t *)(v1 - 128); // 0x3c597a
    *v5 = *v5 + (int32_t)v4;
    float80_t v6; // 0x3c5964
    *(int64_t *)(v4 + v1) = (int64_t)v6;
    return function_17959ed();
}

// Address range: 0x3c59e2 - 0x3c59e3
int64_t function_3c59e2(void) {
    // 0x3c59e2
    int64_t result; // 0x3c59e2
    return result;
}

// Address range: 0x3c59f2 - 0x3c5a07
int64_t function_3c59f2(int64_t a1, int64_t a2) {
    // 0x3c59f2
    int64_t result; // 0x3c59f2
    return result;
}

// Address range: 0x3c5a08 - 0x3c5a19
int64_t function_3c5a08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3c5a08
    int64_t v1; // 0x3c5a08
    int64_t v2 = v1;
    unsigned char v3 = (char)a4; // 0x3c5a08
    bool v4; // 0x3c5a08
    *(char *)v2 = (char)v2 + v3 + (char)v4;
    int64_t v5; // 0x3c5a08
    int64_t v6 = v5; // 0x3c5a11
    v5 = a3 & 0xffffffff;
    int64_t v7; // 0x3c5a08
    char v8 = *(char *)&v7; // 0x3c5a12
    *(char *)a4 = (char)v6 + (char)(v3 < (char)(a4 / 256)) + v8;
    int32_t v9 = *(int32_t *)&v5 | (int32_t)a4; // 0x3c5a14
    *(int32_t *)(v6 & 0xffffffff) = v9;
    int64_t result; // 0x3c5a08
    if (v9 == 0) {
        int64_t v10 = function_3c59e2(); // 0x3c5a16
        v5 = v10;
        result = v10;
    } else {
        // 0x3c5a08
        result = v5;
    }
    // 0x3c5a18
    return result;
}

// Address range: 0x3c5a6e - 0x3c5a6f
int64_t function_3c5a6e(int64_t a1) {
    // 0x3c5a6e
    int64_t result; // 0x3c5a6e
    return result;
}

// Address range: 0x3c5ad9 - 0x3c5ade
int64_t function_3c5ad9(void) {
    // 0x3c5ad9
    return function_1f776364();
}

// Address range: 0x3c5af5 - 0x3c5b38
int64_t function_3c5af5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_50bd6fb(); // 0x3c5af5
    int64_t v2; // 0x3c5af5
    int32_t v3 = *(int32_t *)(v2 + 0x7d51cc6e); // 0x3c5afa
    bool v4; // 0x3c5af5
    int64_t v5 = (int32_t)v4 + (int32_t)v2 + v3; // 0x3c5afa
    char v6 = *(char *)(8 * v2 + 0x7bfe401 + v1); // 0x3c5b02
    int32_t * v7 = (int32_t *)((a3 & -256 | (int64_t)(v6 & (char)a3)) + 0x286ea44d); // 0x3c5b09
    *v7 = *v7 + (int32_t)v1;
    int64_t v8 = 0; // 0x3c5b0f
    int64_t v9 = v5; // 0x3c5b0f
    int64_t v10 = v1; // 0x3c5b0f
    if (a4 != 0) {
        char v11 = *(char *)(a2 - 24); // 0x3c5b11
        v8 = 256 * (int64_t)(v11 + (char)(v1 / 256)) | v1 & 0xffff00ff;
        v9 = v5 + a4 & 0xffffffff;
        v10 = a4 & 0xffffffff;
    }
    uint64_t v12 = v10;
    char * v13 = (char *)(a1 + 114); // 0x3c5b1b
    *v13 = *v13 + (char)(v12 / 256);
    char * v14 = (char *)(v9 + 0x56c12f65); // 0x3c5b26
    *v14 = *v14 + (char)(v8 / 256);
    int64_t v15 = (v12 & 0xffffff00 | 2 * v12 & 110 | 145) + v8; // 0x3c5b30
    return (v15 + 21) % 256 | v15 & 0xffffff00;
}

// Address range: 0x3c5b39 - 0x3c5b40
int64_t function_3c5b39(void) {
    // 0x3c5b39
    return function_ffffffffcbba5c13();
}
