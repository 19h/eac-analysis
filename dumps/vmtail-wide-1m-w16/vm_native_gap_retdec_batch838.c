/*
 * Targeted RetDec C for native executable gap queue batch 838.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xdc3c7-0xdc5c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdc5c7-0xdc7c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdc7c7-0xdc9c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdc9c7-0xdcbc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdcbc7-0xdcdc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bf800-0x2bfa00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bfa00-0x2bfc00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bfc00-0x2bfe00 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2bf800(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bf824(void);
int64_t function_2bf85d(void);
int64_t function_2bf865(void);
int64_t function_2bf86b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bf87c(void);
int64_t function_2bf885(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bf8bd(int64_t a1);
int64_t function_2bf8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bf904(void);
int64_t function_2bf905(void);
int64_t function_2bf91b(int64_t a1);
int64_t function_2bf92c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bf982(void);
int64_t function_2bf9a5(void);
int64_t function_2bf9ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bfa04(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bfa22(int64_t a1);
int64_t function_2bfb3b(void);
int64_t function_2bfb48(void);
int64_t function_2bfb59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2bfc2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bfc4d(void);
int64_t function_2bfc5f(void);
int64_t function_2bfc6f(void);
int64_t function_2bfdb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bfde3(void);
int64_t function_c1cc33f();
int64_t function_cf3c7();
int64_t function_dc3c7(int64_t a1);
int64_t function_dc46d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dc5a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dc71f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dc89c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dc9d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_dcb6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ffffffffaeded5a7();
int64_t function_fffffffff9b7127c();
int64_t unknown_105c613c();
int64_t unknown_3a4ef31e();
int64_t unknown_3a6d23ca();
int64_t unknown_478251bb();
int64_t unknown_502de09e();
int64_t unknown_6c219223();
int64_t unknown_ffffffffd908b4eb();

// Address range: 0xdc3c7 - 0xdc46d
int64_t function_dc3c7(int64_t a1) {
    // 0xdc3c7
    int64_t v1; // 0xdc3c7
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0xdc3c7
    return function_cf3c7(v2, v2, v2, v2, v2, v2, v2);
}

// Address range: 0xdc46d - 0xdc5a1
int64_t function_dc46d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdc46d
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x64a1ed76);
}

// Address range: 0xdc5a1 - 0xdc71f
int64_t function_dc5a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x693b4730; // bp-40, 0xdc629
    int64_t v2 = (int64_t)&v1; // 0xdc663
    int64_t v3 = *(int64_t *)(v2 + 16); // 0xdc66b
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xdc66b
    *v4 = v3;
    int64_t v5 = v2 - 16; // 0xdc66f
    int64_t * v6 = (int64_t *)v5; // 0xdc66f
    *v6 = a4;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0xdc68f
    *v7 = v5;
    int64_t v8 = *v6; // 0xdc6a3
    bool v9; // 0xdc5a1
    *(int64_t *)(v2 + 8) = 0x4000 * (int64_t)v9 | 2048 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 128 * (int64_t)v9 | 64 * (int64_t)v9 | 16 * (int64_t)v9 | (int64_t)v9 | 4 * (int64_t)v9 | 2;
    *v6 = a1;
    *v7 = v8;
    *v4 = v3;
    *(int64_t *)(v2 + 24) = v3;
    *v4 = v1;
    *v6 = v2;
    *v4 = v1;
    *v6 = v1;
    int64_t v10; // 0xdc5a1
    return function_cf3c7(*v6, a2, a3, v8, v10, v10, v1);
}

// Address range: 0xdc71f - 0xdc89c
int64_t function_dc71f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdc71f
    int64_t v1; // bp-40, 0xdc71f
    int64_t v2 = (int64_t)&v1; // 0xdc79a
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xdc7b9
    *v3 = a4;
    int64_t v4 = *(int64_t *)(v2 + 40); // 0xdc7d1
    v1 = v4;
    *v3 = a4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0xdc7e1
    *v5 = a1;
    int64_t v6 = v2 + 8; // 0xdc812
    *v3 = v6;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0xdc81b
    *v3 = v7;
    *v5 = 0x3e96311d;
    *(int64_t *)(v2 - 24) = v4;
    *(int64_t *)v6 = *v3;
    *v3 = 0x6777d2b1;
    *v5 = v7;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v5 = v2;
    *v3 = v1;
    *v5 = v1;
    int64_t v8; // 0xdc71f
    return function_cf3c7(*v5, a2, a3, *v3, v8, v8, 0xd960c);
}

// Address range: 0xdc89c - 0xdc9d4
int64_t function_dc89c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdc89c
    int64_t v1; // bp-48, 0xdc89c
    int64_t v2 = (int64_t)&v1; // 0xdc951
    v1 = v2;
    int64_t v3; // bp-72, 0xdc89c
    v3 = (int64_t)&v3 + 8;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0xdc9d4 - 0xdcb6d
int64_t function_dc9d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7 + 0x33bb2595; // bp-32, 0xdcb14
    return function_cf3c7(a1, a2, a3, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0xdcb6d - 0xdccc0
int64_t function_dcb6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xdcb6d
    int64_t v1; // bp-48, 0xdcb6d
    v1 = (int64_t)&v1 + 16;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 310);
}

// Address range: 0x2bf800 - 0x2bf81f
int64_t function_2bf800(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bf800
    unknown_502de09e();
    int32_t * v1 = (int32_t *)(a1 + 11); // 0x2bf80c
    *v1 = *v1 + (int32_t)a1;
    __asm_wait();
    return unknown_3a4ef31e();
}

// Address range: 0x2bf824 - 0x2bf825
int64_t function_2bf824(void) {
    // 0x2bf824
    int64_t result; // 0x2bf824
    return result;
}

// Address range: 0x2bf85d - 0x2bf85e
int64_t function_2bf85d(void) {
    // 0x2bf85d
    int64_t result; // 0x2bf85d
    return result;
}

// Address range: 0x2bf865 - 0x2bf868
int64_t function_2bf865(void) {
    // 0x2bf865
    int64_t result; // 0x2bf865
    return result;
}

// Address range: 0x2bf86b - 0x2bf872
int64_t function_2bf86b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bf86b
    bool v1; // 0x2bf86b
    if (a4 != 1 == v1) {
        function_2bf85d();
    }
    // 0x2bf86d
    return function_fffffffff9b7127c();
}

// Address range: 0x2bf87c - 0x2bf87d
int64_t function_2bf87c(void) {
    // 0x2bf87c
    int64_t result; // 0x2bf87c
    return result;
}

// Address range: 0x2bf885 - 0x2bf8ae
int64_t function_2bf885(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bf885
    int64_t v1; // 0x2bf885
    __asm_out(-41, (char)v1);
    int64_t v2 = v1 & -256 | (int64_t)*(char *)-0x69feb8ed73fe17f7; // 0x2bf887
    uint32_t v3 = (int32_t)a4 % 32; // 0x2bf892
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(v2 + 2 * a1); // 0x2bf892
        *v4 = *v4 >> v3;
    }
    uint32_t v5 = (int32_t)v2 + (int32_t)a2; // 0x2bf897
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x2bf897
    int64_t v7 = v5; // 0x2bf899
    if (v6 % 2 == 0) {
        v7 = function_2bf87c();
    }
    int64_t v8 = v7; // 0x2bf89f
    if ((int32_t)v1 == (int32_t)a1) {
        v8 = function_2bf824();
    }
    int64_t v9 = v8;
    return (v9 + a3) % 256 | v9 & -256;
}

// Address range: 0x2bf8bd - 0x2bf8be
int64_t function_2bf8bd(int64_t a1) {
    // 0x2bf8bd
    int64_t result; // 0x2bf8bd
    return result;
}

// Address range: 0x2bf8e9 - 0x2bf902
int64_t function_2bf8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2bf8e9
    __readfsbyte(a1 - 0x5f89926f + 4 * a4);
    int64_t v1; // 0x2bf8e9
    int32_t * v2 = (int32_t *)(2 * v1 - 0x223bff6f); // 0x2bf8f3
    *v2 = *v2 + (int32_t)(256 * v1 + a4 & 0xff00 | a4 & 0xffff00ff);
    return v1 & 0xffffffff ^ 0x1a4871d9;
}

// Address range: 0x2bf904 - 0x2bf905
int64_t function_2bf904(void) {
    // 0x2bf904
    int64_t result; // 0x2bf904
    return result;
}

// Address range: 0x2bf905 - 0x2bf906
int64_t function_2bf905(void) {
    // 0x2bf905
    int64_t result; // 0x2bf905
    return result;
}

// Address range: 0x2bf91b - 0x2bf923
int64_t function_2bf91b(int64_t a1) {
    // 0x2bf91b
    int64_t v1; // 0x2bf91b
    return unknown_6c219223((int32_t)v1);
}

// Address range: 0x2bf92c - 0x2bf982
int64_t function_2bf92c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x2bf92c
    *(int32_t *)0x27d5013d01e801e8 = (int32_t)v3;
    unknown_105c613c();
    int64_t v4 = -0x6178e2c2; // 0x2bf93c
    if (a5 != 1) {
        function_2bf904();
    }
    uint16_t v5 = (int16_t)v3; // 0x2bf947
    uint16_t v6 = (int16_t)*(char *)(v3 + 0x3d5fbc00); // 0x2bf947
    int32_t * v7 = (int32_t *)(a1 + 165); // 0x2bf94d
    int32_t v8 = *v7; // 0x2bf94d
    *v7 = v8 + (int32_t)(v3 & 0xffff0000 | (int64_t)(v5 / v6 % 256) | (int64_t)(256 * (v5 % v6)));
    int32_t v9 = (int64_t)&v4; // 0x2bf958
    *(int32_t *)v1 = *(int32_t *)&v1 + v9;
    int64_t result = v2 & 0xffffffff; // 0x2bf95a
    int32_t * v10 = (int32_t *)(v3 + 0x640cb96); // 0x2bf95c
    uint32_t v11 = *v10; // 0x2bf95c
    *v10 = v11 / 1024 | 0x400000 * v11;
    char * v12 = (char *)(a5 + 0xa685d0f); // 0x2bf963
    unsigned char v13 = *v12; // 0x2bf963
    *v12 = v13 / 128 | 2 * v13;
    int32_t * v14 = (int32_t *)(v3 + 0x22000000); // 0x2bf973
    *v14 = *v14 - v9;
    char v15 = v2; // 0x2bf979
    *(char *)result = *(char *)&v2 + v15;
    *(char *)v1 = *(char *)&v1 + v15;
    return result;
}

// Address range: 0x2bf982 - 0x2bf984
int64_t function_2bf982(void) {
    // 0x2bf982
    return function_2bf905();
}

// Address range: 0x2bf9a5 - 0x2bf9a7
int64_t function_2bf9a5(void) {
    // 0x2bf9a5
    int64_t v1; // 0x2bf9a5
    return function_2bfa04(v1, v1, v1, v1);
}

// Address range: 0x2bf9ab - 0x2bf9b1
int64_t function_2bf9ab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bf9ab
    int32_t v1; // 0x2bf9ab
    *(int32_t *)(a3 + 1) = (int32_t)(int64_t)&v1;
    int64_t result; // 0x2bf9ab
    int64_t v2 = result;
    *(char *)v2 = *(char *)&result + (char)v2;
    return result;
}

// Address range: 0x2bfa04 - 0x2bfa1a
int64_t function_2bfa04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bfa04
    int64_t v1; // 0x2bfa04
    __asm_out_133((int16_t)a3, (char)v1);
    unsigned char v2 = *(char *)(v1 + 8 * a3); // 0x2bfa05
    *(char *)a1 = __asm_insb((int16_t)(a3 & 0xff00 | (int64_t)v2));
    int32_t * v3 = (int32_t *)(a4 - 0x18e25300); // 0x2bfa09
    bool v4; // 0x2bfa04
    *v3 = (int32_t)v4 + (int32_t)v1 + *v3;
    char v5 = __asm_in(-65); // 0x2bfa0f
    int32_t v6; // 0x2bfa04
    *(int32_t *)a4 = (int32_t)(int64_t)&v6;
    return v1 & -256 | (int64_t)v5;
}

// Address range: 0x2bfa22 - 0x2bfa2b
int64_t function_2bfa22(int64_t a1) {
    // 0x2bfa22
    int64_t result; // 0x2bfa22
    int32_t * v1 = (int32_t *)(result - 0x492a2ce6); // 0x2bfa22
    *v1 = *v1 | (int32_t)result;
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x2bfb3b - 0x2bfb42
int64_t function_2bfb3b(void) {
    // 0x2bfb3b
    int64_t result; // 0x2bfb3b
    return result;
}

// Address range: 0x2bfb48 - 0x2bfb4f
int64_t function_2bfb48(void) {
    // 0x2bfb48
    __asm_in_134(124);
    return function_ffffffffaeded5a7();
}

// Address range: 0x2bfb59 - 0x2bfc14
int64_t function_2bfb59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2bfb59
    bool v1; // 0x2bfb59
    if (v1) {
        // 0x2bfb5b
        int64_t v2; // 0x2bfb59
        return v2 | 232;
    }
    uint64_t v3 = a4 + 0xe83658b7; // 0x2bfbd1
    int32_t * v4 = (int32_t *)(a4 - 100); // 0x2bfbd7
    uint32_t v5 = (int32_t)a4; // 0x2bfbd7
    *v4 = *v4 + v5;
    int32_t * v6 = (int32_t *)((v3 & 0xffffffff) + 101); // 0x2bfbdf
    *v6 = *v6 + (int32_t)v3;
    int64_t v7 = __asm_hlt() & 0xffffffff ^ 0x6bebabe4; // 0x2bfbea
    uint32_t v8 = v5 % 32; // 0x2bfbef
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)v7; // 0x2bfbef
        *v9 = *v9 >> v8;
    }
    *(char *)0x2685b3f9 = *(char *)0x2685b3f9 + (char)(v3 / 256);
    int64_t v10 = v7 | 0xd05b0540; // 0x2bfbf8
    *(char *)-0x40b2ff9f6be72662 = (char)v10;
    int32_t * v11 = (int32_t *)v10; // 0x2bfc0d
    *v11 = *v11 + (int32_t)v10;
    return function_c1cc33f();
}

// Address range: 0x2bfc2f - 0x2bfc37
int64_t function_2bfc2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bfc2f
    int64_t result; // 0x2bfc2f
    *(char *)a3 = (char)(result | result);
    return result;
}

// Address range: 0x2bfc4d - 0x2bfc4e
int64_t function_2bfc4d(void) {
    // 0x2bfc4d
    int64_t result; // 0x2bfc4d
    return result;
}

// Address range: 0x2bfc5f - 0x2bfc66
int64_t function_2bfc5f(void) {
    // 0x2bfc5f
    unknown_ffffffffd908b4eb();
    return function_2bfc4d();
}

// Address range: 0x2bfc6f - 0x2bfc71
int64_t function_2bfc6f(void) {
    // 0x2bfc6f
    int64_t result; // 0x2bfc6f
    return result;
}

// Address range: 0x2bfdb5 - 0x2bfdd0
int64_t function_2bfdb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)unknown_478251bb(); // 0x2bfdba
    int32_t v2 = *v1 + (int32_t)a2; // 0x2bfdba
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x2bfdba
    *v1 = v2;
    int64_t v4 = a3 & 0xffffffff; // 0x2bfdbd
    if (v3 % 2 == 0) {
        // 0x2bfdbf
        v4 = __asm_wait();
    }
    // 0x2bfdc2
    __asm_out(-76, (char)v4);
    int64_t result = unknown_3a6d23ca(); // 0x2bfdc4
    float80_t v5; // 0x2bfdb5
    *(int16_t *)(a2 + 0x1637e16c) = (int16_t)v5;
    return result;
}

// Address range: 0x2bfde3 - 0x2bfde8
int64_t function_2bfde3(void) {
    // 0x2bfde3
    int64_t result; // 0x2bfde3
    return result;
}
