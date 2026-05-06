/*
 * Targeted RetDec C for native executable gap queue batch 585.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x19b685-0x19b885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19b885-0x19ba85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19ba85-0x19bc85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19bc85-0x19be85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22ac66-0x22ae66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22b066-0x22b266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22b266-0x22b466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22b466-0x22b666 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_19b685(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19b6eb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_19b773(void);
int64_t function_19b782(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19b7c0(int64_t a1);
int64_t function_19b82d(void);
int64_t function_19b889(void);
int64_t function_19b985(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_19ba26(void);
int64_t function_19ba4c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19baa5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19baaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19bb0f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19bb20(void);
int64_t function_19bb2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19bbc8(int64_t a1);
int64_t function_19bbd4(int64_t a1);
int64_t function_19bbd5(void);
int64_t function_19bbea(int64_t a1);
int64_t function_19bbec(int64_t a1);
int64_t function_19bbef(void);
int64_t function_19bbf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19bc18(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19bc7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19bc9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19bca3(void);
int64_t function_19bcb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19bcd7(void);
int64_t function_19bcd9(int64_t a1);
int64_t function_19bce2(int64_t a1);
int64_t function_19bcfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19bd09(void);
int64_t function_19bd4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19be24(void);
int64_t function_19be2d(void);
int64_t function_19be76(int64_t a1);
int64_t function_20236b4();
int64_t function_22ac66(void);
int64_t function_22ad17(void);
int64_t function_22adc8(void);
int64_t function_22ae42(void);
int64_t function_22b066(void);
int64_t function_22b0d3(void);
int64_t function_22b13c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22b17b(int64_t a1);
int64_t function_22b1b3(void);
int64_t function_22b1c7(int64_t a1);
int64_t function_22b1d0(int64_t a1);
int64_t function_22b25a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_22b287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t a6);
int64_t function_22b2e7(int64_t a1);
int64_t function_22b2ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22b380(int64_t a1);
int64_t function_22b3cd(void);
int64_t function_22b447(int64_t a1);
int64_t function_22b4db(int64_t a1);
int64_t function_22b56a(int64_t a1, int64_t a2);
int64_t function_22b572(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_22b5d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22b61e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22b629(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22b631(int64_t a1, int64_t a2, uint32_t a3);
int64_t function_22b63f(void);
int64_t function_3a1e4d94();
int64_t function_562b335();
int64_t function_5b16d6cc();
int64_t function_62da49d();
int64_t function_ffffffffb3fdf32c();
int64_t function_ffffffffe88995dd();
int64_t unknown_121b1b94();
int64_t unknown_1b7e0821();
int64_t unknown_222efe3d();
int64_t unknown_2e8abc4e();
int64_t unknown_325dda32();
int64_t unknown_3296cb46();
int64_t unknown_342f565f();
int64_t unknown_3a21a34b();
int64_t unknown_3aa099b6();
int64_t unknown_3d249d9d();
int64_t unknown_4da9a891();
int64_t unknown_670efab7();
int64_t unknown_77892ff3();
int64_t unknown_7e21cadd();
int64_t unknown_a14d4cf();
int64_t unknown_ffffffff821f9f57();
int64_t unknown_ffffffff919b23d9();
int64_t unknown_ffffffff94205e6a();
int64_t unknown_ffffffffa1de003e();
int64_t unknown_ffffffffaf1ba2c1();
int64_t unknown_ffffffffbb5cbf12();

// Address range: 0x19b685 - 0x19b693
int64_t function_19b685(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4; // 0x19b685
    uint32_t v2 = *(int32_t *)(a2 + 0xd32a0c); // 0x19b685
    int32_t v3 = v1 - v2; // 0x19b685
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x19b685
    int64_t result = unknown_4da9a891(a1, a2, a3, a4) & -0xff01 | 256 * (64 * (int64_t)(v3 == 0) | (int64_t)(v2 > v1) | 128 * (int64_t)(v3 < 0) | 16 * (int64_t)(v1 % 16 - v2 % 16 > 15) | 4 * (int64_t)(v4 % 2 == 0)) | 512; // 0x19b690
    int32_t * v5 = (int32_t *)result; // 0x19b691
    *v5 = *v5 + (int32_t)a3 + (int32_t)(v2 > v1);
    return result;
}

// Address range: 0x19b6eb - 0x19b75c
int64_t function_19b6eb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x19b6eb
    int64_t v1; // 0x19b6eb
    uint64_t v2 = v1;
    int64_t v3 = a8;
    bool v4; // 0x19b6eb
    if (v4 || v4) {
        // 0x19b6ed
        return v2 / 2 % 128 | v2 & -256;
    }
    char v5 = __asm_in((int16_t)a3); // 0x19b708
    *(char *)a1 = (char)a2;
    int64_t v6 = v4 ? -1 : 1; // 0x19b712
    int64_t v7 = v6 + a1; // 0x19b712
    uint64_t v8 = (v2 | (int64_t)v5) & -256 | (int64_t)((v5 ^ 25) - 91); // 0x19b713
    int64_t v9; // bp+16, 0x19b6eb
    v3 = (int64_t)&v9;
    uint64_t v10 = *(int64_t *)v7; // 0x19b716
    int64_t v11 = v7 + (v4 ? -8 : 8); // 0x19b716
    uint32_t v12 = (int32_t)(int64_t)&v3; // 0x19b719
    int32_t v13 = v8; // 0x19b719
    int32_t v14 = v8 >= v10; // 0x19b719
    uint32_t v15 = v14 + v13; // 0x19b719
    uint32_t v16 = v12 - v15; // 0x19b719
    bool v17 = v8 >= v10 ? v15 != -1 | v16 - v14 > v12 : v15 > v12; // 0x19b719
    int32_t * v18 = (int32_t *)v8; // 0x19b71c
    *v18 = *v18 - v13 + (int32_t)v17;
    char * v19 = (char *)v8; // 0x19b71e
    *v19 = *v19 - 24;
    int32_t * v20 = (int32_t *)(a3 + 1); // 0x19b721
    *v20 = v16 + *v20;
    int64_t v21 = 2 * v6 + a2; // 0x19b724
    char * v22 = (char *)(a3 - 0x77f52c51); // 0x19b725
    *v22 = *v22 + (char)(a3 / 256);
    int64_t v23 = __asm_hlt(v11, v21) ^ a8;
    *(int32_t *)v11 = (int32_t)v23;
    char * v24 = (char *)(a3 + 3); // 0x19b738
    *v24 = *v24 + (char)a8;
    *(int64_t *)(v23 & 0xffffffff) = a6;
    int32_t * v25 = (int32_t *)(a3 - 0x7249fe18); // 0x19b73e
    int32_t v26 = *v25; // 0x19b73e
    int32_t v27 = a7; // 0x19b73e
    int32_t v28 = v26 + v27; // 0x19b73e
    *v25 = v28;
    *(char *)a3 = (char)(v28 == 0 | v28 < 0 != ((v28 ^ v26) & (v28 ^ v27)) < 0);
    __asm_iretd(v11 + (v4 ? -4 : 4));
    *(int64_t *)((int64_t)v16 + 8) = v21;
    uint64_t v29 = unknown_ffffffff821f9f57(); // 0x19b750
    int32_t * v30 = (int32_t *)a8; // 0x19b756
    *v30 = *v30 - (int32_t)v29;
    unsigned char v31 = *(char *)(v29 % 256 + a8); // 0x19b75a
    return 0x10000 * (int32_t)(v29 & 0xff00 | (int64_t)v31) >> 16;
}

// Address range: 0x19b773 - 0x19b774
int64_t function_19b773(void) {
    // 0x19b773
    int64_t result; // 0x19b773
    return result;
}

// Address range: 0x19b782 - 0x19b7a1
int64_t function_19b782(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19b784
    int64_t v1; // 0x19b782
    int64_t v2 = (int64_t)(*(int32_t *)(a2 + 55) ^ (int32_t)v1); // 0x19b784
    *(int32_t *)0x2024fd5 = *(int32_t *)0x2024fd5 & (int32_t)v1;
    if ((*(int64_t *)v2 & 4) == 0) {
        function_19b773();
    }
    // 0x19b792
    return *(int64_t *)(v2 + 8);
}

// Address range: 0x19b7c0 - 0x19b7da
int64_t function_19b7c0(int64_t a1) {
    // 0x19b7c0
    unknown_a14d4cf(a1);
    int64_t v1; // 0x19b7c0
    *(int32_t *)a1 = (int32_t)v1 | 0x3a35fa4a;
    return function_20236b4();
}

// Address range: 0x19b82d - 0x19b832
int64_t function_19b82d(void) {
    // 0x19b82d
    return function_62da49d();
}

// Address range: 0x19b889 - 0x19b88a
int64_t function_19b889(void) {
    // 0x19b889
    int64_t result; // 0x19b889
    return result;
}

// Address range: 0x19b985 - 0x19ba21
int64_t function_19b985(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x19b985
    bool v1; // 0x19b985
    if (true != !v1) {
        int64_t v2 = unknown_121b1b94(0); // 0x19b98e
        return (a4 / 256 + 58 + v2) % 256 | v2 & -256;
    }
    // 0x19b999
    int64_t v3; // 0x19b985
    char * v4 = (char *)(a1 + 62 + v3); // 0x19b99a
    char v5 = a4; // 0x19b99a
    *v4 = *v4 + v5;
    uint32_t v6 = (int32_t)v3; // 0x19b99e
    uint32_t v7 = v6 - 0x75f93901; // 0x19b99e
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x19b99e
    int64_t result = v7; // 0x19b99e
    if (v8 % 2 != 0) {
        // 0x19ba15
        return (result + 247 + (int64_t)(v6 < 0x75f93901)) % 256 | result & 0xffffff00;
    }
    // 0x19b9a8
    *(int32_t *)a1 = v7;
    char * v9 = (char *)(v3 + 91); // 0x19b9a9
    *v9 = *v9 + v5;
    return result;
}

// Address range: 0x19ba26 - 0x19ba29
int64_t function_19ba26(void) {
    // 0x19ba26
    int64_t result; // 0x19ba26
    return result;
}

// Address range: 0x19ba4c - 0x19ba5d
int64_t function_19ba4c(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 124); // 0x19ba54
    *v1 = *v1 - 0x5e06c5d5;
    return __asm_iretd(a1);
}

// Address range: 0x19baa5 - 0x19baaa
int64_t function_19baa5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19baa5
    int64_t result; // 0x19baa5
    return result;
}

// Address range: 0x19baaa - 0x19bb0c
int64_t function_19baaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19baaa
    int64_t v1; // 0x19baaa
    int64_t v2 = v1;
    unknown_3aa099b6();
    unknown_ffffffffaf1ba2c1();
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char v3 = a4 - a3; // 0x19bacd
    *(char *)a3 = v3;
    *(char *)(v2 - 0x44f4fd0f) = v3;
    __asm_out_133(78, (char)unknown_7e21cadd());
    *(int32_t *)(v2 - 0x2c99fe18) = (int32_t)v2;
    int64_t result = unknown_77892ff3(); // 0x19baed
    int64_t v4; // 0x19baaa
    *(int32_t *)a3 = *(int32_t *)&v4 + (int32_t)a3;
    *(int32_t *)0x3a9ee6e4 = *(int32_t *)0x3a9ee6e4 + (int32_t)a1;
    return result;
}

// Address range: 0x19bb0f - 0x19bb1c
int64_t function_19bb0f(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x7fffc761); // 0x19bb0f
    *v1 = *v1 + (int32_t)a3;
    return function_19bb2c(a1, a2, a3);
}

// Address range: 0x19bb20 - 0x19bb25
int64_t function_19bb20(void) {
    // 0x19bb20
    return function_ffffffffe88995dd();
}

// Address range: 0x19bb2c - 0x19bb5e
int64_t function_19bb2c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19bb2c
    int64_t v1; // 0x19bb2c
    int64_t v2 = v1;
    int32_t v3 = __asm_sti(); // 0x19bb30
    *(int32_t *)v2 = v3 + (int32_t)v2;
    __asm_out(-107, v3);
    unknown_ffffffffa1de003e();
    int32_t * v4 = (int32_t *)unknown_3a21a34b(); // 0x19bb4f
    *v4 = *v4 + (int32_t)a3;
    __asm_in_134(-31);
    return unknown_342f565f();
}

// Address range: 0x19bbc8 - 0x19bbcc
int64_t function_19bbc8(int64_t a1) {
    // 0x19bbc8
    int64_t v1; // 0x19bbc8
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x19bbc8
    bool v3; // 0x19bbc8
    return 256 * ((int64_t)v3 - (int64_t)v2 + (int64_t)(v2 / 256)) & 0xff00 | (int64_t)(v2 & -0xff01);
}

// Address range: 0x19bbd4 - 0x19bbd5
int64_t function_19bbd4(int64_t a1) {
    // 0x19bbd4
    int64_t result; // 0x19bbd4
    return result;
}

// Address range: 0x19bbd5 - 0x19bbd6
int64_t function_19bbd5(void) {
    // 0x19bbd5
    int64_t result; // 0x19bbd5
    return result;
}

// Address range: 0x19bbea - 0x19bbeb
int64_t function_19bbea(int64_t a1) {
    // 0x19bbea
    int64_t result; // 0x19bbea
    return result;
}

// Address range: 0x19bbec - 0x19bbee
int64_t function_19bbec(int64_t a1) {
    // 0x19bbec
    int64_t result; // 0x19bbec
    return result;
}

// Address range: 0x19bbef - 0x19bbf0
int64_t function_19bbef(void) {
    // 0x19bbef
    int64_t result; // 0x19bbef
    return result;
}

// Address range: 0x19bbf2 - 0x19bbff
int64_t function_19bbf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 0x7994a1d4); // 0x19bbf6
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x19bbf2
    return result;
}

// Address range: 0x19bc18 - 0x19bc7b
int64_t function_19bc18(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19bc18
    __asm_in_135((int16_t)a3);
    unknown_1b7e0821();
    int64_t v1 = 8; // bp-8, 0x19bc20
    int64_t v2 = (int64_t)&v1; // 0x19bc20
    __asm_int3();
    int64_t v3; // 0x19bc18
    int64_t v4 = v3 - 1; // 0x19bc23
    if (v4 != 0) {
        function_19bbd5();
    }
    int32_t * v5 = (int32_t *)(*(int64_t *)v2 + a3); // 0x19bc29
    int64_t v6; // 0x19bc18
    int32_t v7 = *v5 + (int32_t)v6; // 0x19bc29
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 + 8);
    int64_t v9 = *v8; // 0x19bc2e
    unsigned char v10 = (char)v4 % 32; // 0x19bc2f
    int64_t v11; // 0x19bc18
    unsigned char v12; // 0x19bc2f
    if (v10 != 0) {
        v12 = *(char *)&v11;
        *(char *)v11 = v12 >> 8 - v10 | v12 << v10;
    }
    int64_t v13 = (int64_t)*(int32_t *)(v11 + a3); // 0x19bc31
    int64_t v14 = 0x1351b2bd * v13; // 0x19bc31
    int64_t v15 = v14 & 0xffffffff; // 0x19bc31
    v2 += 16;
    while (v7 == 0 || v14 != 0x1351b2bd00000000 * v13 >> 32) {
        // 0x19bc22
        __asm_int3();
        v4--;
        if (v4 != 0) {
            function_19bbd5();
        }
        // 0x19bc25
        v5 = (int32_t *)(*(int64_t *)v2 + v15);
        v7 = *v5 + (int32_t)v6;
        *v5 = v7;
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        v10 = (char)v4 % 32;
        if (v10 != 0) {
            v12 = *(char *)&v11;
            *(char *)v11 = v12 >> 8 - v10 | v12 << v10;
        }
        v13 = (int64_t)*(int32_t *)(v11 + v15);
        v14 = 0x1351b2bd * v13;
        v15 = v14 & 0xffffffff;
        v2 += 16;
    }
    // 0x19bc3a
    bool v16; // 0x19bc18
    int64_t v17 = v16 ? -1 : 1; // 0x19bc40
    int64_t v18 = v17 + a1; // 0x19bc40
    *v8 = v11;
    char * v19 = (char *)(v11 + 0x6a68ef4); // 0x19bc42
    *v19 = *v19 ^ (char)(v4 / 256);
    unknown_2e8abc4e(v18, v9, v15);
    int64_t v20 = v18 + v17; // 0x19bc4f
    if ((int32_t)v4 + (int32_t)v20 < 0) {
        function_19bbef();
    }
    // 0x19bc5b
    __asm_sti();
    __asm_iretd(v20);
    int64_t result = unknown_ffffffff94205e6a(); // 0x19bc64
    *(int32_t *)-0x17e45b90 = *(int32_t *)-0x17e45b90 >> 1;
    int32_t * v21 = (int32_t *)(result + 0x58cd102f); // 0x19bc6f
    *v21 = *v21 + (int32_t)v14;
    return result;
}

// Address range: 0x19bc7d - 0x19bc81
int64_t function_19bc7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19bc7d
    int64_t result; // 0x19bc7d
    return result;
}

// Address range: 0x19bc9b - 0x19bca2
int64_t function_19bc9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x13d0024); // 0x19bc9b
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x19bc9b
    return result;
}

// Address range: 0x19bca3 - 0x19bcae
int64_t function_19bca3(void) {
    // 0x19bca3
    int64_t v1; // 0x19bca3
    return v1 + 0xf2b4d0a8 & 0xffffffff;
}

// Address range: 0x19bcb6 - 0x19bcbf
int64_t function_19bcb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 46); // 0x19bcb6
    *v1 = *v1 + (int32_t)a2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x19bcb6
    return result;
}

// Address range: 0x19bcd7 - 0x19bcd8
int64_t function_19bcd7(void) {
    // 0x19bcd7
    int64_t result; // 0x19bcd7
    return result;
}

// Address range: 0x19bcd9 - 0x19bcda
int64_t function_19bcd9(int64_t a1) {
    // 0x19bcd9
    int64_t result; // 0x19bcd9
    return result;
}

// Address range: 0x19bce2 - 0x19bce3
int64_t function_19bce2(int64_t a1) {
    // 0x19bce2
    int64_t result; // 0x19bce2
    return result;
}

// Address range: 0x19bcfd - 0x19bd08
int64_t function_19bcfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19bcfd
    int64_t result; // 0x19bcfd
    *(char *)a3 = (char)(result / 256) + (char)result;
    *(int32_t *)0x1c6b7606 = *(int32_t *)0x1c6b7606 & (int32_t)a1;
    return result;
}

// Address range: 0x19bd09 - 0x19bd0b
int64_t function_19bd09(void) {
    // 0x19bd09
    return function_19bcd7();
}

// Address range: 0x19bd4e - 0x19bdd9
int64_t function_19bd4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x460db54); // 0x19bd4e
    *v1 = *v1 + (int32_t)a2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v2; // 0x19bd4e
    if ((*(char *)(a1 - 23) & (char)v2) != 0) {
        // 0x19bdd3
        return unknown_ffffffff919b23d9();
    }
    // 0x19bd5d
    *(char *)0x616fc466 = *(char *)0x616fc466 + (char)(v2 / 256);
    *(char *)-0x7aed1847 = *(char *)-0x7aed1847 | (char)v2;
    return function_3a1e4d94();
}

// Address range: 0x19be24 - 0x19be27
int64_t function_19be24(void) {
    // 0x19be24
    int64_t result; // 0x19be24
    return result;
}

// Address range: 0x19be2d - 0x19be2e
int64_t function_19be2d(void) {
    // 0x19be2d
    int64_t result; // 0x19be2d
    return result;
}

// Address range: 0x19be76 - 0x19be79
int64_t function_19be76(int64_t a1) {
    // 0x19be76
    int64_t result; // 0x19be76
    return result;
}

// Address range: 0x22ac66 - 0x22ac6d
int64_t function_22ac66(void) {
    // 0x22ac66
    int64_t v1; // 0x22ac66
    __asm_out(-98, (int32_t)v1);
    bool v2; // 0x22ac66
    return v1 + 0x13d0042 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x22ad17 - 0x22ad1c
int64_t function_22ad17(void) {
    // 0x22ad17
    return function_5b16d6cc();
}

// Address range: 0x22adc8 - 0x22adc9
int64_t function_22adc8(void) {
    // 0x22adc8
    int64_t result; // 0x22adc8
    return result;
}

// Address range: 0x22ae42 - 0x22ae47
int64_t function_22ae42(void) {
    // 0x22ae42
    int64_t v1; // 0x22ae42
    int32_t * v2 = (int32_t *)(v1 - 46); // 0x22ae42
    bool v3; // 0x22ae42
    *v2 = *v2 + (int32_t)v1 + (int32_t)v3;
    return function_22adc8();
}

// Address range: 0x22b066 - 0x22b067
int64_t function_22b066(void) {
    // 0x22b066
    int64_t result; // 0x22b066
    return result;
}

// Address range: 0x22b0d3 - 0x22b0da
int64_t function_22b0d3(void) {
    // 0x22b0d3
    int64_t result; // 0x22b0d3
    return result;
}

// Address range: 0x22b13c - 0x22b14d
int64_t function_22b13c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 102 + (a3 & -0xff01 | (int64_t)&g1)); // 0x22b13e
    int64_t v2; // 0x22b13c
    *v1 = *v1 & (int32_t)v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x22b142
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a4 - 0x19d5b51b); // 0x22b142
        *v4 = *v4 >> v3;
    }
    return function_562b335();
}

// Address range: 0x22b17b - 0x22b17c
int64_t function_22b17b(int64_t a1) {
    // 0x22b17b
    int64_t result; // 0x22b17b
    return result;
}

// Address range: 0x22b1b3 - 0x22b1bd
int64_t function_22b1b3(void) {
    // 0x22b1b3
    return (int64_t)*(int32_t *)0x17f47f013d752500;
}

// Address range: 0x22b1c7 - 0x22b1c8
int64_t function_22b1c7(int64_t a1) {
    // 0x22b1c7
    int64_t result; // 0x22b1c7
    return result;
}

// Address range: 0x22b1d0 - 0x22b1df
int64_t function_22b1d0(int64_t a1) {
    // 0x22b1d0
    int64_t v1; // 0x22b1d0
    *(int32_t *)(v1 + 0x2f000000) = 0;
    int64_t result; // 0x22b1d0
    int64_t v2 = result;
    *(char *)v2 = *(char *)&result + (char)v2;
    return result;
}

// Address range: 0x22b25a - 0x22b287
int64_t function_22b25a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x2b223a80); // 0x22b25a
    int32_t v2 = *v1; // 0x22b25a
    *v1 = 2 * v2;
    int64_t v3; // 0x22b25a
    *(int32_t *)v3 = *(int32_t *)&v3 + 0x730fa43e + (int32_t)(v2 < 0);
    uint32_t v4 = (int32_t)v3; // 0x22b266
    __asm_out(-82, v4);
    int64_t result = unknown_ffffffffbb5cbf12(); // 0x22b270
    unsigned char v5 = (char)(a4 / 256); // 0x22b275
    char v6 = v4 < 0xcd21fd01; // 0x22b275
    int64_t v7; // 0x22b25a
    unsigned char v8 = *(char *)&v7 + v6; // 0x22b275
    unsigned char v9 = v5 - v8; // 0x22b275
    bool v10 = v4 < 0xcd21fd01 ? v8 != -1 | v9 - v6 > v5 : v8 > v5; // 0x22b275
    int64_t v11 = 256 * (int64_t)v9 | a4 & -0xff01; // 0x22b275
    int32_t * v12 = (int32_t *)(result + 46); // 0x22b277
    uint32_t v13 = *v12; // 0x22b277
    int64_t v14; // 0x22b25a
    uint32_t v15 = v13 + (int32_t)v14; // 0x22b277
    uint32_t v16 = v15 + (int32_t)v10; // 0x22b277
    *v12 = v16;
    char v17 = result; // 0x22b27c
    *(char *)v11 = v17;
    *(char *)result = v17;
    char * v18 = (char *)(a1 + 61); // 0x22b280
    *v18 = *v18 - (char)(v10 ? v16 <= v13 : v15 < v13);
    int32_t * v19 = (int32_t *)(v14 & -256 | 98); // 0x22b283
    *v19 = *v19 + (int32_t)v11;
    return result;
}

// Address range: 0x22b287 - 0x22b2d7
int64_t function_22b287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t a6) {
    int64_t v1 = a4;
    unsigned char v2 = (char)a4 % 32; // 0x22b287
    bool v3; // 0x22b287
    if (v2 != 0) {
        *(char *)a2 = (char)a2 >> v2 | (char)((int16_t)a2 % 256 << (int16_t)(9 - v2)) | (char)v3 << 8 - v2;
    }
    int64_t result; // 0x22b287
    if (v3) {
        char * v4 = (char *)(v1 - 0x77284a47); // 0x22b2cd
        *v4 = *v4 + (char)((int32_t)a3 / 128);
        return result;
    }
    unsigned char v5 = (char)v1 % 32; // 0x22b2ab
    if (v5 != 0) {
        unsigned char v6 = *(char *)&v1; // 0x22b2ab
        *(char *)v1 = v6 >> 8 - v5 | v6 << v5;
    }
    int32_t v7 = *(int32_t *)(a2 - 19); // 0x22b2b3
    int32_t * v8 = (int32_t *)(2 * (int64_t)(v7 & (int32_t)v1) + result); // 0x22b2b6
    *v8 = *v8 ^ (int32_t)result;
    return result;
}

// Address range: 0x22b2e7 - 0x22b2ec
int64_t function_22b2e7(int64_t a1) {
    // 0x22b2e7
    int64_t v1; // 0x22b2e7
    return v1 & -152;
}

// Address range: 0x22b2ec - 0x22b2ff
int64_t function_22b2ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22b2ec
    return function_ffffffffb3fdf32c();
}

// Address range: 0x22b380 - 0x22b385
int64_t function_22b380(int64_t a1) {
    // 0x22b380
    int64_t v1; // 0x22b380
    return v1 | 44;
}

// Address range: 0x22b3cd - 0x22b3d0
int64_t function_22b3cd(void) {
    // 0x22b3cd
    int64_t result; // 0x22b3cd
    return result;
}

// Address range: 0x22b447 - 0x22b44a
int64_t function_22b447(int64_t a1) {
    // 0x22b447
    int64_t result; // 0x22b447
    return result;
}

// Address range: 0x22b4db - 0x22b4de
int64_t function_22b4db(int64_t a1) {
    // 0x22b4db
    int64_t result; // 0x22b4db
    return result;
}

// Address range: 0x22b56a - 0x22b572
int64_t function_22b56a(int64_t a1, int64_t a2) {
    // 0x22b56a
    int64_t v1; // 0x22b56a
    int32_t * v2 = (int32_t *)(v1 + 0x74801605); // 0x22b56a
    *v2 = *v2 + (int32_t)a2;
    return function_22b5d7(a1, a2, v1, v1);
}

// Address range: 0x22b572 - 0x22b5d7
int64_t function_22b572(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a4 & -256 | (int64_t)(*(char *)-0x44c8def0 | (char)a4); // 0x22b572
    function_22b5d7(a1, a2, a3, v1);
    int64_t v2; // 0x22b572
    *(char *)-0x2cdb5b7b = *(char *)-0x2cdb5b7b + (char)(v2 / 256);
    int64_t v3 = unknown_3d249d9d(); // 0x22b596
    int32_t * v4 = (int32_t *)(v2 + 109); // 0x22b59c
    *v4 = *v4 + (int32_t)a3;
    int64_t v5; // bp-8, 0x22b572
    int64_t v6 = (int64_t)&v5; // bp-16, 0x22b59f
    *(char *)-0x1767dd3fa87b2956 = (char)v3;
    int64_t v7 = 2 * a3; // 0x22b5a9
    char v8 = *(char *)(v2 - 0x1986bfd4); // 0x22b5ab
    int64_t v9 = unknown_670efab7(); // 0x22b5b1
    int32_t * v10 = (int32_t *)v9; // 0x22b5b8
    *v10 = *v10 + (int32_t)v1;
    int64_t v11 = v9 + 0xe8d43dc8; // 0x22b5ba
    int32_t * v12 = (int32_t *)((v11 & 0xffffffff) - 99); // 0x22b5c1
    *v12 = *v12 | (int32_t)(int64_t)&v6;
    *(int32_t *)-0x2d6d311fe178134 = (int32_t)v11;
    int64_t result = v11 & 0xffffff00 | a4 / 256 % 256; // 0x22b5d3
    int32_t * v13 = (int32_t *)result; // 0x22b5d5
    int32_t v14 = *v13; // 0x22b5d5
    *v13 = v14 + (int32_t)(v7 & 0xffffff00 | (int64_t)(v8 | (char)v7));
    return result;
}

// Address range: 0x22b5d7 - 0x22b5da
int64_t function_22b5d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 112); // 0x22b5d7
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x22b5d7
    return result;
}

// Address range: 0x22b61e - 0x22b628
int64_t function_22b61e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22b61e
    int64_t v1; // 0x22b61e
    return function_22b631(a1, a2, (int32_t)v1 + (int32_t)a3);
}

// Address range: 0x22b629 - 0x22b631
int64_t function_22b629(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22b629
    __asm_int1(a1, a2, a3);
    return unknown_325dda32();
}

// Address range: 0x22b631 - 0x22b63c
int64_t function_22b631(int64_t a1, int64_t a2, uint32_t a3) {
    // 0x22b631
    int64_t v1; // 0x22b631
    int64_t v2 = v1 & 0xffffffff; // 0x22b631
    return unknown_222efe3d((int32_t)((v2 | 0x100000000 * (int64_t)a3) % v2) + (int32_t)a1);
}

// Address range: 0x22b63f - 0x22b64c
int64_t function_22b63f(void) {
    int64_t v1 = unknown_3296cb46(); // 0x22b63f
    int64_t result = v1 & -256 | (int64_t)(*(char *)v1 & (char)v1); // 0x22b646
    char * v2 = (char *)result; // 0x22b648
    *v2 = *v2 + 60;
    return result;
}
