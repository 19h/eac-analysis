/*
 * Targeted RetDec C for native executable gap queue batch 803.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6cc90-0x6ce90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6ce90-0x6d090 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6d090-0x6d290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6d290-0x6d490 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6d490-0x6d690 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdbdc7-0xdbfc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdbfc7-0xdc1c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdc1c7-0xdc3c7 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g6;
extern int g8;
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

int64_t function_66b7fa1b();
int64_t function_6cc90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6cd40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6cda7(int64_t a1);
int64_t function_6cdaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6cde2(void);
int64_t function_6ce0f(void);
int64_t function_6ce2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6ce6c(int64_t a1);
int64_t function_6ce6d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_6ceb5(void);
int64_t function_6cef2(void);
int64_t function_6cf6a(void);
int64_t function_6cf80(int64_t a1);
int64_t function_6cf8b(void);
int64_t function_6cfb5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6d067(void);
int64_t function_6d06d(void);
int64_t function_6d077(void);
int64_t function_6d0ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6d105(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6d136(void);
int64_t function_6d1a5(int64_t a1);
int64_t function_6d1b9(int64_t a1);
int64_t function_6d1c1(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_6d1f7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6d219(void);
int64_t function_6d21f(int64_t a1);
int64_t function_6d235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6d257(int64_t a1);
int64_t function_6d25c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result);
int64_t function_6d2a1(void);
int64_t function_6d2c3(void);
int64_t function_6d2cd(int64_t a1);
int64_t function_6d2e5(void);
int64_t function_6d2e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_6d451(void);
int64_t function_6d466(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6d504(void);
int64_t function_6d555(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6d670(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6d688(int64_t a1, int64_t a2, int64_t a3);
int64_t function_cf3c7();
int64_t function_dbdc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_dbdcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_dbf5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dc0b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dc1f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_dc33d(void);
int64_t function_dc33e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dc343(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dc34b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ffffffffa86e3140();
int64_t function_ffffffffc640afc9();
int64_t function_ffffffffecb350d6();

// Address range: 0x6cc90 - 0x6cca0
int64_t function_6cc90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6cc90
    int64_t v1; // 0x6cc90
    char * v2 = (char *)(v1 - 0x1686fa09); // 0x6cc96
    bool v3; // 0x6cc90
    *v2 = (char)v3 - (char)v1 + *v2;
    char * v4 = (char *)(v1 - 46); // 0x6cc9d
    *v4 = *v4 + (char)a4;
    return a4 & 0xffffffff;
}

// Address range: 0x6cd40 - 0x6cd58
int64_t function_6cd40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6cd40
    int64_t v1; // 0x6cd40
    unsigned char v2 = (char)v1 ^ 1; // 0x6cd4a
    int32_t * v3 = (int32_t *)(v1 - 0x75a2539f); // 0x6cd4e
    *v3 = (int32_t)a3 + (int32_t)a1 + *v3 + (int32_t)(v2 < 43);
    return v1 & -256 | (int64_t)(v2 - 43);
}

// Address range: 0x6cda7 - 0x6cda8
int64_t function_6cda7(int64_t a1) {
    // 0x6cda7
    int64_t result; // 0x6cda7
    return result;
}

// Address range: 0x6cdaf - 0x6cddc
int64_t function_6cdaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6cdaf
    int64_t v1; // 0x6cdaf
    int32_t * v2 = (int32_t *)(2 * v1); // 0x6cdaf
    *v2 = *v2 & (int32_t)v1;
    int32_t * v3 = (int32_t *)(a1 + 74); // 0x6cdb3
    *v3 = *v3 + (int32_t)a4;
    int32_t v4 = __asm_in(((int16_t)v1 | 15) + 219 & 250 | -0x2500); // 0x6cdc1
    return (int64_t)(0x3284b0e3 * *(int32_t *)(int64_t)v4 | 44);
}

// Address range: 0x6cde2 - 0x6cde3
int64_t function_6cde2(void) {
    // 0x6cde2
    int64_t result; // 0x6cde2
    return result;
}

// Address range: 0x6ce0f - 0x6ce16
int64_t function_6ce0f(void) {
    // 0x6ce0f
    int64_t v1; // 0x6ce0f
    return function_6ce6d(v1, v1, v1, v1);
}

// Address range: 0x6ce2e - 0x6ce6c
int64_t function_6ce2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6ce2e
    int64_t v1; // 0x6ce2e
    int64_t v2 = v1 ^ 225; // 0x6ce2e
    int32_t * v3 = (int32_t *)(2 * v1 - 65 + v2); // 0x6ce36
    *v3 = *v3 & (int32_t)v1;
    int32_t * v4 = (int32_t *)v2; // 0x6ce3a
    int32_t v5 = 2 * *v4; // 0x6ce3a
    *v4 = v5;
    int64_t v6 = (int64_t)*(int32_t *)(a3 - 0x3b70b0b0); // 0x6ce3c
    int64_t v7 = v2; // 0x6ce46
    if (v5 < 0 == (0x316782d4 * v6 != 0x316782d400000000 * v6 >> 32)) {
        v7 = function_6cde2();
    }
    unsigned char v8 = *(char *)(v7 % 256 + (int64_t)&g6); // 0x6ce4f
    int128_t v9; // 0x6ce2e
    __asm_movups(*(int128_t *)(v1 - 96), v9);
    char v10 = __asm_in_133((int16_t)a3 & -256 | (int16_t)a1 | 101); // 0x6ce62
    int32_t v11 = *(int32_t *)(v1 - 53); // 0x6ce63
    uint32_t v12 = v11 * (int32_t)((v7 & 0xffffff00 | (int64_t)v8) + 0xdd00b8c1 & 0xffffff00 | (int64_t)v10); // 0x6ce63
    return 256 * ((int64_t)(v12 / 256) ^ a4) & 0xff00 | (int64_t)(v12 & -0xff01);
}

// Address range: 0x6ce6c - 0x6ce6d
int64_t function_6ce6c(int64_t a1) {
    // 0x6ce6c
    int64_t result; // 0x6ce6c
    return result;
}

// Address range: 0x6ce6d - 0x6ce86
int64_t function_6ce6d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x6ce6d
    int64_t v1; // 0x6ce6d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)(a3 / 256);
    *(char *)a4 = (char)a3;
    return (int64_t)*(char *)-0x2d1b59d98101ff70 | 0xda51d000;
}

// Address range: 0x6ceb5 - 0x6ceba
int64_t function_6ceb5(void) {
    // 0x6ceb5
    return function_ffffffffecb350d6();
}

// Address range: 0x6cef2 - 0x6cef3
int64_t function_6cef2(void) {
    // 0x6cef2
    int64_t result; // 0x6cef2
    return result;
}

// Address range: 0x6cf6a - 0x6cf6c
int64_t function_6cf6a(void) {
    // 0x6cf6a
    return function_6cef2();
}

// Address range: 0x6cf80 - 0x6cf81
int64_t function_6cf80(int64_t a1) {
    // 0x6cf80
    int64_t result; // 0x6cf80
    return result;
}

// Address range: 0x6cf8b - 0x6cf91
int64_t function_6cf8b(void) {
    // 0x6cf8b
    int64_t result; // 0x6cf8b
    return result;
}

// Address range: 0x6cfb5 - 0x6cfc9
int64_t function_6cfb5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6cfb5
    *(int32_t *)(a2 + 0x68bd5135) = (int32_t)a3;
    return function_ffffffffc640afc9();
}

// Address range: 0x6d067 - 0x6d068
int64_t function_6d067(void) {
    // 0x6d067
    int64_t result; // 0x6d067
    return result;
}

// Address range: 0x6d06d - 0x6d070
int64_t function_6d06d(void) {
    // 0x6d06d
    int64_t result; // 0x6d06d
    bool v1; // 0x6d06d
    if (!v1 && !v1) {
        result = function_6d067();
    }
    // 0x6d06f
    return result;
}

// Address range: 0x6d077 - 0x6d081
int64_t function_6d077(void) {
    // 0x6d077
    int64_t v1; // 0x6d077
    return v1 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x6d0ce - 0x6d0d9
int64_t function_6d0ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x7a96b811); // 0x6d0ce
    int64_t result; // 0x6d0ce
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x6d105 - 0x6d109
int64_t function_6d105(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6d105
    int64_t result; // 0x6d105
    return result;
}

// Address range: 0x6d136 - 0x6d137
int64_t function_6d136(void) {
    // 0x6d136
    int64_t result; // 0x6d136
    return result;
}

// Address range: 0x6d1a5 - 0x6d1a8
int64_t function_6d1a5(int64_t a1) {
    // 0x6d1a5
    int64_t result; // 0x6d1a5
    return result;
}

// Address range: 0x6d1b9 - 0x6d1ba
int64_t function_6d1b9(int64_t a1) {
    // 0x6d1b9
    int64_t result; // 0x6d1b9
    return result;
}

// Address range: 0x6d1c1 - 0x6d1c9
int64_t function_6d1c1(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x6d1c1
    int64_t result; // 0x6d1c1
    char * v1 = (char *)(result + 0x2df2fac); // 0x6d1c1
    *v1 = *v1 & (char)(a3 / 256);
    return result;
}

// Address range: 0x6d1f7 - 0x6d204
int64_t function_6d1f7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6d1f7
    __asm_iretd(a1, a2, a3);
    return function_ffffffffa86e3140();
}

// Address range: 0x6d219 - 0x6d21e
int64_t function_6d219(void) {
    // 0x6d219
    int64_t result; // 0x6d219
    return result;
}

// Address range: 0x6d21f - 0x6d223
int64_t function_6d21f(int64_t a1) {
    // 0x6d21f
    int64_t result; // 0x6d21f
    return result;
}

// Address range: 0x6d235 - 0x6d257
int64_t function_6d235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6d235
    __asm_rcl(*(int32_t *)(a1 - 0x394fb900));
    int64_t v1; // 0x6d235
    *(int32_t *)a4 = (int32_t)v1 & 0x207c21da;
    return __asm_int1();
}

// Address range: 0x6d257 - 0x6d25a
int64_t function_6d257(int64_t a1) {
    // 0x6d257
    int64_t result; // 0x6d257
    return result;
}

// Address range: 0x6d25c - 0x6d292
int64_t function_6d25c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result) {
    char * v1 = (char *)(a1 - 75); // 0x6d25c
    *v1 = *v1 + (char)(a4 / 256);
    char * v2 = (char *)(a2 + 0x13c45570); // 0x6d25f
    int64_t v3; // 0x6d25c
    *v2 = *v2 - (char)(v3 / 256);
    char * v4 = (char *)(a5 + 81); // 0x6d26f
    *v4 = *v4 + (char)((uint64_t)v3 / 256);
    int32_t * v5 = (int32_t *)a5; // 0x6d272
    *v5 = *v5 + 0x7c218de0;
    return result;
}

// Address range: 0x6d2a1 - 0x6d2a8
int64_t function_6d2a1(void) {
    // 0x6d2a1
    bool v1; // 0x6d2a1
    if (v1) {
        int64_t v2; // 0x6d2a1
        function_6d2e7(v2, v2, v2, v2, v2, (int64_t)&g8, (int64_t)&g8, (int64_t)&g8);
    }
    // 0x6d2a3
    return function_66b7fa1b();
}

// Address range: 0x6d2c3 - 0x6d2c4
int64_t function_6d2c3(void) {
    // 0x6d2c3
    int64_t result; // 0x6d2c3
    return result;
}

// Address range: 0x6d2cd - 0x6d2d0
int64_t function_6d2cd(int64_t a1) {
    // 0x6d2cd
    int64_t result; // 0x6d2cd
    return result;
}

// Address range: 0x6d2e5 - 0x6d2e6
int64_t function_6d2e5(void) {
    // 0x6d2e5
    int64_t result; // 0x6d2e5
    return result;
}

// Address range: 0x6d2e7 - 0x6d445
int64_t function_6d2e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a7;
    int64_t v4; // 0x6d2e7
    bool v5; // 0x6d2e7
    *(char *)a5 = (char)v4 + (char)a5 + (char)v5;
    int64_t v6; // 0x6d2e7
    *(int32_t *)a1 = *(int32_t *)&v6 - 35;
    v6 = a6;
    uint64_t v7 = (v4 & 0xffffffff) * (a2 & 0xffffffff); // 0x6d2f0
    int64_t v8 = (int64_t)__asm_in_134(71) & 0xffffffff | v7 & 0xffffff00; // 0x6d2fa
    uint64_t result = v8 ^ 0x962c24c4; // 0x6d2fa
    unsigned char v9 = *(char *)&v2; // 0x6d2ff
    unsigned char v10 = (char)(result / 256); // 0x6d2ff
    char v11 = v9 - v10; // 0x6d2ff
    *(char *)a2 = v11;
    if (v9 < v10) {
        if (((v11 ^ v9) & (v9 ^ v10)) < 0) {
            // 0x6d362
            *(int32_t *)v6 = (int32_t)result;
            char * v12 = (char *)(v7 / 0x100000000 + 91); // 0x6d363
            *v12 = *v12 + (char)(v7 / 0x10000000000);
            return result;
        }
        char * v13 = (char *)(v1 + v2); // 0x6d316
        *v13 = *v13 - 62;
        *(int32_t *)-0x6c1e8d985fc557a6 = (int32_t)result;
        *(int64_t *)a5 = a5 + 1 + v4;
        char v14 = __asm_in_134(-49); // 0x6d32f
        unsigned char v15 = *(char *)-0xab0a8cd896b97f8; // 0x6d331
        return (result | (int64_t)v14) & -256 | (int64_t)v15;
    }
    if (v11 < 0) {
        unsigned char v16 = (char)v1 % 32; // 0x6d359
        if (v16 != 0) {
            char * v17 = (char *)(v4 + 0x7b74cdfb); // 0x6d359
            unsigned char v18 = *v17; // 0x6d359
            *v17 = v18 >> 8 - v16 | v18 << v16;
        }
        // 0x6d30c
        return result;
    }
    char v19 = *(char *)&v1 + v10; // 0x6d308
    *(char *)v1 = v19;
    if (v19 == 0) {
        // 0x6d30c
        return result;
    }
    int64_t v20 = v1 - 1; // 0x6d33f
    v1 = v20;
    if (v20 == 0) {
        // 0x6d3a1
        return v8 ^ 0x7bacd823;
    }
    int64_t v21 = (int64_t)&v3; // 0x6d2ef
    uint32_t v22 = (int32_t)v4; // 0x6d305
    char v23 = *(char *)((int64_t)(v22 / 0x4000000 | 64 * v22) + 24); // 0x6d343
    *(int64_t *)((v21 & -256 | (int64_t)((char)v21 - v23)) - 8) = -0x286c6c5a;
    return result & 0xffffff00 | (int64_t)*(char *)-0x38e3188260d117b0;
}

// Address range: 0x6d451 - 0x6d452
int64_t function_6d451(void) {
    // 0x6d451
    int64_t result; // 0x6d451
    return result;
}

// Address range: 0x6d466 - 0x6d47f
int64_t function_6d466(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)(-52 * *(int32_t *)(a3 - 0x70232ca2)); // 0x6d469
    unsigned char v2 = *(char *)v1; // 0x6d470
    bool v3; // 0x6d466
    int64_t v4 = v3 ? -1 : 1; // 0x6d470
    int64_t v5 = __asm_int3(v4 + a1, v4 + v1); // 0x6d474
    int64_t v6; // 0x6d466
    int32_t v7 = *(int32_t *)(v6 - 126); // 0x6d477
    uint32_t v8 = ((int32_t)v5 & -0xff01 | (int32_t)&g1) + (int32_t)(v2 < (char)v6) - v7; // 0x6d477
    int64_t result = v8; // 0x6d47a
    if (a4 != 1 == v8 == 0) {
        result = function_6d451();
    }
    // 0x6d47c
    return result;
}

// Address range: 0x6d504 - 0x6d505
int64_t function_6d504(void) {
    // 0x6d504
    int64_t result; // 0x6d504
    return result;
}

// Address range: 0x6d555 - 0x6d647
int64_t function_6d555(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    char * v3 = (char *)(a2 - 0x3aa810d0); // 0x6d55c
    *v3 = *v3 + (char)((int64_t)&g2 | 239);
    char v4 = *(char *)0x20808741; // 0x6d567
    int64_t v5; // 0x6d555
    char v6 = (int32_t)v5 < 0x9b490390 ? (char)(((int64_t)&g2 | 239) >> 8) + 1 : (char)(((int64_t)&g2 | 239) >> 8); // 0x6d567
    char v7 = v4 - v6; // 0x6d567
    *(char *)0x20808741 = v7;
    int64_t v8; // 0x6d555
    if (((v7 - (char)((int32_t)v5 < 0x9b490390) ^ v4) & (v4 ^ v6)) >= 0) {
        v8 = function_6d504();
    }
    int64_t v9 = a4 & 0xffffff00; // 0x6d56f
    unsigned char v10 = *(char *)(v5 + 0x2cf0a88a) + (char)v5; // 0x6d572
    if (llvm_ctpop_i8(v10) % 2 == 0) {
        if (v10 != 0) {
            // 0x6d5ea
            return v9 | (int64_t)*(char *)-0x209571f070312cfd;
        }
        // 0x6d63d
        __asm_out(-79, (char)v8);
        return v8 % 256 | v9;
    }
    int64_t result2 = (v9 | (int64_t)*(char *)-0x378ab7e47f227a2e) ^ 0x286cda8a; // 0x6d58a
    int32_t * v11 = (int32_t *)((v8 & 0xffffffff) + 0x453d36c2); // 0x6d591
    uint32_t v12 = *v11; // 0x6d591
    int32_t v13 = v12 - 0x6e208937; // 0x6d591
    *v11 = v13;
    char v14 = result2; // 0x6d59b
    *(char *)0x5a79002d52456724 = v14;
    if (v12 > 0x6e208936) {
        // 0x6d5a6
        return v2 & 0xffffffff;
    }
    if (v13 == 0) {
        int32_t result = __asm_in_135(64); // 0x6d61d
        *(int64_t *)(v5 & -256 | (int64_t)v10) = v5 & -0x10000 | ((int64_t)&g2 | 239) & -256 | (v8 + ((int64_t)&g2 | 239)) % 256;
        // 0x6d623
        return result;
    }
    char * v15 = (char *)result2; // 0x6d5cd
    *v15 = *v15 & v14;
    int32_t v16 = *(int32_t *)&v1; // 0x6d5cf
    int32_t v17 = *(int32_t *)&v2; // 0x6d5cf
    int64_t v18 = v2 + 4; // 0x6d5cf
    int64_t v19 = v1 + 4; // 0x6d5cf
    v2 = v18;
    v1 = v19;
    if (((v16 - v17 ^ v16) & (v17 ^ v16)) >= 0) {
        // 0x6d623
        return result2;
    }
    // 0x6d5d2
    return __asm_int3(v18, v19);
}

// Address range: 0x6d670 - 0x6d681
int64_t function_6d670(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6d670
    bool v1; // 0x6d670
    *(char *)((v1 ? -4 : 4) + a1) = __asm_insb((int16_t)a3);
    return (int64_t)*(int32_t *)-0x2c0ef51f6ffdf54c;
}

// Address range: 0x6d688 - 0x6d68c
int64_t function_6d688(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6d688
    return a2 & 0xffffffff;
}

// Address range: 0xdbdc7 - 0xdbdcb
int64_t function_dbdc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 127); // 0xdbdc7
    *v1 = *v1 + (char)a4;
    int64_t result; // 0xdbdc7
    return result;
}

// Address range: 0xdbdcb - 0xdbf5a
int64_t function_dbdcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    unsigned char v1 = (char)a4 % 32; // 0xdbdcb
    bool v2; // 0xdbdcb
    if (v1 != 0) {
        char * v3 = (char *)(a2 - 1); // 0xdbdcb
        char v4 = *v3 << v1; // 0xdbdcb
        unsigned char v5 = llvm_ctpop_i8(v4); // 0xdbdcb
        *v3 = v4;
        v2 = v5 % 2 == 0;
    }
    if (v2) {
        // 0xdbdd0
        return function_cf3c7(a1, a2, a3, a4, a5, a6);
    }
    // 0xdbe19
    int64_t v6; // 0xdbdcb
    int64_t v7 = *(int64_t *)(v6 + 32); // 0xdbe77
    int64_t v8 = v6 - 8; // 0xdbe77
    int64_t * v9 = (int64_t *)v8; // 0xdbe77
    *v9 = v7;
    int64_t * v10 = (int64_t *)(v6 - 16); // 0xdbe93
    int64_t v11 = *(int64_t *)(v6 + 8); // 0xdbe9c
    *v10 = v11;
    int64_t * v12 = (int64_t *)(v6 - 24); // 0xdbea0
    int64_t * v13 = (int64_t *)(v6 - 32); // 0xdbeb7
    *v12 = 0x716e6cc5;
    *v13 = v7;
    *v9 = *v12;
    *v12 = a5;
    *v13 = 0xd8484;
    *(int64_t *)(v6 - 48) = v11 + 0x3fe91100;
    *(int64_t *)(v6 - 40) = v11;
    *(int64_t *)(v6 + 16) = v11;
    *v12 = v8;
    *v10 = *v9;
    *v12 = v8;
    return function_cf3c7(a1, a2, a3, a4, *v12, *v13);
}

// Address range: 0xdbf5a - 0xdc0b3
int64_t function_dbf5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdbf5a
    int64_t v1; // bp-56, 0xdbf5a
    int64_t v2 = (int64_t)&v1; // 0xdc002
    int64_t v3 = v2 + 16; // 0xdc009
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 8); // 0xdc018
    *v4 = 0x35a3dc67;
    bool v5; // 0xdbf5a
    v1 = 0x4000 * (int64_t)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    int64_t v6 = v2 + 24; // 0xdc04e
    *(int64_t *)v6 = *v4;
    int64_t * v7 = (int64_t *)(v2 - 8); // 0xdc05e
    *v7 = *(int64_t *)(v2 + 32);
    *(int64_t *)(v2 + 40) = *v4;
    *v4 = v6;
    *v4 = *(int64_t *)v3;
    v1 = a1;
    *v7 = v2;
    int64_t v8 = v1; // 0xdc0a5
    v1 = v3;
    int64_t v9; // 0xdbf5a
    return function_cf3c7(v8, a2, 0x5cbd516d, a4, v9, v9);
}

// Address range: 0xdc0b3 - 0xdc1f5
int64_t function_dc0b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdc0b3
    int64_t v1; // 0xdc0b3
    return function_cf3c7(a1, a2, a3, a4, v1, v1);
}

// Address range: 0xdc1f5 - 0xdc335
int64_t function_dc1f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x12cbfd75; // bp-32, 0xdc2ca
    int64_t v2 = (int64_t)&v1; // 0xdc30a
    int64_t v3 = v2 - 8; // 0xdc312
    int64_t * v4 = (int64_t *)v3; // 0xdc312
    *v4 = a3;
    *(int64_t *)(v2 - 16) = v3;
    *v4 = v2 + 8;
    return function_cf3c7(a1, a2, *v4, a4, a5, a6);
}

// Address range: 0xdc33d - 0xdc33e
int64_t function_dc33d(void) {
    // 0xdc33d
    int64_t result; // 0xdc33d
    return result;
}

// Address range: 0xdc33e - 0xdc343
int64_t function_dc33e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0xdc33e
    *v1 = *v1 | (char)a4;
    int64_t v2; // 0xdc33e
    return function_dc34b(a1, a2, a3, a4, v2, v2, (int64_t)&g8);
}

// Address range: 0xdc343 - 0xdc34b
int64_t function_dc343(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdc343
    int64_t v1; // 0xdc343
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0xdc345
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0xdc34b - 0xdc3c6
int64_t function_dc34b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xdc34b
    int64_t result; // 0xdc34b
    return result;
}
