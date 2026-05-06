/*
 * Targeted RetDec C for native executable gap queue batch 1611.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1043ee-0x1045ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1045ee-0x1047ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x20c59e-0x20c79e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20c79e-0x20c99e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20c99e-0x20cb9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20cb9e-0x20cd9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20cd9e-0x20ce34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32e255-0x32e455 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32e455-0x32e655 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32e655-0x32e855 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32e855-0x32e8e4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32f90d-0x32fb0d rank=- name=- kind=- bytes=- uncovered=-
 *   0x32fb0d-0x32fd0d rank=- name=- kind=- bytes=- uncovered=-
 *   0x32fd0d-0x32ff0d rank=- name=- kind=- bytes=- uncovered=-
 *   0x32ff0d-0x33010d rank=- name=- kind=- bytes=- uncovered=-
 *   0x33010d-0x330190 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1043dd();
int64_t function_1043ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_104424(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10459b(void);
int64_t function_10459d(void);
int64_t function_1045a5(void);
int64_t function_10460d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10466a(int64_t a1);
int64_t function_1046ba(int64_t a1);
int64_t function_104729(void);
int64_t function_104770(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1047dc(int64_t a1);
int64_t function_183145ed();
int64_t function_20960ba();
int64_t function_20c59e(void);
int64_t function_20c624(void);
int64_t function_20c62f(void);
int64_t function_20c655(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20c683(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20c69a(void);
int64_t function_20c6c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20c73b(void);
int64_t function_20c742(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20c77c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_20c833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20c878(void);
int64_t function_20c904(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20c9ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20c9ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_20ca4b(int64_t a1);
int64_t function_20ca82(int64_t a1);
int64_t function_20cafe(void);
int64_t function_20cbba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20cbf9(int64_t a1);
int64_t function_20cbfd(int64_t a1);
int64_t function_20cc0a(void);
int64_t function_20cc23(int64_t a1);
int64_t function_20cd25(void);
int64_t function_20cd80(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20cda7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20cdd6(void);
int64_t function_20cdde(void);
int64_t function_20cdf4(int64_t a1);
int64_t function_20ce0a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21b39c7();
int64_t function_2e12301a();
int64_t function_3122af02();
int64_t function_32e255(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32e276(void);
int64_t function_32e29f(void);
int64_t function_32e2f9(void);
int64_t function_32e300(int64_t a1);
int64_t function_32e31a(int64_t a1, int64_t a2);
int64_t function_32e448(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32e4b1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32e4c6(int64_t a1);
int64_t function_32e554(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32e56e(int64_t a1, int64_t a2);
int64_t function_32e5c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32e5e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32e6f6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32e740(void);
int64_t function_32e74f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32e796(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_32e7ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32e8c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32e8d9(void);
int64_t function_32e8de(void);
int64_t function_32e8df(void);
int64_t function_32f90d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32fa51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_32fb91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32fcf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32fe3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32ff67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_33011a(void);
int64_t function_33011b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_330120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_330128(int64_t a1, int64_t a2);
int64_t function_c9849();
int64_t function_ffffffff8bd8e997();
int64_t function_ffffffffb3f90a39();
int64_t function_ffffffffb45000d7();
int64_t function_ffffffffe8e7c966();
int64_t function_fffffffff045e65f();
int64_t function_fffffffff822b456();
int64_t unknown_1133cf0();
int64_t unknown_145f09c0();
int64_t unknown_1b44143();
int64_t unknown_282629c3();
int64_t unknown_38b69cb9();
int64_t unknown_3a4a6e84();
int64_t unknown_3d22b1d2();
int64_t unknown_3d3a0feb();
int64_t unknown_3d5d3649();
int64_t unknown_3fef6eda();
int64_t unknown_4b16861a();
int64_t unknown_6634e7cd();
int64_t unknown_663a3659();
int64_t unknown_7026b10f();
int64_t unknown_7188110();
int64_t unknown_7a995efc();
int64_t unknown_9ad25a();
int64_t unknown_ffffffff86d3cd64();
int64_t unknown_ffffffff8d710fe8();
int64_t unknown_ffffffff94aa8a43();
int64_t unknown_ffffffffb02e89e3();
int64_t unknown_ffffffffc03f8377();
int64_t unknown_ffffffffc06dd2b4();
int64_t unknown_ffffffffc0a06d4c();
int64_t unknown_ffffffffc46520cb();
int64_t unknown_ffffffffc5c5c1cf();
int64_t unknown_ffffffffcaecbdd2();
int64_t unknown_ffffffffd2bc6da1();
int64_t unknown_ffffffffdcb8a4e6();
int64_t unknown_fffffffff0c2fde0();

// Address range: 0x1043ee - 0x104423
int64_t function_1043ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x1043ee
    int64_t v2; // 0x1043ee
    char v3 = v2; // 0x1043ee
    __asm_out(v1, v3);
    uint32_t v4 = (int32_t)v2 - *(int32_t *)(a3 + 0x3d00a498); // 0x1043f1
    int32_t * v5 = (int32_t *)(int64_t)v4; // 0x1043f7
    uint32_t v6 = *v5; // 0x1043f7
    uint32_t v7 = v6 + (int32_t)v2; // 0x1043f7
    *v5 = v7;
    char v8 = *(char *)(a1 - 98); // 0x1043f9
    char v9 = (char)(v4 / 256) - v8 + (char)(v7 < v6); // 0x1043f9
    __asm_out(v1, v3);
    *(int32_t *)a1 = __asm_insd(v1);
    int64_t v10; // 0x1043ee
    if (a4 != 1 && (v9 & v3) != 0) {
        v10 = function_1043dd();
    }
    // 0x104409
    *(char *)0x94f6416 = *(char *)0x94f6416 + v9;
    *(char *)(a4 - 0x27fffea9) = (char)((v10 + 0x96ac) / 256);
    int64_t v11; // bp-7176, 0x1043ee
    return (int64_t)&v11;
}

// Address range: 0x104424 - 0x104585
int64_t function_104424(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x104424
    *(char *)a5 = (char)a5;
    int64_t v1 = (a3 & 0xffffff00 | 124) + a1; // 0x104442
    __asm_sti();
    int16_t v2 = v1; // 0x104446
    int32_t v3 = __asm_in(v2); // 0x104446
    __asm_out(v2, (char)v3);
    uint32_t v4 = (int32_t)a4 % 32; // 0x104448
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(a1 - 90); // 0x104448
        *v5 = *v5 >> v4;
    }
    *(int32_t *)0x4f095bcbd0960ed = v3;
    unknown_9ad25a();
    int64_t v6; // 0x104424
    unsigned char v7 = (char)v6; // 0x104476
    unsigned char v8 = *(char *)(a4 - 71); // 0x104476
    int32_t * v9 = (int32_t *)(v6 - 126);
    bool v10 = v8 == v7; // 0x10447a
    bool v11 = v8 > v7; // 0x10447a
    bool v12; // 0x104424
    int64_t v13 = (v12 ? -1 : 1) + a1;
    while (!v10 && !v11) {
        uint32_t v14 = *v9; // 0x10448b
        uint32_t v15 = v14 + (int32_t)v6; // 0x10448b
        *v9 = v15;
        int64_t v16 = __asm_hlt(v13, 0x2f7c6978, v1 & 0xffffffff) - (v15 < v14 ? 0xe8ea0069 : 0xe8ea0068); // 0x10448f
        int32_t * v17 = (int32_t *)((v16 & 0xffffffff) + 0x3aa23780); // 0x104497
        uint32_t v18 = *v17; // 0x104497
        uint32_t v19 = v18 + (int32_t)v1; // 0x104497
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0x104497
        *v17 = v19;
        int32_t v21 = v16; // 0x10449d
        *(int32_t *)v13 = v21;
        int64_t v22 = v13 + (v12 ? -4 : 4); // 0x10449d
        float80_t v23; // 0x104424
        *(float32_t *)v22 = (float32_t)v23;
        *(int32_t *)-0x369a6d40fafec300 = v21;
        v10 = v19 == 0;
        v11 = v19 < v18;
        if (v20 % 2 == 0) {
            // 0x1044ab
            return function_ffffffffe8e7c966(v22);
        }
        v13 = v22;
    }
    int64_t v24 = unknown_ffffffffdcb8a4e6(v13); // 0x1044e0
    char v25 = __asm_in_133(-113); // 0x1044e5
    int64_t v26 = v24 & -256 | (int64_t)v25; // 0x1044e5
    unsigned char v27 = v25 - 66; // 0x1044e8
    int64_t result = v26 & -256 | (int64_t)v27; // 0x1044e8
    char * v28 = (char *)(8 * (int64_t)((int32_t)v26 >> 31) + result); // 0x1044ea
    *v28 = *v28 + v27;
    if ((v26 & 0x4000) != 0) {
        // 0x104578
        *(char *)-0x38d9347f = *(char *)-0x38d9347f + (char)(v6 / 256);
        return function_183145ed();
    }
    if ((v26 & 256) != 0) {
        // 0x10453a
        return result;
    }
    uint32_t v29 = *(int32_t *)0x1b08f411179791; // 0x104511
    char v30 = *(char *)(a4 + 72); // 0x10451f
    return 256 * (int64_t)(v30 ^ (char)(v29 / 256)) | (int64_t)(v29 & -0xff01);
}

// Address range: 0x10459b - 0x10459c
int64_t function_10459b(void) {
    // 0x10459b
    int64_t result; // 0x10459b
    return result;
}

// Address range: 0x10459d - 0x10459e
int64_t function_10459d(void) {
    // 0x10459d
    int64_t result; // 0x10459d
    return result;
}

// Address range: 0x1045a5 - 0x1045a6
int64_t function_1045a5(void) {
    // 0x1045a5
    int64_t result; // 0x1045a5
    return result;
}

// Address range: 0x10460d - 0x10463a
int64_t function_10460d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10460d
    int64_t v1; // 0x10460d
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int32_t v4 = v1;
    int32_t v5 = v4; // 0x104618
    int64_t v6; // 0x10460d
    if (v4 < 0x6be602) {
        int64_t v7 = function_1045a5(); // 0x104618
        v5 = v7;
        v6 = v7;
    }
    char * v8 = (char *)(v2 - 82); // 0x104626
    *v8 = *v8 | (char)v6;
    int32_t v9 = *(int32_t *)&v3; // 0x104629
    int64_t v10; // 0x10460d
    *(int32_t *)v3 = v9 + (int32_t)(int64_t)&v10;
    *(char *)0x2bac0532 = *(char *)0x2bac0532 + (char)(v2 / 256);
    char * v11 = (char *)(a1 + 126); // 0x104631
    unsigned char v12 = *v11; // 0x104631
    *v11 = v12 - 101;
    uint32_t v13 = 2 * v5 | (int32_t)(v12 > 100); // 0x104634
    int64_t result = v13; // 0x104634
    char * v14 = (char *)result; // 0x104638
    *v14 = *v14 + (char)v13;
    return result;
}

// Address range: 0x10466a - 0x10466d
int64_t function_10466a(int64_t a1) {
    // 0x10466a
    int64_t result; // 0x10466a
    return result;
}

// Address range: 0x1046ba - 0x1046cb
int64_t function_1046ba(int64_t a1) {
    // 0x1046ba
    unknown_145f09c0();
    unknown_3a4a6e84();
    return unknown_ffffffffc46520cb();
}

// Address range: 0x104729 - 0x10472a
int64_t function_104729(void) {
    // 0x104729
    int64_t result; // 0x104729
    return result;
}

// Address range: 0x104770 - 0x1047a1
int64_t function_104770(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc03f8377(); // 0x104771
    *(char *)(a4 + 62) = (char)(a3 / 256);
    float80_t v2; // 0x104770
    __pseudo_get_significand(v2);
    __pseudo_get_exponent(v2);
    int64_t v3; // 0x104770
    bool v4; // 0x104770
    int64_t v5 = (int64_t)v4 + a4 + v3; // 0x10477b
    char * v6 = (char *)((v5 & 0xffffffff) + 0x6a01e88f); // 0x10477d
    *v6 = *v6 + (char)v3;
    unsigned char v7 = (char)v5; // 0x104784
    unsigned char v8 = *(char *)&v3; // 0x104784
    int64_t v9; // 0x104770
    uint32_t v10 = *(int32_t *)&v9; // 0x104790
    uint32_t v11 = v10 + (int32_t)(v5 & 0xffff0000 | (int64_t)(v7 - v8) | (v5 & 0xff00) - 256 * (v1 + (int64_t)(v8 > v7)) & 0xff00); // 0x104790
    *(int32_t *)a1 = v11;
    if (v11 < v10 || v11 == 0) {
        function_104729();
    }
    // 0x104794
    return function_2e12301a();
}

// Address range: 0x1047dc - 0x1047dd
int64_t function_1047dc(int64_t a1) {
    // 0x1047dc
    int64_t result; // 0x1047dc
    return result;
}

// Address range: 0x20c59e - 0x20c59f
int64_t function_20c59e(void) {
    // 0x20c59e
    int64_t result; // 0x20c59e
    return result;
}

// Address range: 0x20c624 - 0x20c626
int64_t function_20c624(void) {
    // 0x20c624
    return function_20c69a();
}

// Address range: 0x20c62f - 0x20c639
int64_t function_20c62f(void) {
    // 0x20c62f
    return function_3122af02();
}

// Address range: 0x20c655 - 0x20c669
int64_t function_20c655(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20c655
    bool v1; // 0x20c655
    bool v2 = v1;
    int64_t result; // 0x20c655
    uint32_t v3 = (int32_t)result; // 0x20c655
    uint32_t v4 = *(int32_t *)(result - 0x227c36c6) + (int32_t)v2; // 0x20c655
    bool v5 = v2 ? v4 != -1 | (int32_t)v2 + v3 - v4 > v3 : v4 > v3; // 0x20c655
    char * v6 = (char *)(result + a3 + (int64_t)v5 & 0xffffffff); // 0x20c664
    *v6 = *v6 + (char)result;
    return result;
}

// Address range: 0x20c683 - 0x20c692
int64_t function_20c683(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20c683
    int64_t v1; // 0x20c683
    uint64_t v2 = v1;
    unsigned char v3 = (char)a4; // 0x20c688
    unsigned char v4 = (char)(v2 / 256) + v3; // 0x20c688
    int32_t * v5 = (int32_t *)(a4 & -256 | (int64_t)v4); // 0x20c690
    *v5 = *v5 | (int32_t)a3;
    return v2 + 0x1e87633 + (int64_t)(v4 < v3) & 0xffffffff;
}

// Address range: 0x20c69a - 0x20c69d
int64_t function_20c69a(void) {
    // 0x20c69a
    int64_t v1; // 0x20c69a
    return function_20c683(v1, v1, v1, v1);
}

// Address range: 0x20c6c6 - 0x20c739
int64_t function_20c6c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20c6c6
    int64_t result; // 0x20c6c6
    char * v1 = (char *)(a2 - 0xcfe175b); // 0x20c731
    *v1 = *v1 + (char)a3;
    return result;
    int32_t * v2 = (int32_t *)(a3 - 0x5ffe17ad); // 0x20c6c8
    *v2 = *v2 | (int32_t)result;
    int64_t v3 = result / 256 % 256 | result; // 0x20c6ce
    int32_t * v4 = (int32_t *)v3; // 0x20c6d1
    *v4 = *v4 + (int32_t)a3;
    char * v5 = (char *)(a1 - 0x24ca7b38 + 8 * a1); // 0x20c6d3
    unsigned char v6 = *v5; // 0x20c6d3
    unsigned char v7 = v6 + (char)(result / 256); // 0x20c6d3
    *v5 = v7;
    unknown_fffffffff0c2fde0();
    if (v7 >= v6) {
        int64_t * v8 = (int64_t *)(v3 + a1); // 0x20c6ed
        *v8 = *v8 + 112;
    }
    // 0x20c6f5
    return unknown_7a995efc();
}

// Address range: 0x20c73b - 0x20c73e
int64_t function_20c73b(void) {
    // 0x20c73b
    int64_t result; // 0x20c73b
    return result;
}

// Address range: 0x20c742 - 0x20c75a
int64_t function_20c742(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3d5d3649(); // 0x20c743
    int64_t v2; // 0x20c742
    int32_t * v3 = (int32_t *)(v2 - 0x6dd2ef36); // 0x20c74c
    *v3 = *v3 + (int32_t)a4;
    int64_t v4 = v1 + 2 * v2 & 0xffff00ff | (int64_t)&g2; // 0x20c752
    return (v4 + 113) % 256 | v4 & -256;
}

// Address range: 0x20c77c - 0x20c7fb
int64_t function_20c77c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int64_t v2; // 0x20c77c
    int32_t v3 = v2; // 0x20c77e
    int64_t v4; // 0x20c77c
    if (v3 < 0x67b61f01) {
        int32_t v5 = v3 - (v3 < 0x67b61f01 ? -0x440eff4e : -0x440eff4f) < 0x3ac60f01 ? -0x7d37fabf : -0x7d37fac0; // 0x20c7ce
        uint32_t v6 = __asm_in((int16_t)a3) - v5; // 0x20c7ce
        int32_t * v7 = (int32_t *)(int64_t)v6; // 0x20c7dd
        *v7 = *v7 + v6;
        __asm_sti();
        v4 = 0xbcb5352 * a1 & 0xfffffffe;
    } else {
        int64_t v8 = v2 & -256 | 98; // 0x20c783
        *(int32_t *)(v8 + 0x2fec4c08) = (int32_t)a4;
        int32_t * v9 = (int32_t *)((v2 + 0xc2ffff2d & 0xffffffff) + 0x7b0a0669); // 0x20c793
        int32_t v10 = *v9 + (int32_t)a1; // 0x20c793
        unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x20c793
        *v9 = v10;
        *(char *)a1 = __asm_insb((int16_t)a3);
        __asm_wait(a1);
        v4 = v8;
        if (v11 % 2 != 0) {
            int32_t * v12 = (int32_t *)(v8 + 0x3a292031); // 0x20c7ad
            *v12 = *v12 + (int32_t)v2;
            unsigned char v13 = *(char *)&v1; // 0x20c7bb
            *(char *)v1 = v13 / 128 | 2 * v13;
            *(char *)0x3d000cd3 = 7;
            return 0x6f01e807;
        }
    }
    uint32_t v14 = *(int32_t *)0x122968cfb5c4c8af; // 0x20c7e7
    char v15 = *(char *)0x3f2ac6f7; // 0x20c7f0
    *(char *)0x3f2ac6f7 = v15 + (char)(v4 / 256);
    return (int64_t)(*(int32_t *)(int64_t)v14 + v14);
}

// Address range: 0x20c833 - 0x20c871
int64_t function_20c833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 2); // 0x20c833
    int64_t v2; // 0x20c833
    *v1 = *v1 + (int32_t)v2;
    unsigned char v3 = *(char *)(a4 + 0x2cc66519); // 0x20c836
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v4 = (int64_t)(v3 > (char)a4) + a3 + unknown_ffffffff94aa8a43(); // 0x20c842
    int64_t result = unknown_ffffffffc0a06d4c(); // 0x20c846
    int64_t v5; // 0x20c833
    *(char *)a2 = *(char *)&v5 - (char)v4;
    char * v6 = (char *)(result + 0x1e84b81); // 0x20c84d
    unsigned char v7 = *v6; // 0x20c84d
    *v6 = v7 / 128 | 2 * v7;
    int32_t * v8 = (int32_t *)(a4 + 0xba71caa); // 0x20c853
    *v8 = 2 * *v8;
    __asm_outsb((int16_t)v4, *(char *)&v5);
    return result;
}

// Address range: 0x20c878 - 0x20c87f
int64_t function_20c878(void) {
    // 0x20c878
    int64_t v1; // 0x20c878
    int64_t result = v1 & 0xffffffff; // 0x20c87a
    *(char *)result = 0;
    return result;
}

// Address range: 0x20c904 - 0x20c944
int64_t function_20c904(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20c904
    bool v1; // 0x20c904
    int64_t v2 = v1 ? -4 : 4; // 0x20c906
    uint64_t v3 = unknown_7026b10f(v2 + a1, v2 + a2); // 0x20c909
    int16_t v4 = a3; // 0x20c90e
    int32_t v5 = v3; // 0x20c90e
    __asm_out_134(v4, v5);
    __asm_out_134(v4, v5);
    int32_t * v6 = (int32_t *)(a3 + 0x4c01e8fd); // 0x20c913
    *v6 = *v6 & (int32_t)a3;
    int64_t v7; // 0x20c904
    uint64_t v8 = v7;
    *(char *)v8 = *(char *)&v7 - (char)(v8 / 256);
    int64_t v9; // 0x20c904
    int32_t v10 = *(int32_t *)&v9; // 0x20c920
    __asm_int(-30);
    int64_t v11; // 0x20c904
    int32_t v12 = (v10 & ((int32_t)(v3 / 8 & 0x1500 | v3 & 0xfedc0074) | 0x123ea8b)) + (int32_t)v11; // 0x20c937
    return (v12 + 92) % 256 | v12 & -256;
}

// Address range: 0x20c9ab - 0x20c9c6
int64_t function_20c9ab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20c9ab
    unknown_ffffffffc06dd2b4();
    return unknown_282629c3();
}

// Address range: 0x20c9ca - 0x20ca20
int64_t function_20c9ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2 & a1;
    unknown_3d22b1d2();
    uint32_t v3 = (int32_t)a3;
    uint32_t v4 = v3 + (int32_t)v2; // 0x20c9d1
    *(int32_t *)a3 = v4;
    char * v5 = (char *)((8 * v2 & 0x7fffffff8) + a1); // 0x20c9d8
    char v6 = (char)(v4 < v3) + (char)(a3 / 256) + *v5; // 0x20c9d8
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x20c9d8
    *v5 = v6;
    if (v7 % 2 == 0) {
        // 0x20ca21
        return 0xab2101e8;
    }
    // 0x20c9dd
    int64_t v8; // 0x20c9ca
    *(char *)v8 = *(char *)&v8 - 24;
    int32_t * v9 = (int32_t *)(2 * a1 + 0xab2101e8); // 0x20c9e0
    *v9 = *v9 - 0x54defe18;
    int64_t v10 = unknown_3d3a0feb(); // 0x20c9e3
    uint32_t v11 = (int32_t)a4 % 32; // 0x20c9e8
    if (v11 != 0) {
        int32_t * v12 = (int32_t *)(v10 + 8); // 0x20c9e8
        *v12 = *v12 >> v11;
    }
    unsigned char v13 = *(char *)-0x501f6f0d; // 0x20c9ec
    char v14 = v8 / 256;
    unsigned char v15 = v13 + v14; // 0x20c9ec
    *(char *)-0x501f6f0d = v15;
    char v16 = *(char *)0x790fcd92; // 0x20c9fc
    *(char *)0x790fcd92 = v16 + (char)v10 + (char)(v15 < v13);
    char * v17 = (char *)(v8 - 0x5ffec300); // 0x20ca02
    *v17 = *v17 | v14;
    __asm_int(-80);
    if (a4 == 1) {
        // 0x20ca0c
        return v8 & 0xffffffff;
    }
    // 0x20ca14
    *(char *)v1 = *(char *)&v1 | (char)(v8 / 256);
    return v10 & -50;
}

// Address range: 0x20ca4b - 0x20ca62
int64_t function_20ca4b(int64_t a1) {
    // 0x20ca4b
    int64_t v1; // 0x20ca4b
    __asm_out_135(-34, (int32_t)v1);
    return function_ffffffffb3f90a39();
}

// Address range: 0x20ca82 - 0x20ca85
int64_t function_20ca82(int64_t a1) {
    // 0x20ca82
    int64_t result; // 0x20ca82
    return result;
}

// Address range: 0x20cafe - 0x20caff
int64_t function_20cafe(void) {
    // 0x20cafe
    int64_t result; // 0x20cafe
    return result;
}

// Address range: 0x20cbba - 0x20cbf1
int64_t function_20cbba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20cbba
    unknown_1b44143();
    int64_t v1 = unknown_ffffffffcaecbdd2(); // 0x20cbcc
    int64_t v2 = (a5 & (int64_t)&g1) == 0 ? 4 : -4; // 0x20cbd2
    char * v3 = (char *)v1; // 0x20cbd3
    char v4 = *v3; // 0x20cbd3
    int64_t v5; // 0x20cbba
    *v3 = v4 - (char)a4 + (char)((int32_t)v5 > (int32_t)v1);
    __asm_out((int16_t)a3, (char)__asm_int3(v2 + a1));
    int64_t v6 = unknown_ffffffffb02e89e3() & 0xffffffff; // 0x20cbe2
    __asm_wait(v6);
    int64_t v7 = v6 + v2; // 0x20cbe4
    *(int32_t *)(a2 - 70) = (int32_t)v7;
    unknown_1133cf0(v7);
    return unknown_7188110();
}

// Address range: 0x20cbf9 - 0x20cbfc
int64_t function_20cbf9(int64_t a1) {
    // 0x20cbf9
    int64_t result; // 0x20cbf9
    return result;
}

// Address range: 0x20cbfd - 0x20cbfe
int64_t function_20cbfd(int64_t a1) {
    // 0x20cbfd
    int64_t result; // 0x20cbfd
    return result;
}

// Address range: 0x20cc0a - 0x20cc0f
int64_t function_20cc0a(void) {
    // 0x20cc0a
    return unknown_7188110();
}

// Address range: 0x20cc23 - 0x20cc29
int64_t function_20cc23(int64_t a1) {
    // 0x20cc23
    return function_fffffffff822b456();
}

// Address range: 0x20cd25 - 0x20cd29
int64_t function_20cd25(void) {
    // 0x20cd25
    int64_t v1; // 0x20cd25
    return (int64_t)&v1;
}

// Address range: 0x20cd80 - 0x20cd89
int64_t function_20cd80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20cd80
    int64_t v1; // 0x20cd80
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    int64_t result; // 0x20cd80
    *(char *)result = *(char *)&result + 60;
    return result;
}

// Address range: 0x20cda7 - 0x20cdcd
int64_t function_20cda7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20cda7
    float80_t v1; // 0x20cda7
    *(int16_t *)(a4 + 0x1e8d647) = (int16_t)v1;
    int64_t v2; // 0x20cda7
    uint32_t v3 = (int32_t)v2 >> 31; // 0x20cdad
    __asm_hlt(a1, a2, (int64_t)v3);
    int32_t v4 = a2; // 0x20cdb7
    __asm_out_134((int16_t)v3, v4);
    *(int32_t *)0x56a60ad801e8d38a = v4;
    __asm_wait(a1);
    return function_20960ba();
}

// Address range: 0x20cdd6 - 0x20cdd7
int64_t function_20cdd6(void) {
    // 0x20cdd6
    int64_t result; // 0x20cdd6
    return result;
}

// Address range: 0x20cdde - 0x20cde1
int64_t function_20cdde(void) {
    // 0x20cdde
    int64_t result; // 0x20cdde
    bool v1; // 0x20cdde
    if (!v1) {
        result = function_20cdd6();
    }
    // 0x20cde0
    return result;
}

// Address range: 0x20cdf4 - 0x20cdf5
int64_t function_20cdf4(int64_t a1) {
    // 0x20cdf4
    int64_t result; // 0x20cdf4
    return result;
}

// Address range: 0x20ce0a - 0x20ce1a
int64_t function_20ce0a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20ce0a
    int64_t v1; // 0x20ce0a
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x20ce0a
    return unknown_4b16861a((v2 ? -4 : 4) + a1);
}

// Address range: 0x32e255 - 0x32e263
int64_t function_32e255(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32e255
    float80_t v1; // 0x32e255
    *(int16_t *)a3 = (int16_t)v1;
    return unknown_ffffffff86d3cd64(a1, a2, a3, a4);
}

// Address range: 0x32e276 - 0x32e279
int64_t function_32e276(void) {
    // 0x32e276
    int64_t result; // 0x32e276
    return result;
}

// Address range: 0x32e29f - 0x32e2a0
int64_t function_32e29f(void) {
    // 0x32e29f
    int64_t result; // 0x32e29f
    return result;
}

// Address range: 0x32e2f9 - 0x32e2fb
int64_t function_32e2f9(void) {
    // 0x32e2f9
    return function_32e29f();
}

// Address range: 0x32e300 - 0x32e303
int64_t function_32e300(int64_t a1) {
    // 0x32e300
    int64_t result; // 0x32e300
    return result;
}

// Address range: 0x32e31a - 0x32e325
int64_t function_32e31a(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 43); // 0x32e31a
    int64_t v2; // 0x32e31a
    *v1 = *v1 + (char)v2;
    __asm_out_135((char)a1, (int32_t)v2);
    return function_21b39c7();
}

// Address range: 0x32e448 - 0x32e477
int64_t function_32e448(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32e448
    int64_t result; // 0x32e448
    *(int32_t *)(result + 0x3dcf01e8) = (int32_t)a3;
    int32_t * v1 = (int32_t *)(result - 0x17ebfb10); // 0x32e450
    bool v2; // 0x32e448
    *v1 = *v1 + (v2 ? 2 : 1);
    uint32_t v3 = (int32_t)result; // 0x32e459
    __asm_out_135(60, v3);
    if (v3 < 0x4c01e802) {
        // 0x32e4d9
        return result;
    }
    // 0x32e462
    return function_fffffffff045e65f();
}

// Address range: 0x32e4b1 - 0x32e4ba
int64_t function_32e4b1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32e4b1
    return unknown_38b69cb9(a1, a2, a3);
}

// Address range: 0x32e4c6 - 0x32e4d9
int64_t function_32e4c6(int64_t a1) {
    // 0x32e4c6
    unknown_ffffffffc5c5c1cf(a1);
    return unknown_3fef6eda();
}

// Address range: 0x32e554 - 0x32e559
int64_t function_32e554(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32e554
    int64_t result; // 0x32e554
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a1;
    return result;
}

// Address range: 0x32e56e - 0x32e571
int64_t function_32e56e(int64_t a1, int64_t a2) {
    // 0x32e56e
    int64_t result; // 0x32e56e
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x32e5c5 - 0x32e5d8
int64_t function_32e5c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32e5c5
    int64_t v1; // 0x32e5c5
    int32_t * v2 = (int32_t *)(8 * a4 - 0x58c5708d + v1); // 0x32e5c5
    int32_t v3 = v1; // 0x32e5c5
    *v2 = *v2 + v3;
    int64_t v4; // 0x32e5c5
    *(int32_t *)a4 = *(int32_t *)&v4 + v3;
    return __asm_int1();
}

// Address range: 0x32e5e2 - 0x32e6db
int64_t function_32e5e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffff8d710fe8(); // 0x32e5e2
    bool v1; // 0x32e5e2
    if (!v1) {
        int32_t * v2 = (int32_t *)(a1 - 43); // 0x32e5e9
        *v2 = *v2 + (int32_t)a4;
        return result;
    }
    int64_t v3 = unknown_663a3659(); // 0x32e64a
    int32_t * v4 = (int32_t *)(a2 - 0x4d33fe60); // 0x32e64f
    *v4 = *v4 + 0x54fec2a3;
    char * v5 = (char *)v3; // 0x32e659
    int64_t v6; // 0x32e5e2
    *v5 = 2 * (char)v3 + (char)v6 + *v5;
    int64_t v7 = v3 & -256 | (int64_t)__asm_in_133(5); // 0x32e665
    if (a4 == 1 || (int32_t)v3 == -0x60dddff) {
        // 0x32e669
        return v7 & 0xfe17fe18 | 0x1e801e7;
    }
    // 0x32e6d5
    return v7 & 0x88f0a2ff;
}

// Address range: 0x32e6f6 - 0x32e71a
int64_t function_32e6f6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32e6f6
    int64_t v1; // 0x32e6f6
    uint64_t v2 = 2 * v1; // 0x32e6f6
    char v3 = *(char *)(a2 + 9); // 0x32e6f8
    int64_t v4 = 256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & 0xffff00ff; // 0x32e6f8
    *(char *)a1 = (char)v2;
    int64_t result = v4 + *(int64_t *)v4; // 0x32e700
    *(char *)(v1 - 0x2b536ff1) = (char)a3;
    int32_t * v5 = (int32_t *)result; // 0x32e70b
    int32_t v6 = *v5; // 0x32e70b
    *v5 = 2 * v6 | (int32_t)(v6 < 0);
    return result;
}

// Address range: 0x32e740 - 0x32e741
int64_t function_32e740(void) {
    // 0x32e740
    int64_t result; // 0x32e740
    return result;
}

// Address range: 0x32e74f - 0x32e765
int64_t function_32e74f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32e74f
    int64_t v1; // 0x32e74f
    int32_t * v2 = (int32_t *)(4 * v1 - 0x7f38fb80); // 0x32e74f
    int32_t v3 = *v2 + (int32_t)a4; // 0x32e74f
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x32e74f
    *v2 = v3;
    if (v4 % 2 == 0) {
        function_32e740();
    }
    int32_t * v5 = (int32_t *)(a3 + 0x1c0810e3); // 0x32e758
    *v5 = *v5 + (int32_t)v1;
    return __asm_iretd();
}

// Address range: 0x32e796 - 0x32e7cf
int64_t function_32e796(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    char * v1 = (char *)(unknown_ffffffffd2bc6da1() - 106); // 0x32e7a0
    char v2 = a4; // 0x32e7a0
    *v1 = *v1 + v2;
    __asm_in_136(-0x109e);
    int64_t v3 = (int64_t)*(int32_t *)-0x77152864; // 0x32e7b7
    int64_t v4 = 91 * v3; // 0x32e7b7
    char * v5 = (char *)(v4 & 0xffffffff); // 0x32e7be
    *v5 = *v5 + v2 + (char)(v4 != 0x5b00000000 * v3 >> 32);
    int32_t v6 = *(int32_t *)-0x7912200d; // 0x32e7c0
    int64_t v7; // bp-8, 0x32e796
    *(int32_t *)-0x7912200d = v6 + (int32_t)(int64_t)&v7;
    return unknown_6634e7cd();
}

// Address range: 0x32e7ea - 0x32e8c5
int64_t function_32e7ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32e7ea
    int64_t v1; // 0x32e7ea
    int64_t v2 = v1;
    bool v3; // 0x32e7ea
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a3 + (int32_t)v3;
    abort();
    // UNREACHABLE
}

// Address range: 0x32e8c6 - 0x32e8d2
int64_t function_32e8c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32e8c6
    int64_t v1; // 0x32e8c6
    int64_t result = v1 * a5; // 0x32e8c6
    int32_t * v2 = (int32_t *)(4 * a1 - 0xe50625e + v1); // 0x32e8c9
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x32e8d9 - 0x32e8de
int64_t function_32e8d9(void) {
    // 0x32e8d9
    return function_ffffffffb45000d7();
}

// Address range: 0x32e8de - 0x32e8df
int64_t function_32e8de(void) {
    // 0x32e8de
    int64_t result; // 0x32e8de
    return result;
}

// Address range: 0x32e8df - 0x32e8e4
int64_t function_32e8df(void) {
    // 0x32e8df
    return function_ffffffff8bd8e997();
}

// Address range: 0x32f90d - 0x32fa51
int64_t function_32f90d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32f90d
    bool v1; // 0x32f90d
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x32f90d
    int64_t v3 = 0x7c054e6c; // bp-40, 0x32f976
    int64_t v4 = (int64_t)&v3; // 0x32f9c7
    int64_t v5 = v4 - 8; // 0x32f9cf
    int64_t * v6 = (int64_t *)v5; // 0x32f9cf
    *v6 = 0x6354c311;
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x32f9d4
    int64_t * v8 = (int64_t *)(v4 - 24); // 0x32f9d8
    *v8 = v2;
    *v7 = v2;
    *(int64_t *)(v4 + 8) = *v6;
    *v6 = v5;
    *v7 = 0x32ae11;
    *(int64_t *)(v4 + 24) = *v6;
    *v6 = v3;
    *v7 = a2;
    *v8 = a3;
    *v7 = v4;
    *v6 = v3;
    *v7 = v3;
    int64_t v9; // 0x32f90d
    return function_c9849(a1, *v7, a3, v2, a5, v9, v3);
}

// Address range: 0x32fa51 - 0x32fb91
int64_t function_32fa51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x32fa51
    int64_t v1; // bp-32, 0x32fa51
    v1 = (int64_t)&v1;
    int64_t v2; // 0x32fa51
    return function_c9849(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x32fb91 - 0x32fcf1
int64_t function_32fb91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32fb91
    int64_t v1; // bp-32, 0x32fb91
    int64_t v2 = (int64_t)&v1; // 0x32fc62
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x32fc6e
    *v3 = a6;
    int64_t v4 = v2 - 8; // 0x32fc7f
    int64_t * v5 = (int64_t *)v4; // 0x32fc82
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x32fc82
    *v6 = *v5;
    *v3 = 169;
    *v5 = v4;
    v1 = 169;
    *(int64_t *)(v2 + 32) = 169;
    int64_t v7 = *v6; // 0x32fcb3
    v1 = v7;
    *v5 = v7;
    int64_t v8 = v2 + 16; // 0x32fcbe
    *v6 = *(int64_t *)v8;
    v1 = a5;
    int64_t v9 = v1; // 0x32fce3
    v1 = v8;
    int64_t v10; // 0x32fb91
    return function_c9849(a1, a2, a3, a4, v9, v10, v8);
}

// Address range: 0x32fcf1 - 0x32fe3d
int64_t function_32fcf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32fcf1
    int64_t v1; // 0x32fcf1
    return function_c9849(310, a2, a3, a4, a5, v1, 0x32b502);
}

// Address range: 0x32fe3d - 0x32ff67
int64_t function_32fe3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32fe3d
    int64_t v1; // bp-48, 0x32fe3d
    int64_t v2 = (int64_t)&v1; // 0x32feca
    int64_t v3 = v2 + 16; // 0x32fed0
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x32fedf
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x32fedf
    *v5 = 0x280b2b79;
    v1 = 0x43adc458;
    int64_t * v6 = (int64_t *)(v2 - 8); // 0x32ff00
    *v6 = a5;
    int64_t * v7 = (int64_t *)(v2 + 24); // 0x32ff06
    *v7 = *v5;
    *v6 = v4 + 0x3feaefea;
    v1 = a1;
    *(int64_t *)(v2 + 48) = v4;
    int64_t v8 = v1; // 0x32ff34
    int64_t * v9 = (int64_t *)v3; // 0x32ff36
    int64_t v10 = *v9; // 0x32ff36
    *v5 = v10;
    v1 = v10;
    int64_t v11 = *v7; // 0x32ff4c
    *v9 = v11;
    *v5 = v11;
    int64_t v12; // 0x32fe3d
    return function_c9849(v8, a2, a3, a4, v12, v12, 0x32b72c);
}

// Address range: 0x32ff67 - 0x3300bf
int64_t function_32ff67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x25803995; // bp-32, 0x32ffec
    int64_t v2 = (int64_t)&v1; // 0x33001d
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x330025
    int64_t v4 = *v3; // 0x330025
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x330025
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x330029
    *v6 = 0x65ac4200;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x330046
    *v7 = 0x6c13cb7;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x33004c
    *v8 = a7;
    v1 = *v6;
    *v6 = 0x26942d17;
    *v7 = 0x3777bbcf;
    *v8 = v4;
    *v3 = *v6;
    *v8 = 0x5feb12ed;
    *v5 = v2 + 8;
    return function_c9849(a1, a2, a3, 169, a5, a6, v1);
}

// Address range: 0x33011a - 0x33011b
int64_t function_33011a(void) {
    // 0x33011a
    int64_t result; // 0x33011a
    return result;
}

// Address range: 0x33011b - 0x330120
int64_t function_33011b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33011b
    int64_t v1; // 0x33011b
    char * v2 = (char *)(v1 - 127); // 0x33011b
    *v2 = *v2 | (char)a4;
    return function_330128((int64_t)&g3, (int64_t)&g3);
}

// Address range: 0x330120 - 0x330128
int64_t function_330120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x330120
    int64_t v1; // 0x330120
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 121); // 0x330122
    unsigned char v4 = *v3; // 0x330122
    unsigned char v5 = v4 + (char)a4; // 0x330122
    *v3 = v5;
    return (v2 - (v5 < v4 ? 37 : 36)) % 256 | v2 & -256;
}

// Address range: 0x330128 - 0x33018c
int64_t function_330128(int64_t a1, int64_t a2) {
    // 0x330128
    int64_t result; // 0x330128
    return result;
}
