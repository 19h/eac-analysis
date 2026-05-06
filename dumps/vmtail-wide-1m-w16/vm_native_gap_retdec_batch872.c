/*
 * Targeted RetDec C for native executable gap queue batch 872.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3de280-0x3de480 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3de480-0x3de680 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3de680-0x3de880 rank=- name=- kind=- bytes=- uncovered=-
 *   0x480430-0x480630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x480630-0x480830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x480830-0x480a30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x480a30-0x480c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x480c30-0x480e30 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_17c481de();
int64_t function_18fff02();
int64_t function_386c601a();
int64_t function_3de280(int64_t a1);
int64_t function_3de303(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3de460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3de59b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3de6d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3de845(void);
int64_t function_480430(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48045e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_480493(int64_t a1);
int64_t function_4804c6(void);
int64_t function_480554(void);
int64_t function_4805a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4806b8(void);
int64_t function_4806d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4806f2(void);
int64_t function_4806fc(int64_t a1);
int64_t function_48070f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48072e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4807a4(int64_t a1);
int64_t function_4807c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4807e9(int64_t a1);
int64_t function_480802(void);
int64_t function_48082a(void);
int64_t function_480831(void);
int64_t function_480832(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_480838(int64_t a1, int64_t a2, int64_t a3);
int64_t function_480846(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48085a(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_480889(void);
int64_t function_48088d(void);
int64_t function_4808eb(int64_t a1);
int64_t function_48095b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_480965(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_480a3a(void);
int64_t function_480a3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_480a50(int64_t a1, int64_t a2, int64_t result, int64_t a4, int64_t a5);
int64_t function_480ac8(void);
int64_t function_480b1a(void);
int64_t function_480b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_480b68(void);
int64_t function_480b6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_480c6e(void);
int64_t function_480c78(void);
int64_t function_480ce1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_480dcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_480e00(int64_t a1);
int64_t function_7bab6330();
int64_t function_caf2a();
int64_t function_ffffffffbcacb91e();
int64_t function_ffffffffee4929af();
int64_t function_fffffffff2b1d2fe();
int64_t unknown_4987b415();

// Address range: 0x3de280 - 0x3de303
int64_t function_3de280(int64_t a1) {
    // 0x3de280
    int64_t v1; // 0x3de280
    return function_caf2a(v1, v1, v1, v1, v1, v1, v1);
}

// Address range: 0x3de303 - 0x3de460
int64_t function_3de303(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3de303
    int64_t v1; // 0x3de303
    return function_caf2a(a1, a2, v1, a4, a5, a6, a7);
}

// Address range: 0x3de460 - 0x3de59b
int64_t function_3de460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3de460
    int64_t v1; // 0x3de460
    return function_caf2a(a1, a2, a3, a4, v1, v1, 0x3d957c);
}

// Address range: 0x3de59b - 0x3de6d5
int64_t function_3de59b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3de59b
    int64_t v1; // bp-32, 0x3de59b
    int64_t v2 = (int64_t)&v1; // 0x3de5f7
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x3de60c
    int64_t * v4 = (int64_t *)v3; // 0x3de60d
    *v4 = 0x4f1dd215;
    int64_t v5 = v2 - 16; // 0x3de615
    int64_t * v6 = (int64_t *)v5; // 0x3de619
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x3de625
    int64_t v8 = *(int64_t *)(v2 + 24); // 0x3de62e
    *v6 = v8;
    *v7 = v3;
    int64_t v9 = v2 - 32; // 0x3de656
    int64_t * v10 = (int64_t *)v9; // 0x3de656
    *(int64_t *)(v2 - 40) = v1;
    *v7 = 0x3d131ea5;
    *v10 = v8;
    *v4 = *v7;
    *v10 = v9;
    *v7 = v1;
    *(int64_t *)(v2 + 16) = *v6;
    *v7 = v5;
    *v6 = v2;
    int64_t v11 = *v4; // 0x3de6c1
    *v6 = v11;
    *v7 = v11;
    int64_t v12; // 0x3de59b
    return function_caf2a(a1, a2, a3, a4, a5, v12, 0x3d9807);
}

// Address range: 0x3de6d5 - 0x3de82b
int64_t function_3de6d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3de6d5
    int64_t v1; // bp-40, 0x3de6d5
    int64_t v2 = (int64_t)&v1; // 0x3de7c9
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3de7d2
    *v3 = 0x3d9b20;
    *(int64_t *)(v2 + 32) = v1;
    *v3 = *(int64_t *)(v2 + 8);
    v1 = v2 + 16;
    int64_t v4; // 0x3de6d5
    bool v5; // 0x3de6d5
    return function_caf2a(a1, a2, a3, a4, a5, v4, 0x4000 * (int64_t)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2);
}

// Address range: 0x3de845 - 0x3de846
int64_t function_3de845(void) {
    // 0x3de845
    int64_t result; // 0x3de845
    return result;
}

// Address range: 0x480430 - 0x480442
int64_t function_480430(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x480430
    int64_t v1; // 0x480430
    __asm_out((int16_t)a3, (int32_t)v1);
    int32_t * v2 = (int32_t *)(a1 + 16 + 4 * a3); // 0x48043c
    uint32_t v3 = *v2; // 0x48043c
    *v2 = v3 / 0x20000 | 0x8000 * v3;
    return v1 & 0xd24ab073 | 0x2db54f8c;
}

// Address range: 0x48045e - 0x480487
int64_t function_48045e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48045e
    int64_t result; // 0x48045e
    return result;
}

// Address range: 0x480493 - 0x480496
int64_t function_480493(int64_t a1) {
    // 0x480493
    int64_t result; // 0x480493
    return result;
}

// Address range: 0x4804c6 - 0x4804c7
int64_t function_4804c6(void) {
    // 0x4804c6
    int64_t result; // 0x4804c6
    return result;
}

// Address range: 0x480554 - 0x480559
int64_t function_480554(void) {
    // 0x480554
    return function_7bab6330();
}

// Address range: 0x4805a3 - 0x48061e
int64_t function_4805a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4805a3
    int64_t v1; // 0x4805a3
    unsigned char v2 = (char)v1 - 22; // 0x4805a3
    if (a4 == 1 || v2 == 0) {
        // 0x4805a8
        return function_ffffffffee4929af();
    }
    // 0x48061a
    return v1 & -256 | (int64_t)v2;
}

// Address range: 0x4806b8 - 0x4806bd
int64_t function_4806b8(void) {
    // 0x4806b8
    return function_fffffffff2b1d2fe();
}

// Address range: 0x4806d4 - 0x4806d9
int64_t function_4806d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4806d4
    int64_t result; // 0x4806d4
    return result;
}

// Address range: 0x4806f2 - 0x4806f3
int64_t function_4806f2(void) {
    // 0x4806f2
    int64_t result; // 0x4806f2
    return result;
}

// Address range: 0x4806fc - 0x480707
int64_t function_4806fc(int64_t a1) {
    // 0x4806fc
    int64_t result; // 0x4806fc
    int32_t * v1 = (int32_t *)(result - 0x84ca571); // 0x4806fc
    bool v2; // 0x4806fc
    *v1 = *v1 + 0x698b7dbb + (int32_t)v2;
    return result;
}

// Address range: 0x48070f - 0x480715
int64_t function_48070f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48070f
    int64_t result; // 0x48070f
    return result;
}

// Address range: 0x48072e - 0x480774
int64_t function_48072e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48072e
    __asm_emms();
    int64_t result = __asm_sti(); // 0x48074d
    int64_t v1 = ((a4 + a1) % 256 | a4 & -256) - 1; // 0x480752
    if (v1 == 0) {
        // 0x480754
        return result;
    }
    int64_t result2 = result & 0xf18cad9d | 0xe735262; // 0x480767
    unsigned char v2 = (char)v1 % 32; // 0x48076e
    if (v2 != 0) {
        char * v3 = (char *)(result2 + 20); // 0x48076e
        *v3 = *v3 >> v2;
    }
    // 0x480754
    return result2;
}

// Address range: 0x4807a4 - 0x4807aa
int64_t function_4807a4(int64_t a1) {
    // 0x4807a4
    return function_386c601a();
}

// Address range: 0x4807c0 - 0x4807d4
int64_t function_4807c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4807c0
    int64_t v1; // 0x4807c0
    int32_t * v2 = (int32_t *)(v1 - 0x449ff64c); // 0x4807c0
    *v2 = *v2 & (int32_t)a3;
    bool v3; // 0x4807c0
    return function_480846(a2 & 0xffffffff, (v3 ? -4 : 4) + a2, a3);
}

// Address range: 0x4807e9 - 0x4807ea
int64_t function_4807e9(int64_t a1) {
    // 0x4807e9
    int64_t result; // 0x4807e9
    return result;
}

// Address range: 0x480802 - 0x480803
int64_t function_480802(void) {
    // 0x480802
    int64_t result; // 0x480802
    return result;
}

// Address range: 0x48082a - 0x48082c
int64_t function_48082a(void) {
    // 0x48082a
    int64_t v1; // 0x48082a
    return function_480838(v1, v1, v1);
}

// Address range: 0x480831 - 0x480832
int64_t function_480831(void) {
    // 0x480831
    int64_t result; // 0x480831
    return result;
}

// Address range: 0x480832 - 0x480838
int64_t function_480832(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x480832
    int64_t v1; // 0x480832
    *(char *)a4 = 2 * (char)v1;
    __asm_wait(a1, a2, a3, a4);
    return function_480889();
}

// Address range: 0x480838 - 0x480843
int64_t function_480838(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x5dea95303cdc3322; // 0x480838
    int64_t v2; // 0x480838
    return v2 & -256 | (int64_t)(v1 | (char)a3);
}

// Address range: 0x480846 - 0x480856
int64_t function_480846(int64_t a1, int64_t a2, int64_t a3) {
    // 0x480846
    int32_t v1; // 0x480846
    *(int32_t *)0x283306fc = (int32_t)(int64_t)&v1;
    int32_t * v2 = (int32_t *)(a1 + 79); // 0x48084c
    uint32_t v3 = *v2; // 0x48084c
    *v2 = v3 / 0x40000000 | 4 * v3;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v4; // 0x480846
    return v4 & 0x7dc93dba;
}

// Address range: 0x48085a - 0x480867
int64_t function_48085a(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // bp-8, 0x48085b
    uint32_t v2 = (int32_t)a4 % 32; // 0x48085c
    int64_t v3; // 0x48085a
    if (v2 != 0) {
        int64_t v4; // 0x48085a
        uint32_t v5 = (int32_t)v4; // 0x48085c
        v3 = v5 >> v2 | v5 << 32 - v2;
    }
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v6 = v3; // 0x48085f
    bool v7; // 0x48085a
    if (v7) {
        v6 = function_480802();
    }
    int64_t result = v6 & -256 | a2 % 256; // 0x480861
    int32_t * v8 = (int32_t *)result; // 0x480862
    *v8 = *v8 ^ (int32_t)(int64_t)&v1;
    return result;
}

// Address range: 0x480889 - 0x48088a
int64_t function_480889(void) {
    // 0x480889
    int64_t result; // 0x480889
    return result;
}

// Address range: 0x48088d - 0x48088e
int64_t function_48088d(void) {
    // 0x48088d
    int64_t result; // 0x48088d
    return result;
}

// Address range: 0x4808eb - 0x4808ee
int64_t function_4808eb(int64_t a1) {
    // 0x4808eb
    int64_t result; // 0x4808eb
    bool v1; // 0x4808eb
    if (v1 || false) {
        result = function_48088d();
    }
    // 0x4808ed
    return result;
}

// Address range: 0x48095b - 0x480965
int64_t function_48095b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48095b
    int64_t v1; // 0x48095b
    int64_t v2 = v1;
    char * v3 = (char *)(v1 + 62); // 0x48095d
    *v3 = *v3 / 4;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return (v2 + 251) % 256 | v2 & -256;
}

// Address range: 0x480965 - 0x4809f1
int64_t function_480965(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x480965
    int64_t v1; // 0x480965
    int64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x480965
    if (v4) {
        // 0x4809e0
        *(char *)a1 = (char)v2;
        int64_t result = (v2 - (v4 ? 85 : 84)) % 256 | v2 & -256; // 0x4809e6
        *(int32_t *)-0x2cba3cb64c828383 = (int32_t)result;
        return result;
    }
    uint64_t v5 = v1 + a6; // 0x480968
    *(int64_t *)a6 = v5;
    char v6 = *(char *)&v3; // 0x48096b
    int64_t result2 = v2 & -256 | (int64_t)((char)v2 + (char)(v5 < a6) - v6); // 0x48096b
    int32_t * v7 = (int32_t *)(a4 - 0x744bd05f + 8 * (a3 / 2 & 0x7f00 | a3 & 0x1fffffffffff00ff)); // 0x48096f
    *v7 = *v7 - (int32_t)a4;
    *(int32_t *)a1 = (int32_t)result2;
    return result2;
}

// Address range: 0x480a3a - 0x480a3d
int64_t function_480a3a(void) {
    // 0x480a3a
    int64_t result; // 0x480a3a
    return result;
}

// Address range: 0x480a3e - 0x480a4e
int64_t function_480a3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x480a3e
    bool v1; // 0x480a3e
    bool v2 = v1;
    int64_t v3; // 0x480a3e
    unsigned char v4 = (char)(v3 / 256); // 0x480a40
    unsigned char v5 = (char)v2 + (char)v3; // 0x480a40
    bool v6 = v2 ? v5 != -1 | (char)v2 + v4 - v5 > v4 : v5 > v4; // 0x480a40
    int64_t * v7 = (int64_t *)(v3 + 0xc045b6c); // 0x480a42
    *v7 = *v7 - a5 + (int64_t)v6;
    return v3 & -256 | 125;
}

// Address range: 0x480a50 - 0x480a7f
int64_t function_480a50(int64_t a1, int64_t a2, int64_t result, int64_t a4, int64_t a5) {
    // 0x480a50
    unknown_4987b415();
    bool v1; // 0x480a50
    if (!v1) {
        // 0x480a68
        __asm_in(-105);
        return result;
    }
    int64_t v2 = __asm_int1(); // 0x480a6e
    __asm_out((int16_t)result, (int32_t)v2);
    int64_t result2 = v2; // 0x480a73
    int64_t v3; // 0x480a50
    if ((int32_t)result != (int32_t)((a4 - v3) % 256 || a4 & 0xffffff00)) {
        result2 = function_ffffffffbcacb91e();
    }
    // 0x480a79
    return result2;
}

// Address range: 0x480ac8 - 0x480ac9
int64_t function_480ac8(void) {
    // 0x480ac8
    int64_t result; // 0x480ac8
    return result;
}

// Address range: 0x480b1a - 0x480b1b
int64_t function_480b1a(void) {
    // 0x480b1a
    int64_t result; // 0x480b1a
    return result;
}

// Address range: 0x480b30 - 0x480b44
int64_t function_480b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x480b41
    return a4 & 0xffffffff;
}

// Address range: 0x480b68 - 0x480b69
int64_t function_480b68(void) {
    // 0x480b68
    int64_t result; // 0x480b68
    return result;
}

// Address range: 0x480b6d - 0x480c1d
int64_t function_480b6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x480b6d
    int64_t v1; // 0x480b6d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x480b6d
    *v3 = *v3 + (int32_t)a3;
    uint32_t v4 = *(int32_t *)(4 * v2 - 0x259d47cc + v1) + (int32_t)v1; // 0x480b70
    int64_t v5 = v4; // 0x480b70
    int64_t v6 = *(int64_t *)v5; // 0x480b77
    __asm_int(3);
    int64_t v7 = a2 & 0xffffffff; // 0x480b7c
    if (v6 != 1 == v4 == 0) {
        v7 = function_480b68();
    }
    uint64_t v8 = v6 - 2; // 0x480b7e
    if (v8 != 0 != (v4 == 0)) {
        // 0x480b80
        return function_17c481de();
    }
    char * v9 = (char *)(a3 - 88); // 0x480bf0
    *v9 = *v9 + (char)v7;
    int64_t v10 = v2 + 38; // 0x480bf3
    __writefsbyte(v10, __readfsbyte(v10) + (char)v1);
    __readgsdword(0x21131e9);
    __writegsdword(0x21131e9, (int32_t)v1);
    float80_t v11; // 0x480b6d
    *(int32_t *)0x646bdc2 = (int32_t)v11;
    int32_t * v12 = (int32_t *)(v6 + 0x210751aa); // 0x480c04
    *v12 = *v12 + (int32_t)v1;
    __asm_in_133((int16_t)a3);
    *(int64_t *)(v5 - 8) = 36;
    char * v13 = (char *)(a1 - 101); // 0x480c17
    *v13 = (char)((char)v2 <= 133) - (char)(v8 / 256) + *v13;
    return (v2 + 122) % 256 | v2 & 0xffffff00;
}

// Address range: 0x480c6e - 0x480c6f
int64_t function_480c6e(void) {
    // 0x480c6e
    int64_t result; // 0x480c6e
    return result;
}

// Address range: 0x480c78 - 0x480c7d
int64_t function_480c78(void) {
    // 0x480c78
    return function_18fff02();
}

// Address range: 0x480ce1 - 0x480d62
int64_t function_480ce1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x480ce1
    bool v1; // 0x480ce1
    if (!v1 && !v1) {
        function_480c6e();
    }
    unsigned char v2 = *(char *)0x45b6ea0e & (char)(a4 / 256); // 0x480ce3
    int64_t v3 = 256 * (int64_t)v2 | a4 & -0xff01; // 0x480ce3
    uint64_t result = __asm_wait((int64_t)&g1, (int64_t)&g1, (int64_t)&g1, (int64_t)&g1); // 0x480ce9
    int64_t v4; // 0x480ce1
    if (v2 == 0 || v3 == 1) {
        // 0x480cec
        *(char *)(a2 + 21) = (char)(v4 / 256);
        char v5 = *(char *)(v3 + 0x2e61479c); // 0x480cf2
        return 256 * (int64_t)(v5 | (char)(result / 256)) | result & -0xff01;
    }
    // 0x480d2e
    __asm_int(127);
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v6 = (int32_t *)(result + 34); // 0x480d31
    *v6 = *v6 & (int32_t)v4;
    return result;
}

// Address range: 0x480dcc - 0x480de0
int64_t function_480dcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = *(int32_t *)(a4 - 0x4fa23a7); // 0x480dcf
    int64_t v2; // 0x480dcc
    uint32_t v3 = (int32_t)v2;
    int32_t v4 = v3 + 0x305da7a1; // 0x480dd5
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x480dd5
    *(int32_t *)a1 = v4;
    return 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v3 < 0xcfa2585f) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v3 % 16 > 30) | 4 * (int64_t)(v5 % 2 == 0)) | (int64_t)(v1 + (int32_t)v2 & -0xff01 | 512);
}

// Address range: 0x480e00 - 0x480e05
int64_t function_480e00(int64_t a1) {
    // 0x480e00
    int64_t v1; // 0x480e00
    int64_t v2 = v1;
    return (v2 + 96) % 256 | v2 & -256;
}
