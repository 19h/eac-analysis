/*
 * Targeted RetDec C for native executable gap queue batch 1377.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x33ba42-0x33bc42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33bc42-0x33be42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33be42-0x33c042 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33c042-0x33c242 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33c242-0x33c442 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33c442-0x33c642 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33c642-0x33c842 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a1314-0x3a1514 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a1514-0x3a1714 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a1714-0x3a1914 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a1914-0x3a1b14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a1b14-0x3a1d14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a1d14-0x3a1f14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a1f14-0x3a2114 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a2114-0x3a2314 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ed896-0x3eda96 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
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

int64_t function_27e60257();
int64_t function_288fab61();
int64_t function_33ba42(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33ba5c(int64_t a1);
int64_t function_33bab5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33bade(void);
int64_t function_33bb05(void);
int64_t function_33bb0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33bb15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33bc1a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33bc6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33bcfe(int64_t result);
int64_t function_33bd58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33bd71(void);
int64_t function_33bd72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33be22(void);
int64_t function_33be83(int64_t a1);
int64_t function_33bec6(int64_t a1);
int64_t function_33bee2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33bf2d(void);
int64_t function_33bf51(void);
int64_t function_33bf58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33bf9d(int64_t a1);
int64_t function_33bfa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33c0e8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33c10f(void);
int64_t function_33c11b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_33c153(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33c183(void);
int64_t function_33c1cb(void);
int64_t function_33c1d3(void);
int64_t function_33c1df(void);
int64_t function_33c1e5(int64_t a1);
int64_t function_33c1e7(int64_t a1);
int64_t function_33c205(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33c21a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33c245(void);
int64_t function_33c2cf(int64_t a1);
int64_t function_33c323(int64_t a1);
int64_t function_33c383(void);
int64_t function_33c397(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_33c3cb(void);
int64_t function_33c3d1(void);
int64_t function_33c3de(int64_t a1);
int64_t function_33c3f2(void);
int64_t function_33c3fc(int64_t a1);
int64_t function_33c416(void);
int64_t function_33c41f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33c441(void);
int64_t function_33c44e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33c480(int64_t a1, int64_t a2);
int64_t function_33c53f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33c651(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33c65b(void);
int64_t function_33c661(void);
int64_t function_33c66b(int64_t a1);
int64_t function_33c691(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33c6bd(int64_t a1);
int64_t function_33c71f(int64_t a1);
int64_t function_33c731(void);
int64_t function_33c751(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33c765(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_33c7f2(void);
int64_t function_33c7f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a1314(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a1386(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a14d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a166b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a1791(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a18c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a1a05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a1b68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a1c8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a1e19(int64_t a1, int64_t a2);
int64_t function_3a1f3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a20a9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a21ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b83c6ac();
int64_t function_3ed823();
int64_t function_3ed896(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ed973(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ed9c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3eda90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6545c2b3();
int64_t function_74ac293c();
int64_t function_761df97c();
int64_t function_c6d58();
int64_t function_ffffffff8835b05f();
int64_t function_ffffffffe960c65b();
int64_t function_fffffffff2644c54();
int64_t unknown_170bb32();
int64_t unknown_2ac65105();
int64_t unknown_3408456e();
int64_t unknown_3df77f62();
int64_t unknown_442ec08b();
int64_t unknown_4c3d86e();
int64_t unknown_564450f8();
int64_t unknown_ffffffffb934b8e7();
int64_t unknown_ffffffffc47baf96();
int64_t unknown_ffffffffe22af6f6();
int64_t unknown_fffffffffe7fc7a2();

// Address range: 0x33ba42 - 0x33ba45
int64_t function_33ba42(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x33ba43
    int64_t v2; // 0x33ba42
    __asm_out(v1, (char)v2);
    return __asm_in(v1);
}

// Address range: 0x33ba5c - 0x33ba5f
int64_t function_33ba5c(int64_t a1) {
    // 0x33ba5c
    int64_t result; // 0x33ba5c
    return result;
}

// Address range: 0x33bab5 - 0x33bad2
int64_t function_33bab5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33bab5
    int64_t v1; // 0x33bab5
    bool v2; // 0x33bab5
    char * v3 = (char *)((v1 & -256 | (uint64_t)v1 / 256 % 256 | (int64_t)v2) + 0x62870e00); // 0x33babb
    *v3 = *v3 & (char)a4;
    return __asm_wait();
}

// Address range: 0x33bade - 0x33badf
int64_t function_33bade(void) {
    // 0x33bade
    int64_t result; // 0x33bade
    return result;
}

// Address range: 0x33bb05 - 0x33bb0a
int64_t function_33bb05(void) {
    // 0x33bb05
    return function_fffffffff2644c54();
}

// Address range: 0x33bb0a - 0x33bb15
int64_t function_33bb0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // 0x33bb0b
    bool v2; // 0x33bb0a
    if (v2 || v2) {
        v1 = function_33bade();
    }
    uint64_t v3 = v1;
    char v4 = *(char *)(a3 + 31); // 0x33bb0e
    return 256 * (int64_t)(v4 + (char)(v3 / 256)) | v3 & -0xff01;
}

// Address range: 0x33bb15 - 0x33bbd5
int64_t function_33bb15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x33bb15
    if (a4 == 0) {
        // 0x33bb86
        *(char *)0xff49f98 = *(char *)0xff49f98 + (char)a1;
        int64_t v1; // bp-16, 0x33bb15
        return (int64_t)&v1;
    }
    // 0x33bb1e
    int64_t v2; // 0x33bb15
    char * v3 = (char *)(8 * a1 + 0xe0a3253 + (v2 & -256 | 78)); // 0x33bb1e
    *v3 = *v3 + (char)((uint64_t)v2 / 256);
    unknown_170bb32();
    return function_761df97c();
}

// Address range: 0x33bc1a - 0x33bc26
int64_t function_33bc1a(int64_t a1, int64_t a2, int64_t a3) {
    int32_t result = __asm_in((int16_t)a3); // 0x33bc1a
    char * v1 = (char *)(a2 + 0x685d1061); // 0x33bc20
    int64_t v2; // 0x33bc1a
    *v1 = *v1 + (char)v2;
    return result;
}

// Address range: 0x33bc6a - 0x33bc7d
int64_t function_33bc6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in_133(23); // 0x33bc6a
    int64_t v2; // 0x33bc6a
    *(char *)a1 = (char)v2 + (char)a4;
    return v2 & -256 | (int64_t)v1;
}

// Address range: 0x33bcfe - 0x33bd02
int64_t function_33bcfe(int64_t result) {
    // 0x33bcfe
    return result;
}

// Address range: 0x33bd58 - 0x33bd5d
int64_t function_33bd58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33bd58
    int64_t result; // 0x33bd58
    return result;
}

// Address range: 0x33bd71 - 0x33bd72
int64_t function_33bd71(void) {
    // 0x33bd71
    int64_t result; // 0x33bd71
    return result;
}

// Address range: 0x33bd72 - 0x33bdf4
int64_t function_33bd72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x33bd72
    int32_t * v3 = (int32_t *)(v2 - 61); // 0x33bd72
    int32_t v4 = *v3; // 0x33bd72
    *v3 = (int32_t)a4;
    int32_t * v5 = (int32_t *)(a1 + 0x67e73a0d); // 0x33bd77
    int32_t v6 = *v5 + (int32_t)(v2 | v2); // 0x33bd77
    *v5 = v6;
    int64_t v7; // 0x33bd72
    if (v6 < 0) {
        v7 = function_33bd71();
    }
    char v8 = *(char *)0x1fc96488; // 0x33bd81
    char v9 = v2 / 256; // 0x33bd81
    char v10 = v8 + v9; // 0x33bd81
    *(char *)0x1fc96488 = v10;
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0 == (v10 != 0)) {
        int32_t * v11 = (int32_t *)(v1 + 104); // 0x33bdd4
        *v11 = (int32_t)((char)v7 > 94) + (int32_t)v2 + *v11;
        char * v12 = (char *)(v7 & -256 | (int64_t)*(char *)&v1); // 0x33bde0
        *v12 = *v12 + (char)(v7 / 256);
        return (int64_t)*(int32_t *)-0x4e6b911cc550ff26;
    }
    int64_t result = v7 & -256 | (int64_t)*(char *)-0x7bf42b21bd7c3b21; // 0x33bd8d
    if ((char)v2 - *(char *)(v1 + (int64_t)&g1) < 0) {
        // 0x33bda7
        return result;
    }
    int32_t * v13 = (int32_t *)(((int64_t)(v4 & -0xff01) | (int64_t)"rerror") + 0x3d006611); // 0x33bdc6
    *v13 = -*v13;
    return result;
}

// Address range: 0x33be22 - 0x33be27
int64_t function_33be22(void) {
    // 0x33be22
    return function_288fab61();
}

// Address range: 0x33be83 - 0x33be86
int64_t function_33be83(int64_t a1) {
    // 0x33be83
    int64_t result; // 0x33be83
    return result;
}

// Address range: 0x33bec6 - 0x33bec7
int64_t function_33bec6(int64_t a1) {
    // 0x33bec6
    int64_t result; // 0x33bec6
    return result;
}

// Address range: 0x33bee2 - 0x33bef8
int64_t function_33bee2(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_int3(); // 0x33beed
    char * v2 = (char *)(a3 + 77); // 0x33bef0
    *v2 = *v2 + (char)a3;
    return (v1 + 77) % 256 | v1 & -256;
}

// Address range: 0x33bf2d - 0x33bf2e
int64_t function_33bf2d(void) {
    // 0x33bf2d
    int64_t result; // 0x33bf2d
    return result;
}

// Address range: 0x33bf51 - 0x33bf54
int64_t function_33bf51(void) {
    // 0x33bf51
    int64_t v1; // 0x33bf51
    return function_33bfa9(v1, v1, v1, v1, (int64_t)&g6);
}

// Address range: 0x33bf58 - 0x33bf86
int64_t function_33bf58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33bf58
    int64_t v1; // 0x33bf58
    int64_t v2 = v1 & -256 | 55; // 0x33bf5a
    bool v3 = false; // 0x33bf5a
    bool v4; // 0x33bf58
    bool v5; // 0x33bf58
    if (v4) {
        int64_t v6 = unknown_3df77f62(); // 0x33bf5c
        int32_t * v7 = (int32_t *)v6; // 0x33bf61
        uint32_t v8 = *v7; // 0x33bf61
        uint32_t v9 = v8 + (int32_t)v6; // 0x33bf61
        *v7 = v9;
        v2 = __asm_sti((int64_t)&g6);
        v5 = v9 == 0;
        v3 = v9 < v8;
    }
    // 0x33bf64
    if (v5 || v3) {
        // 0x33bf66
        int3_t v10; // 0x33bf58
        int3_t v11 = v10 - 2; // 0x33bf66
        __frontend_reg_store_fpr(v11, __frontend_reg_load_fpr(v11) - __frontend_reg_load_fpr(v10));
    }
    // 0x33bf68
    *(int32_t *)a1 = (int32_t)v2;
    if ((char)(v2 ^ a3) >= 0) {
        function_33bf2d();
    }
    uint32_t result = -0x7eddd51b * *(int32_t *)(v1 + 0x57b457dc) + 8; // 0x33bf83
    *(int32_t *)((v4 ? -8 : 8) + a1) = result;
    return result;
}

// Address range: 0x33bf9d - 0x33bf9e
int64_t function_33bf9d(int64_t a1) {
    // 0x33bf9d
    int64_t result; // 0x33bf9d
    return result;
}

// Address range: 0x33bfa9 - 0x33c0e6
int64_t function_33bfa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33bfa9
    int64_t v1; // 0x33bfa9
    *(char *)0x7a59adb0 = *(char *)0x7a59adb0 + (char)(v1 / 256);
    *(int32_t *)0x503740a3 = *(int32_t *)0x503740a3 | (int32_t)v1;
    int64_t result = unknown_fffffffffe7fc7a2(); // 0x33bfb5
    __asm_out_134(6, (char)result);
    if (llvm_ctpop_i8(*(char *)0xabe3e15 | (char)a3) % 2 != 0) {
        // 0x33c022
        return result;
    }
    // 0x33bfea
    return unknown_ffffffffe22af6f6(*(int32_t *)(a1 + 0x13d00b3) | (int32_t)a1);
}

// Address range: 0x33c0e8 - 0x33c105
int64_t function_33c0e8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33c0e8
    int64_t v1; // 0x33c0e8
    *(char *)a1 = (char)v1;
    bool v2; // 0x33c0e8
    int64_t v3 = v2 ? -1 : 1; // 0x33c0e8
    int64_t v4 = v3 + a2; // 0x33c0e8
    int64_t v5; // 0x33c0e8
    int32_t v6; // 0x33c0e8
    int64_t v7; // 0x33c0e8
    if (!v2) {
        int64_t v8 = function_33c153(v3 + a1, v4, a3, v1); // 0x33c0e9
        v7 = v8;
        v5 = v8;
        v6 = v8;
    } else {
        // 0x33c0e8
        v5 = v7;
        v6 = *(int32_t *)&v7;
    }
    uint32_t v9 = v6 + (int32_t)v1; // 0x33c0eb
    *(int32_t *)v5 = v9;
    int32_t * v10 = (int32_t *)(v7 + 3); // 0x33c0ed
    *v10 = (int32_t)(v9 < v6) + (int32_t)a3 + *v10;
    __asm_in_133(23);
    int64_t result = unknown_564450f8(); // 0x33c0f2
    int32_t * v11 = (int32_t *)(2 * v1 + 0x4696b + result); // 0x33c0f7
    *v11 = *v11 ^ (int32_t)v4;
    return result;
}

// Address range: 0x33c10f - 0x33c112
int64_t function_33c10f(void) {
    // 0x33c10f
    int64_t result; // 0x33c10f
    return result;
}

// Address range: 0x33c11b - 0x33c147
int64_t function_33c11b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x33c11b
    int64_t v1; // 0x33c11b
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(a1 - 43); // 0x33c120
    int64_t v4 = v2 & -256; // 0x33c123
    int64_t v5 = a4 & -0xff01 | (int64_t)&g4; // 0x33c128
    int32_t * v6 = (int32_t *)v4; // 0x33c12a
    *v6 = *v6 + (int32_t)v5 + (int32_t)(v3 > (char)(a3 / 256));
    *(char *)0x1511fb33 = *(char *)0x1511fb33 + (char)(v2 / 256);
    int64_t v7 = v4; // bp-16, 0x33c132
    int64_t v8; // 0x33c11b
    char v9 = *(char *)&v8; // 0x33c138
    *(char *)v8 = v9 + (char)((int64_t)&g5 >> 8);
    int32_t * v10 = (int32_t *)v5; // 0x33c13a
    *v10 = *v10 & (int32_t)v8;
    int32_t * v11 = (int32_t *)(0xffffffb3 * a2 & 0xffffffff); // 0x33c13c
    *v11 = *v11 + (int32_t)(int64_t)&v7;
    return (int64_t)*(int32_t *)-0x54fd17fec2af7580;
}

// Address range: 0x33c153 - 0x33c17d
int64_t function_33c153(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33c153
    int64_t v1; // 0x33c153
    int64_t v2 = v1 & 0xffffffff | 0x100000000 * a3; // 0x33c155
    int64_t v3 = a2 & 0xffffffff; // 0x33c155
    int64_t result = v2 / v3 & 0xffffffff; // 0x33c155
    int64_t v4 = v2 % v3; // 0x33c155
    char * v5 = (char *)((2 * v4 & 0x1fffffffe) + 61); // 0x33c158
    *v5 = *v5 + (char)(v4 / 256);
    int32_t v6 = (int32_t)v4 + (int32_t)a4; // 0x33c15c
    if (a4 != 1 == v6 == 0) {
        // 0x33c1cf
        return result;
    }
    int32_t * v7 = (int32_t *)(2 * a1 + a2); // 0x33c165
    *v7 = *v7 & v6;
    *(int32_t *)a1 = (int32_t)unknown_4c3d86e();
    __asm_in((int16_t)v6);
    return (int64_t)*(int32_t *)result;
}

// Address range: 0x33c183 - 0x33c18b
int64_t function_33c183(void) {
    // 0x33c183
    return function_6545c2b3();
}

// Address range: 0x33c1cb - 0x33c1cf
int64_t function_33c1cb(void) {
    // 0x33c1cb
    int64_t v1; // 0x33c1cb
    int64_t v2 = v1;
    bool v3; // 0x33c1cb
    return (v2 + 217 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x33c1d3 - 0x33c1d4
int64_t function_33c1d3(void) {
    // 0x33c1d3
    int64_t result; // 0x33c1d3
    return result;
}

// Address range: 0x33c1df - 0x33c1e4
int64_t function_33c1df(void) {
    // 0x33c1df
    return function_3b83c6ac();
}

// Address range: 0x33c1e5 - 0x33c1e7
int64_t function_33c1e5(int64_t a1) {
    // 0x33c1e5
    int64_t result; // 0x33c1e5
    return result;
}

// Address range: 0x33c1e7 - 0x33c1eb
int64_t function_33c1e7(int64_t a1) {
    // 0x33c1e7
    int64_t result; // 0x33c1e7
    return result;
}

// Address range: 0x33c205 - 0x33c210
int64_t function_33c205(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33c205
    int64_t result; // 0x33c205
    return result;
}

// Address range: 0x33c21a - 0x33c242
int64_t function_33c21a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33c21a
    int64_t v1; // 0x33c21a
    int32_t * v2 = (int32_t *)(v1 - 0x4a50ffd2); // 0x33c21a
    uint32_t v3 = *v2 + (int32_t)a3; // 0x33c21a
    *v2 = v3;
    if (v3 >= 0) {
        // 0x33c222
        int64_t result; // 0x33c21a
        if (llvm_ctpop_i8((char)v3) % 2 == 0) {
            result = function_33c1d3();
        }
        // 0x33c226
        return result;
    }
    // 0x33c228
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char * v4 = (char *)(a2 - 113); // 0x33c22b
    *v4 = *v4 + (char)(v1 / 256);
    int64_t v5 = a2; // 0x33c238
    int64_t v6 = a1; // 0x33c238
    if ((int32_t)v1 >= 0x14fb5c01) {
        goto lab_0x33c23f;
    } else {
        goto lab_0x33c23a;
    }
  lab_0x33c23f:
    // 0x33c23f
    *(int32_t *)v6 = *(int32_t *)v5;
    bool v7; // 0x33c21a
    int64_t v8 = v7 ? -4 : 4; // 0x33c23f
    v5 += v8;
    v6 += v8;
    goto lab_0x33c23a;
  lab_0x33c23a:
    // 0x33c23a
    __asm_in_136(81);
    goto lab_0x33c23f;
}

// Address range: 0x33c245 - 0x33c248
int64_t function_33c245(void) {
    // 0x33c245
    int64_t result; // 0x33c245
    return result;
}

// Address range: 0x33c2cf - 0x33c2d0
int64_t function_33c2cf(int64_t a1) {
    // 0x33c2cf
    int64_t result; // 0x33c2cf
    return result;
}

// Address range: 0x33c323 - 0x33c324
int64_t function_33c323(int64_t a1) {
    // 0x33c323
    int64_t result; // 0x33c323
    return result;
}

// Address range: 0x33c383 - 0x33c384
int64_t function_33c383(void) {
    // 0x33c383
    int64_t result; // 0x33c383
    return result;
}

// Address range: 0x33c397 - 0x33c3aa
int64_t function_33c397(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    *(char *)(a4 + 61) = (char)(a4 / 256);
    int64_t v2; // 0x33c397
    int32_t * v3 = (int32_t *)(v2 - 0x273250d6); // 0x33c39d
    *v3 = *v3 + (int32_t)a3;
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    return v2 ^ a3 & 0xff00;
}

// Address range: 0x33c3cb - 0x33c3cd
int64_t function_33c3cb(void) {
    // 0x33c3cb
    int64_t result; // 0x33c3cb
    return result;
}

// Address range: 0x33c3d1 - 0x33c3d2
int64_t function_33c3d1(void) {
    // 0x33c3d1
    int64_t result; // 0x33c3d1
    return result;
}

// Address range: 0x33c3de - 0x33c3ec
int64_t function_33c3de(int64_t a1) {
    // 0x33c3de
    *(int32_t *)0x6141c4e6 = *(int32_t *)0x6141c4e6 >> 1;
    bool v1; // 0x33c3de
    return function_27e60257((v1 ? -4 : 4) + a1);
}

// Address range: 0x33c3f2 - 0x33c3f3
int64_t function_33c3f2(void) {
    // 0x33c3f2
    int64_t result; // 0x33c3f2
    return result;
}

// Address range: 0x33c3fc - 0x33c3ff
int64_t function_33c3fc(int64_t a1) {
    // 0x33c3fc
    int64_t result; // 0x33c3fc
    return result;
}

// Address range: 0x33c416 - 0x33c41c
int64_t function_33c416(void) {
    // 0x33c416
    return function_74ac293c();
}

// Address range: 0x33c41f - 0x33c436
int64_t function_33c41f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33c41f
    int64_t v1; // 0x33c41f
    int64_t v2 = v1;
    int64_t result = (a5 + 61) % 256 | a5 & -256; // 0x33c429
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)result;
    unsigned char v3 = (char)a4 % 32; // 0x33c42d
    if (v3 != 0) {
        char * v4 = (char *)(a3 - 0x181bda29); // 0x33c42d
        *v4 = *v4 << v3;
    }
    return result;
}

// Address range: 0x33c441 - 0x33c443
int64_t function_33c441(void) {
    // 0x33c441
    int64_t v1; // 0x33c441
    return function_33c480(v1, v1);
}

// Address range: 0x33c44e - 0x33c45d
int64_t function_33c44e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if (a4 == 0) {
        function_33c3f2();
    }
    int32_t result = __asm_in_136(22); // 0x33c451
    __asm_int(-83);
    *(int32_t *)a1 = (int32_t)a2;
    return result;
}

// Address range: 0x33c480 - 0x33c486
int64_t function_33c480(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x66fb830d); // 0x33c480
    *v1 = *v1 | (int32_t)a2;
    int64_t result; // 0x33c480
    return result;
}

// Address range: 0x33c53f - 0x33c543
int64_t function_33c53f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33c53f
    int64_t result; // 0x33c53f
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x33c651 - 0x33c655
int64_t function_33c651(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33c651
    int64_t result; // 0x33c651
    return result;
}

// Address range: 0x33c65b - 0x33c65d
int64_t function_33c65b(void) {
    // 0x33c65b
    int64_t v1; // 0x33c65b
    return function_33c691(v1, v1, v1);
}

// Address range: 0x33c661 - 0x33c662
int64_t function_33c661(void) {
    // 0x33c661
    int64_t result; // 0x33c661
    return result;
}

// Address range: 0x33c66b - 0x33c66d
int64_t function_33c66b(int64_t a1) {
    // 0x33c66b
    return __asm_sti(a1);
}

// Address range: 0x33c691 - 0x33c69a
int64_t function_33c691(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33c691
    int64_t result; // 0x33c691
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 - 0x453f505;
    return result;
}

// Address range: 0x33c6bd - 0x33c6c0
int64_t function_33c6bd(int64_t a1) {
    // 0x33c6bd
    int64_t result; // 0x33c6bd
    return result;
}

// Address range: 0x33c71f - 0x33c720
int64_t function_33c71f(int64_t a1) {
    // 0x33c71f
    int64_t result; // 0x33c71f
    return result;
}

// Address range: 0x33c731 - 0x33c732
int64_t function_33c731(void) {
    // 0x33c731
    int64_t result; // 0x33c731
    return result;
}

// Address range: 0x33c751 - 0x33c759
int64_t function_33c751(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(2 * a2 + a1); // 0x33c751
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x33c751
    *(int32_t *)a4 = 0x10000000 * *(int32_t *)&v2;
    return function_33c731();
}

// Address range: 0x33c765 - 0x33c7f1
int64_t function_33c765(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 48); // 0x33c765
    *v1 = *v1 + (char)a4;
    uint64_t v2 = unknown_3408456e(); // 0x33c768
    char * v3 = (char *)(v2 + 0x751b200); // 0x33c76d
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x33c765
    char * v5 = (char *)(v4 + 0x4201e800); // 0x33c773
    *v5 = *v5 + (char)(v2 / 256);
    *(char *)a3 = (char)unknown_442ec08b();
    int64_t v6 = unknown_ffffffffc47baf96(); // 0x33c78c
    *(int32_t *)a1 = (int32_t)v6;
    bool v7; // 0x33c765
    int64_t v8 = v7 ? -4 : 4; // 0x33c792
    int64_t v9 = v8 + a1; // 0x33c792
    int64_t v10 = (v6 + a4 / 256) % 256 | v6 & 0xffffff00; // 0x33c793
    int64_t v11 = v2 + 0xbb7c22b0; // 0x33c799
    char * v12 = (char *)(v4 - 115 + 2 * v10); // 0x33c79e
    *v12 = *v12 + (char)a3;
    int32_t v13 = v11; // 0x33c7a4
    *(int32_t *)0x2bc0cfeefa2801e8 = v13;
    if ((int32_t)(v10 ^ v4) != 0) {
        char * v14 = (char *)(v11 & 0xffffffff); // 0x33c7b0
        *v14 = *v14 - (char)v11;
        return function_ffffffff8835b05f(v9);
    }
    // 0x33c7de
    *(int32_t *)v9 = v13;
    int64_t v15 = v9 + v8; // 0x33c7de
    int64_t result = unknown_ffffffffb934b8e7(v15); // 0x33c7e1
    char * v16 = (char *)(v15 + 0x420038f8); // 0x33c7e6
    *v16 = *v16 + (char)result;
    return result;
}

// Address range: 0x33c7f2 - 0x33c7f7
int64_t function_33c7f2(void) {
    // 0x33c7f2
    return function_ffffffffe960c65b();
}

// Address range: 0x33c7f7 - 0x33c819
int64_t function_33c7f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33c7f7
    unknown_2ac65105();
    while (true) {
        // continue -> 0x33c810
    }
}

// Address range: 0x3a1314 - 0x3a1386
int64_t function_3a1314(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a1314
    int64_t v1; // bp+40, 0x3a1314
    int64_t v2; // 0x3a1314
    return function_c6d58(a1, a2, a3, a4, v2, v2, (int64_t)&v1);
}

// Address range: 0x3a1386 - 0x3a14d4
int64_t function_3a1386(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a1386
    int64_t v1; // 0x3a1386
    return function_c6d58(a1, a2, a3, a4, a5, v1, 310);
}

// Address range: 0x3a14d4 - 0x3a166b
int64_t function_3a14d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x39e139; // bp-24, 0x3a151b
    int64_t v2 = (int64_t)&v1; // 0x3a1526
    int64_t v3 = v2 - 16; // 0x3a155a
    int64_t * v4 = (int64_t *)v3; // 0x3a155a
    *v4 = a1;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x3a155e
    int64_t * v6 = (int64_t *)(v2 - 32); // 0x3a1577
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x3a157d
    int64_t v8 = v2 - 24; // 0x3a157d
    int64_t * v9 = (int64_t *)v8; // 0x3a157d
    *v9 = v7;
    int64_t * v10 = (int64_t *)(v2 - 40); // 0x3a158e
    *v10 = v3;
    int64_t * v11 = (int64_t *)(v2 - 48); // 0x3a15a1
    *v11 = *v6;
    int64_t v12 = *v5; // 0x3a15ab
    *v6 = v12;
    *v10 = 0x2c0286f;
    int64_t * v13 = (int64_t *)(v2 - 56); // 0x3a15de
    *v13 = v7;
    *v11 = v7;
    *v9 = *v10;
    *v10 = 0x3dc412d3;
    *v11 = v12;
    *v5 = *v10;
    *v10 = v7;
    *v11 = v8;
    *v13 = *v10;
    int64_t v14 = *v10; // 0x3a1632
    *(int64_t *)(v14 - 8) = *(int64_t *)v14;
    *(int64_t *)(v14 - 16) = v14;
    int64_t v15; // 0x3a14d4
    return function_c6d58(*v4, a2, a3, a4, a5, v15, v1);
}

// Address range: 0x3a166b - 0x3a1791
int64_t function_3a166b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a166b
    bool v1; // 0x3a166b
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x3a166b
    int64_t v3 = v2; // bp-48, 0x3a16e6
    int64_t v4 = (int64_t)&v3; // 0x3a171e
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x3a1726
    *v5 = 0x1c7bd54;
    int64_t * v6 = (int64_t *)(v4 - 16); // 0x3a172b
    *v6 = v2;
    int64_t v7 = v4 + 8; // 0x3a173f
    *(int64_t *)v7 = *v5;
    *v6 = a2;
    *(int64_t *)(v4 - 24) = 0x4f0b09b0;
    *v5 = 0x4f0b09b0;
    *(int64_t *)(v4 + 24) = 0x4f0b09b0;
    *v6 = v3;
    *v5 = v7;
    *v5 = v3;
    *v6 = v3;
    int64_t v8; // 0x3a166b
    return function_c6d58(a1, *v6, a3, 0x39e3f7, v8, v8, 0x4cf86318);
}

// Address range: 0x3a1791 - 0x3a18c7
int64_t function_3a1791(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a1791
    int64_t v1; // bp-32, 0x3a1791
    int64_t v2 = (int64_t)&v1; // 0x3a1807
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3a1810
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x3a1813
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3a1817
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x3a181a
    *v6 = v4;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x3a1826
    *v3 = v7;
    *v5 = v4;
    int64_t v8 = v2 + 8; // 0x3a186d
    *(int64_t *)v8 = *v3;
    *v3 = 0x3f644af1;
    *v5 = 0x2a96baf1;
    *v6 = v7;
    *(int64_t *)(v2 + 24) = *v3;
    *v5 = v8;
    *v6 = *v3;
    *v3 = v1;
    *v5 = v1;
    int64_t v9; // 0x3a1791
    return function_c6d58(a1, a2, a3, a4, a5, v9, v9);
}

// Address range: 0x3a18c7 - 0x3a1a05
int64_t function_3a18c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a18c7
    int64_t v1; // 0x3a18c7
    bool v2; // 0x3a18c7
    return function_c6d58(a1, a2, a3, a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x3a1a05 - 0x3a1b68
int64_t function_3a1a05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a1a05
    int64_t v1; // bp-48, 0x3a1a05
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3a1a05
    return function_c6d58(a1, a2, a3, a4, v2, v2, v2);
}

// Address range: 0x3a1b68 - 0x3a1c8c
int64_t function_3a1b68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a1b68
    return function_c6d58(a1, a2, a3, a4, a5, a6, 0x39f446);
}

// Address range: 0x3a1c8c - 0x3a1e19
int64_t function_3a1c8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a1c8c
    int64_t v1; // bp-48, 0x3a1c8c
    int64_t v2 = (int64_t)&v1; // 0x3a1d6f
    int64_t v3 = v2 + 16; // 0x3a1d75
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x3a1d8b
    *v4 = a2;
    v1 = a4;
    int64_t * v5 = (int64_t *)v3; // 0x3a1dbe
    int64_t v6 = v2 + 32; // 0x3a1dc2
    int64_t * v7 = (int64_t *)v6; // 0x3a1dc2
    *v7 = a5;
    *v4 = v3;
    *v5 = 169;
    int64_t * v8 = (int64_t *)(v2 + 24); // 0x3a1ddc
    *(int64_t *)(v2 + 56) = *v8;
    *v8 = *v7;
    *v5 = v6;
    int64_t v9 = *(int64_t *)(v2 + 40); // 0x3a1e02
    *v7 = v9;
    *v8 = v9;
    int64_t v10; // 0x3a1c8c
    return function_c6d58(a1, *v4, a3, a4, v10, v10, v10);
}

// Address range: 0x3a1e19 - 0x3a1f3f
int64_t function_3a1e19(int64_t a1, int64_t a2) {
    // 0x3a1e19
    int64_t v1; // bp-40, 0x3a1e19
    int64_t v2 = (int64_t)&v1; // 0x3a1e71
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x3a1e91
    *(int64_t *)(v2 - 8) = v3;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x3a1e99
    *v4 = v3;
    *(int64_t *)(v2 - 24) = v2;
    int64_t v5 = *v4; // 0x3a1ea8
    *(int64_t *)(v2 - 32) = v5;
    int64_t v6 = *v4; // 0x3a1eb0
    int64_t * v7 = (int64_t *)(v6 + 16); // 0x3a1eb4
    int64_t v8 = *v7; // 0x3a1eb4
    int64_t * v9 = (int64_t *)(v6 - 8); // 0x3a1eb4
    *v9 = v8;
    int64_t * v10 = (int64_t *)(v6 - 16); // 0x3a1ed6
    *v10 = 0x60332335;
    int64_t * v11 = (int64_t *)(v6 - 24); // 0x3a1ee4
    *v11 = 0x129b8420;
    *(int64_t *)(v6 - 32) = v5;
    int64_t * v12 = (int64_t *)v6; // 0x3a1ef0
    *v12 = *v10;
    *v10 = 0x2aacafb0;
    *v11 = v8;
    *v7 = *v10;
    int64_t v13 = *v9; // 0x3a1f0f
    *v10 = v13;
    *v11 = v13;
    int64_t v14 = *v12; // 0x3a1f2b
    *v9 = v14;
    *v10 = v14;
    int64_t v15; // 0x3a1e19
    return function_c6d58(v15, a2, v15, v15, v15, v15, 0x260d9311);
}

// Address range: 0x3a1f3f - 0x3a20a9
int64_t function_3a1f3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x1a3e4b38; // bp-40, 0x3a1fbf
    int64_t v2 = (int64_t)&v1; // 0x3a1fea
    int64_t v3 = v2 + 16; // 0x3a2001
    int64_t * v4 = (int64_t *)v3; // 0x3a2001
    int64_t v5 = *v4; // 0x3a2001
    int64_t * v6 = (int64_t *)(v2 - 8); // 0x3a2001
    *(int64_t *)(v2 - 16) = v5;
    *(int64_t *)(v2 - 24) = v5;
    bool v7; // 0x3a1f3f
    *v4 = 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    v1 = 0x166e50ff;
    *v6 = v5;
    *(int64_t *)(v2 + 32) = v5;
    int64_t v8 = v1; // 0x3a205b
    v1 = a3;
    *v6 = v2;
    int64_t v9 = v1; // 0x3a209f
    v1 = v3;
    int64_t v10; // 0x3a1f3f
    return function_c6d58(a1, a2, v9, v10, a5, v8, v3);
}

// Address range: 0x3a20a9 - 0x3a21c3
int64_t function_3a20a9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a20a9
    int64_t v1; // bp-40, 0x3a20a9
    int64_t v2 = (int64_t)&v1; // 0x3a214a
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3a2152
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x3a2156
    *v3 = 0x767a2045;
    bool v5; // 0x3a20a9
    *v4 = 0x4000 * (int64_t)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x3a217d
    *v6 = *v3;
    *v3 = 0x742a7a06;
    *v4 = 0x5e5a755b;
    *(int64_t *)(v2 - 24) = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v4 = v1;
    int64_t v7 = *v6; // 0x3a21a5
    v1 = v7;
    *v3 = v7;
    int64_t v8; // 0x3a20a9
    return function_c6d58(a1, a2, a3, v8, v8, v8, v1);
}

// Address range: 0x3a21ef - 0x3a2314
int64_t function_3a21ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a21ef
    int64_t v1; // 0x3a21ef
    char * v2 = (char *)(v1 - 127); // 0x3a21ef
    *v2 = *v2 | (char)a4;
    return 0x3a0a34;
}

// Address range: 0x3ed896 - 0x3ed95c
int64_t function_3ed896(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a2 - 103); // 0x3ed89b
    int64_t v2 = *v1 ^ a3; // 0x3ed89b
    *v1 = v2;
    int64_t result; // 0x3ed896
    if (v2 >= 0 == (v2 != 0)) {
        result = function_3ed823();
    }
    // 0x3ed8a1
    if (v2 >= 1) {
        // 0x3ed8a3
        return result + 0xc3b9ed72 & 0xffffffff;
    }
    if (v2 < 0) {
        // 0x3ed908
        *(char *)(result + 64) = -115;
        return result;
    }
    if (v2 == 0) {
        // 0x3ed9b9
        return result;
    }
    // 0x3ed952
    int64_t v3; // 0x3ed896
    return v3 & 0xffffffff;
}

// Address range: 0x3ed973 - 0x3ed980
int64_t function_3ed973(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result; // 0x3ed973
    int64_t v2; // 0x3ed973
    bool v3; // 0x3ed973
    if (!v3) {
        result = function_3ed9c6(a1, a2, a3, v2, v2, (int64_t)&g6);
    }
    int32_t * v4 = (int32_t *)(9 * v2); // 0x3ed978
    *v4 = *v4 & (int32_t)a2;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return result;
}

// Address range: 0x3ed9c6 - 0x3eda6c
int64_t function_3ed9c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ed9c6
    int64_t v1; // 0x3ed9c6
    uint64_t v2 = v1 + 0xaff37bff; // 0x3ed9c7
    int64_t v3 = v2 & 0xffffffff; // 0x3ed9c7
    *(int32_t *)0x4809038dc055dc8c = (int32_t)v2;
    char * v4 = (char *)(a2 + 0x4758894f + a6); // 0x3ed9d5
    *v4 = *v4 & (char)(v2 / 256);
    int32_t * v5 = (int32_t *)(a1 - 0x1f1deeb3); // 0x3ed9dc
    *v5 = *v5 | (int32_t)a3;
    if (a4 != 1) {
        int16_t v6 = 256 * v3 ^ 2048 | a3; // 0x3eda61
        int64_t v7; // 0x3ed9c6
        __asm_outsb(v6, *(char *)&v7);
        *(int32_t *)a1 = __asm_insd(v6);
        __asm_outsd(v6, *(int32_t *)&v7);
        int64_t v8; // 0x3ed9c6
        return (int64_t)&v8;
    }
    // 0x3ed9e4
    __asm_out_134(-78, (char)v2);
    int32_t * v9 = (int32_t *)(a6 - 97 + 8 * v3); // 0x3ed9eb
    *v9 = *v9 ^ (int32_t)a6;
    int64_t v10 = __asm_int1(); // 0x3ed9ef
    int64_t * v11 = (int64_t *)(v1 - 78); // 0x3ed9f7
    *v11 = *v11 & a5;
    return (v10 ^ 120) + 0xffc92658 & 0xffffffff;
}

// Address range: 0x3eda90 - 0x3eda94
int64_t function_3eda90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3eda90
    int64_t result; // 0x3eda90
    return result;
}
