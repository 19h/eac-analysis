/*
 * Targeted RetDec C for native executable gap queue batch 739.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x243a18-0x243c18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x243c18-0x243e18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x243e18-0x244018 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4774ee-0x4776ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4776ee-0x4778ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4778ee-0x477aee rank=- name=- kind=- bytes=- uncovered=-
 *   0x477aee-0x477cee rank=- name=- kind=- bytes=- uncovered=-
 *   0x477cee-0x477eee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_243a18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_243a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_243bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_243d79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_243e83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_243fe7(void);
int64_t function_254f3358();
int64_t function_4774ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_477511(void);
int64_t function_47753a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_477550(int64_t a1);
int64_t function_477555(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_477595(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4775b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4775d2(void);
int64_t function_4775d8(void);
int64_t function_4775fe(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47760d(int64_t a1);
int64_t function_477670(void);
int64_t function_477673(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4776dd(void);
int64_t function_4776df(void);
int64_t function_4776e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4777bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4777d2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_477830(void);
int64_t function_47783c(void);
int64_t function_47789c(void);
int64_t function_4778a3(void);
int64_t function_4778f9(void);
int64_t function_477926(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_477955(void);
int64_t function_477966(void);
int64_t function_477979(int64_t a1);
int64_t function_47799c(void);
int64_t function_4779ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_477a3d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_477afc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_477c6d(void);
int64_t function_477c8a(void);
int64_t function_477ca4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_477cee(int64_t a1);
int64_t function_477cf0(void);
int64_t function_477d48(void);
int64_t function_477d60(void);
int64_t function_477d7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_477daf(int64_t a1, int64_t a2);
int64_t function_477de9(void);
int64_t function_477e25(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4bbff08d();
int64_t function_cf3c7();
int64_t function_ffffffffed5ebe53();

// Address range: 0x243a18 - 0x243a75
int64_t function_243a18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x243a18
    return function_cf3c7((int32_t)a1 ^ a5, a2, a3, (int32_t)a4);
}

// Address range: 0x243a75 - 0x243bf8
int64_t function_243a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x243a75
    int64_t v1; // bp-48, 0x243a75
    int64_t v2 = (int64_t)&v1; // 0x243b13
    int64_t v3 = v2 + 16; // 0x243b19
    v1 = v3;
    int64_t v4 = v2 + 32; // 0x243b28
    int64_t * v5 = (int64_t *)v4; // 0x243b28
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x243b28
    v1 = v2;
    int64_t * v7 = (int64_t *)v3; // 0x243b5f
    *v7 = a7;
    *v5 = a7;
    *v6 = a2;
    *(int64_t *)(v2 + 56) = *v5;
    *v7 = *v6;
    *v6 = v4;
    int64_t v8 = *v7; // 0x243bce
    v1 = v8;
    int64_t v9 = *(int64_t *)(v2 + 24); // 0x243bd7
    *v7 = v9;
    *v6 = v9;
    return function_cf3c7((int32_t)a1, v8, a3, (int32_t)*v6);
}

// Address range: 0x243bf8 - 0x243d79
int64_t function_243bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x7a4cf00; // bp-40, 0x243c65
    int64_t v2 = (int64_t)&v1; // 0x243ca7
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x243cbe
    *v3 = 0x5b489128;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x243ccc
    bool v5; // 0x243bf8
    *v4 = 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    *(int64_t *)(v2 + 8) = *v3;
    *(int64_t *)(v2 + 32) = 0x23764e;
    int64_t v6 = v1; // 0x243cff
    v1 = a1;
    *v4 = a3;
    *(int64_t *)(v2 - 24) = v6;
    int64_t v7 = v1; // 0x243d6f
    v1 = v2 + 16;
    return function_cf3c7((int32_t)v7, a2, *v4, (int32_t)a4);
}

// Address range: 0x243d79 - 0x243e83
int64_t function_243d79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x243d79
    return function_cf3c7((int32_t)a1, a2, a3, (int32_t)a4);
}

// Address range: 0x243e83 - 0x243fda
int64_t function_243e83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x243e83
    int64_t v1; // bp-56, 0x243e83
    v1 = (int64_t)&v1 + 16;
    return function_cf3c7((int32_t)a1, a2, a3, (int32_t)a4);
}

// Address range: 0x243fe7 - 0x243fea
int64_t function_243fe7(void) {
    // 0x243fe7
    int64_t result; // 0x243fe7
    return result;
}

// Address range: 0x4774ee - 0x4774f1
int64_t function_4774ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4774ee
    int64_t result; // 0x4774ee
    return result;
}

// Address range: 0x477511 - 0x477512
int64_t function_477511(void) {
    // 0x477511
    int64_t result; // 0x477511
    return result;
}

// Address range: 0x47753a - 0x47753e
int64_t function_47753a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47753a
    return function_477595(a1, a2, a3, a4 & -256 | 124);
}

// Address range: 0x477550 - 0x477551
int64_t function_477550(int64_t a1) {
    // 0x477550
    int64_t result; // 0x477550
    return result;
}

// Address range: 0x477555 - 0x477595
int64_t function_477555(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x477555
    bool v2; // 0x477555
    if (v2) {
        // 0x477591
        return result;
    }
    char v3 = __asm_insb((int16_t)a3); // 0x477557
    char * v4 = (char *)a1; // 0x477557
    *v4 = v3;
    *v4 = *(char *)&v1;
    return result & 0x7ccda038 | 0x83325fc7;
}

// Address range: 0x477595 - 0x4775b7
int64_t function_477595(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 92); // 0x477595
    *v1 = *v1 & (int32_t)a2;
    int64_t v2; // 0x477595
    uint64_t v3 = v2 / 256; // 0x477598
    if (-1 - (char)v3 >= (char)v2) {
        // 0x477601
        return 256 * (v3 + v2) & 0xff00 | v2 & -0xff01;
    }
    int64_t result = __asm_iretd(); // 0x4775a5
    bool v4; // 0x477595
    if (a4 == 1 || (int32_t)((v4 ? 0xffffffff : 1) + a2 & v2) == 0) {
        // 0x4775ab
        return result;
    }
    char * v5 = (char *)(v2 + 0xd4a785b); // 0x4775b1
    *v5 = *v5 - (char)(v2 / 256);
    return result;
}

// Address range: 0x4775b9 - 0x4775c8
int64_t function_4775b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4775b9
    int64_t v1; // 0x4775b9
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)v1; // 0x4775b9
    bool v4; // 0x4775b9
    int32_t v5 = v4; // 0x4775b9
    uint32_t v6 = *(int32_t *)(v2 + 0x1ad50618) + v5; // 0x4775b9
    int32_t v7 = v3 - v6; // 0x4775b9
    bool v8 = v4 ? v6 != -1 | v7 - v5 > v3 : v6 > v3; // 0x4775b9
    char * v9 = (char *)(a4 - 111); // 0x4775bf
    *v9 = *v9 - (char)(v2 / 256) + (char)v8;
    return v7 | 243;
}

// Address range: 0x4775d2 - 0x4775d3
int64_t function_4775d2(void) {
    // 0x4775d2
    int64_t result; // 0x4775d2
    return result;
}

// Address range: 0x4775d8 - 0x4775de
int64_t function_4775d8(void) {
    // 0x4775d8
    return function_4775d2();
}

// Address range: 0x4775fe - 0x477601
int64_t function_4775fe(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 82); // 0x4775fe
    int64_t result; // 0x4775fe
    bool v2; // 0x4775fe
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    return result;
}

// Address range: 0x47760d - 0x47760e
int64_t function_47760d(int64_t a1) {
    // 0x47760d
    int64_t result; // 0x47760d
    return result;
}

// Address range: 0x477670 - 0x477671
int64_t function_477670(void) {
    // 0x477670
    int64_t result; // 0x477670
    return result;
}

// Address range: 0x477673 - 0x477675
int64_t function_477673(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x477673
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x477673
    return result;
}

// Address range: 0x4776dd - 0x4776de
int64_t function_4776dd(void) {
    // 0x4776dd
    int64_t result; // 0x4776dd
    return result;
}

// Address range: 0x4776df - 0x4776e0
int64_t function_4776df(void) {
    // 0x4776df
    int64_t result; // 0x4776df
    return result;
}

// Address range: 0x4776e1 - 0x4777a5
int64_t function_4776e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4776e1
    int64_t result; // 0x4776e1
    bool v1; // 0x4776e1
    if (v1) {
        // 0x47770e
        return result;
    }
    // 0x4776e3
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x4777bd - 0x4777d2
int64_t function_4777bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4777bd
    int64_t v1; // 0x4777bd
    return (int64_t)(0x10000 * (int32_t)v1 >> 16 & -256) | (int64_t)__asm_in_135((int16_t)a3);
}

// Address range: 0x4777d2 - 0x47782c
int64_t function_4777d2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x4777d2
    bool v2; // 0x4777d2
    if (v1 != 0 != v2) {
        // 0x4777d4
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return __asm_int3() + 0xda8f13f & 0xffffffff;
    }
    // 0x477802
    int64_t v3; // 0x4777d2
    __asm_outsd((int16_t)a3, (int32_t)v3);
    char * v4 = (char *)(a3 - 0x66bfb7a0); // 0x477804
    *v4 = *v4 ^ (char)(a3 / 256);
    unsigned char v5 = *(char *)0x5a1445d67964309a; // 0x477814
    int64_t * v6 = (int64_t *)(v3 - 25); // 0x47781f
    *v6 = *v6 + v1;
    return (v3 & 0xffff00ff | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512) + 0xd07f5818 & 0xffff0000 | (int64_t)v5 | 0x2d00;
}

// Address range: 0x477830 - 0x477833
int64_t function_477830(void) {
    // 0x477830
    int64_t result; // 0x477830
    return result;
}

// Address range: 0x47783c - 0x47783d
int64_t function_47783c(void) {
    // 0x47783c
    int64_t result; // 0x47783c
    return result;
}

// Address range: 0x47789c - 0x47789f
int64_t function_47789c(void) {
    // 0x47789c
    return function_47783c();
}

// Address range: 0x4778a3 - 0x4778a9
int64_t function_4778a3(void) {
    // 0x4778a3
    int64_t v1; // 0x4778a3
    return v1 + 0x268b984a & 0xffffffff;
}

// Address range: 0x4778f9 - 0x4778fc
int64_t function_4778f9(void) {
    // 0x4778f9
    int64_t result; // 0x4778f9
    return result;
}

// Address range: 0x477926 - 0x477937
int64_t function_477926(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x477926
    int64_t result; // 0x477926
    char * v1 = (char *)(result + 0x7ab4547f); // 0x477928
    unsigned char v2 = *v1; // 0x477928
    unsigned char v3 = v2 + (char)(a3 / 256); // 0x477928
    *v1 = v3;
    int64_t v4; // 0x477926
    int32_t v5 = *(int32_t *)&v4; // 0x47792e
    *(int32_t *)a2 = v5 + (int32_t)a1 + (int32_t)(v3 < v2);
    return result;
}

// Address range: 0x477955 - 0x477958
int64_t function_477955(void) {
    // 0x477955
    int64_t result; // 0x477955
    return result;
}

// Address range: 0x477966 - 0x477968
int64_t function_477966(void) {
    // 0x477966
    int64_t result; // 0x477966
    return result;
}

// Address range: 0x477979 - 0x47797c
int64_t function_477979(int64_t a1) {
    // 0x477979
    int64_t result; // 0x477979
    return result;
}

// Address range: 0x47799c - 0x47799e
int64_t function_47799c(void) {
    // 0x47799c
    int64_t result; // 0x47799c
    return result;
}

// Address range: 0x4779ac - 0x477a21
int64_t function_4779ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4779ac
    bool v1; // 0x4779ac
    if (v1) {
        function_477955();
    }
    int32_t result = __asm_in(-26); // 0x4779b4
    if (a4 == 1) {
        // 0x4779b8
        return result;
    }
    int64_t v2 = a3; // bp-16, 0x4779fe
    int32_t * v3 = (int32_t *)(a2 - 122); // 0x477a0e
    uint32_t v4 = *v3; // 0x477a0e
    *v3 = v4 / 0x100000 | 0x2000 * v4;
    uint32_t v5 = __asm_in(2); // 0x477a12
    int16_t v6 = a3; // 0x477a19
    __asm_out_136(v6, (char)v5);
    *(char *)a1 = __asm_insb(v6);
    *(int32_t *)a1 = v5;
    return (int64_t)&v2;
}

// Address range: 0x477a3d - 0x477aed
int64_t function_477a3d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x477a3d
    int64_t result; // 0x477a3d
    bool v1; // 0x477a3d
    *(char *)a1 = (char)result - (char)(result / 256) + (char)v1;
    if (*(char *)(a1 + 43) <= -1 - (char)result || (char)(a4 / 256) + 1 + *(char *)(result + 25) < 1) {
        // 0x477a4f
        return result;
    }
    // 0x477ab6
    int64_t v2; // 0x477a3d
    int32_t v3 = *(int32_t *)&v2;
    __asm_outsd((int16_t)a3, v3);
    int64_t v4 = v3; // 0x477ac2
    int64_t v5 = 0x743f82fd * v4; // 0x477ac2
    int32_t * v6 = (int32_t *)(result + 0x83510c9); // 0x477acc
    int64_t v7; // 0x477a3d
    int32_t v8 = (int64_t)&v7; // 0x477acc
    *v6 = *v6 - ((int32_t)(v5 != 0x743f82fd00000000 * v4 >> 32) | v8);
    int64_t v9 = v5 + 0x9d32037c; // 0x477ad2
    int32_t * v10 = (int32_t *)((v9 & 0xffffffff) - 0x5cd2b391); // 0x477ad7
    *v10 = *v10 + v8 + (int32_t)((int32_t)v5 > 0x62cdfc83);
    *(int32_t *)0x3304426a = *(int32_t *)0x3304426a | (int32_t)result;
    return v9 & 0xffffff00 | (v5 + 16) % 256;
}

// Address range: 0x477afc - 0x477c46
int64_t function_477afc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char v2 = __asm_in_134(-126); // 0x477afc
    *(char *)-0x2b758cc93bab1cb7 = v2;
    int16_t v3 = a3; // 0x477b09
    __asm_outsd(v3, (int32_t)a2);
    if ((a4 & 0xfd213c65) == 0) {
        // 0x477b38
        bool v4; // 0x477afc
        *(char *)((v4 ? -4 : 4) + a1) = *(char *)a2;
        return 0xfec81f8c;
    }
    // 0x477b51
    int64_t v5; // 0x477afc
    int64_t v6 = v5 | (int64_t)v2; // 0x477afc
    int64_t * v7 = (int64_t *)(a5 + 116); // 0x477b51
    *v7 = *v7 & v5;
    int64_t result = __asm_hlt(); // 0x477b55
    int32_t v8 = *(int32_t *)(v1 + result); // 0x477b56
    float80_t v9; // 0x477afc
    *(int32_t *)(2 * a3 + 0x3c14ace6 + v5) = (int32_t)((float80_t)v8 - v9);
    __asm_outsd(v3, *(int32_t *)&v1);
    char v10 = *(char *)(result + 39) & (char)(v5 / 256); // 0x477b6a
    if (v10 == 0 || v10 < 0 != (int16_t)v6 < 0) {
        // 0x477b93
        return result;
    }
    int32_t v11 = *(int32_t *)((v6 & 0xffffff00 | (int64_t)(v2 % 8)) - 0x3bfb0186); // 0x477b63
    int64_t v12 = -82 * v11; // 0x477b63
    *(int64_t *)(v12 - 8) = v12;
    int16_t v13 = v5 % 256 | a3 & 0xff00; // 0x477b77
    __asm_out_136(v13, 0);
    *(char *)a1 = __asm_insb(v13);
    unsigned char v14 = *(char *)(256 * (int64_t)v10 | v5 & -0xff01); // 0x477bcd
    return (result & -256 | (int64_t)v14) + 0x46773892;
}

// Address range: 0x477c6d - 0x477c70
int64_t function_477c6d(void) {
    // 0x477c6d
    int64_t result; // 0x477c6d
    return result;
}

// Address range: 0x477c8a - 0x477c8d
int64_t function_477c8a(void) {
    // 0x477c8a
    int64_t result; // 0x477c8a
    return result;
}

// Address range: 0x477ca4 - 0x477ceb
int64_t function_477ca4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result; // 0x477ca4
    if ((*(int32_t *)(a4 - 0x418ee16e) & (int32_t)result) >= 0) {
        // 0x477ce4
        return result;
    }
    // 0x477cb5
    *(char *)a1 = *(char *)&v1;
    bool v2; // 0x477ca4
    int64_t v3 = v2 ? -1 : 1; // 0x477cb5
    __asm_out_138((int16_t)a3, (int32_t)result);
    *(char *)(v3 + a1) = *(char *)(v1 + v3);
    return result;
}

// Address range: 0x477cee - 0x477cef
int64_t function_477cee(int64_t a1) {
    // 0x477cee
    int64_t result; // 0x477cee
    return result;
}

// Address range: 0x477cf0 - 0x477cf5
int64_t function_477cf0(void) {
    // 0x477cf0
    return function_ffffffffed5ebe53();
}

// Address range: 0x477d48 - 0x477d49
int64_t function_477d48(void) {
    // 0x477d48
    int64_t result; // 0x477d48
    return result;
}

// Address range: 0x477d60 - 0x477d61
int64_t function_477d60(void) {
    // 0x477d60
    int64_t result; // 0x477d60
    return result;
}

// Address range: 0x477d7f - 0x477d95
int64_t function_477d7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(2 * a4 - 0x1bfff4b1); // 0x477d7f
    int64_t v2; // 0x477d7f
    int32_t v3 = *(int32_t *)(2 * v2 + a2); // 0x477d88
    if (v3 + (int32_t)v2 != (int32_t)((char)v2 > (char)((v1 ^ (int32_t)v2) / 256))) {
        function_477d48();
    }
    // 0x477d8d
    return function_254f3358();
}

// Address range: 0x477daf - 0x477dcb
int64_t function_477daf(int64_t a1, int64_t a2) {
    // 0x477daf
    int64_t v1; // 0x477daf
    uint32_t v2 = (int32_t)v1; // 0x477daf
    int64_t v3; // 0x477daf
    if (v2 >= 0x30535937) {
        v3 = function_477d60();
    }
    // 0x477db7
    *(char *)a1 = (char)(v2 < 0x30535937) + (char)a1 - (char)(v3 / 256);
    return v3 ^ 232;
}

// Address range: 0x477de9 - 0x477dee
int64_t function_477de9(void) {
    // 0x477de9
    return function_4bbff08d();
}

// Address range: 0x477e25 - 0x477e39
int64_t function_477e25(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x477e25
    int64_t v1; // 0x477e25
    *(char *)(a3 & -256 | 176) = (char)v1;
    return v1 & 0x25ce21dc;
}
