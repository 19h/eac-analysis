/*
 * Targeted RetDec C for native executable gap queue batch 1751.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x384a30-0x384c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b5ec9-0x3b60c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b60c9-0x3b62c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b62c9-0x3b64c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b85b0-0x3b87b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b87b0-0x3b89b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b89b0-0x3b8bb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bac59-0x3bae59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bae59-0x3bb059 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bb059-0x3bb259 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41f81f-0x41fa1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41fa1f-0x41fc1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41fc1f-0x41fe1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x469a34-0x469c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x469c34-0x469e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x469e34-0x46a034 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
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

int64_t function_384a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_384ba4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_384bd7(void);
int64_t function_38add5f3();
int64_t function_3b5ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b5f58(void);
int64_t function_3b5f9d(void);
int64_t function_3b5fcf(int64_t a1);
int64_t function_3b6008(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b601e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3b60a8(void);
int64_t function_3b60ac(int64_t a1);
int64_t function_3b60d3(void);
int64_t function_3b60ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b612d(void);
int64_t function_3b614a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3b61ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b626e(void);
int64_t function_3b62f3(int64_t a1);
int64_t function_3b6306(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b6394(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3b85b0(void);
int64_t function_3b863c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b86a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_3b885b(int64_t a1);
int64_t function_3b88f0(int64_t a1);
int64_t function_3b8909(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b899b(void);
int64_t function_3b89f4(void);
int64_t function_3b8a3c(void);
int64_t function_3b8a63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b8a9b(void);
int64_t function_3b8aa2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b8b4c(void);
int64_t function_3b8b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bac59(int64_t a1);
int64_t function_3bac6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3bade8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3baf25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3bb066(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41f81f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41f862(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41f874(int64_t a1);
int64_t function_41f8cf(void);
int64_t function_41f8e2(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_41f8f0(void);
int64_t function_41f8f3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41f90d(void);
int64_t function_41f915(void);
int64_t function_41f91c(void);
int64_t function_41f960(int64_t a1);
int64_t function_41f984(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result2, int64_t a7);
int64_t function_41fa0b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41fa6f(int64_t a1);
int64_t function_41fa7f(void);
int64_t function_41fa89(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_41fb77(int64_t a1);
int64_t function_41fb8a(void);
int64_t function_41fbc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41fca1(void);
int64_t function_41fcf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41fd01(void);
int64_t function_41fd23(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41fd2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41fd4d(void);
int64_t function_41fdae(void);
int64_t function_469a34(int64_t a1, int64_t a2);
int64_t function_469a48(int64_t a1);
int64_t function_469b0c(void);
int64_t function_469b12(int64_t a1, int64_t a2);
int64_t function_469b1c(void);
int64_t function_469b20(int64_t a1, int64_t a2);
int64_t function_469b42(void);
int64_t function_469b78(int64_t a1);
int64_t function_469b8c(int64_t result);
int64_t function_469ba2(int64_t a1);
int64_t function_469be2(void);
int64_t function_469c07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_469d9d(void);
int64_t function_469da8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_469ea6(void);
int64_t function_469eb9(void);
int64_t function_469ec6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_469f2c(void);
int64_t function_469f55(int64_t a1, int64_t a2, int64_t a3);
int64_t function_469f6c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_469f79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_469fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_469ff3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_643e9ea1();
int64_t function_c823b();
int64_t function_cc59c();
int64_t function_ffffffff95353bb1();
int64_t function_ffffffffdba43022();
int64_t function_ffffffffe12002de();
int64_t function_ffffffffe40109b8();
int64_t unknown_170e9d6();
int64_t unknown_2afa390f();
int64_t unknown_3aeb5757();
int64_t unknown_3dc4ce57();
int64_t unknown_3e7d4fd1();
int64_t unknown_48439720();
int64_t unknown_55006d08();
int64_t unknown_7a1c88de();
int64_t unknown_ffffffff8a8431cf();
int64_t unknown_ffffffff9fb84b62();
int64_t unknown_ffffffffb4a90030();
int64_t unknown_ffffffffe1200ce7();
int64_t unknown_fffffffffd156615();

// Address range: 0x384a30 - 0x384b22
int64_t function_384a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x384a30
    int64_t v1; // 0x384a30
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x384a3c
    int32_t v3; // 0x384a30
    int64_t v4 = v3; // 0x384a61
    int64_t v5 = (int64_t)&v2; // 0x384a7b
    int64_t v6 = *(int64_t *)(v5 + 16); // 0x384a83
    int64_t * v7 = (int64_t *)(v5 - 8); // 0x384a83
    int64_t * v8 = (int64_t *)(v5 - 16); // 0x384a87
    int64_t * v9 = (int64_t *)(v5 - 24); // 0x384a8a
    *v9 = v6;
    int64_t v10 = v5 + 8; // 0x384aa7
    *(int64_t *)v10 = v4;
    *v8 = a1;
    *v7 = v6;
    int64_t v11 = *v8; // 0x384ac4
    *v9 = v11;
    *(int64_t *)(v5 + 24) = *v7;
    *v8 = v4;
    *v7 = v10;
    *v7 = v2;
    *v8 = v2;
    return function_cc59c(v11);
}

// Address range: 0x384ba4 - 0x384baa
int64_t function_384ba4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x384ba4
    int64_t result; // 0x384ba4
    char * v1 = (char *)(result - 1); // 0x384ba4
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x384bd7 - 0x384bdc
int64_t function_384bd7(void) {
    // 0x384bd7
    int64_t v1; // 0x384bd7
    return v1 & -152;
}

// Address range: 0x3b5ec9 - 0x3b5efb
int64_t function_3b5ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t result = unknown_3e7d4fd1(); // 0x3b5ecb
    int64_t v2; // 0x3b5ec9
    int32_t * v3 = (int32_t *)(a1 + 0x428f7ca0); // 0x3b5ee6
    *v3 = *v3 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(a2 + 10); // 0x3b5eec
    uint32_t v5 = *v4; // 0x3b5eec
    *v4 = v5 / 0x10000000 | 16 * v5;
    *(int32_t *)-0x175092acfe17f06d = (int32_t)result;
    return result;
}

// Address range: 0x3b5f58 - 0x3b5f5d
int64_t function_3b5f58(void) {
    // 0x3b5f58
    return function_ffffffffdba43022();
}

// Address range: 0x3b5f9d - 0x3b5fcd
int64_t function_3b5f9d(void) {
    // 0x3b5f9d
    int64_t v1; // 0x3b5f9d
    int64_t v2 = v1;
    return (v2 + 158) % 256 | v2 & -256;
}

// Address range: 0x3b5fcf - 0x3b5fd8
int64_t function_3b5fcf(int64_t a1) {
    // 0x3b5fcf
    bool v1; // 0x3b5fcf
    return unknown_170e9d6((v1 ? -4 : 4) + a1);
}

// Address range: 0x3b6008 - 0x3b600f
int64_t function_3b6008(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b6008
    int64_t v1; // 0x3b6008
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3b6008
    int64_t v3 = v2 ? -4 : 4; // 0x3b6008
    return unknown_2afa390f(v3 + a1, v3 + a2);
}

// Address range: 0x3b601e - 0x3b603d
int64_t function_3b601e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3b601e
    bool v1; // 0x3b601e
    int64_t v2 = v1 ? 0xf3001e9 : 0xf3001e8; // 0x3b601e
    char v3 = __asm_in(-90); // 0x3b6023
    unsigned char v4 = *(char *)-0x1790651a; // 0x3b6025
    char v5 = v4 / 128; // 0x3b6025
    *(char *)-0x1790651a = v5 | 2 * v4;
    int32_t v6 = *(int32_t *)(a2 - 0x53f665e8); // 0x3b602c
    int64_t v7; // 0x3b601e
    *(char *)(int64_t)((int32_t)a3 - v6 + (int32_t)(v5 != 0)) = (char)((uint64_t)v7 / 256);
    return v7 - v2 & 0xffffff00 | (int64_t)v3 & -256 | (int64_t)(v3 + (char)(a4 / 256));
}

// Address range: 0x3b60a8 - 0x3b60ab
int64_t function_3b60a8(void) {
    // 0x3b60a8
    int64_t result; // 0x3b60a8
    return result;
}

// Address range: 0x3b60ac - 0x3b60ad
int64_t function_3b60ac(int64_t a1) {
    // 0x3b60ac
    int64_t result; // 0x3b60ac
    return result;
}

// Address range: 0x3b60d3 - 0x3b60d6
int64_t function_3b60d3(void) {
    // 0x3b60d3
    int64_t result; // 0x3b60d3
    return result;
}

// Address range: 0x3b60ec - 0x3b60f3
int64_t function_3b60ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b60ec
    int64_t result; // 0x3b60ec
    return result;
}

// Address range: 0x3b612d - 0x3b612e
int64_t function_3b612d(void) {
    // 0x3b612d
    int64_t result; // 0x3b612d
    return result;
}

// Address range: 0x3b614a - 0x3b61e6
int64_t function_3b614a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result = unknown_3aeb5757(); // 0x3b6151
    int64_t v2 = a4 - 1; // 0x3b6162
    int64_t v3; // 0x3b614a
    bool v4; // 0x3b614a
    if (v2 != 0 != ((char)v3 + (char)(a3 / 256) == (char)v4)) {
        // 0x3b6164
        return result;
    }
    int32_t v5 = a1; // 0x3b6167
    *(int32_t *)-0x52932392 = *(int32_t *)-0x52932392 | v5;
    uint32_t v6 = *(int32_t *)0x1e8c505; // 0x3b619f
    int32_t v7 = v6 < 0x24ca7701 ? 0x1f50a86d : 0x1f50a86c; // 0x3b61a7
    char * v8 = (char *)(a1 - 21); // 0x3b61b3
    *v8 = *v8 | (char)a3;
    int32_t * v9 = (int32_t *)(a1 - 101); // 0x3b61bc
    *v9 = *v9 + v5;
    unsigned char v10 = *(char *)&v1; // 0x3b61bf
    v1 += (v4 ? -1 : 1);
    *(int32_t *)0x80b4742907ced54 = v6 - v7 & -0x470f5800 | (int32_t)v10 | 0x470f5700;
    int64_t v11 = unknown_ffffffff8a8431cf(); // 0x3b61c9
    unsigned char v12 = (char)v2 % 32; // 0x3b61ce
    if (v12 != 0) {
        char * v13 = (char *)(a4 - 0x5b21ff99); // 0x3b61ce
        *v13 = *v13 << v12;
    }
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v14 = v11 & -256; // 0x3b61da
    int32_t * v15 = (int32_t *)((v14 | 13) - 0x117501db); // 0x3b61dc
    *v15 = *v15 + (int32_t)((int32_t)v11 < 0x9e2f0001) - (int32_t)v1;
    return v14 | 71;
}

// Address range: 0x3b61ee - 0x3b61f5
int64_t function_3b61ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b61ee
    int64_t v1; // 0x3b61ee
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a3;
    return function_38add5f3();
}

// Address range: 0x3b626e - 0x3b6275
int64_t function_3b626e(void) {
    char v1 = *(char *)-0x2497fd8b; // 0x3b626e
    int64_t result; // 0x3b626e
    *(char *)-0x2497fd8b = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x3b62f3 - 0x3b62f4
int64_t function_3b62f3(int64_t a1) {
    // 0x3b62f3
    int64_t result; // 0x3b62f3
    return result;
}

// Address range: 0x3b6306 - 0x3b633a
int64_t function_3b6306(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 & 104; // 0x3b631b
    char * v2 = (char *)v1; // 0x3b631e
    unsigned char v3 = *v2; // 0x3b631e
    unsigned char v4 = v3 + (char)v1; // 0x3b631e
    *v2 = v4;
    int64_t v5; // 0x3b6306
    *(char *)a1 = *(char *)&v5;
    bool v6; // 0x3b6306
    int64_t v7 = v6 ? -1 : 1; // 0x3b6320
    int64_t v8 = v7 + a1; // 0x3b6320
    int32_t v9 = *(int32_t *)(v7 + a2 + (v4 < v3 ? 0x52152a19 : 0x52152a1a) & 0xffffffff); // 0x3b6323
    *(int32_t *)v8 = v9;
    int64_t v10 = v6 ? 0x5f601008 : 0x5f60100a; // 0x3b632f
    v5 = v10;
    char * v11 = (char *)v10; // 0x3b6330
    unsigned char v12 = *v11; // 0x3b6330
    *v11 = v12 - 26;
    if (v12 <= 25) {
        // 0x3b6392
        return a4 & 0xffffff00 | (int64_t)*(char *)0x5f601009;
    }
    // 0x3b6335
    return function_643e9ea1(v8 + (v6 ? -4 : 4), v5, (int32_t)v1, 0xadead5e6);
}

// Address range: 0x3b6394 - 0x3b64c9
int64_t function_3b6394(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3b6394
    int64_t v1; // 0x3b6394
    uint64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a7;
    uint64_t v5 = v1 + 118; // 0x3b6394
    unsigned char v6 = (char)(v2 / 256); // 0x3b6398
    unsigned char v7 = *(char *)0x4a14d99f + v6; // 0x3b6398
    *(char *)0x4a14d99f = v7;
    if (v7 >= 0) {
        // 0x3b63a5
        return v5 % 256 | v1 & -256;
    }
    char * v8 = (char *)(a4 - 95); // 0x3b6419
    unsigned char v9 = *v8; // 0x3b6419
    char v10 = v5; // 0x3b6419
    unsigned char v11 = v9 + v10; // 0x3b6419
    *v8 = v11;
    char * v12 = (char *)(a1 + 16); // 0x3b641c
    *v12 = *v12 + (char)v2 + (char)(v11 < v9);
    int64_t v13; // 0x3b6394
    int64_t v14 = a3 & -256 | (int64_t)(*(char *)&v13 + (char)a3); // 0x3b641f
    unsigned char v15 = *(char *)(v14 + 72) | v10; // 0x3b6421
    unsigned char v16 = *(char *)-0x7cd8dd4; // 0x3b6425
    char v17 = v16 + v6; // 0x3b6425
    unsigned char v18 = llvm_ctpop_i8(v17); // 0x3b6425
    *(char *)-0x7cd8dd4 = v17;
    int64_t v19 = v1 & -0x10000 | (int64_t)v15 | 256 * (64 * (int64_t)(v17 == 0) | (int64_t)(v17 < v16) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v16 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v18 % 2 == 0)); // 0x3b6421
    uint64_t v20 = (int64_t)&v4; // 0x3b642c
    if (v17 < 0 == ((v17 ^ v16) & (v17 ^ v6)) < 0 != v17 != 0) {
        int32_t * v21 = (int32_t *)v14; // 0x3b642f
        *v21 = *v21 ^ -0x61f567be;
        int64_t v22 = *(int64_t *)(a6 - 59) | v3; // 0x3b6437
        *(char *)0x797aa542 = *(char *)0x797aa542 + v6;
        uint32_t v23 = *v21; // 0x3b6446
        uint64_t v24 = unknown_3dc4ce57(0x68123c01); // 0x3b6451
        int32_t * v25 = (int32_t *)v24; // 0x3b6456
        *v25 = *v25 + (int32_t)v24;
        bool v26; // 0x3b6394
        int64_t v27 = v26 ? 0x68123bfd : 0x68123c05; // 0x3b6458
        char v28 = *(char *)(v27 - 103); // 0x3b645b
        int32_t * v29 = (int32_t *)(v2 + 6); // 0x3b645e
        *v29 = (int32_t)v27;
        __asm_out_133(-39, (char)v20);
        char * v30 = (char *)v22; // 0x3b6465
        *v30 = *v30 & (char)v22;
        v3 = v22 & -0xff01 | (int64_t)"many_avx512";
        if ((uint64_t)v1 <= *(int64_t *)0xb06271) {
            // 0x3b64c1
            return v20 / 2 & 0x7ffffffc;
        }
        int64_t v31 = (0x100000000 * v14 | (int64_t)((int32_t)&g2 & 0x149b97ca) | v19 & 0x149b00ca) % (int64_t)v23; // 0x3b6446
        char * v32 = (char *)((int64_t)*v29 + 0x13d00ff); // 0x3b647e
        *v32 = *v32 + 77;
        uint32_t v33 = *(int32_t *)((v24 & 0xffff0000 | -v24 % 256 | 256 * (int64_t)(v28 | (char)(v24 / 256))) + (2 * v31 & 0x1fffffffe)); // 0x3b6484
        // 0x3b63a5
        return (0x100000000 * v31 | v20 & 0xfffffff8) / (int64_t)v33 & 0xffffffff;
    }
    int64_t result = v19 | 512; // 0x3b642b
    char * v34 = (char *)(v2 - 0x7e7e91c0); // 0x3b63bb
    *v34 = *v34 + v15;
    *(int32_t *)v3 = *(int32_t *)&v3 - (int32_t)result;
    char v35 = *(char *)0x66ce76ca; // 0x3b63c3
    char v36 = v35 + v6; // 0x3b63c3
    *(char *)0x66ce76ca = v36;
    int64_t v37 = v3 & -0x10000 | (int64_t)&g3 & -256; // 0x3b63cb
    v3 = v37;
    if (v36 < 0) {
        // 0x3b63a5
        return result;
    }
    if (((v36 ^ v35) & (v36 ^ v6)) >= 0) {
        uint64_t result2 = unknown_55006d08(0x68123c01); // 0x3b6402
        if (v36 != 0) {
            // 0x3b640f
            *(int32_t *)v2 = (int32_t)v20 + (int32_t)v2;
            return result2;
        }
        char * v38 = (char *)(v14 + 32); // 0x3b640b
        *v38 = *v38 + (char)(result2 / 256);
        return result2;
    }
    char * v39 = (char *)(v37 + result); // 0x3b63d2
    *v39 = *v39 + v15;
    int64_t v40 = result + 0xd8f668eb; // 0x3b63d5
    *(char *)-0x25a08c1e = *(char *)-0x25a08c1e + v6;
    __asm_pmulhw(v1, *(int64_t *)((v40 & 0xffffffff) - 124));
    int64_t result3 = (v40 & 0xffffff00 | (int64_t)*(char *)v4) ^ -0x2d1cf400; // 0x3b63ed
    *(int32_t *)0x6807a3503600013d = (int32_t)result3;
    char * v41 = (char *)(v1 + 0x1b33cd0f); // 0x3b63fb
    *v41 = *v41 + (char)v3;
    return result3;
}

// Address range: 0x3b85b0 - 0x3b85b1
int64_t function_3b85b0(void) {
    // 0x3b85b0
    int64_t result; // 0x3b85b0
    return result;
}

// Address range: 0x3b863c - 0x3b8655
int64_t function_3b863c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b863c
    int64_t v1; // 0x3b863c
    int64_t v2 = v1;
    bool v3; // 0x3b863c
    unsigned char v4 = (char)v1 - (v3 ? 102 : 101); // 0x3b863c
    if (llvm_ctpop_i8(v4) % 2 != 0) {
        // 0x3b864e
        return v1 & -256 | (int64_t)v4;
    }
    // 0x3b8640
    *(char *)v2 = (char)(v1 / 256) + (char)v2;
    return a4 & 0xffffffff;
}

// Address range: 0x3b86a0 - 0x3b87d4
int64_t function_3b86a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    int64_t v1 = a4;
    bool v2; // 0x3b86a0
    *(int32_t *)a4 = (int32_t)a4 - (int32_t)a3 + (int32_t)v2;
    int64_t v3 = (int64_t)*(int32_t *)(a2 + 23); // 0x3b86a2
    int64_t v4 = 0x43b25411 * v3; // 0x3b86a2
    int64_t v5; // 0x3b86a0
    *(char *)-0x28e6074b = *(char *)-0x28e6074b + (char)(v5 / 256);
    int32_t * v6 = (int32_t *)(a4 + 0x2101e83a + v5); // 0x3b86b6
    int32_t v7 = *v6 & 0x2a09fa7d; // 0x3b86b6
    *v6 = v7;
    int64_t v8 = v5 - (v4 == 0x43b2541100000000 * v3 >> 32 ? 0xf192a95 : 0xf192a96) & 0xffffffc5 | 58; // 0x3b86c1
    int3_t v9; // 0x3b86a0
    if (v7 != 0) {
        int64_t v10 = v4 & 0xffffffff; // 0x3b86a2
        int32_t v11 = *(int32_t *)(v10 + 0x1fe901e8) ^ (int32_t)v5; // 0x3b86c3
        unknown_7a1c88de(v10);
        char * v12 = (char *)v10; // 0x3b86dd
        *v12 = *v12 + (char)(v1 / 256);
        int64_t v13 = unknown_ffffffffe1200ce7(); // 0x3b86e1
        unsigned char v14 = (char)(a6 / 256); // 0x3b86e6
        unsigned char v15 = v14 + (char)a6; // 0x3b86e6
        int3_t v16; // 0x3b86a0
        float80_t v17 = __frontend_reg_load_fpr(v16); // 0x3b86e8
        __frontend_reg_store_fpr(v16, v17 * (float80_t)*(float32_t *)0x223fed4);
        int32_t * v18 = (int32_t *)(v1 - 0x1b620f3e); // 0x3b86ee
        int32_t v19 = *v18; // 0x3b86ee
        int32_t v20 = v15 < v14; // 0x3b86ee
        int32_t v21 = v11 + v20 + v19; // 0x3b86ee
        int32_t v22 = v21 + v20; // 0x3b86ee
        *v18 = v21;
        if (v21 < 0 == ((v22 ^ v19) & (v22 ^ v11)) < 0 != v21 != 0) {
            // 0x3b86f6
            __frontend_reg_load_fpr(v16);
            __frontend_reg_load_fpr(v16);
            int32_t * v23 = (int32_t *)(a2 - 0x47cac283); // 0x3b86f8
            *v23 = *v23 + (int32_t)v4;
            return (int64_t)(*(int32_t *)&v1 & (int32_t)v13);
        }
        if (v21 < 0 == ((v22 ^ v19) & (v22 ^ v11)) < 0) {
            // 0x3b8747
            return 0x20cba4be;
        }
        float32_t v24 = *(float32_t *)(unknown_fffffffffd156615() - 115); // 0x3b8714
        int3_t v25 = v16 - 1; // 0x3b8714
        __frontend_reg_store_fpr(v25, (float80_t)v24);
        v8 = unknown_48439720();
        int64_t v26 = v1; // 0x3b871f
        int64_t v27 = v26 - 1; // 0x3b871f
        v1 = v27;
        if (v27 != 0) {
            unsigned char v28 = *(char *)(v26 + 0x4201e824); // 0x3b874e
            char v29 = *(char *)(v26 + 0x3a1547ff); // 0x3b8754
            int64_t v30 = (v27 & -256 | (int64_t)((char)v27 - v29 + (char)(v28 > v15))) - 1; // 0x3b875a
            v1 = v30;
            if (v30 != 0) {
                // 0x3b87d1
                return __asm_hlt();
            }
            // 0x3b875c
            unknown_ffffffff9fb84b62();
            abort();
            // UNREACHABLE
        }
        int32_t * v31 = (int32_t *)(((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a2); // 0x3b8724
        *v31 = *v31 + (int32_t)v8;
        float80_t v32 = __frontend_reg_load_fpr(v25); // 0x3b8726
        int16_t v33 = *(int16_t *)((a6 & -0x10000 | 256 * (int64_t)v15 | 115) - 99); // 0x3b8726
        __frontend_reg_store_fpr(v25, (float80_t)v33 - v32);
        v9 = v25;
    }
    // 0x3b872a
    __frontend_reg_store_fpr(v9 - 1, (float80_t)*(int32_t *)v8);
    __asm_hlt();
    return __asm_in_134(-77);
}

// Address range: 0x3b885b - 0x3b885e
int64_t function_3b885b(int64_t a1) {
    // 0x3b885b
    int64_t result; // 0x3b885b
    return result;
}

// Address range: 0x3b88f0 - 0x3b88f3
int64_t function_3b88f0(int64_t a1) {
    // 0x3b88f0
    int64_t result; // 0x3b88f0
    return result;
}

// Address range: 0x3b8909 - 0x3b8913
int64_t function_3b8909(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b8909
    int64_t v1; // 0x3b8909
    *(char *)a2 = (char)(v1 ^ a4);
    *(char *)0x4bd74812 = *(char *)0x4bd74812 + (char)(v1 / 256);
    while (true) {
        // continue -> 0x3b8911
    }
}

// Address range: 0x3b899b - 0x3b899c
int64_t function_3b899b(void) {
    // 0x3b899b
    int64_t result; // 0x3b899b
    return result;
}

// Address range: 0x3b89f4 - 0x3b89f6
int64_t function_3b89f4(void) {
    // 0x3b89f4
    return function_3b899b();
}

// Address range: 0x3b8a3c - 0x3b8a3d
int64_t function_3b8a3c(void) {
    // 0x3b8a3c
    int64_t result; // 0x3b8a3c
    return result;
}

// Address range: 0x3b8a63 - 0x3b8a6d
int64_t function_3b8a63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b8a63
    return function_3b8a3c();
}

// Address range: 0x3b8a9b - 0x3b8a9c
int64_t function_3b8a9b(void) {
    // 0x3b8a9b
    int64_t result; // 0x3b8a9b
    return result;
}

// Address range: 0x3b8aa2 - 0x3b8ace
int64_t function_3b8aa2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int32_t * v3 = (int32_t *)(a1 + 0x641c3aff); // 0x3b8aae
    int64_t v4; // 0x3b8aa2
    *v3 = *v3 + (int32_t)v4;
    int64_t v5; // 0x3b8aa2
    *(char *)v5 = *(char *)&v5 + 1;
    int32_t v6 = *(int32_t *)0x43fb0c85faa901e8; // 0x3b8ab9
    char v7 = (char)v6 ^ 14; // 0x3b8ac2
    int64_t v8 = (int64_t)v7 | (int64_t)(v6 & -256); // 0x3b8ac2
    v5 = v8;
    int64_t v9 = v8; // 0x3b8ac4
    if (v7 < 1) {
        v9 = function_3b8a9b();
        v5 = v9;
    }
    int64_t v10 = v9; // 0x3b8aca
    unsigned char v11 = *(char *)&v1; // 0x3b8ac9
    unsigned char v12 = *(char *)&v2; // 0x3b8ac9
    int64_t result = (v10 - a4 / 256 + (int64_t)(v11 < v12)) % 256 | v10 & -256; // 0x3b8aca
    int32_t * v13 = (int32_t *)result; // 0x3b8acc
    *v13 = *v13 + (int32_t)v4;
    return result;
}

// Address range: 0x3b8b4c - 0x3b8b4d
int64_t function_3b8b4c(void) {
    // 0x3b8b4c
    int64_t result; // 0x3b8b4c
    return result;
}

// Address range: 0x3b8b52 - 0x3b8b6b
int64_t function_3b8b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)*(int32_t *)-0x12fe1767d45e0ce5; // 0x3b8b62
    if (a4 != 1) {
        result = function_3b8b4c();
    }
    // 0x3b8b66
    return result;
}

// Address range: 0x3bac59 - 0x3bac6b
int64_t function_3bac59(int64_t a1) {
    // 0x3bac59
    int64_t v1; // 0x3bac59
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x3bac59
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_c823b(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x3bac6b - 0x3bade8
int64_t function_3bac6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-40, 0x3bad06
    int64_t v2 = (int64_t)&v1; // 0x3bad4d
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3bad55
    *v3 = a2;
    int64_t v4 = v2 - 16; // 0x3bad56
    int64_t * v5 = (int64_t *)v4; // 0x3bad56
    *v5 = 0x3af282;
    int64_t v6 = v2 + 16; // 0x3bad5e
    int64_t * v7 = (int64_t *)v6; // 0x3bad5e
    *v7 = a7;
    *v5 = v4;
    *v3 = 0x3af282;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v8 = v2 + 8; // 0x3bad9d
    int64_t * v9 = (int64_t *)v8; // 0x3bada1
    v1 = *v9;
    *v3 = v8;
    *v9 = *v7;
    v1 = v6;
    return function_c823b(a1, *v3, a3, a4, a5, a6);
}

// Address range: 0x3bade8 - 0x3baf25
int64_t function_3bade8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bade8
    int64_t v1; // bp-48, 0x3bade8
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3bade8
    return function_c823b(a1, a2, a3, a4, v2, v2);
}

// Address range: 0x3baf25 - 0x3bb066
int64_t function_3baf25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3baf25
    int64_t v1; // 0x3baf25
    return function_c823b(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x3bb066 - 0x3bb1b7
int64_t function_3bb066(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3bb066
    int64_t v1; // bp-40, 0x3bb066
    int64_t v2 = (int64_t)&v1; // 0x3bb0f6
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3bb0fe
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x3bb10a
    *v3 = v4;
    int64_t v5 = v2 - 16; // 0x3bb10e
    int64_t * v6 = (int64_t *)v5; // 0x3bb10e
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x3bb111
    *v7 = v4;
    *v6 = v5;
    *v3 = v4;
    *(int64_t *)(v2 + 8) = v4;
    *v7 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v6 = v2;
    *v3 = v1;
    *v6 = v1;
    return function_c823b(a1, a2, 169, a4, a5, a6);
}

// Address range: 0x41f81f - 0x41f842
int64_t function_41f81f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41f81f
    int64_t v1; // 0x41f81f
    int64_t v2 = a1 - 5 + 2 * v1; // 0x41f81f
    __writegsdword(v2, __readgsdword(v2) - (int32_t)a2);
    bool v3; // 0x41f81f
    int32_t * v4 = (int32_t *)(a1 + 0x13594572 + (v3 ? -4 : 4)); // 0x41f833
    uint32_t v5 = *v4; // 0x41f833
    *v4 = 0x10000000 * v5 | v5 / 32;
    return v1 & 0xffe5d090 | 0x1a2f6f;
}

// Address range: 0x41f862 - 0x41f868
int64_t function_41f862(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41f862
    return __asm_in_135((int16_t)a3);
}

// Address range: 0x41f874 - 0x41f877
int64_t function_41f874(int64_t a1) {
    // 0x41f874
    return 0;
}

// Address range: 0x41f8cf - 0x41f8d3
int64_t function_41f8cf(void) {
    // 0x41f8cf
    int64_t result; // 0x41f8cf
    return result;
}

// Address range: 0x41f8e2 - 0x41f8f0
int64_t function_41f8e2(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x41f8e2
    bool v1; // 0x41f8e2
    *(char *)a1 = (char)(a3 / 256) + (char)a1 + (char)(bool)v1;
    return function_41f8f3(a1, a2, a3);
}

// Address range: 0x41f8f0 - 0x41f8f3
int64_t function_41f8f0(void) {
    // 0x41f8f0
    int64_t result; // 0x41f8f0
    return result;
}

// Address range: 0x41f8f3 - 0x41f8fa
int64_t function_41f8f3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41f8f3
    int64_t result; // 0x41f8f3
    *(char *)a1 = (char)(result ^ result);
    return result;
}

// Address range: 0x41f90d - 0x41f910
int64_t function_41f90d(void) {
    // 0x41f90d
    int64_t result; // 0x41f90d
    return result;
}

// Address range: 0x41f915 - 0x41f918
int64_t function_41f915(void) {
    // 0x41f915
    int64_t result; // 0x41f915
    return result;
}

// Address range: 0x41f91c - 0x41f91d
int64_t function_41f91c(void) {
    // 0x41f91c
    int64_t result; // 0x41f91c
    return result;
}

// Address range: 0x41f960 - 0x41f963
int64_t function_41f960(int64_t a1) {
    // 0x41f960
    int64_t result; // 0x41f960
    return result;
}

// Address range: 0x41f984 - 0x41fa07
int64_t function_41f984(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result2, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2; // 0x41f984
    bool v3; // 0x41f984
    *(char *)a1 = (char)v2 - (char)(a4 / 256) + (char)v3;
    char v4 = *(char *)-0x69b08c97; // 0x41f987
    *(char *)-0x69b08c97 = v4 - (char)a4;
    int64_t v5 = a1 & 0xffffffff; // 0x41f993
    if ((int64_t)v4 <= a4) {
        v5 = function_41f91c();
    }
    uint32_t result = 82 * *(int32_t *)&v1; // 0x41f990
    int64_t v6 = (v3 ? -4 : 4) + (v2 & 0xffffffff); // 0x41f995
    unsigned char v7 = *(char *)a7; // 0x41f996
    char v8 = *(char *)((v5 & 0xffffff00 | (int64_t)v7) + v6); // 0x41f99d
    uint32_t v9 = (int32_t)a3;
    if (llvm_ctpop_i8(v8 & (char)result) % 2 != 0) {
        // 0x41f9a2
        *(int32_t *)0x307ecf4f7ee76d56 = v9;
        return result;
    }
    // 0x41f9e8
    *(int32_t *)(a3 & 0xffffffff) = 2 * v9;
    unsigned char v10 = (char)v1 % 32; // 0x41f9fe
    if (v10 != 0) {
        char * v11 = (char *)(v6 - 65 + 4 * ((v3 ? 0x3fffffffffffffff : 1) + a7)); // 0x41f9fe
        unsigned char v12 = *v11; // 0x41f9fe
        *v11 = (char)(v9 < 0x1f00ce77) << 8 - v10 | v12 >> v10 | (char)((int16_t)v12 << (int16_t)(9 - v10));
    }
    return result2;
}

// Address range: 0x41fa0b - 0x41fa19
int64_t function_41fa0b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 39); // 0x41fa0b
    int64_t v2; // 0x41fa0b
    bool v3; // 0x41fa0b
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    return __asm_in_134(89);
}

// Address range: 0x41fa6f - 0x41fa79
int64_t function_41fa6f(int64_t a1) {
    // 0x41fa6f
    int64_t result; // 0x41fa6f
    return result;
}

// Address range: 0x41fa7f - 0x41fa86
int64_t function_41fa7f(void) {
    // 0x41fa7f
    return function_ffffffffe12002de();
}

// Address range: 0x41fa89 - 0x41fb60
int64_t function_41fa89(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x41fa89
    char * v4 = (char *)(v3 - 0x4278d49d + 4 * v3); // 0x41fa8b
    *v4 = *v4 | (char)a4;
    int32_t v5 = v3 & 0xffffff00 | a3 % 256; // 0x41fa97
    uint32_t v6 = v5 - 0x23785ea8; // 0x41fa97
    if (v5 <= 0x23785ea7) {
        int64_t v7 = v6; // 0x41fa97
        if (v6 != 0) {
            // 0x41fb52
            return v7 & 0xffffff00 | 16;
        }
        // 0x41faa0
        __asm_out((int16_t)a3, 0);
        char * v8 = (char *)(v3 - 0x2e79aa2b); // 0x41faa4
        *v8 = *v8 - (char)(v3 / 256) + (char)(*(char *)&v2 != 0);
        return v7 & 0xffff00ff | 0x6f00;
    }
    char * v9 = (char *)(v2 + 94); // 0x41fb06
    unsigned char v10 = *v9; // 0x41fb06
    unsigned char v11 = (char)v3; // 0x41fb06
    *v9 = v10 - v11;
    unsigned char v12 = (char)(v10 < v11) + (char)(v6 / 256); // 0x41fb09
    bool v13 = v10 < v11 ? v12 != -1 | (char)(v10 < v11) + 7 - v12 > 7 : v12 > 7; // 0x41fb09
    bool v14 = v13 ? v5 + 0x3bcf8129 + (int32_t)v13 <= v6 : v6 > 0xa0b8202e; // 0x41fb0b
    uint32_t v15 = (int32_t)a3; // 0x41fb10
    int32_t v16 = v14; // 0x41fb10
    uint32_t v17 = *(int32_t *)(v3 - 0x3c17a05a) + v16; // 0x41fb10
    int32_t v18 = v15 - v17; // 0x41fb10
    bool v19 = v14 ? v17 != -1 | v18 - v16 > v15 : v17 > v15; // 0x41fb10
    int64_t v20 = unknown_ffffffffb4a90030(); // 0x41fb16
    int64_t * v21 = (int64_t *)(v3 + 0x4206245b); // 0x41fb1b
    *v21 = *v21 + v3 + (int64_t)v19;
    char * v22 = (char *)(v3 + 78); // 0x41fb22
    *v22 = *v22 - 124;
    __asm_outsb((int16_t)v18, *(char *)&v1);
    return v20 ^ 0x7c00;
}

// Address range: 0x41fb77 - 0x41fb7a
int64_t function_41fb77(int64_t a1) {
    // 0x41fb77
    int64_t result; // 0x41fb77
    return result;
}

// Address range: 0x41fb8a - 0x41fb8b
int64_t function_41fb8a(void) {
    // 0x41fb8a
    int64_t result; // 0x41fb8a
    return result;
}

// Address range: 0x41fbc7 - 0x41fc98
int64_t function_41fbc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x41fbc7
    bool v3; // 0x41fbc7
    if (v3) {
        // 0x41fbd5
        return v2 & 0xffff00ff | (int64_t)&g5 & 0xffffffff;
    }
    char * v4 = (char *)(a3 + 0x756a3298); // 0x41fbdf
    *v4 = *v4 - (char)(v2 / 256);
    int64_t v5 = __asm_hlt(); // 0x41fbe5
    int16_t v6 = a3; // 0x41fbe6
    __asm_outsd(v6, *(int32_t *)&v1);
    if ((int32_t)v5 >= 0x7a1d0f3e) {
        // 0x41fc21
        __asm_int3();
        return a3 & 0xffffffff;
    }
    char v7 = *(char *)(v1 + 41); // 0x41fbf0
    int64_t v8 = (int64_t)*(int32_t *)0x82db7b73; // 0x41fbf7
    int64_t v9 = -0x1f268d40 * v8; // 0x41fbf7
    int64_t result = v9 & 0xffffffc0; // 0x41fbff
    if ((v7 & (char)a3) != 0 && v9 == -0x1f268d4000000000 * v8 >> 32) {
        result = function_41fb8a();
    }
    // 0x41fc01
    __asm_out_136(v6, (int32_t)result);
    return result;
}

// Address range: 0x41fca1 - 0x41fca3
int64_t function_41fca1(void) {
    // 0x41fca1
    int64_t result; // 0x41fca1
    return result;
}

// Address range: 0x41fcf9 - 0x41fcfd
int64_t function_41fcf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41fcf9
    int64_t result; // 0x41fcf9
    __asm_out_136((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x41fd01 - 0x41fd02
int64_t function_41fd01(void) {
    // 0x41fd01
    int64_t result; // 0x41fd01
    return result;
}

// Address range: 0x41fd23 - 0x41fd2a
int64_t function_41fd23(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41fd23
    return function_ffffffff95353bb1();
}

// Address range: 0x41fd2b - 0x41fd34
int64_t function_41fd2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41fd2b
    float80_t v1; // 0x41fd2b
    *(int16_t *)(a4 - 67) = (int16_t)v1;
    int64_t v2; // 0x41fd2b
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    return a1 & 0xffffffff;
}

// Address range: 0x41fd4d - 0x41fd4f
int64_t function_41fd4d(void) {
    // 0x41fd4d
    return function_41fd01();
}

// Address range: 0x41fdae - 0x41fdb1
int64_t function_41fdae(void) {
    // 0x41fdae
    int64_t result; // 0x41fdae
    return result;
}

// Address range: 0x469a34 - 0x469a35
int64_t function_469a34(int64_t a1, int64_t a2) {
    // 0x469a34
    int64_t v1; // 0x469a34
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x469a48 - 0x469a4b
int64_t function_469a48(int64_t a1) {
    // 0x469a48
    int64_t v1; // 0x469a48
    int64_t v2 = v1;
    bool v3; // 0x469a48
    return (v2 - (v3 ? 21 : 20)) % 256 | v2 & -256;
}

// Address range: 0x469b0c - 0x469b0e
int64_t function_469b0c(void) {
    // 0x469b0c
    int64_t v1; // 0x469b0c
    return __asm_int1(v1, v1);
}

// Address range: 0x469b12 - 0x469b1b
int64_t function_469b12(int64_t a1, int64_t a2) {
    // 0x469b12
    int64_t v1; // 0x469b12
    bool v2; // 0x469b12
    uint64_t v3 = v1 + 0x89c83820 + (int64_t)v2; // 0x469b12
    char v4 = *(char *)(a1 - 22); // 0x469b17
    return 256 * (int64_t)(v4 | (char)(v3 / 256)) | v3 & 0xffff00ff;
}

// Address range: 0x469b1c - 0x469b20
int64_t function_469b1c(void) {
    // 0x469b1c
    int64_t result; // 0x469b1c
    return result;
}

// Address range: 0x469b20 - 0x469b25
int64_t function_469b20(int64_t a1, int64_t a2) {
    // 0x469b20
    int64_t v1; // 0x469b20
    bool v2; // 0x469b20
    return (v1 - (v2 ? 143 : 144)) % 256 | __asm_int1(a1, a2) & -256;
}

// Address range: 0x469b42 - 0x469b43
int64_t function_469b42(void) {
    // 0x469b42
    int64_t result; // 0x469b42
    return result;
}

// Address range: 0x469b78 - 0x469b7b
int64_t function_469b78(int64_t a1) {
    // 0x469b78
    int64_t result; // 0x469b78
    return result;
}

// Address range: 0x469b8c - 0x469b92
int64_t function_469b8c(int64_t result) {
    // 0x469b8c
    int64_t v1; // 0x469b8c
    if ((v1 & 1024) != 0) {
        function_469b42();
    }
    // 0x469b8f
    return result;
}

// Address range: 0x469ba2 - 0x469ba7
int64_t function_469ba2(int64_t a1) {
    // 0x469ba2
    int64_t result; // 0x469ba2
    *(char *)a1 = (char)result + 1;
    return result;
}

// Address range: 0x469be2 - 0x469be5
int64_t function_469be2(void) {
    // 0x469be2
    int64_t result; // 0x469be2
    return result;
}

// Address range: 0x469c07 - 0x469d71
int64_t function_469c07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a7;
    int64_t v3 = a6;
    int64_t result; // 0x469c07
    bool v4; // 0x469c07
    if (v4 || v4) {
        // 0x469c09
        return result;
    }
    uint32_t v5 = (int32_t)a4 % 32; // 0x469c2d
    bool v6; // 0x469c07
    bool v7; // 0x469c07
    if (v5 != 0) {
        int32_t * v8 = (int32_t *)(a2 + 90); // 0x469c2d
        uint32_t v9 = *v8; // 0x469c2d
        int32_t v10 = v9 >> v5 | v9 << 32 - v5; // 0x469c2d
        *v8 = v10;
        v7 = v5 == 1 ? v10 / 0x40000000 % 2 != (int32_t)(v10 < 0) : v4;
        v6 = v10 < 0;
    }
    int16_t v11 = a3; // 0x469c30
    char v12 = __asm_in_137(v11); // 0x469c30
    if (v4 == v7) {
        // 0x469c34
        __asm_outsd(v11, *(int32_t *)&v1);
        return (int64_t)(*(int32_t *)0x580029f1542d6753 | -0x1529445);
    }
    uint64_t v13 = result & -256 | (int64_t)v12; // 0x469c30
    char * v14 = (char *)(a3 + 0x51853dd0); // 0x469c64
    unsigned char v15 = *v14; // 0x469c64
    unsigned char v16 = v15 + v12; // 0x469c64
    unsigned char v17 = v16 + (char)v6; // 0x469c64
    *v14 = v17;
    __asm_out_138(110, (int32_t)v13);
    if (v17 == 0 || (v6 ? v17 <= v15 : v16 < v15)) {
        // 0x469ced
        v1 = v3;
        int32_t v18 = *(int32_t *)(result + (int64_t)&v2); // 0x469cee
        *(int32_t *)(int64_t)(v18 & (int32_t)a1) = __asm_insd(v11);
        v3 = a3;
        int32_t * v19 = (int32_t *)((v13 & -256 | (int64_t)(v12 - 33 | 24)) + 108); // 0x469ca1
        *v19 = *v19 & (int32_t)(int64_t)&v3;
        int32_t v20 = __asm_in_134(-101); // 0x469ca4
        int64_t v21 = v20; // 0x469ca4
        *(char *)0x7d97566a291a1e7c = (char)v20;
        return 256 * ((int64_t)(v12 > 32) - a5 + v1) + v21 & 0xff00 | v21 & -0xff01;
    }
    int32_t v22 = *(int32_t *)(a5 - 32); // 0x469c6e
    int64_t v23 = v1 - 0x6f6c8e86; // 0x469c73
    __writegsbyte(v23, __readgsbyte(v23) + (char)(v13 / 256));
    int64_t v24 = 2 * v13; // 0x469c7b
    char v25 = *(char *)((v24 & 254) + result); // 0x469c7e
    return v24 & 0xffffff00 | (int64_t)(v25 ^ (char)(v22 ^ (int32_t)a5));
}

// Address range: 0x469d9d - 0x469d9e
int64_t function_469d9d(void) {
    // 0x469d9d
    int64_t result; // 0x469d9d
    return result;
}

// Address range: 0x469da8 - 0x469e36
int64_t function_469da8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x469da8
    bool v1; // 0x469da8
    bool v2 = v1;
    int64_t result; // 0x469da8
    if (v2 == v1 == !v2) {
        result = function_469d9d();
    }
    // 0x469dac
    return result;
}

// Address range: 0x469ea6 - 0x469ea7
int64_t function_469ea6(void) {
    // 0x469ea6
    int64_t result; // 0x469ea6
    return result;
}

// Address range: 0x469eb9 - 0x469eba
int64_t function_469eb9(void) {
    // 0x469eb9
    int64_t result; // 0x469eb9
    return result;
}

// Address range: 0x469ec6 - 0x469f2a
int64_t function_469ec6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x469ec6
    int64_t v1; // 0x469ec6
    char v2 = *(char *)(a1 - 0xfa3e248) | (char)v1; // 0x469ec7
    int64_t v3 = v2; // 0x469ecd
    if (v2 < 0) {
        v3 = function_469eb9();
    }
    char v4 = v3; // 0x469ed0
    *(char *)a1 = v4;
    __asm_out((int16_t)a3, v4);
    if (v2 != 0) {
        // 0x469ee7
        return -0x1c28ff8ff7b38f34;
    }
    // 0x469f21
    __asm_out_138(-107, 0x84c70cc);
    return -0x1c28ff8ff7b38f34;
}

// Address range: 0x469f2c - 0x469f2d
int64_t function_469f2c(void) {
    // 0x469f2c
    int64_t result; // 0x469f2c
    return result;
}

// Address range: 0x469f55 - 0x469f6b
int64_t function_469f55(int64_t a1, int64_t a2, int64_t a3) {
    // 0x469f55
    int64_t v1; // 0x469f55
    int32_t * v2 = (int32_t *)(v1 - 122); // 0x469f62
    int32_t v3 = *v2; // 0x469f62
    *v2 = v3 - (int32_t)v1;
    int64_t result; // 0x469f55
    if (v1 > (int64_t)v3) {
        result = function_469f2c();
    }
    // 0x469f67
    return result;
}

// Address range: 0x469f6c - 0x469f79
int64_t function_469f6c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x469f6c
    int64_t v1; // 0x469f6c
    *(char *)a2 = -1 - (char)v1;
    int64_t v2; // 0x469f6c
    *(char *)a4 = *(char *)&v2 + (char)(a4 / 256);
    bool v3; // 0x469f6c
    return v1 + 0x56316120 + (int64_t)v3 & 0xffffffff;
}

// Address range: 0x469f79 - 0x469fa2
int64_t function_469f79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x469f79
    int64_t v1; // 0x469f79
    uint32_t v2 = (int32_t)v1; // 0x469f79
    uint32_t v3 = *(int32_t *)(a4 + 0x2228e233 + v1) + v2; // 0x469f79
    int32_t * v4 = (int32_t *)(a1 - 102); // 0x469f82
    int32_t v5 = *v4; // 0x469f82
    *v4 = 2 * v5 | (int32_t)(v5 < 0);
    int64_t v6 = 2 * a4 & 254 | a4 & -256 | (int64_t)(v3 < v2); // bp-8, 0x469f85
    int32_t * v7 = (int32_t *)(4 * a2 + 42 + v1); // 0x469f8b
    *v7 = *v7 - (int32_t)(int64_t)&v6;
    int32_t * v8 = (int32_t *)((int64_t)v3 + 0x4f4a3356); // 0x469f8f
    *v8 = *v8 & (int32_t)v1;
    return function_ffffffffe40109b8();
}

// Address range: 0x469fa2 - 0x469fb6
int64_t function_469fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in(-23); // 0x469fa9
    int64_t v2; // 0x469fa2
    *(int32_t *)((v2 ^ a1) & 0xffffffff) = __asm_insd((int16_t)a3);
    bool v3; // 0x469fa2
    int64_t v4 = v3 ? -1 : 1; // 0x469fac
    *(char *)0x47f86a96 = *(char *)0x47f86a96 - 90;
    return (v2 | (int64_t)v1) & -256 | (int64_t)*(char *)(v4 + a2);
}

// Address range: 0x469ff3 - 0x46a001
int64_t function_469ff3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x469ff3
    int64_t result; // 0x469ff3
    return result;
}
