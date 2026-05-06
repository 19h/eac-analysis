/*
 * Targeted RetDec C for native executable gap queue batch 1211.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x20b59e-0x20b79e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20b79e-0x20b99e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20b99e-0x20bb9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20bb9e-0x20bd9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20bf9e-0x20c19e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20c19e-0x20c39e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20c39e-0x20c59e rank=- name=- kind=- bytes=- uncovered=-
 *   0x32d055-0x32d255 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32d455-0x32d655 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32d655-0x32d855 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32d855-0x32da55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32da55-0x32dc55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32de55-0x32e055 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ba859-0x3baa59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3baa59-0x3bac59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bb259-0x3bb459 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
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

int64_t function_1d1a2c24();
int64_t function_20b59e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_20b6d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20b866(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20b99e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_20bac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_20bc10(void);
int64_t function_20bc3f(void);
int64_t function_20bc47(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_20bc6c(int64_t a1);
int64_t function_20bc76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20bc7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20bcad(void);
int64_t function_20bcfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20bf9e(void);
int64_t function_20bfa9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20bfc0(void);
int64_t function_20bfc5(int64_t a1);
int64_t function_20bfe3(int64_t a1);
int64_t function_20c005(void);
int64_t function_20c040(int64_t a1, int64_t a2);
int64_t function_20c0aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_20c140(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20c19e(int64_t a1);
int64_t function_20c1be(int64_t a1);
int64_t function_20c1f2(void);
int64_t function_20c223(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20c292(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_20c311(void);
int64_t function_20c312(void);
int64_t function_20c32b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20c34c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20c368(int64_t a1, int64_t a2);
int64_t function_20c385(void);
int64_t function_20c38b(int64_t a1);
int64_t function_20c3e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20c4e8(int64_t a1);
int64_t function_20c4fb(int64_t a1);
int64_t function_215569();
int64_t function_32d055(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32d123(void);
int64_t function_32d139(void);
int64_t function_32d173(void);
int64_t function_32d17c(void);
int64_t function_32d1f4(int64_t a1);
int64_t function_32d205(void);
int64_t function_32d231(int64_t a1);
int64_t function_32d455(void);
int64_t function_32d48e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32d4ea(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_32d553(void);
int64_t function_32d59d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32d5a6(void);
int64_t function_32d5b8(void);
int64_t function_32d5ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32d610(int64_t a1);
int64_t function_32d61a(int64_t a1);
int64_t function_32d620(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32d630(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32d668(int64_t a1);
int64_t function_32d67d(int64_t a1);
int64_t function_32d782(void);
int64_t function_32d7d3(int64_t a1, int64_t a2);
int64_t function_32d80a(void);
int64_t function_32d80c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32d82d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32d840(int64_t a1);
int64_t function_32d843(void);
int64_t function_32d848(void);
int64_t function_32d859(void);
int64_t function_32d861(int64_t a1);
int64_t function_32d8ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32d8e3(int64_t a1, int64_t a2);
int64_t function_32d8e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32d901(int64_t a1, int64_t a2);
int64_t function_32d907(int64_t a1);
int64_t function_32d909(void);
int64_t function_32d916(void);
int64_t function_32d922(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32d931(int64_t a1);
int64_t function_32d93d(void);
int64_t function_32d94d(void);
int64_t function_32d9a0(void);
int64_t function_32d9b3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_32d9d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32d9ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32da24(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_32da89(int64_t a1);
int64_t function_32da96(void);
int64_t function_32dad2(void);
int64_t function_32dada(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32dae1(void);
int64_t function_32daff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32db5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32dc07(int64_t a1);
int64_t function_32dc12(void);
int64_t function_32dc1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32dc42(void);
int64_t function_32dc6f();
int64_t function_32de47();
int64_t function_32de55(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32de63(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32de80(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32de90(int64_t a1);
int64_t function_32de9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32dec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32df82(void);
int64_t function_32dfae(int64_t a1, int64_t a2);
int64_t function_3ba859(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ba87f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ba9c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3bab1c(void);
int64_t function_3bab44(int64_t a1);
int64_t function_3babf6(void);
int64_t function_3bac1a(void);
int64_t function_3bac54(void);
int64_t function_3bb259(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bb311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3d33478d();
int64_t function_3d7dd7ab();
int64_t function_4cb4a28e();
int64_t function_55d0c781();
int64_t function_7261b5f3();
int64_t function_c823b();
int64_t function_d46301();
int64_t function_ffffffffa3392e51();
int64_t function_ffffffffcc26e4d8();
int64_t function_ffffffffef341654();
int64_t unknown_107603b();
int64_t unknown_1102540b();
int64_t unknown_11029522();
int64_t unknown_120fcb9e();
int64_t unknown_16fd237();
int64_t unknown_1860be02();
int64_t unknown_1aabda67();
int64_t unknown_3dad3013();
int64_t unknown_3e0bd6ba();
int64_t unknown_4656c76();
int64_t unknown_4bac56af();
int64_t unknown_5299788();
int64_t unknown_5fc29f95();
int64_t unknown_731b3702();
int64_t unknown_ffffffff8026a8b3();
int64_t unknown_ffffffff8931050d();
int64_t unknown_ffffffff9a8a4c18();
int64_t unknown_ffffffffab5e4539();
int64_t unknown_ffffffffb1f89872();
int64_t unknown_ffffffffdef12ac2();
int64_t unknown_ffffffffe390f5ec();
int64_t unknown_ffffffffe4397c7f();
int64_t unknown_ffffffffe6060e21();
int64_t unknown_ffffffffe6efa35c();
int64_t unknown_ffffffffeac15a0f();
int64_t unknown_ffffffffec7fd4fd();

// Address range: 0x20b59e - 0x20b6d2
int64_t function_20b59e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x20b59e
    g1 = (int64_t)&g1 + 16;
    return function_c823b(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x20b6d2 - 0x20b866
int64_t function_20b6d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20b6d2
    int64_t v1; // 0x20b6d2
    return function_c823b(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x20b866 - 0x20b99e
int64_t function_20b866(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20b866
    int64_t v1; // 0x20b866
    return function_c823b(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x20b99e - 0x20bac7
int64_t function_20b99e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x20b99e
    *(int64_t *)(a3 + 32) = a3;
    *(int64_t *)(a3 - 8) = a3 + 8;
    *(int64_t *)a3 = a3 + 16;
    return function_c823b(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x20bac7 - 0x20bc10
int64_t function_20bac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x20bac7
    return function_c823b(a1, a2, a3, 323, a5, a6);
}

// Address range: 0x20bc10 - 0x20bc15
int64_t function_20bc10(void) {
    // 0x20bc10
    return function_215569();
}

// Address range: 0x20bc3f - 0x20bc46
int64_t function_20bc3f(void) {
    // 0x20bc3f
    return function_4cb4a28e();
}

// Address range: 0x20bc47 - 0x20bc69
int64_t function_20bc47(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x20bc47
    int64_t v1; // 0x20bc47
    int64_t v2 = v1;
    int64_t v3 = (v2 + a4 / 256) % 256 | v2 & -256; // 0x20bc47
    int32_t * v4 = (int32_t *)(v3 + 0x281eb47d); // 0x20bc49
    *v4 = *v4 + (int32_t)v3;
    int32_t * v5 = (int32_t *)(9 * a4); // 0x20bc58
    *v5 = *v5 + (int32_t)a4;
    return 256 * (int64_t)((char)((uint64_t)v1 / 256) + (char)(a3 / 256) >= 0) | a1 & 0xffff00ff;
}

// Address range: 0x20bc6c - 0x20bc6d
int64_t function_20bc6c(int64_t a1) {
    // 0x20bc6c
    int64_t result; // 0x20bc6c
    return result;
}

// Address range: 0x20bc76 - 0x20bc7c
int64_t function_20bc76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20bc76
    int64_t v1; // 0x20bc76
    *(int32_t *)a4 = 2 * (int32_t)v1;
    int64_t v2; // 0x20bc76
    return (int64_t)((int32_t)v1 - *(int32_t *)&v2);
}

// Address range: 0x20bc7c - 0x20bc7f
int64_t function_20bc7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20bc7c
    int64_t result; // 0x20bc7c
    return result;
}

// Address range: 0x20bcad - 0x20bcae
int64_t function_20bcad(void) {
    // 0x20bcad
    int64_t result; // 0x20bcad
    return result;
}

// Address range: 0x20bcfc - 0x20bd4c
int64_t function_20bcfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20bcfc
    bool v1; // 0x20bcfc
    bool v2 = v1;
    int64_t v3 = unknown_731b3702(); // 0x20bcfc
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v4; // 0x20bcfc
    uint64_t v5 = unknown_3dad3013() + 2 * v4; // 0x20bd14
    uint32_t v6 = (int32_t)a4 + (int32_t)a1; // 0x20bd16
    if (v6 == 0) {
        // 0x20bd1a
        *(int32_t *)0x39876f0b6db917c7 = (int32_t)v5;
        return v5 & 0xffffffff;
    }
    uint32_t v7 = (int32_t)v3; // 0x20bd01
    bool v8 = v2 ? (v2 ? -0x79da7b4d : -0x79da7b4e) + v7 <= v7 : v7 > 0x79da7b4d; // 0x20bd01
    char v9 = *(char *)(a3 & -0x10000 | (int64_t)&g5 | (a4 + a3 + (int64_t)v8) % 256); // 0x20bd36
    char v10 = *(char *)(((int64_t)v6 + a1 & 0xffffffff) + 0x13d00c1); // 0x20bd42
    return 256 * (int64_t)((v9 ^ (char)(v5 / 256)) - v10) | v5 & 0xffff00ff;
}

// Address range: 0x20bf9e - 0x20bfa9
int64_t function_20bf9e(void) {
    // 0x20bf9e
    return function_d46301();
}

// Address range: 0x20bfa9 - 0x20bfc0
int64_t function_20bfa9(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // bp-8, 0x20bfae
    __asm_out_133((int16_t)a3, (char)unknown_4bac56af());
    unknown_3e0bd6ba();
    int64_t v2; // 0x20bfa9
    int32_t * v3 = (int32_t *)(v2 - 50); // 0x20bfbb
    *v3 = *v3 + (int32_t)(int64_t)&v1;
    return function_20bfe3((int64_t)&g6);
}

// Address range: 0x20bfc0 - 0x20bfc4
int64_t function_20bfc0(void) {
    // 0x20bfc0
    bool v1; // 0x20bfc0
    if (v1 || false) {
        unknown_ffffffffeac15a0f();
    }
    // 0x20bfc2
    int64_t v2; // 0x20bfc0
    return function_20c040(v2, v2);
}

// Address range: 0x20bfc5 - 0x20bfc8
int64_t function_20bfc5(int64_t a1) {
    // 0x20bfc5
    int64_t result; // 0x20bfc5
    return result;
}

// Address range: 0x20bfe3 - 0x20bfe4
int64_t function_20bfe3(int64_t a1) {
    // 0x20bfe3
    int64_t result; // 0x20bfe3
    return result;
}

// Address range: 0x20c005 - 0x20c00e
int64_t function_20c005(void) {
    // 0x20c005
    return unknown_ffffffffeac15a0f();
}

// Address range: 0x20c040 - 0x20c06a
int64_t function_20c040(int64_t a1, int64_t a2) {
    // 0x20c040
    int64_t v1; // 0x20c040
    int32_t * v2 = (int32_t *)(a1 + 0x212397 + 2 * a2); // 0x20c060
    *v2 = *v2 + (int32_t)v1;
    int64_t result; // 0x20c040
    *(char *)result = *(char *)&result + 28;
    return result;
}

// Address range: 0x20c0aa - 0x20c13e
int64_t function_20c0aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x20c0aa
    int64_t v1; // 0x20c0aa
    char * v2 = (char *)(v1 + 13); // 0x20c0aa
    char v3 = *v2 + (char)(a4 / 256); // 0x20c0aa
    *v2 = v3;
    int64_t result = unknown_ffffffff8026a8b3(); // 0x20c0ad
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (v3 != 0) {
        // 0x20c0b9
        return unknown_ffffffffdef12ac2();
    }
    int32_t * v4 = (int32_t *)(result - 17); // 0x20c138
    *v4 = *v4 & (int32_t)a1;
    return result;
}

// Address range: 0x20c140 - 0x20c156
int64_t function_20c140(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20c140
    int64_t result; // 0x20c140
    uint64_t v1 = result;
    int64_t v2 = v1 & -256 | 232; // 0x20c140
    int32_t * v3 = (int32_t *)(a4 + 0x79cebff4); // 0x20c142
    *v3 = *v3 + (int32_t)v2;
    char * v4 = (char *)(v2 - 0x2ff773aa); // 0x20c148
    *v4 = *v4 + (char)(v1 / 256);
    return result;
}

// Address range: 0x20c19e - 0x20c1a1
int64_t function_20c19e(int64_t a1) {
    // 0x20c19e
    int64_t result; // 0x20c19e
    return result;
}

// Address range: 0x20c1be - 0x20c1c5
int64_t function_20c1be(int64_t a1) {
    // 0x20c1be
    int64_t v1; // 0x20c1be
    return v1 + 0x291ff3eb & 0xffffffff;
}

// Address range: 0x20c1f2 - 0x20c1f5
int64_t function_20c1f2(void) {
    // 0x20c1f2
    int64_t result; // 0x20c1f2
    return result;
}

// Address range: 0x20c223 - 0x20c227
int64_t function_20c223(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x20c223
    if (v1 != 0) {
        int64_t v2; // 0x20c223
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return a4 & 0xffffffff;
}

// Address range: 0x20c292 - 0x20c29d
int64_t function_20c292(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x20c292
    int64_t v1; // 0x20c292
    int64_t v2 = v1;
    *(int32_t *)0x5c22c301 = *(int32_t *)0x5c22c301 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x20c311 - 0x20c312
int64_t function_20c311(void) {
    // 0x20c311
    int64_t result; // 0x20c311
    return result;
}

// Address range: 0x20c312 - 0x20c313
int64_t function_20c312(void) {
    // 0x20c312
    int64_t result; // 0x20c312
    return result;
}

// Address range: 0x20c32b - 0x20c34a
int64_t function_20c32b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20c32b
    int64_t v1; // 0x20c32b
    int32_t v2 = v1;
    uint32_t v3 = v2 | 130; // 0x20c338
    uint32_t v4 = (int32_t)a1; // 0x20c338
    int32_t result = v3 + v4; // 0x20c338
    unsigned char v5 = llvm_ctpop_i8((char)result); // 0x20c338
    bool v6; // 0x20c32b
    *(int64_t *)0x1e8b385 = 0x4000 * (int64_t)v6 | (int64_t)(-1 - v3 < v4) | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 64 * (int64_t)(result == 0) | 128 * (int64_t)(result < 0) | 256 * (int64_t)v6 | 16 * (int64_t)(v3 % 16 + v4 % 16 > 15) | 2048 * (int64_t)(((result ^ v2) & (result ^ v4)) < 0) | 4 * (int64_t)(v5 % 2 == 0) | 2;
    int32_t * v7 = (int32_t *)(a2 + 0x7f081068); // 0x20c33b
    *v7 = (int32_t)(-1 - v3 < v4) + (int32_t)v1 + *v7;
    *(int32_t *)0x2201e846a5768502 = result;
    return result;
}

// Address range: 0x20c34c - 0x20c363
int64_t function_20c34c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20c34c
    int64_t v1; // 0x20c34c
    bool v2; // 0x20c34c
    if (!v2) {
        v1 = function_20c311();
    }
    int64_t v3 = v1;
    *(int32_t *)v3 = (int32_t)v3;
    int64_t result = unknown_ffffffffe6efa35c() & 0xf704d588; // 0x20c35b
    char * v4 = (char *)result; // 0x20c360
    unsigned char v5 = *v4; // 0x20c360
    *v4 = v5 / 128 | 2 * v5;
    return result;
}

// Address range: 0x20c368 - 0x20c374
int64_t function_20c368(int64_t a1, int64_t a2) {
    // 0x20c368
    int64_t v1; // 0x20c368
    return v1 & -256 | (int64_t)__asm_in(21);
}

// Address range: 0x20c385 - 0x20c387
int64_t function_20c385(void) {
    // 0x20c385
    return function_20c312();
}

// Address range: 0x20c38b - 0x20c394
int64_t function_20c38b(int64_t a1) {
    // 0x20c38b
    bool v1; // 0x20c38b
    *(char *)(a1 + 0x4c01e89a) = (char)!v1;
    int64_t v2; // 0x20c38b
    return (int64_t)&v2;
}

// Address range: 0x20c3e8 - 0x20c43f
int64_t function_20c3e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20c3e8
    int64_t v1; // 0x20c3e8
    __asm_rcl((int32_t)v1);
    return unknown_107603b();
}

// Address range: 0x20c4e8 - 0x20c4ec
int64_t function_20c4e8(int64_t a1) {
    // 0x20c4e8
    int64_t result; // 0x20c4e8
    return result;
}

// Address range: 0x20c4fb - 0x20c4fe
int64_t function_20c4fb(int64_t a1) {
    // 0x20c4fb
    int64_t result; // 0x20c4fb
    return result;
}

// Address range: 0x32d055 - 0x32d09d
int64_t function_32d055(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32d055
    int64_t v1; // 0x32d055
    int32_t * v2 = (int32_t *)((2 * v1 & 0xffffffff) - 0x39cf6ffb); // 0x32d057
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = unknown_1aabda67(); // 0x32d061
    *(int64_t *)(((v1 ^ v1) & 0xffffffff) - 8) = v3;
    __asm_out(111, (int32_t)v3);
    int32_t * v4 = (int32_t *)(a3 - 31); // 0x32d06f
    uint32_t v5 = *v4; // 0x32d06f
    uint32_t v6 = v5 + (int32_t)v1; // 0x32d06f
    *v4 = v6;
    *(int32_t *)(v1 + 77) = (int32_t)a3;
    int64_t v7 = (v6 < v5 ? -0xe8ee321d : -0xe8ee321c) + a2 - v1; // 0x32d075
    int32_t * v8 = (int32_t *)(v7 & 0xffffffff); // 0x32d07a
    *v8 = *v8 + (int32_t)v7;
    unknown_5299788();
    unknown_5fc29f95(((v3 & (int64_t)&g2) == 0 ? 4 : -4) + a1);
    return unknown_120fcb9e();
}

// Address range: 0x32d123 - 0x32d124
int64_t function_32d123(void) {
    // 0x32d123
    int64_t result; // 0x32d123
    return result;
}

// Address range: 0x32d139 - 0x32d13b
int64_t function_32d139(void) {
    // 0x32d139
    return function_32d123();
}

// Address range: 0x32d173 - 0x32d174
int64_t function_32d173(void) {
    // 0x32d173
    int64_t result; // 0x32d173
    return result;
}

// Address range: 0x32d17c - 0x32d17d
int64_t function_32d17c(void) {
    // 0x32d17c
    int64_t result; // 0x32d17c
    return result;
}

// Address range: 0x32d1f4 - 0x32d1f5
int64_t function_32d1f4(int64_t a1) {
    // 0x32d1f4
    int64_t result; // 0x32d1f4
    return result;
}

// Address range: 0x32d205 - 0x32d20b
int64_t function_32d205(void) {
    // 0x32d205
    return unknown_1102540b();
}

// Address range: 0x32d231 - 0x32d237
int64_t function_32d231(int64_t a1) {
    // 0x32d231
    return unknown_16fd237(a1);
}

// Address range: 0x32d455 - 0x32d456
int64_t function_32d455(void) {
    // 0x32d455
    int64_t result; // 0x32d455
    return result;
}

// Address range: 0x32d48e - 0x32d4cd
int64_t function_32d48e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32d48e
    int64_t v1; // 0x32d48e
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int16_t v4 = a3; // 0x32d493
    __asm_out_133(v4, (char)v3);
    unsigned char v5 = *(char *)-0xe1c0a61b724f5ca; // 0x32d496
    __asm_out_133(v4, v5);
    uint32_t v6 = (int32_t)a4 % 32; // 0x32d4ac
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(a4 + 0x4778e712); // 0x32d4ac
        uint32_t v8 = *v7; // 0x32d4ac
        *v7 = v8 >> 32 - v6 | v8 << v6;
    }
    int64_t v9 = (v3 & 0xff00) + a4 & 0xff00 | v3 & -0x10000; // 0x32d496
    unsigned char v10 = *(char *)-0x7ac41454 + (char)(v2 / 256); // 0x32d4a5
    *(char *)(v9 | (int64_t)v5) = v5;
    *(char *)-0x2890843f = *(char *)-0x2890843f + v10;
    char v11 = *(char *)((256 * (int64_t)v10 | v2 & -0xff01) + 124); // 0x32d4c7
    return (v9 | 64) + 0x3e1e003c & 0xffffff00 | (int64_t)(v11 | 125);
}

// Address range: 0x32d4ea - 0x32d541
int64_t function_32d4ea(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x32d4ea
    int64_t v1; // 0x32d4ea
    *(char *)a2 = (char)v1 + (char)a2;
    int32_t v2 = __asm_in_134(61); // 0x32d4ec
    int64_t result = v2; // 0x32d4ec
    int32_t * v3 = (int32_t *)result; // 0x32d4ef
    *v3 = *v3 + v2;
    *(char *)a3 = (char)(a3 / 256);
    int32_t * v4 = (int32_t *)(result + 0x19fecd77); // 0x32d4f8
    *v4 = *v4 + v2;
    *v3 = *v3 | (int32_t)a3;
    uint32_t v5 = (int32_t)a4; // 0x32d534
    uint32_t v6 = v5 + (int32_t)a2; // 0x32d534
    int32_t * v7 = (int32_t *)(a3 - 111); // 0x32d536
    uint32_t v8 = *v7; // 0x32d536
    uint32_t v9 = v8 + (int32_t)v1; // 0x32d536
    uint32_t v10 = v9 + (int32_t)(v6 < v5); // 0x32d536
    *v7 = v10;
    if (v6 < v5 ? v10 <= v8 : v9 < v8) {
        int32_t * v11 = (int32_t *)(v1 + 0x5001e870); // 0x32d53b
        *v11 = *v11 + (int32_t)v1;
        return result;
    }
    // 0x32d523
    __asm_out_135((int16_t)a3, v2);
    *(int32_t *)a1 = v2;
    char * v12 = (char *)result; // 0x32d525
    *v12 = *v12 + (char)v2;
    char * v13 = (char *)(a2 + 0x13d8000 + (int64_t)v6); // 0x32d527
    *v13 = *v13 + (char)(v6 / 256);
    return result;
}

// Address range: 0x32d553 - 0x32d558
int64_t function_32d553(void) {
    // 0x32d553
    return function_ffffffffa3392e51();
}

// Address range: 0x32d59d - 0x32d5a6
int64_t function_32d59d(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_4656c76(a1, a2, a3); // 0x32d59d
    int64_t v2; // 0x32d59d
    *(int32_t *)a1 = (int32_t)v2;
    return v1 ^ 154;
}

// Address range: 0x32d5a6 - 0x32d5ab
int64_t function_32d5a6(void) {
    // 0x32d5a6
    return function_3d7dd7ab();
}

// Address range: 0x32d5b8 - 0x32d5b9
int64_t function_32d5b8(void) {
    // 0x32d5b8
    int64_t result; // 0x32d5b8
    return result;
}

// Address range: 0x32d5ba - 0x32d5e0
int64_t function_32d5ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32d5ba
    int64_t v1; // 0x32d5ba
    uint32_t v2 = (int32_t)v1;
    __asm_out(-67, v2);
    uint32_t v3 = (int32_t)a4 % 32; // 0x32d5bc
    if (v3 != 0) {
        *(int32_t *)v1 = v2 >> 32 - v3 | v2 << v3;
    }
    *(char *)-0x3b17d33b = *(char *)-0x3b17d33b + (char)(v1 / 256);
    *(char *)a1 = (char)v1;
    char * v4 = (char *)(v1 + 0x4dd2b0ff); // 0x32d5c5
    unsigned char v5 = *v4; // 0x32d5c5
    char v6 = v5 + 18; // 0x32d5c5
    *v4 = v6;
    bool v7; // 0x32d5ba
    int64_t v8 = __asm_sti((v7 ? -1 : 1) + a1); // 0x32d5ce
    if (v5 > 237 || v6 == 0) {
        v8 = function_32d5b8();
    }
    int32_t * v9 = (int32_t *)(v1 + 0xae08da8); // 0x32d5d0
    *v9 = *v9 + (int32_t)v8;
    return function_1d1a2c24();
}

// Address range: 0x32d610 - 0x32d615
int64_t function_32d610(int64_t a1) {
    // 0x32d610
    int64_t result; // 0x32d610
    return result;
}

// Address range: 0x32d61a - 0x32d61d
int64_t function_32d61a(int64_t a1) {
    // 0x32d61a
    int64_t result; // 0x32d61a
    return result;
}

// Address range: 0x32d620 - 0x32d624
int64_t function_32d620(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32d620
    int64_t result; // 0x32d620
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x32d630 - 0x32d636
int64_t function_32d630(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32d630
    int64_t result; // 0x32d630
    return result;
}

// Address range: 0x32d668 - 0x32d669
int64_t function_32d668(int64_t a1) {
    // 0x32d668
    int64_t result; // 0x32d668
    return result;
}

// Address range: 0x32d67d - 0x32d682
int64_t function_32d67d(int64_t a1) {
    // 0x32d67d
    int64_t result; // 0x32d67d
    return result;
}

// Address range: 0x32d782 - 0x32d786
int64_t function_32d782(void) {
    // 0x32d782
    int64_t result; // 0x32d782
    return result;
}

// Address range: 0x32d7d3 - 0x32d7e0
int64_t function_32d7d3(int64_t a1, int64_t a2) {
    // 0x32d7d3
    int64_t result; // 0x32d7d3
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x32d80a - 0x32d80b
int64_t function_32d80a(void) {
    // 0x32d80a
    int64_t result; // 0x32d80a
    return result;
}

// Address range: 0x32d80c - 0x32d82b
int64_t function_32d80c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32d80c
    int64_t v1; // 0x32d80c
    int64_t v2 = v1;
    unsigned char v3 = (char)(v1 + a4) % 32; // 0x32d81f
    int64_t result; // 0x32d80c
    if (v3 != 0) {
        result = v2 & -256 | (int64_t)((char)v2 >> v3);
    }
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return result;
}

// Address range: 0x32d82d - 0x32d83e
int64_t function_32d82d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32d82d
    int64_t v1; // 0x32d82d
    __asm_out_133((int16_t)a3, (char)v1);
    return function_ffffffffcc26e4d8();
}

// Address range: 0x32d840 - 0x32d842
int64_t function_32d840(int64_t a1) {
    // 0x32d840
    int64_t result; // 0x32d840
    return result;
}

// Address range: 0x32d843 - 0x32d844
int64_t function_32d843(void) {
    // 0x32d843
    int64_t result; // 0x32d843
    return result;
}

// Address range: 0x32d848 - 0x32d853
int64_t function_32d848(void) {
    // 0x32d848
    int64_t v1; // 0x32d848
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 - 0x74fec259); // 0x32d848
    *v3 = *v3 + (char)(v2 / 256);
    return function_55d0c781();
}

// Address range: 0x32d859 - 0x32d85d
int64_t function_32d859(void) {
    // 0x32d859
    return function_32d80a();
}

// Address range: 0x32d861 - 0x32d868
int64_t function_32d861(int64_t a1) {
    // 0x32d861
    int64_t v1; // 0x32d861
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x32d8ae - 0x32d8e0
int64_t function_32d8ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)(90 * *(int32_t *)(a4 + 117)); // 0x32d8c9
    unsigned char v1 = (char)a4 % 32; // 0x32d8cd
    if (v1 != 0) {
        char * v2 = (char *)(result - 27 + 4 * result); // 0x32d8cd
        *v2 = *v2 >> v1;
    }
    return result;
}

// Address range: 0x32d8e3 - 0x32d8e8
int64_t function_32d8e3(int64_t a1, int64_t a2) {
    // 0x32d8e3
    int64_t v1; // 0x32d8e3
    return function_32d922(a1, a2, v1, v1);
}

// Address range: 0x32d8e8 - 0x32d8ef
int64_t function_32d8e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32d8e8
    bool v1; // 0x32d8e8
    if (v1 || false) {
        // 0x32d908
        int64_t result; // 0x32d8e8
        return result;
    }
    uint32_t v2 = (int32_t)a4 % 32; // 0x32d8ea
    if (v2 != 0) {
        uint32_t v3 = (int32_t)a1;
        *(int32_t *)a1 = v3 << 32 - v2 | v3 >> v2;
    }
    return function_32d94d();
}

// Address range: 0x32d901 - 0x32d905
int64_t function_32d901(int64_t a1, int64_t a2) {
    // 0x32d901
    return (uint32_t)__readgsdword(a2);
}

// Address range: 0x32d907 - 0x32d908
int64_t function_32d907(int64_t a1) {
    // 0x32d907
    int64_t result; // 0x32d907
    return result;
}

// Address range: 0x32d909 - 0x32d90b
int64_t function_32d909(void) {
    // 0x32d909
    int64_t result; // 0x32d909
    return result;
}

// Address range: 0x32d916 - 0x32d919
int64_t function_32d916(void) {
    // 0x32d916
    int64_t result; // 0x32d916
    return result;
}

// Address range: 0x32d922 - 0x32d92e
int64_t function_32d922(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 102); // 0x32d922
    int64_t result; // 0x32d922
    *v1 = *v1 + (char)result;
    *(char *)a2 = (char)result;
    return result;
}

// Address range: 0x32d931 - 0x32d936
int64_t function_32d931(int64_t a1) {
    // 0x32d931
    int64_t result; // 0x32d931
    *(int64_t *)(result - 36) = a1;
    return result;
}

// Address range: 0x32d93d - 0x32d942
int64_t function_32d93d(void) {
    // 0x32d93d
    int64_t result; // 0x32d93d
    return result;
}

// Address range: 0x32d94d - 0x32d954
int64_t function_32d94d(void) {
    // 0x32d94d
    return function_ffffffffef341654();
}

// Address range: 0x32d9a0 - 0x32d9a2
int64_t function_32d9a0(void) {
    // 0x32d9a0
    int64_t v1; // 0x32d9a0
    return function_32d9d5(v1, v1, v1, v1);
}

// Address range: 0x32d9b3 - 0x32d9d5
int64_t function_32d9b3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x32d9b3
    int64_t result = v2 & -256 | (int64_t)*(char *)0x1e800135ab04e0a; // 0x32d9bc
    bool v3; // 0x32d9b3
    if (true == !v3) {
        result = function_32d9ef(a1, a2, a3, a4, (int64_t)&g6);
    }
    int32_t * v4 = (int32_t *)(a3 + a1); // 0x32d9be
    *v4 = *v4 | -57;
    char * v5 = (char *)(v2 - 0x170c260f); // 0x32d9c2
    *v5 = *v5 - (char)(a4 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
    *(char *)-0x16f42451 = *(char *)-0x16f42451 | (char)result;
    return result;
}

// Address range: 0x32d9d5 - 0x32d9e6
int64_t function_32d9d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32d9d5
    return a2 & 0xffffffff;
}

// Address range: 0x32d9ef - 0x32da17
int64_t function_32d9ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32d9ef
    int64_t v1; // 0x32d9ef
    int64_t v2 = v1 & -256 | 161; // 0x32d9ef
    bool v3; // 0x32d9ef
    int64_t v4 = (int64_t)v3 & 0xffffffff; // 0x32d9f2
    int32_t * v5 = (int32_t *)(4 * v2 - 81 + v4); // 0x32d9f4
    *v5 = *v5 + (int32_t)a4;
    int64_t v6; // 0x32d9ef
    char * v7 = (char *)((int64_t)&v6 + 0x1e8742a + 8 * v4); // 0x32d9f9
    *v7 = *v7 + (char)a4;
    int64_t v8 = unknown_ffffffff8931050d(); // 0x32da07
    int32_t * v9 = (int32_t *)v2; // 0x32da10
    *v9 = *v9 & (int32_t)((v8 + 234) % 256 | v8 & 0xffffff00);
    return unknown_ffffffff9a8a4c18();
}

// Address range: 0x32da24 - 0x32da42
int64_t function_32da24(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x32da24
    int64_t v1; // 0x32da24
    uint64_t v2 = v1;
    int64_t v3 = (v1 ^ v1) & 0xffffffff; // 0x32da24
    char * v4 = (char *)(v3 - 96 + 4 * v3); // 0x32da2c
    *v4 = *v4 + (char)(a4 / 256);
    char * v5 = (char *)(a3 - 70); // 0x32da30
    *v5 = *v5 + (char)(v2 / 256);
    int64_t v6 = unknown_ffffffffab5e4539(); // 0x32da33
    return (v6 + v2) % 256 | v6 & -256;
}

// Address range: 0x32da89 - 0x32da8a
int64_t function_32da89(int64_t a1) {
    // 0x32da89
    int64_t result; // 0x32da89
    return result;
}

// Address range: 0x32da96 - 0x32da9b
int64_t function_32da96(void) {
    // 0x32da96
    return function_7261b5f3();
}

// Address range: 0x32dad2 - 0x32dad3
int64_t function_32dad2(void) {
    // 0x32dad2
    int64_t result; // 0x32dad2
    return result;
}

// Address range: 0x32dada - 0x32dae0
int64_t function_32dada(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32dada
    int64_t result; // 0x32dada
    return result;
}

// Address range: 0x32dae1 - 0x32dae4
int64_t function_32dae1(void) {
    // 0x32dae1
    int64_t result; // 0x32dae1
    return result;
}

// Address range: 0x32daff - 0x32db2b
int64_t function_32daff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32daff
    int64_t v1; // 0x32daff
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    int32_t * v2 = (int32_t *)(v1 + 0x390d585); // 0x32db07
    *v2 = *v2 - 4;
    int32_t * v3 = (int32_t *)(a2 + 25); // 0x32db19
    *v3 = *v3 + (int32_t)a1;
    unknown_11029522();
    int32_t * v4 = (int32_t *)(a4 + 88); // 0x32db21
    *v4 = *v4 - 1;
    return function_32dad2();
}

// Address range: 0x32db5f - 0x32dc03
int64_t function_32db5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32db5f
    int64_t v1; // 0x32db5f
    uint64_t v2 = v1;
    int3_t v3; // 0x32db5f
    int3_t v4 = v3;
    int64_t v5 = a2;
    unsigned char v6 = (char)(v2 / 256); // 0x32db64
    *(char *)-0x35ee9a95 = *(char *)-0x35ee9a95 + v6;
    uint32_t v7 = *(int32_t *)(a1 - 0x10d572f9 + a2); // 0x32db6a
    int64_t v8 = v7; // 0x32db6a
    __asm_out_135((int16_t)v7, (int32_t)v1);
    int64_t result3; // 0x32db5f
    int64_t v9; // 0x32db5f
    int64_t v10; // 0x32db5f
    if ((char)a5 >= 0) {
        int3_t v11 = v4 - 1; // 0x32dbac
        __frontend_reg_store_fpr(v11, 1.0L);
        int32_t v12 = a4; // 0x32dbae
        int32_t v13 = v2; // 0x32dbae
        int32_t v14 = v13 + v12; // 0x32dbae
        if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0 != v14 != 0) {
            char * v15 = (char *)v8; // 0x32dbb2
            *v15 = *v15 | v6;
            return result3 & -256;
        }
        int64_t result = v2 & 0xffffffff; // 0x32dbdd
        result3 = result;
        if (((v14 ^ v12) & (v14 ^ v13)) < 0) {
            // 0x32dbbd
            return result;
        }
        // 0x32dbe0
        result3 = v8;
        unsigned char v16 = *(char *)0xf191359; // 0x32dbe1
        if (v16 > v6) {
            int64_t result2 = v8 & 0xffffff00 | (int64_t)*(char *)-0x293c8ed2fe179000; // 0x32dbc0
            result3 = result2;
            if (((char)v7 ^ -92) < 1) {
                // 0x32dbbd
                return result2;
            }
            // 0x32dbcd
            __frontend_reg_load_fpr(v11);
            __frontend_reg_load_fpr(v11);
            int32_t * v17 = (int32_t *)((v2 & 0xffff00ff | (int64_t)&g3) + 72); // 0x32dbcf
            int64_t v18; // 0x32db5f
            *v17 = *v17 + (int32_t)(int64_t)&v18;
            __frontend_reg_store_fpr(v4, __frontend_reg_load_fpr(v4) + (float80_t)*(float32_t *)&result3);
            return (int64_t)*(int32_t *)&v5;
        }
        int64_t v19 = unknown_ffffffffe390f5ec(); // 0x32dbe6
        result3 = v19;
        *(char *)a1 = (char)v19;
        v10 = result;
        v9 = v1 & 0xffffffff;
        if (((v6 - v16 ^ v6) & (v16 ^ v6)) >= 0) {
            // 0x32dbee
            __asm_out_133((int16_t)v2, (char)result3);
            return result3;
        }
    } else {
        // 0x32db75
        v10 = v8;
        if ((char)a5 < 0 != (a5 & (int64_t)L"\n2") != 0) {
            // 0x32db77
            return function_3d33478d();
        }
    }
    uint64_t v20 = v9;
    int64_t result4 = unknown_ffffffffec7fd4fd(); // 0x32dbf3
    result3 = result4;
    if ((char)(v20 / 128) < 0 == ((v20 / 0x4000 ^ v20 / 0x8000) % 2 != 0)) {
        // 0x32dbbd
        return result4;
    }
    int64_t result5 = unknown_1860be02(); // 0x32dbfc
    int32_t v21 = *(int32_t *)(v5 + ((a5 & (int64_t)&g2) == 0 ? 4 : -4)); // 0x32dc02
    __asm_outsd((int16_t)v10, v21);
    return result5;
}

// Address range: 0x32dc07 - 0x32dc08
int64_t function_32dc07(int64_t a1) {
    // 0x32dc07
    int64_t result; // 0x32dc07
    return result;
}

// Address range: 0x32dc12 - 0x32dc13
int64_t function_32dc12(void) {
    // 0x32dc12
    int64_t result; // 0x32dc12
    return result;
}

// Address range: 0x32dc1b - 0x32dc3a
int64_t function_32dc1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32dc1b
    unknown_ffffffffe6060e21();
    int64_t v1 = __asm_int3(); // 0x32dc22
    unsigned char v2 = *(char *)-0x1790598c; // 0x32dc23
    *(char *)-0x1790598c = v2 / 128 | 2 * v2;
    int64_t v3 = v1; // 0x32dc2a
    bool v4; // 0x32dc1b
    if (v4) {
        v3 = function_32dc6f();
    }
    // 0x32dc2c
    *(int32_t *)a1 = (int32_t)v3;
    int64_t v5; // 0x32dc1b
    char * v6 = (char *)(4 * v5 + a2); // 0x32dc2d
    *v6 = *v6 + (char)(v3 / 256);
    return function_32dc12();
}

// Address range: 0x32dc42 - 0x32dc48
int64_t function_32dc42(void) {
    // 0x32dc42
    abort();
    // UNREACHABLE
}

// Address range: 0x32de55 - 0x32de62
int64_t function_32de55(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(__asm_iretd() + 5); // 0x32de5e
    int64_t v2; // 0x32de55
    *v1 = *v1 + (int32_t)v2;
    return __asm_sti(a1);
}

// Address range: 0x32de63 - 0x32de80
int64_t function_32de63(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32de63
    int64_t v1; // 0x32de63
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x32de63
    int64_t v3 = v2 ? -4 : 4; // 0x32de63
    int64_t v4 = v3 + a1; // 0x32de63
    int64_t v5 = v3 + a2; // 0x32de63
    int64_t v6; // 0x32de63
    int32_t v7 = *(int32_t *)&v6; // 0x32de64
    int32_t * v8 = (int32_t *)((int64_t)(v7 & (int32_t)v1) + 0x18d9ca); // 0x32de66
    *v8 = *v8 - (int32_t)a3;
    unknown_ffffffffb1f89872(v4, v5);
    *(char *)v4 = *(char *)v5;
    int64_t v9 = v2 ? -1 : 1; // 0x32de71
    unknown_ffffffffe4397c7f(v4 + v9, v5 + v9);
    return function_32de47();
}

// Address range: 0x32de80 - 0x32de90
int64_t function_32de80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32de80
    int64_t v1; // 0x32de80
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 64); // 0x32de83
    *v3 = *v3 + (int32_t)v1;
    return v2 & -256 | (int64_t)(*(char *)(a3 + 0x601e8bc) & (char)v2);
}

// Address range: 0x32de90 - 0x32de93
int64_t function_32de90(int64_t a1) {
    // 0x32de90
    int64_t result; // 0x32de90
    return result;
}

// Address range: 0x32de9d - 0x32debc
int64_t function_32de9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32de9d
    int64_t result; // 0x32de9d
    uint32_t v1 = -0x175542f9 * *(int32_t *)(a2 - 44 + 8 * result); // 0x32de9f
    int32_t * v2 = (int32_t *)(result + 80 + 8 * (int64_t)v1); // 0x32dea7
    *v2 = *v2 + v1;
    return result;
}

// Address range: 0x32dec0 - 0x32df34
int64_t function_32dec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32dec0
    int64_t v1; // 0x32dec0
    int64_t result = v1;
    bool v2; // 0x32dec0
    if (v2) {
        // 0x32df2b
        return (result + 29) % 256 | result & -256;
    }
    // 0x32dec2
    return result;
}

// Address range: 0x32df82 - 0x32df83
int64_t function_32df82(void) {
    // 0x32df82
    int64_t result; // 0x32df82
    return result;
}

// Address range: 0x32dfae - 0x32dfcc
int64_t function_32dfae(int64_t a1, int64_t a2) {
    // 0x32dfae
    int64_t v1; // 0x32dfae
    *(char *)a1 = (char)v1;
    *(int32_t *)-0x3fc27c41 = *(int32_t *)-0x3fc27c41 >> 21;
    char * v2 = (char *)((v1 & 0xffffffff) - 0x604c6cec); // 0x32dfc4
    *v2 = *v2 + 1;
    return function_32df82();
}

// Address range: 0x3ba859 - 0x3ba87f
int64_t function_3ba859(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ba859
    *(int64_t *)(a4 - 8) = a5;
    *(int64_t *)(a4 - 16) = a5;
    int64_t v1; // 0x3ba859
    return function_c823b(a1, a2, a3, a5, v1, v1);
}

// Address range: 0x3ba87f - 0x3ba9c6
int64_t function_3ba87f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ba87f
    int64_t v1; // bp-48, 0x3ba87f
    int64_t v2 = (int64_t)&v1; // 0x3ba953
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3ba95c
    *v3 = a6;
    int64_t v4 = v2 + 16; // 0x3ba95f
    *(int64_t *)v4 = v1;
    *v3 = 0x38f72ac;
    *(int64_t *)(v2 + 32) = v1;
    *(int64_t *)(v2 - 16) = a4;
    v1 = v4;
    int64_t v5 = *(int64_t *)(v2 + 8); // 0x3ba9a8
    v1 = v5;
    *v3 = v5;
    int64_t v6; // 0x3ba87f
    return function_c823b(a1, a2, a3, a4, a5, v6);
}

// Address range: 0x3ba9c6 - 0x3bab15
int64_t function_3ba9c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ba9c6
    return function_c823b(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3bab1c - 0x3bab1f
int64_t function_3bab1c(void) {
    // 0x3bab1c
    int64_t result; // 0x3bab1c
    return result;
}

// Address range: 0x3bab44 - 0x3bab4e
int64_t function_3bab44(int64_t a1) {
    // 0x3bab44
    int64_t v1; // 0x3bab44
    int64_t v2 = v1;
    return (v2 + 36) % 256 | v2 & -256;
}

// Address range: 0x3babf6 - 0x3babf9
int64_t function_3babf6(void) {
    // 0x3babf6
    int64_t result; // 0x3babf6
    return result;
}

// Address range: 0x3bac1a - 0x3bac1f
int64_t function_3bac1a(void) {
    // 0x3bac1a
    int64_t v1; // 0x3bac1a
    int64_t v2 = v1;
    bool v3; // 0x3bac1a
    return (v2 - (v3 ? 167 : 166)) % 256 | v2 & -256;
}

// Address range: 0x3bac54 - 0x3bac57
int64_t function_3bac54(void) {
    // 0x3bac54
    int64_t result; // 0x3bac54
    return result;
}

// Address range: 0x3bb259 - 0x3bb311
int64_t function_3bb259(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bb259
    int64_t v1; // bp-16, 0x3bb259
    int64_t v2 = (int64_t)&v1; // 0x3bb267
    int64_t v3 = v2 + 16; // 0x3bb26e
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x3bb27d
    int64_t v5 = *v4; // 0x3bb27d
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x3bb27d
    v1 = v5;
    *(int64_t *)(v2 - 8) = v5;
    *v6 = a4;
    int64_t * v7 = (int64_t *)v3; // 0x3bb2b4
    *v4 = *v7;
    *v7 = a3;
    *v6 = v5;
    *(int64_t *)(v2 + 48) = v5;
    int64_t v8 = v2 + 24; // 0x3bb2d4
    *v6 = v8;
    int64_t v9 = *v7; // 0x3bb2e0
    *v6 = v9;
    v1 = v9;
    int64_t v10 = *(int64_t *)v8; // 0x3bb2f6
    *v7 = v10;
    *v6 = v10;
    int64_t v11; // 0x3bb259
    return function_c823b(a1, a2, *v7, v11, v11, v11);
}

// Address range: 0x3bb311 - 0x3bb452
int64_t function_3bb311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3bb311
    int64_t v1; // 0x3bb311
    return function_c823b(a1, a2, a3, a4, a5, v1);
}
