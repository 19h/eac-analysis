/*
 * Targeted RetDec C for native executable gap queue batch 1729.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x15eaec-0x15ecec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15ecec-0x15eeec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15eeec-0x15f0ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x15f0ec-0x15f1f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x207234-0x207434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x207434-0x207634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x207834-0x20792d rank=- name=- kind=- bytes=- uncovered=-
 *   0x38c1a8-0x38c3a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38c3a8-0x38c5a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38c5a8-0x38c7a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38c7a8-0x38c897 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54b28c-0x54b48c rank=- name=- kind=- bytes=- uncovered=-
 *   0x57194e-0x571b4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x571b4e-0x571d4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x571d4e-0x571f4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x571f4e-0x572060 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
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

int64_t function_15eaec(int64_t a1);
int64_t function_15eb08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15ec38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15eda1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15eeff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15f064(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15f19f(void);
int64_t function_15f1b9(void);
int64_t function_207229();
int64_t function_207234(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20724c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_207265(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2072d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20734c(int64_t a1);
int64_t function_207355(void);
int64_t function_207366(void);
int64_t function_2073b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2074bc(void);
int64_t function_2074c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2074cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_207523(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_207576(void);
int64_t function_207584(int64_t a1);
int64_t function_20762e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_207834(int64_t a1);
int64_t function_20784e(int64_t a1, int64_t a2);
int64_t function_207876(int64_t a1);
int64_t function_2078b6(int64_t a1);
int64_t function_2cefab32();
int64_t function_3775d01b();
int64_t function_38c1a8(void);
int64_t function_38c1c5(int64_t a1);
int64_t function_38c1ec(int64_t a1);
int64_t function_38c1f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38c213(void);
int64_t function_38c219(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_38c272(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38c2a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38c2a3(void);
int64_t function_38c2b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38c2c2(void);
int64_t function_38c2e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38c355(int64_t a1);
int64_t function_38c3d7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_38c45a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_38c490(int64_t a1);
int64_t function_38c4a0(int64_t a1, int64_t a2);
int64_t function_38c5d8(void);
int64_t function_38c601(int64_t a1);
int64_t function_38c610(int64_t a1);
int64_t function_38c6ef(void);
int64_t function_38c791(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38c826(void);
int64_t function_38c861(int64_t a1);
int64_t function_38c867(void);
int64_t function_38c889(int64_t a1);
int64_t function_3d392eb4();
int64_t function_4eeb50();
int64_t function_518fa0();
int64_t function_52e330();
int64_t function_542650();
int64_t function_54ab90();
int64_t function_54b28c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_565970();
int64_t function_5679e0();
int64_t function_568460();
int64_t function_568730();
int64_t function_569eb0();
int64_t function_569fc0();
int64_t function_56adb0();
int64_t function_56aeb0();
int64_t function_57194b();
int64_t function_57194e(int64_t a1);
int64_t function_571960(int64_t a1);
int64_t function_571980(int64_t a1);
int64_t function_5719e0(int64_t a1);
int64_t function_571a40(int64_t a1);
int64_t function_571aa0(int64_t a1);
int64_t function_571b10(int64_t a1);
int64_t function_571b80(int64_t a1);
int64_t function_571bf0(int64_t a1);
int64_t function_571c60(int64_t a1);
int64_t function_571cd0(int64_t a1);
int64_t function_571d40(int64_t a1);
int64_t function_571db0(int64_t a1);
int64_t function_571e20(int64_t a1);
int64_t function_571eb0(int64_t a1);
int64_t function_571f40(int64_t a1);
int64_t function_571fd0(int64_t a1);
int64_t function_cdc60();
int64_t function_ffffffff9c65adb6();
int64_t function_ffffffffafbdb553();
int64_t function_fffffffff56975a8();
int64_t unknown_24b678a9();
int64_t unknown_2aaa188a();
int64_t unknown_68f87d74();
int64_t unknown_ffffffff8981e53f();
int64_t unknown_ffffffff89e38af2();
int64_t unknown_ffffffff90087423();
int64_t unknown_ffffffff997a7d9c();
int64_t unknown_ffffffffa63ea9ae();
int64_t unknown_ffffffffabc850a9();
int64_t unknown_ffffffffd73b3c88();

// Address range: 0x15eaec - 0x15eb08
int64_t function_15eaec(int64_t a1) {
    // 0x15eaec
    int64_t v1; // 0x15eaec
    return function_cdc60(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x15eb08 - 0x15ec38
int64_t function_15eb08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15eb08
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x15ec38 - 0x15eda1
int64_t function_15ec38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15ec38
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x15eda1 - 0x15eeff
int64_t function_15eda1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15eda1
    int64_t v1; // bp-40, 0x15eda1
    v1 = (int64_t)&v1;
    int64_t v2; // 0x15eda1
    return function_cdc60(310, v2 + 0x7fed1535, a3, a4, a5, a6);
}

// Address range: 0x15eeff - 0x15f064
int64_t function_15eeff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15eeff
    int64_t v1; // bp-32, 0x15eeff
    int64_t v2 = (int64_t)&v1; // 0x15ef68
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x15ef70
    int64_t * v4 = (int64_t *)v3; // 0x15ef71
    *v4 = 0x4cabc007;
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x15ef9f
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x15efa7
    *v6 = a4;
    int64_t v7 = v2 - 24; // 0x15efaf
    int64_t * v8 = (int64_t *)v7; // 0x15efaf
    *v8 = a5;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x15efb1
    *v9 = v5;
    *v6 = v2;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x15efd0
    int64_t v11 = *v10; // 0x15efd0
    *v6 = v11;
    *v9 = a2;
    int64_t * v12 = (int64_t *)(v2 - 40); // 0x15eff1
    *v12 = v5;
    *v8 = v3;
    *v9 = v5;
    *v4 = *v8;
    *v8 = 0x510945db;
    *v9 = 0x21da19a9;
    *v12 = v11;
    *v10 = *v8;
    *v9 = v7;
    *v8 = v3;
    int64_t v13 = *v4; // 0x15f049
    *v6 = v13;
    *v8 = v13;
    return function_cdc60(a1, *v9, a3, *v6, *v8, a6);
}

// Address range: 0x15f064 - 0x15f191
int64_t function_15f064(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15f064
    int64_t v1; // bp-56, 0x15f064
    int64_t v2 = (int64_t)&v1; // 0x15f15b
    int64_t v3 = v2 + 8; // 0x15f170
    v1 = v3;
    *(int64_t *)v3 = v2 + 24;
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x15f19f - 0x15f1a2
int64_t function_15f19f(void) {
    // 0x15f19f
    int64_t result; // 0x15f19f
    return result;
}

// Address range: 0x15f1b9 - 0x15f1bc
int64_t function_15f1b9(void) {
    // 0x15f1b9
    int64_t result; // 0x15f1b9
    return result;
}

// Address range: 0x207234 - 0x207247
int64_t function_207234(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x207234
    bool v1; // 0x207234
    *(int32_t *)a2 = (int32_t)a2 + (int32_t)a1 + (int32_t)(bool)v1;
    uint64_t v2 = unknown_ffffffff90087423(); // 0x207236
    char v3 = a4; // 0x20723b
    uint64_t v4 = v2 / 256; // 0x20723b
    int64_t result = v2 & -256 | (int64_t)__asm_in(-87); // 0x20723f
    if (((v3 - (char)v4 ^ v3) & (char)(v4 ^ a4)) < 0) {
        result = function_207229();
    }
    int32_t * v5 = (int32_t *)(a2 + 0x1e21092f); // 0x207241
    *v5 = *v5 + (int32_t)result;
    return result;
}

// Address range: 0x20724c - 0x207252
int64_t function_20724c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20724c
    int64_t v1; // 0x20724c
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 52); // 0x20724c
    *v3 = *v3 + (int32_t)a2;
    return (v2 + 135) % 256 | v2 & -256;
}

// Address range: 0x207265 - 0x2072d5
int64_t function_207265(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t * v1 = (int32_t *)(a1 - 0x52fc38c6); // 0x207265
    *v1 = *v1 | 112;
    unknown_68f87d74();
    unsigned char v2 = (char)a4; // 0x207273
    unsigned char v3 = *(char *)(a1 + 0x1e8130c); // 0x207273
    int64_t v4; // 0x207265
    char * v5 = (char *)(v4 - 0x75558526); // 0x207279
    unsigned char v6 = *v5; // 0x207279
    unsigned char v7 = v6 + 12 + (char)(v3 > v2); // 0x207279
    bool v8 = v3 > v2 ? v7 <= v6 : v6 > 243; // 0x207279
    *v5 = v7;
    char v9 = v4 / 256; // 0x207281
    int64_t v10 = a4 & -256 | (int64_t)(v9 + v2 - v3 + (char)v8);
    int32_t * v11 = (int32_t *)((unknown_2aaa188a() & 0xa9ae3b00 | 232) - 0x650b49f6); // 0x207290
    *v11 = *v11 + (int32_t)v10;
    *(int32_t *)0x6d6a9b32 = *(int32_t *)0x6d6a9b32 + (int32_t)a3;
    int64_t v12 = unknown_ffffffffabc850a9(); // 0x2072a3
    char * v13 = (char *)v12; // 0x2072a8
    char v14 = *v13 + v9; // 0x2072a8
    *v13 = v14;
    int64_t v15 = v10 - 1; // 0x2072aa
    while (v15 != 0 && v14 != 0) {
        // 0x207284
        v10 = v15;
        v11 = (int32_t *)((unknown_2aaa188a() & 0xa9ae3b00 | 232) - 0x650b49f6);
        *v11 = *v11 + (int32_t)v10;
        *(int32_t *)0x6d6a9b32 = *(int32_t *)0x6d6a9b32 + (int32_t)a3;
        v12 = unknown_ffffffffabc850a9();
        v13 = (char *)v12;
        v14 = *v13 + v9;
        *v13 = v14;
        v15 = v10 - 1;
    }
    int32_t v16 = *(int32_t *)(v10 + 0x6101e824 + 4 * v12) + (int32_t)v12; // 0x2072ac
    int32_t * v17 = (int32_t *)(4 * v4 + a1); // 0x2072b3
    *v17 = *v17 | v16;
    char v18 = __asm_in(-7); // 0x2072c0
    int64_t result = (int64_t)v18 | (int64_t)(v16 & -256); // 0x2072c0
    char * v19 = (char *)(result - 0x5afe1800); // 0x2072c7
    *v19 = *v19 + v18;
    char * v20 = (char *)(a6 - 0x6bff6700); // 0x2072cd
    *v20 = *v20 + v9;
    return result;
}

// Address range: 0x2072d5 - 0x2072f7
int64_t function_2072d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x7ab9fe18 + a3); // 0x2072da
    *v1 = *v1 + (char)a4;
    int64_t result = unknown_ffffffff89e38af2(); // 0x2072ec
    char * v2 = (char *)(a2 - 70); // 0x2072f1
    int64_t v3; // 0x2072d5
    *v2 = *v2 + (char)((uint64_t)v3 / 256);
    return result;
}

// Address range: 0x20734c - 0x20734e
int64_t function_20734c(int64_t a1) {
    // 0x20734c
    int64_t result; // 0x20734c
    return result;
}

// Address range: 0x207355 - 0x20735a
int64_t function_207355(void) {
    // 0x207355
    return function_ffffffffafbdb553();
}

// Address range: 0x207366 - 0x20736b
int64_t function_207366(void) {
    // 0x207366
    return function_ffffffff9c65adb6();
}

// Address range: 0x2073b8 - 0x2073c0
int64_t function_2073b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2073b8
    int64_t v1; // 0x2073b8
    *(char *)a4 = (char)(v1 / 256) + (char)v1;
    return function_fffffffff56975a8();
}

// Address range: 0x2074bc - 0x2074c1
int64_t function_2074bc(void) {
    // 0x2074bc
    return function_3775d01b();
}

// Address range: 0x2074c7 - 0x2074cb
int64_t function_2074c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2074c7
    int64_t result; // 0x2074c7
    *(char *)a3 = (char)result + (char)a3;
    return result;
}

// Address range: 0x2074cd - 0x2074d0
int64_t function_2074cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2074cd
    int64_t result; // 0x2074cd
    return result;
}

// Address range: 0x207523 - 0x207573
int64_t function_207523(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x207523
    int64_t result; // 0x207523
    if (a4 == 0) {
        // 0x20756b
        return result;
    }
    char v1 = *(char *)(result - 0x423f000); // 0x207523
    int32_t * v2 = (int32_t *)(a1 - 0x43eb939); // 0x20752e
    *v2 = *v2 + (int32_t)result;
    bool v3; // 0x207523
    __asm_in_133((int16_t)(256 * (int64_t)((char)v3 + (char)(a3 / 256) - v1) | a3 % 256));
    return __asm_sti();
}

// Address range: 0x207576 - 0x207579
int64_t function_207576(void) {
    // 0x207576
    int64_t result; // 0x207576
    return result;
}

// Address range: 0x207584 - 0x207585
int64_t function_207584(int64_t a1) {
    // 0x207584
    int64_t result; // 0x207584
    return result;
}

// Address range: 0x20762e - 0x207633
int64_t function_20762e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20762e
    int64_t result; // 0x20762e
    *(char *)a4 = (char)result + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x207834 - 0x207841
int64_t function_207834(int64_t a1) {
    // 0x207834
    int64_t v1; // 0x207834
    *(int32_t *)a1 = (int32_t)v1;
    int64_t result; // 0x207834
    int64_t v2 = result;
    *(char *)v2 = *(char *)&result + (char)v2;
    uint64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)(v3 / 256);
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    return result;
}

// Address range: 0x20784e - 0x207856
int64_t function_20784e(int64_t a1, int64_t a2) {
    // 0x20784e
    return ((a2 & (int64_t)&g1) == 0 ? 1 : 0xffffffff) + a1 & 0xffffffff;
}

// Address range: 0x207876 - 0x20787e
int64_t function_207876(int64_t a1) {
    // 0x207876
    int64_t result; // 0x207876
    return result;
}

// Address range: 0x2078b6 - 0x2078b9
int64_t function_2078b6(int64_t a1) {
    // 0x2078b6
    int64_t result; // 0x2078b6
    return result;
}

// Address range: 0x38c1a8 - 0x38c1ad
int64_t function_38c1a8(void) {
    // 0x38c1a8
    return unknown_ffffffffa63ea9ae();
}

// Address range: 0x38c1c5 - 0x38c1c6
int64_t function_38c1c5(int64_t a1) {
    // 0x38c1c5
    int64_t result; // 0x38c1c5
    return result;
}

// Address range: 0x38c1ec - 0x38c1ed
int64_t function_38c1ec(int64_t a1) {
    // 0x38c1ec
    int64_t result; // 0x38c1ec
    return result;
}

// Address range: 0x38c1f6 - 0x38c201
int64_t function_38c1f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38c1f6
    int64_t v1; // 0x38c1f6
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x38c213 - 0x38c214
int64_t function_38c213(void) {
    // 0x38c213
    int64_t result; // 0x38c213
    return result;
}

// Address range: 0x38c219 - 0x38c244
int64_t function_38c219(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x38c219
    int64_t v1; // 0x38c219
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x38c219
    int64_t v3 = v2 ? -4 : 4; // 0x38c219
    int64_t v4 = v3 + a1; // 0x38c219
    char * v5 = (char *)(a4 + 1); // 0x38c21a
    unsigned char v6 = *v5; // 0x38c21a
    char v7 = a3; // 0x38c21a
    unsigned char v8 = v6 + v7; // 0x38c21a
    *v5 = v8;
    char * v9 = (char *)(v1 - 0x6e60ff67); // 0x38c21d
    *v9 = *v9 - (char)v1 + (char)(v8 < v6);
    int64_t v10 = v1 & 0xffffffff ^ 0xaa85be9e; // 0x38c229
    if (*(char *)(v3 + a2) < *(char *)v4) {
        v10 = function_38c213();
    }
    int32_t * v11 = (int32_t *)v10; // 0x38c22b
    *v11 = *v11 + (int32_t)a3;
    char * v12 = (char *)(a3 + 22); // 0x38c22d
    *v12 = *v12 | v7;
    int64_t result = unknown_ffffffff8981e53f(); // 0x38c239
    char * v13 = (char *)(v4 + (v2 ? -81 : -79)); // 0x38c23e
    *v13 = *v13 + (char)(a3 / 256);
    return result;
}

// Address range: 0x38c272 - 0x38c2a0
int64_t function_38c272(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)(a1 + 0x3601e8de); // 0x38c272
    int64_t v2 = 98 * v1; // 0x38c272
    int32_t * v3 = (int32_t *)(v2 & 0xfffffffe); // 0x38c279
    *v3 = *v3 - (int32_t)a2 + (int32_t)(v2 != 0x6200000000 * v1 >> 32);
    int64_t v4; // 0x38c272
    uint32_t v5 = (int32_t)v4 >> 31; // 0x38c27c
    int64_t v6 = __asm_iretd() & 0xffffffff ^ 0xe8e854bb; // 0x38c280
    int32_t * v7 = (int32_t *)(v6 + 0x7924ab0a); // 0x38c285
    uint32_t v8 = *v7; // 0x38c285
    uint32_t v9 = v8 + (int32_t)v2; // 0x38c285
    *v7 = v9;
    char * v10 = (char *)((int64_t)v5 - 0x3a9c19e8); // 0x38c28c
    unsigned char v11 = *v10; // 0x38c28c
    unsigned char v12 = v11 + (char)v5; // 0x38c28c
    unsigned char v13 = v12 + (char)(v9 < v8); // 0x38c28c
    bool v14 = v9 < v8 ? v13 <= v11 : v12 < v11; // 0x38c28c
    *v10 = v13;
    unsigned char v15 = *(char *)0x560f9f38d0b01e8; // 0x38c292
    char * v16 = (char *)((v6 & 0xffffff00 | (int64_t)v15) + 11); // 0x38c29b
    *v16 = *v16 - (char)(v5 / 256) + (char)v14;
    return function_38c2a3();
}

// Address range: 0x38c2a1 - 0x38c2a3
int64_t function_38c2a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38c2a1
    int64_t result; // 0x38c2a1
    return result;
}

// Address range: 0x38c2a3 - 0x38c2a8
int64_t function_38c2a3(void) {
    // 0x38c2a3
    int64_t v1; // 0x38c2a3
    return v1 & -256 | 5;
}

// Address range: 0x38c2b7 - 0x38c2c1
int64_t function_38c2b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38c2b7
    int64_t result; // 0x38c2b7
    return result;
}

// Address range: 0x38c2c2 - 0x38c2c5
int64_t function_38c2c2(void) {
    // 0x38c2c2
    int64_t result; // 0x38c2c2
    return result;
}

// Address range: 0x38c2e7 - 0x38c306
int64_t function_38c2e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38c2e7
    int64_t v1; // 0x38c2e7
    uint64_t v2 = v1;
    int64_t v3 = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x38c2e7
    int32_t * v4 = (int32_t *)(a2 - 0x1796cd54); // 0x38c2e8
    int32_t v5 = v1; // 0x38c2e8
    *v4 = *v4 ^ v5;
    int64_t v6; // 0x38c2e7
    *(int32_t *)a2 = *(int32_t *)&v6 + v5;
    uint32_t v7 = (int32_t)v3; // 0x38c2f0
    *(int32_t *)a4 = v7;
    __asm_int(-124);
    int32_t * v8 = (int32_t *)(v1 - 0x32408e08); // 0x38c2ff
    *v8 = (int32_t)(v7 > 0x8bfe177c) + (int32_t)a2 + *v8;
    return v3 + 0x7401e883 & 0xffffffff;
}

// Address range: 0x38c355 - 0x38c35c
int64_t function_38c355(int64_t a1) {
    // 0x38c355
    return function_3d392eb4();
}

// Address range: 0x38c3d7 - 0x38c459
int64_t function_38c3d7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x38c3d7
    int64_t v1; // 0x38c3d7
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    if ((char)(a4 / 256) - *(char *)(result - 25) >= 0) {
        // 0x38c454
        return result + 0xb901e85c & 0xffffffff;
    }
    // 0x38c3e8
    return result;
}

// Address range: 0x38c45a - 0x38c490
int64_t function_38c45a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x38c45a
    int64_t v1; // 0x38c45a
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 0x77fa8f3a); // 0x38c471
    *v3 = *v3 | 0x1e849e5;
    return unknown_ffffffffd73b3c88(v2, (int32_t)a4 + (int32_t)a2 + (int32_t)v2) & -256 | a4 / 256 % 256;
}

// Address range: 0x38c490 - 0x38c497
int64_t function_38c490(int64_t a1) {
    // 0x38c490
    int64_t result; // 0x38c490
    int32_t * v1 = (int32_t *)(result - 0x3ab31f6); // 0x38c490
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x38c4a0 - 0x38c4b5
int64_t function_38c4a0(int64_t a1, int64_t a2) {
    // 0x38c4a0
    int64_t v1; // 0x38c4a0
    int64_t v2 = v1;
    int64_t v3 = unknown_24b678a9(); // 0x38c4a3
    int32_t v4 = v1; // 0x38c4a8
    bool v5; // 0x38c4a0
    *(int32_t *)v2 = (int32_t)v2 + v4 + (int32_t)v5;
    int32_t * v6 = (int32_t *)(v3 + 0x1e8a000); // 0x38c4aa
    *v6 = *v6 + v4;
    return function_2cefab32();
}

// Address range: 0x38c5d8 - 0x38c5db
int64_t function_38c5d8(void) {
    // 0x38c5d8
    int64_t result; // 0x38c5d8
    return result;
}

// Address range: 0x38c601 - 0x38c604
int64_t function_38c601(int64_t a1) {
    // 0x38c601
    int64_t v1; // 0x38c601
    return v1 & -256 | (int64_t)__asm_in((char)a1);
}

// Address range: 0x38c610 - 0x38c613
int64_t function_38c610(int64_t a1) {
    // 0x38c610
    int64_t result; // 0x38c610
    return result;
}

// Address range: 0x38c6ef - 0x38c6f0
int64_t function_38c6ef(void) {
    // 0x38c6ef
    int64_t result; // 0x38c6ef
    return result;
}

// Address range: 0x38c791 - 0x38c7f4
int64_t function_38c791(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x38c791
    __asm_out(6, (char)v2);
    __asm_rcl(*(char *)(a3 - 102));
    int64_t result = unknown_ffffffff997a7d9c(); // 0x38c796
    int32_t * v3 = (int32_t *)(a3 + 0x3a8be3d3); // 0x38c7e4
    bool v4; // 0x38c791
    int32_t v5 = *v3 + (v4 ? 0x21a487b1 : 0x21a487b0); // 0x38c7e4
    *v3 = v5;
    if (a4 == 1 || v5 == 0) {
        // 0x38c7f1
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
        return result;
    }
    // 0x38c7d9
    return result;
}

// Address range: 0x38c826 - 0x38c827
int64_t function_38c826(void) {
    // 0x38c826
    int64_t result; // 0x38c826
    return result;
}

// Address range: 0x38c861 - 0x38c863
int64_t function_38c861(int64_t a1) {
    // 0x38c861
    int64_t result; // 0x38c861
    return result;
}

// Address range: 0x38c867 - 0x38c86a
int64_t function_38c867(void) {
    // 0x38c867
    int64_t result; // 0x38c867
    return result;
}

// Address range: 0x38c889 - 0x38c892
int64_t function_38c889(int64_t a1) {
    // 0x38c889
    int64_t result; // 0x38c889
    int64_t v1; // 0x38c889
    if ((char)(v1 / 256) - *(char *)(v1 + 0x34794382) < 0) {
        result = function_38c826();
    }
    // 0x38c891
    return result;
}

// Address range: 0x54b28c - 0x54b48b
int64_t function_54b28c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffffffff; // 0x54b28c
    int64_t v2; // 0x54b28c
    function_542650(a1, a2, a3, v1, v2);
    uint64_t wstr = *(int64_t *)(a1 + 8); // 0x54b2a6
    uint64_t v3 = a2 - a1 >> 2; // 0x54b2b4
    if (wstr >= v3) {
        uint64_t v4 = a3 - a2 >> 2; // 0x54b2ad
        uint64_t v5 = wstr - v3; // 0x54b2b8
        return function_54ab90(a1, v3, v4 > v5 ? v5 : v4, v1, v2);
    }
    // 0x54b2cf
    function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", v3, wstr, v2);
    int32_t v6 = wcslen((int32_t *)wstr); // 0x54b30c
    if (((int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2 < 0x6863696877282073 || (int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2 == 0x6863696877282073) ^ true) {
        // 0x54b354
        function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2, 0x6863696877282073, v2);
        function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2, 0x6863696877282073, 0x6863696877282073);
        function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2, 0x6863696877282073, 0);
        function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2, 0x6863696877282073, -0x1a18da5a1dca081d);
        int64_t v7 = *(int64_t *)(((int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2) + 8); // 0x54b477
        return v7 - 0x6863696877282073;
    }
    uint64_t v8 = (v3 - (int64_t)"basic_string::replace") / 4; // 0x54b31f
    int64_t v9 = v8 < 0x6863696877282073 - ((int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2) ? v8 : 0x6863696877282073 - ((int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2); // 0x54b330
    return function_54ab90((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325 >> 2, v9, wstr, (int64_t)v6);
}

// Address range: 0x57194e - 0x57195c
int64_t function_57194e(int64_t a1) {
    // 0x57194e
    function_518fa0();
    int64_t v1; // 0x57194e
    return function_4eeb50(v1);
}

// Address range: 0x571960 - 0x571976
int64_t function_571960(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x571960
    int32_t v2 = *v1; // 0x571960
    *v1 = v2 - 1;
    if (v2 != 1) {
        function_57194b();
    }
    // 0x57196e
    return function_57194b();
}

// Address range: 0x571980 - 0x5719d6
// From class:    *NSt13__facet_shims12_GLOBAL__N_113messages_shimIwEE
// Type:          constructor
int64_t function_571980(int64_t a1) {
    // 0x571980
    *(int64_t *)a1 = (int64_t)&g6;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 32) + 8);
    *v1 = *v1 - 1;
    function_52e330(a1);
    return function_4eeb50(a1);
}

// Address range: 0x5719e0 - 0x571a3d
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIcEE
// Type:          constructor
int64_t function_5719e0(int64_t a1) {
    // 0x5719e0
    *(int64_t *)a1 = (int64_t)&g15;
    *(int64_t *)(*(int64_t *)(a1 + 32) + 24) = 0;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v2 = *v1;
    int32_t v3 = v2 - 1;
    if (g25 == 0) {
        // 0x571a20
        *v1 = v3;
        if (v2 != 1) {
            // 0x571a17
            return function_568460(a1);
        }
    } else {
        // 0x571a08
        *v1 = v3;
        if (v2 != 1) {
            // 0x571a17
            return function_568460(a1);
        }
    }
    // 0x571a2e
    return function_568460(a1);
}

// Address range: 0x571a40 - 0x571a9d
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIwEE
// Type:          constructor
int64_t function_571a40(int64_t a1) {
    // 0x571a40
    *(int64_t *)a1 = (int64_t)&g19;
    *(int64_t *)(*(int64_t *)(a1 + 32) + 24) = 0;
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v2 = *v1;
    int32_t v3 = v2 - 1;
    if (g25 == 0) {
        // 0x571a80
        *v1 = v3;
        if (v2 != 1) {
            // 0x571a77
            return function_568730(a1);
        }
    } else {
        // 0x571a68
        *v1 = v3;
        if (v2 != 1) {
            // 0x571a77
            return function_568730(a1);
        }
    }
    // 0x571a8e
    return function_568730(a1);
}

// Address range: 0x571aa0 - 0x571b06
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIcEE
// Type:          constructor
int64_t function_571aa0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571ab3
    *v1 = (int64_t)&g23;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g10;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x571b10 - 0x571b76
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_get_shimIcEE
// Type:          constructor
int64_t function_571b10(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571b23
    *v1 = (int64_t)&g2;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g8;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x571b80 - 0x571be6
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIcEE
// Type:          constructor
int64_t function_571b80(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571b93
    *v1 = (int64_t)&g16;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g7;
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x571bf0 - 0x571c56
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_put_shimIcEE
// Type:          constructor
int64_t function_571bf0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571c03
    *v1 = (int64_t)&g3;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g9;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x571c60 - 0x571cc6
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_put_shimIwEE
// Type:          constructor
int64_t function_571c60(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571c73
    *v1 = (int64_t)&g5;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g13;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x571cd0 - 0x571d36
// From class:    *NSt13__facet_shims12_GLOBAL__N_114money_get_shimIwEE
// Type:          constructor
int64_t function_571cd0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571ce3
    *v1 = (int64_t)&g4;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g12;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x571d40 - 0x571da6
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIwEE
// Type:          constructor
int64_t function_571d40(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571d53
    *v1 = (int64_t)&g20;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g11;
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x571db0 - 0x571e16
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          constructor
int64_t function_571db0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x571dc3
    *v1 = (int64_t)&g24;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 16) + 8);
    *v2 = *v2 - 1;
    *v1 = (int64_t)&g14;
    function_565970(a1);
    return function_4eeb50(a1);
}

// Address range: 0x571e20 - 0x571ea5
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb1EEE
// Type:          constructor
int64_t function_571e20(int64_t a1) {
    // 0x571e20
    *(int64_t *)a1 = (int64_t)&g21;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x571e36
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 56) = 0;
    *(int64_t *)(*v1 + 72) = 0;
    *(int64_t *)(*v1 + 88) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g25 == 0) {
        // 0x571e88
        *v2 = v4;
        if (v3 != 1) {
            // 0x571e7b
            return function_56adb0(a1);
        }
    } else {
        // 0x571e6c
        *v2 = v4;
        if (v3 != 1) {
            // 0x571e7b
            return function_56adb0(a1);
        }
    }
    // 0x571e96
    return function_56adb0(a1);
}

// Address range: 0x571eb0 - 0x571f35
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          constructor
int64_t function_571eb0(int64_t a1) {
    // 0x571eb0
    *(int64_t *)a1 = (int64_t)&g22;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x571ec6
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 56) = 0;
    *(int64_t *)(*v1 + 72) = 0;
    *(int64_t *)(*v1 + 88) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g25 == 0) {
        // 0x571f18
        *v2 = v4;
        if (v3 != 1) {
            // 0x571f0b
            return function_56aeb0(a1);
        }
    } else {
        // 0x571efc
        *v2 = v4;
        if (v3 != 1) {
            // 0x571f0b
            return function_56aeb0(a1);
        }
    }
    // 0x571f26
    return function_56aeb0(a1);
}

// Address range: 0x571f40 - 0x571fc5
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          constructor
int64_t function_571f40(int64_t a1) {
    // 0x571f40
    *(int64_t *)a1 = (int64_t)&g18;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x571f56
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 48) = 0;
    *(int64_t *)(*v1 + 64) = 0;
    *(int64_t *)(*v1 + 80) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g25 == 0) {
        // 0x571fa8
        *v2 = v4;
        if (v3 != 1) {
            // 0x571f9b
            return function_569fc0(a1);
        }
    } else {
        // 0x571f8c
        *v2 = v4;
        if (v3 != 1) {
            // 0x571f9b
            return function_569fc0(a1);
        }
    }
    // 0x571fb6
    return function_569fc0(a1);
}

// Address range: 0x571fd0 - 0x572055
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          constructor
int64_t function_571fd0(int64_t a1) {
    // 0x571fd0
    *(int64_t *)a1 = (int64_t)&g17;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x571fe6
    *(int64_t *)(*v1 + 24) = 0;
    *(int64_t *)(*v1 + 48) = 0;
    *(int64_t *)(*v1 + 64) = 0;
    *(int64_t *)(*v1 + 80) = 0;
    int32_t * v2 = (int32_t *)(*(int64_t *)(a1 + 24) + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g25 == 0) {
        // 0x572038
        *v2 = v4;
        if (v3 != 1) {
            // 0x57202b
            return function_569eb0(a1);
        }
    } else {
        // 0x57201c
        *v2 = v4;
        if (v3 != 1) {
            // 0x57202b
            return function_569eb0(a1);
        }
    }
    // 0x572046
    return function_569eb0(a1);
}
