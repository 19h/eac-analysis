/*
 * Targeted RetDec C for native executable gap queue batch 1276.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x33b642-0x33b842 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a7339-0x3a7539 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a7539-0x3a7739 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a7739-0x3a7939 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a7939-0x3a7b39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a7b39-0x3a7d39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a7d39-0x3a7f39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a7f39-0x3a8139 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a8139-0x3a8339 rank=- name=- kind=- bytes=- uncovered=-
 *   0x433e93-0x434093 rank=- name=- kind=- bytes=- uncovered=-
 *   0x434293-0x434493 rank=- name=- kind=- bytes=- uncovered=-
 *   0x434493-0x434693 rank=- name=- kind=- bytes=- uncovered=-
 *   0x434693-0x434893 rank=- name=- kind=- bytes=- uncovered=-
 *   0x434893-0x434a93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x434a93-0x434c93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x434c93-0x434e93 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2f438a88();
int64_t function_33b642(void);
int64_t function_33b657(int64_t a1);
int64_t function_33b6ba(void);
int64_t function_33b704(int64_t a1);
int64_t function_33b721(void);
int64_t function_33b72a(void);
int64_t function_33b730(int64_t a1, int64_t a2);
int64_t function_33b73f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_33b761(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33b776(int64_t a1);
int64_t function_33b783(void);
int64_t function_33b79b(void);
int64_t function_33b79f(void);
int64_t function_36d9367a();
int64_t function_3a7339(int64_t a1);
int64_t function_3a7370(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a749a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3a762a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3a77b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3a792f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3a7a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a7bd5(int64_t a1, int64_t a2);
int64_t function_3a7d26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3a7e61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a7fe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a811a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a82d0(void);
int64_t function_3a82d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_433e93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_433eda(void);
int64_t function_433f31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_433f6d(void);
int64_t function_433f7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_433faa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_433fbb(void);
int64_t function_433fd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_434076(void);
int64_t function_434293(int64_t a1);
int64_t function_434296(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4342db(int64_t a1);
int64_t function_434352(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43436f(void);
int64_t function_434374(void);
int64_t function_43439c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4343c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_434448(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43447b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4344f1(int64_t a1);
int64_t function_43451a(void);
int64_t function_434522(int64_t a1);
int64_t function_43454d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4345e3(int64_t a1);
int64_t function_4345fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_434658(int64_t a1);
int64_t function_434671(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_434706(void);
int64_t function_43473b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4347c4(int64_t a1);
int64_t function_434833(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_434973(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_434a4c(void);
int64_t function_434a7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_434b55(void);
int64_t function_434b64(void);
int64_t function_434b7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_434bd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_434bea(int64_t a1);
int64_t function_434c3d(void);
int64_t function_434c71(void);
int64_t function_434c8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_434da9(void);
int64_t function_434dab(void);
int64_t function_434de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48c78bc6();
int64_t function_78425f0();
int64_t function_c9849();
int64_t function_ffffffffc4684cc6();
int64_t unknown_3d7dc845();
int64_t unknown_ffffffffb40b4a36();
int64_t unknown_ffffffffbd2fe027();
int64_t unknown_fffffffff88efb4e();

// Address range: 0x33b642 - 0x33b647
int64_t function_33b642(void) {
    // 0x33b642
    int64_t result; // 0x33b642
    return result;
}

// Address range: 0x33b657 - 0x33b65c
int64_t function_33b657(int64_t a1) {
    // 0x33b657
    int64_t v1; // 0x33b657
    int64_t v2 = v1;
    return v2 + (int64_t)((int32_t)v2 >> 31 & 0xff00) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x33b6ba - 0x33b6bb
int64_t function_33b6ba(void) {
    // 0x33b6ba
    int64_t result; // 0x33b6ba
    return result;
}

// Address range: 0x33b704 - 0x33b70c
int64_t function_33b704(int64_t a1) {
    // 0x33b704
    int64_t result; // 0x33b704
    int32_t * v1 = (int32_t *)(result + 0x27fd0653); // 0x33b704
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x33b721 - 0x33b728
int64_t function_33b721(void) {
    // 0x33b721
    unknown_ffffffffbd2fe027();
    int64_t v1; // 0x33b721
    return function_33b73f(v1, v1, v1, v1);
}

// Address range: 0x33b72a - 0x33b72b
int64_t function_33b72a(void) {
    // 0x33b72a
    int64_t result; // 0x33b72a
    return result;
}

// Address range: 0x33b730 - 0x33b738
int64_t function_33b730(int64_t a1, int64_t a2) {
    uint64_t result = unknown_ffffffffb40b4a36(a1, a2); // 0x33b730
    int64_t v1; // 0x33b730
    *(char *)a1 = (char)(result / 256) + (char)v1;
    return result;
}

// Address range: 0x33b73f - 0x33b754
int64_t function_33b73f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x33b73f
    int64_t v1; // 0x33b73f
    int32_t * v2 = (int32_t *)(unknown_3d7dc845() + v1 & 0xffffffff); // 0x33b746
    uint32_t v3 = *v2; // 0x33b746
    uint32_t v4 = v3 + (int32_t)a3; // 0x33b746
    *v2 = v4;
    unknown_fffffffff88efb4e();
    int64_t v5; // 0x33b73f
    char v6 = *(char *)&v5; // 0x33b74d
    *(char *)a2 = v6 + (char)(a3 / 256) + (char)(v4 < v3);
    return a4 & 0xffffffff ^ 155;
}

// Address range: 0x33b761 - 0x33b765
int64_t function_33b761(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 122); // 0x33b761
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x33b761
    return result;
}

// Address range: 0x33b776 - 0x33b779
int64_t function_33b776(int64_t a1) {
    // 0x33b776
    int64_t result; // 0x33b776
    return result;
}

// Address range: 0x33b783 - 0x33b784
int64_t function_33b783(void) {
    // 0x33b783
    int64_t result; // 0x33b783
    return result;
}

// Address range: 0x33b79b - 0x33b79d
int64_t function_33b79b(void) {
    // 0x33b79b
    return function_33b783();
}

// Address range: 0x33b79f - 0x33b7a1
int64_t function_33b79f(void) {
    // 0x33b79f
    return function_33b72a();
}

// Address range: 0x3a7339 - 0x3a7370
int64_t function_3a7339(int64_t a1) {
    // 0x3a7339
    int64_t v1; // bp+16, 0x3a7339
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3a7339
    return function_c9849(v2, v2, v2, v2, v2, v2);
}

// Address range: 0x3a7370 - 0x3a749a
int64_t function_3a7370(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a7370
    int64_t v1; // bp-56, 0x3a7370
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3a7370
    return function_c9849(a1, a2, a3, v2, v2, v2);
}

// Address range: 0x3a749a - 0x3a762a
int64_t function_3a749a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3a749a
    return function_c9849(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3a762a - 0x3a77b5
int64_t function_3a762a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3a762a
    int64_t v1; // bp-24, 0x3a762a
    int64_t v2 = (int64_t)&v1; // 0x3a7720
    *(int64_t *)(v2 - 16) = a7;
    v1 = v2 + 16;
    return function_c9849(a1, a2, a3, a7, a5, a6);
}

// Address range: 0x3a77b5 - 0x3a792f
int64_t function_3a77b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x250e3e3e; // bp-40, 0x3a78c2
    int64_t v2 = (int64_t)&v1; // 0x3a78fb
    *(int64_t *)(v2 - 8) = 0x250e3e3e;
    *(int64_t *)(v2 - 24) = v2;
    *(int64_t *)(v2 - 32) = *(int64_t *)(v2 - 16);
    return function_c9849(a1, a2, a3, a4, 0x1edd34b5, a6);
}

// Address range: 0x3a792f - 0x3a7a83
int64_t function_3a792f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3a792f
    return function_c9849(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3a7a83 - 0x3a7bd5
int64_t function_3a7a83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a7a83
    int64_t v1; // bp-48, 0x3a7a83
    v1 = (int64_t)&v1;
    int64_t v2; // 0x3a7a83
    return function_c9849(a1, a2, a3, a4, a5, v2);
}

// Address range: 0x3a7bd5 - 0x3a7d26
int64_t function_3a7bd5(int64_t a1, int64_t a2) {
    // 0x3a7bd5
    int64_t v1; // bp-32, 0x3a7bd5
    int64_t v2 = (int64_t)&v1; // 0x3a7c63
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x3a7c77
    int64_t * v4 = (int64_t *)v3; // 0x3a7c78
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x3a7c7b
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x3a7c7f
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x3a7c99
    int64_t v8 = *v7; // 0x3a7c99
    *v4 = v8;
    *v6 = 0x6d0d10b8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x3a7ccd
    *v9 = v5;
    v1 = *v6;
    *v6 = 0xfcd3620;
    int64_t * v10 = (int64_t *)(v2 - 24); // 0x3a7cdc
    *v10 = 0x5160b21a;
    *v9 = v8;
    *v7 = *v6;
    *v6 = *v4;
    *v10 = v3;
    int64_t v11 = *v4; // 0x3a7d12
    *v6 = v11;
    *v10 = v11;
    int64_t v12; // 0x3a7bd5
    return function_c9849(a1, a2, v12, v12, v12, v12);
}

// Address range: 0x3a7d26 - 0x3a7e61
int64_t function_3a7d26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 169; // bp-32, 0x3a7ded
    int64_t v2 = (int64_t)&v1; // 0x3a7e36
    *(int64_t *)(v2 - 16) = 169;
    *(int64_t *)(v2 - 8) = v2 + 8;
    return function_c9849(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3a7e61 - 0x3a7fe6
int64_t function_3a7e61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a7e61
    int64_t v1; // bp-64, 0x3a7e61
    int64_t v2 = (int64_t)&v1; // 0x3a7fad
    int64_t v3 = v2 + 16; // 0x3a7fb3
    v1 = v3;
    *(int64_t *)(v2 + 8) = *(int64_t *)v3;
    v1 = v3;
    int64_t v4; // 0x3a7e61
    return function_c9849(a1, a2, v4, a4, a5, v4);
}

// Address range: 0x3a7fe6 - 0x3a811a
int64_t function_3a7fe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a7fe6
    int64_t v1; // bp-56, 0x3a7fe6
    int64_t v2 = (int64_t)&v1; // 0x3a80c5
    v1 = a1;
    *(int64_t *)(v2 + 32) = a1;
    int64_t v3 = v2 + 8; // 0x3a80df
    int64_t * v4 = (int64_t *)v3; // 0x3a80e3
    *(int64_t *)(v2 - 8) = *v4;
    v1 = v3;
    *v4 = v2 + 24;
    int64_t v5; // 0x3a7fe6
    return function_c9849(a1, a2, a3, v5, v5, v5);
}

// Address range: 0x3a811a - 0x3a8242
int64_t function_3a811a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a811a
    int64_t v1; // bp-48, 0x3a811a
    v1 = (int64_t)&v1;
    int64_t v2; // 0x3a811a
    return function_c9849(a1, a2, a3, a4, v2, v2);
}

// Address range: 0x3a82d0 - 0x3a82d1
int64_t function_3a82d0(void) {
    // 0x3a82d0
    int64_t result; // 0x3a82d0
    return result;
}

// Address range: 0x3a82d1 - 0x3a82d5
int64_t function_3a82d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x3a82d1
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x3a82d1
    return result;
}

// Address range: 0x433e93 - 0x433eaa
int64_t function_433e93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 104); // 0x433e9e
    int64_t v2; // 0x433e93
    *v1 = *v1 ^ (char)((v2 ^ v2) / 256);
    int64_t v3; // 0x433e93
    *(int32_t *)a1 = *(int32_t *)&v3;
    return a3 & 0xffffffff;
}

// Address range: 0x433eda - 0x433edf
int64_t function_433eda(void) {
    // 0x433eda
    int64_t v1; // 0x433eda
    return v1 & -200;
}

// Address range: 0x433f31 - 0x433f7a
int64_t function_433f31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x433f31
    int64_t v1; // 0x433f31
    uint64_t v2 = v1;
    if (a4 == 0) {
        // 0x433f6b
        __asm_out_133((int16_t)a3, (char)v1);
        __asm_out(122, (int32_t)v1);
        bool v3; // 0x433f31
        int64_t v4 = (v3 ? -1 : 1) + a1; // 0x433f70
        *(int32_t *)v4 = (int32_t)a2;
        char * v5 = (char *)(v4 + (v3 ? -48 : -40)); // 0x433f77
        *v5 = *v5 - (char)(v2 / 256);
        return 0;
    }
    // 0x433f33
    int64_t v6; // bp-8, 0x433f31
    int64_t v7 = (int64_t)&v6; // bp-16, 0x433f34
    uint32_t v8 = (int32_t)__asm_sti() & -0xff01 | (int32_t)&g2; // 0x433f3b
    uint32_t v9 = (int32_t)(int64_t)&v7; // 0x433f3b
    uint32_t v10 = v8 - v9; // 0x433f3b
    char * v11 = (char *)(int64_t)v10; // 0x433f3d
    *v11 = *v11 + (char)a3 + (char)(v8 < v9);
    int32_t v12 = *(int32_t *)(v2 - 0x1db5c449); // 0x433f3f
    *(int32_t *)(a2 + 0x21e60eaa + a3) = (int32_t)a2;
    *(int64_t *)(int64_t)(0x2501a6b * v12) = (v2 ^ a1) & 0xffffffff;
    __asm_out(70, v10);
    return function_433fbb();
}

// Address range: 0x433f6d - 0x433f6e
int64_t function_433f6d(void) {
    // 0x433f6d
    int64_t result; // 0x433f6d
    return result;
}

// Address range: 0x433f7b - 0x433f9b
int64_t function_433f7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x433f7b
    int64_t v1; // 0x433f7b
    uint32_t v2 = *(int32_t *)(v1 - 0x28d17c32); // 0x433f7b
    uint32_t v3 = (int32_t)a4; // 0x433f7b
    int64_t v4; // 0x433f7b
    if (v2 > v3) {
        v4 = function_433f6d();
    }
    int64_t v5 = v4;
    float80_t v6; // 0x433f7b
    *(float32_t *)0x3300481c = (float32_t)v6;
    return (v5 + (v2 < v3 ? 114 : 113)) % 256 | v5 & -256;
}

// Address range: 0x433faa - 0x433fb1
int64_t function_433faa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x433faa
    return __asm_hlt(a1);
}

// Address range: 0x433fbb - 0x433fc5
int64_t function_433fbb(void) {
    // 0x433fbb
    return __asm_hlt(0x559d457c) ^ 166;
}

// Address range: 0x433fd8 - 0x43406b
int64_t function_433fd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x433fd8
    if (llvm_ctpop_i8((char)a1 - 20) % 2 != 0) {
        // 0x433fdd
        int64_t result; // 0x433fd8
        return result;
    }
    // 0x434013
    __asm_in(64);
    if ((int32_t)a1 >= 20) {
        // 0x434018
        *(int32_t *)a1 = (int32_t)a2;
        return 0xf7f10956;
    }
    int32_t * v1 = (int32_t *)(a2 + 14); // 0x43404c
    *v1 = *v1 + 1;
    __asm_int(-45);
    return function_36d9367a();
}

// Address range: 0x434076 - 0x43407f
int64_t function_434076(void) {
    // 0x434076
    return function_78425f0();
}

// Address range: 0x434293 - 0x434294
int64_t function_434293(int64_t a1) {
    // 0x434293
    int64_t result; // 0x434293
    return result;
}

// Address range: 0x434296 - 0x4342a1
int64_t function_434296(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 44); // 0x434296
    *v1 = *v1 | (int32_t)a4;
    int64_t result; // 0x434296
    return result;
}

// Address range: 0x4342db - 0x4342e4
int64_t function_4342db(int64_t a1) {
    // 0x4342db
    int64_t result; // 0x4342db
    int32_t * v1 = (int32_t *)(result + 10); // 0x4342db
    bool v2; // 0x4342db
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    return result;
}

// Address range: 0x434352 - 0x434367
int64_t function_434352(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x434352
    int64_t v1; // 0x434352
    int64_t result = v1 & 0xe453677d; // 0x434355
    while ((*(char *)(result - 51) & (char)a3) != 0) {
        // continue -> 0x43435d
    }
    int32_t * v2 = (int32_t *)(a1 + 98); // 0x434361
    *v2 = *v2 ^ (int32_t)a2;
    return result;
}

// Address range: 0x43436f - 0x434370
int64_t function_43436f(void) {
    // 0x43436f
    int64_t result; // 0x43436f
    return result;
}

// Address range: 0x434374 - 0x434375
int64_t function_434374(void) {
    // 0x434374
    int64_t result; // 0x434374
    return result;
}

// Address range: 0x43439c - 0x4343be
int64_t function_43439c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43439c
    int64_t v1; // 0x43439c
    int32_t v2 = v1; // 0x4343a2
    *(int32_t *)a1 = v2;
    int32_t * v3 = (int32_t *)(a4 - 0xde625fd); // 0x4343a3
    *v3 = *v3 ^ (int32_t)v1;
    uint32_t v4 = 0x10000 * v2 >> 16; // 0x4343a9
    int32_t * v5 = (int32_t *)((a4 & -256 | 102) + 68 + 2 * v1); // 0x4343b2
    int64_t v6 = v1; // 0x4343ae
    int64_t v7; // 0x43439c
    *(int64_t *)v6 = v7;
    int32_t v8 = *v5 | (int32_t)v6; // 0x4343b2
    *v5 = v8;
    int64_t v9 = v6 - (int64_t)&g3; // 0x4343b9
    v7 = v6;
    while (v8 == 0) {
        // 0x4343ae
        v6 = v9 - 8;
        *(int64_t *)v6 = v7;
        v8 = *v5 | (int32_t)v6;
        *v5 = v8;
        v9 = v6 - (int64_t)&g3;
        v7 = v6;
    }
    // 0x4343bd
    return ((int64_t)(v4 / 256) + (int64_t)v4) % 256 | (int64_t)(v4 & -256);
}

// Address range: 0x4343c9 - 0x434446
int64_t function_4343c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4343c9
    bool v1; // 0x4343c9
    if (!v1 && !v1) {
        function_434374();
    }
    int16_t v2 = a3; // 0x4343ce
    __asm_outsd(v2, (int32_t)a2);
    __asm_outsb(v2, (char)a2);
    int64_t result = a3 & 0xffffffff; // 0x4343d1
    int64_t v3; // 0x4343c9
    int64_t v4; // 0x4343c9
    if (!v1) {
        int32_t * v5 = (int32_t *)(v4 - 76); // 0x434424
        int32_t v6 = a1; // 0x434424
        *v5 = *v5 ^ v6;
        int32_t v7 = *(int32_t *)(v3 + 92); // 0x43442e
        if (v7 > v6) {
            // 0x434445
            return __asm_int1(v6 - v7);
        }
        // 0x434436
        return result;
    }
    int32_t v8 = *(int32_t *)(result - 0x5ea7bc2e); // 0x4343df
    int64_t v9; // 0x4343c9
    int32_t v10 = (int64_t)&v9; // 0x4343df
    int32_t v11 = v8 - v10; // 0x4343df
    if (v11 < 0 != ((v11 ^ v8) & (v8 ^ v10)) < 0) {
        // 0x43443b
        int64_t v12; // 0x4343c9
        *(int32_t *)v12 = (int32_t)v4 | 0x59eb7000;
        return result;
    }
    uint32_t v13 = *(int32_t *)0x2f79ed0032803a; // 0x4343ec
    char * v14 = (char *)(v4 + 0x5548276e); // 0x4343f5
    char v15 = *v14; // 0x4343f5
    char v16 = v13 / 256; // 0x4343f5
    char v17 = v15 - v16; // 0x4343f5
    *v14 = v17;
    int32_t result2 = v13; // 0x4343e5
    if (v17 < 0 == ((v17 ^ v15) & (v15 ^ v16)) < 0) {
        uint32_t v18 = *(int32_t *)0x2f79ed0032803a; // 0x4343ec
        char * v19 = (char *)(v3 + 0x5548276e); // 0x4343f5
        char v20 = *v19; // 0x4343f5
        char v21 = v18 / 256; // 0x4343f5
        char v22 = v20 - v21; // 0x4343f5
        *v19 = v22;
        result2 = v18;
        while (v22 < 0 == ((v22 ^ v20) & (v20 ^ v21)) < 0) {
            // 0x4343e7
            v18 = *(int32_t *)0x2f79ed0032803a;
            v19 = (char *)(v3 + 0x5548276e);
            v20 = *v19;
            v21 = v18 / 256;
            v22 = v20 - v21;
            *v19 = v22;
            result2 = v18;
        }
    }
    // 0x43443b
    *(int32_t *)v3 = *(int32_t *)&v3 | 0x59eb7000;
    return result2;
}

// Address range: 0x434448 - 0x434466
int64_t function_434448(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x434448
    int64_t v1; // 0x434448
    __asm_outsb((int16_t)a3, (char)v1);
    bool v2; // 0x434448
    int64_t v3 = (v2 ? -4 : 4) + a2; // 0x434450
    int32_t * v4 = (int32_t *)v3; // 0x43445a
    *v4 = *v4 | -92;
    return v1 + 0x7056f042 & 0x4c702d00 | (int64_t)*(char *)v3;
}

// Address range: 0x43447b - 0x4344df
int64_t function_43447b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43447b
    int64_t v1; // 0x43447b
    // 0x4344dd
    *(int32_t *)a1 = (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x4344f1 - 0x4344f2
int64_t function_4344f1(int64_t a1) {
    // 0x4344f1
    int64_t result; // 0x4344f1
    return result;
}

// Address range: 0x43451a - 0x43451d
int64_t function_43451a(void) {
    // 0x43451a
    int64_t result; // 0x43451a
    return result;
}

// Address range: 0x434522 - 0x434523
int64_t function_434522(int64_t a1) {
    // 0x434522
    int64_t result; // 0x434522
    return result;
}

// Address range: 0x43454d - 0x4345e2
int64_t function_43454d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t result; // 0x43454d
    bool v3; // 0x43454d
    if (v3) {
        // 0x434555
        return result;
    }
    int32_t * v4 = (int32_t *)(result + 77); // 0x43457a
    int32_t v5 = *v4 + 1; // 0x43457a
    *v4 = v5;
    unsigned char v6 = *(char *)&v1; // 0x43457d
    *(char *)v1 = v6 / 2 | 128 * v6;
    *(char *)a1 = *(char *)&v2;
    if (v5 == 0 != (v5 < 0 == (v6 % 2 != v6 / 128))) {
        // 0x434555
        return result;
    }
    // 0x4345c4
    float80_t v7; // 0x43454d
    *(float80_t *)((v3 ? -1 : 1) + a1) = __asm_fbstp(v7);
    while (true) {
        // continue -> 0x4345c7
    }
}

// Address range: 0x4345e3 - 0x4345ee
int64_t function_4345e3(int64_t a1) {
    // 0x4345e3
    int64_t v1; // 0x4345e3
    bool v2; // 0x4345e3
    return v1 + 0x3f62d20a + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x4345fc - 0x434625
int64_t function_4345fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4345fc
    int64_t v1; // 0x4345fc
    *(char *)0x2ada5b17 = *(char *)0x2ada5b17 + (char)v1;
    uint32_t result = *(int32_t *)0xcc597e65; // 0x43461c
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x434658 - 0x43465b
int64_t function_434658(int64_t a1) {
    // 0x434658
    int64_t result; // 0x434658
    return result;
}

// Address range: 0x434671 - 0x43467d
int64_t function_434671(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x434671
    int64_t v1; // 0x434671
    return (int64_t)(*(int32_t *)(a3 - 0x7c8a9c) + (int32_t)v1);
}

// Address range: 0x434706 - 0x43470b
int64_t function_434706(void) {
    // 0x434706
    int64_t result; // 0x434706
    return result;
}

// Address range: 0x43473b - 0x434772
int64_t function_43473b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x43473b
    int64_t v1; // 0x43473b
    __asm_outsd((int16_t)a3, (int32_t)v1);
    uint32_t v2 = 0x7652209b * *(int32_t *)(v1 + 0x20c806) % 32; // 0x434761
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(a1 + 62); // 0x434761
        uint32_t v4 = *v3; // 0x434761
        *v3 = v4 << v2 | (int32_t)((int64_t)v4 >> (int64_t)(33 - v2));
    }
    return (__asm_wait() ^ 128) + 0xd0dc5a4f & 0xffffffff;
}

// Address range: 0x4347c4 - 0x4347c7
int64_t function_4347c4(int64_t a1) {
    // 0x4347c4
    int64_t result; // 0x4347c4
    return result;
}

// Address range: 0x434833 - 0x434972
int64_t function_434833(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x434833
    int64_t v1; // 0x434833
    int64_t v2 = v1;
    float80_t v3; // 0x434833
    *(int16_t *)0x5382e376 = (int16_t)v3;
    unsigned char v4 = (char)a4 % 32; // 0x434872
    if (v4 != 0) {
        char * v5 = (char *)(a2 - 33); // 0x434872
        unsigned char v6 = *v5; // 0x434872
        *v5 = v6 >> v4 | v6 << 8 - v4;
    }
    int64_t result = v1 & 0x88a58228 | 0x775a7d42; // 0x434842
    char * v7 = (char *)(a4 - 93); // 0x434878
    *v7 = *v7 + (char)(a1 / 256);
    int32_t * v8 = (int32_t *)(8 * v1 - 99 + result); // 0x43487e
    int32_t v9 = *v8; // 0x43487e
    int32_t v10 = (int32_t)a2 + 1; // 0x43487e
    int32_t v11 = v9 + v10; // 0x43487e
    *v8 = v11;
    if (v11 == 0) {
        // 0x43488c
        return result;
    }
    char * v12 = (char *)(a1 - 0x5880ace3); // 0x434884
    unsigned char v13 = *v12; // 0x434884
    bool v14 = ((v11 ^ v9) & (v11 ^ v10)) < 0; // 0x434884
    bool v15 = v11 < 0; // 0x434884
    if (v4 != 0) {
        char v16 = v13 >> v4; // 0x434884
        *v12 = v16;
        v14 = v4 == 1 ? v13 < 0 : ((v11 ^ v9) & (v11 ^ v10)) < 0;
        v15 = v16 < 0;
    }
    if (v15 != v14) {
        // 0x43488c
        return result;
    }
    uint32_t v17 = *(int32_t *)(a4 - 0x1ed6b82e); // 0x4348d7
    int64_t result2 = v2 & 0xffffffff; // 0x4348dd
    bool v18; // 0x434833
    int64_t v19; // 0x434833
    if ((int64_t)v17 < a3) {
        // 0x434936
        v18 = v17 < (int32_t)a3;
        v19 = result2;
        // 0x43488c
        return (v19 + 203 + (int64_t)v18) % 256 | v19 & -256;
    }
    // 0x4348e7
    *(char *)0x1710916 = *(char *)0x1710916 | -61;
    if (a4 == 1) {
        // 0x4348f0
        return result2;
    }
    // 0x434936
    v18 = *(char *)(a2 - 0x14b3fc8e) < (char)(a3 / 256);
    v19 = (v2 + 217) % 256 | v2 & 0xffffff00;
    // 0x43488c
    return (v19 + 203 + (int64_t)v18) % 256 | v19 & -256;
}

// Address range: 0x434973 - 0x434a39
int64_t function_434973(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    unsigned char v3 = (char)(a4 / 256); // 0x434973
    int64_t v4; // 0x434973
    unsigned char v5 = *(char *)(v4 + 11) + v3; // 0x434973
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x434973
    int64_t v7 = 256 * (int64_t)v5 | a4 & -0xff01; // 0x434973
    bool v8 = v6 % 2 == 0; // 0x434977
    int64_t v9 = v7; // 0x434977
    if (v5 >= v3 && v5 != 0) {
        // 0x434979
        v8 = (__asm_int1((int32_t)a1) & 1024) != 0;
        v9 = v7 & -256 | 21;
    }
    int64_t v10 = a3; // 0x434992
    bool v11 = v8;
    v10 = v10 & -256 | 25;
    while (!v11) {
        // 0x434984
        v11 = false;
        v10 = v10 & -256 | 25;
    }
    int32_t * v12 = (int32_t *)(v9 + 126); // 0x434997
    *v12 = *v12 - (int32_t)a2;
    uint32_t v13 = *(int32_t *)&v1; // 0x43499a
    uint32_t v14 = *(int32_t *)&v2; // 0x43499a
    bool v15; // 0x434973
    int64_t v16 = v15 ? -4 : 4; // 0x43499a
    v2 += v16;
    v1 += v16;
    int32_t * v17 = (int32_t *)(v9 + 116); // 0x4349a0
    uint32_t v18 = *v17; // 0x4349a0
    *v17 = v18 / 2 | 0x80000000 * (int32_t)(v13 < v14);
    if (v18 < 0 != v13 < v14) {
        // 0x4349c3
        return v13 < v14 ? 0x493d9614 : 0x493d9615;
    }
    int16_t v19 = v10; // 0x4349a9
    *(int32_t *)v2 = __asm_insd(v19);
    int32_t * v20 = (int32_t *)(4 * v2 + v9); // 0x4349dc
    *v20 = *v20 & (int32_t)v4;
    int32_t v21 = *(int32_t *)v1; // 0x4349e1
    v1 += v16;
    int32_t * v22 = (int32_t *)(v4 - 0x16a9f5d); // 0x4349e4
    *v22 = *v22 + (int32_t)v10;
    unsigned char v23 = (char)v21; // 0x4349ea
    char v24 = v23 - 85; // 0x4349ea
    unsigned char v25 = llvm_ctpop_i8(v24); // 0x4349ea
    int32_t * v26 = (int32_t *)(v2 + 63); // 0x4349f2
    int32_t v27 = *v26; // 0x4349f2
    *v26 = v27 - (v21 & -0xff01 | 256 * (64 * (int32_t)(v24 == 0) | (int32_t)(v23 < 85) | 128 * (int32_t)(v24 < 0) | 16 * (int32_t)(v23 % 16 > 20) | 4 * (int32_t)(v25 % 2 == 0)) | 512);
    int64_t v28 = v9 - 0x5141db8a; // 0x4349f7
    unsigned char v29 = __readgsbyte(v28) + (char)v9; // 0x4349f7
    __writegsbyte(v28, v29);
    *(int16_t *)((v4 & 0xffffff3e | 193) - 1) = (int16_t)v4;
    while (v29 < 0) {
        // continue -> 0x4349fe
    }
    int64_t v30 = __asm_int3(v2, v1); // 0x434a05
    __asm_outsd(v19, *(int32_t *)v1);
    return (v30 + 239) % 256 | v30 & -256;
}

// Address range: 0x434a4c - 0x434a4d
int64_t function_434a4c(void) {
    // 0x434a4c
    int64_t result; // 0x434a4c
    return result;
}

// Address range: 0x434a7d - 0x434b31
int64_t function_434a7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x434a7d
    int64_t v1; // 0x434a7d
    __asm_fldenv(*(int224_t *)&v1);
    v1 = 0x652baa50;
    unsigned char v2 = *(char *)-0x479be4d829409405; // 0x434aa9
    int64_t v3 = (int64_t)v2 | (int64_t)&g1; // 0x434aa9
    int64_t v4 = v3 | (int64_t)(*(int32_t *)0x46d0167725f3352e & -0x10000); // 0x434ab2
    unsigned char v5 = (char)v3 ^ 1; // 0x434abe
    int64_t result = v4 & -256 | (int64_t)v5; // 0x434abe
    if (a4 != 1 != (v5 == 0)) {
        // 0x434ac2
        return result;
    }
    int32_t v6 = result; // 0x434aef
    *(int32_t *)0x6b7e666d = *(int32_t *)0x6b7e666d - v6;
    *(int32_t *)0x652baa50 = *(int32_t *)0x652baa50 ^ v6;
    int32_t * v7 = (int32_t *)(result + 111); // 0x434afa
    int32_t v8 = *v7 ^ 1; // 0x434afa
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x434afa
    *v7 = v8;
    unsigned char v10 = v5 + 29; // 0x434aff
    int64_t result2 = v4 & -0x10000 | (int64_t)v10 | 0x4000 * (int64_t)(v8 == 0) | 0x8000 * (int64_t)(v8 < 0) | 1024 * (int64_t)(v9 % 2 == 0) | 512; // 0x434aff
    int64_t v11 = (int64_t)*(int32_t *)0xda13542d; // 0x434b02
    int64_t v12 = 0x79396818 * v11; // 0x434b02
    v1 = v12 & 0xfffffff8;
    if (a4 == 2 || v10 == 0) {
        int64_t v13 = v12 == 0x7939681800000000 * v11 >> 32 ? 0x43332f5 : 0x43332f6; // 0x434b0b
        unsigned char v14 = *(char *)(a2 & 0xffffffff ^ 0x652baa50); // 0x434b10
        int64_t v15 = result2 + v13 & 0xffffff00 | (int64_t)v14; // 0x434b10
        char * v16 = (char *)v15; // 0x434b17
        *v16 = *v16 + (char)a7;
        int64_t v17 = __asm_int3(v1, v15); // 0x434b1a
        *(char *)v1 = __asm_insb((int16_t)a7);
        *(char *)v1 = *v16;
        bool v18; // 0x434a7d
        uint32_t v19 = *(int32_t *)(v1 + (v18 ? -1 : 1)); // 0x434b1d
        char v20 = *(char *)0x1501c7993; // 0x434b1f
        *(char *)0x1501c7993 = v20 + (char)v17 + (char)(v19 > (int32_t)v17);
        return (int64_t)*(int32_t *)-0x5650c1abf1519cd6;
    }
    // 0x434ac2
    return result2;
}

// Address range: 0x434b55 - 0x434b56
int64_t function_434b55(void) {
    // 0x434b55
    int64_t result; // 0x434b55
    return result;
}

// Address range: 0x434b64 - 0x434b66
int64_t function_434b64(void) {
    // 0x434b64
    int64_t result; // 0x434b64
    return result;
}

// Address range: 0x434b7b - 0x434baa
int64_t function_434b7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x434b7b
    __asm_outsb((int16_t)a3, (char)a2);
    uint32_t v1 = (int32_t)a4 % 32; // 0x434b7e
    bool v2; // 0x434b7b
    bool v3; // 0x434b7b
    if (v1 != 0) {
        int32_t * v4 = (int32_t *)(a1 + 40); // 0x434b7e
        uint32_t v5 = *v4; // 0x434b7e
        int32_t v6 = v5 >> 32 - v1 | v5 << v1; // 0x434b7e
        *v4 = v6;
        v2 = v1 == 1 ? v6 % 2 != (int32_t)(v6 < 0) : v3;
    }
    int64_t v7; // 0x434b7b
    int64_t v8 = v7 & 0xffffffff; // 0x434b88
    if (v3 != v2) {
        v8 = function_434b55();
    }
    int64_t v9 = v8 & 0xffffffff; // 0x434b90
    *(int64_t *)(v9 - 8) = 11;
    *(int64_t *)(v9 - 16) = a3 & -256 | 205;
    __asm_out_135(95, (char)v7);
    return function_48c78bc6();
}

// Address range: 0x434bd5 - 0x434bde
int64_t function_434bd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int32_t * v1 = (int32_t *)(a1 + 0x4428fe14 + a2); // 0x434bd5
    *v1 = *v1 - (int32_t)a4;
    return result;
}

// Address range: 0x434bea - 0x434beb
int64_t function_434bea(int64_t a1) {
    // 0x434bea
    int64_t result; // 0x434bea
    return result;
}

// Address range: 0x434c3d - 0x434c40
int64_t function_434c3d(void) {
    // 0x434c3d
    int64_t result; // 0x434c3d
    return result;
}

// Address range: 0x434c71 - 0x434c76
int64_t function_434c71(void) {
    // 0x434c71
    return function_2f438a88();
}

// Address range: 0x434c8c - 0x434d50
int64_t function_434c8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x434c8c
    int64_t v1; // 0x434c8c
    int32_t v2 = v1;
    int32_t v3 = v1;
    bool v4; // 0x434c8c
    int64_t v5 = v4 ? -4 : 4; // 0x434c8c
    int64_t v6 = v5 + a2; // 0x434c8c
    if (v2 < v3) {
        // 0x434d08
        __asm_outsb((int16_t)a3, *(char *)v6);
        return v1 - (v2 < v3 ? 0x844e9517 : 0x844e9516) & 0xffffffff;
    }
    // 0x434c8f
    *(char *)(a3 + 96) = (char)v1;
    return function_ffffffffc4684cc6(v5 + a1, v6);
}

// Address range: 0x434da9 - 0x434daa
int64_t function_434da9(void) {
    // 0x434da9
    int64_t result; // 0x434da9
    return result;
}

// Address range: 0x434dab - 0x434dac
int64_t function_434dab(void) {
    // 0x434dab
    int64_t result; // 0x434dab
    return result;
}

// Address range: 0x434de5 - 0x434e42
int64_t function_434de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x434de5
    int64_t v1; // 0x434de5
    uint64_t v2 = v1;
    int64_t v3 = a2;
    char * v4 = (char *)(a3 + 1); // 0x434de5
    *v4 = *v4 ^ (char)(v2 / 256);
    int64_t result = v2 & -0xff01 | (int64_t)&g5; // 0x434de8
    int64_t v5 = (int64_t)(0x6b46300e * *(int32_t *)(a3 + 23)); // 0x434deb
    unsigned char v6 = (char)a4; // 0x434df2
    unsigned char v7 = *(char *)(v5 + 79); // 0x434df2
    if (v7 != v6) {
        // 0x434e34
        __asm_out_136((int16_t)a3, (int32_t)result);
        char * v8 = (char *)(v5 - 0x79b3ffab); // 0x434e35
        *v8 = *v8 / 2 | 128 * (char)(v7 > v6);
        return result;
    }
    unsigned char v9 = *(char *)&v3; // 0x434df8
    unsigned char v10 = *(char *)v5; // 0x434e00
    int32_t v11 = a3; // 0x434e01
    int32_t v12 = v9 < v10; // 0x434e01
    int64_t result2 = result & -256 | (int64_t)v9; // 0x434e04
    if (((v12 + v11 ^ v11) & ((int32_t)(v9 < v10) - v12 ^ v11)) >= 0) {
        result2 = function_434dab();
    }
    // 0x434e06
    return result2;
}
