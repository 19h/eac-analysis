/*
 * Targeted RetDec C for native executable gap queue batch 1487.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x35e08a-0x35e28a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35e28a-0x35e48a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35e48a-0x35e68a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35e68a-0x35e88a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35e88a-0x35ea08 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4937c9-0x4938c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4938c9-0x493ac9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x493ac9-0x493bc9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x493ec9-0x4940c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4940c9-0x494251 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4be57b-0x4be77b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4be77b-0x4be97b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4be97b-0x4beb7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4beb7b-0x4bed7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bed7b-0x4bef7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bef7b-0x4bf0f0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
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

int64_t function_2bac08ce();
int64_t function_35e08a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_35e136(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35e21d(void);
int64_t function_35e25b(void);
int64_t function_35e26f(int64_t a1);
int64_t function_35e292(int64_t a1);
int64_t function_35e2fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_35e360(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35e3da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35e3e5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35e425(void);
int64_t function_35e426(int64_t a1);
int64_t function_35e440(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35e4a7(int64_t a1);
int64_t function_35e4af(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35e5c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35e5e3(void);
int64_t function_35e5fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_35e702(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35e738(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35e741(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35e7c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_35e917(void);
int64_t function_35e96c(int64_t a1);
int64_t function_35e97b(void);
int64_t function_35e97c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35e991(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_35e9b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35e9c2(void);
int64_t function_3d360bf1();
int64_t function_3df917();
int64_t function_493760();
int64_t function_4937c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4937e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4938f8(void);
int64_t function_493912(int64_t a1);
int64_t function_493920(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49393a(void);
int64_t function_493950(void);
int64_t function_49396d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49398e(int64_t a1);
int64_t function_4939aa(void);
int64_t function_4939b3(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_4939bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4939c7(int64_t a1);
int64_t function_4939d3(int64_t a1);
int64_t function_4939dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_493a52(int64_t a1, int64_t a2);
int64_t function_493a70(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_493ac0(int64_t a1);
int64_t function_493b20(int64_t a1);
int64_t function_493b30(int64_t a1);
int64_t function_493b40(int64_t a1);
int64_t function_493b50(int64_t a1);
int64_t function_493b60(int64_t a1);
int64_t function_493b93(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_493ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_493f3b(int64_t a1);
int64_t function_493f56(void);
int64_t function_493f78(int64_t a1);
int64_t function_493fac(void);
int64_t function_493fb4(void);
int64_t function_493fbd(void);
int64_t function_493fd3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_493fd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_493fef(void);
int64_t function_494006(int64_t a1);
int64_t function_494016(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49402d(void);
int64_t function_49402e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_494043(int64_t a1, int64_t a2);
int64_t function_49406d(int64_t a1);
int64_t function_494079(void);
int64_t function_494080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4940e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_494100(int64_t a1, int64_t a2);
int64_t function_49417b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_4941d0(int64_t a1);
int64_t function_494231(void);
int64_t function_494251();
int64_t function_494306();
int64_t function_4b16c0();
int64_t function_4b1820();
int64_t function_4b1ac0();
int64_t function_4be57b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint32_t a7);
int64_t function_4bec30(int64_t a1);
int64_t function_4bee90(int64_t a1);
int64_t function_ffffffffaddd1795();
int64_t function_ffffffffd55c2e67();
int64_t function_ffffffffe0b9ef69();
int64_t function_ffffffffe743a69e();
int64_t function_fffffffffa9e7a44();
int64_t unknown_3ace660a();
int64_t unknown_b95dbc();

// Address range: 0x35e08a - 0x35e11a
int64_t function_35e08a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x35e08a
    bool v1; // 0x35e08a
    if (v1 || false) {
        // 0x35e0f2
        int64_t v2; // 0x35e08a
        int64_t result = v2 & 0xffffffff; // 0x35e08b
        char * v3 = (char *)(result + 0x25a90610); // 0x35e0f2
        *v3 = *v3 & (char)a3;
        *(char *)(a3 + 0x3a0b7267) = (char)(a3 / 256);
        *(char *)a1 = __asm_insb((int16_t)a3);
        *(char *)-0x38c082f5 = *(char *)-0x38c082f5 + (char)(v2 / 256);
        *(int32_t *)a1 = (int32_t)v2;
        return result;
    }
    // 0x35e08e
    return a4 & 0xffffffff;
}

// Address range: 0x35e136 - 0x35e170
int64_t function_35e136(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x35e136
    int64_t v1; // 0x35e136
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 - 48); // 0x35e138
    *v3 = *v3 + (int32_t)a1;
    int64_t v4; // 0x35e136
    int32_t v5 = *(int32_t *)&v4; // 0x35e145
    bool v6; // 0x35e136
    uint32_t v7 = v5 | (int32_t)((v2 + a4 / 256 + (int64_t)v6) % 256 | v2 & 0xffffff00); // 0x35e145
    int64_t v8; // 0x35e136
    *(char *)a2 = *(char *)&v8 + (char)a4;
    *(int32_t *)a1 = v7;
    int64_t v9 = v6 ? 0xfffffffc : 4; // 0x35e149
    int32_t v10 = *(int32_t *)0xea075b; // 0x35e154
    int64_t v11 = v6 ? -2 : 2; // 0x35e15a
    int32_t * v12 = (int32_t *)((int64_t)v7 - 0x61c530fb); // 0x35e15b
    *v12 = *v12 + (int32_t)v1;
    return function_3d360bf1(v11 + (int64_t)((int32_t)(v9 + a1) - v10), v11 + a2);
}

// Address range: 0x35e21d - 0x35e220
int64_t function_35e21d(void) {
    // 0x35e21d
    int64_t result; // 0x35e21d
    return result;
}

// Address range: 0x35e25b - 0x35e25e
int64_t function_35e25b(void) {
    // 0x35e25b
    int64_t result; // 0x35e25b
    return result;
}

// Address range: 0x35e26f - 0x35e272
int64_t function_35e26f(int64_t a1) {
    // 0x35e26f
    int64_t v1; // 0x35e26f
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x35e292 - 0x35e293
int64_t function_35e292(int64_t a1) {
    // 0x35e292
    int64_t result; // 0x35e292
    return result;
}

// Address range: 0x35e2fa - 0x35e35b
int64_t function_35e2fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    uint32_t v1 = (int32_t)a4; // 0x35e2fa
    int32_t v2 = v1 - 0x2825b715; // 0x35e2fb
    int64_t v3; // 0x35e2fa
    if (llvm_ctpop_i8((char)v2) % 2 == 0) {
        int64_t result = (int64_t)*(char *)0x3d00cb06e0002c09 | (int64_t)(v2 & -256); // 0x35e347
        int32_t * v4 = (int32_t *)(v3 + 61); // 0x35e350
        *v4 = *v4 + (int32_t)result;
        return result;
    }
    unsigned char v5 = (char)a1;
    *(char *)a1 = (char)a3 + v5 + (char)(v1 < 0x2825b715);
    uint64_t v6 = unknown_3ace660a(); // 0x35e304
    char * v7 = (char *)(v3 - 0x6fa8fec3 + 2 * v3); // 0x35e309
    *v7 = *v7 + (char)(v6 / 256);
    int32_t * v8 = (int32_t *)(a1 + 0x9947720); // 0x35e311
    *v8 = *v8 + (int32_t)v3;
    unsigned char v9 = *(char *)(a5 + 0xd1fb08f6 & 0x8b37013d); // 0x35e32c
    return a1 + 0x6f123a91 + (int64_t)(v9 > v5) & 0xffffffe2;
}

// Address range: 0x35e360 - 0x35e365
int64_t function_35e360(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35e360
    int64_t result; // 0x35e360
    return result;
}

// Address range: 0x35e3da - 0x35e3e0
int64_t function_35e3da(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 60); // 0x35e3da
    int64_t result; // 0x35e3da
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x35e3e5 - 0x35e421
int64_t function_35e3e5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x35e3e5
    int64_t result; // 0x35e3e5
    uint64_t v1 = result;
    bool v2; // 0x35e3e5
    if (v2) {
        // 0x35e421
        return result;
    }
    // 0x35e3e9
    *(char *)a1 = __asm_insb((int16_t)a3 & -256 | 58);
    int64_t v3 = unknown_b95dbc(); // 0x35e3ea
    *(char *)-0x5cd33d0a = *(char *)-0x5cd33d0a + (char)(v1 / 256);
    uint64_t v4 = v3 + 165; // 0x35e3f5
    char * v5 = (char *)(v4 % 256 | v3 & -256); // 0x35e3f7
    char v6 = v4; // 0x35e3f7
    *v5 = *v5 + v6;
    char * v7 = (char *)(v1 + 5); // 0x35e3f9
    *v7 = *v7 + (char)(a4 / 256);
    *v5 = *v5 + v6;
    return function_35e426((int64_t)&g15);
}

// Address range: 0x35e425 - 0x35e426
int64_t function_35e425(void) {
    // 0x35e425
    int64_t result; // 0x35e425
    return result;
}

// Address range: 0x35e426 - 0x35e429
int64_t function_35e426(int64_t a1) {
    // 0x35e426
    int64_t result; // 0x35e426
    return result;
}

// Address range: 0x35e440 - 0x35e444
int64_t function_35e440(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35e440
    int64_t v1; // 0x35e440
    return v1 & -256 | (int64_t)__asm_in_135((int16_t)a3);
}

// Address range: 0x35e4a7 - 0x35e4af
int64_t function_35e4a7(int64_t a1) {
    // 0x35e4a7
    int64_t v1; // 0x35e4a7
    int64_t v2 = v1;
    bool v3; // 0x35e4a7
    return 256 * ((int64_t)v3 - v1) + v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x35e4af - 0x35e51a
int64_t function_35e4af(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a4 + 70); // 0x35e4b2
    uint32_t v3 = *v2; // 0x35e4b2
    int64_t v4; // 0x35e4af
    uint32_t v5 = v3 + (int32_t)v4; // 0x35e4b2
    *v2 = v5;
    int32_t v6 = __asm_in((int16_t)a3); // 0x35e4b6
    int64_t v7 = v6; // 0x35e4b6
    int32_t v8 = *(int32_t *)&v1; // 0x35e4b7
    int64_t v9 = (int32_t)(v5 < v3) + (int32_t)a1 - v8; // 0x35e4b7
    int64_t v10; // 0x35e4af
    *(int32_t *)v9 = *(int32_t *)&v10;
    v10 = a2 + 4;
    char * v11 = (char *)(v7 - 119); // 0x35e4c5
    *v11 = *v11 + (char)(a4 / 256);
    if (v6 > 0x56025001) {
        // 0x35e501
        *(char *)0x4fb11811 = *(char *)0x4fb11811 + (char)(v4 / 256);
        *(int32_t *)0xb4a03abc = *(int32_t *)0xb4a03abc | (int32_t)v10;
        return v7 + 0xc5465bb3 & 0xffffffff;
    }
    uint32_t v12 = (int32_t)v1; // 0x35e4cf
    uint32_t v13 = *(int32_t *)(v4 + 0x4b28e3cb) + v12; // 0x35e4cf
    char v14 = *(char *)(v7 - 0x450b3816); // 0x35e4d5
    *(char *)-0x684b7c1e = *(char *)-0x684b7c1e + (char)(v4 / 256);
    return __asm_wait(v9 + 4, v10, v13, a4 & -256 | (int64_t)((char)a4 - v14 + (char)(v13 < v12)));
}

// Address range: 0x35e5c4 - 0x35e5de
int64_t function_35e5c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)0xcfa94d6; // 0x35e5ce
    int64_t v2; // 0x35e5c4
    *(char *)0xcfa94d6 = v1 + (char)((uint64_t)v2 / 256);
    __asm_in_136(33);
    int32_t result = __asm_in((int16_t)a3); // 0x35e5d8
    int32_t * v3 = (int32_t *)(a2 + 97); // 0x35e5d9
    *v3 = *v3 & (int32_t)a2;
    return result;
}

// Address range: 0x35e5e3 - 0x35e5e4
int64_t function_35e5e3(void) {
    // 0x35e5e3
    int64_t result; // 0x35e5e3
    return result;
}

// Address range: 0x35e5fb - 0x35e6e3
int64_t function_35e5fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = *(int32_t *)0x369107; // 0x35e600
    *(int32_t *)0x369107 = -0x7b6d5d90;
    int64_t v2; // 0x35e5fb
    char * v3 = (char *)(v2 + 1); // 0x35e606
    *v3 = *v3 + (char)(a3 / 256);
    int64_t v4; // 0x35e5fb
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    unsigned char v6 = (char)v4; // 0x35e610
    unsigned char v7 = (int32_t)v4 < 0x29e59a01 ? -40 : -41; // 0x35e610
    v4 = v4 & -256 | (int64_t)(v6 - v7);
    if (v7 >= v6) {
        // 0x35e614
        return __asm_int3(v1, a2);
    }
    // 0x35e663
    *(char *)0x4429c56f = *(char *)0x4429c56f + (char)(v2 / 256);
    int64_t v8 = __asm_int3(v1, 0); // 0x35e67a
    unsigned char v9 = (char)v8; // 0x35e67b
    char v10 = v9 + 115; // 0x35e67b
    int64_t result = v8 & -256 | (int64_t)v10; // 0x35e67b
    v4 = result;
    if (v10 < 0 == (v10 & (v9 ^ -128)) < 0 != v10 != 0) {
        // 0x35e680
        return result;
    }
    int32_t * v11 = (int32_t *)result; // 0x35e6d9
    *v11 = (int32_t)(v9 > 140) - (int32_t)result + *v11;
    return 0x10000 * (int32_t)v4 >> 16;
}

// Address range: 0x35e702 - 0x35e723
int64_t function_35e702(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x3c2b41ee; // 0x35e70b
    int64_t v2; // 0x35e702
    *(char *)-0x3c2b41ee = v1 + (char)((uint64_t)v2 / 256);
    bool v3; // 0x35e702
    return ((int64_t)v3 & 0xffff00ff | (int64_t)(int32_t)&g13) + 0xc5b69777 & 0xffffffff;
}

// Address range: 0x35e738 - 0x35e73e
int64_t function_35e738(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 4); // 0x35e738
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x35e738
    return result;
}

// Address range: 0x35e741 - 0x35e75d
int64_t function_35e741(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t v1 = a3; // 0x35e741
    __asm_wait(a1, a2, v1, a4);
    char * v2 = (char *)(a1 + 0x19307112 + 8 * __asm_wait(a1, a2, v1, a4)); // 0x35e752
    *v2 = *v2 + (char)(a4 / 256);
    return a3 & 0xffffffff;
}

// Address range: 0x35e7c3 - 0x35e890
int64_t function_35e7c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x35e7c3
    __asm_int(10);
    int64_t v1; // 0x35e7c3
    unsigned char v2 = (char)v1; // 0x35e7c5
    unsigned char v3 = (char)v1;
    if (v2 - v3 >= 0) {
        unsigned char v4 = (*(char *)(a1 + 0x6e552184) ^ (char)a4) % 32;
        if (v4 != 0) {
            uint32_t v5 = (int32_t)v1;
            uint32_t v6 = (int32_t)v4; // 0x35e7de
            *(int32_t *)v1 = v5 >> 32 - v6 | v5 << v6;
        }
        return __asm_int3((int32_t)a1, a2) & -256 | (int64_t)__asm_in_136(-65);
    }
    // 0x35e850
    *(char *)v1 = (char)(v2 < v3);
    uint64_t v7 = v1 + 185; // 0x35e852
    int64_t v8 = v7 % 256 | v1 & -256; // 0x35e852
    char * v9 = (char *)v8; // 0x35e854
    *v9 = *v9 | (char)v7;
    *(int32_t *)(v8 & 0xffffffff) = (int32_t)v1;
    char * v10 = (char *)(v1 & -0xff01 | (int64_t)&g12); // 0x35e86a
    *v10 = *v10 | (char)((int64_t)&g12 >> 8);
    return 0xbf613add;
}

// Address range: 0x35e917 - 0x35e91a
int64_t function_35e917(void) {
    // 0x35e917
    int64_t result; // 0x35e917
    return result;
}

// Address range: 0x35e96c - 0x35e96f
int64_t function_35e96c(int64_t a1) {
    // 0x35e96c
    int64_t result; // 0x35e96c
    return result;
}

// Address range: 0x35e97b - 0x35e97c
int64_t function_35e97b(void) {
    // 0x35e97b
    int64_t result; // 0x35e97b
    return result;
}

// Address range: 0x35e97c - 0x35e991
int64_t function_35e97c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35e97c
    __asm_rcl(*(int32_t *)(a2 + 0x4f040158 + a3));
    int64_t result; // 0x35e97c
    return result;
}

// Address range: 0x35e991 - 0x35e9a8
int64_t function_35e991(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x35e991
    int64_t v1; // 0x35e991
    *(char *)a1 = (char)v1;
    float80_t v2; // 0x35e991
    *(int64_t *)(a2 - 0xbf7376d) = (int64_t)v2;
    char * v3 = (char *)((int64_t)__asm_in_137(104) + a2); // 0x35e9a3
    *v3 = *v3 + (char)(a3 / 256);
    return v1 & 0xffffffff;
}

// Address range: 0x35e9b3 - 0x35e9bd
int64_t function_35e9b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35e9b3
    int64_t v1; // 0x35e9b3
    *(char *)a4 = (char)v1 - 1;
    int32_t * v2 = (int32_t *)(a2 - 28); // 0x35e9b8
    *v2 = *v2 ^ (int32_t)v1;
    return function_35e97b();
}

// Address range: 0x35e9c2 - 0x35e9c3
int64_t function_35e9c2(void) {
    // 0x35e9c2
    int64_t result; // 0x35e9c2
    return result;
}

// Address range: 0x4937c9 - 0x4937df
int64_t function_4937c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4937c9
    int64_t v1; // 0x4937c9
    char * v2 = (char *)(2 * a3 + 0x64c02911 + v1); // 0x4937c9
    *v2 = *v2 + (char)(v1 / 256);
    int32_t * v3 = (int32_t *)((v1 & -0xff01 | (int64_t)&g5) - 80); // 0x4937dc
    *v3 = *v3 | (int32_t)v1;
    return (int64_t)(*(int32_t *)(a3 - 94) * (int32_t)v1);
}

// Address range: 0x4937e0 - 0x4938d2
int64_t function_4937e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4937e0
    int64_t v1; // 0x4937e0
    int64_t v2 = v1;
    char v3 = a2;
    __asm_outsb((int16_t)a3, v3);
    bool v4; // 0x4937e0
    if (!v4) {
        // 0x4937e3
        return (v2 + 182) % 256 | v2 & -256;
    }
    if ((v2 & 0x7cc41474) == 0) {
        // 0x49383d
        __asm_int1();
        int32_t * v5 = (int32_t *)((v1 & 0xffffff00 | 163) + 122); // 0x49385e
        *v5 = *v5 / 2;
        __asm_out(-38, -93);
        return function_ffffffffe0b9ef69();
    }
    char v6 = v2; // 0x4937f0
    unsigned char v7 = v6 - v3; // 0x4937f0
    int64_t result = v2 & -256 | (int64_t)v7; // 0x4937f0
    *(char *)a1 = v7;
    if (v6 < v3) {
        // 0x49386e
        __asm_out(18, v7);
        return result;
    }
    int64_t v8 = (v4 ? -1 : 1) + a1; // 0x4937f2
    *(int32_t *)v8 = (int32_t)result;
    int64_t v9 = v8 + (v4 ? -4 : 4); // 0x4937fd
    int64_t * v10 = (int64_t *)(a4 - 1 + 4 * a5); // 0x4937fe
    *v10 = *v10 + v1;
    char * v11 = (char *)(a4 - 75); // 0x493803
    *v11 = *v11 - 36;
    __asm_iretd(v9);
    int64_t v12 = a3 & -0x10000 | (int64_t)&g14 | 220; // 0x493811
    uint64_t v13 = __asm_wait(v9, a2, (int32_t)v12, a4 & -0xff01 | a3 & 0xff00); // 0x493813
    char v14 = *(char *)v12; // 0x493815
    return 256 * (int64_t)(v14 + (char)(v13 / 256)) | v13 & -0xff01;
}

// Address range: 0x4938f8 - 0x4938fc
int64_t function_4938f8(void) {
    // 0x4938f8
    int64_t result; // 0x4938f8
    return result;
}

// Address range: 0x493912 - 0x493920
int64_t function_493912(int64_t a1) {
    // 0x493912
    int64_t result; // 0x493912
    return result;
}

// Address range: 0x493920 - 0x49392e
int64_t function_493920(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x493920
    return function_ffffffffd55c2e67();
}

// Address range: 0x49393a - 0x49393b
int64_t function_49393a(void) {
    // 0x49393a
    int64_t result; // 0x49393a
    return result;
}

// Address range: 0x493950 - 0x493951
int64_t function_493950(void) {
    // 0x493950
    int64_t result; // 0x493950
    return result;
}

// Address range: 0x49396d - 0x493982
int64_t function_49396d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x49396d
    int64_t result; // 0x49396d
    __asm_out_138(97, (int32_t)result);
    bool v1; // 0x49396d
    *(char *)((0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2) - 0x54dd6420) = (char)a4;
    return result;
}

// Address range: 0x49398e - 0x4939a9
int64_t function_49398e(int64_t a1) {
    // 0x49398e
    int64_t v1; // 0x49398e
    int32_t v2 = *(int32_t *)((v1 & 0xe8dc60c7) + 0x2002081); // 0x493993
    *(char *)-0x247b3a3 = *(char *)-0x247b3a3 + (char)(v1 / 256);
    return function_4939b3((int64_t)((int32_t)a1 - v2), v1, v1, v1);
}

// Address range: 0x4939aa - 0x4939b3
int64_t function_4939aa(void) {
    // 0x4939aa
    return function_493950();
}

// Address range: 0x4939b3 - 0x4939bc
int64_t function_4939b3(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x4939b3
    int64_t v1; // 0x4939b3
    __asm_out_138(-111, (int32_t)v1);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x4939b3
    if (a3 <= a4) {
        result = function_49393a();
    }
    // 0x4939c4
    return result;
}

// Address range: 0x4939bc - 0x4939c4
int64_t function_4939bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4939bc
    int64_t result; // 0x4939bc
    return result;
}

// Address range: 0x4939c7 - 0x4939c8
int64_t function_4939c7(int64_t a1) {
    // 0x4939c7
    int64_t result; // 0x4939c7
    return result;
}

// Address range: 0x4939d3 - 0x4939d4
int64_t function_4939d3(int64_t a1) {
    // 0x4939d3
    int64_t result; // 0x4939d3
    return result;
}

// Address range: 0x4939dc - 0x493a07
int64_t function_4939dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4939dc
    int64_t v1; // 0x4939dc
    __asm_out_134((int16_t)a3, (int32_t)v1);
    int32_t * v2 = (int32_t *)(a4 - 0x52a68b2); // 0x4939de
    *v2 = *v2 >> 4;
    *(char *)a2 = (char)v1;
    int32_t v3 = __asm_in_137(42); // 0x4939e8
    *(int32_t *)0x9079e0764d4fa6 = v3;
    int32_t * v4 = (int32_t *)(a1 + 95); // 0x4939f3
    *v4 = *v4 >> 1;
    char * v5 = (char *)((int64_t)v3 + 26); // 0x4939f6
    *v5 = *v5 + 34;
    return (int64_t)*(int32_t *)0x7faf37c24911d7c6;
}

// Address range: 0x493a52 - 0x493a58
int64_t function_493a52(int64_t a1, int64_t a2) {
    // 0x493a52
    bool v1; // 0x493a52
    int64_t v2 = v1 ? -1 : 1; // 0x493a52
    return function_2bac08ce(v2 + a1, v2 + a2);
}

// Address range: 0x493a70 - 0x493ab8
int64_t function_493a70(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x493a70
    int64_t v1; // 0x493a70
    __asm_outsb((int16_t)a3, (char)v1);
    char * v2 = (char *)(a3 - 0x3677ac16); // 0x493a74
    *v2 = (char)v1 + 52 + *v2;
    int64_t result = 0; // 0x493aa8
    if (v1 != __readfsqword(40)) {
        // 0x493aaa
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x493aaf
    return result;
}

// Address range: 0x493ac0 - 0x493b1d
int64_t function_493ac0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x493ac9
    int64_t v2 = a1; // bp-24, 0x493ade
    function_494251(a1, &v2, &v2);
    int32_t v3 = g9; // 0x493af8
    int64_t result = (int64_t)(v3 != 0) | (int64_t)(v3 & -256); // 0x493b11
    if (v1 != __readfsqword(40)) {
        // 0x493b13
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x493b18
    return result;
}

// Address range: 0x493b20 - 0x493b2d
int64_t function_493b20(int64_t a1) {
    // 0x493b20
    return (int64_t)&g1;
}

// Address range: 0x493b30 - 0x493b3d
int64_t function_493b30(int64_t a1) {
    // 0x493b30
    return (int64_t)&g2;
}

// Address range: 0x493b40 - 0x493b4d
int64_t function_493b40(int64_t a1) {
    // 0x493b40
    return (int64_t)&g3;
}

// Address range: 0x493b50 - 0x493b5d
int64_t function_493b50(int64_t a1) {
    // 0x493b50
    return (int64_t)&g4;
}

// Address range: 0x493b60 - 0x493b8e
int64_t function_493b60(int64_t a1) {
    // 0x493b60
    __readfsqword(40);
    return function_3df917();
}

// Address range: 0x493b93 - 0x493bc4
int64_t function_493b93(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(a3 + 96); // 0x493b9c
    uint32_t v3 = *v2; // 0x493b9c
    int64_t v4; // 0x493b93
    uint32_t v5 = v3 + (int32_t)v4; // 0x493b9c
    bool v6; // 0x493b93
    uint32_t v7 = v5 + (int32_t)v6; // 0x493b9c
    *v2 = v7;
    unsigned char v8 = (char)a4 % 32; // 0x493b9f
    bool v9 = v6 ? v7 <= v3 : v5 < v3; // 0x493b9f
    if (v8 != 0) {
        char v10 = *(char *)&v1; // 0x493b9f
        *(char *)v1 = v10 << v8;
        v9 = (v10 & 128 >> v8 - 1) != 0;
    }
    char * v11 = (char *)(v4 - 77); // 0x493ba1
    char v12 = *v11 + (char)(a3 / 256) + (char)v9; // 0x493ba1
    unsigned char v13 = llvm_ctpop_i8(v12); // 0x493ba1
    *v11 = v12;
    if (v13 % 2 != 0) {
        // 0x493bc3
        return a1 & 0xffffffff;
    }
    // 0x493ba6
    return v4 & -256 | (int64_t)*(char *)0x2679b32f147c75f;
}

// Address range: 0x493ec9 - 0x493f04
int64_t function_493ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x493ec9
    int64_t v1; // 0x493ec9
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    int64_t v3; // 0x493ec9
    int32_t v4 = *(int32_t *)&v3; // 0x493ed0
    uint32_t v5 = v4 ^ ((int32_t)v1 & -0xff01 | (int32_t)&g11); // 0x493ed0
    char * v6 = (char *)(int64_t)v5; // 0x493ed2
    *v6 = *v6 + (char)v5;
    __asm_out(-18, (char)__asm_wait(a1, a2, (int32_t)a3, a4));
    char * v7 = (char *)(a4 - 90); // 0x493eda
    *v7 = *v7 & (char)a3;
    int64_t v8 = __asm_int1(); // 0x493edf
    int64_t v9; // 0x493ec9
    int16_t v10 = v9; // 0x493ee8
    int64_t v11; // 0x493ec9
    int32_t v12 = *(int32_t *)&v11; // 0x493ee8
    __asm_outsd(v10, v12);
    *(char *)a2 = (char)v12 - (char)v9;
    uint32_t v13 = *(int32_t *)&v9; // 0x493ef7
    uint32_t v14 = v13 + (int32_t)a2; // 0x493ef7
    *(int32_t *)v9 = v14;
    __asm_out_133(v10, (char)v8 - 8 + (v14 < v13 ? 18 : 19));
    return function_ffffffffe743a69e();
}

// Address range: 0x493f3b - 0x493f3c
int64_t function_493f3b(int64_t a1) {
    // 0x493f3b
    int64_t result; // 0x493f3b
    return result;
}

// Address range: 0x493f56 - 0x493f57
int64_t function_493f56(void) {
    // 0x493f56
    int64_t result; // 0x493f56
    return result;
}

// Address range: 0x493f78 - 0x493f7b
int64_t function_493f78(int64_t a1) {
    // 0x493f78
    int64_t result; // 0x493f78
    return result;
}

// Address range: 0x493fac - 0x493fae
int64_t function_493fac(void) {
    // 0x493fac
    return function_493fbd();
}

// Address range: 0x493fb4 - 0x493fbb
int64_t function_493fb4(void) {
    // 0x493fb4
    bool v1; // 0x493fb4
    if (!v1) {
        function_493f56();
    }
    // 0x493fb6
    return function_ffffffffaddd1795();
}

// Address range: 0x493fbd - 0x493fc0
int64_t function_493fbd(void) {
    // 0x493fbd
    int64_t result; // 0x493fbd
    return result;
}

// Address range: 0x493fd3 - 0x493fd9
int64_t function_493fd3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x493fd3
    int64_t v1; // 0x493fd3
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + 1;
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x493fd9 - 0x493fec
int64_t function_493fd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x6f3e7a37); // 0x493fd9
    uint32_t v2 = *v1; // 0x493fd9
    int64_t v3; // 0x493fd9
    uint32_t v4 = v2 + (int32_t)v3; // 0x493fd9
    bool v5; // 0x493fd9
    uint32_t v6 = v4 + (int32_t)v5; // 0x493fd9
    *v1 = v6;
    int32_t * v7 = (int32_t *)(v3 - 114); // 0x493fdf
    *v7 = *v7 + (int32_t)v3 + (int32_t)(v5 ? v6 <= v2 : v4 < v2);
    return (int64_t)*(int32_t *)0x16fc10221241369d;
}

// Address range: 0x493fef - 0x493ff0
int64_t function_493fef(void) {
    // 0x493fef
    int64_t result; // 0x493fef
    return result;
}

// Address range: 0x494006 - 0x494007
int64_t function_494006(int64_t a1) {
    // 0x494006
    int64_t result; // 0x494006
    return result;
}

// Address range: 0x494016 - 0x49402d
int64_t function_494016(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x494016
    int64_t result; // 0x494016
    *(char *)a1 = 2 * (char)result;
    *(int32_t *)0x5841d554ef5457c6 = (int32_t)result;
    return result;
}

// Address range: 0x49402d - 0x49402e
int64_t function_49402d(void) {
    // 0x49402d
    int64_t result; // 0x49402d
    return result;
}

// Address range: 0x49402e - 0x494043
int64_t function_49402e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x49402e
    int64_t v1; // 0x49402e
    int32_t * v2 = (int32_t *)(v1 + 106); // 0x49402f
    int32_t v3 = *v2 >> 1; // 0x49402f
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x49402f
    *v2 = v3;
    if (v4 % 2 != 0) {
        function_49402d();
    }
    // 0x494034
    if (*(int32_t *)(a1 + 35) < (int32_t)a3) {
        function_493fef();
    }
    // 0x494041
    return function_49406d((int64_t)&g15);
}

// Address range: 0x494043 - 0x494051
int64_t function_494043(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 54); // 0x494043
    int64_t v2; // 0x494043
    *v1 = *v1 - v2;
    return __asm_sti(a1, a2);
}

// Address range: 0x49406d - 0x49406e
int64_t function_49406d(int64_t a1) {
    // 0x49406d
    int64_t result; // 0x49406d
    return result;
}

// Address range: 0x494079 - 0x49407a
int64_t function_494079(void) {
    // 0x494079
    int64_t result; // 0x494079
    return result;
}

// Address range: 0x494080 - 0x4940a5
int64_t function_494080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x494080
    *(char *)(a3 + 27) = (char)a3;
    int64_t v1; // 0x494080
    int32_t * v2 = (int32_t *)(v1 - 0x740eca0); // 0x494083
    bool v3; // 0x494080
    *v2 = (int32_t)v3 + (int32_t)v1 + *v2;
    int64_t result = __asm_sti((int64_t)&g15, (int64_t)&g15); // 0x494090
    int64_t v4; // 0x494080
    *(int32_t *)a1 = *(int32_t *)&v4;
    return result;
}

// Address range: 0x4940e4 - 0x4940f3
int64_t function_4940e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4940e4
    return function_fffffffffa9e7a44();
}

// Address range: 0x494100 - 0x494102
int64_t function_494100(int64_t a1, int64_t a2) {
    // 0x494100
    int64_t result; // 0x494100
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x49417b - 0x4941cf
int64_t function_49417b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x49417b
    int64_t v1; // 0x49417b
    __asm_outsb((int16_t)a3, (char)v1);
    char * v2 = (char *)(a1 - 24); // 0x494185
    *v2 = *v2 + (char)a4;
    int64_t v3 = v1 & -256 | (int64_t)(*(char *)-0x604e23542b0df41a ^ 97); // 0x494188
    int64_t v4; // 0x49417b
    unsigned char v5 = *(char *)&v4; // 0x49418b
    int32_t * v6 = (int32_t *)(v3 - 0x77247737); // 0x49418d
    *v6 = *v6 + (int32_t)a4 + (int32_t)(v5 > -1 - (char)a3);
    float80_t v7; // 0x49417b
    *(int32_t *)(v3 - 0x772d7725) = (int32_t)v7;
    int64_t result = 0; // 0x4941be
    if (v1 != __readfsqword(40)) {
        // 0x4941c0
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x4941c5
    return result;
}

// Address range: 0x4941d0 - 0x494231
int64_t function_4941d0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4941d9
    int64_t v2 = a1; // bp-24, 0x4941ee
    function_494306(a1 + 4, &v2);
    int32_t v3 = g10; // 0x49420c
    int64_t result = (int64_t)(v3 != 0) | (int64_t)(v3 & -256); // 0x494225
    if (v1 != __readfsqword(40)) {
        // 0x494227
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x49422c
    return result;
}

// Address range: 0x494231 - 0x494251
int64_t function_494231(void) {
    // 0x494231
    return function_493760(*(int64_t *)*(int64_t *)__tls_get_addr(&g8));
}

// Address range: 0x4be57b - 0x4bec2d
int64_t function_4be57b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint32_t a7) {
    // 0x4be57b
    int64_t v1; // 0x4be57b
    uint64_t v2 = v1;
    int64_t v3 = a4 + a3 & 0xffffffff; // 0x4be57b
    int64_t v4 = a5 - a3; // 0x4be581
    uint32_t v5 = (int32_t)v1; // 0x4be58e
    int64_t * v6 = (int64_t *)(v3 + 8); // 0x4be591
    uint64_t v7 = *v6; // 0x4be591
    uint32_t v8 = (int32_t)a4; // 0x4be59c
    uint32_t v9 = (int32_t)a5; // 0x4be59c
    uint32_t v10 = (int32_t)a3; // 0x4be5a9
    uint32_t v11 = (int32_t)v1; // 0x4be5b3
    char v12 = (char)((int64_t)(v10 > v9) + (int64_t)(v8 > v9) + (int64_t)(v5 > (int32_t)v1) + v1 + (int64_t)((int32_t)v1 > (int32_t)v1)) - (char)(v11 > (int32_t)v4); // 0x4be5c4
    *(int64_t *)v3 = 0x100000000 * (v4 - v1) | a1;
    int64_t v13; // 0x4be57b
    char v14; // 0x4be57b
    if (v12 < 0) {
        // 0x4bec18
        v13 = v7 + (int64_t)v12 & 0xffffffff;
        v14 = (int32_t)v7 < -(int32_t)v12;
    } else {
        uint32_t v15 = (int32_t)v7; // 0x4be5d4
        uint32_t v16 = v15 + (int32_t)v12; // 0x4be5d4
        v13 = v16;
        v14 = v16 < v15;
    }
    uint64_t v17 = *(int64_t *)(v3 + 56); // 0x4be5db
    int64_t v18 = v17 + v13; // 0x4be5df
    uint32_t v19 = (int32_t)v17; // 0x4be5e2
    uint32_t v20 = (int32_t)(v18 + a4); // 0x4be5ec
    uint32_t v21 = v20 - a7; // 0x4be5ef
    uint32_t v22 = (int32_t)a2; // 0x4be61d
    uint64_t v23 = v7 / 0x100000000; // 0x4be62e
    char v24 = v14 + (char)(v19 > (int32_t)v18) + (char)(v8 > v20) + (char)(v20 < a7) + (char)(v21 < v22); // 0x4be632
    int64_t v25; // 0x4be57b
    char v26; // 0x4be57b
    if (v24 < 0) {
        // 0x4bec00
        v25 = v23 + (int64_t)v24 & 0xffffffff;
        v26 = (int32_t)v23 < (int32_t)-v24;
    } else {
        uint32_t v27 = (int32_t)v23; // 0x4be63f
        uint32_t v28 = (int32_t)v24 + v27; // 0x4be63f
        v25 = v28;
        v26 = v28 < v27;
    }
    uint64_t v29 = v17 / 0x100000000; // 0x4be646
    int64_t v30 = v25 + v29; // 0x4be64c
    uint32_t v31 = (int32_t)v29; // 0x4be64f
    int64_t v32 = v30 + a3; // 0x4be654
    int64_t v33 = v32 + v1; // 0x4be658
    uint32_t v34 = (int32_t)(v33 + a2); // 0x4be661
    uint32_t v35 = v34 - v19; // 0x4be664
    uint32_t v36 = v35 - v5; // 0x4be66c
    int64_t * v37 = (int64_t *)(v3 + 16); // 0x4be6c0
    uint64_t v38 = *v37; // 0x4be6c0
    char v39 = v26 + (char)(v31 > (int32_t)v30) + (char)(v10 > (int32_t)v32) + (char)(v11 > (int32_t)v33) + (char)(v22 > v34) + (char)(v34 < v19) + (char)(v35 < v5) + (char)(v36 < v8); // 0x4be6c4
    *v6 = 0x100000000 * (int64_t)(v36 - v8) | (int64_t)(v21 - v22);
    int64_t v40; // 0x4be57b
    char v41; // 0x4be57b
    if (v39 < 0) {
        // 0x4bebe0
        v40 = v38 + (int64_t)v39 & 0xffffffff;
        v41 = (int32_t)v38 < -(int32_t)v39;
    } else {
        uint32_t v42 = (int32_t)v38; // 0x4be6dd
        uint32_t v43 = (int32_t)v39 + v42; // 0x4be6dd
        v40 = v43;
        v41 = v43 < v42;
    }
    uint64_t v44 = *(int64_t *)(v3 + 64); // 0x4be6e5
    int64_t v45 = v40 + a2; // 0x4be6e9
    int64_t v46 = v45 + a2; // 0x4be6f0
    uint32_t v47 = (int32_t)v44; // 0x4be6f7
    uint32_t v48 = (int32_t)(v44 + v46); // 0x4be704
    uint32_t v49 = v48 + a7; // 0x4be704
    uint32_t v50 = v49 + v10; // 0x4be707
    uint32_t v51 = v50 + v11; // 0x4be70c
    uint32_t v52 = v51 + v5; // 0x4be710
    uint32_t v53 = v52 - v31; // 0x4be716
    uint32_t v54 = v53 - v8; // 0x4be726
    uint64_t v55 = v38 / 0x100000000; // 0x4be7a6
    char v56 = v41 + (char)(v22 > (int32_t)v45) + (char)(v22 > (int32_t)v46) + (char)(v47 > v48) + (char)(v49 < a7) + (char)(v50 < v10) + (char)(v51 < v11) + (char)(v52 < v5) + (char)(v52 < v31) + (char)(v53 < v8) + (char)(v54 < v8); // 0x4be7aa
    char v57; // 0x4be57b
    int64_t v58; // 0x4be57b
    if (v56 < 0) {
        // 0x4bebc0
        v58 = v55 + (int64_t)v56 & 0xffffffff;
        v57 = (int32_t)v55 < -(int32_t)v56;
    } else {
        uint32_t v59 = (int32_t)v56; // 0x4be7b6
        uint32_t v60 = v59 + (int32_t)v55; // 0x4be7b6
        v58 = v60;
        v57 = v60 < v59;
    }
    uint32_t v61 = (int32_t)v58; // 0x4be7c9
    uint32_t v62 = v61 + v5; // 0x4be7c9
    uint32_t v63 = v62 + v5; // 0x4be7d3
    uint32_t v64 = (int32_t)(v44 / 0x100000000); // 0x4be7dd
    uint32_t v65 = v63 + v64; // 0x4be7dd
    uint32_t v66 = v65 + v19; // 0x4be7e6
    uint32_t v67 = v66 + a7; // 0x4be7f1
    uint32_t v68 = v67 + v22; // 0x4be7fc
    uint32_t v69 = v68 + v8; // 0x4be805
    int64_t * v70 = (int64_t *)(v3 + 24); // 0x4be812
    uint64_t v71 = *v70; // 0x4be812
    char v72 = v57 + (char)(v62 < v61) + (char)(v63 < v62) + (char)(v65 < v63) + (char)(v66 < v65) + (char)(v67 < v66) + (char)(v68 < v67) + (char)(v69 < v68) + (char)(v69 < v47); // 0x4be825
    *v37 = 0x100000000 * (int64_t)(v69 - v47) | (int64_t)(v54 - v8);
    int32_t v73; // 0x4be57b
    char v74; // 0x4be57b
    if (v72 < 0) {
        int32_t v75 = v72; // 0x4bebac
        uint32_t v76 = (int32_t)v71; // 0x4bebae
        v73 = v75 + v76;
        v74 = v76 < -v75;
    } else {
        uint32_t v77 = (int32_t)v71; // 0x4be839
        int32_t v78 = (int32_t)v72 + v77; // 0x4be839
        v73 = v78;
        v74 = v78 < v77;
    }
    uint32_t v79 = v73 + v8; // 0x4be840
    uint64_t v80 = *(int64_t *)(v3 + 72); // 0x4be843
    uint32_t v81 = v79 + v8; // 0x4be858
    uint32_t v82 = (int32_t)v80; // 0x4be865
    uint32_t v83 = v81 + v82; // 0x4be865
    uint32_t v84 = v83 + v31; // 0x4be86f
    uint32_t v85 = v84 + v19; // 0x4be87b
    uint32_t v86 = v85 + v5; // 0x4be887
    uint64_t v87 = v71 / 0x100000000; // 0x4be8a4
    char v88 = v74 + (char)(v79 < v73) + (char)(v81 < v79) + (char)(v83 < v81) + (char)(v84 < v83) + (char)(v85 < v84) + (char)(v86 < v85) + (char)(v86 < v64); // 0x4be8a8
    int64_t v89; // 0x4be57b
    char v90; // 0x4be57b
    if (v88 < 0) {
        // 0x4beb90
        v89 = v87 + (int64_t)v88 & 0xffffffff;
        v90 = (int32_t)v87 < -(int32_t)v88;
    } else {
        uint32_t v91 = (int32_t)v87; // 0x4be8b5
        uint32_t v92 = (int32_t)v88 + v91; // 0x4be8b5
        v89 = v92;
        v90 = v92 < v91;
    }
    uint32_t v93 = (int32_t)v89; // 0x4be8c3
    uint32_t v94 = (int32_t)(v80 / 0x100000000); // 0x4be8c3
    uint32_t v95 = v93 + v94; // 0x4be8c3
    uint32_t v96 = v95 + v47; // 0x4be8cd
    uint32_t v97 = v96 + v31; // 0x4be8d9
    uint32_t v98 = v97 + v8; // 0x4be8e5
    char v99 = v90 + (char)(v95 < v93) + (char)(v96 < v95) + (char)(v97 < v96) + (char)(v98 < v97) + (char)(v98 < v82); // 0x4be900
    *v70 = 0x100000000 * (int64_t)(v98 - v82) | (int64_t)(v86 - v64);
    int64_t * v100 = (int64_t *)(v3 + 32); // 0x4be907
    uint64_t v101 = *v100; // 0x4be907
    int64_t v102; // 0x4be57b
    char v103; // 0x4be57b
    if (v99 < 0) {
        // 0x4beb78
        v102 = v101 + (int64_t)v99 & 0xffffffff;
        v103 = (int32_t)v101 < -(int32_t)v99;
    } else {
        uint32_t v104 = (int32_t)v101; // 0x4be918
        uint32_t v105 = (int32_t)v99 + v104; // 0x4be918
        v102 = v105;
        v103 = v105 < v104;
    }
    uint32_t v106 = (int32_t)v102; // 0x4be91f
    uint32_t v107 = v106 + v11; // 0x4be91f
    uint32_t v108 = v107 + v64; // 0x4be933
    uint32_t v109 = v108 + v47; // 0x4be93d
    uint64_t v110 = v101 / 0x100000000; // 0x4be95c
    char v111 = v103 + (char)(v107 < v106) + (char)(v108 < v107) + (char)(v109 < v108) + (char)(v109 < v94); // 0x4be960
    int64_t v112; // 0x4be57b
    char v113; // 0x4be57b
    if (v111 < 0) {
        // 0x4beb60
        v112 = v110 + (int64_t)v111 & 0xffffffff;
        v113 = (int32_t)v110 < (int32_t)-v111;
    } else {
        uint32_t v114 = (int32_t)v110; // 0x4be96d
        uint32_t v115 = (int32_t)v111 + v114; // 0x4be96d
        v112 = v115;
        v113 = v115 < v114;
    }
    uint32_t v116 = (int32_t)v112; // 0x4be974
    uint32_t v117 = v116 + v22; // 0x4be974
    uint32_t v118 = v117 + v82; // 0x4be981
    uint32_t v119 = v118 + v64; // 0x4be98b
    int64_t * v120 = (int64_t *)(v3 + 40); // 0x4be9a6
    uint64_t v121 = *v120; // 0x4be9a6
    char v122 = v113 + (char)(v117 < v116) + (char)(v118 < v117) + (char)(v119 < v64) + (char)(v119 < v11); // 0x4be9aa
    *v100 = 0x100000000 * (int64_t)(v119 - v11) | (int64_t)(v109 - v94);
    int64_t v123; // 0x4be57b
    char v124; // 0x4be57b
    if (v122 < 0) {
        // 0x4beb48
        v123 = v121 + (int64_t)v122 & 0xffffffff;
        v124 = (int32_t)v121 < (int32_t)-v122;
    } else {
        uint32_t v125 = (int32_t)v121; // 0x4be9be
        uint32_t v126 = (int32_t)v122 + v125; // 0x4be9be
        v123 = v126;
        v124 = v126 < v125;
    }
    uint32_t v127 = (int32_t)v123; // 0x4be9c5
    uint32_t v128 = v127 + v5; // 0x4be9c5
    uint32_t v129 = v128 + v94; // 0x4be9cf
    uint32_t v130 = v129 + v82; // 0x4be9d9
    uint64_t v131 = v121 / 0x100000000; // 0x4be9fd
    char v132 = v124 + (char)(v128 < v127) + (char)(v129 < v128) + (char)(v130 < v82) + (char)(v130 < v22); // 0x4bea01
    int64_t v133; // 0x4be57b
    char v134; // 0x4be57b
    if (v132 < 0) {
        // 0x4beb30
        v133 = v131 + (int64_t)v132 & 0xffffffff;
        v134 = (int32_t)v131 < (int32_t)-v132;
    } else {
        uint32_t v135 = (int32_t)v131; // 0x4bea0e
        uint32_t v136 = (int32_t)v132 + v135; // 0x4bea0e
        v133 = v136;
        v134 = v136 < v135;
    }
    uint32_t v137 = (int32_t)v133 + v8; // 0x4bea15
    uint32_t v138 = v137 + v11; // 0x4bea24
    uint32_t v139 = v138 + v94; // 0x4bea2d
    char v140 = v134 + (char)(v137 < v8) + (char)(v138 < v137) + (char)(v139 < v94) + (char)(v139 < v5); // 0x4bea4d
    *v120 = 0x100000000 * (int64_t)(v139 - v5) | (int64_t)(v130 - v22);
    int64_t v141 = v140;
    int64_t v142 = v2 < 0xffffffff00000001 ? v2 : v2 + 0xffffffff; // 0x4bea65
    *(int64_t *)(v3 + 48) = (v140 >= 0 ? v141 : 0) | v142;
    int64_t * v143 = (int64_t *)(a6 + 8); // 0x4bea78
    int64_t v144 = 2 * *v143; // 0x4bea80
    int64_t v145 = v144; // 0x4bea86
    if (v144 > 13) {
        uint64_t v146 = 13;
        int64_t v147 = 8 * v146 / 2 + v3;
        int64_t v148; // 0x4bea97
        int64_t v149; // 0x4beaa3
        while (v146 % 2 != 0) {
            // 0x4bea93
            v148 = v146 + 1;
            *(int64_t *)v147 = (int64_t)*(int32_t *)v147;
            v149 = 2 * *v143;
            v145 = v149;
            if (v148 >= v149) {
                // break (via goto) -> 0x4beaab
                goto lab_0x4beaab;
            }
            v146 = v148;
            v147 = 8 * v146 / 2 + v3;
        }
        int64_t * v150 = (int64_t *)v147; // 0x4bead0
        uint64_t v151 = *v150; // 0x4bead0
        *v150 = v151 < 0xffffffff00000001 ? v151 : v151 + 0xffffffff;
        int64_t v152 = v146 + 1; // 0x4bea7c
        int64_t v153 = 2 * *v143; // 0x4bea80
        v145 = v153;
        while (v152 < v153) {
            // 0x4bea88
            v146 = v152;
            v147 = 8 * v146 / 2 + v3;
            while (v146 % 2 != 0) {
                // 0x4bea93
                v148 = v146 + 1;
                *(int64_t *)v147 = (int64_t)*(int32_t *)v147;
                v149 = 2 * *v143;
                v145 = v149;
                if (v148 >= v149) {
                    // break (via goto) -> 0x4beaab
                    goto lab_0x4beaab;
                }
                v146 = v148;
                v147 = 8 * v146 / 2 + v3;
            }
            // 0x4bead0
            v150 = (int64_t *)v147;
            v151 = *v150;
            *v150 = v151 < 0xffffffff00000001 ? v151 : v151 + 0xffffffff;
            v152 = v146 + 1;
            v153 = 2 * *v143;
            v145 = v153;
        }
    }
  lab_0x4beaab:;
    int32_t result; // 0x4be57b
    if (v140 >= 0) {
        // 0x4beab5
        return result;
    }
    // 0x4beaf8
    *(int64_t *)(v1 - 8 + 8 * v1) = -v141;
    int64_t v154; // bp+96, 0x4be57b
    if ((int32_t)function_4b1820(a6, &v154, a6, v145) != 0) {
        // 0x4beab5
        return result;
    }
    // 0x4beb24
    *(int32_t *)a6 = -1;
    // 0x4beab5
    return result;
}

// Address range: 0x4bec30 - 0x4bee86
int64_t function_4bec30(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4bec55
    uint64_t v2 = *v1; // 0x4bec55
    if (v2 < 3) {
        // 0x4bed2b
        return 0;
    }
    uint64_t v3 = v2 - 3; // 0x4bec63
    int32_t v4 = 1; // bp-120, 0x4bec74
    int64_t v5 = 1; // bp-152, 0x4bec8e
    int64_t * v6 = (int64_t *)(a1 + 16);
    int64_t v7 = *v6;
    int64_t v8 = 0;
    int64_t * v9 = (int64_t *)(v7 + 24);
    if (v3 < 4) {
        // 0x4beca0
        memcpy(&v8, v9, 8 * (int32_t)v3);
        if (v2 == 3) {
            goto lab_0x4bed13;
        } else {
            goto lab_0x4becf9;
        }
    } else {
        // 0x4bed58
        memcpy(&v8, v9, 24);
        goto lab_0x4becf9;
    }
  lab_0x4bed13:;
    int64_t result = function_4b1ac0(&v5, &v5, &v4); // 0x4bed1e
    if ((int32_t)result != 0) {
        // 0x4bed2b
        return result;
    }
    int64_t result2 = function_4b16c0(a1, a1, &v5); // 0x4bedc1
    if ((int32_t)result2 != 0) {
        // 0x4bed2b
        return result2;
    }
    uint64_t v10 = *v1; // 0x4bedce
    int64_t v11 = *v6; // 0x4bedd2
    v8 = 0;
    uint64_t v12 = v10 - 3; // 0x4bee03
    int64_t v13 = v12 < 3 ? v12 : 3; // 0x4bee18
    memcpy(&v8, (int64_t *)(v11 + 24), 8 * (int32_t)v13);
    int64_t v14 = 3; // 0x4bee41
    if (v10 >= 4) {
        *(int64_t *)(8 * v14 + v11) = 0;
        int64_t v15 = v14 + 1; // 0x4bee51
        v14 = v15;
        while (v15 < *v1) {
            // 0x4bee48
            *(int64_t *)(8 * v14 + v11) = 0;
            v15 = v14 + 1;
            v14 = v15;
        }
    }
    int64_t v16 = function_4b1ac0(&v5, &v5, &v4); // 0x4bee66
    int64_t result3 = v16; // 0x4bee6d
    if ((int32_t)v16 == 0) {
        // 0x4bee73
        result3 = function_4b16c0(a1, a1, &v5);
    }
    // 0x4bed2b
    return result3;
  lab_0x4becf9:;
    int64_t v17 = 3; // 0x4becfe
    *(int64_t *)(8 * v17 + v7) = 0;
    int64_t v18 = v17 + 1; // 0x4bed09
    v17 = v18;
    while (v18 < *v1) {
        // 0x4bed00
        *(int64_t *)(8 * v17 + v7) = 0;
        v18 = v17 + 1;
        v17 = v18;
    }
    goto lab_0x4bed13;
}

// Address range: 0x4bee90 - 0x4bf0e6
int64_t function_4bee90(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4beeb5
    uint64_t v2 = *v1; // 0x4beeb5
    if (v2 < 4) {
        // 0x4bef8b
        return 0;
    }
    uint64_t v3 = v2 - 4; // 0x4beec3
    int32_t v4 = 1; // bp-120, 0x4beed4
    int64_t v5 = 1; // bp-152, 0x4beeee
    int64_t * v6 = (int64_t *)(a1 + 16);
    int64_t v7 = *v6;
    int64_t v8 = 0;
    int64_t * v9 = (int64_t *)(v7 + 32);
    if (v3 < 5) {
        // 0x4bef00
        memcpy(&v8, v9, 8 * (int32_t)v3);
        if (v2 == 4) {
            goto lab_0x4bef73;
        } else {
            goto lab_0x4bef59;
        }
    } else {
        // 0x4befb8
        memcpy(&v8, v9, 32);
        goto lab_0x4bef59;
    }
  lab_0x4bef73:;
    int64_t result = function_4b1ac0(&v5, &v5, &v4); // 0x4bef7e
    if ((int32_t)result != 0) {
        // 0x4bef8b
        return result;
    }
    int64_t result2 = function_4b16c0(a1, a1, &v5); // 0x4bf021
    if ((int32_t)result2 != 0) {
        // 0x4bef8b
        return result2;
    }
    uint64_t v10 = *v1; // 0x4bf02e
    int64_t v11 = *v6; // 0x4bf032
    v8 = 0;
    uint64_t v12 = v10 - 4; // 0x4bf063
    int64_t v13 = v12 < 4 ? v12 : 4; // 0x4bf078
    memcpy(&v8, (int64_t *)(v11 + 32), 8 * (int32_t)v13);
    int64_t v14 = 4; // 0x4bf0a1
    if (v10 >= 5) {
        *(int64_t *)(8 * v14 + v11) = 0;
        int64_t v15 = v14 + 1; // 0x4bf0b1
        v14 = v15;
        while (v15 < *v1) {
            // 0x4bf0a8
            *(int64_t *)(8 * v14 + v11) = 0;
            v15 = v14 + 1;
            v14 = v15;
        }
    }
    int64_t v16 = function_4b1ac0(&v5, &v5, &v4); // 0x4bf0c6
    int64_t result3 = v16; // 0x4bf0cd
    if ((int32_t)v16 == 0) {
        // 0x4bf0d3
        result3 = function_4b16c0(a1, a1, &v5);
    }
    // 0x4bef8b
    return result3;
  lab_0x4bef59:;
    int64_t v17 = 4; // 0x4bef5e
    *(int64_t *)(8 * v17 + v7) = 0;
    int64_t v18 = v17 + 1; // 0x4bef69
    v17 = v18;
    while (v18 < *v1) {
        // 0x4bef60
        *(int64_t *)(8 * v17 + v7) = 0;
        v18 = v17 + 1;
        v17 = v18;
    }
    goto lab_0x4bef73;
}
