/*
 * Targeted RetDec C for native executable gap queue batch 1057.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x24bf7d-0x24c17d rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a0314-0x3a0514 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a0514-0x3a0714 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a0714-0x3a0914 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a0914-0x3a0b14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a0b14-0x3a0d14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a0d14-0x3a0f14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a0f14-0x3a1114 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a1114-0x3a1314 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ec896-0x3eca96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3eca96-0x3ecc96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ecc96-0x3ece96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ece96-0x3ed096 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ed096-0x3ed296 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ed296-0x3ed496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ed496-0x3ed696 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
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

int64_t function_1e190be6();
int64_t function_2221eba();
int64_t function_24bf7d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24bfd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24c12e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a0314(void);
int64_t function_3a032d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a038f(int64_t a1);
int64_t function_3a03f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a0430(int64_t a1);
int64_t function_3a04ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a04e1(void);
int64_t function_3a04f7(void);
int64_t function_3a052f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a057b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a0588(int64_t a1);
int64_t function_3a071a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a0735(void);
int64_t function_3a0752(int64_t a1);
int64_t function_3a0777(void);
int64_t function_3a0782(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a080c(int64_t a1);
int64_t function_3a0835(int64_t a1);
int64_t function_3a087c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a095c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3a09fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a0b06(void);
int64_t function_3a0b09(int64_t a1, int64_t a2);
int64_t function_3a0b4f(int64_t a1, int64_t a2);
int64_t function_3a0b5b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3a0b76(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a0c29(void);
int64_t function_3a0c3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3a0d47(void);
int64_t function_3a0d6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a0e45(void);
int64_t function_3a0e98(void);
int64_t function_3a0eae(int64_t a1, int64_t a2);
int64_t function_3a0ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a0f45(int64_t a1);
int64_t function_3a0f88(void);
int64_t function_3a0f93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a0ff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a104d(void);
int64_t function_3a106a(void);
int64_t function_3a1074(void);
int64_t function_3a1083(int64_t a1, int64_t a2);
int64_t function_3a1086(void);
int64_t function_3a109b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a116a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a11a0(void);
int64_t function_3a11a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a11fd(void);
int64_t function_3a1288(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a1296(void);
int64_t function_3a1298(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ec896(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ec8ab(void);
int64_t function_3ec8df(int64_t a1);
int64_t function_3ec8ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ec944(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ec97d(void);
int64_t function_3ec97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ec9c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3eca15(void);
int64_t function_3eca2e(void);
int64_t function_3eca53(void);
int64_t function_3eca6a(int64_t a1, int64_t a2);
int64_t function_3eca73(int64_t a1, int64_t a2);
int64_t function_3eca87(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ecb89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ecc22(void);
int64_t function_3ecc25(int64_t a1, int64_t result);
int64_t function_3ecc35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ecd20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ecda5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3ece23(void);
int64_t function_3eceb0(int64_t a1);
int64_t function_3ecf55(void);
int64_t function_3ecf75(void);
int64_t function_3ecfa2(int64_t a1, int64_t a2);
int64_t function_3ed040(void);
int64_t function_3ed066(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_3ed0bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ed0e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ed191(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ed1c1(void);
int64_t function_3ed1c8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ed223(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ed23f(void);
int64_t function_3ed25b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ed32d(void);
int64_t function_3ed33a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3ed47c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3ed48c(int64_t a1);
int64_t function_3ed48f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ed577(void);
int64_t function_3ed588(int64_t a1);
int64_t function_3ed664(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ed685(void);
int64_t function_468d6c21();
int64_t function_79e1cfe();
int64_t function_c4258();
int64_t function_ffffffff857f0613();
int64_t function_ffffffff8f7fa70c();
int64_t function_ffffffffb4773545();
int64_t function_ffffffffc3b1a1e9();
int64_t function_fffffffffb6828b6();
int64_t unknown_18a71607();
int64_t unknown_1c426b57();
int64_t unknown_2a4568bc();
int64_t unknown_363c0aa7();
int64_t unknown_4a43eb10();
int64_t unknown_4a92109c();
int64_t unknown_4f3a2bed();
int64_t unknown_64c9a0ad();
int64_t unknown_6b8ad93();
int64_t unknown_6e44aa0d();
int64_t unknown_79626b8b();
int64_t unknown_7c2dea98();
int64_t unknown_ffffffff883d99e1();
int64_t unknown_ffffffff89cb5cc5();
int64_t unknown_ffffffff9779e4b8();
int64_t unknown_ffffffffb00f677a();
int64_t unknown_ffffffffb5b3443b();
int64_t unknown_ffffffffb7c15747();
int64_t unknown_ffffffffc250002f();
int64_t unknown_ffffffffd5a04153();
int64_t unknown_ffffffffd634e9a7();
int64_t unknown_fffffffff6cde498();
int64_t unknown_fffffffffedf6eec();

// Address range: 0x24bf7d - 0x24bfd3
int64_t function_24bf7d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24bf7d
    return function_c4258(a1);
}

// Address range: 0x24bfd3 - 0x24c11f
int64_t function_24bfd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x24bfd3
    *(int64_t *)(a1 - 8) = 0x249ba3;
    int64_t v1 = a1 - 16; // 0x24c04c
    int64_t * v2 = (int64_t *)v1; // 0x24c04c
    *v2 = 0x50ae0e00;
    int64_t * v3 = (int64_t *)(a1 - 24); // 0x24c051
    int64_t v4 = *(int64_t *)(a1 + 24); // 0x24c060
    *v2 = v4;
    *v3 = v4;
    int64_t v5 = a1 - 32; // 0x24c06b
    int64_t * v6 = (int64_t *)v5; // 0x24c07b
    *v6 = v1;
    int64_t * v7 = (int64_t *)a1; // 0x24c084
    int64_t v8 = *v7; // 0x24c084
    *v3 = v8;
    *v6 = 0x12832e6;
    int64_t * v9 = (int64_t *)(a1 - 40); // 0x24c0b7
    *v9 = v4;
    *v2 = *v6;
    *v6 = 0x604c1532;
    int64_t * v10 = (int64_t *)(a1 - 48); // 0x24c0c8
    *v10 = v8;
    *v7 = *v6;
    *v9 = v1;
    *v10 = *v6;
    *v9 = v5;
    *v6 = v1;
    return function_c4258(a1);
}

// Address range: 0x24c12e - 0x24c139
int64_t function_24c12e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24c12e
    int64_t v1; // 0x24c12e
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 119); // 0x24c135
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x3a0314 - 0x3a0315
int64_t function_3a0314(void) {
    // 0x3a0314
    int64_t result; // 0x3a0314
    return result;
}

// Address range: 0x3a032d - 0x3a0335
int64_t function_3a032d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x3a032d
    if (v1 != 0) {
        char * v2 = (char *)(8 * a1 + 0x7e3b41d + a3); // 0x3a032d
        unsigned char v3 = *v2; // 0x3a032d
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    int64_t result; // 0x3a032d
    return result;
}

// Address range: 0x3a038f - 0x3a0392
int64_t function_3a038f(int64_t a1) {
    // 0x3a038f
    int64_t result; // 0x3a038f
    return result;
}

// Address range: 0x3a03f3 - 0x3a040a
int64_t function_3a03f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a03f3
    int64_t v1; // 0x3a03f3
    int64_t v2 = v1;
    __asm_out(0, (int32_t)v2);
    uint32_t v3 = (int32_t)a4 % 32; // 0x3a03fc
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a3 + 0x292febf); // 0x3a03fc
        uint32_t v5 = *v4; // 0x3a03fc
        *v4 = v5 >> v3 | v5 << 32 - v3;
    }
    int32_t * v6 = (int32_t *)(a1 - 71); // 0x3a0404
    uint32_t v7 = *v6; // 0x3a0404
    *v6 = v7 / 2;
    return ((v2 ^ 119) + 117 + (int64_t)(v7 % 2 != 0)) % 256 | v2 & -256;
}

// Address range: 0x3a0430 - 0x3a0431
int64_t function_3a0430(int64_t a1) {
    // 0x3a0430
    int64_t result; // 0x3a0430
    return result;
}

// Address range: 0x3a04ca - 0x3a04dc
int64_t function_3a04ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a04ca
    return function_ffffffff857f0613();
}

// Address range: 0x3a04e1 - 0x3a04e2
int64_t function_3a04e1(void) {
    // 0x3a04e1
    int64_t result; // 0x3a04e1
    return result;
}

// Address range: 0x3a04f7 - 0x3a04fa
int64_t function_3a04f7(void) {
    // 0x3a04f7
    int64_t result; // 0x3a04f7
    return result;
}

// Address range: 0x3a052f - 0x3a054b
int64_t function_3a052f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 59); // 0x3a052f
    *v1 = *v1 | (int32_t)a4;
    bool v2; // 0x3a052f
    int64_t v3 = v2 ? -4 : 4; // 0x3a0534
    int64_t v4 = unknown_ffffffffb5b3443b(v3 + a1, v3 + a2); // 0x3a0535
    int64_t v5; // 0x3a052f
    unsigned char v6 = *(char *)&v5; // 0x3a053f
    *(char *)a3 = v6 / 2 | 128 * v6;
    return v4 + 0xff4798e7 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x3a057b - 0x3a0585
int64_t function_3a057b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 0x17683782); // 0x3a057b
    *v1 = *v1 ^ (char)a4;
    int64_t v2; // 0x3a057b
    int64_t result; // 0x3a057b
    *(int32_t *)a1 = *(int32_t *)&v2 + (int32_t)result;
    return result;
}

// Address range: 0x3a0588 - 0x3a0589
int64_t function_3a0588(int64_t a1) {
    // 0x3a0588
    int64_t result; // 0x3a0588
    return result;
}

// Address range: 0x3a071a - 0x3a0722
int64_t function_3a071a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a071a
    int64_t result; // 0x3a071a
    return result;
}

// Address range: 0x3a0735 - 0x3a0736
int64_t function_3a0735(void) {
    // 0x3a0735
    int64_t result; // 0x3a0735
    return result;
}

// Address range: 0x3a0752 - 0x3a0758
int64_t function_3a0752(int64_t a1) {
    // 0x3a0752
    int64_t v1; // 0x3a0752
    return v1 & 0xffffffff ^ 0x9201e8af;
}

// Address range: 0x3a0777 - 0x3a077b
int64_t function_3a0777(void) {
    // 0x3a0777
    int64_t v1; // 0x3a0777
    return (int64_t)&v1;
}

// Address range: 0x3a0782 - 0x3a079c
int64_t function_3a0782(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a0782
    *(char *)-0x5657facd0fffc70 = (char)a3;
    unknown_6b8ad93();
    return function_3a0735();
}

// Address range: 0x3a080c - 0x3a080f
int64_t function_3a080c(int64_t a1) {
    // 0x3a080c
    int64_t result; // 0x3a080c
    return result;
}

// Address range: 0x3a0835 - 0x3a0836
int64_t function_3a0835(int64_t a1) {
    // 0x3a0835
    int64_t result; // 0x3a0835
    return result;
}

// Address range: 0x3a087c - 0x3a0927
int64_t function_3a087c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a087c
    int64_t v1; // 0x3a087c
    uint64_t v2 = v1;
    int64_t v3 = a3;
    __asm_out_133((int16_t)a3, (int32_t)v2);
    char * v4 = (char *)(a3 - 68); // 0x3a0882
    *v4 = *v4 + (char)(v2 / 256);
    uint64_t v5 = unknown_79626b8b(); // 0x3a0885
    char * v6 = (char *)(v5 - 0x7687bff6); // 0x3a088a
    char v7 = *v6 + (char)(v5 / 256); // 0x3a088a
    *v6 = v7;
    uint64_t v8 = unknown_7c2dea98(); // 0x3a0892
    if (v7 != 0) {
        int16_t v9 = v8; // 0x3a08d9
        int16_t v10 = (int16_t)*(char *)&v3; // 0x3a08d9
        int64_t v11 = v8 & -0x10000 | (int64_t)(v9 / v10 % 256) | (int64_t)(256 * (v9 % v10)); // 0x3a08e0
        // 0x3a091f
        return v11 - (v8 < 0x6786c601 ? 0x12e30069 : 0x12e30068) & 0xffffffff;
    }
    int64_t v12 = unknown_ffffffffd634e9a7(); // 0x3a08a1
    char v13 = *(char *)-0x17c40f53; // 0x3a08a6
    *(int32_t *)v3 = (256 * (int32_t)(v13 - 77) | -0xfffff0b) + *(int32_t *)&v3;
    int32_t * v14 = (int32_t *)v12; // 0x3a08ae
    __asm_rcl(*v14);
    uint32_t v15 = (int32_t)v12 - *v14; // 0x3a08b0
    if (v15 < 0) {
        int64_t v16 = (v15 + 212) % 256 | v15 & -256;
        return v16 - ((char)v15 > 43 ? 0x12e30069 : 0x12e30068) & 0xffffffff;
    }
    char * v17 = (char *)(v3 + 0x30e62494); // 0x3a08b5
    *v17 = *v17 + (char)v3;
    int64_t result = __asm_int1() & 0xffffffff ^ 0x17006820; // 0x3a08bc
    char * v18 = (char *)(2 * result - 18); // 0x3a08c1
    unsigned char v19 = *v18; // 0x3a08c1
    *v18 = v19 / 128 | 2 * v19;
    return result;
}

// Address range: 0x3a095c - 0x3a09fe
int64_t function_3a095c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3a095c
    int64_t v1; // 0x3a095c
    int64_t result = v1;
    bool v2; // 0x3a095c
    if (true != !v2) {
        // 0x3a095e
        return result;
    }
    // 0x3a098b
    if (llvm_ctpop_i8((char)a2 + (char)a1) % 2 != 0) {
        // 0x3a0993
        return (result + a4 / 256) % 256 | result & -256;
    }
    // 0x3a09cf
    unknown_ffffffff883d99e1();
    int32_t * v3 = (int32_t *)(unknown_fffffffffedf6eec() + 14); // 0x3a09f2
    *v3 = *v3 + (int32_t)v1;
    return function_1e190be6();
}

// Address range: 0x3a09fe - 0x3a0afe
int64_t function_3a09fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    char * v2 = (char *)(a3 + 75); // 0x3a0a01
    *v2 = *v2 - (char)a3;
    if (a4 != 1) {
        // 0x3a0a2a
        int64_t result; // 0x3a09fe
        return result;
    }
    // 0x3a0a06
    int64_t v3; // 0x3a09fe
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    int64_t v4 = unknown_6e44aa0d(); // 0x3a0a07
    bool v5; // 0x3a09fe
    int64_t v6 = (v5 ? -1 : 1) + a1; // 0x3a0a0c
    *(int32_t *)v4 = (int32_t)v4;
    v1 = (a5 ^ a3) & 0xffffffff;
    int64_t v7 = v4 & 241 | 14; // 0x3a0a17
    int64_t result2 = v7 | v4 & -256;
    *(int32_t *)v6 = (int32_t)result2;
    int32_t v8; // 0x3a09fe
    if (llvm_ctpop_i8((char)(v8 + (int32_t)v7)) % 2 == 0) {
        // 0x3a0a2a
        return result2;
    }
    uint32_t v9 = (int32_t)(v6 + (v5 ? 0xfffffffc : 4)) | 6; // 0x3a0a99
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x3a0a99
    int64_t v11; // bp+6121, 0x3a09fe
    int64_t v12 = (int64_t)&v11; // bp+6113, 0x3a0a9c
    int64_t v13 = result2 & 0xffffffff; // 0x3a0a9d
    if (v10 % 2 != 0) {
        int32_t v14 = *(int32_t *)0x2229c43 ^ (int32_t)(int64_t)&v1; // 0x3a0af7
        unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x3a0af7
        *(int32_t *)0x2229c43 = v14;
        *(int64_t *)v13 = 0x4000 * (int64_t)(bool)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(v15 % 2 == 0) | 2;
        return (int64_t)&v12;
    }
    // 0x3a0aa0
    *(int64_t *)(v13 - 8) = (int64_t)v9;
    unknown_363c0aa7(v9);
    uint32_t v16 = *(int32_t *)-0x387b281b05d6fe18; // 0x3a0aaf
    unsigned char v17 = *(char *)(a3 - 91); // 0x3a0ab8
    return (int64_t)(v16 % 256) * (int64_t)v17 | (int64_t)(v16 & -0x10000);
}

// Address range: 0x3a0b06 - 0x3a0b07
int64_t function_3a0b06(void) {
    // 0x3a0b06
    int64_t result; // 0x3a0b06
    return result;
}

// Address range: 0x3a0b09 - 0x3a0b11
int64_t function_3a0b09(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x5befba8a); // 0x3a0b09
    *v1 = *v1 + (int32_t)a2;
    return function_3a0b06();
}

// Address range: 0x3a0b4f - 0x3a0b5b
int64_t function_3a0b4f(int64_t a1, int64_t a2) {
    // 0x3a0b4f
    return unknown_1c426b57();
}

// Address range: 0x3a0b5b - 0x3a0b60
int64_t function_3a0b5b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3a0b5b
    int64_t v1; // 0x3a0b5b
    uint64_t v2 = v1;
    unsigned char v3 = (char)(a4 / 256); // 0x3a0b5b
    unsigned char v4 = (char)(v2 / 256); // 0x3a0b5b
    char v5 = v4 + v3; // 0x3a0b5b
    return v2 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 + v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v5) % 2 == 0)) | 512;
}

// Address range: 0x3a0b76 - 0x3a0bef
int64_t function_3a0b76(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(__asm_hlt() - 0x57fec2e3); // 0x3a0b8c
    char v2 = a4 / 256; // 0x3a0b8c
    *v1 = *v1 + v2;
    int64_t v3; // 0x3a0b76
    int32_t * v4 = (int32_t *)(v3 + 0x400068e2); // 0x3a0b92
    int32_t v5 = *v4 + 1; // 0x3a0b92
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x3a0b92
    *v4 = v5;
    __asm_hlt();
    int64_t result = unknown_4f3a2bed(); // 0x3a0be7
    if (v6 % 2 != 0) {
        // 0x3a0bee
        return result;
    }
    int32_t * v7 = (int32_t *)(8 * a3 + 0x7348d121 + v3); // 0x3a0ba8
    *v7 = *v7 + (int32_t)v3;
    int64_t v8 = result & 0x514b183a ^ 8; // 0x3a0bb5
    char * v9 = (char *)((a2 + a1 & 0xffffffff) + 0x3db50aa6); // 0x3a0bbb
    *v9 = *v9 + v2;
    int32_t * v10 = (int32_t *)v8; // 0x3a0bc1
    *v10 = *v10 + (int32_t)v8;
    int64_t v11; // bp-16421, 0x3a0b76
    return (int64_t)&v11;
}

// Address range: 0x3a0c29 - 0x3a0c2f
int64_t function_3a0c29(void) {
    // 0x3a0c29
    return __asm_iretd();
}

// Address range: 0x3a0c3f - 0x3a0c7a
int64_t function_3a0c3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3a0c3f
    bool v1; // 0x3a0c3f
    if (v1) {
        // 0x3a0c71
        return (int64_t)*(int32_t *)0x21c02a6001e8f8e1;
    }
    // 0x3a0c41
    int64_t v2; // 0x3a0c3f
    char * v3 = (char *)(v2 + a5); // 0x3a0c4d
    *v3 = *v3 + (char)a2;
    *(int32_t *)a1 = *(int32_t *)(a7 & 0xffffffff);
    return a2 & 0xffffffff;
}

// Address range: 0x3a0d47 - 0x3a0d4c
int64_t function_3a0d47(void) {
    // 0x3a0d47
    return function_ffffffffb4773545();
}

// Address range: 0x3a0d6e - 0x3a0e37
int64_t function_3a0d6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 - 110); // 0x3a0d6e
    int64_t v2; // 0x3a0d6e
    bool v3; // 0x3a0d6e
    int64_t v4 = (int32_t)v3 + (int32_t)v2 - v1; // 0x3a0d6e
    unknown_ffffffffb00f677a();
    if (a4 == 1) {
        // 0x3a0d7f
        __asm_in((int16_t)a3);
        *(int32_t *)((v3 ? -1 : 1) + a1) = 0;
        __asm_out_134(-100, -6);
        int64_t result = unknown_fffffffff6cde498(); // 0x3a0d92
        *(int64_t *)(v4 - 8) = 106;
        *(int32_t *)(a3 & 0xffffffff) = (int32_t)result;
        return result;
    }
    // 0x3a0dfd
    unknown_18a71607();
    char v5 = a3; // 0x3a0e02
    char v6 = 2 * v5; // 0x3a0e02
    if (v6 < 0) {
        int64_t v7 = unknown_4a43eb10(); // 0x3a0e0a
        return (v7 + (v5 < 0 ? 52 : 51)) % 256 | v7 & -256;
    }
    // 0x3a0db8
    unknown_ffffffff89cb5cc5();
    uint64_t v8 = __asm_wait(); // 0x3a0dc4
    int32_t * v9 = (int32_t *)(*(int64_t *)v4 + 0x1e83686); // 0x3a0dca
    *v9 = *v9 / 2 | 0x80000000 * (int32_t)(*(char *)(v2 + a1) > v6);
    return v8 & -256 | (int64_t)*(char *)(v8 % 256 + v2);
}

// Address range: 0x3a0e45 - 0x3a0e4a
int64_t function_3a0e45(void) {
    // 0x3a0e45
    int64_t v1; // 0x3a0e45
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x3a0e98 - 0x3a0e9a
int64_t function_3a0e98(void) {
    // 0x3a0e98
    int64_t result; // 0x3a0e98
    return result;
}

// Address range: 0x3a0eae - 0x3a0eb9
int64_t function_3a0eae(int64_t a1, int64_t a2) {
    // 0x3a0eae
    int64_t result; // 0x3a0eae
    *(char *)a2 = (char)(result & result);
    return result;
}

// Address range: 0x3a0ef5 - 0x3a0efd
int64_t function_3a0ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a0ef5
    int64_t result; // 0x3a0ef5
    char * v1 = (char *)(result - 0x6144a35a); // 0x3a0ef5
    *v1 = *v1 + (char)a3;
    return result;
}

// Address range: 0x3a0f45 - 0x3a0f4a
int64_t function_3a0f45(int64_t a1) {
    // 0x3a0f45
    int64_t result; // 0x3a0f45
    return result;
}

// Address range: 0x3a0f88 - 0x3a0f89
int64_t function_3a0f88(void) {
    // 0x3a0f88
    int64_t result; // 0x3a0f88
    return result;
}

// Address range: 0x3a0f93 - 0x3a0fa0
int64_t function_3a0f93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a0f93
    unknown_4a92109c();
    return function_3a0f88();
}

// Address range: 0x3a0ff9 - 0x3a1010
int64_t function_3a0ff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a0ff9
    int64_t result; // 0x3a0ff9
    *(char *)(a5 + 0x19b3ac01 + 8 * result) = (char)a6;
    int64_t v1; // 0x3a0ff9
    __asm_outsb((int16_t)a3, *(char *)&v1);
    *(int32_t *)a1 = (int32_t)result;
    char * v2 = (char *)(a2 - 71); // 0x3a100b
    int64_t v3; // 0x3a0ff9
    *v2 = *v2 + (char)(*(int32_t *)&v3 / 256);
    return result;
}

// Address range: 0x3a104d - 0x3a105a
int64_t function_3a104d(void) {
    // 0x3a104d
    __asm_out_134(117, (char)unknown_ffffffffd5a04153());
    __asm_int3();
    return function_ffffffffc3b1a1e9();
}

// Address range: 0x3a106a - 0x3a106c
int64_t function_3a106a(void) {
    // 0x3a106a
    int64_t result; // 0x3a106a
    return result;
}

// Address range: 0x3a1074 - 0x3a1076
int64_t function_3a1074(void) {
    // 0x3a1074
    int64_t result; // 0x3a1074
    return result;
}

// Address range: 0x3a1083 - 0x3a1086
int64_t function_3a1083(int64_t a1, int64_t a2) {
    // 0x3a1083
    int64_t v1; // 0x3a1083
    bool v2; // 0x3a1083
    return function_3a109b(a1, (v2 ? -1 : 1) + a2, v1, v1, v1, v1);
}

// Address range: 0x3a1086 - 0x3a108b
int64_t function_3a1086(void) {
    // 0x3a1086
    return function_2221eba();
}

// Address range: 0x3a109b - 0x3a116a
int64_t function_3a109b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a109b
    int3_t v1; // 0x3a109b
    int3_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    int64_t v5; // 0x3a109b
    unsigned char v6 = *(char *)(a3 + 19 + v5); // 0x3a109b
    int64_t v7 = v5 | a4 & 0xff00; // 0x3a10a3
    unknown_64c9a0ad();
    int32_t v8 = *(int32_t *)(v5 + 38); // 0x3a10ac
    int64_t v9 = (int64_t)(v8 + (int32_t)(a3 & 0xffffff00 | (int64_t)v6) & -0xff01) | (int64_t)&g2; // 0x3a10b2
    uint64_t v10 = v5 ^ a2;
    int64_t v11 = v7 & -256; // 0x3a10b4
    int64_t v12 = v11 | v10 % 256; // 0x3a10b4
    unknown_2a4568bc();
    int64_t v13 = __asm_iretd(); // 0x3a10bb
    if ((char)v10 == 0) {
        int32_t * v14 = (int32_t *)(v9 + 71); // 0x3a113e
        *v14 = *v14 + (int32_t)v12;
        int64_t v15 = unknown_ffffffffb7c15747(); // 0x3a1141
        int16_t v16 = v9; // 0x3a1147
        __asm_outsb(v16, *(char *)&v3);
        *(char *)v9 = 0;
        uint32_t result = (0x10000 * (int32_t)v15 >> 16) - (int32_t)&g1; // 0x3a114c
        if (result == -0x4be427ff) {
            float80_t v17 = __frontend_reg_load_fpr(v2); // 0x3a1159
            *(int32_t *)((v12 & -0xff01 | 2 * v7 & 0xfe00) - 111) = (int32_t)v17;
        }
        // 0x3a115c
        *(int32_t *)v4 = __asm_insd(v16);
        *(char *)v4 = *(char *)&v4 | (char)result;
        return result;
    }
    uint32_t v18 = (int32_t)v5 & -256 | *(int32_t *)(v7 + 4 * a1) | 181; // 0x3a10af
    uint64_t v19 = v9 | v12;
    uint64_t v20 = v9 & -256 | 256 * v13 & 0xff00; // 0x3a10c0
    int64_t v21 = v20 | v19 % 256; // 0x3a10c0
    int64_t v22 = (v13 + 232) % 256 | v13 & 0xffffff00; // 0x3a10c2
    uint32_t v23 = (int32_t)v5 + 8 + v18; // 0x3a10c4
    char * v24 = (char *)(v21 + 2 * a1); // 0x3a10c6
    *v24 = (char)v19 + (char)(v23 < v18) + *v24;
    __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v2) + (float80_t)(float32_t)(int32_t)v3);
    int64_t v25 = 256 * (v3 + (int64_t)(v23 / 256)) & 0xff00 | (int64_t)(v23 & -0xff01); // 0x3a10d3
    int32_t * v26 = (int32_t *)v12; // 0x3a10d5
    *v26 = *v26 + (int32_t)v21;
    uint32_t v27 = *(int32_t *)v22; // 0x3a10d7
    uint32_t v28 = *(int32_t *)&v4; // 0x3a10d7
    bool v29; // 0x3a109b
    int64_t v30 = v29 ? -4 : 4; // 0x3a10d7
    int64_t v31 = v4 + v30; // 0x3a10d7
    int64_t v32 = v22 + v30; // 0x3a10d7
    v3 = v32;
    int64_t v33; // 0x3a109b
    char v34 = *(char *)&v33; // 0x3a10da
    int64_t v35 = v7 & 0xffffff00;
    int32_t * v36 = (int32_t *)(v11 - 100); // 0x3a10e4
    *v36 = *v36 + -99 * *(int32_t *)(v21 + 116);
    int32_t * v37 = (int32_t *)v25; // 0x3a10ec
    *v37 = *v37 + (int32_t)v25;
    *(int64_t *)v5 = 16;
    char * v38 = (char *)(v21 - 109); // 0x3a10f3
    *v38 = *v38 + (char)(v20 / 256);
    int64_t * v39 = (int64_t *)(v5 - 8); // 0x3a10f6
    *v39 = -0x71fc9200;
    int32_t * v40 = (int32_t *)(v32 + 0x3c029889); // 0x3a10fd
    uint32_t v41 = *v40; // 0x3a10fd
    uint32_t v42 = v41 + (int32_t)(v31 & 0xffffff00 | (int64_t)((char)(v27 < v28) - v34 + (char)v31)); // 0x3a10fd
    *v40 = v42;
    int64_t result2 = v35; // 0x3a1103
    if (v42 < v41) {
        char v43 = *(char *)0x67d4f00c; // 0x3a1105
        *(char *)0x67d4f00c = v43 + (char)(0xe83636d7 * v35 / 256);
        *v39 = v3;
        int64_t v44 = v35 + 0x9dbf41ac; // 0x3a110f
        result2 = 256 * v19 + v44 & 0xff00 | v44 & 0xffff00ac;
    }
    // 0x3a111d
    *(int64_t *)(v5 - 16) = v3;
    int64_t v45; // 0x3a109b
    *(char *)v45 = *(char *)&v45 + (char)a6;
    return result2;
}

// Address range: 0x3a116a - 0x3a1171
int64_t function_3a116a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a116a
    int64_t result; // 0x3a116a
    return result;
}

// Address range: 0x3a11a0 - 0x3a11a4
int64_t function_3a11a0(void) {
    // 0x3a11a0
    int64_t result; // 0x3a11a0
    return result;
}

// Address range: 0x3a11a4 - 0x3a11ac
int64_t function_3a11a4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a11a4
    int64_t result; // 0x3a11a4
    int32_t * v1 = (int32_t *)(result + 0x64103977); // 0x3a11a4
    *v1 = *v1 + (int32_t)result;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x3a11fd - 0x3a1200
int64_t function_3a11fd(void) {
    // 0x3a11fd
    int64_t result; // 0x3a11fd
    return result;
}

// Address range: 0x3a1288 - 0x3a1290
int64_t function_3a1288(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x3a1288
    *v1 = *v1 | (char)a4;
    int64_t result = function_3a1298(a1, a2, a3, (int64_t)&g5, (int64_t)&g5, (int64_t)&g5); // 0x3a128b
    return result;
}

// Address range: 0x3a1296 - 0x3a1298
int64_t function_3a1296(void) {
    // 0x3a1296
    int64_t v1; // 0x3a1296
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x3a1298 - 0x3a1311
int64_t function_3a1298(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a1298
    int64_t v1; // 0x3a1298
    bool v2; // 0x3a1298
    return v2 | false ? v1 : v1;
}

// Address range: 0x3ec896 - 0x3ec8a0
int64_t function_3ec896(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ec896
    int64_t v1; // 0x3ec896
    int64_t v2 = v1;
    *(char *)a1 = (char)v2;
    return v2 & -256 | a3 & 0xff00 | (v2 + 98) % 256;
}

// Address range: 0x3ec8ab - 0x3ec8ad
int64_t function_3ec8ab(void) {
    // 0x3ec8ab
    int64_t result; // 0x3ec8ab
    return result;
}

// Address range: 0x3ec8df - 0x3ec8e9
int64_t function_3ec8df(int64_t a1) {
    // 0x3ec8df
    int64_t result; // 0x3ec8df
    return result;
}

// Address range: 0x3ec8ed - 0x3ec902
int64_t function_3ec8ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ec8ed
    int64_t v1; // 0x3ec8ed
    int64_t v2; // 0x3ec8ed
    *(char *)a3 = *(char *)&v1 + (char)v2;
    return 2 * v2 & 0xffffff00 | (int64_t)*(char *)-0xcf7b3c329d86654;
}

// Address range: 0x3ec944 - 0x3ec979
int64_t function_3ec944(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ec944
    int64_t v1; // 0x3ec944
    char v2 = v1; // 0x3ec944
    *(char *)-0x7fbaefa27192a99 = v2;
    char * v3 = (char *)(a4 - 0x33ffcf56); // 0x3ec950
    *v3 = *v3 | v2;
    int64_t v4; // 0x3ec944
    *(char *)a3 = *(char *)&v4 + v2;
    int32_t * v5 = (int32_t *)(v1 + 37); // 0x3ec95e
    *v5 = (int32_t)a3;
    char v6 = __asm_in((int16_t)*v5); // 0x3ec965
    return (v1 | (int64_t)v6) & -256 | (int64_t)(v6 | -72);
}

// Address range: 0x3ec97d - 0x3ec97e
int64_t function_3ec97d(void) {
    // 0x3ec97d
    int64_t result; // 0x3ec97d
    return result;
}

// Address range: 0x3ec97e - 0x3ec9a4
int64_t function_3ec97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ec97e
    int64_t result; // 0x3ec97e
    if (a4 == 0) {
        // 0x3ec99c
        return result;
    }
    int64_t result2 = __asm_hlt(); // 0x3ec980
    int64_t v1 = a1; // bp-8, 0x3ec984
    int32_t * v2 = (int32_t *)(result + 32); // 0x3ec986
    *v2 = *v2 & (int32_t)(int64_t)&v1;
    return result2;
}

// Address range: 0x3ec9c3 - 0x3ec9f1
int64_t function_3ec9c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ec9c3
    int64_t v1; // 0x3ec9c3
    char * v2 = (char *)(v1 - 24); // 0x3ec9c4
    *v2 = *v2 | (char)a4;
    __asm_int3();
    int64_t v3 = unknown_ffffffffc250002f(); // 0x3ec9ca
    *(char *)a5 = (char)a3;
    *(int32_t *)-0x4ab137fee985a5f4 = (int32_t)v3;
    *(char *)-0x5ff4886827941880 = (char)v3;
    __asm_int(18);
    return function_468d6c21();
}

// Address range: 0x3eca15 - 0x3eca16
int64_t function_3eca15(void) {
    // 0x3eca15
    int64_t result; // 0x3eca15
    return result;
}

// Address range: 0x3eca2e - 0x3eca31
int64_t function_3eca2e(void) {
    // 0x3eca2e
    int64_t result; // 0x3eca2e
    return result;
}

// Address range: 0x3eca53 - 0x3eca54
int64_t function_3eca53(void) {
    // 0x3eca53
    int64_t result; // 0x3eca53
    return result;
}

// Address range: 0x3eca6a - 0x3eca72
int64_t function_3eca6a(int64_t a1, int64_t a2) {
    // 0x3eca6a
    return function_79e1cfe();
}

// Address range: 0x3eca73 - 0x3eca7f
int64_t function_3eca73(int64_t a1, int64_t a2) {
    // 0x3eca73
    int64_t v1; // 0x3eca73
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x3eca87 - 0x3ecaa1
int64_t function_3eca87(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3eca87
    int64_t v1; // 0x3eca87
    bool v2; // 0x3eca87
    if (v2) {
        v1 = function_3eca53();
    }
    // 0x3eca8f
    int64_t v3; // 0x3eca87
    int64_t v4 = 0x100000000 * v3 >> 32; // 0x3eca87
    int64_t v5 = -0x4aaa0ea2 * v4; // 0x3eca87
    int32_t v6 = (int32_t)(v5 != -0x4aaa0ea200000000 * v4 >> 32) | (int32_t)v5; // 0x3eca8f
    int64_t result = v1; // 0x3eca91
    if (llvm_ctpop_i8((char)((int32_t)v3 - v6)) % 2 != 0) {
        result = function_3eca15();
    }
    int64_t v7; // 0x3eca87
    if (v6 < (int32_t)(int64_t)&v7) {
        // 0x3eca98
        return __asm_int3() & -256 | (int64_t)__asm_in_135(121);
    }
    // 0x3ecaf9
    return result;
}

// Address range: 0x3ecb89 - 0x3ecc21
int64_t function_3ecb89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ecb89
    int64_t result; // 0x3ecb89
    bool v1; // 0x3ecb89
    if (v1) {
        // 0x3ecc1a
        return result | 61;
    }
    // 0x3ecc0f
    return result;
}

// Address range: 0x3ecc22 - 0x3ecc25
int64_t function_3ecc22(void) {
    // 0x3ecc22
    int64_t result; // 0x3ecc22
    return result;
}

// Address range: 0x3ecc25 - 0x3ecc2a
int64_t function_3ecc25(int64_t a1, int64_t result) {
    // 0x3ecc25
    return result;
}

// Address range: 0x3ecc35 - 0x3ecd17
int64_t function_3ecc35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int16_t v1 = a3; // 0x3ecc35
    int64_t v2; // 0x3ecc35
    __asm_out_133(v1, (int32_t)v2);
    bool v3; // 0x3ecc35
    if (v3 || v3) {
        int64_t v4 = unknown_ffffffff9779e4b8(); // 0x3ecc39
        *(int64_t *)a2 = v2 & a2;
        *(char *)((v3 ? -4 : 4) + a1) = __asm_insb(v1);
        return (int64_t)((int32_t)v4 - *(int32_t *)(a4 - 20));
    }
    // 0x3ecca3
    *(char *)-0x77c30e4ebf80dd88 = (char)v2;
    int32_t * v5 = (int32_t *)(a1 + 113); // 0x3eccad
    *v5 = *v5 | (int32_t)a4;
    int32_t * v6 = (int32_t *)(a3 + 5); // 0x3ecd01
    int32_t v7 = *v6; // 0x3ecd01
    *v6 = 2 * v7;
    int64_t result = __asm_int3(); // 0x3ecd05
    int32_t * v8 = (int32_t *)(a1 + 116 + v2); // 0x3ecd06
    *v8 = (int32_t)(v7 < 0) + (int32_t)a1 + *v8;
    return result;
}

// Address range: 0x3ecd20 - 0x3ecd9b
int64_t function_3ecd20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 13; // 0x3ecd29
    char v2 = __readgsbyte(v1); // 0x3ecd29
    unsigned char v3 = (char)a4 % 32; // 0x3ecd29
    if (v3 != 0) {
        __writegsbyte(v1, v2 << v3);
    }
    int64_t v4; // 0x3ecd20
    int64_t v5 = v4 & -256 | (int64_t)*(char *)0x291e18900471c897; // 0x3ecd20
    uint64_t v6 = v5 + 0x8f33; // 0x3ecd2d
    int64_t v7 = v4 & -0x10000; // 0x3ecd2d
    unsigned char v8 = (char)v4; // 0x3ecd31
    unsigned char v9 = *(char *)0x6f4ebcfe + v8; // 0x3ecd31
    bool v10 = (int16_t)v5 > 0x70cc ? v9 + (char)((int16_t)v5 > 0x70cc) <= v8 : v9 < v8; // 0x3ecd31
    int64_t v11 = a3; // bp-8, 0x3ecd39
    if (v9 != (char)((int16_t)v5 > 0x70cc) && !v10) {
        int64_t result = v6 & 0xff00 | v7 | (int64_t)*(char *)-0x39beb2262ffc20b7; // 0x3ecd49
        int32_t * v12 = (int32_t *)(a2 + 59); // 0x3ecd4b
        *v12 = *v12 - ((int32_t)a3 & -0xff01 | (int32_t)&g4);
        char * v13 = (char *)(8 * result + (int64_t)&v11); // 0x3ecd4e
        *v13 = *v13 & (char)v4;
        return result;
    }
    int64_t result2 = v6 % 0x10000 | v7; // 0x3ecd2d
    if (v9 == (char)((int16_t)v5 > 0x70cc)) {
        // 0x3ecd9b
        return result2;
    }
    char * v14 = (char *)result2; // 0x3ecd87
    *v14 = *v14 & (char)v6;
    return result2;
}

// Address range: 0x3ecda5 - 0x3ecdcd
int64_t function_3ecda5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x3ecda5
    int64_t v1; // 0x3ecda5
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 24); // 0x3ecdad
    *v3 = -*v3;
    char * v4 = (char *)(v2 + 0x13aa7182); // 0x3ecdb0
    char v5 = *v4 + (char)(v2 / 256); // 0x3ecdb0
    *v4 = v5;
    if (v5 != 0) {
        // 0x3ecdbf
        return (v2 + 1 + (int64_t)(-1 - (int32_t)v1 < (int32_t)v2)) % 256 | v2 & -256;
    }
    // 0x3ecdbd
    return result;
}

// Address range: 0x3ece23 - 0x3ece25
int64_t function_3ece23(void) {
    // 0x3ece23
    int64_t result; // 0x3ece23
    return result;
}

// Address range: 0x3eceb0 - 0x3eceb3
int64_t function_3eceb0(int64_t a1) {
    // 0x3eceb0
    int64_t result; // 0x3eceb0
    return result;
}

// Address range: 0x3ecf55 - 0x3ecf58
int64_t function_3ecf55(void) {
    // 0x3ecf55
    int64_t result; // 0x3ecf55
    return result;
}

// Address range: 0x3ecf75 - 0x3ecf76
int64_t function_3ecf75(void) {
    // 0x3ecf75
    int64_t result; // 0x3ecf75
    return result;
}

// Address range: 0x3ecfa2 - 0x3ecfb7
int64_t function_3ecfa2(int64_t a1, int64_t a2) {
    // 0x3ecfa2
    float80_t v1; // 0x3ecfa2
    *(float32_t *)(a1 + 118) = (float32_t)v1;
    int64_t v2; // 0x3ecfa2
    bool v3; // 0x3ecfa2
    if (!v3) {
        v2 = function_3ecf75();
    }
    // 0x3ecfa7
    return v2 + 0xf83da004 & 0xffffffff;
}

// Address range: 0x3ed040 - 0x3ed04d
int64_t function_3ed040(void) {
    // 0x3ed040
    int64_t v1; // 0x3ed040
    uint64_t v2 = v1;
    int64_t result = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x3ed045
    int32_t * v3 = (int32_t *)(v1 - 50); // 0x3ed046
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x3ed066 - 0x3ed06d
int64_t function_3ed066(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x3ed066
    return result;
}

// Address range: 0x3ed0bd - 0x3ed0bf
int64_t function_3ed0bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ed0bd
    return a4 & 0xffffffff;
}

// Address range: 0x3ed0e7 - 0x3ed167
int64_t function_3ed0e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ed0e7
    __asm_in((int16_t)a3);
    bool v1; // 0x3ed0e7
    if (v1) {
        // 0x3ed160
        int64_t v2; // bp-8, 0x3ed0e7
        int64_t v3 = (int64_t)&v2; // 0x3ed160
        return v3 - (a3 & 0xff00) & 0xff00 | v3 & -0xff08;
    }
    // 0x3ed0ef
    return a2 & 0xffffffff;
}

// Address range: 0x3ed191 - 0x3ed199
int64_t function_3ed191(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ed191
    return function_ffffffff8f7fa70c();
}

// Address range: 0x3ed1c1 - 0x3ed1c2
int64_t function_3ed1c1(void) {
    // 0x3ed1c1
    int64_t result; // 0x3ed1c1
    return result;
}

// Address range: 0x3ed1c8 - 0x3ed213
int64_t function_3ed1c8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ed1c8
    int64_t v1; // 0x3ed1c8
    int64_t v2 = v1;
    char v3 = a4 / 256 | a4; // 0x3ed1cf
    if (v3 == 0) {
        uint32_t v4 = *(int32_t *)(function_3ed1c1() - 0x2854a9ee); // 0x3ed1d5
        return (v2 - (v4 > -1 - (int32_t)v1 ? 164 : 163)) % 256 | v2 & 0xffffff00;
    }
    unsigned char v5 = (char)a4; // 0x3ed205
    unsigned char v6 = v3 + v5; // 0x3ed205
    unsigned char v7 = v6 % 32; // 0x3ed20a
    if (v7 != 0) {
        char * v8 = (char *)(a1 - 7); // 0x3ed20a
        unsigned char v9 = *v8; // 0x3ed20a
        *v8 = v9 << v7 | (char)(v6 < v5) << v7 - 1 | (char)((int16_t)v9 >> (int16_t)(9 - v7));
    }
    int64_t v10 = v1 + 0xf09f83ed; // 0x3ed1c8
    int64_t v11; // 0x3ed1c8
    __asm_outsb((int16_t)a7, *(char *)&v11);
    return (v10 + (int64_t)v6) % 256 | v10 & 0xffffff00;
}

// Address range: 0x3ed223 - 0x3ed22c
int64_t function_3ed223(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ed223
    int64_t result; // 0x3ed223
    return result;
}

// Address range: 0x3ed23f - 0x3ed240
int64_t function_3ed23f(void) {
    // 0x3ed23f
    int64_t result; // 0x3ed23f
    return result;
}

// Address range: 0x3ed25b - 0x3ed313
int64_t function_3ed25b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ed25b
    int64_t result; // 0x3ed25b
    bool v1; // 0x3ed25b
    if (v1 || v1) {
        result = function_3ed23f();
    }
    // 0x3ed25d
    *(char *)a3 = (char)a3 | 74;
    int32_t * v2 = (int32_t *)(result - 0x7c33ba04); // 0x3ed264
    int32_t v3 = *v2 - (int32_t)a4; // 0x3ed264
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x3ed264
    *v2 = v3;
    if (v4 % 2 == 0) {
        // 0x3ed26c
        return result;
    }
    // 0x3ed2d6
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x3ed32d - 0x3ed332
int64_t function_3ed32d(void) {
    // 0x3ed32d
    return function_fffffffffb6828b6();
}

// Address range: 0x3ed33a - 0x3ed460
int64_t function_3ed33a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3ed33a
    int64_t v1; // 0x3ed33a
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x3ed33b
    uint32_t v3 = (int32_t)a5; // 0x3ed342
    uint32_t v4 = v3 + 0x4af08567 + (int32_t)(0x630c4b63 * v2 != 0x630c4b6300000000 * v2 >> 32); // 0x3ed342
    bool v5 = 0x630c4b63 * v2 != 0x630c4b6300000000 * v2 >> 32 ? v4 <= v3 : v3 > 0xb50f7a98; // 0x3ed342
    int64_t v6 = v4; // 0x3ed342
    char * v7 = (char *)(a3 + 18); // 0x3ed34b
    *v7 = (char)(v4 != 0 == v5) + (char)v1 + *v7;
    uint32_t v8 = *(int32_t *)(a2 - 0x6c84a9d6 + v1); // 0x3ed350
    uint64_t v9 = (v4 != 0 ? v6 : v6 | 35) * (int64_t)v8; // 0x3ed350
    uint64_t v10 = v9 / 0x100000000; // 0x3ed350
    *(char *)-0x3effa8849c1af7c5 = (char)v9;
    char v11 = __asm_in((int16_t)v10); // 0x3ed362
    if (*(int32_t *)(v9 & 0xffffffff) >= (int32_t)a2) {
        // 0x3ed365
        return v9 & 0xffffff00 | (int64_t)v11;
    }
    // 0x3ed3ad
    __asm_int1();
    int32_t * v12 = (int32_t *)v10; // 0x3ed3ae
    *v12 = *v12 + (int32_t)v1;
    return __asm_int1();
}

// Address range: 0x3ed47c - 0x3ed48b
int64_t function_3ed47c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3ed47c
    int64_t v1; // 0x3ed47c
    bool v2; // 0x3ed47c
    uint64_t v3 = v1 - (v2 ? 27 : 26); // 0x3ed47c
    int64_t v4 = a2; // bp-8, 0x3ed47f
    __asm_out_136((int16_t)a3, (char)v3);
    char * v5 = (char *)((v3 % 256 | v1 & -256) + 57); // 0x3ed481
    *v5 = *v5 & (char)(a4 / 256);
    uint64_t v6 = (int64_t)&v4; // 0x3ed486
    char v7 = *(char *)(v1 - 13); // 0x3ed487
    int64_t result = 256 * (int64_t)(v7 ^ (char)(v6 / 256)) | v6 & -0xff08; // 0x3ed487
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x3ed48c - 0x3ed48f
int64_t function_3ed48c(int64_t a1) {
    // 0x3ed48c
    int64_t result; // 0x3ed48c
    return result;
}

// Address range: 0x3ed48f - 0x3ed550
int64_t function_3ed48f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    char v2 = *(char *)(a1 - 93); // 0x3ed48f
    uint32_t v3 = (int32_t)a4 % 32; // 0x3ed494
    int32_t v4; // 0x3ed48f
    bool v5; // 0x3ed48f
    if (v3 == 0) {
        // 0x3ed48f
        v4 = a2;
        v5 = false;
    } else {
        int32_t * v6 = (int32_t *)(a2 + 80);
        int32_t v7 = *v6; // 0x3ed494
        *v6 = v7 << v3;
        v4 = *(int32_t *)&v1;
        v5 = (v7 & 0x80000000 >> v3 - 1) != 0;
    }
    __asm_outsd((int16_t)(256 * (int64_t)(v2 | (char)(a3 / 256)) | a3 % 256), v4);
    int64_t v8; // 0x3ed48f
    *(char *)-0x3c3b7796f8b5fff4 = (char)v8 & 44;
    int32_t v9 = __asm_in_137(-14); // 0x3ed4a9
    unsigned char v10 = (char)v9; // 0x3ed4ab
    unsigned char v11 = v5 ? 99 : 98;
    char v12 = v10 - v11; // 0x3ed4ab
    int64_t v13 = v12; // 0x3ed4ab
    int64_t v14 = v9 & -256; // 0x3ed4ab
    if (v12 < 0) {
        // 0x3ed4b2
        return (int64_t)(*(char *)((v8 & -256 | 193) + v13) | 124) | v14;
    }
    int64_t v15 = v13 | v14; // 0x3ed4ab
    int32_t * v16 = (int32_t *)v15; // 0x3ed52b
    *v16 = (int32_t)v15 + (int32_t)(v5 | v11 > v10) + *v16;
    int32_t v17 = -41 * *(int32_t *)(v15 - 85); // 0x3ed532
    *(int32_t *)a1 = (int32_t)a1;
    *(int32_t *)0x7f1f3c6744511c30 = v17;
    return v17 + 0x69cc9691 + (int32_t)((char)v17 > 193);
}

// Address range: 0x3ed577 - 0x3ed578
int64_t function_3ed577(void) {
    // 0x3ed577
    int64_t result; // 0x3ed577
    return result;
}

// Address range: 0x3ed588 - 0x3ed597
int64_t function_3ed588(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x38e3f24d); // 0x3ed588
    *v1 = *v1 ^ (int32_t)a1;
    return function_3ed577();
}

// Address range: 0x3ed664 - 0x3ed669
int64_t function_3ed664(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ed664
    int64_t result; // 0x3ed664
    return result;
}

// Address range: 0x3ed685 - 0x3ed686
int64_t function_3ed685(void) {
    // 0x3ed685
    int64_t result; // 0x3ed685
    return result;
}
