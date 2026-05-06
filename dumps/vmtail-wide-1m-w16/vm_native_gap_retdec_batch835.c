/*
 * Targeted RetDec C for native executable gap queue batch 835.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x244a18-0x244c18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x244c18-0x244e18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x244e18-0x245018 rank=- name=- kind=- bytes=- uncovered=-
 *   0x245018-0x245218 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4786ee-0x4788ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4788ee-0x478aee rank=- name=- kind=- bytes=- uncovered=-
 *   0x478aee-0x478cee rank=- name=- kind=- bytes=- uncovered=-
 *   0x478cee-0x478eee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_244a18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_244b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_244cfa(int64_t a1, int64_t a2);
int64_t function_244e37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_244f92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4786ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_478726(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_478790(int64_t a1);
int64_t function_47879f(void);
int64_t function_4788a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4788d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_478922(void);
int64_t function_478945(void);
int64_t function_47894e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_47897b(void);
int64_t function_47898b(void);
int64_t function_478993(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4789b8(int64_t a1, int64_t a2, int64_t result);
int64_t function_4789ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4789f0(uint64_t a1);
int64_t function_478a29(void);
int64_t function_478a45(void);
int64_t function_478a5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_478a62(int64_t a1);
int64_t function_478a8c(void);
int64_t function_478acf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_478b37(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_478ba1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_478c27(void);
int64_t function_478c33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_478d04(void);
int64_t function_478d29(void);
int64_t function_478d36(int64_t a1, int64_t a2, uint64_t result, int64_t a4, int64_t a5);
int64_t function_478dc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_478de5(void);
int64_t function_478df3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_478e4d(void);
int64_t function_478e58(int64_t a1);
int64_t function_478e5f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_478eb0(int64_t a1);
int64_t function_478ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_478ed6(void);
int64_t function_478ee4(int64_t a1);
int64_t function_66f2e30f();
int64_t function_7c556d0f();
int64_t function_cf3c7();
int64_t function_ffffffff8079d3a8();
int64_t function_ffffffffd9c1f791();
int64_t function_fffffffff86f1541();
int64_t function_fffffffffa86e591();

// Address range: 0x244a18 - 0x244b60
int64_t function_244a18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4; // bp-16, 0x244a50
    int64_t v2 = (int64_t)&v1; // 0x244ad1
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x244ad9
    *v3 = a4;
    int64_t v4 = v2 - 16; // 0x244add
    int64_t * v5 = (int64_t *)v4; // 0x244ae2
    *v5 = 0x6cc6a661;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x244b07
    *v6 = 0x16839512;
    *(int64_t *)(v2 - 32) = a6;
    *(int64_t *)(v2 + 16) = *v5;
    *v6 = v4;
    *v5 = v2;
    int64_t v7; // 0x244a18
    return function_cf3c7(169, a2, a3, *v3, a4, a4, v7);
}

// Address range: 0x244b60 - 0x244cfa
int64_t function_244b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x244b60
    return function_cf3c7(a1, a2, 0x4466f56, a4, a5, a6, a3);
}

// Address range: 0x244cfa - 0x244e37
int64_t function_244cfa(int64_t a1, int64_t a2) {
    // 0x244cfa
    int64_t v1; // bp-48, 0x244cfa
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x244cfa
    return function_cf3c7(a1, v2, v2, v2, v2, v2, 310);
}

// Address range: 0x244e37 - 0x244f92
int64_t function_244e37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x244e37
    int64_t v1; // 0x244e37
    return function_cf3c7(a1, a2, a3, a4, a5, v1, 0x5dddcac5);
}

// Address range: 0x244f92 - 0x245116
int64_t function_244f92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x23a0c3; // bp-24, 0x244fd7
    int64_t v2 = (int64_t)&v1; // 0x244fe3
    int64_t v3 = v2 - 16; // 0x24501d
    int64_t * v4 = (int64_t *)v3; // 0x24501d
    *v4 = 0x79d2c92a;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x245022
    *v5 = 0x3d41612c;
    int64_t v6 = v2 - 32; // 0x245027
    int64_t * v7 = (int64_t *)v6; // 0x245027
    int64_t * v8 = (int64_t *)(v2 - 40); // 0x24502b
    int64_t v9 = *(int64_t *)(v2 + 16); // 0x245034
    *v5 = v9;
    *v7 = v9;
    *v8 = v9;
    *v5 = v1;
    *v4 = v9;
    *v7 = a3;
    *v8 = v6;
    int64_t v10 = *v7; // 0x2450a7
    *(int64_t *)(v2 - 48) = v10;
    *(int64_t *)(v2 + 8) = v1;
    *v5 = a2;
    *v7 = v10;
    *v5 = v2 - 8;
    *v5 = *v4;
    *v7 = v3;
    int64_t v11; // 0x244f92
    return function_cf3c7(a1, *v5, v10, a4, a5, v11, v1);
}

// Address range: 0x4786ee - 0x47870d
int64_t function_4786ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4786ee
    int64_t v1; // 0x4786ee
    int32_t v2 = v1; // 0x4786fe
    *(int32_t *)-0x1379c38a84651385 = v2;
    return (int64_t)(*(int32_t *)(a1 - 0x37ed0fcb) + v2);
}

// Address range: 0x478726 - 0x478779
int64_t function_478726(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    unsigned char v1 = (char)(a3 / 256); // 0x478726
    int64_t result; // 0x478726
    unsigned char v2 = *(char *)(a4 - 113 + result); // 0x478726
    bool v3; // 0x478726
    char v4 = v3; // 0x478726
    unsigned char v5 = v2 + v1; // 0x478726
    unsigned char v6 = v5 + v4; // 0x478726
    bool v7 = v3 ? v6 <= v1 : v5 < v1; // 0x478726
    int64_t v8; // bp-8, 0x478726
    if (v6 == 0 || v7) {
        char v9 = v6 + v4; // 0x478726
        v8 = 0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | (int64_t)v7 | 64 * (int64_t)(v6 == 0) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v1 % 16 + v4 + v2 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0) | 2048 * (int64_t)(((v9 ^ v1) & (v9 ^ v2)) < 0) | 2;
        int32_t * v10 = (int32_t *)(result - 35); // 0x47876d
        int32_t v11 = *v10; // 0x47876d
        *v10 = 2 * v11;
        *(int32_t *)a1 = __asm_insd((int16_t)(256 * (int64_t)v6 | a3 % 256));
        int32_t * v12 = (int32_t *)(result - 39); // 0x478772
        int32_t v13 = *v12; // 0x478772
        *v12 = v13 - ((int32_t)(v11 < 0) | (int32_t)(int64_t)&v8);
        return result;
    }
    // 0x47872c
    v8 = -70;
    return function_47879f();
}

// Address range: 0x478790 - 0x47879f
int64_t function_478790(int64_t a1) {
    // 0x478790
    int64_t v1; // 0x478790
    int64_t result = v1 & -0xff01 | (int64_t)&g1; // 0x478795
    __asm_out(95, (char)result);
    return result;
}

// Address range: 0x47879f - 0x4787a3
int64_t function_47879f(void) {
    // 0x47879f
    int64_t v1; // 0x47879f
    int64_t v2 = v1;
    return (v2 + 226) % 256 | v2 & -256;
}

// Address range: 0x4788a0 - 0x4788d5
int64_t function_4788a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4788a0
    int64_t v1; // 0x4788a0
    *(char *)0x1f1e17536510384a = (char)v1 + 113;
    return a3 - 256 * ((int64_t)((int32_t)v1 < 0x7f5e268f) + a4) & 0xff00 | a3 & 0xffff00ff;
}

// Address range: 0x4788d6 - 0x4788da
int64_t function_4788d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4788d6
    int64_t v1; // 0x4788d6
    return v1 ^ 256 * a4 & 0xff00;
}

// Address range: 0x478922 - 0x478924
int64_t function_478922(void) {
    // 0x478922
    return function_47898b();
}

// Address range: 0x478945 - 0x478946
int64_t function_478945(void) {
    // 0x478945
    int64_t result; // 0x478945
    return result;
}

// Address range: 0x47894e - 0x47895e
int64_t function_47894e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char v1 = *(char *)(a1 - 57); // 0x47894e
    char * v2 = (char *)(a1 + 6); // 0x478951
    char v3 = *v2 | 86; // 0x478951
    *v2 = v3;
    function_478945();
    if (v3 < 0) {
        bool v4; // 0x47894e
        function_478993(a1, a2, a3, 256 * (int64_t)(v1 + (char)(a4 / 256) + (char)(bool)v4) | a4 & -0xff01, (int64_t)&g2);
    }
    // 0x478959
    return function_ffffffff8079d3a8();
}

// Address range: 0x47897b - 0x478985
int64_t function_47897b(void) {
    // 0x47897b
    return function_fffffffff86f1541();
}

// Address range: 0x47898b - 0x47898c
int64_t function_47898b(void) {
    // 0x47898b
    int64_t result; // 0x47898b
    return result;
}

// Address range: 0x478993 - 0x47899e
int64_t function_478993(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x478993
    bool v1; // 0x478993
    return function_66f2e30f((v1 ? -1 : 1) + a1);
}

// Address range: 0x4789b8 - 0x4789ca
int64_t function_4789b8(int64_t a1, int64_t a2, int64_t result) {
    // 0x4789b8
    int32_t v1; // 0x4789b8
    *(int32_t *)result = (int32_t)(int64_t)&v1;
    return result;
}

// Address range: 0x4789ca - 0x4789d6
int64_t function_4789ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4789ca
    return a4 & 0xffffffff;
}

// Address range: 0x4789f0 - 0x4789f8
int64_t function_4789f0(uint64_t a1) {
    // 0x4789f0
    int64_t v1; // 0x4789f0
    uint32_t v2 = (int32_t)v1;
    *(int32_t *)v1 = 0x2000000 * v2 | 0x1000000 * (int32_t)(a1 % 2 != 0) | v2 / 256;
    return function_478a5b(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x478a29 - 0x478a2a
int64_t function_478a29(void) {
    // 0x478a29
    int64_t result; // 0x478a29
    return result;
}

// Address range: 0x478a45 - 0x478a47
int64_t function_478a45(void) {
    // 0x478a45
    return function_478a29();
}

// Address range: 0x478a5b - 0x478a5e
int64_t function_478a5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x478a5b
    return result;
}

// Address range: 0x478a62 - 0x478a63
int64_t function_478a62(int64_t a1) {
    // 0x478a62
    int64_t result; // 0x478a62
    return result;
}

// Address range: 0x478a8c - 0x478a8d
int64_t function_478a8c(void) {
    // 0x478a8c
    int64_t result; // 0x478a8c
    return result;
}

// Address range: 0x478acf - 0x478b14
int64_t function_478acf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    int64_t v2 = a7;
    int32_t * v3 = (int32_t *)(a1 + 0x4377eb92); // 0x478acf
    int32_t v4 = a4; // 0x478acf
    bool v5; // 0x478acf
    *v3 = (int32_t)v5 - v4 + *v3;
    int64_t v6; // 0x478acf
    *(int32_t *)a1 = (int32_t)v6;
    uint32_t v7 = *(int32_t *)&v1; // 0x478ad6
    *(int32_t *)a2 = v7 / 0x200000;
    char v8 = *(char *)&v6; // 0x478ada
    int64_t v9 = 256 * (int64_t)(v8 + (char)(a3 / 256) + (char)((v7 & 0x100000) != 0)) | a3 & -0xff01; // 0x478ada
    *(char *)a2 = *(char *)&v1 + (char)a4;
    *(int32_t *)-0x1cd9409 = *(int32_t *)-0x1cd9409 / 2;
    char v10 = __asm_in(-55); // 0x478aec
    uint64_t v11 = (int64_t)v10; // 0x478aec
    int64_t v12 = v6; // 0x478aec
    *(char *)a5 = v10;
    uint32_t v13 = (int32_t)((v5 ? 0xffffffff : 1) + a5) - *(int32_t *)(v9 - 0x60acc6e8); // 0x478af1
    int64_t v14 = v13; // 0x478af1
    __asm_outsb((int16_t)v9, *(char *)&v1);
    v6 = v9 & 0xffffffff;
    char v15 = __asm_insb((int16_t)(256 * (int64_t)(v10 | (char)((v12 | v11) / 256)) | v11 % 256)); // 0x478aff
    *(char *)v14 = v15;
    int64_t v16; // 0x478acf
    if (*(int32_t *)(a2 + 14 + 2 * v9) + v4 == 1 || v13 == 0) {
        // 0x478acf
        v16 = v6;
    } else {
        int64_t v17 = function_478a8c(); // 0x478b00
        v6 = v17;
        v16 = v17;
    }
    // 0x478b02
    v2 = -4;
    int64_t result = v16 & 0x6870f7f2 | 0x978f080d; // 0x478b05
    uint32_t v18 = *(int32_t *)((v5 ? -4 : 4) + v14); // 0x478b0a
    int32_t * v19 = (int32_t *)(result - 0x4292121d); // 0x478b0b
    int32_t v20 = *v19; // 0x478b0b
    *v19 = v20 - ((int32_t)(v18 > (int32_t)result) | (int32_t)(int64_t)&v2);
    return result;
}

// Address range: 0x478b37 - 0x478b3b
int64_t function_478b37(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x478b37
    int64_t result; // 0x478b37
    return result;
}

// Address range: 0x478ba1 - 0x478baf
int64_t function_478ba1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x478ba1
    int64_t result; // 0x478ba1
    *(int32_t *)-0x5697e2cdeb51f223 = (int32_t)result;
    return result;
}

// Address range: 0x478c27 - 0x478c28
int64_t function_478c27(void) {
    // 0x478c27
    int64_t result; // 0x478c27
    return result;
}

// Address range: 0x478c33 - 0x478ca7
int64_t function_478c33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x478c33
    int64_t result; // 0x478c33
    bool v1; // 0x478c33
    if (v1 || false) {
        // 0x478c90
        return result;
    }
    int64_t v2 = v1 ? -4 : 4; // 0x478c35
    int64_t v3 = v2 + a1; // 0x478c35
    *(int32_t *)v3 = (int32_t)a2;
    unsigned char v4 = (char)a4; // 0x478c39
    int64_t v5; // 0x478c33
    if (*(char *)(v5 & 0xff00 ^ a4) < v4) {
        // 0x478c3e
        return __asm_in_133(50);
    }
    int64_t v6 = v3 + v2; // 0x478c36
    int64_t v7 = v2 + a2; // 0x478c36
    __readgsbyte(v6);
    *(int32_t *)v6 = *(int32_t *)v7;
    char v8 = (char)v5 & -23; // 0x478c7b
    if (v8 < 0 == (v4 / 64 % 2 != v4 / 128)) {
        // 0x478c93
        __asm_out_134(-0x25a2, 33 * v8);
        result = __asm_wait();
    } else {
        uint64_t v9 = (v5 & -256 | (int64_t)v8) + 0xdaf97feb; // 0x478c88
        char * v10 = (char *)(v2 + 121 + v7); // 0x478c8d
        *v10 = *v10 + (char)(v9 / 256);
        result = v9 & 0xffffffff;
    }
    // 0x478c90
    return result;
}

// Address range: 0x478d04 - 0x478d05
int64_t function_478d04(void) {
    // 0x478d04
    int64_t result; // 0x478d04
    return result;
}

// Address range: 0x478d29 - 0x478d2a
int64_t function_478d29(void) {
    // 0x478d29
    int64_t result; // 0x478d29
    return result;
}

// Address range: 0x478d36 - 0x478dbb
int64_t function_478d36(int64_t a1, int64_t a2, uint64_t result, int64_t a4, int64_t a5) {
    // 0x478d36
    int64_t v1; // 0x478d36
    char * v2 = (char *)(v1 + 60 + 4 * v1); // 0x478d36
    unsigned char v3 = *v2; // 0x478d36
    bool v4; // 0x478d36
    char v5 = v4; // 0x478d36
    unsigned char v6 = v5 + (char)(result / 256); // 0x478d36
    char v7 = v3 - v6; // 0x478d36
    unsigned char v8 = v7 - v5; // 0x478d36
    *v2 = v7;
    if (((v8 ^ v3) & (v3 ^ v6)) >= 0) {
        function_478d29();
    }
    int64_t v9 = __asm_wait(); // 0x478d3f
    if (v4 ? v6 != -1 || v3 < v8 : v3 < v6) {
        // 0x478da6
        *(int32_t *)a1 = __asm_insd((int16_t)result);
        return v9 & 0x9ce7cd00 | (int64_t)*(char *)-0x55ae99d379b6c7ab | 0x631832a1;
    }
    // 0x478d54
    return result;
}

// Address range: 0x478dc2 - 0x478dc5
int64_t function_478dc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x478dc2
    int32_t v1; // 0x478dc2
    *(int32_t *)a4 = (int32_t)(int64_t)&v1;
    int64_t result; // 0x478dc2
    return result;
}

// Address range: 0x478de5 - 0x478dea
int64_t function_478de5(void) {
    // 0x478de5
    return function_ffffffffd9c1f791();
}

// Address range: 0x478df3 - 0x478e0c
int64_t function_478df3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x478df3
    int64_t v1; // 0x478df3
    int64_t v2 = v1;
    bool v3; // 0x478df3
    *(int32_t *)a4 = (int32_t)v1 - (int32_t)a2 + (int32_t)v3;
    int32_t * v4 = (int32_t *)(v2 - 48); // 0x478dfa
    *v4 = *v4 + 1;
    return (v2 + 103) % 256 | v2 & -256;
}

// Address range: 0x478e4d - 0x478e4e
int64_t function_478e4d(void) {
    // 0x478e4d
    int64_t result; // 0x478e4d
    return result;
}

// Address range: 0x478e58 - 0x478e5e
int64_t function_478e58(int64_t a1) {
    // 0x478e58
    return function_fffffffffa86e591();
}

// Address range: 0x478e5f - 0x478e75
int64_t function_478e5f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x478e5f
    function_478e4d();
    int64_t v1; // 0x478e5f
    return a3 & 0xffffff00 | (int64_t)*(char *)(v1 + a3 % 256);
}

// Address range: 0x478eb0 - 0x478eb3
int64_t function_478eb0(int64_t a1) {
    // 0x478eb0
    int64_t result; // 0x478eb0
    return result;
}

// Address range: 0x478ec0 - 0x478ec4
int64_t function_478ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x478ec0
    int64_t result; // 0x478ec0
    return result;
}

// Address range: 0x478ed6 - 0x478edb
int64_t function_478ed6(void) {
    // 0x478ed6
    return function_7c556d0f();
}

// Address range: 0x478ee4 - 0x478ee7
int64_t function_478ee4(int64_t a1) {
    // 0x478ee4
    int64_t result; // 0x478ee4
    return result;
}
