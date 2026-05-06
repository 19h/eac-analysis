/*
 * Targeted RetDec C for native executable gap queue batch 658.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x12aadc-0x12acdc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12acdc-0x12aedc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12aedc-0x12b0dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12b0dc-0x12b2dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x38c8a0-0x38caa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38caa0-0x38cca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38cca0-0x38cea0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38cea0-0x38d0a0 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_12aadc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12ab14(int64_t a1);
int64_t function_12abb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12abfb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12ac23(void);
int64_t function_12ac2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12ac6b(void);
int64_t function_12ac74(void);
int64_t function_12ac88(int64_t a1);
int64_t function_12ac9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_12ae49(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_12ae56(int64_t a1);
int64_t function_12ae59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12af1f(void);
int64_t function_12af4d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_12af8f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12afc5(int64_t a1, uint64_t a2);
int64_t function_12aff6(void);
int64_t function_12b041(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12b07b(int64_t a1);
int64_t function_12b0b7(void);
int64_t function_12b141(void);
int64_t function_12b152(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12b20e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_12b230(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12b246(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23149451();
int64_t function_38c8a0(void);
int64_t function_38c8cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38c955(void);
int64_t function_38c9bd(void);
int64_t function_38ca0c(void);
int64_t function_38ca7a(void);
int64_t function_38ca8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38caae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38cab2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38cabe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38cb16(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_38cb36(void);
int64_t function_38cb56(void);
int64_t function_38cb66(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_38cbd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38cbeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38cc07(void);
int64_t function_38cc2b(int64_t a1);
int64_t function_38cc4b(void);
int64_t function_38cc5a(void);
int64_t function_38cc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38ccf0(void);
int64_t function_38cd0c(void);
int64_t function_38cd18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38ce81(void);
int64_t function_38ce92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38ceac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38ceba(int64_t a1);
int64_t function_38cec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38cee6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38cf52(int64_t a1, int64_t a2);
int64_t function_38d058(void);
int64_t function_38d07e(void);
int64_t function_3a72a9fc();
int64_t function_471aff21();
int64_t function_6c07c16a();
int64_t function_ffffffff8ea8d0ac();
int64_t function_fffffffff0f2f794();
int64_t unknown_10583ee0();
int64_t unknown_27d6a26e();
int64_t unknown_29bd54d7();
int64_t unknown_3d1492f1();
int64_t unknown_443fc18b();
int64_t unknown_52e23295();
int64_t unknown_5b43b9ab();
int64_t unknown_5bad82e7();
int64_t unknown_67b4db6c();
int64_t unknown_6c579beb();
int64_t unknown_6ccdd103();
int64_t unknown_6e9a6902();
int64_t unknown_792e67f1();
int64_t unknown_9484ce();
int64_t unknown_ca41a11();
int64_t unknown_fc8d2e7();
int64_t unknown_ffffffff88488bdc();
int64_t unknown_ffffffff8856cfbf();
int64_t unknown_ffffffff903cc89e();
int64_t unknown_ffffffff94c128a0();
int64_t unknown_ffffffff9dd8b233();
int64_t unknown_ffffffffa6fdfaa4();
int64_t unknown_ffffffffbaf1cde0();
int64_t unknown_ffffffffc0140415();
int64_t unknown_ffffffffd8355351();

// Address range: 0x12aadc - 0x12aaf3
int64_t function_12aadc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12aadc
    return unknown_3d1492f1();
}

// Address range: 0x12ab14 - 0x12ab17
int64_t function_12ab14(int64_t a1) {
    // 0x12ab14
    int64_t result; // 0x12ab14
    return result;
}

// Address range: 0x12abb1 - 0x12abbe
int64_t function_12abb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12abb1
    if (a4 == 0) {
        // 0x12abbd
        int64_t result; // 0x12abb1
        return result;
    }
    // 0x12abb3
    return function_23149451();
}

// Address range: 0x12abfb - 0x12ac15
int64_t function_12abfb(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x12abfb
    uint32_t v2 = (int32_t)a2 + v1; // 0x12abfb
    float80_t v3; // 0x12abfb
    *(int16_t *)(a3 - 0x7f712558) = (int16_t)v3;
    int64_t v4; // 0x12abfb
    char v5 = *(char *)&v4; // 0x12ac08
    int64_t v6; // 0x12abfb
    *(char *)v4 = (char)v6 + (char)(v2 < v1) + v5;
    uint64_t v7 = v4;
    *(char *)v7 = (char)(v7 / 256);
    return unknown_ffffffffc0140415(v2);
}

// Address range: 0x12ac23 - 0x12ac24
int64_t function_12ac23(void) {
    // 0x12ac23
    int64_t result; // 0x12ac23
    return result;
}

// Address range: 0x12ac2a - 0x12ac6b
int64_t function_12ac2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x12ac2a
    char v3 = v2; // 0x12ac2a
    *(char *)a1 = v3;
    __asm_out(32, v3);
    unknown_ffffffff9dd8b233();
    uint32_t v4 = (int32_t)v2; // 0x12ac32
    if (-1 - (int32_t)v2 >= v4) {
        function_12ac23();
    }
    // 0x12ac3b
    *(int32_t *)v1 = *(int32_t *)&v1 + v4;
    *(int64_t *)(0x605c1e8 - (int64_t)&g2) = 0x605c1f0 - (int64_t)&g2;
    unknown_ffffffffd8355351();
    uint32_t v5 = __asm_in(-96); // 0x12ac51
    int64_t v6 = *(int64_t *)(a2 + 0x4001e8f5); // 0x12ac57
    *(int64_t *)((a4 + 0x605c1e8 - (int64_t)&g2 & 0xffffffff) - 8) = v6;
    unsigned char v7 = ((char)a4 + 31) % 32; // 0x12ac62
    if (v7 != 0) {
        char * v8 = (char *)(v2 - 0x17bef376); // 0x12ac62
        unsigned char v9 = *v8; // 0x12ac62
        *v8 = v9 >> v7 | (char)(v5 > 0xa2bb1ed7) << 8 - v7 | (char)((int16_t)v9 << (int16_t)(9 - v7));
    }
    int64_t result = v5 + 0x5d44e128; // 0x12ac5d
    int32_t * v10 = (int32_t *)result; // 0x12ac68
    *v10 = *v10 + (int32_t)a2;
    return result;
}

// Address range: 0x12ac6b - 0x12ac6e
int64_t function_12ac6b(void) {
    // 0x12ac6b
    int64_t result; // 0x12ac6b
    return result;
}

// Address range: 0x12ac74 - 0x12ac75
int64_t function_12ac74(void) {
    // 0x12ac74
    int64_t result; // 0x12ac74
    return result;
}

// Address range: 0x12ac88 - 0x12ac89
int64_t function_12ac88(int64_t a1) {
    // 0x12ac88
    int64_t result; // 0x12ac88
    return result;
}

// Address range: 0x12ac9e - 0x12ade2
int64_t function_12ac9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x12ac9e
    int64_t result; // 0x12ac9e
    int64_t v1 = result;
    int64_t v2 = a6;
    bool v3; // 0x12ac9e
    int64_t v4 = (v1 + a4 / 256 + (int64_t)v3) % 256 | v1 & -256; // 0x12ac9e
    int32_t * v5 = (int32_t *)(2 * result + 0x39ff5e50 + result); // 0x12aca0
    *v5 = *v5 + (int32_t)result;
    int32_t v6 = *(int32_t *)0x4af0939a; // 0x12acba
    if (!((a4 == 1 | (*(int32_t *)(v4 + 0xb3240ad) & (int32_t)a4) == 0))) {
        function_12ac74();
    }
    int64_t v7 = unknown_9484ce(); // 0x12acc8
    v2 = -0xf975a00;
    char * v8 = (char *)(a1 - 60); // 0x12acda
    *v8 = *v8 + (char)v7;
    uint64_t v9 = result / 256; // 0x12acdf
    char v10 = v9; // 0x12acdf
    uint32_t v11 = (v6 + (int32_t)result + (int32_t)((int32_t)v4 < 0x69142001)) / 256;
    char v12 = v11; // 0x12acdf
    char v13 = v10 - v12; // 0x12acdf
    if (v13 == 0) {
        // 0x12add1
        *(char *)-0x3eb87f25 = *(char *)-0x3eb87f25 + v12;
        return result;
    }
    int64_t v14 = (int64_t)&v2; // 0x12ace9
    v14 -= 8;
    int3_t v15; // 0x12ac9e
    int3_t v16 = v15 - 1; // 0x12acf1
    __frontend_reg_store_fpr(v16, (float80_t)*(int64_t *)0x13d0092);
    while ((int16_t)result < 0 != ((v13 ^ v10) & (char)(v9 ^ (int64_t)v11)) < 0) {
        // 0x12acef
        v14 -= 8;
        v16--;
        __frontend_reg_store_fpr(v16, (float80_t)*(int64_t *)0x13d0092);
    }
    // 0x12acf6
    return result;
}

// Address range: 0x12ae49 - 0x12ae56
int64_t function_12ae49(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 0x13d00ae); // 0x12ae49
    *v1 = *v1 + (char)(a4 / 256);
    char * v2 = (char *)(a4 + 41); // 0x12ae50
    *v2 = *v2 + (char)(a3 / 256);
    int64_t result; // 0x12ae49
    return result;
}

// Address range: 0x12ae56 - 0x12ae59
int64_t function_12ae56(int64_t a1) {
    // 0x12ae56
    int64_t v1; // 0x12ae56
    return (v1 | v1) & 0xffffffff;
}

// Address range: 0x12ae59 - 0x12af04
int64_t function_12ae59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12ae59
    int64_t v1; // 0x12ae59
    int64_t v2 = v1 | 70; // 0x12ae59
    char * v3 = (char *)(a4 + 0x3dabd552); // 0x12ae61
    char v4 = a4; // 0x12ae61
    *v3 = *v3 + v4;
    int32_t * v5 = (int32_t *)v2; // 0x12ae67
    *v5 = *v5 + (int32_t)v2;
    char * v6 = (char *)(v1 & -0xff01 | (int64_t)&g1); // 0x12ae6b
    *v6 = *v6 - v4;
    return (int64_t)(*(int32_t *)0x13d0077275006e0 & 0x7d890068);
}

// Address range: 0x12af1f - 0x12af20
int64_t function_12af1f(void) {
    // 0x12af1f
    int64_t result; // 0x12af1f
    return result;
}

// Address range: 0x12af4d - 0x12af89
int64_t function_12af4d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x12af4d
    int64_t result; // 0x12af4d
    bool v1; // 0x12af4d
    if (v1) {
        // 0x12af4f
        *(int32_t *)a1 = (int32_t)a3 + (int32_t)a1;
        return result;
    }
    char * v2 = (char *)(a4 - 0x28fec2fb); // 0x12af82
    *v2 = *v2 + (char)(a4 / 256);
    return result & -256 | 1;
}

// Address range: 0x12af8f - 0x12afac
int64_t function_12af8f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12af8f
    unknown_52e23295();
    bool v1; // 0x12af8f
    if (!v1 && !v1) {
        function_12af1f();
    }
    char v2 = *(char *)-0x79d5195b; // 0x12af9e
    int64_t v3; // 0x12af8f
    *(char *)-0x79d5195b = v2 + (char)((uint64_t)v3 / 256);
    return a3 + 0x1409dc1d & 0xffffffff;
}

// Address range: 0x12afc5 - 0x12afd5
int64_t function_12afc5(int64_t a1, uint64_t a2) {
    int64_t result = __asm_int3(a1); // 0x12afca
    *(char *)0x418193d4 = *(char *)0x418193d4 + (char)(a2 / 256);
    return result;
}

// Address range: 0x12aff6 - 0x12aff9
int64_t function_12aff6(void) {
    // 0x12aff6
    int64_t result; // 0x12aff6
    return result;
}

// Address range: 0x12b041 - 0x12b04f
int64_t function_12b041(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x12b041
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a4 + 0x13d002e); // 0x12b041
        uint32_t v3 = *v2; // 0x12b041
        bool v4; // 0x12b041
        *v2 = (int32_t)v4 << 32 - v1 | v3 >> v1 | (int32_t)((int64_t)v3 << (int64_t)(33 - v1));
    }
    int64_t result; // 0x12b041
    return result;
}

// Address range: 0x12b07b - 0x12b07e
int64_t function_12b07b(int64_t a1) {
    // 0x12b07b
    int64_t result; // 0x12b07b
    return result;
}

// Address range: 0x12b0b7 - 0x12b0bc
int64_t function_12b0b7(void) {
    // 0x12b0b7
    int64_t v1; // 0x12b0b7
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x12b141 - 0x12b142
int64_t function_12b141(void) {
    // 0x12b141
    int64_t result; // 0x12b141
    return result;
}

// Address range: 0x12b152 - 0x12b1f7
int64_t function_12b152(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12b152
    int64_t v1; // 0x12b152
    int64_t v2 = v1;
    int64_t v3 = a2;
    char v4 = v1 / 256; // 0x12b15d
    *(char *)-0x60bced9c = *(char *)-0x60bced9c + v4;
    int32_t * v5 = (int32_t *)(v1 + 0x2d490a60 + 2 * v1); // 0x12b17d
    *v5 = *v5 | 0x1cd0cbd7;
    int64_t v6 = (v2 + 140) % 256 | v2 & 0xffffff00; // bp-8, 0x12b188
    uint32_t v7 = *(int32_t *)&v3 & (int32_t)a3; // 0x12b18a
    *(char *)0x5f931093 = *(char *)0x5f931093 + v4;
    char * v8 = (char *)(int64_t)v7;
    int64_t v9 = a4 & -256 | (int64_t)*(char *)0x27c5e172; // 0x12b18c
    int64_t v10 = (int64_t)&v6; // 0x12b18c
    int64_t v11 = (int64_t)(*(int32_t *)(v1 - 0x6faf47) ^ (int32_t)a1); // 0x12b18c
    __asm_wait((int32_t)v11);
    uint64_t v12 = unknown_ffffffffbaf1cde0(); // 0x12b193
    *(int64_t *)(v10 - 8) = 0x4fd00e57;
    int64_t v13 = v10 - 16; // 0x12b19f
    *(int64_t *)v13 = v12;
    *v8 = *v8 - (char)v12;
    *(int32_t *)0x4884 = *(int32_t *)0x4884 + (int32_t)v3;
    char v14 = *(char *)-0x7f10d951 + (char)(v12 / 256); // 0x12b1a8
    unsigned char v15 = llvm_ctpop_i8(v14); // 0x12b1a8
    *(char *)-0x7f10d951 = v14;
    if (v15 % 2 == 0) {
        function_12b141();
    }
    uint32_t v16 = *(int32_t *)v3; // 0x12b1b6
    int64_t v17 = v16; // 0x12b1b6
    unsigned char v18 = (char)v16; // 0x12b1b7
    unsigned char v19 = *(char *)v17 + v18; // 0x12b1b7
    int64_t v20 = v19; // 0x12b1b7
    int64_t v21 = v17 & 0xffffff00; // 0x12b1b7
    int64_t v22 = v21 | v20; // 0x12b1b7
    bool v23; // 0x12b152
    int32_t * v24 = (int32_t *)(v3 + (v23 ? -96 : -88)); // 0x12b1b9
    *v24 = *v24 - (int32_t)v9 + (int32_t)(v19 < v18);
    v11 += (v23 ? -2 : 2);
    *v8 = (char)v9;
    while (llvm_ctpop_i8(v19 - 1) % 2 == 0) {
        // 0x12b1c8
        v3 = 0xb0b0a570;
        *(int64_t *)(v22 - 8) = v13 & 0xffffffff;
        v10 = v22 - 16;
        *(int64_t *)v10 = 0x7800d034;
        v9 = (v9 & 0xffff00ff) + 0x48ce;
        __asm_wait((int32_t)v11);
        v12 = unknown_ffffffffbaf1cde0();
        *(int64_t *)(v10 - 8) = 0x4fd00e57;
        v13 = v10 - 16;
        *(int64_t *)v13 = v12;
        *v8 = *v8 - (char)v12;
        *(int32_t *)0x4884 = *(int32_t *)0x4884 + (int32_t)v3;
        v14 = *(char *)-0x7f10d951 + (char)(v12 / 256);
        v15 = llvm_ctpop_i8(v14);
        *(char *)-0x7f10d951 = v14;
        if (v15 % 2 == 0) {
            function_12b141();
        }
        // 0x12b1b1
        v16 = *(int32_t *)v3;
        v17 = v16;
        v18 = (char)v16;
        v19 = *(char *)v17 + v18;
        v20 = v19;
        v21 = v17 & 0xffffff00;
        v22 = v21 | v20;
        v24 = (int32_t *)(v3 + (v23 ? -96 : -88));
        *v24 = *v24 - (int32_t)v9 + (int32_t)(v19 < v18);
        v11 += (v23 ? -2 : 2);
        *v8 = (char)v9;
    }
    int64_t v25 = v12 & 0xffffffff; // 0x12b1a2
    unsigned char v26 = *(char *)(v25 + v20); // 0x12b1ed
    if ((int32_t)v22 < 0x31292001) {
        // 0x12b22d
        return v21 | (int64_t)v26;
    }
    int32_t * v27 = (int32_t *)(v25 - 62); // 0x12b1f0
    *v27 = *v27 + (int32_t)v11;
    int64_t result = v21 | (int64_t)(v26 - 21); // 0x12b1f3
    __asm_out_133((int16_t)v7, (int32_t)result);
    return result;
}

// Address range: 0x12b20e - 0x12b216
int64_t function_12b20e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x12b20e
    int64_t result; // 0x12b20e
    char * v1 = (char *)(a2 - 96 + 8 * result); // 0x12b20e
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x12b20e
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    return result;
}

// Address range: 0x12b230 - 0x12b23f
int64_t function_12b230(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12b230
    *(char *)a1 = __asm_insb((int16_t)a3);
    __asm_int3(a1);
    return function_6c07c16a();
}

// Address range: 0x12b246 - 0x12b2af
int64_t function_12b246(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    bool v2; // 0x12b246
    if (v2) {
        int64_t v3 = unknown_ffffffffa6fdfaa4(); // 0x12b29e
        int64_t v4 = v3 & 151 | 104; // 0x12b2a5
        char * v5 = (char *)(a3 + 0x3d00b21d); // 0x12b2a7
        *v5 = *v5 + (char)v4;
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a3;
        return v4 | v3 & -256;
    }
    int32_t v6 = __asm_in(-15); // 0x12b249
    uint64_t v7 = (int64_t)v6; // 0x12b249
    unsigned char v8 = *(char *)(a3 + 0x13d0012); // 0x12b24b
    *(int32_t *)a3 = v6 + (int32_t)a3 + (int32_t)(v8 > (char)(v7 / 256));
    int64_t v9; // 0x12b246
    char v10 = *(char *)(v9 + 18) ^ (char)v6; // 0x12b255
    return v7 & -0x10000 | (int64_t)v10 | 0x4000 * (int64_t)(v10 == 0) | 0x8000 * (int64_t)(v10 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v10) % 2 == 0) | 512;
}

// Address range: 0x38c8a0 - 0x38c8a1
int64_t function_38c8a0(void) {
    // 0x38c8a0
    int64_t result; // 0x38c8a0
    return result;
}

// Address range: 0x38c8cb - 0x38c8dd
int64_t function_38c8cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38c8cb
    int64_t v1; // 0x38c8cb
    *(char *)-0x49a8392e = *(char *)-0x49a8392e + (char)(v1 / 256);
    return (int64_t)(*(int32_t *)(8 * v1 + a3) + (int32_t)v1);
}

// Address range: 0x38c955 - 0x38c961
int64_t function_38c955(void) {
    // 0x38c955
    int64_t v1; // 0x38c955
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_3a72a9fc();
}

// Address range: 0x38c9bd - 0x38c9c2
int64_t function_38c9bd(void) {
    // 0x38c9bd
    int64_t v1; // 0x38c9bd
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x38ca0c - 0x38ca11
int64_t function_38ca0c(void) {
    // 0x38ca0c
    return function_471aff21();
}

// Address range: 0x38ca7a - 0x38ca83
int64_t function_38ca7a(void) {
    // 0x38ca7a
    int64_t result; // 0x38ca7a
    int32_t * v1 = (int32_t *)(result + 0x35973779); // 0x38ca7a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x38ca8b - 0x38caae
int64_t function_38ca8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x6baef587); // 0x38ca95
    int64_t v2; // 0x38ca8b
    *v1 = (int32_t)v2;
    __readgsbyte(a3);
    int32_t * v3 = (int32_t *)(int64_t)*v1; // 0x38caa5
    *v3 = *v3 + 0x72d013d;
    return function_38cab2(a1, a2, a3, a4 & -0xff01 | (int64_t)&g3);
}

// Address range: 0x38caae - 0x38cab2
int64_t function_38caae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38caae
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1 = __asm_int1(); // 0x38caaf
    return (v1 + 239) % 256 | v1 & -256;
}

// Address range: 0x38cab2 - 0x38cab5
int64_t function_38cab2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38cab2
    int64_t v1; // 0x38cab2
    uint64_t v2 = v1;
    bool v3; // 0x38cab2
    *(char *)a3 = (char)v1 + (char)a4 + (char)v3;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x38cabe - 0x38caf5
int64_t function_38cabe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = __asm_in_134(61); // 0x38cabe
    int64_t v2; // 0x38cabe
    uint64_t v3 = v2 & -256 | (int64_t)v1; // 0x38cabe
    *(int32_t *)a1 = (int32_t)v2;
    char * v4 = (char *)v3; // 0x38cac3
    *v4 = *v4 + v1;
    char * v5 = (char *)(a4 + 2); // 0x38cac5
    *v5 = *v5 + (char)(v3 / 256);
    unsigned char v6 = *v4 + v1; // 0x38cac8
    *v4 = v6 / 2;
    uint32_t v7 = (int32_t)a4 % 32; // 0x38cad5
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)(v3 + 4 * a3); // 0x38cad5
        uint32_t v9 = *v8; // 0x38cad5
        *v8 = v9 << v7 | (int32_t)((int64_t)v9 >> (int64_t)(33 - v7)) | (int32_t)(v6 % 2 != 0) << v7 - 1;
    }
    char * v10 = (char *)(v3 + 8); // 0x38cad8
    *v10 = *v10 ^ (char)v2;
    int64_t result = v3 | 232; // 0x38cae1
    int32_t * v11 = (int32_t *)result; // 0x38cae3
    *v11 = *v11 + (int32_t)result;
    return result;
}

// Address range: 0x38cb16 - 0x38cb1d
int64_t function_38cb16(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x120540b0); // 0x38cb16
    *v1 = *v1 + (char)(a3 / 256);
    int64_t result; // 0x38cb16
    return result;
}

// Address range: 0x38cb36 - 0x38cb39
int64_t function_38cb36(void) {
    // 0x38cb36
    int64_t result; // 0x38cb36
    return result;
}

// Address range: 0x38cb56 - 0x38cb57
int64_t function_38cb56(void) {
    // 0x38cb56
    int64_t result; // 0x38cb56
    return result;
}

// Address range: 0x38cb66 - 0x38cb7b
int64_t function_38cb66(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x38cb66
    unknown_27d6a26e();
    *(char *)(a4 - 24) = (char)(a3 / 256);
    int32_t * v1 = (int32_t *)(4 * a4 + a1); // 0x38cb76
    int64_t v2; // 0x38cb66
    *v1 = *v1 + (int32_t)v2;
    return function_38cb56();
}

// Address range: 0x38cbd4 - 0x38cbea
int64_t function_38cbd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38cbd4
    unknown_ffffffff88488bdc();
    return unknown_5bad82e7();
}

// Address range: 0x38cbeb - 0x38cbf8
int64_t function_38cbeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38cbeb
    int64_t v1; // 0x38cbeb
    int32_t * v2 = (int32_t *)(v1 - 33); // 0x38cbef
    *v2 = *v2 + (int32_t)a1;
    int64_t result; // 0x38cbeb
    *(char *)result = *(char *)&result - 30;
    return result;
}

// Address range: 0x38cc07 - 0x38cc0c
int64_t function_38cc07(void) {
    // 0x38cc07
    return function_fffffffff0f2f794();
}

// Address range: 0x38cc2b - 0x38cc2e
int64_t function_38cc2b(int64_t a1) {
    // 0x38cc2b
    int64_t result; // 0x38cc2b
    return result;
}

// Address range: 0x38cc4b - 0x38cc4e
int64_t function_38cc4b(void) {
    // 0x38cc4b
    int64_t result; // 0x38cc4b
    return result;
}

// Address range: 0x38cc5a - 0x38cc5b
int64_t function_38cc5a(void) {
    // 0x38cc5a
    int64_t result; // 0x38cc5a
    return result;
}

// Address range: 0x38cc60 - 0x38cc9f
int64_t function_38cc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x38cc60
    bool v2; // 0x38cc60
    if (v1 != 0 && !v2) {
        // 0x38cc9b
        int64_t result; // 0x38cc60
        return result;
    }
    int64_t v3 = a3 & 0xffffffff; // 0x38cc6d
    if ((char)a1 == (char)a3) {
        v3 = function_38cc5a();
    }
    int64_t v4 = v3;
    int32_t * v5 = (int32_t *)(a1 + 0x6cb6ef92); // 0x38cc77
    uint32_t v6 = *v5; // 0x38cc77
    *v5 = v6 - 0x17a00102;
    char * v7 = (char *)(((v4 + 19 + (int64_t)(v6 > 0x17a00101)) % 256 | v4 & -256) - 0x73d60df7); // 0x38cc7f
    *v7 = *v7 + (char)v1;
    unknown_443fc18b();
    int64_t v8; // 0x38cc60
    *(int32_t *)((v8 & -256 | 160) - 0x3c33fe18) = (int32_t)unknown_fc8d2e7();
    // 0x38cc9b
    return unknown_ffffffff94c128a0();
}

// Address range: 0x38ccf0 - 0x38ccf1
int64_t function_38ccf0(void) {
    // 0x38ccf0
    int64_t result; // 0x38ccf0
    return result;
}

// Address range: 0x38cd0c - 0x38cd0f
int64_t function_38cd0c(void) {
    // 0x38cd0c
    int64_t result; // 0x38cd0c
    return result;
}

// Address range: 0x38cd18 - 0x38ce6d
int64_t function_38cd18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    unsigned char v2 = (char)a3;
    char v3 = a4; // 0x38cd18
    unsigned char v4 = v3 + v2; // 0x38cd18
    *(char *)a3 = v4;
    int64_t v5; // 0x38cd18
    unsigned char v6 = (char)(v4 < v2) - *(char *)(a2 + 0x55850013 + 2 * v5) + v2; // 0x38cdca
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x38cdca
    int64_t v8 = a3 & -256 | (int64_t)v6; // 0x38cdca
    unknown_29bd54d7();
    char * v9; // 0x38cd18
    int32_t v10; // 0x38cd18
    int64_t v11; // 0x38cd18
    if (v7 % 2 != 0) {
        // 0x38cd98
        unknown_ffffffff903cc89e();
        int32_t v12 = v5; // 0x38cd9d
        int32_t v13 = v5;
        int32_t v14 = v12 + v13; // 0x38cd9d
        float80_t v15; // 0x38cd18
        *(float32_t *)(v5 + 0x4f86df3e) = (float32_t)v15;
        unknown_5b43b9ab();
        char * v16 = (char *)v8;
        *v16 = v3;
        v9 = v16;
        v10 = v13;
        v11 = v14;
        if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0) {
            int64_t v17 = unknown_ffffffff8856cfbf(); // 0x38cdb9
            int32_t v18 = *(int32_t *)&v1; // 0x38cdc7
            bool v19; // 0x38cd18
            *(int32_t *)v1 = v18 + (int32_t)((v19 ? 0xfffffff8 : 8) + a2);
            return v17 & 0xe869f38c;
        }
    } else {
        int64_t v20 = v1 + a2; // 0x38cdd8
        v1 = v20 & 0xffffffff;
        int64_t v21 = unknown_10583ee0((int32_t)v20); // 0x38cdda
        char * v22 = (char *)(v5 + 0x3b7b6a26); // 0x38cddf
        *v22 = *v22 | (char)v21;
        v9 = (char *)v8;
        v10 = v5;
    }
    char * v23 = v9;
    unknown_6c579beb();
    int32_t * v24 = (int32_t *)(v8 + 16); // 0x38cdf1
    *v24 = *v24 + v10;
    __asm_int3((int64_t)(*(int32_t *)(v8 - 0x39a16e7f) & (int32_t)v1));
    uint64_t v25 = unknown_6ccdd103(); // 0x38cdfc
    *v23 = *v23 + v6;
    int32_t * v26 = (int32_t *)(v5 - 0x54ee834c + 2 * v8); // 0x38ce14
    *v26 = *v26 - 0x76993519;
    char * v27 = (char *)(v25 - 0x27fe171c); // 0x38ce1b
    *v27 = *v27 + (char)(v25 / 256);
    unsigned char v28 = *(char *)v25 | (char)v25; // 0x38ce21
    uint64_t v29 = (int64_t)*(int32_t *)v8 - 1; // 0x38ce2c
    if (v29 == 0 || v28 == 0) {
        int64_t v30 = v28; // 0x38ce21
        int64_t v31 = v25 & -256; // 0x38ce21
        char * v32 = (char *)((v31 | v30) + 0x2514000); // 0x38ce2e
        *v32 = *v32 + v28;
        int32_t * v33 = (int32_t *)(v11 + 0x4a010c00); // 0x38ce36
        uint32_t v34 = *v33; // 0x38ce36
        uint32_t v35 = v34 + (int32_t)v5; // 0x38ce36
        *v33 = v35;
        return (v29 / 256 + v30 + (v35 < v34 ? 57 : 58)) % 256 | v31;
    }
    // 0x38ce66
    return unknown_67b4db6c();
}

// Address range: 0x38ce81 - 0x38ce82
int64_t function_38ce81(void) {
    // 0x38ce81
    int64_t result; // 0x38ce81
    return result;
}

// Address range: 0x38ce92 - 0x38ce9f
int64_t function_38ce92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38ce92
    int64_t result; // 0x38ce92
    uint64_t v1 = result;
    int32_t * v2 = (int32_t *)(a4 - 0x3439dc0c); // 0x38ce92
    *v2 = *v2 + (int32_t)v1;
    char * v3 = (char *)(result - 0xbff34cf); // 0x38ce98
    *v3 = *v3 + (char)(v1 / 256);
    return result;
}

// Address range: 0x38ceac - 0x38ceba
int64_t function_38ceac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38ceac
    int64_t v1; // 0x38ceac
    uint64_t result = v1;
    if (a4 == 0) {
        // 0x38cecf
        return result;
    }
    // 0x38ceae
    *(int32_t *)a4 = (int32_t)a4 + (int32_t)a1;
    return result % 0x10000 | a3 & 0xffff0000;
}

// Address range: 0x38ceba - 0x38cec4
int64_t function_38ceba(int64_t a1) {
    // 0x38ceba
    return function_ffffffff8ea8d0ac();
}

// Address range: 0x38cec9 - 0x38cecf
int64_t function_38cec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38cec9
    float80_t v1; // 0x38cec9
    *(int16_t *)(a4 + 0x1e87639) = (int16_t)v1;
    int64_t result; // 0x38cec9
    return result;
}

// Address range: 0x38cee6 - 0x38cf18
int64_t function_38cee6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_792e67f1(); // 0x38ceeb
    int64_t v3; // 0x38cee6
    char * v4 = (char *)(8 * v3 - 0x2b6987ef + v3); // 0x38cef0
    char v5 = *v4; // 0x38cef0
    *v4 = 2 * v5;
    int64_t v6 = v2; // 0x38cef7
    if (v5 >= 0) {
        v6 = function_38ce81();
    }
    unsigned char v7 = *(char *)(v3 + 123); // 0x38cef9
    unknown_6e9a6902();
    char * v8 = (char *)__asm_iretd(); // 0x38cf02
    *v8 = (char)(v7 > (char)v6) + (char)a4 + *v8;
    *(char *)v1 = *(char *)&v1 + (char)(v3 / 256);
    int64_t result = unknown_ca41a11(); // 0x38cf0b
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x38cf52 - 0x38cf8a
int64_t function_38cf52(int64_t a1, int64_t a2) {
    // 0x38cf52
    bool v1; // 0x38cf52
    int64_t v2 = v1 ? 0xfffffffc : 4; // 0x38cf52
    int64_t v3; // 0x38cf52
    char * v4 = (char *)(v3 - 0x17a96af8); // 0x38cf77
    *v4 = *v4 + (char)(v3 / 256);
    int32_t * v5 = (int32_t *)(v3 - 89); // 0x38cf7d
    uint32_t v6 = (int32_t)a2; // 0x38cf7d
    *v5 = *v5 + v6;
    int64_t v7 = v3 + 0x7ae401e8; // 0x38cf82
    __writefsbyte(v7, __readfsbyte(v7) + (char)v3 + (char)((int32_t)(v2 + a1) < v6));
    return __asm_sti();
}

// Address range: 0x38d058 - 0x38d05b
int64_t function_38d058(void) {
    // 0x38d058
    int64_t result; // 0x38d058
    return result;
}

// Address range: 0x38d07e - 0x38d07f
int64_t function_38d07e(void) {
    // 0x38d07e
    int64_t result; // 0x38d07e
    return result;
}
