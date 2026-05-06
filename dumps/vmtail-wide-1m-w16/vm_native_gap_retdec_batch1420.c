/*
 * Targeted RetDec C for native executable gap queue batch 1420.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2c2400-0x2c2600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c2600-0x2c2800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c2800-0x2c2a00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c2a00-0x2c2c00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c2c00-0x2c2e00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c2e00-0x2c3000 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c3000-0x2c3200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c3200-0x2c3400 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c6664-0x2c6864 rank=- name=- kind=- bytes=- uncovered=-
 *   0x46f0cb-0x46f2cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x46f3cb-0x46f4cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x46f4cb-0x46f6cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x46f6cb-0x46f8cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x46facb-0x46fccb rank=- name=- kind=- bytes=- uncovered=-
 *   0x46fccb-0x46fecb rank=- name=- kind=- bytes=- uncovered=-
 *   0x46fecb-0x4700cb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_18f48a8a();
int64_t function_20064de8();
int64_t function_2c2400(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c2518(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c265c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c27b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c2923(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c2aab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c2c64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c2dd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c2ef8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c30bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c31ed(int64_t a1);
int64_t function_2c6664(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46f0cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46f0e2(void);
int64_t function_46f13f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46f1e9(void);
int64_t function_46f287(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46f39e();
int64_t function_46f3cb(void);
int64_t function_46f3e2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46f3fe(int64_t a1);
int64_t function_46f403(void);
int64_t function_46f404(void);
int64_t function_46f40b(void);
int64_t function_46f419(int64_t a1);
int64_t function_46f42a(void);
int64_t function_46f458(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46f46f(int32_t a1);
int64_t function_46f4f4(void);
int64_t function_46f4f6(void);
int64_t function_46f507(void);
int64_t function_46f53b(int64_t a1);
int64_t function_46f54b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46f55e(void);
int64_t function_46f594(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46f632(void);
int64_t function_46f63a(int64_t a1);
int64_t function_46f63d(void);
int64_t function_46f666(int64_t a1);
int64_t function_46f696(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46f6db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46f6e9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46f75c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46f790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46f7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46f80a(int64_t a1, int64_t a2);
int64_t function_46f8a2(void);
int64_t function_46facb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46fb65(int64_t a1);
int64_t function_46fb9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46fbf4(void);
int64_t function_46fc06(void);
int64_t function_46fc0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46fc58(int64_t a1);
int64_t function_46fc73(void);
int64_t function_46fcc1(void);
int64_t function_46fccc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46fd21(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_46fd31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46fd71(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_46fe48(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46fe4a(void);
int64_t function_46febd(void);
int64_t function_46ff1e(void);
int64_t function_46ff2f(int64_t a1);
int64_t function_46ff66(void);
int64_t function_46ff6c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_46ffcd(void);
int64_t function_470021(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_58ab04ee();
int64_t function_6f6e70bd();
int64_t function_cf3c7();
int64_t function_ffffffff88824fe8();
int64_t function_ffffffff95965c09();
int64_t function_ffffffffa8ed27fd();
int64_t function_ffffffffeecafebb();

// Address range: 0x2c2400 - 0x2c2518
int64_t function_2c2400(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c2400
    int64_t v1; // 0x2c2400
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_cf3c7(a1, a2, a3, v1, v1, v1, 0x2a74f6);
}

// Address range: 0x2c2518 - 0x2c265c
int64_t function_2c2518(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // bp-40, 0x2c260e
    int64_t * v2 = (int64_t *)a4; // 0x2c262a
    *v2 = 0x2ac81e;
    *(int64_t *)(a4 + 32) = a4;
    int64_t * v3 = (int64_t *)(a4 + 8); // 0x2c2632
    int64_t v4 = *v3; // 0x2c2632
    *v2 = v4;
    *(int64_t *)(a4 - 8) = v4;
    int64_t v5 = *(int64_t *)(a4 + 16); // 0x2c2648
    *v3 = v5;
    *v2 = v5;
    int64_t v6; // 0x2c2518
    return function_cf3c7(a1, a2, a3, a4, v6, v6, (int64_t)&v1);
}

// Address range: 0x2c265c - 0x2c27b5
int64_t function_2c265c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-40, 0x2c26f4
    int64_t v2 = (int64_t)&v1; // 0x2c2700
    int64_t v3 = *(int64_t *)(v2 + 24); // 0x2c273c
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2c2740
    v1 = 0x3363d5c2;
    *v4 = a7;
    int64_t v5 = v2 + 16; // 0x2c2751
    *(int64_t *)v5 = v1;
    v1 = 0x1b222ce0;
    *v4 = v3;
    *(int64_t *)(v2 + 32) = v3;
    int64_t v6 = v1; // 0x2c276f
    v1 = v5;
    int64_t v7 = *(int64_t *)(v2 + 8); // 0x2c2797
    v1 = v7;
    *v4 = v7;
    int64_t v8; // 0x2c265c
    bool v9; // 0x2c265c
    return function_cf3c7(a1, a2, a3, a4, v6, a6, v8 & -256 | (int64_t)!v9);
}

// Address range: 0x2c27b5 - 0x2c2923
int64_t function_2c27b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c27b5
    return function_cf3c7(a1, a2, 169, a4, a5, a6, 0x7d02ca12);
}

// Address range: 0x2c2923 - 0x2c2aab
int64_t function_2c2923(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c2923
    int64_t v1; // bp-32, 0x2c2923
    int64_t v2 = (int64_t)&v1; // 0x2c299c
    int64_t v3; // 0x2c2923
    v1 = (0x100000000 * v3 >> 32) * (int64_t)&g2 & 0xfffffff8;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x2c29bc
    *v4 = a3;
    int64_t v5 = v2 - 8; // 0x2c29c0
    int64_t * v6 = (int64_t *)v5; // 0x2c29c0
    *v4 = a6;
    *v6 = v5;
    int64_t v7 = *(int64_t *)(v2 + 32); // 0x2c29e7
    *v6 = v7;
    *v4 = v2;
    int64_t v8 = *(int64_t *)(v2 + 16); // 0x2c2a0d
    *v6 = v8;
    *v4 = v8;
    int64_t v9 = v2 - 24; // 0x2c2a1d
    int64_t * v10 = (int64_t *)v9; // 0x2c2a1d
    int64_t v11 = *v4; // 0x2c2a2e
    *v6 = 0x225e24fc;
    *v4 = v7;
    *(int64_t *)(v2 + 8) = *v6;
    *v6 = *v4;
    *v4 = v11;
    *(int64_t *)(v2 + 24) = v11;
    *v4 = v2;
    *v4 = *v6;
    *(int64_t *)(v2 - 32) = v9;
    *v10 = v5;
    int64_t v12 = *v6; // 0x2c2a8d
    *v4 = v12;
    *v10 = v12;
    return function_cf3c7(a1, a2, *v6, a4, a5, a6, 0x2b90a5);
}

// Address range: 0x2c2aab - 0x2c2c64
int64_t function_2c2aab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x67e9b557; // bp-40, 0x2c2b4f
    int64_t v2 = (int64_t)&v1; // 0x2c2b85
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x2c2b8d
    int64_t v4 = *v3; // 0x2c2b8d
    *(int64_t *)(v2 - 8) = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2c2b99
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x2c2ba4
    *v5 = 0x6580a1b1;
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x2c2bc4
    bool v8; // 0x2c2aab
    *v7 = 0x4000 * (int64_t)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2;
    v1 = *v5;
    *v5 = 0x1b6be730;
    *v7 = *v5;
    *v6 = v4;
    *v3 = *v5;
    *v6 = a1;
    *v5 = v2;
    int64_t v9; // 0x2c2aab
    return function_cf3c7(*v6, a2, 0x4e0434d6, a4, v9, v9, v1);
}

// Address range: 0x2c2c64 - 0x2c2dd7
int64_t function_2c2c64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c2c64
    int64_t v1; // bp-56, 0x2c2c64
    v1 = (int64_t)&v1 + 16;
    return function_cf3c7(0x2fcbed9b, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x2c2dd7 - 0x2c2ef8
int64_t function_2c2dd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c2dd7
    int64_t v1; // 0x2c2dd7
    int64_t v2 = v1;
    return function_cf3c7(a1, a2, 0x2806effa, v2, v1, v1, v2);
}

// Address range: 0x2c2ef8 - 0x2c30bb
int64_t function_2c2ef8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6; // bp-24, 0x2c300f
    int64_t v2; // 0x2c2ef8
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2c306f
    *v3 = a5;
    *(int64_t *)(v2 - 16) = a2;
    *v3 = v2 + 8;
    return function_cf3c7(a1, a2, a3, a4, *v3, v2, (int64_t)&v1);
}

// Address range: 0x2c30bb - 0x2c31ed
int64_t function_2c30bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c30bb
    int64_t v1; // bp-40, 0x2c30bb
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2c30bb
    return function_cf3c7(a1, a2, a3, a4, a5, v2, 0x1bb0d38);
}

// Address range: 0x2c31ed - 0x2c333e
int64_t function_2c31ed(int64_t a1) {
    // 0x2c31ed
    int64_t v1; // bp-48, 0x2c31ed
    int64_t v2 = (int64_t)&v1; // 0x2c32b4
    v1 = v2;
    int64_t v3; // 0x2c31ed
    return function_cf3c7(0x6629f836, v3, v3, v3, v3, v3, v2);
}

// Address range: 0x2c6664 - 0x2c6768
int64_t function_2c6664(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c6664
    int64_t v1; // 0x2c6664
    int64_t * v2 = (int64_t *)v1; // 0x2c670a
    *(int64_t *)(v1 + 16) = 0x2a01d6;
    *v2 = 0x2a01d6;
    *(int64_t *)(v1 + 32) = 0x2a01d6;
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x2c672d
    *(int64_t *)(v1 - 8) = *v3;
    *v3 = a3;
    *v2 = a2;
    *v3 = v1 + 24;
    int64_t v4; // bp-32, 0x2c6664
    return function_cf3c7(a1, a2, *v3, a4, v1, v1, (int64_t)&v4);
}

// Address range: 0x46f0cb - 0x46f0d7
int64_t function_46f0cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46f0cb
    int64_t result; // 0x46f0cb
    char v1 = *(char *)(result + 72); // 0x46f0cb
    __asm_frstor(*(int864_t *)(a4 & -256 | (int64_t)(v1 | (char)a4)));
    *(int32_t *)a1 = (int32_t)result;
    bool v2; // 0x46f0cb
    char * v3 = (char *)(a2 - 121 + (v2 ? -4 : 4)); // 0x46f0d2
    *v3 = *v3 + 1;
    return result;
}

// Address range: 0x46f0e2 - 0x46f0e3
int64_t function_46f0e2(void) {
    // 0x46f0e2
    int64_t result; // 0x46f0e2
    return result;
}

// Address range: 0x46f13f - 0x46f1e8
int64_t function_46f13f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(int64_t)__asm_in(70); // 0x46f1b6
    int64_t v3; // 0x46f13f
    *v2 = (int32_t)v3;
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    uint32_t v4 = (int32_t)v3; // 0x46f1b9
    uint32_t v5 = v4 - 0x3930e68c + (int32_t)((int32_t)v1 > (int32_t)v3); // 0x46f1be
    bool v6 = (int32_t)v1 > (int32_t)v3 ? v5 <= v4 : v4 > 0x3930e68b; // 0x46f1be
    int64_t result = v5; // 0x46f1be
    char * v7 = (char *)(a1 - 100); // 0x46f1c3
    char v8 = *v7; // 0x46f1c3
    char v9 = (char)v6 + (char)(*v2 / 256); // 0x46f1c3
    char v10 = v8 - v9; // 0x46f1c3
    *v7 = v10;
    if (v10 != 0) {
        // 0x46f15c
        return result;
    }
    char v11 = __asm_in_133(32); // 0x46f1cd
    if (v8 > v9) {
        // 0x46f18c
        return a4 & 0xffffffff;
    }
    unsigned char v12 = *(char *)0x442286696162caae; // 0x46f1d0
    return ((int64_t)v11 | result) & -256 | (int64_t)v12;
}

// Address range: 0x46f1e9 - 0x46f1ee
int64_t function_46f1e9(void) {
    // 0x46f1e9
    return function_20064de8();
}

// Address range: 0x46f287 - 0x46f2cb
int64_t function_46f287(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x129d6da0); // 0x46f287
    int64_t result; // 0x46f287
    bool v2; // 0x46f287
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    return result;
}

// Address range: 0x46f3cb - 0x46f3d5
int64_t function_46f3cb(void) {
    // 0x46f3cb
    int64_t v1; // 0x46f3cb
    bool v2; // 0x46f3cb
    return v1 - (v2 ? 0x377cfac3 : 0x377cfac2) & 0xffffffff;
}

// Address range: 0x46f3e2 - 0x46f3e5
int64_t function_46f3e2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46f3e2
    int64_t result; // 0x46f3e2
    bool v1; // 0x46f3e2
    *(int32_t *)a1 = (int32_t)result - (int32_t)a3 + (int32_t)v1;
    return result;
}

// Address range: 0x46f3fe - 0x46f403
int64_t function_46f3fe(int64_t a1) {
    // 0x46f3fe
    return function_46f39e();
}

// Address range: 0x46f403 - 0x46f404
int64_t function_46f403(void) {
    // 0x46f403
    int64_t result; // 0x46f403
    return result;
}

// Address range: 0x46f404 - 0x46f407
int64_t function_46f404(void) {
    // 0x46f404
    int64_t result; // 0x46f404
    return result;
}

// Address range: 0x46f40b - 0x46f412
int64_t function_46f40b(void) {
    // 0x46f40b
    bool v1; // 0x46f40b
    if (v1) {
        function_46f403();
    }
    // 0x46f40d
    return function_58ab04ee();
}

// Address range: 0x46f419 - 0x46f429
int64_t function_46f419(int64_t a1) {
    // 0x46f419
    int64_t v1; // 0x46f419
    return v1 & 0xffffffff;
}

// Address range: 0x46f42a - 0x46f431
int64_t function_46f42a(void) {
    // 0x46f42a
    int64_t v1; // 0x46f42a
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + 1;
    return function_ffffffff95965c09();
}

// Address range: 0x46f458 - 0x46f45d
int64_t function_46f458(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46f458
    int64_t result; // 0x46f458
    *(char *)a3 = (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x46f46f - 0x46f473
int64_t function_46f46f(int32_t a1) {
    // 0x46f46f
    int64_t result; // 0x46f46f
    return result;
}

// Address range: 0x46f4f4 - 0x46f4f6
int64_t function_46f4f4(void) {
    // 0x46f4f4
    return function_46f507();
}

// Address range: 0x46f4f6 - 0x46f4f9
int64_t function_46f4f6(void) {
    // 0x46f4f6
    int64_t result; // 0x46f4f6
    return result;
}

// Address range: 0x46f507 - 0x46f50c
int64_t function_46f507(void) {
    // 0x46f507
    int64_t v1; // 0x46f507
    return v1 & 0xc96101ea | 0x369efe15;
}

// Address range: 0x46f53b - 0x46f542
int64_t function_46f53b(int64_t a1) {
    // 0x46f53b
    int64_t v1; // 0x46f53b
    *(char *)a1 = (char)(v1 & v1);
    return function_6f6e70bd();
}

// Address range: 0x46f54b - 0x46f54d
int64_t function_46f54b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46f54b
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x46f54b
    return result;
}

// Address range: 0x46f55e - 0x46f55f
int64_t function_46f55e(void) {
    // 0x46f55e
    int64_t result; // 0x46f55e
    return result;
}

// Address range: 0x46f594 - 0x46f5d3
int64_t function_46f594(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    unsigned char v2 = llvm_ctpop_i8(0); // 0x46f598
    bool v3; // 0x46f594
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x46f598
    char v5 = __asm_insb((int16_t)a5); // 0x46f59c
    char * v6 = (char *)v4; // 0x46f59c
    *v6 = v5;
    if (v2 % 2 == 0) {
        // 0x46f5a1
        return function_46f55e();
    }
    // 0x46f5b3
    *(char *)-0xe63aa9a = *(char *)-0xe63aa9a | (char)a5;
    int32_t * v7 = (int32_t *)(v4 - 25); // 0x46f5ba
    int64_t v8; // 0x46f594
    *v7 = *v7 ^ (int32_t)v8;
    *v6 = *(char *)&v1;
    *(int64_t *)0x4c871931 = *(int64_t *)0x4c871931 ^ v8;
    return v8 & -0xff01 | 0x4600;
}

// Address range: 0x46f632 - 0x46f633
int64_t function_46f632(void) {
    // 0x46f632
    int64_t result; // 0x46f632
    return result;
}

// Address range: 0x46f63a - 0x46f63d
int64_t function_46f63a(int64_t a1) {
    // 0x46f63a
    int64_t result; // 0x46f63a
    return result;
}

// Address range: 0x46f63d - 0x46f642
int64_t function_46f63d(void) {
    // 0x46f63d
    return function_ffffffffeecafebb();
}

// Address range: 0x46f666 - 0x46f667
int64_t function_46f666(int64_t a1) {
    // 0x46f666
    int64_t result; // 0x46f666
    return result;
}

// Address range: 0x46f696 - 0x46f6b4
int64_t function_46f696(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46f696
    int64_t v1; // 0x46f696
    return __asm_in_134((int16_t)v1 + (int16_t)a3);
}

// Address range: 0x46f6db - 0x46f6df
int64_t function_46f6db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46f6db
    int64_t result; // 0x46f6db
    return result;
}

// Address range: 0x46f6e9 - 0x46f6ed
int64_t function_46f6e9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46f6e9
    int64_t result; // 0x46f6e9
    return result;
}

// Address range: 0x46f75c - 0x46f78c
int64_t function_46f75c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46f75c
    int64_t v1; // 0x46f75c
    char * v2 = (char *)(v1 + 0x7a2a719e); // 0x46f763
    *v2 = *v2 + 14;
    int32_t v3 = *(int32_t *)((v1 & -0xff01 | (int64_t)&g1) + v1); // 0x46f77b
    __asm_wait((int64_t)&g3, (int64_t)&g3);
    return __asm_wait(a1, (int64_t)(-0x20367cf2 - v3));
}

// Address range: 0x46f790 - 0x46f7aa
int64_t function_46f790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46f790
    int64_t result; // 0x46f790
    *(int32_t *)(a4 - 0x5a82be59) = (int32_t)result;
    bool v1; // 0x46f790
    if (!v1) {
        // 0x46f808
        return result;
    }
    // 0x46f798
    return function_ffffffff88824fe8();
}

// Address range: 0x46f7b0 - 0x46f7c9
int64_t function_46f7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46f7b0
    int64_t result; // 0x46f7b0
    int32_t * v1 = (int32_t *)(result + 0x1e456dca); // 0x46f7b0
    *v1 = *v1 & (int32_t)a4;
    return result;
}

// Address range: 0x46f80a - 0x46f814
int64_t function_46f80a(int64_t a1, int64_t a2) {
    int64_t result = __asm_wait(a1, a2); // 0x46f80d
    int32_t v1 = *(int32_t *)0x5963c5ff; // 0x46f80e
    int64_t v2; // 0x46f80a
    *(int32_t *)0x5963c5ff = v1 - (int32_t)a2 + (int32_t)(((char)v2 ^ -2) < 90);
    return result;
}

// Address range: 0x46f8a2 - 0x46f8a7
int64_t function_46f8a2(void) {
    // 0x46f8a2
    int64_t v1; // 0x46f8a2
    return v1 & -177;
}

// Address range: 0x46facb - 0x46fb5d
int64_t function_46facb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x46facb
    int64_t result; // 0x46facb
    bool v1; // 0x46facb
    if (v1) {
        // 0x46facd
        return result;
    }
    int32_t * v2 = (int32_t *)(result + 11); // 0x46fb48
    uint32_t v3 = *v2; // 0x46fb48
    uint32_t v4 = v3 + (int32_t)result; // 0x46fb48
    *v2 = v4;
    unsigned char v5 = *(char *)0x60bff219d421cf60; // 0x46fb52
    return result + a3 + (int64_t)(v4 < v3) & 0xffffff00 | (int64_t)v5;
}

// Address range: 0x46fb65 - 0x46fb6b
int64_t function_46fb65(int64_t a1) {
    // 0x46fb65
    int64_t result; // 0x46fb65
    return result;
}

// Address range: 0x46fb9b - 0x46fbcf
int64_t function_46fb9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46fb9b
    int64_t v1; // 0x46fb9b
    int64_t v2 = v1;
    int64_t v3 = 0x52c85b4e; // bp-8, 0x46fb9b
    char * v4 = (char *)(v1 + 0x6f43511); // 0x46fba1
    *v4 = *v4 ^ (char)v1;
    int32_t * v5 = (int32_t *)(v2 + 0x706b8550); // 0x46fba7
    uint32_t v6 = *v5; // 0x46fba7
    uint32_t v7 = (int32_t)(int64_t)&v3; // 0x46fba7
    *v5 = v6 - v7;
    int64_t result = (v2 - (v6 < v7 ? 157 : 156)) % 256 | v2 & 0xffffff00; // 0x46fbb2
    float80_t v8; // 0x46fb9b
    *(float32_t *)(a4 + 54) = (float32_t)v8;
    int32_t * v9 = (int32_t *)(v1 - 0x668d8fc4); // 0x46fbb8
    *v9 = *v9 + v7;
    int64_t v10; // 0x46fb9b
    *(int32_t *)a1 = *(int32_t *)&v10 ^ (int32_t)a3;
    *(int32_t *)-0x4ae2878300fca6d1 = (int32_t)result;
    return result;
}

// Address range: 0x46fbf4 - 0x46fbf7
int64_t function_46fbf4(void) {
    // 0x46fbf4
    int64_t result; // 0x46fbf4
    return result;
}

// Address range: 0x46fc06 - 0x46fc0b
int64_t function_46fc06(void) {
    // 0x46fc06
    int64_t v1; // 0x46fc06
    return v1 & -256 | 12;
}

// Address range: 0x46fc0e - 0x46fc1b
int64_t function_46fc0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x46fc0e
    bool v2; // 0x46fc0e
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)(a3 - 111); // 0x46fc0e
        uint32_t v4 = *v3; // 0x46fc0e
        *v3 = v4 >> v1;
        v2 = (v4 & 1 << v1 - 1) != 0;
    }
    int64_t result; // 0x46fc0e
    int32_t * v5 = (int32_t *)(result + 0x54fe372d + result); // 0x46fc11
    *v5 = 0x80000000 * (int32_t)v2 | *v5 / 2;
    return result;
}

// Address range: 0x46fc58 - 0x46fc5f
int64_t function_46fc58(int64_t a1) {
    // 0x46fc58
    bool v1; // 0x46fc58
    return function_18f48a8a((v1 ? -1 : 1) + a1);
}

// Address range: 0x46fc73 - 0x46fc74
int64_t function_46fc73(void) {
    // 0x46fc73
    int64_t result; // 0x46fc73
    return result;
}

// Address range: 0x46fcc1 - 0x46fcc8
int64_t function_46fcc1(void) {
    // 0x46fcc1
    int64_t v1; // 0x46fcc1
    return function_46fd31(v1, v1, v1, v1);
}

// Address range: 0x46fccc - 0x46fd19
int64_t function_46fccc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46fccc
    int64_t v1; // 0x46fccc
    uint32_t v2 = *(int32_t *)(a1 - 4 + a4) + (int32_t)v1; // 0x46fccf
    int64_t v3 = v2; // 0x46fccf
    char * v4 = (char *)(v3 + 80); // 0x46fcd3
    char v5 = *v4 & (char)v2; // 0x46fcd3
    *v4 = v5;
    int64_t v6 = v3; // 0x46fcd6
    if (v5 >= 0 == (v5 != 0)) {
        v6 = function_46fc73();
    }
    int64_t v7 = (int64_t)(*(int32_t *)(v1 - 60) ^ (int32_t)v1); // 0x46fccc
    char v8 = v6 / 256;
    *(char *)v6 = v8;
    int64_t * v9 = (int64_t *)v7;
    char v10 = v8; // 0x46fcdb
    int64_t v11 = a4; // 0x46fcdb
    int64_t v12 = a3; // 0x46fcdb
    int64_t v13 = v6; // 0x46fcdb
    if (v5 < 0) {
        // 0x46fcde
        v11 = *v9;
        v12 = (int32_t)v6 >> 31;
        *v9 = a2;
        uint64_t v14 = v6 & 0xff00 & 256 * v12; // 0x46fce4
        v10 = v14 / 256;
        v13 = v6 & -0x10000 | v14 | 60;
    }
    unsigned char v15 = v10;
    char * v16 = (char *)(v1 - 88); // 0x46fceb
    *v16 = *v16 + (char)v12;
    int32_t v17 = v13; // 0x46fcf1
    __asm_out((int16_t)(v12 | 256 * v1), v17);
    *(int32_t *)-0x3fa3d459a9cafc07 = v17;
    int32_t * v18 = (int32_t *)(v11 - 0x2effca5f); // 0x46fd00
    *v18 = *v18 ^ (int32_t)*v9;
    int64_t * v19 = (int64_t *)(v7 + 8); // 0x46fd0b
    uint32_t v20 = *(int32_t *)v13; // 0x46fd0c
    int64_t v21 = v7 + 16 + 2 * *v19; // 0x46fd0e
    unsigned char v22 = __readgsbyte(v21); // 0x46fd0e
    char v23 = v20 > -1 - (int32_t)v1; // 0x46fd0e
    unsigned char v24 = v22 + v15; // 0x46fd0e
    char v25 = v24 + v23; // 0x46fd0e
    char v26 = v25 + v23; // 0x46fd0e
    unsigned char v27 = llvm_ctpop_i8(v25); // 0x46fd0e
    bool v28 = v20 > -1 - (int32_t)v1 ? v25 <= v22 : v24 < v22; // 0x46fd0e
    __writegsbyte(v21, v25);
    bool v29; // 0x46fccc
    *v19 = 0x4000 * (int64_t)v29 | 1024 * (int64_t)v29 | 512 * (int64_t)v29 | 256 * (int64_t)v29 | (int64_t)v28 | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 16 * (int64_t)(v22 % 16 + v15 % 16 + v23 > 15) | 4 * (int64_t)(v27 % 2 == 0) | 2048 * (int64_t)(((v26 ^ v22) & (v26 ^ v15)) < 0) | 2;
    return v11 + 0xffffffff & 0xffffffff;
}

// Address range: 0x46fd21 - 0x46fd30
int64_t function_46fd21(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x46fd21
    int64_t result; // 0x46fd21
    *(int32_t *)0x3994141a0e9f5000 = (int32_t)result;
    *(char *)a2 = (char)result - (char)a6;
    return result;
}

// Address range: 0x46fd31 - 0x46fd71
int64_t function_46fd31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 + 25); // 0x46fd31
    int64_t result; // 0x46fd31
    char * v2 = (char *)((int64_t)(v1 & (int32_t)result) - 37); // 0x46fd34
    *v2 = *v2 & (char)a4;
    return result;
}

// Address range: 0x46fd71 - 0x46fe3d
int64_t function_46fd71(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x46fd71
    int64_t result; // 0x46fd71
    bool v1; // 0x46fd71
    if ((char)(a4 / 256) + (char)a3 + (char)v1 < 0) {
        // 0x46fd75
        return result;
    }
    uint32_t result2 = (int32_t)result - 0x269c245e; // 0x46fde7
    if (llvm_ctpop_i8((char)result2) % 2 == 0) {
        // 0x46fdc2
        return result2;
    }
    // 0x46fdee
    return __asm_int3();
}

// Address range: 0x46fe48 - 0x46fe4a
int64_t function_46fe48(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46fe48
    int64_t result; // 0x46fe48
    return result;
}

// Address range: 0x46fe4a - 0x46fe56
int64_t function_46fe4a(void) {
    // 0x46fe4a
    return 0x10000 * (int32_t)__asm_int3() >> 16;
}

// Address range: 0x46febd - 0x46fec0
int64_t function_46febd(void) {
    // 0x46febd
    int64_t result; // 0x46febd
    return result;
}

// Address range: 0x46ff1e - 0x46ff1f
int64_t function_46ff1e(void) {
    // 0x46ff1e
    int64_t result; // 0x46ff1e
    return result;
}

// Address range: 0x46ff2f - 0x46ff34
int64_t function_46ff2f(int64_t a1) {
    // 0x46ff2f
    int64_t result; // 0x46ff2f
    return result;
}

// Address range: 0x46ff66 - 0x46ff69
int64_t function_46ff66(void) {
    // 0x46ff66
    int64_t result; // 0x46ff66
    return result;
}

// Address range: 0x46ff6c - 0x46ff75
int64_t function_46ff6c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x46ff6c
    int64_t v1; // 0x46ff6c
    bool v2; // 0x46ff6c
    return v1 + 0xdf3ef44c + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x46ffcd - 0x46ffd5
int64_t function_46ffcd(void) {
    // 0x46ffcd
    int64_t v1; // 0x46ffcd
    int64_t v2 = v1;
    bool v3; // 0x46ffcd
    return ((v2 - (v3 ? 61 : 60)) % 256 | v2 & 0xffffff00) + 0xd84de16f & 0xffffffff;
}

// Address range: 0x470021 - 0x4700be
int64_t function_470021(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    uint32_t v1 = (int32_t)a2; // 0x470022
    uint32_t v2 = *(int32_t *)(a3 - 11 + 4 * a3) + v1; // 0x470022
    bool v3; // 0x470021
    uint32_t v4 = v2 + (int32_t)v3; // 0x470022
    char * v5 = (char *)(int64_t)v4; // 0x470026
    *v5 = *v5 - 43 + (char)(v3 ? v4 <= v1 : v2 < v1);
    int64_t v6; // 0x470021
    char v7 = (char)v6 & 24; // 0x47002a
    *(char *)(8 * a5 - 48 + v6) = (char)v6;
    __asm_out_136(117, v7);
    if (v7 == 0) {
        // 0x4700b5
        return 0xa64389fa;
    }
    // 0x47003f
    *(int32_t *)(a1 + 79) = 0x156cb267;
    return function_ffffffffa8ed27fd();
}
