/*
 * Targeted RetDec C for native executable gap queue batch 607.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x19c085-0x19c285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19c285-0x19c485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19c485-0x19c685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a2739-0x3a2939 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a2939-0x3a2b39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a2b39-0x3a2d39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a2f39-0x3a3139 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4004d1-0x4006d1 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g7;
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

int64_t function_19c058();
int64_t function_19c085(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19c192(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19c1d5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19c28a(void);
int64_t function_19c2a9(void);
int64_t function_19c2bc(void);
int64_t function_19c2c9(void);
int64_t function_19c306(void);
int64_t function_19c30f(int64_t a1);
int64_t function_19c39a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19c3aa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19c3cc(void);
int64_t function_19c3e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19c3ed(int64_t a1);
int64_t function_19c459(void);
int64_t function_19c468(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19c56f(int64_t a1);
int64_t function_19c591(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2225605();
int64_t function_309f5ddb();
int64_t function_3a26eb();
int64_t function_3a2739(void);
int64_t function_3a274a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a279a(int64_t a1, int64_t a2);
int64_t function_3a2820(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a2829(int64_t a1);
int64_t function_3a2864(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a28ab(void);
int64_t function_3a28f6(int64_t a1);
int64_t function_3a290a(int64_t a1);
int64_t function_3a2918(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a294f(void);
int64_t function_3a2957(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a2989(void);
int64_t function_3a29b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a2a02(void);
int64_t function_3a2a4d(void);
int64_t function_3a2a59(int64_t a1);
int64_t function_3a2adb(int64_t a1);
int64_t function_3a2b22(void);
int64_t function_3a2b2e(void);
int64_t function_3a2b43(void);
int64_t function_3a2b6c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a2ba9(void);
int64_t function_3a2bb7(void);
int64_t function_3a2bc5(int64_t a1);
int64_t function_3a2c05(void);
int64_t function_3a2c0a(void);
int64_t function_3a2c0d(void);
int64_t function_3a2c17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a2c30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a2c5e(void);
int64_t function_3a2c61(void);
int64_t function_3a2c62(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a2cb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a2ceb(void);
int64_t function_3a2f39(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a2fa3(void);
int64_t function_3a2fc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a3070(void);
int64_t function_3a30bd(void);
int64_t function_3a3101(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a88ad();
int64_t function_4004d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4004d9(int64_t a1);
int64_t function_40053b(void);
int64_t function_40054d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ffffffff859fc26b();
int64_t function_ffffffff9b2a66fe();
int64_t function_ffffffffe846df4b();
int64_t unknown_156c5bc();
int64_t unknown_2230e92();
int64_t unknown_543b6983();
int64_t unknown_5fa83048();

// Address range: 0x19c085 - 0x19c0d6
int64_t function_19c085(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19c085
    int64_t v1; // 0x19c085
    char v2 = (char)((uint64_t)v1 / 256) + (char)(a2 / 256); // 0x19c08c
    int64_t v3 = a2 & 0xffffffff; // 0x19c091
    if (llvm_ctpop_i8(v2) % 2 != 0) {
        v3 = function_19c058();
    }
    int64_t result = v3;
    if ((a4 & -0xff01 || (int64_t)&g1) != 0) {
        // 0x19c097
        return result;
    }
    // 0x19c0c8
    *(char *)a1 = (char)a1;
    *(char *)-0xfa56c2b = *(char *)-0xfa56c2b + v2;
    return ((result & 146) + 123) % 256 | result & -256;
}

// Address range: 0x19c192 - 0x19c1b8
int64_t function_19c192(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19c192
    int64_t v1; // 0x19c192
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 0x5006deb5); // 0x19c192
    *v3 = *v3 + (int32_t)a4;
    *(char *)a1 = (char)v2;
    bool v4; // 0x19c192
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x19c19f
    *(int32_t *)v5 = (int32_t)((v2 + 169) % 256 | v2 & 0xffffff00);
    return function_ffffffff859fc26b(v5 + (v4 ? -4 : 4), *(int64_t *)(v1 + 8), a3 & -0xff01);
}

// Address range: 0x19c1d5 - 0x19c275
int64_t function_19c1d5(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(a3 + 0x70e8e8fe) ^ (int32_t)a1; // 0x19c1d7
    int64_t v2; // 0x19c1d5
    int16_t v3 = 256 * (int16_t)v2 >> 8; // 0x19c1dd
    uint16_t v4 = v3 * v3; // 0x19c1dd
    uint32_t v5 = (int32_t)v2;
    uint32_t v6 = v5 + (int32_t)a3; // 0x19c1df
    *(int32_t *)a2 = v6;
    char v7 = *(char *)0x2ed26cd2; // 0x19c1e4
    int64_t v8 = (int64_t)(256 * (int16_t)(v7 + (char)(v6 < v5) + (char)(v4 / 256))) & 0xffffff00 | (int64_t)(v4 & 165 | 90); // 0x19c1eb
    int32_t * v9 = (int32_t *)v8; // 0x19c1ed
    *v9 = *v9 + v1;
    unsigned char v10 = *(char *)-0xac2660a; // 0x19c1ef
    char v11 = (v2 + a3) / 256; // 0x19c1ef
    unsigned char v12 = v10 + v11; // 0x19c1ef
    *(char *)-0xac2660a = v12;
    uint64_t v13 = v8 - (v12 < v10 ? 0x68c66ac6 : 0x68c66ac5); // 0x19c1f5
    char * v14 = (char *)((int64_t)v1 + 0x2a0068d1); // 0x19c1fa
    *v14 = *v14 + (char)(v13 / 256);
    __writegsbyte(0x57b3110e, __readgsbyte(0x57b3110e) + (char)v1);
    char * v15 = (char *)(v2 - 0x7ffe24f4); // 0x19c26f
    *v15 = *v15 + v11;
    return v13 & 0x3f70d908 | 0xc08f2660;
}

// Address range: 0x19c28a - 0x19c28b
int64_t function_19c28a(void) {
    // 0x19c28a
    int64_t result; // 0x19c28a
    return result;
}

// Address range: 0x19c2a9 - 0x19c2aa
int64_t function_19c2a9(void) {
    // 0x19c2a9
    int64_t result; // 0x19c2a9
    return result;
}

// Address range: 0x19c2bc - 0x19c2c8
int64_t function_19c2bc(void) {
    // 0x19c2bc
    int64_t v1; // 0x19c2bc
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 8); // 0x19c2bc
    *v3 = *v3 ^ (int32_t)v1;
    *(char *)v2 = (char)v2;
    while (true) {
        // continue -> 0x19c2c6
    }
}

// Address range: 0x19c2c9 - 0x19c2d0
int64_t function_19c2c9(void) {
    // 0x19c2c9
    int64_t result; // 0x19c2c9
    *(int32_t *)0x514d2358 = *(int32_t *)0x514d2358 - (int32_t)result;
    return result;
}

// Address range: 0x19c306 - 0x19c308
int64_t function_19c306(void) {
    // 0x19c306
    return function_19c28a();
}

// Address range: 0x19c30f - 0x19c310
int64_t function_19c30f(int64_t a1) {
    // 0x19c30f
    int64_t result; // 0x19c30f
    return result;
}

// Address range: 0x19c39a - 0x19c3aa
int64_t function_19c39a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19c39a
    int64_t v1; // 0x19c39a
    uint64_t v2 = v1;
    bool v3; // 0x19c39a
    int64_t v4 = v3 ? -1 : 1; // 0x19c39a
    int64_t v5 = v4 + a2; // 0x19c39a
    unsigned char v6 = *(char *)(v1 - 0x48fffec3); // 0x19c39b
    int64_t v7 = v5 + 0xffffffc2 & 0xffffffff; // 0x19c3a1
    char v8 = *(char *)(v2 % 256 * (int64_t)v6 | v2 & -0x10000); // 0x19c3a5
    *(int64_t *)v7 = v7 + 8;
    return function_19c39a(v4 + a1, v5, a3 & -256 | (int64_t)(v8 | (char)a3));
}

// Address range: 0x19c3aa - 0x19c3bb
int64_t function_19c3aa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19c3aa
    int64_t result; // 0x19c3aa
    *(int32_t *)a2 = (int32_t)(result | result);
    return result;
}

// Address range: 0x19c3cc - 0x19c3cf
int64_t function_19c3cc(void) {
    // 0x19c3cc
    int64_t result; // 0x19c3cc
    return result;
}

// Address range: 0x19c3e1 - 0x19c3ec
int64_t function_19c3e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19c3e1
    int64_t v1; // 0x19c3e1
    return (int64_t)&v1;
}

// Address range: 0x19c3ed - 0x19c402
int64_t function_19c3ed(int64_t a1) {
    // 0x19c3ed
    int64_t v1; // 0x19c3ed
    return v1 & -256 | (int64_t)*(char *)0x13d000dec31a2fe;
}

// Address range: 0x19c459 - 0x19c45a
int64_t function_19c459(void) {
    // 0x19c459
    int64_t result; // 0x19c459
    return result;
}

// Address range: 0x19c468 - 0x19c4ab
int64_t function_19c468(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19c468
    int64_t v1; // 0x19c468
    uint64_t v2 = v1;
    int64_t v3 = a2;
    function_19c459();
    int32_t * v4 = (int32_t *)(v1 + 0x1000688a); // 0x19c471
    *v4 = *v4 + (int32_t)a3;
    __asm_wait();
    *(char *)-0x3ed56781 = *(char *)-0x3ed56781 + (char)(v2 / 256);
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    *(char *)a1 = *(char *)&v3;
    return (int64_t)*(int32_t *)0x1c399013d7fd412;
}

// Address range: 0x19c56f - 0x19c574
int64_t function_19c56f(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 108); // 0x19c56f
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x19c56f
    return result;
}

// Address range: 0x19c591 - 0x19c5c3
int64_t function_19c591(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_iretd(a1, a2); // 0x19c591
    int32_t v2 = v1; // 0x19c592
    *(int32_t *)0x683a7f4c3a8a66c5 = v2;
    uint32_t v3 = v2 >> 31; // 0x19c59b
    char v4 = v1; // 0x19c59c
    *(char *)0x6800a8e5e200013d = v4;
    char * v5 = (char *)(a2 - 0x4b72f628); // 0x19c5a6
    *v5 = *v5 + (char)(v3 / 256);
    int64_t v6; // 0x19c591
    int32_t * v7 = (int32_t *)(4 * v6 + a4); // 0x19c5ac
    *v7 = *v7 & v2;
    *(char *)(a1 + 0xcdb67e6 + 8 * a1) = v4;
    int64_t v8 = unknown_156c5bc(); // 0x19c5b6
    int64_t v9; // 0x19c591
    __asm_outsb((int16_t)v3, *(char *)&v9);
    return v8 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x3a2739 - 0x3a273e
int64_t function_3a2739(void) {
    // 0x3a2739
    return function_3a88ad();
}

// Address range: 0x3a274a - 0x3a2755
int64_t function_3a274a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a274a
    int64_t v1; // 0x3a274a
    uint32_t v2 = (int32_t)v1 >> 31; // 0x3a274a
    char * v3 = (char *)((int64_t)v2 + 3); // 0x3a274b
    unsigned char v4 = *v3; // 0x3a274b
    unsigned char v5 = v4 + (char)v2; // 0x3a274b
    *v3 = v5;
    int64_t v6; // 0x3a274a
    if (v5 >= v4 && v5 != 0) {
        v6 = function_3a26eb();
    }
    // 0x3a2751
    return v6 & -0xff01 | (int64_t)&g6;
}

// Address range: 0x3a279a - 0x3a27ac
int64_t function_3a279a(int64_t a1, int64_t a2) {
    // 0x3a279a
    int64_t v1; // 0x3a279a
    int64_t result = v1 ^ 13; // 0x3a279a
    *(int32_t *)0x3a813bc81a01e88e = (int32_t)result;
    *(int32_t *)a1 = (int32_t)v1 - (int32_t)a1;
    return result;
}

// Address range: 0x3a2820 - 0x3a2824
int64_t function_3a2820(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a2820
    int64_t result; // 0x3a2820
    return result;
}

// Address range: 0x3a2829 - 0x3a282b
int64_t function_3a2829(int64_t a1) {
    // 0x3a2829
    int64_t result; // 0x3a2829
    return result;
}

// Address range: 0x3a2864 - 0x3a28a6
int64_t function_3a2864(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x3a2864
    bool v3; // 0x3a2864
    if (!v3) {
        // 0x3a2866
        return v2 & -0xff01 | (int64_t)&g5;
    }
    int32_t * v4 = (int32_t *)((v2 & -256) + 0x7a80777); // 0x3a2896
    uint32_t v5 = *v4; // 0x3a2896
    uint32_t v6 = (int32_t)a4 % 32; // 0x3a2896
    v1 = a1;
    int32_t v7 = a1; // 0x3a2896
    if (v6 != 0) {
        *v4 = v5 >> 32 - v6 | v5 << v6;
        v7 = *(int32_t *)&v1;
    }
    uint32_t v8 = v7; // 0x3a289c
    *(int32_t *)v1 = v8 / 64 | 0x4000000 * v8;
    int64_t result; // 0x3a2864
    int64_t v9 = result;
    *(char *)v9 = *(char *)&result + (char)v9;
    return result;
}

// Address range: 0x3a28ab - 0x3a28ac
int64_t function_3a28ab(void) {
    // 0x3a28ab
    int64_t result; // 0x3a28ab
    return result;
}

// Address range: 0x3a28f6 - 0x3a28fa
int64_t function_3a28f6(int64_t a1) {
    // 0x3a28f6
    int64_t result; // 0x3a28f6
    return result;
}

// Address range: 0x3a290a - 0x3a2918
int64_t function_3a290a(int64_t a1) {
    // 0x3a290a
    return unknown_5fa83048(a1);
}

// Address range: 0x3a2918 - 0x3a294f
int64_t function_3a2918(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char v1 = a4 / 256; // 0x3a2918
    int64_t v2; // 0x3a2918
    *(char *)a2 = (char)v2 + v1;
    int64_t v3; // 0x3a2918
    char v4 = *(char *)&v3 - 1; // 0x3a291a
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x3a291a
    *(char *)v3 = v4;
    int64_t result; // 0x3a2918
    if (v5 % 2 != 0) {
        result = function_3a28ab();
    }
    char * v6 = (char *)(4 * v2 + a1); // 0x3a294b
    *v6 = *v6 + v1;
    return result;
}

// Address range: 0x3a294f - 0x3a2953
int64_t function_3a294f(void) {
    // 0x3a294f
    int64_t result; // 0x3a294f
    return result;
}

// Address range: 0x3a2957 - 0x3a2971
int64_t function_3a2957(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a2957
    int64_t v1; // 0x3a2957
    *(int32_t *)a4 = (int32_t)v1 & 0x394cc6c9;
    char * v2 = (char *)(v1 + 93); // 0x3a2963
    unsigned char v3 = *v2; // 0x3a2963
    unsigned char v4 = v3 + (char)(v1 / 256); // 0x3a2963
    *v2 = v4;
    uint64_t v5 = v1 + 0x3d003d38 + (int64_t)(v4 < v3); // 0x3a2966
    int32_t * v6 = (int32_t *)(v5 + v1); // 0x3a296c
    *v6 = *v6 + (int32_t)a4;
    return v5 & -256 | (int64_t)*(char *)(v5 % 256 + v1);
}

// Address range: 0x3a2989 - 0x3a298f
int64_t function_3a2989(void) {
    // 0x3a2989
    int64_t result; // 0x3a2989
    return result;
}

// Address range: 0x3a29b0 - 0x3a29ec
int64_t function_3a29b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a29b0
    int64_t v1; // 0x3a29b0
    __asm_out(-121, (int32_t)v1);
    int64_t v2 = v1 & -0xff01 | (int64_t)&g7; // 0x3a29b9
    unsigned char v3 = *(char *)(v1 + 0x40000000); // 0x3a29c4
    char * v4 = (char *)v2; // 0x3a29ca
    *v4 = *v4 + (char)v2;
    char * v5 = (char *)((256 * (int64_t)v3 | a4 & -0xff01) + v2); // 0x3a29cc
    *v5 = *v5 + 53;
    int64_t v6 = v2 & 60 | 195; // 0x3a29d0
    *(char *)0x3a59e5249125435c = (char)v6;
    return v6 | v2 & -256;
}

// Address range: 0x3a2a02 - 0x3a2a03
int64_t function_3a2a02(void) {
    // 0x3a2a02
    int64_t result; // 0x3a2a02
    return result;
}

// Address range: 0x3a2a4d - 0x3a2a4f
int64_t function_3a2a4d(void) {
    // 0x3a2a4d
    return function_3a2a02();
}

// Address range: 0x3a2a59 - 0x3a2a5c
int64_t function_3a2a59(int64_t a1) {
    // 0x3a2a59
    int64_t result; // 0x3a2a59
    return result;
}

// Address range: 0x3a2adb - 0x3a2adc
int64_t function_3a2adb(int64_t a1) {
    // 0x3a2adb
    int64_t result; // 0x3a2adb
    return result;
}

// Address range: 0x3a2b22 - 0x3a2b23
int64_t function_3a2b22(void) {
    // 0x3a2b22
    int64_t result; // 0x3a2b22
    return result;
}

// Address range: 0x3a2b2e - 0x3a2b30
int64_t function_3a2b2e(void) {
    // 0x3a2b2e
    return function_3a2b22();
}

// Address range: 0x3a2b43 - 0x3a2b44
int64_t function_3a2b43(void) {
    // 0x3a2b43
    int64_t result; // 0x3a2b43
    return result;
}

// Address range: 0x3a2b6c - 0x3a2b96
int64_t function_3a2b6c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a3 - 0x7dd1aedd); // 0x3a2b6c
    unsigned char v2 = (char)a3; // 0x3a2b6c
    *v1 = *v1 + v2;
    int64_t v3; // 0x3a2b6c
    unsigned char v4 = *(char *)(v3 + 15) + v2; // 0x3a2b77
    if (v4 >= v2 && v4 != 0) {
        function_3a2b43();
    }
    int64_t v5 = a3 & -256 | (int64_t)v4; // 0x3a2b77
    __asm_in((int16_t)v5);
    int64_t v6 = __asm_hlt(); // 0x3a2b7e
    char * v7 = (char *)v5; // 0x3a2b7f
    *v7 = *v7 + (char)((uint64_t)v3 / 256);
    return (a4 / 256 + 27 + v6 + (int64_t)((int32_t)v6 < 0x4c812b01)) % 256 | v6 & -256;
}

// Address range: 0x3a2ba9 - 0x3a2bac
int64_t function_3a2ba9(void) {
    // 0x3a2ba9
    int64_t result; // 0x3a2ba9
    return result;
}

// Address range: 0x3a2bb7 - 0x3a2bb8
int64_t function_3a2bb7(void) {
    // 0x3a2bb7
    int64_t result; // 0x3a2bb7
    return result;
}

// Address range: 0x3a2bc5 - 0x3a2bc6
int64_t function_3a2bc5(int64_t a1) {
    // 0x3a2bc5
    int64_t result; // 0x3a2bc5
    return result;
}

// Address range: 0x3a2c05 - 0x3a2c0a
int64_t function_3a2c05(void) {
    // 0x3a2c05
    return function_ffffffff9b2a66fe();
}

// Address range: 0x3a2c0a - 0x3a2c0b
int64_t function_3a2c0a(void) {
    // 0x3a2c0a
    int64_t result; // 0x3a2c0a
    return result;
}

// Address range: 0x3a2c0d - 0x3a2c15
int64_t function_3a2c0d(void) {
    // 0x3a2c0d
    return function_3a2bb7();
}

// Address range: 0x3a2c17 - 0x3a2c30
int64_t function_3a2c17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a2c17
    int64_t v1; // 0x3a2c17
    char * v2 = (char *)(v1 + 7); // 0x3a2c1f
    *v2 = *v2 + (char)a4;
    int64_t v3; // 0x3a2c17
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_ffffffffe846df4b();
}

// Address range: 0x3a2c30 - 0x3a2c44
int64_t function_3a2c30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a2c30
    int64_t result; // 0x3a2c30
    int32_t v1 = result;
    *(int32_t *)result = 2 * v1;
    __asm_out(-89, v1);
    return result;
}

// Address range: 0x3a2c5e - 0x3a2c5f
int64_t function_3a2c5e(void) {
    // 0x3a2c5e
    int64_t result; // 0x3a2c5e
    return result;
}

// Address range: 0x3a2c61 - 0x3a2c62
int64_t function_3a2c61(void) {
    // 0x3a2c61
    int64_t result; // 0x3a2c61
    return result;
}

// Address range: 0x3a2c62 - 0x3a2caf
int64_t function_3a2c62(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a2c62
    bool v1; // 0x3a2c62
    int64_t v2 = v1 ? -4 : 4; // 0x3a2c62
    int64_t v3 = v2 + a1; // 0x3a2c62
    int64_t v4 = v2 + a2; // 0x3a2c62
    int64_t v5 = __asm_iretd(v3, v4); // 0x3a2c64
    int64_t v6 = v5; // 0x3a2c64
    int64_t v7 = v5; // 0x3a2c65
    int64_t v8; // 0x3a2c62
    if ((int32_t)v8 != (int32_t)v8) {
        v7 = function_3a2c0a();
        v6 = v7;
    }
    int64_t v9 = v7; // 0x3a2c67
    *(int32_t *)v9 = (int32_t)v9 + (int32_t)a4;
    char * v10 = (char *)(v6 + 17); // 0x3a2c69
    *v10 = *v10 + (char)v6;
    __writegsbyte(-0x3927c48c, __readgsbyte(-0x3927c48c) + (char)(a4 / 256));
    int32_t v11 = v3; // 0x3a2c73
    *(int32_t *)v6 = *(int32_t *)&v6 | v11;
    int64_t v12; // 0x3a2c62
    float80_t v13 = (float80_t)*(float32_t *)&v12;
    int64_t v14; // 0x3a2c62
    uint64_t v15 = v14;
    int3_t v16; // 0x3a2c62
    int3_t v17 = v16;
    __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v17) + v13);
    unknown_2230e92();
    int64_t v18 = unknown_543b6983(); // 0x3a2c7d
    int64_t v19 = v15 - 1; // 0x3a2c89
    if (v19 != 0) {
        function_3a2c61();
    }
    int3_t v20 = v17 + 1; // 0x3a2c75
    while ((int32_t)((v18 - v15 / 256) % 256 || v18 & 0xffffff00) <= 0x77b90740) {
        // 0x3a2c75
        v15 = v19;
        v17 = v20;
        __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v17) + v13);
        unknown_2230e92();
        v18 = unknown_543b6983();
        v19 = v15 - 1;
        if (v19 != 0) {
            function_3a2c61();
        }
        // 0x3a2c8b
        v20 = v17 + 1;
    }
    int32_t * v21 = (int32_t *)(v4 - 60); // 0x3a2c8d
    *v21 = *v21 + v11;
    if (llvm_ctpop_i8((char)v8 + (char)a4) % 2 != 0) {
        float80_t v22 = __frontend_reg_load_fpr(v20); // 0x3a2c9c
        __frontend_reg_load_fpr(v17 - 3);
        __frontend_reg_store_fpr(v20, v22);
        int16_t v23 = a3; // 0x3a2ca4
        int32_t v24 = __asm_insd(v23); // 0x3a2ca4
        int32_t * v25 = (int32_t *)v3; // 0x3a2ca4
        *v25 = v24;
        __asm_wait();
        *v25 = __asm_insd(v23);
        __asm_in_133(76);
        return function_2225605();
    }
    while (true) {
        // 0x3a2c9a
        function_3a2c5e();
    }
}

// Address range: 0x3a2cb9 - 0x3a2cc4
int64_t function_3a2cb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x67734bab); // 0x3a2cb9
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x3a2cb9
    return 2 * v2 & 0xffffffff;
}

// Address range: 0x3a2ceb - 0x3a2ced
int64_t function_3a2ceb(void) {
    // 0x3a2ceb
    int64_t result; // 0x3a2ceb
    return result;
}

// Address range: 0x3a2f39 - 0x3a2f3f
int64_t function_3a2f39(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a2f39
    int64_t v1; // 0x3a2f39
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)(a1 + 1 + v1); // 0x3a2f39
    return (v2 + (int64_t)((v3 & (int32_t)a3) / 256)) % 256 | v2 & -256;
}

// Address range: 0x3a2fa3 - 0x3a2fa4
int64_t function_3a2fa3(void) {
    // 0x3a2fa3
    int64_t result; // 0x3a2fa3
    return result;
}

// Address range: 0x3a2fc1 - 0x3a301a
int64_t function_3a2fc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = a2;
    __asm_outsd((int16_t)a3, v1);
    int64_t v2; // 0x3a2fc1
    int32_t * v3 = (int32_t *)(v2 + 78); // 0x3a3002
    *v3 = *v3 | v1;
    int64_t result; // 0x3a2fc1
    *(int32_t *)result = *(int32_t *)&result & (int32_t)v2;
    int64_t v4 = result;
    int64_t v5 = (v4 + 34 + (int64_t)((int32_t)v4 < 0xb9a7b01)) % 256 | v4 & -256; // 0x3a3016
    result = v5;
    int32_t * v6 = (int32_t *)v5; // 0x3a3018
    uint32_t v7 = *v6; // 0x3a3018
    uint32_t v8 = (int32_t)a4 % 32; // 0x3a3018
    result = v5;
    if (v8 != 0) {
        *v6 = v7 >> 32 - v8 | v7 << v8;
    }
    return result;
}

// Address range: 0x3a3070 - 0x3a3077
int64_t function_3a3070(void) {
    // 0x3a3070
    int64_t result; // 0x3a3070
    return result;
}

// Address range: 0x3a30bd - 0x3a30be
int64_t function_3a30bd(void) {
    // 0x3a30bd
    int64_t result; // 0x3a30bd
    return result;
}

// Address range: 0x3a3101 - 0x3a3108
int64_t function_3a3101(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 63); // 0x3a3101
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x3a3101
    *(char *)a4 = (char)((uint64_t)v2 / 256);
    return function_3a30bd();
}

// Address range: 0x4004d1 - 0x4004d7
int64_t function_4004d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4004d1
    int64_t result; // 0x4004d1
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x4004d9 - 0x4004df
int64_t function_4004d9(int64_t a1) {
    // 0x4004d9
    int64_t result; // 0x4004d9
    return result;
}

// Address range: 0x40053b - 0x40053c
int64_t function_40053b(void) {
    // 0x40053b
    int64_t result; // 0x40053b
    return result;
}

// Address range: 0x40054d - 0x4006b9
int64_t function_40054d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    *(int32_t *)a3 = 2 * (int32_t)a3;
    int64_t result; // 0x40054d
    __readgsdword(result - 0x63b8ce51);
    char * v2 = (char *)((int64_t)(*(int32_t *)&v1 + (int32_t)result) + 116); // 0x400558
    unsigned char v3 = *v2; // 0x400558
    unsigned char v4 = v3 + (char)(result / 256); // 0x400558
    *v2 = v4;
    if (v4 < v3 || v4 == 0) {
        // 0x40055d
        return function_309f5ddb();
    }
    int32_t * v5 = (int32_t *)(v1 - 35); // 0x40063b
    *v5 = *v5 + (int32_t)a1;
    if (a4 == 1) {
        // 0x400640
        return result;
    }
    // 0x400651
    return result & -150;
}
