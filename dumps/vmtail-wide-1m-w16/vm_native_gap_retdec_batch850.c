/*
 * Targeted RetDec C for native executable gap queue batch 850.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x12c6dc-0x12c8dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12c8dc-0x12cadc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12cadc-0x12ccdc rank=- name=- kind=- bytes=- uncovered=-
 *   0x12ccdc-0x12cedc rank=- name=- kind=- bytes=- uncovered=-
 *   0x3471d8-0x3473d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3473d8-0x3475d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3475d8-0x3477d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3479d8-0x347bd8 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_12c6b8();
int64_t function_12c6dc(void);
int64_t function_12c6ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c6f7(void);
int64_t function_12c71c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c72f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_12c83f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12c8cd(void);
int64_t function_12c8d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c906(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12c910(int64_t a1);
int64_t function_12c917(void);
int64_t function_12c91a(int64_t a1, int64_t a2);
int64_t function_12c94d(int64_t a1);
int64_t function_12c968(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12c9a5(int64_t a1);
int64_t function_12ca48(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12cb41(void);
int64_t function_12cb8c(void);
int64_t function_12cb9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12cc82(int64_t a1);
int64_t function_12ccac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12cdbf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12cdf8(void);
int64_t function_12ce2c(int64_t a1);
int64_t function_12ce6b(void);
int64_t function_12ce98(int64_t a1);
int64_t function_3471d8(void);
int64_t function_3471e8(void);
int64_t function_347209(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_347221(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_347293(int64_t a1, int64_t a2);
int64_t function_3472bc(void);
int64_t function_3472ee(void);
int64_t function_347319(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_347387(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3473a9(void);
int64_t function_3473ab(void);
int64_t function_3473c5(void);
int64_t function_3473ce(int64_t a1, int64_t a2, int64_t a3);
int64_t function_347469(void);
int64_t function_347470(int64_t a1, int64_t a2, int64_t a3);
int64_t function_347492(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3474db(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t function_3474fc(int64_t a1);
int64_t function_347504(int64_t a1);
int64_t function_34753f(void);
int64_t function_34757e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3475a3(int64_t a1);
int64_t function_3475aa(int64_t a1);
int64_t function_3475dd(int64_t a1, int64_t a2);
int64_t function_34766f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3479d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_347a3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_68ebaa();
int64_t function_c823b();
int64_t function_ffffffff9ed3a970();
int64_t unknown_14fc7e2();
int64_t unknown_171406b4();
int64_t unknown_2a4bedef();
int64_t unknown_2aeb1a4c();
int64_t unknown_36f3c106();
int64_t unknown_3d7b6706();
int64_t unknown_3d86289e();
int64_t unknown_4f7dc613();
int64_t unknown_6b35b0ee();
int64_t unknown_72700a94();
int64_t unknown_7435b299();
int64_t unknown_7e85a120();
int64_t unknown_81828e0();
int64_t unknown_df40455();
int64_t unknown_ffffffff9419c385();
int64_t unknown_ffffffffa73c83e1();
int64_t unknown_ffffffffacf9fc0f();
int64_t unknown_ffffffffbb94f776();
int64_t unknown_ffffffffc43be18d();
int64_t unknown_ffffffffd8a63b33();
int64_t unknown_ffffffffe035172b();
int64_t unknown_fffffffff699ffa7();

// Address range: 0x12c6dc - 0x12c6dd
int64_t function_12c6dc(void) {
    // 0x12c6dc
    int64_t result; // 0x12c6dc
    return result;
}

// Address range: 0x12c6ed - 0x12c6f6
int64_t function_12c6ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_14fc7e2(a1, a2, a3, a4); // 0x12c6f2
    if (a4 != 1) {
        result = function_12c6b8();
    }
    // 0x12c6f4
    return result;
}

// Address range: 0x12c6f7 - 0x12c6f9
int64_t function_12c6f7(void) {
    // 0x12c6f7
    int64_t result; // 0x12c6f7
    return result;
}

// Address range: 0x12c71c - 0x12c724
int64_t function_12c71c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12c71c
    int64_t v1; // 0x12c71c
    uint64_t v2 = v1;
    __readgsbyte(v2 - 118);
    int64_t result = (v2 + 58) % 256 | v2 & -256; // 0x12c720
    char * v3 = (char *)result; // 0x12c722
    *v3 = *v3 + (char)(v2 / 256);
    return result;
}

// Address range: 0x12c72f - 0x12c83e
int64_t function_12c72f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x12c72f
    int64_t v1; // 0x12c72f
    int64_t v2 = (int64_t)((char)(v1 / 256) - *(char *)(a2 - 0x58a5f00a)); // 0x12c72f
    int64_t v3 = v1 & 0xffff00ff; // 0x12c72f
    int32_t * v4 = (int32_t *)(a4 - 0x5b635393); // 0x12c735
    *v4 = 0x4000 * *v4;
    char v5 = v1 / 256; // 0x12c73c
    *(char *)0x37e8ff43 = *(char *)0x37e8ff43 + v5;
    uint32_t v6 = *(int32_t *)(8 * a4 + a3) | (int32_t)a4; // 0x12c743
    unsigned char v7 = *(char *)(v1 + 58); // 0x12c746
    __asm_out(-8, (char)v1);
    char * v8 = (char *)((256 * v2 | v3) + 0x30a4ab07); // 0x12c75a
    *v8 = *v8 - (char)v6;
    int64_t v9 = (int64_t)(v6 % 256) | v2 | (int64_t)(256 * (int32_t)v7 | v6 & -0x10000); // 0x12c760
    int32_t * v10 = (int32_t *)(v9 + v1); // 0x12c762
    int32_t v11 = a1; // 0x12c762
    *v10 = *v10 + v11;
    char * v12 = (char *)v9; // 0x12c76a
    unsigned char v13 = *v12; // 0x12c76a
    *v12 = v13 / 128 | 2 * v13;
    int32_t * v14 = (int32_t *)(v1 - 0x6ba8fec3); // 0x12c76c
    *v14 = *v14 ^ (int32_t)v9;
    char v15 = *(char *)-0x40b90c0b + v5; // 0x12c7ee
    *(char *)-0x40b90c0b = v15;
    if ((v3 || (int64_t)")\b") == 1 || v15 == 0) {
        // 0x12c7f9
        unknown_3d7b6706();
        int32_t * v16 = (int32_t *)(2 * v1 - 0x88a6fc6 + v9); // 0x12c805
        *v16 = *v16 + v11;
        unknown_4f7dc613();
        unknown_7e85a120();
        __asm_iretd();
        int64_t v17 = unknown_ffffffffe035172b(); // 0x12c825
        unsigned char v18 = __readgsbyte(0x5e8ffd501e88400); // 0x12c82a
        int64_t result = v17 & -256 | (int64_t)v18; // 0x12c82a
        *(char *)(result - 0x782d7574) = -46;
        __asm_out(-1, v18);
        return result;
    }
    // 0x12c7de
    return v1 & 0xffffffff;
}

// Address range: 0x12c83f - 0x12c861
int64_t function_12c83f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12c83f
    int64_t v1; // 0x12c83f
    __asm_outsb((int16_t)a3, (char)v1);
    int32_t * v2 = (int32_t *)(a4 + 80); // 0x12c847
    *v2 = *v2 + (int32_t)a5;
    return unknown_df40455() & -256 | (int64_t)*(char *)-0x67bb8a42fe176000;
}

// Address range: 0x12c8cd - 0x12c8ce
int64_t function_12c8cd(void) {
    // 0x12c8cd
    int64_t result; // 0x12c8cd
    return result;
}

// Address range: 0x12c8d3 - 0x12c8ee
int64_t function_12c8d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_81828e0(); // 0x12c8da
    char * v2 = (char *)(v1 + 0x16fb10cc); // 0x12c8e3
    *v2 = *v2 + (char)v1;
    return unknown_2a4bedef();
}

// Address range: 0x12c906 - 0x12c90f
int64_t function_12c906(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12c906
    int64_t v1; // 0x12c906
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x12c906
    uint64_t v3 = v2 * v2; // 0x12c906
    int32_t * v4 = (int32_t *)(v3 / 0x100000000 - 0x6e7c91f7); // 0x12c908
    *v4 = *v4 + (int32_t)a4;
    return v3 & 0xffffffff;
}

// Address range: 0x12c910 - 0x12c911
int64_t function_12c910(int64_t a1) {
    // 0x12c910
    int64_t result; // 0x12c910
    return result;
}

// Address range: 0x12c917 - 0x12c918
int64_t function_12c917(void) {
    // 0x12c917
    int64_t result; // 0x12c917
    return result;
}

// Address range: 0x12c91a - 0x12c92c
int64_t function_12c91a(int64_t a1, int64_t a2) {
    // 0x12c91a
    int64_t v1; // 0x12c91a
    int32_t * v2 = (int32_t *)(v1 - 0x47079eff + 8 * v1); // 0x12c921
    *v2 = *v2 | (int32_t)v1;
    int64_t v3; // 0x12c91a
    return v1 & -256 | (int64_t)(*(char *)&v3 + 21);
}

// Address range: 0x12c94d - 0x12c94e
int64_t function_12c94d(int64_t a1) {
    // 0x12c94d
    int64_t result; // 0x12c94d
    return result;
}

// Address range: 0x12c968 - 0x12c9a5
int64_t function_12c968(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12c968
    int64_t v1; // 0x12c968
    char * v2 = (char *)(v1 - 0x17ff6ef7); // 0x12c969
    char v3 = v1 / 256; // 0x12c969
    *v2 = *v2 + v3;
    int64_t v4; // 0x12c968
    *(int32_t *)(v1 & 0xffffffff) = *(int32_t *)&v4 + (int32_t)v1;
    __asm_int1();
    int64_t v5; // 0x12c968
    __asm_outsd((int16_t)a3, *(int32_t *)&v5);
    int64_t v6; // 0x12c968
    if ((*(char *)&v6 & v3) >= 0) {
        function_12c917();
    }
    int64_t v7 = unknown_ffffffff9419c385(); // 0x12c97f
    v4 = v7;
    int32_t * v8 = (int32_t *)(v7 - 11); // 0x12c984
    *v8 = *v8 + (int32_t)v7;
    bool v9; // 0x12c968
    int64_t v10 = (v9 ? -1 : 1) + a1; // 0x12c987
    uint32_t v11 = ((int32_t)v1 | (int32_t)&g1) % 32; // 0x12c988
    if (v11 != 0) {
        int32_t * v12 = (int32_t *)(v10 - 122); // 0x12c988
        uint32_t v13 = *v12; // 0x12c988
        *v12 = v13 >> v11 | v13 << 32 - v11;
    }
    return unknown_72700a94(v10);
}

// Address range: 0x12c9a5 - 0x12c9c7
int64_t function_12c9a5(int64_t a1) {
    // 0x12c9a5
    unknown_171406b4();
    bool v1; // 0x12c9a5
    *(char *)0x14ebca689 = *(char *)0x14ebca689 + (v1 ? 2 : 1);
    int64_t v2; // 0x12c9a5
    return v2 & 0xffffffff;
}

// Address range: 0x12ca48 - 0x12ca84
int64_t function_12ca48(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12ca48
    while ((a4 & -0xff01 || (int64_t)&g2) == 0) {
        // continue -> 0x12ca7a
    }
    // 0x12ca7d
    int64_t v1; // 0x12ca48
    *(char *)v1 = (char)v1;
    return a1 & 0xffffffff;
}

// Address range: 0x12cb41 - 0x12cb43
int64_t function_12cb41(void) {
    // 0x12cb41
    int64_t v1; // 0x12cb41
    return function_12cb9a(v1, v1, v1, v1);
}

// Address range: 0x12cb8c - 0x12cb9a
int64_t function_12cb8c(void) {
    // 0x12cb8c
    int64_t result; // 0x12cb8c
    return result;
}

// Address range: 0x12cb9a - 0x12cbb4
int64_t function_12cb9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12cb9a
    int64_t v1; // 0x12cb9a
    *(int32_t *)(v1 - 0x2647c104) = (int32_t)a2;
    return v1 & -256 | (int64_t)*(char *)0x4f2883613aae45a1;
}

// Address range: 0x12cc82 - 0x12cc8a
int64_t function_12cc82(int64_t a1) {
    // 0x12cc82
    int64_t result; // 0x12cc82
    return result;
}

// Address range: 0x12ccac - 0x12ccb2
int64_t function_12ccac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x12ccac
    if (v1 != 0) {
        char * v2 = (char *)(a4 - 122); // 0x12ccac
        *v2 = *v2 >> v1;
    }
    int64_t result; // 0x12ccac
    return result;
}

// Address range: 0x12cdbf - 0x12cdc2
int64_t function_12cdbf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12cdbf
    int64_t result; // 0x12cdbf
    return result;
}

// Address range: 0x12cdf8 - 0x12cdf9
int64_t function_12cdf8(void) {
    // 0x12cdf8
    int64_t result; // 0x12cdf8
    return result;
}

// Address range: 0x12ce2c - 0x12ce31
int64_t function_12ce2c(int64_t a1) {
    // 0x12ce2c
    int64_t result; // 0x12ce2c
    return result;
}

// Address range: 0x12ce6b - 0x12ce6f
int64_t function_12ce6b(void) {
    // 0x12ce6b
    int64_t result; // 0x12ce6b
    bool v1; // 0x12ce6b
    if (!v1) {
        result = function_12cdf8();
    }
    // 0x12ce6d
    return result;
}

// Address range: 0x12ce98 - 0x12ce99
int64_t function_12ce98(int64_t a1) {
    // 0x12ce98
    int64_t result; // 0x12ce98
    return result;
}

// Address range: 0x3471d8 - 0x3471d9
int64_t function_3471d8(void) {
    // 0x3471d8
    int64_t result; // 0x3471d8
    return result;
}

// Address range: 0x3471e8 - 0x3471e9
int64_t function_3471e8(void) {
    // 0x3471e8
    int64_t result; // 0x3471e8
    return result;
}

// Address range: 0x347209 - 0x347221
int64_t function_347209(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_ffffffffacf9fc0f() & 0xffffff00; // 0x34720e
    char * v2 = (char *)(v1 | (int64_t)*(char *)0x4801e8f009099c3e); // 0x34721c
    *v2 = *v2 + (char)(v1 / 256);
    return a4 & 0xffffffff;
}

// Address range: 0x347221 - 0x347292
int64_t function_347221(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int32_t * v3 = (int32_t *)(a2 + 0x1472bae2); // 0x347221
    int64_t result; // 0x347221
    *v3 = *v3 - (int32_t)result;
    unsigned char v4 = (char)result;
    __asm_out(-24, v4);
    uint32_t v5 = (int32_t)result;
    int32_t v6 = a1; // 0x347229
    uint32_t v7 = v5 + v6; // 0x347229
    *(int32_t *)result = v7;
    int64_t v8; // 0x347221
    if (v7 != 0) {
        int32_t v9 = *(int32_t *)(result + 8 * result); // 0x347280
        unsigned char v10 = v4 + (char)a4; // 0x347284
        unsigned char v11 = v10 + (char)(v9 == 0); // 0x347284
        *(char *)result = v11;
        if (!((v9 == 0 ? v11 <= v4 : v10 < v4))) {
            // 0x347274
            bool v12; // 0x347221
            __asm_outsb((int16_t)v1, *(char *)(v2 + (v12 ? -4 : 4)));
            return (int64_t)*(int32_t *)&v2;
        }
        int32_t * v13 = (int32_t *)(v1 + 88); // 0x34728c
        *v13 = *v13 + (int32_t)v1;
        int32_t * v14 = (int32_t *)(v2 - 54); // 0x34728f
        *v14 = *v14 + (int32_t)v8;
        return result;
    }
    // 0x34722d
    *(int32_t *)v1 = (int32_t)(v7 < v5) + v6 + *(int32_t *)&v1;
    int32_t v15 = a4; // 0x347232
    *(int32_t *)v8 = *(int32_t *)&v8 + v15;
    int32_t * v16 = (int32_t *)(a1 - 97); // 0x347236
    int32_t v17 = *v16 + v15; // 0x347236
    *v16 = v17;
    char v18 = v4; // 0x347239
    int64_t result2; // 0x347221
    if (v17 < 0) {
        int64_t v19 = function_3471e8(); // 0x347239
        v18 = v19;
        result2 = v19;
    }
    // 0x34723b
    *(char *)a1 = v18;
    return result2;
}

// Address range: 0x347293 - 0x34729e
int64_t function_347293(int64_t a1, int64_t a2) {
    // 0x347293
    return function_68ebaa();
}

// Address range: 0x3472bc - 0x3472bd
int64_t function_3472bc(void) {
    // 0x3472bc
    int64_t result; // 0x3472bc
    return result;
}

// Address range: 0x3472ee - 0x3472ef
int64_t function_3472ee(void) {
    // 0x3472ee
    int64_t result; // 0x3472ee
    return result;
}

// Address range: 0x347319 - 0x347347
int64_t function_347319(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x347319
    int64_t v1; // 0x347319
    bool v2; // 0x347319
    if (v2 || false) {
        v1 = function_3472bc();
    }
    // 0x34731b
    *(int32_t *)a4 = (int32_t)v1;
    int64_t v3; // 0x347319
    uint64_t v4 = v1 + v3; // 0x34731d
    int64_t v5 = v4 & 0xffffffff; // 0x34731d
    int32_t * v6 = (int32_t *)(v5 + 4); // 0x34731f
    *v6 = *v6 + (int32_t)v3;
    uint32_t v7 = (int32_t)a4; // 0x347324
    uint32_t v8 = v7 % 32; // 0x347324
    int64_t v9 = a3; // 0x347324
    if (v8 != 0) {
        uint32_t v10 = (int32_t)a3; // 0x347324
        uint64_t v11 = (int64_t)(33 - v8);
        uint32_t v12 = v8 - 1;
        int32_t * v13 = (int32_t *)v5; // 0x347327
        uint32_t v14 = *v13; // 0x347327
        *v13 = v14 << v8 | (int32_t)((1 << v12 & v10) != 0) << v12 | (int32_t)((int64_t)v14 >> v11);
        v9 = v10 >> v8 | (int32_t)((a3 & 0xffffffff) << v11) | (int32_t)((char)v4 < 146) << 32 - v8;
    }
    char * v15 = (char *)(v5 + 55); // 0x347329
    *v15 = *v15 + (char)(v4 / 256);
    int64_t v16 = unknown_ffffffffd8a63b33(); // 0x34732c
    int32_t * v17 = (int32_t *)(v9 - 0x4f51fd9b); // 0x347334
    *v17 = *v17 + v7;
    return v16 & -256 | (int64_t)*(char *)0x6eb570fa52a901e8;
}

// Address range: 0x347387 - 0x3473a6
int64_t function_347387(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc43be18d(); // 0x347387
    bool v2; // 0x347387
    uint64_t v3 = v1 + 179 + (int64_t)v2; // 0x34738c
    int64_t v4 = v1 & -256; // 0x34738c
    char * v5 = (char *)((v3 % 256 | v4) + 5); // 0x34738e
    unsigned char v6 = *v5; // 0x34738e
    int64_t v7; // 0x347387
    unsigned char v8 = v6 + (char)(v7 / 256); // 0x34738e
    *v5 = v8;
    int64_t result = (v3 + 113 + (int64_t)(v8 < v6)) % 256 | v4; // 0x347391
    if (*(char *)(result + 54) <= (char)a4) {
        // 0x3473aa
        return result;
    }
    int32_t * v9 = (int32_t *)(unknown_3d86289e() + v7 & 0xffffffff); // 0x34739f
    *v9 = *v9 + (int32_t)a3;
    return unknown_fffffffff699ffa7();
}

// Address range: 0x3473a9 - 0x3473aa
int64_t function_3473a9(void) {
    // 0x3473a9
    int64_t v1; // 0x3473a9
    return v1 & 0xffffffff;
}

// Address range: 0x3473ab - 0x3473af
int64_t function_3473ab(void) {
    // 0x3473ab
    int64_t v1; // 0x3473ab
    return function_3473ce(v1, v1, v1);
}

// Address range: 0x3473c5 - 0x3473c6
int64_t function_3473c5(void) {
    // 0x3473c5
    int64_t result; // 0x3473c5
    return result;
}

// Address range: 0x3473ce - 0x347407
int64_t function_3473ce(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3473ce
    int64_t v1; // 0x3473ce
    uint32_t v2 = (int32_t)v1; // 0x3473cf
    bool v3; // 0x3473ce
    int64_t v4 = v3 ? -4 : 4; // 0x3473cf
    int64_t v5 = v4 + a1; // 0x3473cf
    int32_t * v6 = (int32_t *)(a3 + 68 + 2 * v5); // 0x3473d7
    int32_t v7 = (int32_t)((int32_t)v1 > v2) + (int32_t)a3 + *v6; // 0x3473d7
    *v6 = v7;
    int64_t result = unknown_ffffffffa73c83e1(v5); // 0x3473db
    if (v7 < 1) {
        // 0x34741f
        return result;
    }
    int64_t v8 = v5 + v4; // 0x3473e2
    int64_t v9 = v4 + a2; // 0x3473e2
    int64_t v10 = unknown_6b35b0ee(v8, v9); // 0x3473e8
    *(char *)v8 = *(char *)v9;
    int64_t v11 = v3 ? -1 : 1; // 0x3473ef
    int32_t * v12 = (int32_t *)((v10 + 0xe8e92aa8 & 0xffffffff) + 0x625cf80a); // 0x3473f8
    *v12 = *v12 + v2;
    int64_t result2 = unknown_36f3c106(v8 + v11, v9 + v11); // 0x347400
    *(char *)a3 = -24;
    return result2;
}

// Address range: 0x347469 - 0x34746f
int64_t function_347469(void) {
    // 0x347469
    int64_t result; // 0x347469
    return result;
}

// Address range: 0x347470 - 0x34748a
int64_t function_347470(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffbb94f776(); // 0x347470
    int64_t v2; // 0x347470
    char * v3 = (char *)(v2 - 61); // 0x34747b
    *v3 = *v3 ^ -72;
    *(int32_t *)-0x3948fe179a22350a = (int32_t)v1;
    return function_3474db(a1, a2, (int32_t)a3 - *(int32_t *)0x21d135e, v2);
}

// Address range: 0x347492 - 0x34749b
int64_t function_347492(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(2 * a1 + a3); // 0x347492
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x347492
    char * v2 = (char *)result; // 0x347497
    *v2 = *v2 - 18;
    return result;
}

// Address range: 0x3474db - 0x3474fa
int64_t function_3474db(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x3474db
    int64_t result; // 0x3474db
    char * v1 = (char *)(result - 118); // 0x3474e1
    *v1 = *v1 & -68;
    int64_t v2; // 0x3474db
    *(int32_t *)a1 = *(int32_t *)&v2 - 1;
    *(int32_t *)0x330c2b3a537701e8 = (int32_t)result;
    return result;
}

// Address range: 0x3474fc - 0x347500
int64_t function_3474fc(int64_t a1) {
    // 0x3474fc
    int64_t v1; // 0x3474fc
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x347504 - 0x347507
int64_t function_347504(int64_t a1) {
    // 0x347504
    int64_t result; // 0x347504
    return result;
}

// Address range: 0x34753f - 0x347550
int64_t function_34753f(void) {
    // 0x34753f
    __asm_int1();
    unknown_2aeb1a4c();
    return function_ffffffff9ed3a970();
}

// Address range: 0x34757e - 0x3475a0
int64_t function_34757e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34757e
    int64_t v1; // 0x34757e
    int32_t * v2 = (int32_t *)(v1 + 55); // 0x34757e
    *v2 = *v2 & (int32_t)v1;
    int64_t result = unknown_7435b299(); // 0x347593
    int32_t * v3 = (int32_t *)(v1 + 126 + 2 * v1); // 0x34759b
    *v3 = *v3 + (int32_t)a1;
    return result;
}

// Address range: 0x3475a3 - 0x3475a4
int64_t function_3475a3(int64_t a1) {
    // 0x3475a3
    int64_t result; // 0x3475a3
    return result;
}

// Address range: 0x3475aa - 0x3475ac
int64_t function_3475aa(int64_t a1) {
    // 0x3475aa
    int64_t result; // 0x3475aa
    return result;
}

// Address range: 0x3475dd - 0x3475e2
int64_t function_3475dd(int64_t a1, int64_t a2) {
    // 0x3475dd
    int64_t result; // 0x3475dd
    return result;
}

// Address range: 0x34766f - 0x3477bc
int64_t function_34766f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x34766f
    int64_t v1; // 0x34766f
    char * v2 = (char *)(v1 - 0x7cb76400); // 0x34766f
    *v2 = *v2 + (char)v1;
    __asm_in((int16_t)a3);
    char * v3 = (char *)(a4 + 76); // 0x347676
    *v3 = *v3 | (char)a3;
    int64_t v4; // bp-32, 0x34766f
    v4 = (int64_t)&v4;
    return function_c823b(a1, a2, a3, a7, a5, a6, a4 & 0xffffffff);
}

// Address range: 0x3479d8 - 0x347a3c
int64_t function_3479d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3479d8
    int64_t v1; // 0x3479d8
    return function_c823b(a1, a2, a4, v1, v1, v1, a3);
}

// Address range: 0x347a3c - 0x347b82
int64_t function_347a3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x347a3c
    int64_t v1; // bp-32, 0x347a3c
    int64_t v2 = (int64_t)&v1; // 0x347ac9
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x347ae3
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x347ae3
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x347ae7
    *v5 = v3;
    *(int64_t *)(v2 - 24) = v3;
    int64_t v6 = v2 + 8; // 0x347b1f
    *(int64_t *)v6 = v3;
    *v4 = 0x5b0f7870;
    *v5 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v4;
    *v5 = v1;
    *v4 = v6;
    *v4 = v1;
    *v5 = v2;
    int64_t v7; // 0x347a3c
    return function_c823b(a1, a2, a3, a4, a5, v7, 0x34749d);
}
