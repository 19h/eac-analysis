/*
 * Targeted RetDec C for native executable gap queue batch 674.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x20799e-0x207b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x207b9e-0x207d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x207d9e-0x207f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x406fe5-0x4071e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4071e5-0x4073e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4073e5-0x4075e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4075e5-0x4077e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4077e5-0x4079e5 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_20799e(void);
int64_t function_20799f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2079b6(int64_t a1);
int64_t function_2079c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_207a07(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_207b1d(void);
int64_t function_207b25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_207bda(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_207c16(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_207c6d(void);
int64_t function_207c98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_207cb8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_207d1a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_207d90(int64_t a1);
int64_t function_207d96(void);
int64_t function_207d9d(void);
int64_t function_207df1(int64_t a1);
int64_t function_207dfe(void);
int64_t function_207e04(void);
int64_t function_207e4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_207f1c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2e7fbc0a();
int64_t function_406fe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_406ff7(int64_t a1);
int64_t function_407039(int64_t a1, int64_t a2, int64_t a3);
int64_t function_407049(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4070c9(void);
int64_t function_407153(int64_t a1);
int64_t function_4071ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4071ee(void);
int64_t function_407202(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4072d1(void);
int64_t function_407386(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4073a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40744f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40751e(int64_t a1);
int64_t function_407536(int64_t a1, int64_t a2);
int64_t function_40754f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40756a(void);
int64_t function_4075b4(int64_t a1);
int64_t function_407628(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_407653(int64_t a1, int64_t a2, int64_t a3);
int64_t function_407659(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4076a9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4077de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_407825(void);
int64_t function_407861(void);
int64_t function_407875(void);
int64_t function_40789e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_407967(void);
int64_t function_407992(void);
int64_t function_57aad7a2();
int64_t function_d1b83c4();
int64_t function_ffffffff9439afd1();
int64_t function_ffffffff96df8ff6();
int64_t function_ffffffffe356b5b7();
int64_t unknown_3f3f5cf5();
int64_t unknown_65fc653();
int64_t unknown_74270d23();
int64_t unknown_7a3c7d23();
int64_t unknown_7aeee424();
int64_t unknown_ffffffffa870f259();
int64_t unknown_ffffffffba16e739();
int64_t unknown_ffffffffc8766c85();
int64_t unknown_ffffffffcb5d2f6e();
int64_t unknown_ffffffffd3dfa824();
int64_t unknown_ffffffffeca1d5a5();

// Address range: 0x20799e - 0x20799f
int64_t function_20799e(void) {
    // 0x20799e
    int64_t result; // 0x20799e
    return result;
}

// Address range: 0x20799f - 0x2079aa
int64_t function_20799f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20799f
    int64_t v1; // 0x20799f
    __asm_out((int16_t)a3, (char)v1 - 29);
    return a2 & 0xffffffff;
}

// Address range: 0x2079b6 - 0x2079b9
int64_t function_2079b6(int64_t a1) {
    // 0x2079b6
    int64_t result; // 0x2079b6
    return result;
}

// Address range: 0x2079c7 - 0x2079d5
int64_t function_2079c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2079c7
    int64_t result; // 0x2079c7
    return result;
}

// Address range: 0x207a07 - 0x207aae
int64_t function_207a07(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    bool v2; // 0x207a07
    if (v2) {
        // 0x207a09
        return __asm_int3();
    }
    unsigned char v3 = *(char *)-0x50bdbe7; // 0x207a12
    int64_t result; // 0x207a07
    char v4 = result / 256; // 0x207a12
    unsigned char v5 = v3 + v4; // 0x207a12
    *(char *)-0x50bdbe7 = v5;
    int32_t v6 = *(int32_t *)(a5 + 0x1e8af03); // 0x207a24
    *(char *)0x707d1931 = *(char *)0x707d1931 + v4;
    int32_t * v7 = (int32_t *)(a3 + 56); // 0x207a30
    int32_t v8 = *v7; // 0x207a30
    int32_t v9 = result;
    int32_t v10 = v8 - v9; // 0x207a30
    *v7 = v10;
    if (((v10 ^ v8) & (v8 ^ v9)) >= 0) {
        // 0x207a35
        return result;
    }
    char * v11 = (char *)(result + 0x1e89c00); // 0x207a8f
    *v11 = *v11 + (char)(result / 256);
    char * v12 = (char *)(a4 - 0x70e7ff4d + result); // 0x207a96
    unsigned char v13 = (char)(a3 / 256); // 0x207a96
    int64_t v14 = 0x10000 * v9 >> 16; // 0x207a9d
    int64_t v15 = v14; // 0x207a9e
    if (*v12 < v13) {
        int32_t * v16 = (int32_t *)(result - 0x4c0dd7ba); // 0x207a89
        int64_t v17 = v14; // 0x207a9d
        int64_t v18 = (int64_t)&v1 - 8; // 0x207a95
        *v16 = *v16 + (int32_t)result;
        char * v19 = (char *)(v17 + 0x1e89c00); // 0x207a8f
        *v19 = *v19 + (char)(v17 / 256);
        v18 -= 8;
        v17 = 0x10000 * (int32_t)v17 >> 16;
        v15 = v17;
        while (*v12 < v13) {
            // 0x207a89
            *v16 = *v16 + (int32_t)result;
            v19 = (char *)(v17 + 0x1e89c00);
            *v19 = *v19 + (char)(v17 / 256);
            v18 -= 8;
            v17 = 0x10000 * (int32_t)v17 >> 16;
            v15 = v17;
        }
    }
    int64_t v20 = v15 + (int64_t)((int32_t)(v5 < v3) + (int32_t)result + v6); // 0x207aa1
    *(int32_t *)0x10353ab6fd22605 = *(int32_t *)0x10353ab6fd22605 + (int32_t)a4;
    return v20 & 0xffffff00 | (int64_t)(*(char *)a5 | (char)v20);
}

// Address range: 0x207b1d - 0x207b25
int64_t function_207b1d(void) {
    // 0x207b1d
    return unknown_74270d23();
}

// Address range: 0x207b25 - 0x207b32
int64_t function_207b25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x207b25
    int64_t result; // 0x207b25
    bool v1; // 0x207b25
    *(char *)a2 = (char)result + (char)a4 + (char)v1;
    return result;
}

// Address range: 0x207bda - 0x207be1
int64_t function_207bda(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x207bda
    return function_ffffffff96df8ff6();
}

// Address range: 0x207c16 - 0x207c25
int64_t function_207c16(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x207c16
    int64_t v1; // 0x207c16
    char * v2 = (char *)(2 * a1 + 0x75038149 + v1); // 0x207c16
    *v2 = *v2 | (char)a4;
    return unknown_7aeee424(a1, a2, a3, a4, a5);
}

// Address range: 0x207c6d - 0x207c6f
int64_t function_207c6d(void) {
    // 0x207c6d
    int64_t v1; // 0x207c6d
    return function_207cb8(v1, v1, v1);
}

// Address range: 0x207c98 - 0x207c9c
int64_t function_207c98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x207c98
    *(int64_t *)a4 = a4 | a1;
    int64_t result; // 0x207c98
    return result;
}

// Address range: 0x207cb8 - 0x207d19
int64_t function_207cb8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 & 0xffffffff & a2; // 0x207cb8
    int64_t v2 = 0; // bp-16, 0x207cbb
    __asm_in((int16_t)a3);
    int32_t * v3 = (int32_t *)v1; // 0x207cc5
    *v3 = *v3 & 0x1a01e8cf;
    int64_t v4 = v2; // 0x207ccb
    *(char *)a3 = (char)v4;
    int64_t result = __asm_int1(); // 0x207cd0
    int32_t * v5 = (int32_t *)v4; // 0x207cd4
    int64_t v6; // 0x207cb8
    int32_t v7 = *v5 + (int32_t)(result | v6); // 0x207cd4
    *v5 = v7;
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)((int64_t)&v2 + 8 + 8 * v4); // 0x207d15
        *v8 = *v8 ^ 103;
        return result;
    }
    int32_t * v9 = (int32_t *)(v6 - 0xce0d3b5); // 0x207cda
    *v9 = *v9 + (int32_t)v4;
    v2 = (int64_t)*v3;
    bool v10; // 0x207cb8
    return unknown_3f3f5cf5((int32_t)(v6 + a1), (v10 ? -4 : 4) + v1);
}

// Address range: 0x207d1a - 0x207d85
int64_t function_207d1a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x207d1a
    int64_t v1; // 0x207d1a
    unsigned char v2 = *(char *)(v1 + 24); // 0x207d1a
    int64_t v3 = unknown_7a3c7d23() & -0xff01 | (int64_t)&g1; // 0x207d22
    int32_t v4 = *(int32_t *)v3; // 0x207d24
    int64_t v5 = v4 + (int32_t)(v2 > (char)v1) + (int32_t)v3; // 0x207d24
    float80_t v6; // 0x207d1a
    *(int32_t *)(v5 + a1) = (int32_t)v6;
    int64_t v7 = (8 * v1 | 1) + v5 & 0xffffff00 | 72; // 0x207d30
    unknown_ffffffffba16e739();
    int32_t * v8 = (int32_t *)(v7 - 0x5feb200); // 0x207d3f
    *v8 = *v8 + (int32_t)a2;
    int16_t v9; // 0x207d1a
    uint16_t v10 = v9 & -0x4c51;
    int64_t v11 = (int64_t)v10 + a1; // 0x207d4a
    int64_t v12; // 0x207d1a
    *(int32_t *)v12 = *(int32_t *)&v12 + (int32_t)v10;
    int32_t * v13 = (int32_t *)((int64_t)(v9 & -0x6fde) + 0xaaf9e03); // 0x207d60
    *v13 = *v13 + (int32_t)v7;
    int64_t v14 = unknown_ffffffffcb5d2f6e((int32_t)v11); // 0x207d68
    *(int32_t *)(v11 & 0xffffffff) = (int32_t)v14;
    char * v15 = (char *)(a4 - 0x2ffe1758); // 0x207d72
    *v15 = *v15 + (char)(a4 / 256);
    return v14 & 0xfe178608 | 0x1e879f7;
}

// Address range: 0x207d90 - 0x207d91
int64_t function_207d90(int64_t a1) {
    // 0x207d90
    int64_t result; // 0x207d90
    return result;
}

// Address range: 0x207d96 - 0x207d97
int64_t function_207d96(void) {
    // 0x207d96
    int64_t result; // 0x207d96
    return result;
}

// Address range: 0x207d9d - 0x207daa
int64_t function_207d9d(void) {
    // 0x207d9d
    return unknown_ffffffffeca1d5a5();
}

// Address range: 0x207df1 - 0x207df2
int64_t function_207df1(int64_t a1) {
    // 0x207df1
    int64_t result; // 0x207df1
    return result;
}

// Address range: 0x207dfe - 0x207dff
int64_t function_207dfe(void) {
    // 0x207dfe
    int64_t result; // 0x207dfe
    return result;
}

// Address range: 0x207e04 - 0x207e16
int64_t function_207e04(void) {
    // 0x207e04
    int64_t v1; // 0x207e04
    int32_t * v2 = (int32_t *)(v1 - 0x2cfe1748 + 2 * v1); // 0x207e04
    int32_t v3 = v1; // 0x207e04
    *v2 = *v2 | v3;
    *(int32_t *)-0x7266ffecbb7800ed = v3;
    return function_207dfe();
}

// Address range: 0x207e4a - 0x207e6c
int64_t function_207e4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_65fc653(); // 0x207e4a
    char * v2 = (char *)(a3 - 0x5fe17c0); // 0x207e50
    *v2 = *v2 + (char)v1;
    float80_t v3; // 0x207e4a
    *(int16_t *)((v1 & 0xffffffff) + 0x1e8c75f) = (int16_t)v3;
    return a4 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x207f1c - 0x207f86
int64_t function_207f1c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    bool v3; // 0x207f1c
    if (!v3) {
        // 0x207f1e
        return unknown_ffffffffd3dfa824();
    }
    // 0x207f28
    int64_t v4; // 0x207f1c
    uint32_t v5 = (int32_t)v4;
    uint32_t v6 = v5 + (int32_t)v4; // 0x207f28
    *(int32_t *)v4 = v6;
    if (v6 < v5 || v6 == 0) {
        int64_t v7 = v2 + (v3 ? -4 : 4); // 0x207f2c
        int32_t v8 = v4; // 0x207f3a
        *(int32_t *)v1 = *(int32_t *)&v1 | v8;
        int64_t v9 = (v3 ? -1 : 1) + (int64_t)(-3 * *(int32_t *)(v4 + 0x1501e82a + v7)); // 0x207f3c
        int32_t * v10 = (int32_t *)(v1 - 24); // 0x207f3d
        *v10 = *v10 - (int32_t)v9;
        int32_t * v11 = (int32_t *)((int64_t)*(int32_t *)&v2 - 0x27fc5bff); // 0x207f40
        *v11 = *v11 + v8;
        int64_t v12 = unknown_ffffffffa870f259(v9, v7); // 0x207f53
        char * v13 = (char *)v9; // 0x207f58
        *v13 = *v13 & (char)(a3 / 256);
        *(char *)-0x16e73a08 = *(char *)-0x16e73a08 | (char)a5;
        int32_t * v14 = (int32_t *)(v9 - 125); // 0x207f61
        *v14 = *(int32_t *)&v2 + (int32_t)v1 + *v14;
        int32_t * v15 = (int32_t *)(v12 - 0x4e602c03); // 0x207f6a
        *v15 = *v15 + (int32_t)a3;
        __asm_wait();
        __asm_in_133(65);
        int32_t v16 = *(int32_t *)0x703340a; // 0x207f77
        int64_t v17; // bp-8, 0x207f1c
        *(int32_t *)0x703340a = v16 + (int32_t)(int64_t)&v17;
    }
    // 0x207f7f
    return unknown_ffffffffc8766c85();
}

// Address range: 0x406fe5 - 0x406ff5
int64_t function_406fe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x74fd7425); // 0x406fef
    *v1 = *v1 & (int32_t)a2;
    return a1 & 0xffffff00 | (int64_t)*(char *)0x62ed006cc3efa260;
}

// Address range: 0x406ff7 - 0x406ffb
int64_t function_406ff7(int64_t a1) {
    // 0x406ff7
    int64_t result; // 0x406ff7
    return result;
}

// Address range: 0x407039 - 0x407046
int64_t function_407039(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x141ad92); // 0x407039
    int64_t v2; // 0x407039
    *v1 = *v1 - (int32_t)v2;
    int64_t v3; // 0x407039
    *(int32_t *)a3 = *(int32_t *)&v3 & (int32_t)a2;
    return function_d1b83c4();
}

// Address range: 0x407049 - 0x4070a2
int64_t function_407049(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407049
    int64_t v1; // 0x407049
    *(int32_t *)-0x19d8d42936cc8ede = (int32_t)v1;
    bool v2; // 0x407049
    if (v2) {
        // 0x40709b
        return function_ffffffffe356b5b7();
    }
    // 0x407054
    __asm_int1();
    return function_57aad7a2(0xd2e71342);
}

// Address range: 0x4070c9 - 0x4070cb
int64_t function_4070c9(void) {
    // 0x4070c9
    int64_t result; // 0x4070c9
    return result;
}

// Address range: 0x407153 - 0x407158
int64_t function_407153(int64_t a1) {
    // 0x407153
    int64_t result; // 0x407153
    return result;
}

// Address range: 0x4071ac - 0x4071be
int64_t function_4071ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4071ac
    bool v1; // 0x4071ac
    if (!v1) {
        // 0x407200
        return a4 & 0xffffffff;
    }
    // 0x4071b1
    return (0x10000 * (int32_t)a4 >> 16) + 0x46965616 + (int32_t)v1;
}

// Address range: 0x4071ee - 0x4071f1
int64_t function_4071ee(void) {
    // 0x4071ee
    int64_t result; // 0x4071ee
    return result;
}

// Address range: 0x407202 - 0x407211
int64_t function_407202(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407202
    int64_t v1; // 0x407202
    uint64_t v2 = v1;
    int32_t v3 = a4;
    uint32_t v4 = v3 % 32; // 0x407204
    bool v5; // 0x407202
    if (v4 != 0) {
        *(int32_t *)a4 = v3 >> v4;
        v5 = (1 << v4 - 1 & v3) != 0;
    }
    char v6 = *(char *)(v1 + (a3 & -256 | 68)); // 0x407206
    return 256 * (int64_t)((char)v5 + (char)(v2 / 256) - v6) | v2 & -0xff01;
}

// Address range: 0x4072d1 - 0x4072d7
int64_t function_4072d1(void) {
    // 0x4072d1
    bool v1; // 0x4072d1
    if (v1) {
        // 0x4072e2
        int64_t result; // 0x4072d1
        return result;
    }
    // 0x4072d3
    return __asm_int1();
}

// Address range: 0x407386 - 0x40738e
int64_t function_407386(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407386
    int64_t result; // 0x407386
    return result;
}

// Address range: 0x4073a0 - 0x407433
int64_t function_4073a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4073a0
    int64_t result; // 0x4073a0
    int64_t v1 = result;
    bool v2; // 0x4073a0
    if (v2) {
        // 0x40741d
        return result;
    }
    uint64_t v3 = result - (v2 ? 0x80602426 : 0x80602425); // 0x4073aa
    unsigned char v4 = *(char *)(v3 % 256 + (v1 & 0xff00 & 256 * v1 | v1 & -0xff01)); // 0x4073b1
    return v3 & 0xffffff00 | (int64_t)v4;
}

// Address range: 0x40744f - 0x4074fb
int64_t function_40744f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40744f
    int64_t v1; // 0x40744f
    char * v2 = (char *)(v1 + 3); // 0x40745b
    *v2 = *v2 ^ (char)(v1 / 256);
    int32_t * v3 = (int32_t *)(v1 & -0xff01 | (int64_t)&g3); // 0x4074b1
    *v3 = *v3 + (int32_t)a4;
    return v1 & 0x40040040 | 0x946bf00f;
}

// Address range: 0x40751e - 0x407521
int64_t function_40751e(int64_t a1) {
    // 0x40751e
    int64_t result; // 0x40751e
    return result;
}

// Address range: 0x407536 - 0x407546
int64_t function_407536(int64_t a1, int64_t a2) {
    // 0x407536
    int64_t v1; // 0x407536
    int64_t v2 = v1;
    *(int32_t *)0x67f60607 = *(int32_t *)0x67f60607 ^ (int32_t)v2;
    int64_t v3 = __asm_wait(); // 0x40753c
    *(int32_t *)v2 = (int32_t)(v2 | a2);
    return v3 & -256 | 131;
}

// Address range: 0x40754f - 0x40755d
int64_t function_40754f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40754f
    int64_t result; // 0x40754f
    bool v1; // 0x40754f
    if ((a4 == 1 || v1) == !v1) {
        // 0x407553
        return result & 0x851d86d8 | 0x7ae27927;
    }
    // 0x40756d
    return result;
}

// Address range: 0x40756a - 0x40756d
int64_t function_40756a(void) {
    // 0x40756a
    int64_t result; // 0x40756a
    return result;
}

// Address range: 0x4075b4 - 0x4075b9
int64_t function_4075b4(int64_t a1) {
    // 0x4075b4
    int64_t result; // 0x4075b4
    return result;
}

// Address range: 0x407628 - 0x407641
int64_t function_407628(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407628
    return a2 & 0xffffffff;
}

// Address range: 0x407653 - 0x407659
int64_t function_407653(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407653
    int64_t v1; // 0x407653
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_2e7fbc0a();
}

// Address range: 0x407659 - 0x407663
int64_t function_407659(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407659
    int64_t result; // 0x407659
    return result;
}

// Address range: 0x4076a9 - 0x4077dd
int64_t function_4076a9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4076a9
    int64_t result; // 0x4076a9
    bool v1; // 0x4076a9
    if (true != !v1) {
        char * v2 = (char *)(result + a3); // 0x4076c8
        *v2 = *v2 + (char)a4;
        return result;
    }
    int64_t v3 = result & 0xffffff61; // 0x4076fe
    uint32_t v4 = (int32_t)a3; // 0x407707
    *(char *)0xdd270f61 = __asm_insb((int16_t)v3);
    int64_t v5 = (a4 & -0xff01 | (int64_t)&g2) - 1; // 0x40770d
    if (v4 < 0x1bb682ff || v4 != 0x1bb682ff == (v5 != 0)) {
        // 0x4076c2
        return a3 & 0xffffffff;
    }
    char * v6 = (char *)(v3 + 0x10278f11); // 0x407711
    *v6 = (char)(result / 256);
    int32_t v7 = __asm_insd((int16_t)(256 * (int64_t)*v6 | result & 97)); // 0x407717
    *(int32_t *)0xdd270f61 = v7;
    *(int32_t *)0xdd270f24 = (int32_t)v5;
    char v8 = *(char *)(result + 0x272128cf); // 0x40771c
    return 256 * (int64_t)(v8 | (char)(a3 / 256)) | a3 & 0xffff00ff;
}

// Address range: 0x4077de - 0x4077ee
int64_t function_4077de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4077de
    int64_t v1; // 0x4077de
    __asm_outsd((int16_t)a3, (int32_t)v1);
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)(v1 / 256) + v2; // 0x4077df
    *(char *)v1 = v3;
    float80_t v4; // 0x4077de
    *(int16_t *)(v1 - 46) = (int16_t)v4;
    return (v1 & 0xff00 | 94) - a4 + (int64_t)(v3 < v2) & 0xff00 | v1 & -0xff01;
}

// Address range: 0x407825 - 0x40782a
int64_t function_407825(void) {
    // 0x407825
    return function_ffffffff9439afd1();
}

// Address range: 0x407861 - 0x407862
int64_t function_407861(void) {
    // 0x407861
    int64_t result; // 0x407861
    return result;
}

// Address range: 0x407875 - 0x407876
int64_t function_407875(void) {
    // 0x407875
    int64_t result; // 0x407875
    return result;
}

// Address range: 0x40789e - 0x407939
int64_t function_40789e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40789e
    int64_t result; // 0x40789e
    uint32_t v1 = (int32_t)result; // 0x4078a5
    uint32_t v2 = *(int32_t *)(result - 0x393a8494) + v1; // 0x4078a5
    if (v2 == 0) {
        int32_t * v3 = (int32_t *)(a2 - 87); // 0x4078e6
        *v3 = *v3 - 0x6962ab5d;
        return result & 0xffffff7c | 131;
    }
    // 0x4078ae
    if (llvm_ctpop_i8((char)v2) % 2 != 0) {
        // 0x407923
        return result;
    }
    if (v2 < v1) {
        int32_t * v4 = (int32_t *)(a2 + 0xe9a1785); // 0x407900
        *v4 = *v4 | (int32_t)((int64_t)v2 - 8);
        return result;
    }
    // 0x4078b3
    __asm_out_134(-0x54a3, (int32_t)result);
    __asm_in_135(-0x54a3);
    return __asm_wait();
}

// Address range: 0x407967 - 0x407983
int64_t function_407967(void) {
    // 0x407967
    int64_t v1; // 0x407967
    int64_t result = v1 & 0xffffffff ^ 0x8d602ab0; // 0x407971
    int32_t * v2 = (int32_t *)(result + 111); // 0x407976
    *v2 = *v2 + 24;
    __asm_int(25);
    return result;
}

// Address range: 0x407992 - 0x407995
int64_t function_407992(void) {
    // 0x407992
    int64_t result; // 0x407992
    return result;
}
