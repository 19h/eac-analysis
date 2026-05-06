/*
 * Targeted RetDec C for native executable gap queue batch 1096.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x309f1d-0x30a11d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30a11d-0x30a31d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30a31d-0x30a51d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30a51d-0x30a71d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30a71d-0x30a91d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30a91d-0x30ab1d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30ab1d-0x30ad1d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30ad1d-0x30af1d rank=- name=- kind=- bytes=- uncovered=-
 *   0x445a67-0x445c67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x445c67-0x445e67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x445e67-0x446067 rank=- name=- kind=- bytes=- uncovered=-
 *   0x446067-0x446267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x446267-0x446467 rank=- name=- kind=- bytes=- uncovered=-
 *   0x446467-0x446667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x446667-0x446867 rank=- name=- kind=- bytes=- uncovered=-
 *   0x446867-0x446a67 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_2197f5b();
int64_t function_309f1d(int64_t a1);
int64_t function_309f1e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_30a065(int64_t a1);
int64_t function_30a07e(void);
int64_t function_30a0db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30a0f7(void);
int64_t function_30a0fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a103(void);
int64_t function_30a151(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30a1a5(int64_t a1, int64_t a2);
int64_t function_30a1d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a1e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30a261(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30a29d(void);
int64_t function_30a29f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30a310(int64_t a1);
int64_t function_30a34e(int64_t a1);
int64_t function_30a3f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a467(int64_t a1);
int64_t function_30a4a3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_30a57c(void);
int64_t function_30a5db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a64a(int64_t a1, uint64_t a2);
int64_t function_30a662(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a672(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a6a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a6eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a6ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30a752(void);
int64_t function_30a79e(void);
int64_t function_30a7ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30a851(void);
int64_t function_30a89e(void);
int64_t function_30a8d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30a8dd(void);
int64_t function_30a95f(void);
int64_t function_30a965(void);
int64_t function_30a96c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30ab12(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_30ac70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_30ae6e(void);
int64_t function_30ae72(void);
int64_t function_30ae9a(void);
int64_t function_30aeaa(void);
int64_t function_30aecb(void);
int64_t function_30aecf(void);
int64_t function_445a3d();
int64_t function_445a67(int64_t a1, int64_t a2, int64_t a3);
int64_t function_445a7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_445b4e(void);
int64_t function_445b5b(int64_t a1);
int64_t function_445b66(int64_t a1);
int64_t function_445bbb(int64_t a1);
int64_t function_445bd3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_445be9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_445c88(void);
int64_t function_445d10(void);
int64_t function_445d61(void);
int64_t function_445d89(void);
int64_t function_445dd1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_445de8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_445e54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_445f38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_445f89(void);
int64_t function_445fab(void);
int64_t function_445fad(void);
int64_t function_445fb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_445fcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4460a7(void);
int64_t function_4460fd(void);
int64_t function_446145(void);
int64_t function_44614b(void);
int64_t function_44615b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4462e4(void);
int64_t function_4462e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4462fd(void);
int64_t function_44630d(void);
int64_t function_44631b(void);
int64_t function_44633e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4463de(void);
int64_t function_446404(int64_t a1, int64_t a2, int64_t a3);
int64_t function_446421(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_446451(int64_t a1);
int64_t function_44646e(void);
int64_t function_446492(void);
int64_t function_4464cf(void);
int64_t function_4464e0(void);
int64_t function_446503(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4465a9(void);
int64_t function_4465b1(void);
int64_t function_4465e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4465fa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_446644(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_446699(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4466c9(void);
int64_t function_4466ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_446737(void);
int64_t function_44673e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_446788(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44683c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_446864(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4468cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4468fa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_446903(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4469bc(int64_t a1);
int64_t function_4469d4(void);
int64_t function_4469fa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_446a18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_446a33(void);
int64_t function_446a46(int64_t a1);
int64_t function_446a59(void);
int64_t function_4636bfb3();
int64_t function_74ad999a();
int64_t function_c9849();
int64_t function_f4ab7d();
int64_t function_ffffffff96be3425();
int64_t function_ffffffffa44493f4();
int64_t function_ffffffffd6d2b8e2();
int64_t function_ffffffffebc085c8();
int64_t function_fffffffff31e885d();
int64_t function_fffffffff7f49d03();
int64_t unknown_1761a082();
int64_t unknown_18adc999();
int64_t unknown_251ffaef();
int64_t unknown_368c2d6e();
int64_t unknown_3d328ead();
int64_t unknown_422bcb22();
int64_t unknown_4cf515ea();
int64_t unknown_609f8c6b();
int64_t unknown_73e4b81();
int64_t unknown_73f08232();
int64_t unknown_7a0ef113();
int64_t unknown_7a98bc2a();
int64_t unknown_ffffffff82cc79da();
int64_t unknown_ffffffff874430f7();
int64_t unknown_ffffffff88368e71();
int64_t unknown_ffffffff95e52914();
int64_t unknown_ffffffff99154059();
int64_t unknown_ffffffffb4866062();
int64_t unknown_ffffffffd3e35a05();
int64_t unknown_ffffffffd8a64274();
int64_t unknown_ffffffffe8b4befb();

// Address range: 0x309f1d - 0x309f1e
int64_t function_309f1d(int64_t a1) {
    // 0x309f1d
    int64_t result; // 0x309f1d
    return result;
}

// Address range: 0x309f1e - 0x30a034
int64_t function_309f1e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x309f1e
    int64_t v1; // 0x309f1e
    int64_t v2 = v1;
    bool v3; // 0x309f1e
    int32_t v4 = (int32_t)(v2 + 54 + (int64_t)v3 & 254 | v2 & 0xffffff00) / 2 ^ 0x63a84c97; // 0x309f25
    if (v4 == 0) {
        int64_t v5 = __asm_fnstenv(); // 0x309f2c
        *(int224_t *)(8 * a1 + 0x3a89630f + v1) = (int224_t)v5;
        int32_t * v6 = (int32_t *)(v5 - 103); // 0x309f36
        *v6 = *v6 + (int32_t)a2;
        return function_4636bfb3();
    }
    // 0x309faa
    *(char *)0x7fa66bad = *(char *)0x7fa66bad + (char)(a4 / 256);
    char v7 = __asm_in((int16_t)a3); // 0x309fb6
    int64_t v8 = a2 & 0xffffff00 | (int64_t)v7; // 0x309fb6
    uint32_t result = -0x78c5f518 * *(int32_t *)(a5 - 0x6178fec3 + v8); // 0x309fb7
    int32_t * v9 = (int32_t *)(a6 - 0x2fa8f6b8); // 0x309fc4
    uint32_t v10 = *v9; // 0x309fc4
    *v9 = v10 - 0xa19ce20;
    if (v10 > 0xa19ce1f) {
        // 0x30a026
        *(char *)-0x55bc5dd3 = *(char *)-0x55bc5dd3 + (char)(result / 256);
        return v8 & -256 | (int64_t)(*(char *)(int64_t)(v4 + 0x2217f47c) & v7);
    }
    int32_t * v11 = (int32_t *)(a4 + 0x13d0061); // 0x309fce
    *v11 = *v11 + v4;
    *(char *)(a6 - 0x863f9a8) = (char)a4;
    return result;
}

// Address range: 0x30a065 - 0x30a066
int64_t function_30a065(int64_t a1) {
    // 0x30a065
    int64_t result; // 0x30a065
    return result;
}

// Address range: 0x30a07e - 0x30a07f
int64_t function_30a07e(void) {
    // 0x30a07e
    int64_t result; // 0x30a07e
    return result;
}

// Address range: 0x30a0db - 0x30a0f7
int64_t function_30a0db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 24); // 0x30a0db
    int32_t v2 = *v1 ^ 0x5b97201; // 0x30a0db
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x30a0db
    *v1 = v2;
    int64_t v4; // 0x30a0db
    if (v3 % 2 == 0) {
        v4 = function_30a07e();
    }
    // 0x30a0e4
    int64_t v5; // 0x30a0db
    char * v6 = (char *)(v5 - 37); // 0x30a0ed
    *v6 = (char)v4 + (char)v5 + *v6;
    return unknown_ffffffff874430f7();
}

// Address range: 0x30a0f7 - 0x30a0fa
int64_t function_30a0f7(void) {
    // 0x30a0f7
    int64_t result; // 0x30a0f7
    return result;
}

// Address range: 0x30a0fa - 0x30a101
int64_t function_30a0fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30a0fa
    int64_t v1; // 0x30a0fa
    int32_t * v2 = (int32_t *)(v1 - 24); // 0x30a0fa
    bool v3; // 0x30a0fa
    *v2 = (int32_t)v3 - (int32_t)a1 + *v2;
    return v1 & 0xffffffff;
}

// Address range: 0x30a103 - 0x30a106
int64_t function_30a103(void) {
    // 0x30a103
    int64_t v1; // bp-8, 0x30a103
    return (int64_t)&v1;
}

// Address range: 0x30a151 - 0x30a19a
int64_t function_30a151(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30a151
    int64_t v1; // 0x30a151
    int32_t v2 = (int32_t)v1 | 0x1e8fb18; // 0x30a151
    int64_t result = v2; // 0x30a151
    if (v2 >= 0) {
        // 0x30a15a
        return result;
    }
    int32_t * v3 = (int32_t *)(a4 + 118); // 0x30a197
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x30a1a5 - 0x30a1bb
int64_t function_30a1a5(int64_t a1, int64_t a2) {
    uint32_t result = *(int32_t *)0x74101e892bdd675; // 0x30a1af
    int64_t v1; // 0x30a1a5
    *(int32_t *)a2 = (int32_t)v1 - result;
    return result;
}

// Address range: 0x30a1d6 - 0x30a1e3
int64_t function_30a1d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30a1d6
    int64_t v1; // 0x30a1d6
    int64_t v2 = v1;
    int64_t result = (v2 + 24) % 256 | v2 & -256; // 0x30a1de
    int32_t * v3 = (int32_t *)(result + 60); // 0x30a1e0
    *v3 = *v3 + (int32_t)a1;
    return result;
}

// Address range: 0x30a1e4 - 0x30a22a
int64_t function_30a1e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30a1e4
    int64_t v1; // 0x30a1e4
    int64_t v2 = v1 & 0x74810854 | 0x8b7ef7ab; // 0x30a1e4
    char * v3 = (char *)v2; // 0x30a1e9
    unsigned char v4 = *v3; // 0x30a1e9
    unsigned char v5 = v4 + (char)(v1 / 256); // 0x30a1e9
    *v3 = v5;
    uint64_t v6 = v1 + a4 + (int64_t)(v5 < v4); // 0x30a1eb
    char * v7 = (char *)(v1 - 0x7cfe17e3); // 0x30a1ed
    *v7 = *v7 + (char)v6;
    __asm_in_133(-99);
    int64_t v8 = unknown_ffffffffd3e35a05(); // 0x30a1ff
    unknown_ffffffff95e52914();
    int64_t result = __asm_int3(a1, a2); // 0x30a215
    int32_t * v9 = (int32_t *)(v2 - 0x17233846 + 4 * v2); // 0x30a217
    *v9 = *v9 + (int32_t)v1;
    int64_t v10; // 0x30a1e4
    int32_t v11 = *(int32_t *)&v10; // 0x30a21e
    *(int32_t *)a1 = v11 + (int32_t)(v6 % 256 | a4 & 0xffff0000 | (256 * v8 | a4) & 0xff00);
    int64_t v12; // 0x30a1e4
    *(char *)a1 = *(char *)&v12;
    return result;
}

// Address range: 0x30a261 - 0x30a275
int64_t function_30a261(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30a261
    unknown_368c2d6e();
    int32_t * v1 = (int32_t *)(a1 + 0x3ce5898); // 0x30a26e
    *v1 = 0x79cb13;
    return __asm_int3(a1, (int64_t)*v1);
}

// Address range: 0x30a29d - 0x30a29e
int64_t function_30a29d(void) {
    // 0x30a29d
    int64_t result; // 0x30a29d
    return result;
}

// Address range: 0x30a29f - 0x30a2f5
int64_t function_30a29f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a1 - *(int32_t *)0x8d2a2a6; // 0x30a29f
    int64_t result; // 0x30a29f
    if (v1 == 0) {
        // 0x30a2ac
        return result;
    }
    int64_t v2 = v1; // 0x30a29f
    int64_t v3 = result & 0xffffffff; // 0x30a2cb
    int32_t * v4 = (int32_t *)(v2 + 0x3d01e86c); // 0x30a2ce
    *v4 = *v4 + (int32_t)result;
    int32_t * v5 = (int32_t *)(result - 77 + 2 * v2); // 0x30a2d4
    *v5 = *v5 + (int32_t)a4;
    int64_t result2 = unknown_251ffaef(v3); // 0x30a2e9
    int16_t v6 = a3; // 0x30a2ee
    *(int32_t *)v3 = __asm_insd(v6);
    int64_t v7; // 0x30a29f
    __asm_outsb(v6, *(char *)&v7);
    return result2;
}

// Address range: 0x30a310 - 0x30a311
int64_t function_30a310(int64_t a1) {
    // 0x30a310
    int64_t result; // 0x30a310
    return result;
}

// Address range: 0x30a34e - 0x30a351
int64_t function_30a34e(int64_t a1) {
    // 0x30a34e
    int64_t result; // 0x30a34e
    return result;
}

// Address range: 0x30a3f2 - 0x30a408
int64_t function_30a3f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30a3f2
    int64_t v1; // 0x30a3f2
    *(int32_t *)a3 = 2 * (int32_t)v1;
    int64_t v2; // 0x30a3f2
    *(char *)a1 = *(char *)&v2 - (char)a3;
    int64_t result; // 0x30a3f2
    char v3 = *(char *)&result; // 0x30a3fb
    int64_t v4 = result; // 0x30a3fd
    int64_t v5 = a4 & 0xffffffff; // 0x30a3fd
    result = v5;
    result = v5;
    if (v3 == (char)a4 || (v4 & 0xffffffff) == 1) {
        int32_t * v6 = (int32_t *)(v5 + 10); // 0x30a403
        *v6 = *v6 + (int32_t)v1;
    }
    // 0x30a407
    return result;
}

// Address range: 0x30a467 - 0x30a49d
int64_t function_30a467(int64_t a1) {
    // 0x30a467
    bool v1; // 0x30a467
    if (v1) {
        // 0x30a469
        int64_t result; // 0x30a467
        return result;
    }
    // 0x30a493
    unknown_18adc999();
    return function_f4ab7d();
}

// Address range: 0x30a4a3 - 0x30a532
int64_t function_30a4a3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x30a4a3
    bool v1; // 0x30a4a3
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // bp-8, 0x30a4a3
    uint32_t v3 = (int32_t)a4 % 32; // 0x30a4a4
    int64_t v4; // 0x30a4a3
    uint64_t v5; // 0x30a4a3
    int64_t v6; // 0x30a4a3
    if (v3 == 0) {
        v4 = __asm_hlt();
        v6 = a2;
        if (!v1) {
            // 0x30a4aa
            v5 = v4;
            return (v5 / 256 + v5) % 256 | v5 & -256;
        }
    } else {
        uint32_t v7 = (int32_t)a2 >> v3; // 0x30a4a4
        unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x30a4a4
        v4 = __asm_hlt();
        v6 = v7;
        if (v8 % 2 != 0) {
            // 0x30a4aa
            v5 = v4;
            return (v5 / 256 + v5) % 256 | v5 & -256;
        }
    }
    char * v9 = (char *)(a4 - 108); // 0x30a50a
    *v9 = *v9 + (char)a3;
    uint64_t v10 = unknown_7a0ef113(); // 0x30a50d
    int64_t v11 = (int64_t)(*(int32_t *)(v6 + 0x1e8ba75) + (int32_t)a3); // 0x30a514
    unsigned char v12 = *(char *)(8 * v11 + (int64_t)&v2); // 0x30a51a
    int32_t * v13 = (int32_t *)v11; // 0x30a51d
    *v13 = *v13 + 0x1e83414 + (int32_t)(v12 > -1 - (char)a4);
    unsigned char v14 = (char)(a4 / 256); // 0x30a523
    unsigned char v15 = (char)(v10 / 256); // 0x30a523
    char v16 = v14 - v15; // 0x30a523
    unsigned char v17 = llvm_ctpop_i8(v16); // 0x30a523
    return unknown_73f08232() & -0xff01 | 256 * (64 * (int64_t)(v16 == 0) | (int64_t)(v14 < v15) | 128 * (int64_t)(v16 < 0) | 16 * (int64_t)(v14 % 16 - v15 % 16 > 15) | 4 * (int64_t)(v17 % 2 == 0)) | 512;
}

// Address range: 0x30a57c - 0x30a57d
int64_t function_30a57c(void) {
    // 0x30a57c
    int64_t result; // 0x30a57c
    return result;
}

// Address range: 0x30a5db - 0x30a5fd
int64_t function_30a5db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x30a5db
    int64_t v4 = v3 & -225; // 0x30a5db
    *(int32_t *)v4 = (int32_t)v4;
    unsigned char v5 = *(char *)&v1; // 0x30a5df
    *(char *)a3 = v5 / 2 | 128 * v5;
    if (v5 % 2 != v5 / 128) {
        function_30a57c();
    }
    int64_t v6 = unknown_4cf515ea() & 0xffffffff; // 0x30a5e9
    *(char *)v2 = *(char *)&v2 & (char)a4;
    int32_t * v7 = (int32_t *)(v6 - 14); // 0x30a5f2
    *v7 = *v7 + (int32_t)v3;
    float80_t v8; // 0x30a5db
    *(float64_t *)(a1 + 104) = (float64_t)v8;
    *(int32_t *)a1 = __asm_insd((int16_t)v1);
    return unknown_ffffffff88368e71(a1, v2, v1 & -256 | 55, v6);
}

// Address range: 0x30a64a - 0x30a662
int64_t function_30a64a(int64_t a1, uint64_t a2) {
    // 0x30a64a
    int64_t v1; // 0x30a64a
    bool v2; // 0x30a64a
    int64_t v3 = 256 * (v1 + a2 / 256 + (int64_t)v2) & 0xff00 | a2 & 0xffff00ff; // 0x30a64c
    int32_t * v4 = (int32_t *)(v3 + 0x59d63b55); // 0x30a64e
    *v4 = *v4 + (int32_t)v3;
    unknown_7a98bc2a();
    return unknown_ffffffffb4866062();
}

// Address range: 0x30a662 - 0x30a671
int64_t function_30a662(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a4 - 0x6e400d00); // 0x30a662
    int64_t v2; // 0x30a662
    char * v3 = (char *)(v2 - 98); // 0x30a668
    *v3 = *v3 + (char)v2;
    int64_t result = unknown_ffffffff88368e71(a1, a2, a3, a4); // 0x30a66b
    bool v4; // 0x30a662
    __asm_out_134((int16_t)(a3 & 0xff00 | (int64_t)(v1 + (char)a3 + (char)v4)), (int32_t)result);
    return result;
}

// Address range: 0x30a672 - 0x30a689
int64_t function_30a672(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30a672
    int64_t v1; // 0x30a672
    uint64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    bool v3; // 0x30a672
    int32_t * v4 = (int32_t *)(256 * (v2 / 128 & 254 | (int64_t)v3) | v2 & -0xff01); // 0x30a67b
    *v4 = *v4 + (int32_t)v1;
    return function_2197f5b();
}

// Address range: 0x30a6a2 - 0x30a6da
int64_t function_30a6a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)unknown_3d328ead(); // 0x30a6ae
    int64_t v2; // 0x30a6a2
    uint32_t v3 = (-1 - (int32_t)v2 < (int32_t)v2 ? 0x46201e9 : 0x46201e8) + v1; // 0x30a6ae
    bool v4 = -1 - (int32_t)v2 < (int32_t)v2 ? v3 <= v1 : v1 > 0xfb9dfe17; // 0x30a6ae
    int64_t v5 = v3; // 0x30a6ae
    char * v6 = (char *)(2 * v5 + 0xcb3af98); // 0x30a6b3
    *v6 = *v6 + (char)((a4 + 0xffff) / 256) + (char)v4;
    return function_30a6ed(a1, a2, a3, v5, v5);
}

// Address range: 0x30a6eb - 0x30a6ed
int64_t function_30a6eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30a6eb
    int64_t result; // 0x30a6eb
    return result;
}

// Address range: 0x30a6ed - 0x30a704
int64_t function_30a6ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffe8b4befb(); // 0x30a6f5
    *(int32_t *)0x117ad01 = *(int32_t *)0x117ad01 + (int32_t)a1;
    return result;
}

// Address range: 0x30a752 - 0x30a75d
int64_t function_30a752(void) {
    // 0x30a752
    unknown_ffffffff99154059();
    return function_ffffffff96be3425();
}

// Address range: 0x30a79e - 0x30a7ac
int64_t function_30a79e(void) {
    // 0x30a79e
    int64_t result; // 0x30a79e
    __asm_out_135(48, (char)result);
    return result;
}

// Address range: 0x30a7ff - 0x30a811
int64_t function_30a7ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30a7ff
    *(char *)a3 = (char)a4;
    int64_t v1; // 0x30a7ff
    int32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x30a807
    char v3 = *(char *)(a2 + 0x4b7701e8); // 0x30a80a
    return (int64_t)((char)v2 ^ 23 | v3) | (int64_t)(v2 & -256);
}

// Address range: 0x30a851 - 0x30a852
int64_t function_30a851(void) {
    // 0x30a851
    int64_t result; // 0x30a851
    return result;
}

// Address range: 0x30a89e - 0x30a89f
int64_t function_30a89e(void) {
    // 0x30a89e
    int64_t result; // 0x30a89e
    return result;
}

// Address range: 0x30a8d4 - 0x30a8dd
int64_t function_30a8d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30a8d4
    unknown_ffffffff82cc79da(a1, a2, a3, a4);
    return function_30a89e();
}

// Address range: 0x30a8dd - 0x30a8e7
int64_t function_30a8dd(void) {
    // 0x30a8dd
    int64_t result; // 0x30a8dd
    int32_t * v1 = (int32_t *)(result + 6); // 0x30a8e2
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x30a95f - 0x30a960
int64_t function_30a95f(void) {
    // 0x30a95f
    int64_t result; // 0x30a95f
    return result;
}

// Address range: 0x30a965 - 0x30a96c
int64_t function_30a965(void) {
    // 0x30a965
    unknown_609f8c6b();
    return function_30a95f();
}

// Address range: 0x30a96c - 0x30ab12
int64_t function_30a96c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30a96c
    int64_t v1; // 0x30a96c
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 + (int32_t)a1; // 0x30a96c
    *(int32_t *)a3 = v3;
    unknown_ffffffffd8a64274();
    char * v4 = (char *)(a4 - 0x698b040a); // 0x30a973
    unsigned char v5 = *v4; // 0x30a973
    unsigned char v6 = v5 + (char)v1; // 0x30a973
    unsigned char v7 = v6 + (char)(v3 < v2); // 0x30a973
    bool v8 = v3 < v2 ? v7 <= v5 : v6 < v5; // 0x30a973
    *v4 = v7;
    int64_t v9 = unknown_73e4b81(); // 0x30a97b
    char * v10 = (char *)(v9 - 0x3f6af100); // 0x30a980
    unsigned char v11 = *v10; // 0x30a980
    unsigned char v12 = (char)v9; // 0x30a980
    char v13 = v11 + v12; // 0x30a980
    unsigned char v14 = llvm_ctpop_i8(v13); // 0x30a980
    *v10 = v13;
    int64_t v15 = 0x432c6a3c; // bp-40, 0x30aa38
    int64_t * v16 = (int64_t *)(a1 - 8); // 0x30aa8d
    *v16 = 0x1e23773f;
    int64_t * v17 = (int64_t *)(a1 - 24); // 0x30aa96
    *v17 = 0x309586;
    bool v18; // 0x30a96c
    *(int64_t *)(a1 - 16) = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v13 < v11) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v11 % 16 + v12 % 16 > 15) | 4 * (int64_t)(v14 % 2 == 0) | 2048 * (int64_t)(((v13 ^ v11) & (v13 ^ v12)) < 0) | 2;
    int64_t v19 = a1 + 8; // 0x30aaa3
    *(int64_t *)v19 = *v16;
    *(int64_t *)(a1 + 24) = *v16;
    *v16 = v19;
    int64_t result = function_c9849(a1, a2, (a3 - v1 + (int64_t)v8) % 256 | a3 & -256, a4, a5, v1, (int64_t)&v15); // 0x30ab0d
    return result;
}

// Address range: 0x30ab12 - 0x30ac70
int64_t function_30ab12(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30ab12
    int64_t v1; // bp-56, 0x30ab12
    int64_t v2 = (int64_t)&v1; // 0x30ac3e
    int64_t v3 = v2 + 8; // 0x30ac46
    v1 = *(int64_t *)v3;
    int64_t v4 = v2 - 8; // 0x30ac51
    *(int64_t *)(v2 - 16) = v4;
    *(int64_t *)v4 = v3;
    bool v5; // 0x30ab12
    return function_c9849(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2);
}

// Address range: 0x30ac70 - 0x30adcd
int64_t function_30ac70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x30ac70
    int64_t v1; // bp-64, 0x30ac70
    v1 = (int64_t)&v1;
    return function_c9849(a1, a2, a3, a4, a5, a6, 0x308d84);
}

// Address range: 0x30ae6e - 0x30ae71
int64_t function_30ae6e(void) {
    // 0x30ae6e
    int64_t result; // 0x30ae6e
    return result;
}

// Address range: 0x30ae72 - 0x30ae75
int64_t function_30ae72(void) {
    // 0x30ae72
    int64_t result; // 0x30ae72
    return result;
}

// Address range: 0x30ae9a - 0x30ae9d
int64_t function_30ae9a(void) {
    // 0x30ae9a
    int64_t result; // 0x30ae9a
    return result;
}

// Address range: 0x30aeaa - 0x30aead
int64_t function_30aeaa(void) {
    // 0x30aeaa
    int64_t result; // 0x30aeaa
    return result;
}

// Address range: 0x30aecb - 0x30aece
int64_t function_30aecb(void) {
    // 0x30aecb
    int64_t result; // 0x30aecb
    return result;
}

// Address range: 0x30aecf - 0x30aed2
int64_t function_30aecf(void) {
    // 0x30aecf
    int64_t result; // 0x30aecf
    return result;
}

// Address range: 0x445a67 - 0x445a6e
int64_t function_445a67(int64_t a1, int64_t a2, int64_t a3) {
    // 0x445a67
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x445a67
    return result;
}

// Address range: 0x445a7d - 0x445b2f
int64_t function_445a7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x445a7d
    int64_t v2 = -0x407c8ff6 * v1; // 0x445a7d
    __asm_in_136(-32);
    bool v3; // 0x445a7d
    if (v3 != v2 != -0x407c8ff600000000 * v1 >> 32) {
        function_445a3d();
    }
    int64_t v4 = __asm_int1(); // 0x445a95
    int32_t * v5 = (int32_t *)((v2 & 0xfffffffe) + 40); // 0x445a9b
    *v5 = *v5 - (int32_t)v2;
    uint64_t v6 = a4 - 1; // 0x445aa4
    int64_t v7; // 0x445a7d
    if (v6 == 0) {
        int64_t v8 = v2 != -0x407c8ff600000000 * v1 >> 32 ? 0x76943d1c : 0x76943d1b; // 0x445a96
        uint64_t v9 = v4 - v8 & 0xe38118fb | 0x1c7ee704; // 0x445a9e
        char v10 = *(char *)&v7; // 0x445aa6
        return 256 * (int64_t)(v10 ^ (char)(v9 / 256)) | v9 & 0xffff00ff;
    }
    int64_t v11 = v7;
    *(int32_t *)v11 = *(int32_t *)&v7 - (int32_t)v11;
    *(int64_t *)0xacc3410b = 13;
    char * v12 = (char *)(a4 - 108); // 0x445b26
    *v12 = *v12 - (char)(v6 / 256);
    return 0xc8f38c2;
}

// Address range: 0x445b4e - 0x445b5b
int64_t function_445b4e(void) {
    // 0x445b4e
    int64_t v1; // 0x445b4e
    *(int32_t *)0x3e3cff5a8d984545 = (int32_t)v1;
    return function_445bbb(v1);
}

// Address range: 0x445b5b - 0x445b65
int64_t function_445b5b(int64_t a1) {
    // 0x445b5b
    int64_t result; // 0x445b5b
    uint64_t v1 = result;
    *(char *)(v1 + 0x35134f9e) = (char)(v1 / 256);
    return result;
}

// Address range: 0x445b66 - 0x445b69
int64_t function_445b66(int64_t a1) {
    // 0x445b66
    int64_t result; // 0x445b66
    return result;
}

// Address range: 0x445bbb - 0x445bc8
int64_t function_445bbb(int64_t a1) {
    // 0x445bbb
    int64_t v1; // 0x445bbb
    uint32_t result = 0x10000 * (int32_t)v1 >> 16; // 0x445bbb
    *(int32_t *)a1 = result;
    int32_t * v2 = (int32_t *)(v1 - 73); // 0x445bc2
    uint32_t v3 = *v2; // 0x445bc2
    *v2 = v3 / 0x400000 | 1024 * v3;
    return result;
}

// Address range: 0x445bd3 - 0x445be9
int64_t function_445bd3(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x258d13cb); // 0x445bdc
    int64_t v2; // 0x445bd3
    *v1 = *v1 + (char)v2;
    return 0x51d5c774;
}

// Address range: 0x445be9 - 0x445c02
int64_t function_445be9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(2 * a3 + 0x7c45ceaf); // 0x445be9
    *v1 = -1 - *v1;
    return function_ffffffffebc085c8(a4);
}

// Address range: 0x445c88 - 0x445c8b
int64_t function_445c88(void) {
    // 0x445c88
    int64_t result; // 0x445c88
    return result;
}

// Address range: 0x445d10 - 0x445d17
int64_t function_445d10(void) {
    // 0x445d10
    int64_t result; // 0x445d10
    return result;
}

// Address range: 0x445d61 - 0x445d64
int64_t function_445d61(void) {
    // 0x445d61
    int64_t result; // 0x445d61
    return result;
}

// Address range: 0x445d89 - 0x445d8a
int64_t function_445d89(void) {
    // 0x445d89
    int64_t result; // 0x445d89
    return result;
}

// Address range: 0x445dd1 - 0x445dd5
int64_t function_445dd1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x445dd1
    int64_t v1; // 0x445dd1
    return v1 & 0xffffffff;
}

// Address range: 0x445de8 - 0x445e04
int64_t function_445de8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x445de8
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x445de8
    int64_t v2; // 0x445de8
    int32_t v3 = *(int32_t *)&v1 & (int32_t)v2; // 0x445df2
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x445df2
    *(int32_t *)a4 = v3;
    *(int32_t *)(a4 + 0x90e7719) = (int32_t)a2;
    int64_t result = v2 & -256 | (int64_t)*(char *)0x6d17fbe10d8f67; // 0x445dfb
    if (v4 % 2 == 0) {
        result = function_445d89();
    }
    // 0x445dfd
    int64_t v5; // 0x445de8
    int32_t v6 = *(int32_t *)&v5; // 0x445dff
    *(int32_t *)v5 = v6 - (int32_t)v2 + (int32_t)((char)result < 92);
    return result;
}

// Address range: 0x445e54 - 0x445f2d
int64_t function_445e54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    unsigned char v2 = *(char *)-0x2ac14d0a6af3c947; // 0x445e54
    int32_t * v3 = (int32_t *)(a1 + 117); // 0x445e5d
    uint32_t v4 = *v3; // 0x445e5d
    bool v5; // 0x445e54
    int32_t v6 = v5; // 0x445e5d
    int64_t v7; // 0x445e54
    uint32_t v8 = (int32_t)(v7 & 0xffffff00 | (int64_t)v2) + v6; // 0x445e5d
    int32_t v9 = v4 - v8; // 0x445e5d
    *v3 = v9;
    int16_t v10 = a3; // 0x445e60
    int32_t v11 = __asm_in_137(v10); // 0x445e60
    uint64_t result = (int64_t)v11; // 0x445e60
    int64_t v12 = a4 - 1; // 0x445e62
    if (v12 == 0) {
        // 0x445e64
        *(char *)a1 = __asm_insb(v10);
        char * v13 = (char *)(a1 + 87); // 0x445e69
        *v13 = *v13 + (char)(result / 256);
        return result;
    }
    bool v14 = v5 ? v8 != -1 | v4 < v9 - v6 : v4 < v8; // 0x445e5d
    unsigned char v15 = (char)v11; // 0x445ea2
    unsigned char v16 = v14 ? 56 : 55; // 0x445ea2
    int64_t v17 = (result & 0xffffff00 | (int64_t)(v15 - v16)) + 0xa909c8eb + (int64_t)(v14 | v16 > v15); // 0x445ea4
    int64_t result2 = v17 & 0xffffffff; // 0x445ea4
    float80_t v18; // 0x445e54
    *(int32_t *)(a4 + 113) = (int32_t)v18;
    uint32_t v19 = (int32_t)v7; // 0x445eb0
    uint32_t v20 = *(int32_t *)&v1; // 0x445eb0
    int64_t v21 = v19 - v20; // 0x445eb0
    int32_t * v22 = (int32_t *)(v7 + 37); // 0x445eb2
    *v22 = *v22 - (int32_t)v7 + (int32_t)(v20 > v19);
    *(int64_t *)(v21 - 8) = v21;
    char v23 = *(char *)(v1 + 0x7f7a142b) & (char)a3; // 0x445eb8
    if (v23 >= 0) {
        // 0x445f28
        *(int64_t *)(v21 - 16) = result2;
        return result2;
    }
    // 0x445ec0
    *(int32_t *)result2 = (int32_t)v18;
    char * v24 = (char *)(a3 & -256 | (int64_t)v23); // 0x445ed0
    *v24 = *v24 + v23;
    int64_t result3 = (v12 | 0x2c30c80e) + 0x1f689da9 & 0xdfffff00 | (int64_t)*(char *)&v1; // 0x445ed2
    int64_t v25 = v1 + (v5 ? -1 : 1); // 0x445ed2
    v1 = v25;
    if (result2 == 1 | *(int32_t *)result3 == (int32_t)v17) {
        int64_t * v26 = (int64_t *)v25; // 0x445ed9
        *v26 = *v26 - a5;
        return result3;
    }
    // 0x445f1b
    *(int64_t *)(v21 - 16) = a1;
    int32_t * v27 = (int32_t *)(v7 - 3); // 0x445f22
    *v27 = *v27 >> 3;
    return (int64_t)*(int32_t *)v1;
}

// Address range: 0x445f38 - 0x445f7a
int64_t function_445f38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x445f38
    int64_t v1; // 0x445f38
    int64_t v2 = v1 & -256 | (int64_t)__asm_in_136(121); // 0x445f3d
    int16_t v3 = a3; // 0x445f41
    int64_t result = __asm_in_137(v3); // 0x445f41
    __asm_outsb(v3, (char)v1);
    if (*(int32_t *)v2 < (int32_t)v2) {
        // 0x445f6a
        return result;
    }
    // 0x445f78
    return result;
}

// Address range: 0x445f89 - 0x445f8a
int64_t function_445f89(void) {
    // 0x445f89
    int64_t result; // 0x445f89
    return result;
}

// Address range: 0x445fab - 0x445fac
int64_t function_445fab(void) {
    // 0x445fab
    int64_t result; // 0x445fab
    return result;
}

// Address range: 0x445fad - 0x445fae
int64_t function_445fad(void) {
    // 0x445fad
    int64_t result; // 0x445fad
    return result;
}

// Address range: 0x445fb4 - 0x445fc9
int64_t function_445fb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x445fb4
    int64_t v1; // 0x445fb4
    __asm_out(17, (int32_t)v1);
    int64_t v2 = __asm_sti(); // 0x445fc0
    int32_t v3 = *(int32_t *)0x1170413f ^ (int32_t)v1; // 0x445fc2
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x445fc2
    *(int32_t *)0x1170413f = v3;
    int64_t result = v2; // 0x445fc4
    if (v4 % 2 != 0) {
        result = function_445f89();
    }
    // 0x445fc6
    return result;
}

// Address range: 0x445fcc - 0x44604d
int64_t function_445fcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x445fcc
    int64_t result; // 0x445fcc
    bool v1; // 0x445fcc
    if (v1) {
        // 0x44603d
        __asm_outsd((int16_t)a3, (int32_t)a2);
        return (int64_t)(-52 * *(int32_t *)(2 * result + 0x4fa75bf9 + result));
    }
    char * v2 = (char *)(result - 76 + 8 * result); // 0x445fee
    *v2 = *v2 >> 6;
    return result;
}

// Address range: 0x4460a7 - 0x4460a8
int64_t function_4460a7(void) {
    // 0x4460a7
    int64_t result; // 0x4460a7
    return result;
}

// Address range: 0x4460fd - 0x4460ff
int64_t function_4460fd(void) {
    // 0x4460fd
    return function_4460a7();
}

// Address range: 0x446145 - 0x446148
int64_t function_446145(void) {
    // 0x446145
    int64_t result; // 0x446145
    return result;
}

// Address range: 0x44614b - 0x44614c
int64_t function_44614b(void) {
    // 0x44614b
    int64_t result; // 0x44614b
    return result;
}

// Address range: 0x44615b - 0x4462ce
int64_t function_44615b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x44615b
    *(int32_t *)(a3 - 126) = (int32_t)v2;
    int64_t v3 = v2 & -211; // 0x44616a
    int32_t v4 = *(int32_t *)(v3 + 0x45123d60); // 0x44616c
    int32_t * v5 = (int32_t *)(int64_t)(v4 & (int32_t)v3); // 0x446172
    int32_t v6 = v2; // 0x446172
    *v5 = *v5 | v6;
    uint32_t v7 = __readfsdword(v2 + 58) | (int32_t)a2; // 0x44617a
    unsigned char v8 = llvm_ctpop_i8((char)(*(int32_t *)(v2 + 98) & v6)); // 0x44617e
    int64_t v9; // 0x44615b
    int64_t v10 = (int64_t)&v9; // 0x446197
    if (v8 % 2 != 0) {
        int64_t v11 = unknown_1761a082(); // 0x4461e9
        int32_t * v12 = (int32_t *)(a3 - 46); // 0x446216
        *v12 = *v12 ^ 0xa785617;
        *(int64_t *)(v10 - 8) = -29;
        int64_t result = v11 + 0x23ad94e0 & 0xffffffff; // 0x44621f
        int32_t v13 = *(int32_t *)(v2 - 55) ^ (int32_t)a4; // 0x446226
        if (v13 != 1 != (v13 == 0)) {
            // 0x44620c
            return result;
        }
        // 0x446278
        if ((*(int32_t *)(result - 25) ^ v7 + 4) >= 0) {
            // 0x44629d
            return v11 + 0x2ceec928 & 0xffffffff;
        }
        // 0x44620c
        return result;
    }
    // 0x44619a
    *(char *)0x139668b12a515f47 = 110;
    int64_t result2; // 0x44615b
    if ((int32_t)v10 <= 0x89eb8891) {
        // 0x4461cc
        result2 = 0x7614776e;
        __asm_out_134((int16_t)a3, (int32_t)result2);
        return result2;
    }
    int64_t v14 = v10 + 0x7614776e & 0xfffffffe; // 0x4461ab
    uint32_t v15 = *(int32_t *)&v1; // 0x4461b0
    bool v16; // 0x44615b
    v1 += (v16 ? -4 : 4);
    *(int64_t *)(v14 - 8) = a4;
    uint32_t v17 = *(int32_t *)(int64_t)v7 < v15 ? 0x4e5d5f53 : 0x4e5d5f54; // 0x4461b2
    unsigned char v18 = (char)v17; // 0x4461b2
    if (llvm_ctpop_i8(v18) % 2 != 0) {
        int64_t result3 = v17; // 0x4461b2
        *(int64_t *)(v14 - 16) = result3;
        return result3;
    }
    int64_t v19 = v1;
    v1 = v19 + (v16 ? -1 : 1);
    int64_t v20 = v17 + 0x78d59aa1 + (int32_t)(*(char *)v19 > v18); // 0x4461ba
    // 0x4461cc
    result2 = (a3 + 171 + v20) % 256 | v20 & 0xc732fb00;
    __asm_out_134((int16_t)a3, (int32_t)result2);
    return result2;
}

// Address range: 0x4462e4 - 0x4462e5
int64_t function_4462e4(void) {
    // 0x4462e4
    int64_t result; // 0x4462e4
    return result;
}

// Address range: 0x4462e9 - 0x4462f7
int64_t function_4462e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(unknown_422bcb22() - 49); // 0x4462f0
    uint32_t v2 = *v1; // 0x4462f0
    bool v3; // 0x4462e9
    *v1 = 0x1000 * v2 | 2048 * (int32_t)(bool)v3 | v2 / 0x200000;
    return a1 & 0xffffffff;
}

// Address range: 0x4462fd - 0x4462fe
int64_t function_4462fd(void) {
    // 0x4462fd
    int64_t result; // 0x4462fd
    return result;
}

// Address range: 0x44630d - 0x44630e
int64_t function_44630d(void) {
    // 0x44630d
    int64_t result; // 0x44630d
    return result;
}

// Address range: 0x44631b - 0x44631c
int64_t function_44631b(void) {
    // 0x44631b
    int64_t result; // 0x44631b
    return result;
}

// Address range: 0x44633e - 0x4463dd
int64_t function_44633e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x44633e
    char v3 = *(char *)(a1 - 67) + (char)(v2 / 256); // 0x44633e
    int64_t v4 = 256 * (int64_t)v3 | v2 & -0xff01; // 0x44633e
    if (v3 < 0) {
        int64_t v5 = v4; // 0x44634d
        if ((*(int32_t *)(a1 + 78) || (int32_t)a4) >= 0) {
            v5 = function_44630d();
        }
        // 0x44634f
        return v5 + 0xca7d86f5 & 0xffffffff;
    }
    char * v6 = (char *)(2 * v2 + 0x6aaa165b); // 0x44636c
    *v6 = *v6 + v3;
    int64_t v7 = (int64_t)*(int32_t *)&v1; // 0x446373
    int64_t v8 = 0x5b129f07 * v7; // 0x446373
    char * v9 = (char *)(v2 + 0x6456d99f); // 0x446379
    *v9 = (char)v1;
    int64_t v10 = v1 & -256 | (int64_t)*v9; // 0x446379
    v1 = v10;
    int64_t v11 = *(int64_t *)(v10 - 0x4c37879c); // 0x446380
    int64_t v12 = (int64_t)(v8 != 0x5b129f0700000000 * v7 >> 32) + a1 + v11; // 0x446380
    int64_t v13 = v4 & 0xf32cd451 | 0xcd32bae; // 0x446387
    if ((*(int32_t *)((v8 & 0xffffffff) - 69) ^ (int32_t)a4) < 0) {
        // 0x446391
        *(int32_t *)0x923c0034 = *(int32_t *)0x923c0034 - (int32_t)v12;
        char * v14 = (char *)v13; // 0x4463a2
        *v14 = *v14 ^ (char)v8;
        *(int32_t *)v12 = *(int32_t *)0x4ec75438;
        return v13 & 0xffffff00 | (int64_t)__asm_in((int16_t)v1);
    }
    char v15 = *(char *)v12; // 0x4463c8
    int64_t v16 = v13 & 0xffffff00; // 0x4463c8
    *(int32_t *)0x1826064c4d9b332b = (int32_t)(v16 | (int64_t)(v15 + (char)v13));
    int64_t result = v16 | 81; // 0x4463d6
    *(int32_t *)v12 = (int32_t)result;
    bool v17; // 0x44633e
    *(int32_t *)(v12 + (v17 ? -4 : 4)) = __asm_insd((int16_t)v1);
    return result;
}

// Address range: 0x4463de - 0x4463e3
int64_t function_4463de(void) {
    // 0x4463de
    int64_t result; // 0x4463de
    int32_t * v1 = (int32_t *)(result + 78); // 0x4463de
    *v1 = *v1 / 2;
    return result;
}

// Address range: 0x446404 - 0x44640b
int64_t function_446404(int64_t a1, int64_t a2, int64_t a3) {
    // 0x446404
    return function_fffffffff31e885d();
}

// Address range: 0x446421 - 0x44643c
int64_t function_446421(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x446421
    int64_t v1; // 0x446421
    *(char *)(a5 + 68) = (char)v1;
    return v1 & 171 | v1 & 0xfe7df500 | 0x1820a54;
}

// Address range: 0x446451 - 0x446459
int64_t function_446451(int64_t a1) {
    // 0x446451
    return function_74ad999a();
}

// Address range: 0x44646e - 0x44647d
int64_t function_44646e(void) {
    unsigned char v1 = *(char *)0x7dd95744fdb12746; // 0x446470
    int64_t v2; // 0x44646e
    return v2 & -0x10000 | (int64_t)&g1 & -256 | (int64_t)v1;
}

// Address range: 0x446492 - 0x446497
int64_t function_446492(void) {
    // 0x446492
    return function_ffffffffd6d2b8e2();
}

// Address range: 0x4464cf - 0x4464d4
int64_t function_4464cf(void) {
    // 0x4464cf
    int64_t v1; // 0x4464cf
    return function_446503(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x4464e0 - 0x4464e3
int64_t function_4464e0(void) {
    // 0x4464e0
    int64_t v1; // 0x4464e0
    return v1 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x446503 - 0x44658f
int64_t function_446503(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t result = (int64_t)__asm_in_137((int16_t)a3); // 0x44650a
    char * v1 = (char *)(a4 - 21); // 0x44650c
    char v2 = result / 256; // 0x44650c
    char v3 = *v1 + v2; // 0x44650c
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x44650c
    *v1 = v3;
    if (v4 % 2 != 0) {
        // 0x446511
        return result;
    }
    char * v5 = (char *)(a4 + 15); // 0x446583
    *v5 = *v5 & v2;
    __asm_int(68);
    int64_t v6; // 0x446503
    return v6 & 0xffffffff;
}

// Address range: 0x4465a9 - 0x4465ae
int64_t function_4465a9(void) {
    // 0x4465a9
    return function_ffffffffa44493f4();
}

// Address range: 0x4465b1 - 0x4465b4
int64_t function_4465b1(void) {
    // 0x4465b1
    int64_t result; // 0x4465b1
    return result;
}

// Address range: 0x4465e3 - 0x4465f8
int64_t function_4465e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4465e3
    int64_t v1; // 0x4465e3
    uint64_t result = v1;
    char * v2 = (char *)(a1 - 113 + result); // 0x4465e5
    unsigned char v3 = *v2; // 0x4465e5
    unsigned char v4 = v3 + (char)(result / 256); // 0x4465e5
    *v2 = v4;
    *(char *)a1 = __asm_insb((int16_t)a3);
    if (v4 >= v3) {
        // 0x446649
        return result;
    }
    // 0x4465ed
    return (a5 + 92) % 256 | a5 & -256;
}

// Address range: 0x4465fa - 0x4465ff
int64_t function_4465fa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4465fa
    int64_t result; // 0x4465fa
    *(int64_t *)(result - 8) = a3;
    return result;
}

// Address range: 0x446644 - 0x446649
int64_t function_446644(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t result = __asm_in_133(13); // 0x446644
    int64_t v1; // 0x446644
    *(int32_t *)a3 = 2 * (int32_t)v1;
    return result;
}

// Address range: 0x446699 - 0x4466af
int64_t function_446699(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x446699
    int64_t v1; // 0x446699
    uint64_t v2 = (0x100000000 * v1 >> 32) * (0x100000000 * v1 >> 32); // 0x44669b
    __asm_out_138(72, (char)v2);
    char * v3 = (char *)a3; // 0x4466ac
    *v3 = *v3 + (char)(v2 / 256);
    return v2 & 0xffffffff;
}

// Address range: 0x4466c9 - 0x4466cf
int64_t function_4466c9(void) {
    // 0x4466c9
    int64_t result; // 0x4466c9
    return result;
}

// Address range: 0x4466ea - 0x4466f1
int64_t function_4466ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4466ea
    int64_t result; // 0x4466ea
    *(int32_t *)(result - 60) = (int32_t)a4;
    return result;
}

// Address range: 0x446737 - 0x446738
int64_t function_446737(void) {
    // 0x446737
    int64_t result; // 0x446737
    return result;
}

// Address range: 0x44673e - 0x44674d
int64_t function_44673e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44673e
    int64_t result; // 0x44673e
    bool v1; // 0x44673e
    if (v1) {
        // 0x44674e
        return result;
    }
    // 0x446740
    return result & 0x9a02287c;
}

// Address range: 0x446788 - 0x4467a3
int64_t function_446788(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x446788
    int64_t v1; // 0x446788
    int64_t v2 = v1 + 0xfa13ae4b + (int64_t)((char)(v1 / 256) < (char)a4); // 0x44678a
    int64_t v3 = v2 & 0xffffffff; // 0x446793
    if ((int32_t)(v2 || v1) < 0) {
        v3 = function_446737();
    }
    // 0x446795
    return v3 & 0xaf74c51;
}

// Address range: 0x44683c - 0x446846
int64_t function_44683c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44683c
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_fffffffff7f49d03();
}

// Address range: 0x446864 - 0x44688b
int64_t function_446864(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x446864
    int64_t v1; // 0x446864
    unsigned char v2 = (char)v1; // 0x446864
    bool v3; // 0x446864
    char v4 = v3; // 0x446864
    unsigned char v5 = *(char *)(v1 + 48) + v4; // 0x446864
    unsigned char v6 = v2 - v5; // 0x446864
    bool v7 = v3 ? v5 != -1 | v6 - v4 > v2 : v5 > v2; // 0x446864
    int32_t * v8 = (int32_t *)(v1 + 0x5e3d6454); // 0x446867
    *v8 = *v8 - (int32_t)v1 + (int32_t)v7;
    __asm_out_135((int16_t)a3, v6);
    int64_t v9 = v1 & 0xa6f0b300 | (int64_t)v6 | 0x590f4c4b; // 0x446871
    return v9 & 0xffffff00 | (int64_t)*(char *)((v9 + 242 & 253) + v1);
}

// Address range: 0x4468cc - 0x4468d4
int64_t function_4468cc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4468cc
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x4468cc
    return result;
}

// Address range: 0x4468fa - 0x4468ff
int64_t function_4468fa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4468fa
    int64_t v1; // 0x4468fa
    *(char *)a3 = (char)(v1 / 256) + (char)v1;
    return v1 & -0xff01 | 256 * a3 & 0xff00;
}

// Address range: 0x446903 - 0x446996
int64_t function_446903(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x446903
    int64_t v1; // 0x446903
    uint64_t v2 = v1;
    uint64_t result = __asm_iretd(); // 0x446908
    char * v3 = (char *)(a2 + 59); // 0x446950
    unsigned char v4 = *v3; // 0x446950
    *v3 = v4 / 2 | 128 * v4;
    int32_t * v5 = (int32_t *)(a1 - 0x6ef06177); // 0x446953
    *v5 = *v5 - (int32_t)a2;
    char * v6 = (char *)(a4 + 91); // 0x446959
    char v7 = *v6; // 0x446959
    char v8 = result / 256; // 0x446959
    char v9 = v7 + v8; // 0x446959
    *v6 = v9;
    if (((v9 ^ v7) & (v9 ^ v8)) < 0) {
        // 0x44695e
        return result + 0xef9c3dbd & 0x860b49f6;
    }
    int64_t v10 = 0x100000000 * a4 >> 32; // 0x446911
    char v11 = *(char *)(v2 + 46); // 0x446917
    char v12 = *(char *)0x1419c369; // 0x446924
    *(char *)0x1419c369 = (char)(v2 / 256) + (char)(-0x54321bc0 * v10 != -0x54321bc000000000 * v10 >> 32) + v11 + v12;
    return result;
}

// Address range: 0x4469bc - 0x4469bd
int64_t function_4469bc(int64_t a1) {
    // 0x4469bc
    int64_t result; // 0x4469bc
    return result;
}

// Address range: 0x4469d4 - 0x4469d7
int64_t function_4469d4(void) {
    // 0x4469d4
    int64_t result; // 0x4469d4
    return result;
}

// Address range: 0x4469fa - 0x446a02
int64_t function_4469fa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4469fa
    int64_t result; // 0x4469fa
    return result;
}

// Address range: 0x446a18 - 0x446a1f
int64_t function_446a18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 0x21a25be6); // 0x446a18
    *v1 = 2 * *v1;
    int64_t result; // 0x446a18
    return result;
}

// Address range: 0x446a33 - 0x446a34
int64_t function_446a33(void) {
    // 0x446a33
    int64_t result; // 0x446a33
    return result;
}

// Address range: 0x446a46 - 0x446a4b
int64_t function_446a46(int64_t a1) {
    // 0x446a46
    int64_t result; // 0x446a46
    *(char *)a1 = (char)result;
    bool v1; // 0x446a46
    if (!v1) {
        // 0x446abf
        return result;
    }
    // 0x446a49
    return function_446a33();
}

// Address range: 0x446a59 - 0x446a5f
int64_t function_446a59(void) {
    // 0x446a59
    int64_t result; // 0x446a59
    return result;
}
