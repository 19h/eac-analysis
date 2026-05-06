/*
 * Targeted RetDec C for native executable gap queue batch 931.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1377a4-0x1379a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1379a4-0x137ba4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x137ba4-0x137da4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x178eaa-0x1790aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1790aa-0x1792aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1792aa-0x1794aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1794aa-0x1796aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1796aa-0x1798aa rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1377a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_137830(void);
int64_t function_137864(void);
int64_t function_13786b(int64_t a1, int64_t a2);
int64_t function_137876(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13789e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_13790d(void);
int64_t function_13791a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13793f(int64_t a1);
int64_t function_137948(void);
int64_t function_137950(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1379c6(void);
int64_t function_137a21(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_137a23(void);
int64_t function_137a26(void);
int64_t function_137b2d(void);
int64_t function_137b52(void);
int64_t function_137b55(void);
int64_t function_137b56(int64_t a1, int64_t a2, int64_t a3);
int64_t function_137b7c(int64_t a1);
int64_t function_137b98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_137bbd(void);
int64_t function_137bfb(void);
int64_t function_137c1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_137c54(void);
int64_t function_137ca0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_137d51(void);
int64_t function_178eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_178ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_178f2c(void);
int64_t function_178f96(int64_t a1, int64_t a2);
int64_t function_178fc5(void);
int64_t function_17900e(int64_t a1, int64_t a2);
int64_t function_17906b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1790a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17914d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_179193(void);
int64_t function_1791af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1791c1(int64_t a1);
int64_t function_1791c2(int64_t a1);
int64_t function_179211(int64_t a1);
int64_t function_17922a(int64_t a1);
int64_t function_17922d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t a5);
int64_t function_179321(int64_t a1, int64_t a2, int64_t a3);
int64_t function_179333(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17939a(void);
int64_t function_1793a3(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t function_1793b0(int64_t a1, int64_t a2);
int64_t function_1793bc(int64_t a1, int64_t a2, uint32_t a3);
int64_t function_179401(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_179488(void);
int64_t function_179556(void);
int64_t function_179592(void);
int64_t function_1795af(void);
int64_t function_1795cd(int64_t a1, int64_t a2);
int64_t function_179623(int64_t a1);
int64_t function_17962c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_179636(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_179657(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1796b4(void);
int64_t function_17973b(void);
int64_t function_17973d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17974f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1797c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17982c(void);
int64_t function_179874(int64_t a1);
int64_t function_1a8362();
int64_t function_21247e09();
int64_t function_2e67918e();
int64_t function_7e18d467();
int64_t function_ffffffffaac69ceb();
int64_t function_ffffffffc362e766();
int64_t unknown_1a1e3025();
int64_t unknown_1b90b3b7();
int64_t unknown_275d2c4();
int64_t unknown_393ea530();
int64_t unknown_3a146a4a();
int64_t unknown_3a24df30();
int64_t unknown_3d1978ab();
int64_t unknown_3ddef2bb();
int64_t unknown_3fc5c4b7();
int64_t unknown_441864c6();
int64_t unknown_47602af0();
int64_t unknown_476cc38d();
int64_t unknown_6194df4e();
int64_t unknown_ffffffff82197c41();
int64_t unknown_ffffffff840e75a6();
int64_t unknown_ffffffff860de4c2();
int64_t unknown_ffffffff97127354();
int64_t unknown_ffffffffa50dc8ab();
int64_t unknown_ffffffffb3588547();
int64_t unknown_ffffffffc70911b8();
int64_t unknown_ffffffffe905e2c0();

// Address range: 0x1377a4 - 0x1377f8
int64_t function_1377a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1377a4
    int64_t v1; // 0x1377a4
    if (a4 == 1) {
        int64_t result = unknown_47602af0(); // 0x1377ea
        int32_t * v2 = (int32_t *)(a1 + 0x1e88a64); // 0x1377ef
        *v2 = *v2 + (int32_t)v1;
        return result;
    }
    // 0x1377ab
    bool v3; // 0x1377a4
    int64_t v4 = v3 ? -1 : 1; // 0x1377b0
    int64_t v5 = v4 + a1; // 0x1377b0
    int64_t v6 = v4 + a2; // 0x1377b0
    unknown_1b90b3b7(v5, v6);
    int32_t * v7 = (int32_t *)(v1 - 114); // 0x1377be
    *v7 = *v7 ^ (int32_t)v6;
    *(int32_t *)v5 = *(int32_t *)v6;
    int64_t v8 = v3 ? 0x3ffffffffffffffc : 4; // 0x1377d0
    int64_t v9; // bp-8, 0x1377a4
    int32_t * v10 = (int32_t *)(4 * (v5 + v8) - 0x38646665 + (int64_t)&v9); // 0x1377d3
    *v10 = *v10 + (int32_t)v1;
    return 0x1e8da2a1ea74388;
}

// Address range: 0x137830 - 0x137836
int64_t function_137830(void) {
    // 0x137830
    int64_t v1; // 0x137830
    bool v2; // 0x137830
    return v1 + 0x3c008000 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x137864 - 0x137865
int64_t function_137864(void) {
    // 0x137864
    int64_t result; // 0x137864
    return result;
}

// Address range: 0x13786b - 0x137875
int64_t function_13786b(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t result; // 0x13786b
    *(char *)result = 0;
    *(int32_t *)v1 = *(int32_t *)&v1 & 0x7987f20;
    return result;
}

// Address range: 0x137876 - 0x13789e
int64_t function_137876(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x137876
    int16_t v1; // 0x137876
    uint16_t result = v1;
    bool v2; // 0x137876
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x13787e
    __asm_int3(v3, a4);
    int64_t v4 = unknown_476cc38d(); // 0x137887
    int16_t v5 = a3; // 0x13788f
    __asm_outsb(v5, *(char *)(2 * a4 & 0xfffffffe));
    char v6 = __asm_in(v5); // 0x137890
    *(int32_t *)(v4 & 0xffffffff) = (int32_t)(v3 & 0xffffff00 | (int64_t)v6);
    *(int32_t *)0x2e4d3128 = *(int32_t *)0x2e4d3128 + (int32_t)result;
    return result;
}

// Address range: 0x13789e - 0x1378ba
int64_t function_13789e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x13789e
    unknown_ffffffffa50dc8ab();
    int64_t v1; // 0x13789e
    if (a4 != 1 && (char)((uint64_t)v1 / 256) != -(char)(a3 / 256)) {
        function_137864();
    }
    // 0x1378ac
    *(int64_t *)0xa38daa00 = a2;
    return unknown_ffffffffc70911b8();
}

// Address range: 0x13790d - 0x13790e
int64_t function_13790d(void) {
    // 0x13790d
    int64_t result; // 0x13790d
    return result;
}

// Address range: 0x13791a - 0x137928
int64_t function_13791a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13791a
    bool v1; // 0x13791a
    if (v1) {
        function_13790d();
    }
    // 0x137923
    return function_1a8362();
}

// Address range: 0x13793f - 0x137942
int64_t function_13793f(int64_t a1) {
    // 0x13793f
    int64_t v1; // 0x13793f
    return v1 | 252;
}

// Address range: 0x137948 - 0x137950
int64_t function_137948(void) {
    // 0x137948
    return unknown_6194df4e();
}

// Address range: 0x137950 - 0x1379c1
int64_t function_137950(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a1 + 7); // 0x137950
    int64_t result; // 0x137950
    *v1 = *v1 + (int32_t)result;
    if ((*(char *)(a4 + 0x47a43629) & (char)a3) >= 1) {
        // 0x13795c
        return result;
    }
    char * v2 = (char *)(result - 25); // 0x1379ad
    *v2 = *v2 + (char)(result / 256);
    return unknown_3a146a4a();
}

// Address range: 0x1379c6 - 0x1379ca
int64_t function_1379c6(void) {
    // 0x1379c6
    return function_137a23();
}

// Address range: 0x137a21 - 0x137a23
int64_t function_137a21(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x137a21
    int64_t v1; // 0x137a21
    int64_t v2 = v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x137a23 - 0x137a25
int64_t function_137a23(void) {
    // 0x137a23
    int64_t v1; // 0x137a23
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x137a26 - 0x137a29
int64_t function_137a26(void) {
    // 0x137a26
    int64_t result; // 0x137a26
    return result;
}

// Address range: 0x137b2d - 0x137b30
int64_t function_137b2d(void) {
    // 0x137b2d
    int64_t result; // 0x137b2d
    return result;
}

// Address range: 0x137b52 - 0x137b54
int64_t function_137b52(void) {
    // 0x137b52
    int64_t v1; // 0x137b52
    return function_137b56(v1, v1, v1);
}

// Address range: 0x137b55 - 0x137b56
int64_t function_137b55(void) {
    // 0x137b55
    int64_t v1; // 0x137b55
    bool v2; // 0x137b55
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x137b56 - 0x137b6a
int64_t function_137b56(int64_t a1, int64_t a2, int64_t a3) {
    // 0x137b56
    int64_t result; // 0x137b56
    *(int32_t *)(result + 0x180760c8) = 0x60410000;
    char v1 = *(char *)0x33277a67; // 0x137b60
    *(char *)0x33277a67 = v1 + (char)((uint64_t)result / 256);
    __asm_int(74);
    return result;
}

// Address range: 0x137b7c - 0x137b7f
int64_t function_137b7c(int64_t a1) {
    // 0x137b7c
    int64_t result; // 0x137b7c
    return result;
}

// Address range: 0x137b98 - 0x137bb2
int64_t function_137b98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x137b98
    *(int32_t *)0x564c347c = *(int32_t *)0x564c347c - 24;
    int32_t * v1 = (int32_t *)(a4 + 0x1f9b1a99); // 0x137ba1
    *v1 = *v1 + (int32_t)a2;
    *(int32_t *)0x781563b3 = *(int32_t *)0x781563b3 + (int32_t)a1;
    int64_t result; // 0x137b98
    return result;
}

// Address range: 0x137bbd - 0x137bbe
int64_t function_137bbd(void) {
    // 0x137bbd
    int64_t result; // 0x137bbd
    return result;
}

// Address range: 0x137bfb - 0x137bfd
int64_t function_137bfb(void) {
    // 0x137bfb
    return function_137bbd();
}

// Address range: 0x137c1d - 0x137c32
int64_t function_137c1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x137c1d
    int64_t v1; // 0x137c1d
    int64_t v2 = v1 & 0xffffffff; // 0x137c1d
    unknown_1a1e3025(v2, a1 & 0xffffffff);
    *(int32_t *)a4 = 2 * (int32_t)v1;
    *(int32_t *)v2 = __asm_insd((int16_t)a3);
    return unknown_3a24df30();
}

// Address range: 0x137c54 - 0x137c55
int64_t function_137c54(void) {
    // 0x137c54
    int64_t result; // 0x137c54
    return result;
}

// Address range: 0x137ca0 - 0x137d27
int64_t function_137ca0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff840e75a6(); // 0x137ca0
    bool v2; // 0x137ca0
    if (!v2) {
        // 0x137ce1
        int64_t v3; // 0x137ca0
        char * v4 = (char *)(v3 - 0x1762cbde); // 0x137ce8
        unsigned char v5 = *v4; // 0x137ce8
        *v4 = v5 / 2 | 128 * v5;
        int32_t * v6 = (int32_t *)(a4 + 0x27446021); // 0x137cee
        *v6 = (int32_t)v1 + (int32_t)v2 + *(int32_t *)v1 + *v6;
        int32_t * v7 = (int32_t *)(a4 + 65); // 0x137cfd
        *v7 = *v7 + (int32_t)v3;
        return 0x59ac130a;
    }
    char v8 = *(char *)(v1 + 0x25625c17); // 0x137ca7
    int64_t v9 = 256 * (int64_t)(v8 + (char)(a3 / 256)) | a3 & -0xff01; // 0x137ca7
    int16_t v10 = v9; // 0x137cae
    __asm_outsb(v10, *(char *)((v2 ? -4 : 4) + a2));
    __asm_fbld(*(float80_t *)v9);
    int64_t v11 = unknown_3fc5c4b7(); // 0x137cb1
    int32_t * v12 = (int32_t *)(v11 + 5); // 0x137cb6
    int32_t v13 = *v12; // 0x137cb6
    int32_t v14 = v11; // 0x137cb6
    int32_t v15 = v13 + v14; // 0x137cb6
    *v12 = v15;
    *(char *)a1 = __asm_insb(v10);
    if (v15 < 0 == ((v15 ^ v13) & (v15 ^ v14)) < 0 == (v15 != 0)) {
        char * v16 = (char *)v11; // 0x137d24
        unsigned char v17 = *v16; // 0x137d24
        *v16 = v17 / 128 | 2 * v17;
        return v11 & -256 | (int64_t)__asm_in(v10);
    }
    // 0x137cbc
    __asm_out_133(-50, v14);
    if (v15 <= 0) {
        function_137c54();
    }
    // 0x137cc0
    return unknown_441864c6();
}

// Address range: 0x137d51 - 0x137d56
int64_t function_137d51(void) {
    // 0x137d51
    return function_21247e09();
}

// Address range: 0x178eaa - 0x178ecf
int64_t function_178eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x178eaa
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x178eaa
    *(char *)a3 = *(char *)&v1 + (char)a4;
    int64_t v2; // 0x178eaa
    int32_t * v3 = (int32_t *)(v2 + 35 + unknown_3ddef2bb() & 0xffffffff); // 0x178ebc
    uint32_t v4 = *v3; // 0x178ebc
    uint32_t v5 = v4 + (int32_t)a3; // 0x178ebc
    *v3 = v5;
    int64_t result = unknown_275d2c4(); // 0x178ebe
    int32_t * v6 = (int32_t *)(v2 - 57); // 0x178ec3
    *v6 = (int32_t)(v5 < v4) - (int32_t)a1 + *v6;
    return result;
}

// Address range: 0x178ed0 - 0x178ede
int64_t function_178ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x178ed0
    int64_t v1; // 0x178ed0
    return 0x9840013d * v1 & 0xffffffff;
}

// Address range: 0x178f2c - 0x178f39
int64_t function_178f2c(void) {
    char v1 = *(char *)0x6fb06635; // 0x178f2d
    int64_t v2; // 0x178f2c
    *(char *)0x6fb06635 = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffffc362e766();
}

// Address range: 0x178f96 - 0x178f9c
int64_t function_178f96(int64_t a1, int64_t a2) {
    // 0x178f96
    int64_t result; // 0x178f96
    *(char *)a1 = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x178fc5 - 0x178fca
int64_t function_178fc5(void) {
    // 0x178fc5
    int64_t v1; // 0x178fc5
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x17900e - 0x179010
int64_t function_17900e(int64_t a1, int64_t a2) {
    // 0x17900e
    int64_t result; // 0x17900e
    return result;
}

// Address range: 0x17906b - 0x1790a0
int64_t function_17906b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    __asm_int(10);
    uint32_t v2 = (int32_t)a4; // 0x17906f
    uint32_t v3 = v2 % 32; // 0x17906f
    v1 = a3;
    int64_t v4; // 0x17906b
    if (v3 != 0) {
        uint32_t v5 = (int32_t)v4;
        *(int32_t *)v4 = v5 >> 32 - v3 | v5 << v3;
    }
    int64_t result = v4 & 0xffffffff; // 0x17906d
    char * v6 = (char *)(result + 0x61013d22); // 0x179071
    char v7 = *v6 - (char)v1; // 0x179071
    *v6 = v7;
    if (v7 == 0) {
        // 0x17909f
        return result;
    }
    int32_t * v8 = (int32_t *)(v4 + 0x300013a6); // 0x17907e
    *v8 = *v8 + v2;
    *(char *)v1 = *(char *)&v1 - (char)(v4 / 256);
    return v4 & -256;
}

// Address range: 0x1790a1 - 0x1790c1
int64_t function_1790a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(unknown_3d1978ab() + 0x7ad9aa40); // 0x1790aa
    int64_t v2; // 0x1790a1
    *v1 = *v1 + (int32_t)v2;
    __asm_hlt();
    return function_ffffffffaac69ceb();
}

// Address range: 0x17914d - 0x179167
int64_t function_17914d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17914d
    int64_t v1; // 0x17914d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 0x17b73f + 8 * v2); // 0x17914f
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x17914d
    *(char *)v4 = *(char *)&v4 + 112;
    int64_t v5; // 0x17914d
    *(int32_t *)a1 = *(int32_t *)&v5;
    char * v6 = (char *)(v1 - 0x6bff6700); // 0x17915f
    *v6 = *v6 + (char)(v1 / 256);
    return v4 + 0x1e80002 & 0xffffffff;
}

// Address range: 0x179193 - 0x179194
int64_t function_179193(void) {
    // 0x179193
    int64_t result; // 0x179193
    return result;
}

// Address range: 0x1791af - 0x1791c1
int64_t function_1791af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1791af
    unknown_ffffffffe905e2c0();
    return function_179193();
}

// Address range: 0x1791c1 - 0x1791c2
int64_t function_1791c1(int64_t a1) {
    // 0x1791c1
    int64_t result; // 0x1791c1
    return result;
}

// Address range: 0x1791c2 - 0x1791c6
int64_t function_1791c2(int64_t a1) {
    // 0x1791c2
    int64_t result; // 0x1791c2
    char * v1 = (char *)(result - 36); // 0x1791c2
    *v1 = *v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x179211 - 0x179214
int64_t function_179211(int64_t a1) {
    // 0x179211
    int64_t result; // 0x179211
    return result;
}

// Address range: 0x17922a - 0x17922d
int64_t function_17922a(int64_t a1) {
    // 0x17922a
    int64_t result; // 0x17922a
    return result;
}

// Address range: 0x17922d - 0x17931b
int64_t function_17922d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t a5) {
    // 0x17922d
    int64_t v1; // 0x17922d
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    int32_t v5 = a5;
    bool v6; // 0x17922d
    uint64_t v7 = 256 * ((int64_t)v6 - v2) + v2;
    int64_t v8 = v7 & 0xff00 | v2 & -0xff01; // 0x17922d
    int64_t v9 = v1 | v1;
    int32_t * v10 = (int32_t *)(v1 - 75); // 0x179231
    *v10 = *v10 + (int32_t)v9;
    *(int32_t *)((v9 & 0xffffffff) + 46) = (int32_t)(int64_t)&v5;
    unsigned char v11 = *(char *)(v1 - 114); // 0x179237
    unsigned char v12 = (char)(a4 / 256); // 0x179237
    char v13 = v11 - v12; // 0x179237
    unsigned char v14 = llvm_ctpop_i8(v13); // 0x179237
    __asm_int1();
    int32_t v15 = v5; // 0x17923f
    v5 = 0x4000 * (int32_t)v6 | 1024 * (int32_t)v6 | 512 * (int32_t)v6 | 256 * (int32_t)v6 | (int32_t)(v11 < v12) | 64 * (int32_t)(v13 == 0) | 128 * (int32_t)(v13 < 0) | 16 * (int32_t)(v11 % 16 - v12 % 16 > 15) | 4 * (int32_t)(v14 % 2 == 0) | 2048 * (int32_t)(((v13 ^ v11) & (v11 ^ v12)) < 0) | 2;
    unknown_ffffffffb3588547();
    char * v16 = (char *)v8; // 0x179246
    char v17 = v7 / 256; // 0x179246
    *v16 = *v16 + v17;
    *(int32_t *)v4 = *(int32_t *)&v4 ^ 0x709d803;
    int64_t v18 = unknown_ffffffff97127354(); // 0x17924e
    *(char *)-0x17e685a6 = v17;
    int32_t * v19 = (int32_t *)(v3 + 0x15b1083); // 0x179259
    *v19 = *v19 + (int32_t)a4;
    int32_t * v20 = (int32_t *)(v3 + a4); // 0x17925f
    *v20 = *v20 ^ (int32_t)v4;
    int64_t v21 = v4;
    int64_t v22 = v21 & 0xffffffff; // 0x179262
    v4 = v22;
    if ((int32_t)v21 != 0) {
        uint32_t v23 = *(int32_t *)v22; // 0x1792a2
        char v24 = *(char *)-0x4ccd00ff; // 0x1792a4
        *(char *)-0x4ccd00ff = v24 + (char)v2 + (char)(v23 > (int32_t)v18);
        return v18 + 0xffffffff & 0xffffffff;
    }
    int64_t v25 = v15; // 0x17923f
    *(char *)0x602ef205 = *(char *)0x602ef205 + v17;
    int32_t v26 = v18; // 0x17926f
    *(int32_t *)-0x34f9bf1e85fffec3 = v26;
    int32_t * v27 = (int32_t *)(a4 + 18); // 0x179278
    *v27 = *v27 ^ (int32_t)v8;
    *(char *)v25 = (char)a4;
    __asm_outsb((int16_t)v15, *(char *)&v3);
    return (int64_t)(*(int32_t *)v25 & v26);
}

// Address range: 0x179321 - 0x179333
int64_t function_179321(int64_t a1, int64_t a2, int64_t a3) {
    // 0x179321
    unknown_393ea530(a1, a2, a3);
    int64_t v1; // 0x179321
    return function_1793a3(a1, a2, (int32_t)(v1 ^ a3), v1);
}

// Address range: 0x179333 - 0x17936e
int64_t function_179333(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 75); // 0x179338
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x179333
    *(int32_t *)a1 = (int32_t)v2 - 0x17a0f4e1;
    bool v3; // 0x179333
    int64_t v4 = v3 ? -4 : 4; // 0x17933b
    int64_t v5 = v4 + a1; // 0x17933b
    *(int32_t *)v5 = *(int32_t *)(int32_t *)&g2;
    int64_t v6 = v4 + a2; // 0x17933c
    int64_t v7 = unknown_ffffffff82197c41(v5 + v4, v6); // 0x17933e
    char v8 = *(char *)(v7 + 34); // 0x179345
    char v9 = *(char *)-0x100b6ac9; // 0x179349
    *(char *)-0x100b6ac9 = v9 | (char)((uint64_t)v2 / 256);
    int32_t v10 = (int32_t)(v7 & 0xffffff00 | (int64_t)(v8 + (char)v7)) + (int32_t)a4; // 0x179353
    int32_t * v11 = (int32_t *)((int64_t)v10 - 0x55aa05e0); // 0x17935b
    *v11 = *v11 & 0x658e01e8;
    return function_1793bc(a4, v6, v10 >> 31);
}

// Address range: 0x17939a - 0x17939b
int64_t function_17939a(void) {
    // 0x17939a
    int64_t result; // 0x17939a
    return result;
}

// Address range: 0x1793a3 - 0x1793ad
int64_t function_1793a3(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x1793a3
    int64_t v1; // 0x1793a3
    uint64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | v1);
    unsigned char v3 = (char)(v2 / 256); // 0x1793a5
    unsigned char v4 = v3 + (char)a4; // 0x1793a5
    int32_t * v5 = (int32_t *)(v1 - 0x5571f0a); // 0x1793a7
    *v5 = *v5 + (int32_t)v1 + (int32_t)(v4 < v3);
    return 256 * (int64_t)v4 | v2 & -0xff01;
}

// Address range: 0x1793b0 - 0x1793b6
int64_t function_1793b0(int64_t a1, int64_t a2) {
    // 0x1793b0
    int64_t result; // 0x1793b0
    int32_t * v1 = (int32_t *)(result + 57); // 0x1793b0
    *v1 = *v1 + (int32_t)a1;
    __asm_out_135((char)a1, (char)a2);
    return result;
}

// Address range: 0x1793bc - 0x1793d9
int64_t function_1793bc(int64_t a1, int64_t a2, uint32_t a3) {
    // 0x1793bc
    bool v1; // 0x1793bc
    return (int32_t)((int64_t)(bool)v1 + (int64_t)a3 + unknown_ffffffff860de4c2() / 256) % 256 | a3 & -256;
}

// Address range: 0x179401 - 0x179484
int64_t function_179401(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x179401
    int64_t result; // 0x179401
    int64_t v1 = result;
    int64_t v2 = a4;
    bool v3; // 0x179401
    if (!v3) {
        // 0x17947e
        return result;
    }
    int32_t * v4 = (int32_t *)(result + 6); // 0x179437
    *v4 = *v4 + (int32_t)result;
    return a3 & 0xffffffff;
    int32_t * v5 = (int32_t *)(v1 + 0x3601e896 + 4 * v1); // 0x179405
    *v5 = (int32_t)v3 - (int32_t)result + *v5;
    int64_t v6; // 0x179401
    *(int32_t *)v6 = *(int32_t *)&v6 + (int32_t)v2;
    uint32_t v7 = (int32_t)v6;
    uint32_t v8 = 2 * v7; // 0x17940e
    int32_t v9 = *(int32_t *)&v2; // 0x179417
    *(int32_t *)v2 = (int32_t)v1 - 0x14725351 + v9 + v8 + (int32_t)(v8 < v7);
    return __asm_int1() & -256 | (int64_t)*(char *)0x45a57eaaa57d4c08;
}

// Address range: 0x179488 - 0x179489
int64_t function_179488(void) {
    // 0x179488
    int64_t result; // 0x179488
    return result;
}

// Address range: 0x179556 - 0x179557
int64_t function_179556(void) {
    // 0x179556
    int64_t result; // 0x179556
    return result;
}

// Address range: 0x179592 - 0x179593
int64_t function_179592(void) {
    // 0x179592
    int64_t result; // 0x179592
    return result;
}

// Address range: 0x1795af - 0x1795b0
int64_t function_1795af(void) {
    // 0x1795af
    int64_t result; // 0x1795af
    return result;
}

// Address range: 0x1795cd - 0x1795f3
int64_t function_1795cd(int64_t a1, int64_t a2) {
    // 0x1795cd
    int64_t v1; // 0x1795cd
    if ((v1 & 0x25ce7df4) != 0) {
        function_179556();
    }
    // 0x1795d6
    bool v2; // 0x1795cd
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x1795d6
    char v4 = *(char *)-0x1999fe1d; // 0x1795dc
    *(char *)-0x1999fe1d = v4 + (char)((uint64_t)v1 / 256);
    *(int32_t *)(v3 + 17) = (int32_t)v3;
    function_179592();
    return function_2e67918e();
}

// Address range: 0x179623 - 0x17962c
int64_t function_179623(int64_t a1) {
    // 0x179623
    int64_t v1; // 0x179623
    uint64_t result = v1;
    char * v2 = (char *)(a1 + 0x6508eaea); // 0x179623
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x17962c - 0x179636
int64_t function_17962c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17962c
    int64_t v1; // 0x17962c
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x179636 - 0x179651
int64_t function_179636(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)a4; // 0x17964c
    *v1 = *v1 | 61;
    return (a4 + 123) % 256 | a4 & -256;
}

// Address range: 0x179657 - 0x17968a
int64_t function_179657(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x179657
    int64_t v1; // 0x179657
    *(int32_t *)0x3d000199c8001800 = (int32_t)v1;
    int64_t result = __asm_int1(); // 0x17966d
    char * v2 = (char *)(result - 0xf621bfd); // 0x17966e
    *v2 = *v2 - (char)result;
    char * v3 = (char *)(a3 + 0x7472ec7); // 0x179675
    char v4 = (char)(0xd0f367a * *(int32_t *)(v1 - 22) / 256); // 0x179675
    *v3 = *v3 | v4;
    *(char *)-0x3b2f117e = *(char *)-0x3b2f117e + v4;
    return result;
}

// Address range: 0x1796b4 - 0x179726
int64_t function_1796b4(void) {
    // 0x1796b4
    int64_t result; // 0x1796b4
    return result;
}

// Address range: 0x17973b - 0x17973c
int64_t function_17973b(void) {
    // 0x17973b
    int64_t result; // 0x17973b
    return result;
}

// Address range: 0x17973d - 0x17974f
int64_t function_17973d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17973d
    int64_t v1; // 0x17973d
    *(char *)a1 = (char)v1;
    bool v2; // 0x17973d
    int64_t v3 = v2 ? -1 : 1; // 0x17973d
    int32_t * v4 = (int32_t *)(v1 - 0x46f79fa8); // 0x17973e
    *v4 = (int32_t)(v3 + a2);
    char * v5 = (char *)(a4 + 108 + 4 * v1); // 0x179744
    *v5 = *v5 & (char)a4;
    return function_7e18d467(v3 + a1, *v4);
}

// Address range: 0x17974f - 0x1797b1
int64_t function_17974f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x17974f
    int32_t * v3 = (int32_t *)(v2 - 27); // 0x179752
    *v3 = *v3 - (int32_t)v2;
    *(char *)a3 = (char)(a4 / 256);
    int64_t v4; // 0x17974f
    uint32_t v5 = *(int32_t *)&v4; // 0x179759
    int64_t result = v5; // 0x179759
    bool v6; // 0x17974f
    int64_t v7 = (v6 ? -4 : 4) + a2; // 0x179759
    v4 = v7;
    __asm_int(-10);
    char * v8 = (char *)(a3 - 53); // 0x179760
    unsigned char v9 = *v8; // 0x179760
    unsigned char v10 = v9 + (char)v5; // 0x179760
    *v8 = v10;
    int32_t v11 = *(int32_t *)-0x55e72b97; // 0x179763
    int32_t v12 = v2; // 0x179763
    *(int32_t *)-0x55e72b97 = v11 + v12 + (int32_t)(v10 < v9);
    char * v13 = (char *)(v7 + 0x600068a8); // 0x17976a
    *v13 = *v13 + (char)v2;
    *(char *)result = *(char *)&v4 | *(char *)&v1;
    __asm_outsb((int16_t)a3, *(char *)v7);
    int32_t * v14 = (int32_t *)(result + 34); // 0x1797ae
    *v14 = *v14 + v12;
    return result;
}

// Address range: 0x1797c5 - 0x1797d2
int64_t function_1797c5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1797c5
    return 0x713fd78f;
}

// Address range: 0x17982c - 0x17982e
int64_t function_17982c(void) {
    // 0x17982c
    int64_t result; // 0x17982c
    return result;
}

// Address range: 0x179874 - 0x179877
int64_t function_179874(int64_t a1) {
    // 0x179874
    int64_t result; // 0x179874
    return result;
}
