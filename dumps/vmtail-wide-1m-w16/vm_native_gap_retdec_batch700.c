/*
 * Targeted RetDec C for native executable gap queue batch 700.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x121746-0x121946 rank=- name=- kind=- bytes=- uncovered=-
 *   0x121946-0x121b46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x121b46-0x121d46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3989b1-0x398bb1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x398bb1-0x398db1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x398db1-0x398fb1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x398fb1-0x3991b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3991b1-0x3993b1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_121746(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12179f(void);
int64_t function_1217a8(void);
int64_t function_1217ac(void);
int64_t function_12184d(int64_t a1);
int64_t function_121852(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1218ba(int64_t a1);
int64_t function_121938(int64_t a1);
int64_t function_1219cf(void);
int64_t function_1219ef(void);
int64_t function_1219f5(void);
int64_t function_121a0f(void);
int64_t function_121a12(void);
int64_t function_121a14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_121a8d(void);
int64_t function_121ad5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_121bc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_121c57(void);
int64_t function_121c5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_121d34(int64_t a1);
int64_t function_20b2fd8b();
int64_t function_341a1b45();
int64_t function_39899b();
int64_t function_3989b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_398a59(void);
int64_t function_398a7c(int64_t a1);
int64_t function_398a8a(void);
int64_t function_398aa8(void);
int64_t function_398ae9(int64_t a1);
int64_t function_398b1e(int64_t a1, int64_t a2);
int64_t function_398b4c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_398ba9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_398bb5(void);
int64_t function_398c0a(void);
int64_t function_398c2f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_398c60(void);
int64_t function_398c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_398d70(int64_t a1);
int64_t function_398e2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_398e50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_398e71(void);
int64_t function_398e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_398f0f(void);
int64_t function_398f2f(int64_t a1);
int64_t function_398f3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_398fe4(void);
int64_t function_39900f(void);
int64_t function_399021(int64_t a1);
int64_t function_39904e(void);
int64_t function_399054(void);
int64_t function_39906e(void);
int64_t function_3990c0(int64_t a1);
int64_t function_3990c4(int64_t a1);
int64_t function_39913b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_399147(int64_t a1);
int64_t function_399156(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3991b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3991cb(void);
int64_t function_3991e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_399282(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3992fa(void);
int64_t function_39931c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39933a(void);
int64_t function_399340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39d1f654();
int64_t function_ffffffff83de9081();
int64_t function_ffffffffa0bc38f3();
int64_t function_ffffffffa0c60c0e();
int64_t function_ffffffffb7aebb0c();
int64_t function_ffffffffbb19b005();
int64_t function_fffffffff19491b8();
int64_t unknown_110fdbd8();
int64_t unknown_11231945();
int64_t unknown_153ac6d2();
int64_t unknown_24b06583();
int64_t unknown_2aa44803();
int64_t unknown_3a5d9ce3();
int64_t unknown_483acc6b();
int64_t unknown_55ef1e20();
int64_t unknown_58886a76();
int64_t unknown_6a9d676b();
int64_t unknown_c3af049();
int64_t unknown_ffffffff83df710d();
int64_t unknown_ffffffff882bfc76();
int64_t unknown_ffffffff8cc1c978();
int64_t unknown_ffffffff992d0365();
int64_t unknown_ffffffffa3a85bf8();
int64_t unknown_ffffffffa61358de();
int64_t unknown_ffffffffad5756a6();
int64_t unknown_ffffffffc843f854();
int64_t unknown_ffffffffd1c13171();
int64_t unknown_ffffffffd413572a();
int64_t unknown_ffffffffe9074e93();
int64_t unknown_ffffffffeefe29d1();
int64_t unknown_fffffffff8c44afb();
int64_t unknown_fffffffffe9db132();

// Address range: 0x121746 - 0x12174d
int64_t function_121746(int64_t a1, int64_t a2, int64_t a3) {
    // 0x121746
    int64_t v1; // 0x121746
    *(char *)a1 = (char)(v1 | v1);
    int64_t v2; // 0x121746
    return v1 & -256 | (int64_t)*(char *)&v2;
}

// Address range: 0x12179f - 0x1217a2
int64_t function_12179f(void) {
    // 0x12179f
    int64_t result; // 0x12179f
    return result;
}

// Address range: 0x1217a8 - 0x1217ab
int64_t function_1217a8(void) {
    // 0x1217a8
    int64_t result; // 0x1217a8
    return result;
}

// Address range: 0x1217ac - 0x1217b2
int64_t function_1217ac(void) {
    // 0x1217ac
    int64_t result; // 0x1217ac
    return result;
}

// Address range: 0x12184d - 0x121852
int64_t function_12184d(int64_t a1) {
    // 0x12184d
    int64_t result; // 0x12184d
    __asm_out_133(106, (int32_t)result);
    return result;
}

// Address range: 0x121852 - 0x12186d
int64_t function_121852(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x121852
    int64_t v1; // 0x121852
    int64_t v2 = v1 & 0xffffff00 | v1 & 0xffffffff; // 0x121852
    int16_t v3 = a3; // 0x121858
    __asm_outsd(v3, (int32_t)v1);
    __asm_out_134(v3, (int32_t)(a3 / 256 % 256 & (v2 | v1 % 256) | v2 & 0xffffff00));
    return __asm_in(-77);
}

// Address range: 0x1218ba - 0x1218c4
int64_t function_1218ba(int64_t a1) {
    // 0x1218ba
    int64_t v1; // 0x1218ba
    return v1 & -256 | (int64_t)*(char *)-0x4246fe174f04d555;
}

// Address range: 0x121938 - 0x121939
int64_t function_121938(int64_t a1) {
    // 0x121938
    int64_t result; // 0x121938
    return result;
}

// Address range: 0x1219cf - 0x1219d3
int64_t function_1219cf(void) {
    // 0x1219cf
    int64_t result; // 0x1219cf
    return result;
}

// Address range: 0x1219ef - 0x1219f5
int64_t function_1219ef(void) {
    // 0x1219ef
    int64_t result; // 0x1219ef
    return result;
}

// Address range: 0x1219f5 - 0x121a01
int64_t function_1219f5(void) {
    // 0x1219f5
    bool v1; // 0x1219f5
    return unknown_fffffffff8c44afb() & -0xff01 | 256 * (64 * (int64_t)v1 | 128 * (int64_t)(bool)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1) | 512;
}

// Address range: 0x121a0f - 0x121a10
int64_t function_121a0f(void) {
    // 0x121a0f
    int64_t result; // 0x121a0f
    return result;
}

// Address range: 0x121a12 - 0x121a13
int64_t function_121a12(void) {
    // 0x121a12
    int64_t result; // 0x121a12
    return result;
}

// Address range: 0x121a14 - 0x121a2c
int64_t function_121a14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x1f2f611a); // 0x121a14
    int32_t v2 = *v1 + (int32_t)a2; // 0x121a14
    *v1 = v2;
    if (v2 != 0) {
        function_121a0f();
    }
    // 0x121a1c
    int64_t v3; // 0x121a14
    char * v4 = (char *)(v3 + 0x1e8c8a6); // 0x121a1c
    *v4 = *v4 + (char)a4;
    return unknown_ffffffffd413572a();
}

// Address range: 0x121a8d - 0x121a92
int64_t function_121a8d(void) {
    // 0x121a8d
    return function_341a1b45();
}

// Address range: 0x121ad5 - 0x121bc5
int64_t function_121ad5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x121ad5
    int64_t result; // 0x121ad5
    bool v1; // 0x121ad5
    if (!v1) {
        // 0x121ad7
        return result;
    }
    if (true == !v1) {
        if (a4 == 1) {
            // 0x121b71
            *(char *)0x17ec0d7e = *(char *)0x17ec0d7e + (char)(result / 256);
            return result;
        }
        // 0x121b92
        __asm_int1();
        return __asm_sti() & -256 | (int64_t)__asm_in_135(32);
    }
    while (!v1) {
        // continue -> 0x121b3f
    }
    if (v1) {
        // 0x121b43
        return 2 * a4 & 254 | a4 & 0xffffff00;
    }
    char * v2 = (char *)(result + 83); // 0x121bc2
    *v2 = *v2 + (char)(result / 256);
    return a4 & 0xffffffff;
}

// Address range: 0x121bc6 - 0x121c43
int64_t function_121bc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x121bc6
    int64_t result; // 0x121bc6
    bool v1; // 0x121bc6
    if (a4 != 1 == v1) {
        int32_t * v2 = (int32_t *)(a1 - 111); // 0x121c40
        *v2 = *v2 + (int32_t)result;
        return result;
    }
    // 0x121bcb
    unknown_ffffffffeefe29d1();
    int64_t v3 = unknown_ffffffffa61358de(); // 0x121bd8
    *(char *)(result - 0x203fde2b) = -77;
    char * v4 = (char *)(a4 - 0x74fe172a); // 0x121be4
    *v4 = *v4 + (char)result;
    int64_t v5 = v1 ? -4 : 4; // 0x121bea
    int64_t v6 = v5 + a1; // 0x121bea
    int64_t v7 = v5 + (int64_t)(*(int32_t *)(a4 + 0x1e8aea4) | (int32_t)a2); // 0x121bea
    *(char *)v6 = (char)v3;
    __asm_outsb((int16_t)(v6 & a3), *(char *)v7);
    unknown_ffffffffa3a85bf8();
    int32_t v8 = *(int32_t *)0x5d22eaaf >> 1; // 0x121bf7
    *(int32_t *)0x5d22eaaf = v8;
    unknown_2aa44803();
    uint64_t v9 = a4 - 2; // 0x121c10
    if (v9 == 0 || v8 == 0) {
        int32_t v10 = *(int32_t *)0xd89efe8b64d01e8; // 0x121c07
        int32_t * v11 = (int32_t *)(v9 / 256 % 256 | (int64_t)(v10 & -256)); // 0x121c14
        *v11 = *v11 + (int32_t)v7;
    }
    // 0x121c33
    return unknown_55ef1e20() & -0xff01 | (int64_t)&g2;
}

// Address range: 0x121c57 - 0x121c5c
int64_t function_121c57(void) {
    // 0x121c57
    return function_ffffffffa0bc38f3();
}

// Address range: 0x121c5c - 0x121d30
int64_t function_121c5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a5;
    int64_t result; // 0x121c5c
    char * v3 = (char *)(result - 24); // 0x121c5c
    *v3 = *v3 + (char)a4;
    int32_t * v4 = (int32_t *)(a4 + 0x1628c0ff); // 0x121c5f
    uint32_t v5 = *v4; // 0x121c5f
    int32_t v6 = result; // 0x121c5f
    int32_t v7 = v5 + v6; // 0x121c5f
    *v4 = v7;
    int64_t v8; // 0x121c5c
    int3_t v9; // 0x121c5c
    if (v7 < 0 == ((v7 ^ v5) & (v7 ^ v6)) < 0 != v7 != 0) {
        // 0x121c68
        unknown_ffffffffd1c13171();
        int32_t * v10 = (int32_t *)(a1 + 0x1edd77da); // 0x121c77
        *v10 = *v10 + (int32_t)v8;
        unknown_ffffffffe9074e93();
        *(int64_t *)((v8 + result & 0xffffffff) - 8) = 0x800012;
        *(int32_t *)a1 = *(int32_t *)a2;
        bool v11; // 0x121c5c
        int64_t v12 = v11 ? -4 : 4; // 0x121c8d
        *(int32_t *)v8 = *(int32_t *)&v8 + (int32_t)(v12 + a2);
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)(v12 + a1);
        __frontend_reg_load_fpr(v9);
        __frontend_reg_load_fpr(v9);
        __asm_sti();
        unknown_ffffffffad5756a6();
        return function_ffffffffb7aebb0c();
    }
    if (v7 < v5) {
        // 0x121d46
        return result;
    }
    int64_t v13 = (int64_t)&v2; // 0x121ce3
    __asm_out(-41, (char)v13);
    *(int32_t *)(2 * v13 - 24) = (int32_t)a4;
    __asm_int(102);
    v1 = (v1 + v13 | result) & 0xffffffff;
    __frontend_reg_load_fpr(v9);
    int32_t * v14 = (int32_t *)(v8 - 0x17dc72f3); // 0x121cf5
    *v14 = *v14 & (int32_t)result;
    int32_t v15; // 0x121c5c
    bool v16 = -1 - v15 < (int32_t)v1; // 0x121cfe
    int64_t v17 = __asm_hlt(); // 0x121cfe
    int3_t v18; // 0x121c5c
    float80_t v19 = __frontend_reg_load_fpr(v18); // 0x121cff
    float64_t v20 = *(float64_t *)(v17 + 45); // 0x121cff
    __frontend_reg_store_fpr(v18, v19 + (float80_t)v20);
    int3_t v21 = v18 + 1; // 0x121cff
    int64_t v22 = unknown_ffffffff83df710d(); // 0x121d07
    uint32_t v23 = (int32_t)v22; // 0x121d0c
    uint32_t v24 = *(int32_t *)v22 + v23; // 0x121d0c
    uint32_t v25 = v24 + (int32_t)v16; // 0x121d0c
    unsigned char v26 = llvm_ctpop_i8((char)v25); // 0x121d0c
    v16 = v16 ? v25 <= v23 : v24 < v23;
    *(float32_t *)0xd9df3579 = (float32_t)__frontend_reg_load_fpr(v21);
    v17 = v25;
    while (v26 % 2 == 0) {
        // 0x121cff
        v19 = __frontend_reg_load_fpr(v21);
        __frontend_reg_store_fpr(v21, v19 + (float80_t)*(float64_t *)(v17 + 45));
        v21++;
        v22 = unknown_ffffffff83df710d();
        v23 = (int32_t)v22;
        v24 = *(int32_t *)v22 + v23;
        v25 = v24 + (int32_t)v16;
        v26 = llvm_ctpop_i8((char)v25);
        v16 = v16 ? v25 <= v23 : v24 < v23;
        *(float32_t *)0xd9df3579 = (float32_t)__frontend_reg_load_fpr(v21);
        v17 = v25;
    }
    int32_t * v27 = (int32_t *)(a2 - 0x5f97492d); // 0x121d19
    *v27 = *v27 + (int32_t)result;
    return __asm_hlt();
}

// Address range: 0x121d34 - 0x121d37
int64_t function_121d34(int64_t a1) {
    // 0x121d34
    int64_t result; // 0x121d34
    return result;
}

// Address range: 0x3989b1 - 0x398a15
int64_t function_3989b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a1 - 0x6f22f5be); // 0x3989bc
    int32_t v3 = *v2 + (int32_t)a4; // 0x3989bc
    *v2 = v3;
    *(char *)a1 = (char)unknown_153ac6d2();
    bool v4; // 0x3989b1
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x3989d1
    unknown_110fdbd8(v5);
    int64_t v6 = a4 - 1; // 0x3989d7
    if (v6 == 0 || v3 == 0) {
        // 0x3989d9
        unknown_3a5d9ce3();
        __asm_out(-84, (char)v5);
        int64_t result = v5 & 0xffffffff; // 0x3989e5
        if (v6 == 0) {
            result = function_39899b();
        }
        // 0x3989e9
        return result;
    }
    // 0x3989ef
    __asm_out(12, (char)__asm_int3(v5, v1) & 5);
    __asm_out_133(-9, (int32_t)__asm_int1());
    int64_t v7; // 0x3989b1
    *(int32_t *)(v5 + 8 * v7) = (int32_t)v6;
    int64_t v8 = __asm_wait(); // 0x398a02
    char v9 = *(char *)(v5 - 0x332e0cd1); // 0x398a0a
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return v8 & -256 | (int64_t)(v9 + (char)v8);
}

// Address range: 0x398a59 - 0x398a5a
int64_t function_398a59(void) {
    // 0x398a59
    int64_t result; // 0x398a59
    return result;
}

// Address range: 0x398a7c - 0x398a86
int64_t function_398a7c(int64_t a1) {
    // 0x398a7c
    bool v1; // 0x398a7c
    int64_t result = unknown_24b06583((v1 ? -4 : 4) + a1); // 0x398a7d
    int64_t v2; // 0x398a7c
    if ((int32_t)v2 < (int32_t)v2) {
        // 0x398a84
        return function_398a59();
    }
    // 0x398ab0
    return result;
}

// Address range: 0x398a8a - 0x398a8b
int64_t function_398a8a(void) {
    // 0x398a8a
    int64_t result; // 0x398a8a
    return result;
}

// Address range: 0x398aa8 - 0x398ab0
int64_t function_398aa8(void) {
    // 0x398aa8
    int64_t v1; // 0x398aa8
    return (v1 | v1) & 0xffffffff;
}

// Address range: 0x398ae9 - 0x398af0
int64_t function_398ae9(int64_t a1) {
    // 0x398ae9
    int64_t result; // 0x398ae9
    int32_t * v1 = (int32_t *)(result - 0x4f9b19f6); // 0x398ae9
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x398b1e - 0x398b30
int64_t function_398b1e(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x1626987f); // 0x398b1e
    int64_t v2; // 0x398b1e
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(v2 + 0x1e8e374); // 0x398b24
    *v3 = *v3 - (char)v2;
    return function_20b2fd8b();
}

// Address range: 0x398b4c - 0x398b7b
int64_t function_398b4c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x398b4c
    int64_t v1; // 0x398b4c
    uint32_t v2 = (int32_t)v1 >> 31; // 0x398b4c
    char * v3 = (char *)(a1 - 8); // 0x398b4d
    *v3 = *v3 + (char)(v2 / 256);
    char * v4 = (char *)(a4 + 0x901e809); // 0x398b51
    unsigned char v5 = *v4; // 0x398b51
    char v6 = v1; // 0x398b51
    unsigned char v7 = v5 + v6; // 0x398b51
    *v4 = v7;
    char * v8 = (char *)(int64_t)v2; // 0x398b57
    *v8 = *v8 - (char)(a4 / 256) + (char)(v7 < v5);
    *(int32_t *)(a4 + 0xb6b7a05) = (int32_t)a2;
    int64_t v9; // 0x398b4c
    *(int32_t *)a1 = *(int32_t *)&v9 + (int32_t)a1;
    float80_t v10; // 0x398b4c
    *(int64_t *)(a4 + 0x7ae4c400) = (int64_t)v10;
    __asm_int1();
    char * v11 = (char *)(a4 + 19); // 0x398b6d
    *v11 = *v11 + v6;
    unknown_ffffffff882bfc76();
    __asm_iretd();
    return function_398bb5();
}

// Address range: 0x398ba9 - 0x398bab
int64_t function_398ba9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x398ba9
    int64_t result; // 0x398ba9
    return result;
}

// Address range: 0x398bb5 - 0x398bb7
int64_t function_398bb5(void) {
    // 0x398bb5
    int64_t v1; // 0x398bb5
    int64_t v2 = v1;
    bool v3; // 0x398bb5
    return (v2 - (v3 ? 103 : 102)) % 256 | v2 & -256;
}

// Address range: 0x398c0a - 0x398c0f
int64_t function_398c0a(void) {
    // 0x398c0a
    return __asm_wait();
}

// Address range: 0x398c2f - 0x398c60
int64_t function_398c2f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x398c2f
    bool v1; // 0x398c2f
    int64_t v2 = v1 ? -4 : 4; // 0x398c2f
    int64_t v3; // 0x398c2f
    char * v4 = (char *)((v3 & 0xffffffff) + 59); // 0x398c30
    unsigned char v5 = *v4; // 0x398c30
    *v4 = (char)(a4 / 256);
    int32_t v6 = *(int32_t *)-0x17c48bc1; // 0x398c38
    int32_t v7 = v1 ? -0x2bfe17e9 : -0x2bfe17ea; // 0x398c38
    int32_t * v8 = (int32_t *)(a3 + 0x5f3410d6); // 0x398c3e
    *v8 = *v8 + (int32_t)a3;
    int64_t v9 = 0x100000000 * v3 >> 32; // 0x398c4e
    uint64_t v10 = v9 * v9; // 0x398c4e
    int32_t * v11 = (int32_t *)((v10 & 0xffffffff) + 17); // 0x398c50
    *v11 = *v11 + (int32_t)v10;
    int64_t v12; // 0x398c2f
    int32_t v13 = *(int32_t *)&v12; // 0x398c53
    return function_ffffffffa0c60c0e(v6 + v7, v2 + a2, v10 / 0x100000000, 256 * (int64_t)v5 | a4 & -0xff01, (int64_t)(61 * v13));
}

// Address range: 0x398c60 - 0x398c62
int64_t function_398c60(void) {
    // 0x398c60
    int64_t result; // 0x398c60
    return result;
}

// Address range: 0x398c62 - 0x398d3f
int64_t function_398c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x398c62
    int64_t v1; // 0x398c62
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x398c62
    bool v4; // 0x398c62
    if (v3 == 0 || v4) {
        int64_t v5 = v2 + 0xde00 & 0xff00 | v2 & -0xff01; // 0x398c64
        uint32_t v6 = *(int32_t *)(v5 & 0xffffffff) & (int32_t)v5; // 0x398c6d
        int64_t result = v6; // 0x398c6d
        int32_t * v7 = (int32_t *)result; // 0x398c79
        *v7 = *v7 & v6;
        return result;
    }
    uint32_t v8 = (int32_t)v3 % 32; // 0x398cad
    if (v8 != 0) {
        *(int32_t *)a3 = (int32_t)a3 >> v8;
    }
    int64_t v9 = v1 + a1; // 0x398cab
    *(int32_t *)(v1 + 0x3d727171 + (v9 & 0xffffffff)) = (int32_t)v9;
    int32_t * v10 = (int32_t *)(a2 + 0x3e9e006c); // 0x398cb7
    *v10 = *v10 + (int32_t)v1;
    int32_t * v11 = (int32_t *)(v2 & 0x96000000); // 0x398ccb
    *v11 = *v11 & (int32_t)a5;
    uint32_t v12 = *(int32_t *)(8 * a2 - 0x74127450); // 0x398ced
    uint32_t result2 = (int32_t)&g1 - v12; // 0x398ced
    if (v12 <= (int32_t)&g1 && result2 != 0) {
        // 0x398cfa
        __asm_out(-90, (char)result2);
        int32_t * v13 = (int32_t *)(a2 + 0xf1cafa); // 0x398cfc
        *v13 = -1 - *v13;
    }
    // 0x398cf6
    return result2;
}

// Address range: 0x398d70 - 0x398d75
int64_t function_398d70(int64_t a1) {
    // 0x398d70
    int64_t result; // 0x398d70
    return result;
}

// Address range: 0x398e2c - 0x398e4f
int64_t function_398e2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_fffffffffe9db132(); // 0x398e2c
    bool v2; // 0x398e2c
    uint64_t v3 = v1 + 13 + (int64_t)(bool)v2; // 0x398e31
    char * v4 = (char *)(a4 + 0x93501e8); // 0x398e33
    *v4 = *v4 & (char)v3;
    *(char *)((v3 % 256 | v1 & -256) + 0x800039) = (char)(v1 / 256);
    int64_t v5; // 0x398e2c
    unsigned char v6 = *(char *)&v5; // 0x398e3f
    *(char *)a4 = v6 / 2 | 128 * v6;
    int64_t v7 = unknown_c3af049(); // 0x398e43
    int32_t * v8 = (int32_t *)(a3 + 28); // 0x398e48
    *v8 = *v8 + (int32_t)a4;
    char v9 = *(char *)(a4 + 102); // 0x398e4b
    return v7 & -0x10000 | (int64_t)((256 * (int16_t)v7 >> 8) * (int16_t)v9);
}

// Address range: 0x398e50 - 0x398e6e
int64_t function_398e50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x398e50
    int64_t v1; // 0x398e50
    *(int32_t *)0x509601e89f926e51 = (int32_t)v1;
    char * v2 = (char *)(a1 + 0x26ba2d40); // 0x398e5a
    *v2 = *v2 + (char)a3;
    unknown_6a9d676b();
    return __asm_wait();
}

// Address range: 0x398e71 - 0x398e72
int64_t function_398e71(void) {
    // 0x398e71
    int64_t result; // 0x398e71
    return result;
}

// Address range: 0x398e85 - 0x398ee8
int64_t function_398e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x398e85
    int64_t v1; // 0x398e85
    // 0x398e87
    return v1 & 0xffffffff & v1;
    // 0x398ea0
    *(int32_t *)a2 = (int32_t)a2 + (int32_t)a1;
    char v2 = v1; // 0x398ea2
    char v3 = v2 - 73; // 0x398ea2
    int64_t result = v1 & -256 | (int64_t)v3; // 0x398ea4
    if (v3 < 0 == ((v3 ^ v2) & v2 + 55) < 0 == (v3 != 0)) {
        result = function_398e71();
    }
    int32_t * v4 = (int32_t *)(result - 0x67ff34f4); // 0x398ea6
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x398f0f - 0x398f10
int64_t function_398f0f(void) {
    // 0x398f0f
    int64_t result; // 0x398f0f
    return result;
}

// Address range: 0x398f2f - 0x398f32
int64_t function_398f2f(int64_t a1) {
    // 0x398f2f
    int64_t result; // 0x398f2f
    return result;
}

// Address range: 0x398f3f - 0x398f91
int64_t function_398f3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    *(char *)-0x5e53f57501e67823 = (char)unknown_11231945();
    if (a4 == 0) {
        function_398f0f();
    }
    int32_t * v2 = (int32_t *)(a3 + 94); // 0x398f62
    int64_t v3; // 0x398f3f
    *v2 = *v2 + (int32_t)v3;
    unknown_483acc6b();
    char * v4 = (char *)(a4 - 0x7080926b); // 0x398f6a
    *v4 = *v4 | (char)(v1 / 256);
    int64_t v5 = unknown_ffffffff8cc1c978(); // 0x398f72
    char * v6 = (char *)(v5 + 0x8057082); // 0x398f77
    char v7 = v5; // 0x398f77
    *v6 = *v6 ^ v7;
    float80_t v8; // 0x398f3f
    *(int64_t *)(v5 + (8 * v3 | 1)) = (int64_t)v8;
    *(char *)v1 = *(char *)&v1 + v7;
    char * v9 = (char *)(v3 & -0xff01 | (int64_t)".2"); // bp-8, 0x398f83
    int64_t result = __asm_int3(a1, a2); // 0x398f84
    int32_t * v10 = (int32_t *)(v1 - 88); // 0x398f89
    *v10 = *v10 + (int32_t)(int64_t)&v9;
    return result;
}

// Address range: 0x398fe4 - 0x398fe7
int64_t function_398fe4(void) {
    // 0x398fe4
    int64_t result; // 0x398fe4
    return result;
}

// Address range: 0x39900f - 0x39901a
int64_t function_39900f(void) {
    // 0x39900f
    return function_39d1f654();
}

// Address range: 0x399021 - 0x399022
int64_t function_399021(int64_t a1) {
    // 0x399021
    int64_t result; // 0x399021
    return result;
}

// Address range: 0x39904e - 0x399054
int64_t function_39904e(void) {
    // 0x39904e
    return unknown_ffffffffc843f854();
}

// Address range: 0x399054 - 0x399059
int64_t function_399054(void) {
    // 0x399054
    return function_ffffffff83de9081();
}

// Address range: 0x39906e - 0x39906f
int64_t function_39906e(void) {
    // 0x39906e
    int64_t result; // 0x39906e
    return result;
}

// Address range: 0x3990c0 - 0x3990c1
int64_t function_3990c0(int64_t a1) {
    // 0x3990c0
    int64_t result; // 0x3990c0
    return result;
}

// Address range: 0x3990c4 - 0x3990c7
int64_t function_3990c4(int64_t a1) {
    // 0x3990c4
    int64_t result; // 0x3990c4
    return result;
}

// Address range: 0x39913b - 0x399146
int64_t function_39913b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x6408351d); // 0x39913b
    int64_t result; // 0x39913b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x399147 - 0x399150
int64_t function_399147(int64_t a1) {
    // 0x399147
    int64_t v1; // 0x399147
    return function_fffffffff19491b8(0xffffffe8 * v1 & 0xfffffff8);
}

// Address range: 0x399156 - 0x399186
int64_t function_399156(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x399156
    int32_t * v3 = (int32_t *)(v2 + 41); // 0x399156
    uint32_t v4 = *v3; // 0x399156
    uint32_t v5 = v4 + (int32_t)a2; // 0x399156
    *v3 = v5;
    if (v5 >= v4) {
        // 0x39915b
        return v2 ^ v2 & 0xff00;
    }
    int32_t v6 = a3; // 0x399175
    int32_t * v7 = (int32_t *)(v1 + 104); // 0x399176
    *v7 = *v7 + (int32_t)a1;
    *(char *)v1 = *(char *)&v1 - 33;
    int64_t result = a3 + 0xfec2ff9a & 0xffffffff; // 0x399184
    if ((0x13d0065 - v6 & v6) >= 0) {
        result = function_3991e0(a1, v1, v2 & 0xffffffc7 | 56, a4);
    }
    // 0x399186
    return result;
}

// Address range: 0x3991b2 - 0x3991c8
int64_t function_3991b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)a1; // 0x3991b2
    int64_t result; // 0x3991b2
    *v1 = (int32_t)result + (int32_t)a4;
    int32_t * v2 = (int32_t *)(result - 59); // 0x3991b4
    uint32_t v3 = *v2; // 0x3991b4
    *v2 = v3 / 0x2000000 | 128 * v3;
    int64_t * v4 = (int64_t *)(2 * result + a5); // 0x3991bd
    *v4 = *v4 ^ 123;
    *v1 = *(int32_t *)0x844c29e;
    return result;
}

// Address range: 0x3991cb - 0x3991cc
int64_t function_3991cb(void) {
    // 0x3991cb
    int64_t result; // 0x3991cb
    return result;
}

// Address range: 0x3991e0 - 0x3991ed
int64_t function_3991e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 0x740068a7); // 0x3991e7
    int64_t result; // 0x3991e0
    *v1 = *v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x399282 - 0x399293
int64_t function_399282(int64_t a1, int64_t a2, int64_t a3) {
    // 0x399282
    int64_t v1; // 0x399282
    int64_t v2 = v1;
    int64_t result = (v2 + v1) % 256 | v2 & -256; // 0x399284
    int32_t * v3 = (int32_t *)(v1 - 0x77a85800); // 0x39928c
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x3992fa - 0x3992fd
int64_t function_3992fa(void) {
    // 0x3992fa
    int64_t result; // 0x3992fa
    return result;
}

// Address range: 0x39931c - 0x399338
int64_t function_39931c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39931c
    *(int32_t *)0x6ba780fa = *(int32_t *)0x6ba780fa + (int32_t)a1;
    int64_t result; // 0x39931c
    return result;
}

// Address range: 0x39933a - 0x39933f
int64_t function_39933a(void) {
    // 0x39933a
    return function_ffffffffbb19b005();
}

// Address range: 0x399340 - 0x399379
int64_t function_399340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x2cb33ff5); // 0x399342
    int64_t v2; // 0x399340
    *v1 = ((int32_t)v2 & -256 | 232) + *v1;
    bool v3; // 0x399340
    int64_t v4 = v3 ? -4 : 4; // 0x399348
    *(int32_t *)-0x4270a076 = *(int32_t *)-0x4270a076 & -99;
    __asm_int3(v4 + a1, (int64_t)(0x734c68af * *(int32_t *)(a2 - 86 + v4)));
    unknown_ffffffff992d0365();
    int64_t v5; // 0x399340
    int64_t v6 = v5;
    *(int32_t *)v6 = *(int32_t *)&v5 + (int32_t)v6;
    return unknown_58886a76() & -256 | (int64_t)__asm_in_137((int16_t)a3);
}
