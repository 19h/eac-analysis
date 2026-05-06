/*
 * Targeted RetDec C for native executable gap queue batch 1004.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x20a59e-0x20a79e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20a79e-0x20a99e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20a99e-0x20ab9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20ad9e-0x20af9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20af9e-0x20b19e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20b19e-0x20b39e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20b39e-0x20b59e rank=- name=- kind=- bytes=- uncovered=-
 *   0x32c055-0x32c255 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32c255-0x32c455 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32c455-0x32c655 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32c655-0x32c855 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32c855-0x32ca55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ca55-0x32cc55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32cc55-0x32ce55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ce55-0x32d055 rank=- name=- kind=- bytes=- uncovered=-
 *   0x445067-0x445267 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1d87abad();
int64_t function_20a59e(int64_t a1);
int64_t function_20a5ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_20a5ca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20a5e3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_20a642(void);
int64_t function_20a66a(void);
int64_t function_20a694(int64_t a1);
int64_t function_20a6a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20a737(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20a792(void);
int64_t function_20a7bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20a895(int64_t a1, int64_t a2);
int64_t function_20a8a9(void);
int64_t function_20a8ba(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20a933(void);
int64_t function_20a944(void);
int64_t function_20a975(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20aa04(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_20aafd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20ab0e(int64_t a1, int64_t a2);
int64_t function_20ad9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_20ae99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20afcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_20b150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_20b302(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20b434(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21acc7d();
int64_t function_21b4066();
int64_t function_21b5306();
int64_t function_28e9db7b();
int64_t function_32c055(void);
int64_t function_32c06c(int64_t a1);
int64_t function_32c081(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32c16b(void);
int64_t function_32c1ad(int64_t a1);
int64_t function_32c1d9(int64_t a1);
int64_t function_32c1f5(void);
int64_t function_32c239(int64_t a1, int64_t a2);
int64_t function_32c25d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_32c29b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32c2c4(void);
int64_t function_32c338(void);
int64_t function_32c351(void);
int64_t function_32c36a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32c391(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_32c48d(void);
int64_t function_32c4a6(void);
int64_t function_32c4e0(int64_t a1);
int64_t function_32c51c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32c543(void);
int64_t function_32c574(void);
int64_t function_32c5b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32c5f5(int64_t a1);
int64_t function_32c601(int64_t a1, int64_t a2);
int64_t function_32c610(int64_t a1);
int64_t function_32c67e(void);
int64_t function_32c69a(int64_t a1);
int64_t function_32c6f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32c790(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32c7d6(void);
int64_t function_32c835(void);
int64_t function_32c84a(void);
int64_t function_32c862(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32c877(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32c888(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32c8d5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32c996(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32c9b1(void);
int64_t function_32c9c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32c9cc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_32ca3d(void);
int64_t function_32ca47(void);
int64_t function_32ca57(int64_t a1);
int64_t function_32ca83(void);
int64_t function_32ca91(int64_t a1);
int64_t function_32caa0(void);
int64_t function_32cb0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32cb21(int64_t a1);
int64_t function_32cc39(void);
int64_t function_32cc72(void);
int64_t function_32cc9c(void);
int64_t function_32ccd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32cf20(int64_t a1);
int64_t function_32cf2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32cfbb(void);
int64_t function_32cfc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_445067(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4450b7(void);
int64_t function_4450c7(void);
int64_t function_445117(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_445154(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44516c(void);
int64_t function_44517b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5);
int64_t function_4451a9(void);
int64_t function_4451ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6d32ffca();
int64_t function_781ee349();
int64_t function_81ba6df();
int64_t function_9bea5c2();
int64_t function_a83cce0();
int64_t function_c823b();
int64_t function_ffffffffafbdfc31();
int64_t function_ffffffffd641ba4e();
int64_t function_ffffffffe8ecea4c();
int64_t function_ffffffffed39cf63();
int64_t unknown_10268f5c();
int64_t unknown_1a2608c5();
int64_t unknown_269dd99b();
int64_t unknown_28c07c7d();
int64_t unknown_2a45a48e();
int64_t unknown_3516c9d2();
int64_t unknown_37f7046e();
int64_t unknown_3a34a8dd();
int64_t unknown_3d34b09d();
int64_t unknown_3db299d2();
int64_t unknown_3df884e8();
int64_t unknown_41177291();
int64_t unknown_476ea338();
int64_t unknown_4850ca8();
int64_t unknown_4927f8c9();
int64_t unknown_4e33cc03();
int64_t unknown_59235de8();
int64_t unknown_5bc5a207();
int64_t unknown_67e3199b();
int64_t unknown_7468908();
int64_t unknown_7c2aa126();
int64_t unknown_82b2f4d();
int64_t unknown_ffffffff9d1b16b4();
int64_t unknown_ffffffffa7e9a3db();
int64_t unknown_ffffffffac8ed96b();
int64_t unknown_ffffffffb1e5ffc3();
int64_t unknown_ffffffffbbfa9b02();
int64_t unknown_ffffffffd36674a5();
int64_t unknown_ffffffffe32d735d();
int64_t unknown_ffffffffe897d0f6();
int64_t unknown_ffffffffebd1333e();
int64_t unknown_fffffffff53307ab();
int64_t unknown_fffffffffb5766b1();

// Address range: 0x20a59e - 0x20a5a7
int64_t function_20a59e(int64_t a1) {
    // 0x20a59e
    int64_t v1; // 0x20a59e
    int64_t result = unknown_ffffffffd36674a5(v1 & 0xffffffff); // 0x20a59f
    char * v2 = (char *)(result - 91); // 0x20a5a4
    *v2 = *v2 + (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x20a5ab - 0x20a5c6
int64_t function_20a5ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x20a5ab
    unknown_ffffffff9d1b16b4();
    return unknown_ffffffffb1e5ffc3();
}

// Address range: 0x20a5ca - 0x20a5e3
int64_t function_20a5ca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20a5ca
    int64_t v1; // 0x20a5ca
    int64_t v2 = unknown_3db299d2() + 2 * v1; // 0x20a5d3
    int32_t * v3 = (int32_t *)(a3 - 0x3a67ef34); // 0x20a5d5
    *v3 = *v3 + (int32_t)v2;
    bool v4; // 0x20a5ca
    return v2 & 0xffffff00 | (int64_t)*(char *)((v4 ? -1 : 1) + a2);
}

// Address range: 0x20a5e3 - 0x20a62e
int64_t function_20a5e3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x20a5e3
    int64_t v1; // 0x20a5e3
    uint64_t v2 = v1;
    int64_t v3; // bp-63, 0x20a5e3
    int64_t v4 = (int64_t)&v3; // 0x20a5e4
    int64_t v5 = v4 + 171; // 0x20a5e6
    int64_t v6 = v5 & 251 | v4 & -256; // 0x20a5e6
    *(char *)v2 = (char)(v2 / 256 | v2);
    char * v7 = (char *)v6; // 0x20a5ea
    *v7 = *v7 + (char)v5;
    int32_t * v8 = (int32_t *)(a1 + 0x694e47e0 + (v1 & 0xffffffff)); // 0x20a5f6
    *v8 = *v8 + (int32_t)a4;
    int64_t v9; // 0x20a5e3
    uint32_t v10 = *(int32_t *)&v9; // 0x20a5fd
    *(int32_t *)a4 = v10 / 0x400000 | 1024 * v10;
    int32_t * v11 = (int32_t *)(v1 + 0x5a16b6cb); // 0x20a605
    *v11 = *v11 - (int32_t)v1;
    int64_t v12 = v6 & 0xec2b24c1 | 0x13d4db3a; // 0x20a60d
    char * v13 = (char *)v12; // 0x20a612
    *v13 = *v13 + (char)(a3 / 256);
    return a1 + 0x123b2a4f + (int64_t)((int32_t)v12 < 0x273f9301) & 0xffffffff;
}

// Address range: 0x20a642 - 0x20a644
int64_t function_20a642(void) {
    // 0x20a642
    int64_t result; // 0x20a642
    return result;
}

// Address range: 0x20a66a - 0x20a66f
int64_t function_20a66a(void) {
    // 0x20a66a
    return function_781ee349();
}

// Address range: 0x20a694 - 0x20a695
int64_t function_20a694(int64_t a1) {
    // 0x20a694
    int64_t result; // 0x20a694
    return result;
}

// Address range: 0x20a6a0 - 0x20a6a3
int64_t function_20a6a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20a6a0
    int64_t result; // 0x20a6a0
    *(int32_t *)result = (int32_t)a4;
    return result;
}

// Address range: 0x20a737 - 0x20a75d
int64_t function_20a737(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20a737
    unknown_ffffffffebd1333e();
    int64_t v1; // 0x20a737
    *(char *)a2 = (char)v1 + (char)a3;
    unknown_82b2f4d();
    __asm_in(-109);
    return unknown_10268f5c();
}

// Address range: 0x20a792 - 0x20a796
int64_t function_20a792(void) {
    // 0x20a792
    int64_t v1; // 0x20a792
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x20a7bc - 0x20a805
int64_t function_20a7bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20a7bc
    *(int32_t *)-0x172d8c34fa796df7 = (int32_t)unknown_1a2608c5();
    int64_t v1 = __asm_wait(); // 0x20a7d3
    int64_t v2; // 0x20a7bc
    int64_t v3 = v2 & -0x10000 | (int64_t)&g2 & -256; // 0x20a7d5
    int64_t v4 = *(int64_t *)(v3 - 0x17223e00); // 0x20a7d7
    uint64_t v5 = v1 + v3; // 0x20a7e6
    *(char *)0xb392f010 = *(char *)0xb392f010 + (char)(v5 / 256);
    __asm_in_133(96);
    *(char *)(a2 + 127 + (int64_t)(-1 - (int32_t)a4 < (int32_t)v2) + v4) = (char)v5;
    return __asm_iretd(a1);
}

// Address range: 0x20a895 - 0x20a8a9
int64_t function_20a895(int64_t a1, int64_t a2) {
    // 0x20a895
    unknown_269dd99b();
    return 0x7903d838;
}

// Address range: 0x20a8a9 - 0x20a8b5
int64_t function_20a8a9(void) {
    // 0x20a8a9
    unknown_fffffffffb5766b1();
    return function_28e9db7b();
}

// Address range: 0x20a8ba - 0x20a8bf
int64_t function_20a8ba(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20a8ba
    int64_t v1; // 0x20a8ba
    bool v2; // 0x20a8ba
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x20a933 - 0x20a938
int64_t function_20a933(void) {
    // 0x20a933
    return function_ffffffffafbdfc31();
}

// Address range: 0x20a944 - 0x20a946
int64_t function_20a944(void) {
    // 0x20a944
    int64_t result; // 0x20a944
    return result;
}

// Address range: 0x20a975 - 0x20a9aa
int64_t function_20a975(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20a975
    int64_t v1; // 0x20a975
    int64_t v2 = a1 % 256 & v1 | a1 & -256; // 0x20a975
    int32_t * v3 = (int32_t *)(v2 + 0xe885d2db); // 0x20a97f
    *v3 = *v3 + (int32_t)v1;
    int64_t v4 = unknown_41177291(v2, 0xe885d2db) + 0x4b5dda7c & 0xffffffff; // 0x20a990
    __asm_rcl(*(int32_t *)(v1 + 107));
    int32_t * v5 = (int32_t *)(v4 - 24); // 0x20a998
    *v5 = *v5 + 1;
    int32_t * v6 = (int32_t *)(v4 - 76); // 0x20a9a1
    *v6 = *v6 - 0x177a2d25;
    return __asm_hlt();
}

// Address range: 0x20aa04 - 0x20aa40
int64_t function_20aa04(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 47); // 0x20aa0e
    uint32_t v2 = *v1; // 0x20aa0e
    uint32_t v3 = v2 + (int32_t)a3; // 0x20aa0e
    *v1 = v3;
    int64_t v4; // 0x20aa04
    *(char *)a1 = (char)(v4 + a3 / 256 + (int64_t)(v3 < v2));
    int64_t v5; // 0x20aa04
    char v6 = *(char *)&v5; // 0x20aa16
    bool v7; // 0x20aa04
    int32_t * v8 = (int32_t *)(a1 - 97 + (v7 ? -1 : 1)); // 0x20aa27
    *v8 = *v8 - (int32_t)v4;
    __asm_frstor(*(int864_t *)((a4 & -256 | (int64_t)(v6 + (char)a4)) + 86));
    return unknown_476ea338();
}

// Address range: 0x20aafd - 0x20ab0e
int64_t function_20aafd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x7c0d53fd); // 0x20ab04
    *v1 = *v1 + (int32_t)a2;
    return __asm_wait();
}

// Address range: 0x20ab0e - 0x20ab10
int64_t function_20ab0e(int64_t a1, int64_t a2) {
    // 0x20ab0e
    int64_t result; // 0x20ab0e
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x20ad9e - 0x20ae99
int64_t function_20ad9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x20ad9e
    int64_t v1; // 0x20ad9e
    return function_c823b(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x20ae99 - 0x20afcf
int64_t function_20ae99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20ae99
    int64_t v1; // bp-40, 0x20ae99
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x20ae99
    return function_c823b(a1, a2, a3, a4, v2, v2, a5);
}

// Address range: 0x20afcf - 0x20b150
int64_t function_20afcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x20afcf
    int64_t v1; // bp-40, 0x20afcf
    v1 = (int64_t)&v1;
    int64_t v2; // bp-56, 0x20afcf
    int64_t v3 = (int64_t)&v2; // 0x20b109
    v2 = v3;
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x20b112
    *v4 = 0x209bbe;
    *(int64_t *)(v3 + 32) = v2;
    int64_t * v5 = (int64_t *)(v3 + 8); // 0x20b119
    int64_t v6 = *v5; // 0x20b119
    v2 = v6;
    *v4 = v6;
    int64_t v7 = *(int64_t *)(v3 + 16); // 0x20b132
    *v5 = v7;
    v2 = v7;
    return function_c823b(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x20b150 - 0x20b302
int64_t function_20b150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x20b150
    int64_t v1; // bp-40, 0x20b150
    int64_t v2 = (int64_t)&v1; // 0x20b1f5
    v1 = a7;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x20b2e4
    v1 = v3;
    *(int64_t *)(v2 - 8) = v3;
    return function_c823b(a1, a2, a3, a4, a5, a6, 0x209e00);
}

// Address range: 0x20b302 - 0x20b434
int64_t function_20b302(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20b302
    int64_t v1; // 0x20b302
    return function_c823b(a1, a2, a3, a4, v1, v1, a5);
}

// Address range: 0x20b434 - 0x20b575
int64_t function_20b434(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20b434
    int64_t v1; // bp-48, 0x20b434
    int64_t v2 = (int64_t)&v1; // 0x20b532
    v1 = v2 + 24;
    *(int64_t *)(v2 - 8) = *(int64_t *)(v2 + 8);
    int64_t v3; // 0x20b434
    return function_c823b(a1, a2, v3, a4, a5, v3, 0x20a26c);
}

// Address range: 0x32c055 - 0x32c056
int64_t function_32c055(void) {
    // 0x32c055
    int64_t result; // 0x32c055
    return result;
}

// Address range: 0x32c06c - 0x32c071
int64_t function_32c06c(int64_t a1) {
    // 0x32c06c
    int64_t v1; // 0x32c06c
    return v1 & -256 | 254;
}

// Address range: 0x32c081 - 0x32c15d
int64_t function_32c081(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x32c081
    *(int32_t *)a1 = (int32_t)v3;
    bool v4; // 0x32c081
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x32c081
    int64_t v6 = v3 + 0xa8081185; // 0x32c082
    int64_t result = v6 & 0xffffffff; // 0x32c082
    uint32_t v7 = (int32_t)v6; // 0x32c087
    int16_t v8 = *(int16_t *)(v3 - 0x313800cf); // 0x32c08c
    uint32_t v9 = *(int32_t *)-0x48baa177; // 0x32c094
    int32_t v10 = v7 < 0xb3270001; // 0x32c094
    uint32_t v11 = v10 + (int32_t)a3; // 0x32c094
    int32_t v12 = v9 - v11; // 0x32c094
    *(int32_t *)-0x48baa177 = v12;
    *(int32_t *)-0x7baef7fec204ee62 = v7;
    char * v13 = (char *)(result + 55); // 0x32c0a5
    unsigned char v14 = *v13; // 0x32c0a5
    *v13 = -56;
    int32_t v15 = *(int32_t *)(result + 52); // 0x32c0a8
    int32_t v16 = *(int32_t *)result; // 0x32c0b1
    int32_t * v17 = (int32_t *)v5; // 0x32c0b8
    *v17 = *v17 - (int32_t)v3;
    if ((int16_t)v6 < 0) {
        // 0x32c0e6
        *(char *)0x335c30ed = *(char *)0x335c30ed + 38;
        *(char *)v1 = *(char *)&v1 + (char)v3;
        return result;
    }
    bool v18 = v7 < 0xb3270001 ? v11 != -1 | v9 < v12 - v10 : v9 < v11; // 0x32c094
    uint32_t v19 = (int32_t)v18 - v15 + (int32_t)(a3 & 0xffffff00 | (int64_t)v14); // 0x32c0a8
    int64_t v20 = v19; // 0x32c0a8
    int64_t result2 = unknown_3a34a8dd(v5); // 0x32c0bf
    float80_t v21; // 0x32c081
    *(float80_t *)(v20 - 0x241bf37d) = v21 - (v21 / (float80_t)v8 + (float80_t)v16);
    __asm_out(83, (int32_t)result2);
    if (*(int32_t *)v20 >= 0x6d013d01) {
        // 0x32c0d4
        return result2;
    }
    char * v22 = (char *)result2; // 0x32c12e
    *v22 = *v22 + (char)result2;
    char * v23 = (char *)(result2 + 121); // 0x32c135
    *v23 = *v23 - (char)v19;
    int64_t v24 = v2 + v5; // 0x32c138
    int64_t v25 = v24 & 0xffffffff; // 0x32c138
    __asm_iretd(v25);
    int32_t * v26 = (int32_t *)(result2 & 0xffffffff); // 0x32c148
    *v26 = *v26 + (int32_t)v24;
    *(char *)0x672db19b0200905f = *(char *)0x3d0000d309f87e0a;
    int64_t result3 = __asm_wait() & -256 | 201; // 0x32c158
    *(int32_t *)v25 = *(int32_t *)&v2;
    __asm_out(99, (int32_t)result3);
    return result3;
}

// Address range: 0x32c16b - 0x32c16e
int64_t function_32c16b(void) {
    // 0x32c16b
    int64_t result; // 0x32c16b
    return result;
}

// Address range: 0x32c1ad - 0x32c1ae
int64_t function_32c1ad(int64_t a1) {
    // 0x32c1ad
    int64_t result; // 0x32c1ad
    return result;
}

// Address range: 0x32c1d9 - 0x32c1db
int64_t function_32c1d9(int64_t a1) {
    // 0x32c1d9
    int64_t result; // 0x32c1d9
    return result;
}

// Address range: 0x32c1f5 - 0x32c1fa
int64_t function_32c1f5(void) {
    // 0x32c1f5
    return function_21b5306();
}

// Address range: 0x32c239 - 0x32c23f
int64_t function_32c239(int64_t a1, int64_t a2) {
    // 0x32c239
    int64_t v1; // 0x32c239
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x32c239
    int64_t result; // 0x32c239
    if (47 * v2 == 0x2f00000000 * v2 >> 32) {
        result = function_21b5306();
    }
    // 0x32c23e
    return result;
}

// Address range: 0x32c25d - 0x32c29b
int64_t function_32c25d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x32c25d
    int64_t v3 = v2 + (a3 & 0xff00) & 0xff00 | a3 & -0xff01; // 0x32c25d
    __asm_out_134(-61, (char)v2);
    *(char *)a4 = (char)(a4 / 256);
    int64_t v4 = __asm_int1(); // 0x32c273
    __asm_out_135((int16_t)v3, (int32_t)v4);
    *(int32_t *)(a1 + 0x7df601e8 + v3) = 0x13d00c4;
    int32_t v5 = *(int32_t *)&v1; // 0x32c28e
    *(int32_t *)v1 = (int32_t)(((char)v4 ^ -2) < 154) - (int32_t)v2 + v5;
    return function_81ba6df();
}

// Address range: 0x32c29b - 0x32c2b7
int64_t function_32c29b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32c29b
    int64_t v1; // 0x32c29b
    int64_t v2 = v1;
    *(int16_t *)(2 * v1 + 0x859d0b) = (int16_t)v1;
    return (v2 + 79) % 256 | v2 & -256;
}

// Address range: 0x32c2c4 - 0x32c2c7
int64_t function_32c2c4(void) {
    // 0x32c2c4
    int64_t result; // 0x32c2c4
    return result;
}

// Address range: 0x32c338 - 0x32c33a
int64_t function_32c338(void) {
    // 0x32c338
    int64_t v1; // 0x32c338
    return function_32c391(v1, v1, v1, v1);
}

// Address range: 0x32c351 - 0x32c356
int64_t function_32c351(void) {
    // 0x32c351
    return function_6d32ffca();
}

// Address range: 0x32c36a - 0x32c36f
int64_t function_32c36a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32c36a
    int64_t v1; // 0x32c36a
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x32c391 - 0x32c450
int64_t function_32c391(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x32c391
    __asm_out_134(0, (char)v2);
    int32_t * v3 = (int32_t *)a1; // 0x32c393
    *v3 = (int32_t)a4 + (int32_t)a1;
    int32_t v4 = v2; // 0x32c39a
    uint32_t v5 = v4 - 0x51c5e1; // 0x32c39a
    int64_t result = v5; // 0x32c39a
    if (((v5 ^ v4) & v4 + 0x7fae3a1f) < 0) {
        char * v6 = (char *)result; // 0x32c3a8
        char v7 = v5; // 0x32c3a8
        *v6 = *v6 + v7;
        *(char *)v1 = *(char *)&v1 & v7;
        return result;
    }
    // 0x32c3e4
    *v3 = __asm_insd((int16_t)a3);
    int64_t * v8 = (int64_t *)(a4 + 0x1ea6ae31); // 0x32c445
    *v8 = *v8 - result;
    char * v9 = (char *)(v1 + 8 * v2); // 0x32c44d
    *v9 = *v9 | (char)(a3 / 256);
    return result;
}

// Address range: 0x32c48d - 0x32c492
int64_t function_32c48d(void) {
    // 0x32c48d
    return function_9bea5c2();
}

// Address range: 0x32c4a6 - 0x32c4a7
int64_t function_32c4a6(void) {
    // 0x32c4a6
    int64_t result; // 0x32c4a6
    return result;
}

// Address range: 0x32c4e0 - 0x32c4ed
int64_t function_32c4e0(int64_t a1) {
    // 0x32c4e0
    int64_t v1; // 0x32c4e0
    *(char *)v1 = 0;
    int64_t v2 = unknown_3df884e8(); // 0x32c4e2
    int32_t * v3 = (int32_t *)v2; // 0x32c4e7
    *v3 = *v3 + (int32_t)v2;
    return function_32c4a6();
}

// Address range: 0x32c51c - 0x32c520
int64_t function_32c51c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32c51c
    int64_t v1; // 0x32c51c
    return v1 & -256 | (int64_t)__asm_in_136((int16_t)a3);
}

// Address range: 0x32c543 - 0x32c544
int64_t function_32c543(void) {
    // 0x32c543
    int64_t result; // 0x32c543
    return result;
}

// Address range: 0x32c574 - 0x32c5a2
int64_t function_32c574(void) {
    // 0x32c574
    int64_t v1; // 0x32c574
    *(char *)-0x3103c185 = *(char *)-0x3103c185 + (char)(v1 / 256);
    int64_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x32c586
    int32_t * v3 = (int32_t *)(v2 + 0x3d4daf85); // 0x32c587
    *v3 = *v3 | (int32_t)v1;
    int64_t v4; // 0x32c574
    *(int32_t *)v2 = *(int32_t *)&v4 + (int32_t)v1;
    __asm_hlt();
    return function_21acc7d();
}

// Address range: 0x32c5b3 - 0x32c5eb
int64_t function_32c5b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32c5b3
    int64_t v1; // 0x32c5b3
    __asm_out_134(-64, (char)v1);
    int32_t v2 = v1; // 0x32c5b5
    int64_t v3; // 0x32c5b3
    if ((0x68ff7e - v2 & v2) < 0) {
        v3 = function_32c543();
    }
    int32_t v4 = a1;
    unsigned char v5 = *(char *)v1; // 0x32c5c5
    uint32_t result = *(int32_t *)((v3 & -256 | (int64_t)v5) + 0x7ba04f01); // 0x32c5c7
    if (((result - v4 ^ result) & (result ^ v4)) < 0) {
        // 0x32c5d4
        return a2 & 0xffffffff;
    }
    // 0x32c5e5
    *(int32_t *)a4 = (int32_t)a4 - result;
    return result;
}

// Address range: 0x32c5f5 - 0x32c5fe
int64_t function_32c5f5(int64_t a1) {
    // 0x32c5f5
    int64_t v1; // 0x32c5f5
    int32_t * v2 = (int32_t *)(v1 + 83); // 0x32c5f5
    *v2 = *v2 | (int32_t)v1;
    return v1 | 159;
}

// Address range: 0x32c601 - 0x32c60a
int64_t function_32c601(int64_t a1, int64_t a2) {
    // 0x32c601
    int64_t result; // 0x32c601
    return result;
}

// Address range: 0x32c610 - 0x32c615
int64_t function_32c610(int64_t a1) {
    // 0x32c610
    int64_t result; // 0x32c610
    bool v1; // 0x32c610
    *(int32_t *)a1 = 2 * (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x32c67e - 0x32c67f
int64_t function_32c67e(void) {
    // 0x32c67e
    int64_t result; // 0x32c67e
    return result;
}

// Address range: 0x32c69a - 0x32c69b
int64_t function_32c69a(int64_t a1) {
    // 0x32c69a
    int64_t result; // 0x32c69a
    return result;
}

// Address range: 0x32c6f0 - 0x32c76e
int64_t function_32c6f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = unknown_ffffffffe897d0f6(); // 0x32c6f5
    uint32_t v2 = v1 + 0x289b18a7; // 0x32c6f5
    int64_t result = v2; // 0x32c6f5
    int64_t v3 = a4 - 1; // 0x32c6fa
    if (v3 != 0 != (v2 == 0)) {
        // 0x32c6fc
        int64_t v4; // 0x32c6f0
        int32_t * v5 = (int32_t *)(v4 - 91); // 0x32c6fe
        *v5 = *v5 + (int32_t)v3;
        return result ^ 232;
    }
    if ((v2 & (v1 ^ -0x80000000)) >= 0) {
        // 0x32c768
        return result;
    }
    // 0x32c76d
    __asm_out_137((int16_t)a3, (char)v2);
    return result;
}

// Address range: 0x32c790 - 0x32c7d4
int64_t function_32c790(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32c790
    int64_t v1; // 0x32c790
    *(char *)a1 = (char)v1;
    __asm_in_138((int16_t)a3);
    uint64_t v2 = unknown_67e3199b(); // 0x32c795
    char * v3 = (char *)(v2 + 0x360ee00); // 0x32c79c
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(a3 + 1); // 0x32c7a2
    *v4 = *v4 + (char)(v2 / 256);
    unknown_fffffffff53307ab();
    int32_t v5 = *(int32_t *)0x2127f57a5e680099; // 0x32c7aa
    unknown_4927f8c9();
    __asm_in_133(-42);
    return a4 + 0xc1f7cb87 + (int64_t)((v5 ^ -4) < 0x4c7d75fc) & 0xffffffff;
}

// Address range: 0x32c7d6 - 0x32c7d8
int64_t function_32c7d6(void) {
    // 0x32c7d6
    int64_t result; // 0x32c7d6
    return result;
}

// Address range: 0x32c835 - 0x32c836
int64_t function_32c835(void) {
    // 0x32c835
    int64_t result; // 0x32c835
    return result;
}

// Address range: 0x32c84a - 0x32c84b
int64_t function_32c84a(void) {
    // 0x32c84a
    int64_t result; // 0x32c84a
    return result;
}

// Address range: 0x32c862 - 0x32c877
int64_t function_32c862(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_37f7046e(); // 0x32c86d
    bool v1; // 0x32c862
    if (v1) {
        result = function_32c84a();
    }
    // 0x32c86f
    int64_t v2; // 0x32c862
    int32_t * v3 = (int32_t *)(v2 + 0x7c6be8ce); // 0x32c86f
    *v3 = *v3 + (int32_t)a2;
    return result;
}

// Address range: 0x32c877 - 0x32c888
int64_t function_32c877(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32c877
    unknown_28c07c7d();
    int64_t v1 = a4 - 1; // 0x32c881
    if (v1 != 0) {
        function_32c835();
    }
    // 0x32c883
    int64_t v2; // 0x32c877
    *(char *)v1 = (char)v2;
    return function_32c8d5(a1, a2, a3);
}

// Address range: 0x32c888 - 0x32c8a2
int64_t function_32c888(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32c888
    unknown_2a45a48e();
    int64_t result = unknown_3d34b09d(); // 0x32c897
    *(int32_t *)-0x1dcb4f34 = *(int32_t *)-0x1dcb4f34 + (int32_t)a3;
    return result;
}

// Address range: 0x32c8d5 - 0x32c8e4
int64_t function_32c8d5(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 103); // 0x32c8db
    int64_t result; // 0x32c8d5
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)((a3 & -0xff01) + a1); // 0x32c8e0
    *v2 = *v2 >> 3;
    return result;
}

// Address range: 0x32c996 - 0x32c9ac
int64_t function_32c996(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32c996
    int64_t v1; // 0x32c996
    int32_t * v2 = (int32_t *)(v1 + 33); // 0x32c996
    *v2 = *v2 + (int32_t)v1;
    unknown_4850ca8();
    return function_ffffffffe8ecea4c();
}

// Address range: 0x32c9b1 - 0x32c9b2
int64_t function_32c9b1(void) {
    // 0x32c9b1
    int64_t result; // 0x32c9b1
    return result;
}

// Address range: 0x32c9c5 - 0x32c9cc
int64_t function_32c9c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32c9c5
    int64_t v1; // 0x32c9c5
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a4;
    return function_ffffffffd641ba4e();
}

// Address range: 0x32c9cc - 0x32ca10
int64_t function_32c9cc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x32c9cc
    int64_t v1; // 0x32c9cc
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = unknown_3516c9d2(); // 0x32c9cc
    bool v5; // 0x32c9cc
    if (v5) {
        uint64_t v6 = function_32c9b1(); // 0x32c9f0
        *(char *)v2 = (char)v2 + (char)(a3 / 256);
        char * v7 = (char *)(v6 + 0x38c5600); // 0x32c9f4
        *v7 = *v7 + (char)v6;
        char * v8 = (char *)(a3 + 1); // 0x32c9fa
        *v8 = *v8 + (char)(v6 / 256);
        int64_t result = unknown_4e33cc03(); // 0x32c9fd
        uint32_t v9 = *(int32_t *)&v3; // 0x32ca07
        *(int32_t *)v3 = v9 / 256 | 0x1000000 * v9;
        return result;
    }
    // 0x32c9d3
    *(int32_t *)a1 = 2 * (int32_t)a1;
    return v4 + 0xe8d071e4 & 0xffffffff;
}

// Address range: 0x32ca3d - 0x32ca3e
int64_t function_32ca3d(void) {
    // 0x32ca3d
    int64_t result; // 0x32ca3d
    return result;
}

// Address range: 0x32ca47 - 0x32ca48
int64_t function_32ca47(void) {
    // 0x32ca47
    int64_t result; // 0x32ca47
    return result;
}

// Address range: 0x32ca57 - 0x32ca62
int64_t function_32ca57(int64_t a1) {
    // 0x32ca57
    return unknown_ffffffffe32d735d(a1);
}

// Address range: 0x32ca83 - 0x32ca88
int64_t function_32ca83(void) {
    // 0x32ca83
    return function_21b4066();
}

// Address range: 0x32ca91 - 0x32ca92
int64_t function_32ca91(int64_t a1) {
    // 0x32ca91
    int64_t result; // 0x32ca91
    return result;
}

// Address range: 0x32caa0 - 0x32caa2
int64_t function_32caa0(void) {
    // 0x32caa0
    return function_32ca47();
}

// Address range: 0x32cb0f - 0x32cb15
int64_t function_32cb0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32cb0f
    int64_t result; // 0x32cb0f
    int32_t * v1 = (int32_t *)(result - 28); // 0x32cb0f
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x32cb21 - 0x32cb22
int64_t function_32cb21(int64_t a1) {
    // 0x32cb21
    int64_t result; // 0x32cb21
    return result;
}

// Address range: 0x32cc39 - 0x32cc3a
int64_t function_32cc39(void) {
    // 0x32cc39
    int64_t result; // 0x32cc39
    return result;
}

// Address range: 0x32cc72 - 0x32cc73
int64_t function_32cc72(void) {
    // 0x32cc72
    int64_t result; // 0x32cc72
    return result;
}

// Address range: 0x32cc9c - 0x32cc9d
int64_t function_32cc9c(void) {
    // 0x32cc9c
    int64_t result; // 0x32cc9c
    return result;
}

// Address range: 0x32ccd1 - 0x32cf01
int64_t function_32ccd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32ccd1
    int64_t v1; // 0x32ccd1
    uint64_t v2 = v1;
    int64_t v3 = a6;
    int32_t v4 = (int32_t)a3 - (int32_t)a2; // 0x32ccd1
    uint64_t v5 = unknown_ffffffffa7e9a3db(); // 0x32ccd5
    if (v4 == 0) {
        char v6 = *(char *)(a4 + 0x38f9d3); // 0x32ccdc
        unknown_59235de8();
        int32_t * v7 = (int32_t *)(a2 + 95); // 0x32cce7
        int32_t v8 = *v7; // 0x32cce7
        *v7 = v8 + (int32_t)(256 * (int64_t)(v6 | (char)(v2 / 256)) | v2 & 0xffff00ff);
        __asm_sti();
        return function_32cc72();
    }
    int64_t v9 = (int64_t)(v4 & -0xff01) | (int64_t)&g5; // 0x32ccd3
    bool v10; // 0x32ccd1
    int64_t v11 = (v10 ? -1 : 1) + a1; // 0x32cd44
    int16_t v12 = v9; // 0x32cd45
    *(char *)v11 = __asm_insb(v12);
    unsigned char v13 = *(char *)(v5 % 256 + v2); // 0x32cd46
    uint32_t v14 = (int32_t)(v5 & 0xffffff00 | (int64_t)v13); // 0x32cd47
    uint32_t v15 = *(int32_t *)(v2 - 0x1707b2fd) + (int32_t)v11; // 0x32cd48
    int32_t v16 = a4; // 0x32cd4e
    uint32_t v17 = v14 + v16; // 0x32cd4e
    int64_t v18 = v17; // 0x32cd4e
    int32_t v19 = v2;
    if (((v17 ^ v14) & (v17 ^ v16)) >= 0) {
        // 0x32cd65
        *(int32_t *)0x10dec266 = *(int32_t *)0x10dec266 + v15;
        int64_t v20 = unknown_ffffffffac8ed96b(); // 0x32cd65
        char v21 = *(char *)v18;
        if ((*(int32_t *)v20 || v16) >= 0) {
            // 0x32cd6e
            *(int32_t *)v2 = (v10 ? -1 : 1) + v19 + v17;
            return v20 & -256 | (int64_t)(v21 | -24);
        }
        // 0x32cdce
        __asm_outsb(v12, v21);
        int64_t v22 = __asm_sti(); // 0x32ce3d
        if ((v22 & 0x4000) == 0) {
            char * v23 = (char *)(v9 - 41); // 0x32cddc
            *v23 = *v23 + (char)((v2 + v1) / 256);
            return function_a83cce0();
        }
        char v24 = v22; // 0x32ce45
        char v25 = (v22 & 256) != 0; // 0x32ce45
        unsigned char v26 = v24 - 41 + v25; // 0x32ce45
        int64_t v27 = v22 & -256; // 0x32ce45
        int64_t result = v27 | (int64_t)v26; // 0x32ce45
        if (v26 != 0) {
            // 0x32cd5b
            return result;
        }
        char v28 = v26 + v25; // 0x32ce45
        if (((v28 ^ v24) & (v28 ^ -128)) >= 0) {
            // 0x32cd5b
            return result;
        }
        unsigned char v29 = llvm_ctpop_i8(v26); // 0x32ce45
        char * v30 = (char *)result;
        unsigned char v31 = *v30;
        if (v29 % 2 == 0) {
            // 0x32cef2
            *v30 = v31 + (char)v9;
            return unknown_ffffffffbbfa9b02();
        }
        char * v32 = (char *)(v27 | (int64_t)v31); // 0x32cebc
        *v32 = *v32 - 24;
        int32_t * v33 = (int32_t *)(v1 + 0x73014d00); // 0x32cebf
        *v33 = *v33 + (int32_t)v1;
        return function_ffffffffed39cf63();
    }
    char * v34 = (char *)(v2 - 0x13f26800); // 0x32cd53
    unsigned char v35 = *v34; // 0x32cd53
    unsigned char v36 = v35 + (char)((int64_t)&g5 >> 8); // 0x32cd53
    unsigned char v37 = v36 + (char)(v17 < v14); // 0x32cd53
    bool v38 = v17 < v14 ? v37 <= v35 : v36 < v35; // 0x32cd53
    *v34 = v37;
    if (v37 != 0 && !v38) {
        // 0x32cd5b
        return a2 & 0xffffffff;
    }
    int64_t v39 = v15; // 0x32cd48
    int32_t * v40 = (int32_t *)(v1 + 0x4f0ad001); // 0x32ccfa
    *v40 = (int32_t)v38 + v19 + *v40;
    *(char *)v39 = __asm_insb(v12);
    int64_t v41 = unknown_7468908(); // 0x32cd02
    uint32_t v42 = (int32_t)(int64_t)&v3 + v16; // 0x32cd07
    int64_t v43 = v42; // 0x32cd07
    int64_t v44 = v43 - 1; // 0x32cd0a
    int64_t result2 = v41; // 0x32cd0a
    int64_t v45 = v44; // 0x32cd0a
    int64_t v46; // 0x32ccd1
    if (v44 != 0 != (v42 == 0)) {
        char * v47 = (char *)v3; // 0x32cd0c
        unsigned char v48 = *v47; // 0x32cd0c
        *v47 = v48 / 2 | 128 * v48;
        int64_t v49 = v43 - 2; // 0x32cd0e
        if (v42 != 0 && v49 != 0) {
            // 0x32cd3c
            return (v41 ^ (int64_t)(int32_t)&g1) & 0xffffffff;
        }
        uint32_t v50 = ((int32_t)(v49 - 256 * (v41 + (int64_t)(v48 % 2 != 0))) & 0xff00 | v42 - 2 & -0xff01) + (int32_t)v41; // 0x32cd12
        int64_t v51 = v50; // 0x32cd14
        if (v50 != 0) {
            v51 = function_32cc9c();
        }
        // 0x32cd16
        v45 = v51 & 0xffffffff;
        char * v52 = (char *)(v39 - 112); // 0x32cd1a
        *v52 = *v52 + (char)(v51 / 256);
        __asm_outsb((int16_t)v3, *(char *)v18);
        result2 = unknown_7c2aa126();
        int32_t * v53 = (int32_t *)(v45 - 0x148a79e6); // 0x32cd25
        *v53 = *v53 - 1;
        v46 = result2 + v1 & 0xffffffff;
    }
    int32_t * v54 = (int32_t *)(v45 + 0x188096fa); // 0x32cd2e
    *v54 = *v54 + (int32_t)v46;
    return result2;
}

// Address range: 0x32cf20 - 0x32cf21
int64_t function_32cf20(int64_t a1) {
    // 0x32cf20
    int64_t result; // 0x32cf20
    return result;
}

// Address range: 0x32cf2f - 0x32cf3f
int64_t function_32cf2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32cf2f
    int64_t result; // 0x32cf2f
    return result;
}

// Address range: 0x32cfbb - 0x32cfbc
int64_t function_32cfbb(void) {
    // 0x32cfbb
    int64_t result; // 0x32cfbb
    return result;
}

// Address range: 0x32cfc2 - 0x32d043
int64_t function_32cfc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32cfc2
    int64_t v1; // 0x32cfc2
    int64_t result = v1;
    if ((*(int32_t *)(v1 - 111) & (int32_t)a4) == 0) {
        // 0x32cfc7
        return result;
    }
    // 0x32cfd9
    *(char *)result = 2 * (char)result;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v2 = (int32_t *)(result + 8 * v1); // 0x32cfe1
    *v2 = (int32_t)((int32_t)result < 0xede52201) + (int32_t)a3 + *v2;
    return result;
}

// Address range: 0x445067 - 0x4450b6
int64_t function_445067(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x445067
    int64_t v3 = (int64_t)*(int32_t *)(v2 + 18); // 0x44506e
    int64_t v4 = 105 * v3; // 0x44506e
    *(int32_t *)a1 = __asm_insd(0x49db);
    unsigned char v5 = *(char *)&v1; // 0x445079
    int64_t v6 = (int64_t)v5 | (int64_t)(*(int32_t *)((v4 & 0xffffffff) - 33) & -256); // 0x445079
    bool v7; // 0x445067
    v1 += (v7 ? -1 : 1);
    int32_t * v8 = (int32_t *)(a4 - 0x2ee822a9); // 0x44507a
    *v8 = (int32_t)(v4 != 0x6900000000 * v3 >> 32) - (int32_t)v2 + *v8;
    *(char *)a1 = __asm_insb(0x49db);
    char * v9 = (char *)(v6 + 0x201f9533); // 0x445083
    *v9 = *v9 + v5;
    int64_t result = unknown_5bc5a207(); // 0x44508e
    if ((v6 & 0x34e807d7) != 0) {
        // 0x4450b9
        return result;
    }
    char * v10 = (char *)(v1 + 25); // 0x44509c
    unsigned char v11 = *v10; // 0x44509c
    *v10 = v11 / 128 | 2 * v11;
    char * v12 = (char *)(v2 - 31); // 0x4450a6
    *v12 = *v12 ^ (char)v2;
    __asm_out(94, (int32_t)a4);
    return a4 + 0x4dccbae8 & 0xffffffff;
}

// Address range: 0x4450b7 - 0x4450b9
int64_t function_4450b7(void) {
    // 0x4450b7
    int64_t v1; // 0x4450b7
    return v1 & -205;
}

// Address range: 0x4450c7 - 0x4450ce
int64_t function_4450c7(void) {
    // 0x4450c7
    int64_t v1; // 0x4450c7
    return v1 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x445117 - 0x445120
int64_t function_445117(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x445117
    int64_t result; // 0x445117
    return result;
}

// Address range: 0x445154 - 0x44516a
int64_t function_445154(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 12); // 0x445154
    *v1 = *v1 ^ 0x3541db36;
    int64_t v2; // 0x445154
    __readgsdword(v2 - 0x727e88f4);
    return function_1d87abad();
}

// Address range: 0x44516c - 0x44516d
int64_t function_44516c(void) {
    // 0x44516c
    int64_t result; // 0x44516c
    return result;
}

// Address range: 0x44517b - 0x445197
int64_t function_44517b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    unsigned char v1 = (char)a3;
    unsigned char v2 = v1 % 32; // 0x445188
    if (v2 != 0) {
        *(char *)a3 = v1 << 8 - v2 | v1 >> v2;
    }
    int64_t result; // 0x44517b
    int32_t * v3 = (int32_t *)(result + 36); // 0x44518d
    *v3 = 2 * *v3;
    return result;
}

// Address range: 0x4451a9 - 0x4451aa
int64_t function_4451a9(void) {
    // 0x4451a9
    int64_t result; // 0x4451a9
    return result;
}

// Address range: 0x4451ab - 0x445266
int64_t function_4451ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4451ab
    int64_t v1; // 0x4451ab
    if ((*(int32_t *)(v1 - 13) ^ (int32_t)v1 - 0x75003fb2) >= 0) {
        // 0x4451bd
        return 85 * (0x100000000 * v1 >> 32) & 0xffffffff;
    }
    uint32_t v2 = (int32_t)a4 % 32; // 0x445235
    if (v2 != 0) {
        uint32_t v3 = *(int32_t *)0x16cb9478; // 0x445235
        *(int32_t *)0x16cb9478 = v3 >> 32 - v2 | v3 << v2;
    }
    // 0x4451bd
    return 85 * (0x100000000 * v1 >> 32) & 0xffffffff;
}
