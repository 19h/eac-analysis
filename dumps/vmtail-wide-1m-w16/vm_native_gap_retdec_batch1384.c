/*
 * Targeted RetDec C for native executable gap queue batch 1384.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x48723e-0x48743e rank=- name=- kind=- bytes=- uncovered=-
 *   0x48743e-0x48763e rank=- name=- kind=- bytes=- uncovered=-
 *   0x48763e-0x48783e rank=- name=- kind=- bytes=- uncovered=-
 *   0x48783e-0x487a3e rank=- name=- kind=- bytes=- uncovered=-
 *   0x487a3e-0x487c3e rank=- name=- kind=- bytes=- uncovered=-
 *   0x487c3e-0x487e3e rank=- name=- kind=- bytes=- uncovered=-
 *   0x487e3e-0x48803e rank=- name=- kind=- bytes=- uncovered=-
 *   0x48803e-0x48823e rank=- name=- kind=- bytes=- uncovered=-
 *   0x505da6-0x505fa6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x505fa6-0x5061a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5061a6-0x5063a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5063a6-0x5065a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5065a6-0x5067a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5067a6-0x5069a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5069a6-0x506ba6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x506ba6-0x506da6 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g26;
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

int64_t function_3b4e9c3a();
int64_t function_46814a12();
int64_t function_48723e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48727a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4873f9(void);
int64_t function_487451(int64_t a1);
int64_t function_48746f(void);
int64_t function_4874a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4874c5(void);
int64_t function_4874c7(void);
int64_t function_4874e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_487526(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4875ad(void);
int64_t function_4875b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4875dc(int64_t a1);
int64_t function_4875f5(void);
int64_t function_487621(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48762f(int64_t a1);
int64_t function_487662(int64_t a1);
int64_t function_487669(int64_t a1, int64_t a2, int64_t a3);
int64_t function_487686(void);
int64_t function_4876b1(int64_t a1);
int64_t function_4876d5(void);
int64_t function_487700(void);
int64_t function_487731(void);
int64_t function_48773c(void);
int64_t function_48777c(int64_t a1, int64_t a2);
int64_t function_48778e(void);
int64_t function_4877a6(void);
int64_t function_4877b3(void);
int64_t function_4877be(int64_t a1);
int64_t function_4877d0(void);
int64_t function_4877e9(int64_t a1);
int64_t function_487825(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48782a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48786e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_487959(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4879ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4879cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4879e2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_487a21(int64_t a1);
int64_t function_487a3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_487a79(int64_t a1, int64_t a2, int64_t a3);
int64_t function_487ae8(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_487af6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_487b52(void);
int64_t function_487b85(void);
int64_t function_487bd5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_487e30(int64_t a1);
int64_t function_487e33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_487e94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_487eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_487ecb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_487f37(void);
int64_t function_487f3c(void);
int64_t function_487f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_487fa0(int64_t a1);
int64_t function_487fcd(void);
int64_t function_487ff7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_488068(int64_t a1);
int64_t function_488082(void);
int64_t function_4880a8(void);
int64_t function_4880ce(void);
int64_t function_48810a(void);
int64_t function_488175(void);
int64_t function_488183(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4881a4(int64_t a1);
int64_t function_4881f6(int64_t a1);
int64_t function_48820a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fca70();
int64_t function_4fd0d0();
int64_t function_5009e0();
int64_t function_505260();
int64_t function_505ca0();
int64_t function_505da6(int64_t a1, int64_t a2);
int64_t function_505dc0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_505e10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_505e60(int64_t a1, int64_t a2);
int64_t function_505eb0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_505f00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_505f50(int64_t a1, int64_t a2);
int64_t function_505f90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5060d2(void);
int64_t function_506116(void);
int64_t function_506118(void);
int64_t function_506120(int64_t a1, int64_t a2, int64_t a3);
int64_t function_506262(void);
int64_t function_5062a6(void);
int64_t function_5062a8(void);
int64_t function_5062b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5063a4(void);
int64_t function_506407(void);
int64_t function_506410(int64_t a1, int64_t a2, int64_t a3);
int64_t function_506522(void);
int64_t function_50655a(void);
int64_t function_506560(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50660c(void);
int64_t function_506640(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50675a(void);
int64_t function_50679a(void);
int64_t function_5067a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_506894(void);
int64_t function_5068f7(void);
int64_t function_506900(int64_t a1, int64_t a2, int64_t a3);
int64_t function_506a12(void);
int64_t function_506a4a(void);
int64_t function_506a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_506b04(void);
int64_t function_506b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_506bec(void);
int64_t function_506c20(int64_t a1, int64_t a2, int64_t a3);
int64_t function_506d3a(void);
int64_t function_506d7a(void);
int64_t function_54cb80();
int64_t function_54cf10();
int64_t function_5935db5e();
int64_t function_65981e32();
int64_t function_7c9a3b18();
int64_t function_ffffffff994c68ad();
int64_t function_ffffffffd5927a15();
int64_t function_fffffffff517ad10();

// Address range: 0x48723e - 0x487253
int64_t function_48723e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48723e
    bool v1; // 0x48723e
    int32_t * v2 = (int32_t *)(a2 + 0x4245bfd6 + (v1 ? -4 : 4)); // 0x48723f
    int64_t v3; // 0x48723e
    *v2 = *v2 + (int32_t)v3;
    char * v4 = (char *)(a4 - 59); // 0x48724f
    *v4 = *v4 + (char)v3;
    return v3 & 0xffffffff;
}

// Address range: 0x48727a - 0x48728b
int64_t function_48727a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x48727a
    int64_t v1; // 0x48727a
    int64_t v2 = (0x100000000 * a3 | (int64_t)(int32_t)&g24 | v1 & 0xffff00ff) / (v1 & 0xffffffff); // 0x48727d
    __asm_int(-38);
    return (v2 + 15) % 256 | v2 & 0xffffff00;
}

// Address range: 0x4873f9 - 0x4873fa
int64_t function_4873f9(void) {
    // 0x4873f9
    int64_t result; // 0x4873f9
    return result;
}

// Address range: 0x487451 - 0x48745b
int64_t function_487451(int64_t a1) {
    // 0x487451
    int64_t result; // 0x487451
    *(int32_t *)0x1bf44751d72223d2 = (int32_t)result;
    return result;
}

// Address range: 0x48746f - 0x487473
int64_t function_48746f(void) {
    // 0x48746f
    bool v1; // 0x48746f
    if (!v1) {
        function_4873f9();
    }
    // 0x487471
    int64_t v2; // 0x48746f
    return function_4874e6(v2, v2, v2, v2);
}

// Address range: 0x4874a6 - 0x4874bc
int64_t function_4874a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x4874a6
    bool v2; // 0x4874a6
    if (v1 != 0 == v2) {
        function_487526(a1, a2, a3, v1, (int64_t)&g26);
    }
    // 0x4874a8
    int64_t v3; // 0x4874a6
    int32_t * v4 = (int32_t *)(v3 + 0x53bf0813 + v3); // 0x4874b1
    *v4 = *v4 - (int32_t)v3;
    return function_4874c7();
}

// Address range: 0x4874c5 - 0x4874c7
int64_t function_4874c5(void) {
    // 0x4874c5
    int64_t result; // 0x4874c5
    return result;
}

// Address range: 0x4874c7 - 0x4874c8
int64_t function_4874c7(void) {
    // 0x4874c7
    int64_t result; // 0x4874c7
    return result;
}

// Address range: 0x4874e6 - 0x48751e
int64_t function_4874e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4874e6
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x4874e6
    int64_t result = (int64_t)(*(int32_t *)(v1 + 114) ^ ((int32_t)v1 | 129)); // 0x4874ea
    int32_t * v2 = (int32_t *)(2 * a2 + 0x41dbab08 + a4); // 0x4874ed
    *v2 = *v2 + (int32_t)a2;
    int64_t v3; // 0x4874e6
    int64_t v4 = (int64_t)*(int32_t *)&v3; // 0x4874f4
    uint64_t v5 = -62 * v4; // 0x4874f4
    v3 = v5 & 0xfffffffe;
    if (v5 == -0x3e00000000 * v4 >> 32) {
        // 0x487519
        __asm_int(24);
        return result & 0xffffffd9;
    }
    // 0x4874f9
    *(char *)(a2 + 0xe7cb940 + 2 * a4) = (char)(v5 / 256);
    return result;
}

// Address range: 0x487526 - 0x487593
int64_t function_487526(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x487536
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v1 = (int32_t)a4 % 32; // 0x487536
    if (v1 != 0) {
        *(int32_t *)0x2161175b = *(int32_t *)0x2161175b >> v1;
    }
    return 0x16e0d02;
}

// Address range: 0x4875ad - 0x4875b2
int64_t function_4875ad(void) {
    // 0x4875ad
    return function_ffffffffd5927a15();
}

// Address range: 0x4875b4 - 0x4875bf
int64_t function_4875b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4875b4
    return function_48762f((int64_t)&g26);
}

// Address range: 0x4875dc - 0x4875df
int64_t function_4875dc(int64_t a1) {
    // 0x4875dc
    int64_t result; // 0x4875dc
    return result;
}

// Address range: 0x4875f5 - 0x487601
int64_t function_4875f5(void) {
    // 0x4875f5
    return function_7c9a3b18();
}

// Address range: 0x487621 - 0x48762d
int64_t function_487621(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x487621
    __asm_int(52);
    return function_3b4e9c3a();
}

// Address range: 0x48762f - 0x487637
int64_t function_48762f(int64_t a1) {
    // 0x48762f
    int64_t v1; // 0x48762f
    int64_t v2 = v1;
    return (v2 + 86) % 256 | v2 & -256;
}

// Address range: 0x487662 - 0x487668
int64_t function_487662(int64_t a1) {
    // 0x487662
    int64_t result; // 0x487662
    return result;
}

// Address range: 0x487669 - 0x48766b
int64_t function_487669(int64_t a1, int64_t a2, int64_t a3) {
    // 0x487669
    __asm_in((int16_t)a3);
    return a3 & 0xffffffff;
}

// Address range: 0x487686 - 0x487687
int64_t function_487686(void) {
    // 0x487686
    int64_t result; // 0x487686
    return result;
}

// Address range: 0x4876b1 - 0x4876b4
int64_t function_4876b1(int64_t a1) {
    // 0x4876b1
    int64_t result; // 0x4876b1
    return result;
}

// Address range: 0x4876d5 - 0x4876dd
int64_t function_4876d5(void) {
    // 0x4876d5
    return function_ffffffff994c68ad();
}

// Address range: 0x487700 - 0x487702
int64_t function_487700(void) {
    // 0x487700
    return function_487686();
}

// Address range: 0x487731 - 0x487739
int64_t function_487731(void) {
    // 0x487731
    return function_46814a12();
}

// Address range: 0x48773c - 0x487744
int64_t function_48773c(void) {
    // 0x48773c
    int64_t result; // 0x48773c
    return result;
}

// Address range: 0x48777c - 0x48778b
int64_t function_48777c(int64_t a1, int64_t a2) {
    // 0x48777c
    int64_t v1; // 0x48777c
    *(int32_t *)0x353b1edc74765a = (int32_t)v1;
    return function_4877be((int64_t)&g26);
}

// Address range: 0x48778e - 0x48778f
int64_t function_48778e(void) {
    // 0x48778e
    int64_t result; // 0x48778e
    return result;
}

// Address range: 0x4877a6 - 0x4877ab
int64_t function_4877a6(void) {
    // 0x4877a6
    return function_fffffffff517ad10();
}

// Address range: 0x4877b3 - 0x4877b9
int64_t function_4877b3(void) {
    // 0x4877b3
    return function_65981e32();
}

// Address range: 0x4877be - 0x4877bf
int64_t function_4877be(int64_t a1) {
    // 0x4877be
    int64_t result; // 0x4877be
    return result;
}

// Address range: 0x4877d0 - 0x4877d8
int64_t function_4877d0(void) {
    // 0x4877d0
    int64_t v1; // 0x4877d0
    return (103 * v1 ^ v1) & 0xffffffff;
}

// Address range: 0x4877e9 - 0x4877ea
int64_t function_4877e9(int64_t a1) {
    // 0x4877e9
    int64_t result; // 0x4877e9
    return result;
}

// Address range: 0x487825 - 0x487829
int64_t function_487825(int64_t a1, int64_t a2, int64_t a3) {
    // 0x487825
    int64_t result; // 0x487825
    *(char *)a2 = (char)result ^ 58;
    return result;
}

// Address range: 0x48782a - 0x48784a
int64_t function_48782a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)(a3 + 0x37261a3a); // 0x487830
    int64_t result = __asm_int3(); // 0x487836
    int32_t v2 = *(int32_t *)-0x846f45e; // 0x487837
    int64_t v3; // 0x48782a
    *(int32_t *)-0x846f45e = v2 - (int32_t)v3 + (int32_t)(((char)v3 ^ -42) < v1);
    *(char *)-0x59b194aa9e18ae30 = (char)result;
    return result;
}

// Address range: 0x48786e - 0x48787b
int64_t function_48786e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48786e
    int64_t result; // 0x48786e
    int32_t v1 = result; // 0x48786e
    __asm_out_133(8, v1);
    int32_t * v2 = (int32_t *)(a4 + 87); // 0x487875
    *v2 = *v2 - v1;
    return result;
}

// Address range: 0x487959 - 0x48796f
int64_t function_487959(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x487959
    int64_t v1; // 0x487959
    return (int64_t)((int32_t)v1 - *(int32_t *)(a1 - 0x4a6127b5));
}

// Address range: 0x4879ac - 0x4879b1
int64_t function_4879ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4879ac
    int64_t result; // 0x4879ac
    return result;
}

// Address range: 0x4879cf - 0x4879d9
int64_t function_4879cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4879cf
    int64_t v1; // 0x4879cf
    int64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return v2 & -0x10000 | (int64_t)&g1 | (v2 + 204) % 256;
}

// Address range: 0x4879e2 - 0x4879fb
int64_t function_4879e2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x4879e2
    *(char *)0x582d1ede = *(char *)0x582d1ede ^ (char)(a3 / 256);
    int64_t result; // 0x4879e2
    *(char *)0x60c3e757 = (char)result;
    return result;
}

// Address range: 0x487a21 - 0x487a25
int64_t function_487a21(int64_t a1) {
    // 0x487a21
    int64_t result; // 0x487a21
    return result;
}

// Address range: 0x487a3c - 0x487a68
int64_t function_487a3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3 & -0xff01 | (int64_t)&g25; // 0x487a3c
    int32_t * v2 = (int32_t *)(4 * v1 + a2); // 0x487a3e
    *v2 = (int32_t)v1;
    int64_t v3; // 0x487a3c
    int32_t * v4 = (int32_t *)(2 * v3 + a4); // 0x487a48
    bool v5; // 0x487a3c
    *v4 = (int32_t)v5 + (int32_t)v3 + *v4;
    int16_t v6 = v3; // 0x487a4e
    int16_t v7 = (int16_t)*(char *)(v3 - 13); // 0x487a4e
    int16_t v8 = v6 / v7; // 0x487a4e
    float80_t v9; // 0x487a3c
    *(int16_t *)(8 * a5 + a6) = (int16_t)v9;
    char v10 = *(char *)((uint64_t)v3 % 256 | a2 & -256); // 0x487a59
    __asm_outsb((int16_t)*v2, v10);
    return (v3 & 0xffff0000 | (int64_t)(256 * (v6 % v7)) | ((int64_t)v8 + 23 + (int64_t)((char)v8 < 108)) % 256) + 0x72953d7a & 0xffffffff;
}

// Address range: 0x487a79 - 0x487a90
int64_t function_487a79(int64_t a1, int64_t a2, int64_t a3) {
    // 0x487a79
    __asm_in((int16_t)a3);
    uint64_t v1 = __asm_sti(); // 0x487a84
    *(int64_t *)0x3e3fe211 = 0x3e3fe219;
    *(char *)0x6b9088af = *(char *)0x6b9088af + (char)(v1 / 256);
    int64_t v2; // 0x487a79
    return function_487af6(a1, a2, a3, v2, (int64_t)&g26, (int64_t)&g26);
}

// Address range: 0x487ae8 - 0x487af6
int64_t function_487ae8(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x487ae8
    int64_t result; // 0x487ae8
    int32_t * v1 = (int32_t *)((4 * a1 + 0x3fffffffc & 0x3fffffffc) - 105 + result); // 0x487aea
    bool v2; // 0x487ae8
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    *(char *)0x2c1e82fd = *(char *)0x2c1e82fd + (char)(a3 / 256);
    return result;
}

// Address range: 0x487af6 - 0x487b27
int64_t function_487af6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x487af6
    int64_t v1; // 0x487af6
    uint64_t v2 = v1;
    char v3 = (char)v1 & 17 ^ (char)v1; // 0x487afb
    *(char *)a2 = v3;
    int64_t result; // 0x487af6
    if (v3 < 1) {
        // 0x487b20
        result = __asm_sti();
    } else {
        // 0x487b01
        *(char *)(v2 & 0xffffffff) = (char)(v2 / 256 | v2);
        *(int32_t *)-0x567ea6e76abae8d1 = (int32_t)a5;
        result = a5;
    }
    // 0x487b12
    return result;
}

// Address range: 0x487b52 - 0x487b5c
int64_t function_487b52(void) {
    // 0x487b52
    int64_t result; // 0x487b52
    return result;
}

// Address range: 0x487b85 - 0x487b86
int64_t function_487b85(void) {
    // 0x487b85
    int64_t result; // 0x487b85
    return result;
}

// Address range: 0x487bd5 - 0x487df9
int64_t function_487bd5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x487bd5
    int64_t v1; // 0x487bd5
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    int64_t v5 = a1;
    char * v6 = (char *)(a2 + 0x4d309563); // 0x487bdd
    *v6 = *v6 + (char)(v2 / 256);
    __asm_fldenv(*(int224_t *)(a4 + 0x75e27057));
    int32_t * v7 = (int32_t *)(a4 + 90); // 0x487bed
    *v7 = *v7 - 0x78e040b2;
    unsigned char v8 = *(char *)&v4; // 0x487bf6
    unsigned char v9 = *(char *)&v5; // 0x487bf6
    bool v10; // 0x487bd5
    int64_t v11 = v10 ? -1 : 1; // 0x487bf6
    int64_t v12 = v5 + v11; // 0x487bf6
    unsigned char v13 = (char)(a4 / 256); // 0x487bf7
    unsigned char v14 = (char)v3 + v13; // 0x487bf7
    bool v15 = v8 < v9 ? v14 + (char)(v8 < v9) <= v13 : v14 < v13; // 0x487bf7
    unsigned char v16 = *(char *)(v4 + v11);
    int64_t v17 = a4 & -0xff01 | (int64_t)&g4; // 0x487bfc
    unsigned char v18 = *(char *)v12; // 0x487bfe
    v5 = v12 + v11;
    int64_t v19 = v2 & -256 | (int64_t)(((char)v2 & 17 | -20) - 43 + v16 + (char)(v16 < v18) + (char)v15); // 0x487bff
    int32_t * v20 = (int32_t *)v17; // 0x487c06
    int32_t v21 = *v20 ^ (int32_t)v1; // 0x487c06
    *v20 = v21;
    int32_t v22 = v19; // 0x487c08
    __asm_out_134((int16_t)v3, v22);
    int64_t result = v19; // 0x487c09
    int64_t * v23 = (int64_t *)0x2a0b39d6; // 0x487c09
    bool v24 = v21 == 0; // 0x487c09
    if (v17 == 1) {
        // 0x487c0b
        int64_t v25; // 0x487bd5
        unsigned char v26 = *(char *)&v25; // 0x487c0b
        *(char *)v25 = v26 + 51;
        *(int32_t *)v5 = __asm_insd((int16_t)v3);
        int64_t * v27 = (int64_t *)(v1 + 0x18a32207 + 2 * v3); // 0x487c10
        int64_t v28 = *v27; // 0x487c10
        int64_t v29 = v28 + (v26 > 204 ? -109 : -110); // 0x487c10
        int64_t v30 = v29 + (int64_t)(v26 > 204); // 0x487c10
        *v27 = v29;
        if (v29 < 0 != ((v30 ^ v28) & (v30 ^ -0x8000000000000000)) < 0) {
            // 0x487c5e
            *(int32_t *)0x89d93a1e = __asm_insd((int16_t)v3);
            return (int64_t)(0x521796ec * *(int32_t *)&v3);
        }
        // 0x487c1d
        result = *(int64_t *)0x2a0b39de;
        v23 = (int64_t *)0x2a0b39e6;
        v24 = v22 == 0x70262552;
    }
    // 0x487c24
    if (v24) {
        // 0x487c26
        return result;
    }
    // 0x487c71
    *(int64_t *)0x576c5d3c5f3a0f4f = result;
    return __asm_iretd(*v23) & 0xffffffff ^ 0x2930c32d;
}

// Address range: 0x487e30 - 0x487e31
int64_t function_487e30(int64_t a1) {
    // 0x487e30
    int64_t result; // 0x487e30
    return result;
}

// Address range: 0x487e33 - 0x487e93
int64_t function_487e33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x487e33
    int64_t result; // 0x487e33
    bool v1; // 0x487e33
    if (!v1) {
        // 0x487e35
        __asm_outsb((int16_t)a3, (char)result);
        return function_5935db5e();
    }
    if ((int32_t)(result & a3) != 0) {
        // 0x487ea9
        return result;
    }
    // 0x487e8d
    __asm_rcl(*(char *)(result - 0x172ebec6));
    return result;
}

// Address range: 0x487e94 - 0x487ea9
int64_t function_487e94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x487e94
    int64_t result; // 0x487e94
    int64_t * v1 = (int64_t *)(result - 0x528fa9ba); // 0x487e9f
    *v1 = *v1 - a3;
    return result;
}

// Address range: 0x487eb0 - 0x487ebc
int64_t function_487eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x487eb0
    return function_487f37();
}

// Address range: 0x487ecb - 0x487f31
int64_t function_487ecb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x487ecb
    int64_t v3 = a3 - a4 + (int64_t)((char)v2 > 246); // 0x487ed3
    char v4 = *(char *)(a1 + 0x22514101); // 0x487ed5
    uint64_t v5 = v3 & 0xffffff00; // 0x487ed5
    __asm_sti();
    char * v6 = (char *)(v2 + 2 * v2); // 0x487eed
    unsigned char v7 = *v6; // 0x487eed
    unsigned char v8 = 71 * (char)*(int32_t *)(a4 - 30); // 0x487eed
    char v9 = v7 - v8; // 0x487eed
    *v6 = v9;
    int64_t v10 = __asm_wait(); // 0x487ef0
    if (v7 < v8) {
        int64_t v11 = __asm_int3(); // 0x487ef5
        unsigned char v12 = *(char *)0x5a1e42b; // 0x487efc
        char v13 = *(char *)&v1; // 0x487f02
        *(char *)v1 = v13 + (char)v11 + (char)(v12 < (char)(v5 / 256));
        return (v11 & 0xc9357b57) + 0x1cefc34b;
    }
    int64_t v14 = v10; // 0x487f1f
    if (((v9 ^ v7) & (v8 ^ v7)) < 0) {
        v14 = function_487f80(a1, a2, v5 | (int64_t)(v4 & (char)v3), v1);
    }
    int64_t result = v14 & 0xffffff03 ^ 0x1f49dd2d; // 0x487f23
    __asm_out(36, (char)result);
    return result;
}

// Address range: 0x487f37 - 0x487f3b
int64_t function_487f37(void) {
    // 0x487f37
    int64_t v1; // 0x487f37
    int64_t v2 = v1;
    return v2 - 256 * v1 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x487f3c - 0x487f3e
int64_t function_487f3c(void) {
    // 0x487f3c
    int64_t result; // 0x487f3c
    return result;
}

// Address range: 0x487f80 - 0x487f89
int64_t function_487f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x487f80
    int64_t v1; // 0x487f80
    return (int64_t)((int32_t)v1 - *(int32_t *)(a2 + 34 + 4 * v1));
}

// Address range: 0x487fa0 - 0x487fa3
int64_t function_487fa0(int64_t a1) {
    // 0x487fa0
    int64_t result; // 0x487fa0
    return result;
}

// Address range: 0x487fcd - 0x487fce
int64_t function_487fcd(void) {
    // 0x487fcd
    int64_t result; // 0x487fcd
    return result;
}

// Address range: 0x487ff7 - 0x488033
int64_t function_487ff7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x487ff7
    int64_t result; // 0x487ff7
    return result;
}

// Address range: 0x488068 - 0x48806b
int64_t function_488068(int64_t a1) {
    // 0x488068
    int64_t result; // 0x488068
    return result;
}

// Address range: 0x488082 - 0x488087
int64_t function_488082(void) {
    // 0x488082
    int64_t result; // 0x488082
    return result;
}

// Address range: 0x4880a8 - 0x4880ab
int64_t function_4880a8(void) {
    // 0x4880a8
    int64_t result; // 0x4880a8
    return result;
}

// Address range: 0x4880ce - 0x4880d1
int64_t function_4880ce(void) {
    // 0x4880ce
    int64_t result; // 0x4880ce
    return result;
}

// Address range: 0x48810a - 0x48810d
int64_t function_48810a(void) {
    // 0x48810a
    int64_t result; // 0x48810a
    return result;
}

// Address range: 0x488175 - 0x488176
int64_t function_488175(void) {
    // 0x488175
    int64_t result; // 0x488175
    return result;
}

// Address range: 0x488183 - 0x4881a1
int64_t function_488183(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x488183
    int64_t v1; // 0x488183
    char * v2 = (char *)(a3 - 0x7313c99f + 2 * v1); // 0x488184
    *v2 = *v2 & (char)a4;
    int32_t v3 = __asm_in_136(23); // 0x48818b
    int32_t * v4 = (int32_t *)(a1 - 26); // 0x48818e
    int32_t v5 = *v4 - (int32_t)v1; // 0x48818e
    *v4 = v5;
    int64_t v6 = v3; // 0x488197
    if (v5 >= 0) {
        v6 = function_488175();
    }
    // 0x488199
    return v6 + a3 & 0xffffffff;
}

// Address range: 0x4881a4 - 0x4881a7
int64_t function_4881a4(int64_t a1) {
    // 0x4881a4
    int64_t v1; // 0x4881a4
    return function_48820a(v1, v1, v1);
}

// Address range: 0x4881f6 - 0x4881f9
int64_t function_4881f6(int64_t a1) {
    // 0x4881f6
    int64_t result; // 0x4881f6
    return result;
}

// Address range: 0x48820a - 0x48820d
int64_t function_48820a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48820a
    int64_t result; // 0x48820a
    return result;
}

// Address range: 0x505da6 - 0x505db8
int64_t function_505da6(int64_t a1, int64_t a2) {
    // 0x505da6
    int64_t v1; // 0x505da6
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x505da6
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_505ca0(a1, a2, v1);
}

// Address range: 0x505dc0 - 0x505e03
int64_t function_505dc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xfffffff7 | 8; // 0x505dc7
    int64_t v2 = function_505ca0(a1 + 16, a2, v1); // 0x505dce
    int64_t v3 = *(int64_t *)(a1 - 8) + a1;
    if (v2 == 0) {
        // 0x505df0
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x505ddb
    return function_4fca70(v3, 0, v1);
}

// Address range: 0x505e10 - 0x505e53
int64_t function_505e10(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffef | 16; // 0x505e17
    int64_t v2 = function_505ca0(a1 + 8, a2, v1); // 0x505e1e
    int64_t v3 = *(int64_t *)(a1 - 16) + a1;
    if (v2 == 0) {
        // 0x505e40
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x505e2b
    return function_4fca70(v3, 0, v1);
}

// Address range: 0x505e60 - 0x505ea3
int64_t function_505e60(int64_t a1, int64_t a2) {
    // 0x505e60
    int64_t v1; // 0x505e60
    int64_t v2 = function_505ca0(a1 + 24, a2, v1); // 0x505e6b
    int64_t v3 = *(int64_t *)a1 + a1;
    if (v2 == 0) {
        // 0x505e90
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x505e78
    return function_4fca70(v3, 0, v1);
}

// Address range: 0x505eb0 - 0x505ef3
int64_t function_505eb0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xfffffff7 | 8; // 0x505eb1
    int64_t v2 = function_505ca0(a1 + 16, a2, v1); // 0x505ebb
    int64_t v3 = *(int64_t *)(a1 - 8) + a1;
    if (v2 == 0) {
        // 0x505ee0
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x505ec8
    return function_4fca70(v3, 0, v1);
}

// Address range: 0x505f00 - 0x505f43
int64_t function_505f00(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffef | 16; // 0x505f01
    int64_t v2 = function_505ca0(a1 + 8, a2, v1); // 0x505f0b
    int64_t v3 = *(int64_t *)(a1 - 16) + a1;
    if (v2 == 0) {
        // 0x505f30
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x505f18
    return function_4fca70(v3, 0, v1);
}

// Address range: 0x505f50 - 0x505f8b
int64_t function_505f50(int64_t a1, int64_t a2) {
    // 0x505f50
    int64_t v1; // 0x505f50
    int64_t v2 = function_505ca0(a1 + 24, a2, v1); // 0x505f58
    int64_t v3 = *(int64_t *)a1 + a1;
    if (v2 == 0) {
        // 0x505f78
        return function_4fca70(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x505f65
    return function_4fca70(v3, 0, v1);
}

// Address range: 0x505f90 - 0x5060d2
// From class:    std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_505f90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 264; // 0x505fa3
    function_54cb80(v1);
    *(int64_t *)(a1 + 480) = 0;
    *(int32_t *)(a1 + 488) = 0;
    *(char *)(a1 + 492) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x506010
    *v2 = (int64_t)&g19;
    int64_t * v3 = (int64_t *)v1; // 0x506013
    *v3 = (int64_t)&g20;
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(v1, 0, a3);
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x506037
    *v4 = (int64_t)&g17;
    *v3 = (int64_t)&g18;
    function_4fd0d0(v1, 0, a3);
    int64_t v5 = a1 + 24; // 0x50604e
    *v2 = (int64_t)&g21;
    *v4 = (int64_t)&g22;
    *v3 = (int64_t)&g23;
    function_5009e0(v5);
    function_4fd0d0(v1, (int32_t)v5, (int64_t)&g23);
    int64_t v6 = function_505ca0(v5, a2, a3 & 0xffffffff); // 0x50608a
    int64_t v7 = *v2 + a1; // 0x506096
    if (v6 == 0) {
        // 0x5060b8
        return function_4fca70(v7, *(int32_t *)(v7 + 32) | 4, v5);
    }
    // 0x50609e
    return function_4fca70(v7, 0, v5);
}

// Address range: 0x5060d2 - 0x506116
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5060d2(void) {
    // 0x5060d2
    int64_t v1; // 0x5060d2
    function_505260(v1);
    while (true) {
        // 0x5060e0
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 264) = (int64_t)&g8;
        function_54cf10(v1);
        int64_t v2; // 0x5060d2
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g26;
    }
}

// Address range: 0x506116 - 0x506118
int64_t function_506116(void) {
    // 0x506116
    int64_t result; // 0x506116
    return result;
}

// Address range: 0x506118 - 0x50611d
int64_t function_506118(void) {
    // 0x506118
    int64_t result; // 0x506118
    return result;
}

// Address range: 0x506120 - 0x506262
// From class:    std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506120(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 264; // 0x506133
    function_54cb80(v1);
    *(int64_t *)(a1 + 480) = 0;
    *(int32_t *)(a1 + 488) = 0;
    *(char *)(a1 + 492) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x50619f
    *v2 = (int64_t)&g19;
    int64_t * v3 = (int64_t *)v1; // 0x5061a2
    *v3 = (int64_t)&g20;
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(v1, 0, a3);
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x5061c6
    *v4 = (int64_t)&g17;
    *v3 = (int64_t)&g18;
    function_4fd0d0(v1, 0, a3);
    int64_t v5 = a1 + 24; // 0x5061dd
    *v2 = (int64_t)&g21;
    *v4 = (int64_t)&g22;
    *v3 = (int64_t)&g23;
    function_5009e0(v5);
    function_4fd0d0(v1, (int32_t)v5, (int64_t)&g23);
    int64_t v6 = function_505ca0(v5, v5, a3 & 0xffffffff); // 0x506218
    int64_t v7 = *v2 + a1; // 0x506224
    if (v6 == 0) {
        // 0x506248
        return function_4fca70(v7, *(int32_t *)(v7 + 32) | 4, v5);
    }
    // 0x50622c
    return function_4fca70(v7, 0, v5);
}

// Address range: 0x506262 - 0x5062a6
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506262(void) {
    // 0x506262
    int64_t v1; // 0x506262
    function_505260(v1);
    while (true) {
        // 0x506270
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 264) = (int64_t)&g8;
        function_54cf10(v1);
        int64_t v2; // 0x506262
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g26;
    }
}

// Address range: 0x5062a6 - 0x5062a8
int64_t function_5062a6(void) {
    // 0x5062a6
    int64_t result; // 0x5062a6
    return result;
}

// Address range: 0x5062a8 - 0x5062ad
int64_t function_5062a8(void) {
    // 0x5062a8
    int64_t result; // 0x5062a8
    return result;
}

// Address range: 0x5062b0 - 0x5063a4
int64_t function_5062b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x5062be
    int64_t * v2 = (int64_t *)a1; // 0x5062c8
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x5062cb
    int64_t v4 = *v3; // 0x5062cb
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v3 + a1, 0, v4);
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x5062ed
    int64_t v6 = a1 + 16; // 0x5062f3
    int64_t * v7 = (int64_t *)v6; // 0x5062f3
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x5062fb
    *(int64_t *)v8 = *(int64_t *)(a2 + 40);
    function_4fd0d0(v8, 0, v4);
    int64_t v9 = *(int64_t *)(a2 + 8); // 0x50630c
    int64_t v10 = a1 + 24; // 0x506310
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(v9 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v7 = *(int64_t *)(a2 + 56);
    *v2 = 0;
    int64_t v11 = *(int64_t *)(a2 + 64); // 0x506339
    *(int64_t *)(*(int64_t *)-24 + a1) = v11;
    *v7 = *(int64_t *)(a2 + 72);
    function_5009e0(v10);
    function_4fd0d0(*v2 + a1, (int32_t)v10, v11);
    int64_t v12 = function_505ca0(v10, a3, a4 & 0xffffffff); // 0x506369
    int64_t v13 = *v2 + a1; // 0x506375
    if (v12 == 0) {
        // 0x506390
        return function_4fca70(v13, *(int32_t *)(v13 + 32) | 4, v10);
    }
    // 0x50637d
    return function_4fca70(v13, 0, v10);
}

// Address range: 0x5063a4 - 0x506407
int64_t function_5063a4(void) {
    // 0x5063a4
    int64_t v1; // 0x5063a4
    function_505260(v1);
    int64_t * v2 = (int64_t *)v1; // 0x5063b6
    int64_t v3 = v1 + 16; // 0x5063c9
    int64_t * v4 = (int64_t *)v3; // 0x5063c9
    while (true) {
        int64_t v5 = *(int64_t *)(v1 + 8); // 0x5063b2
        *v2 = v5;
        *(int64_t *)(*(int64_t *)(v5 - 24) + v1) = *(int64_t *)(v1 + 48);
        *v4 = *(int64_t *)(v1 + 56);
        int64_t v6 = *(int64_t *)(v1 + 32); // 0x5063cd
        *v4 = v6;
        *(int64_t *)(*(int64_t *)(v6 - 24) + v3) = *(int64_t *)(v1 + 40);
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x5063e2
        *v2 = v7;
        *(int64_t *)(*(int64_t *)(v7 - 24) + v1) = *(int64_t *)(v1 + 24);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v8; // 0x5063a4
        _Unwind_Resume((struct _Unwind_Exception *)v8);
        v8 = (int64_t)&g26;
    }
}

// Address range: 0x506407 - 0x506409
int64_t function_506407(void) {
    // 0x506407
    int64_t result; // 0x506407
    return result;
}

// Address range: 0x506410 - 0x506522
// From class:    std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506410(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 248; // 0x506423
    function_54cb80(v1);
    *(int64_t *)(a1 + 464) = 0;
    *(int32_t *)(a1 + 472) = 0;
    *(char *)(a1 + 476) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x50648e
    *v2 = (int64_t)&g13;
    int64_t * v3 = (int64_t *)v1; // 0x506491
    *v3 = (int64_t)&g14;
    function_4fd0d0(v1, 0, a3);
    int64_t v4 = a1 + 8; // 0x5064a4
    *v3 = (int64_t)&g16;
    *v2 = (int64_t)&g15;
    function_5009e0(v4);
    function_4fd0d0(v1, (int32_t)v4, (int64_t)&g15);
    int64_t v5 = function_505ca0(v4, a2, a3 & 0xffffffef | 16); // 0x5064d9
    int64_t v6 = *(int64_t *)(a1 - 16) + a1; // 0x5064e5
    if (v5 == 0) {
        // 0x506508
        return function_4fca70(v6, *(int32_t *)(v6 + 32) | 4, v4);
    }
    // 0x5064ed
    return function_4fca70(v6, 0, v4);
}

// Address range: 0x506522 - 0x50655a
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506522(void) {
    // 0x506522
    int64_t v1; // 0x506522
    function_505260(v1);
    while (true) {
        // 0x506530
        *(int64_t *)(v1 + 248) = (int64_t)&g8;
        function_54cf10(v1);
        int64_t v2; // 0x506522
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g26;
    }
}

// Address range: 0x50655a - 0x50655f
int64_t function_50655a(void) {
    // 0x50655a
    int64_t result; // 0x50655a
    return result;
}

// Address range: 0x506560 - 0x50660c
int64_t function_506560(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x50656e
    int64_t v2 = a1 + 8; // 0x506578
    int64_t * v3 = (int64_t *)a1; // 0x50657c
    *v3 = v1;
    int64_t v4 = *(int64_t *)(v1 - 24) + a1; // 0x506589
    *(int64_t *)v4 = *(int64_t *)(a2 + 16);
    function_4fd0d0(v4, 0, a3);
    *v3 = 0;
    int64_t v5 = *(int64_t *)(a2 + 24); // 0x50659e
    *(int64_t *)(*(int64_t *)-24 + a1) = v5;
    function_5009e0(v2);
    int64_t * v6 = (int64_t *)(a1 - 16); // 0x5065b5
    function_4fd0d0(*v6 + a1, (int32_t)v2, v5);
    int64_t v7 = function_505ca0(v2, a3, a4 & 0xffffffef | 16); // 0x5065cd
    int64_t v8 = *v6 + a1; // 0x5065d9
    if (v7 == 0) {
        // 0x5065f8
        return function_4fca70(v8, *(int32_t *)(v8 + 32) | 4, v2);
    }
    // 0x5065e1
    return function_4fca70(v8, 0, v2);
}

// Address range: 0x50660c - 0x506637
int64_t function_50660c(void) {
    // 0x50660c
    int64_t v1; // 0x50660c
    function_505260(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x50661a
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        int64_t v3; // 0x50660c
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g26;
    }
}

// Address range: 0x506640 - 0x50675a
// From class:    std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506640(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 256; // 0x506653
    function_54cb80(v1);
    *(int64_t *)(a1 + 472) = 0;
    *(int32_t *)(a1 + 480) = 0;
    *(char *)(a1 + 484) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x5066be
    *v2 = (int64_t)&g9;
    int64_t * v3 = (int64_t *)v1; // 0x5066c1
    *v3 = (int64_t)&g10;
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(v1, 0, a3);
    int64_t v4 = a1 + 16; // 0x5066dc
    *v3 = (int64_t)&g12;
    *v2 = (int64_t)&g11;
    function_5009e0(v4);
    function_4fd0d0(v1, (int32_t)v4, (int64_t)&g11);
    int64_t v5 = function_505ca0(v4, a2, a3 & 0xfffffff7 | 8); // 0x506711
    int64_t v6 = *(int64_t *)(a1 - 8) + a1; // 0x50671d
    if (v5 == 0) {
        // 0x506740
        return function_4fca70(v6, *(int32_t *)(v6 + 32) | 4, v4);
    }
    // 0x506725
    return function_4fca70(v6, 0, v4);
}

// Address range: 0x50675a - 0x50679a
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_50675a(void) {
    // 0x50675a
    int64_t v1; // 0x50675a
    function_505260(v1);
    while (true) {
        // 0x506768
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 256) = (int64_t)&g8;
        function_54cf10(v1);
        int64_t v2; // 0x50675a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g26;
    }
}

// Address range: 0x50679a - 0x50679f
int64_t function_50679a(void) {
    // 0x50679a
    int64_t result; // 0x50679a
    return result;
}

// Address range: 0x5067a0 - 0x506894
int64_t function_5067a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x5067ae
    int64_t * v2 = (int64_t *)a1; // 0x5067b8
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x5067bb
    int64_t v4 = *v3; // 0x5067bb
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v3 + a1, 0, v4);
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x5067dd
    int64_t v6 = a1 + 16; // 0x5067e3
    int64_t * v7 = (int64_t *)v6; // 0x5067e3
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x5067eb
    *(int64_t *)v8 = *(int64_t *)(a2 + 40);
    function_4fd0d0(v8, 0, v4);
    int64_t v9 = *(int64_t *)(a2 + 8); // 0x5067fc
    int64_t v10 = a1 + 24; // 0x506800
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(v9 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v7 = *(int64_t *)(a2 + 56);
    *v2 = 0;
    int64_t v11 = *(int64_t *)(a2 + 64); // 0x506829
    *(int64_t *)(*(int64_t *)-24 + a1) = v11;
    *v7 = *(int64_t *)(a2 + 72);
    function_5009e0(v10);
    function_4fd0d0(*v2 + a1, (int32_t)v10, v11);
    int64_t v12 = function_505ca0(v10, v11, a4 & 0xffffffff); // 0x50685a
    int64_t v13 = *v2 + a1; // 0x506866
    if (v12 == 0) {
        // 0x506880
        return function_4fca70(v13, *(int32_t *)(v13 + 32) | 4, v10);
    }
    // 0x50686e
    return function_4fca70(v13, 0, v10);
}

// Address range: 0x506894 - 0x5068f7
int64_t function_506894(void) {
    // 0x506894
    int64_t v1; // 0x506894
    function_505260(v1);
    int64_t * v2 = (int64_t *)v1; // 0x5068a6
    int64_t v3 = v1 + 16; // 0x5068b9
    int64_t * v4 = (int64_t *)v3; // 0x5068b9
    while (true) {
        int64_t v5 = *(int64_t *)(v1 + 8); // 0x5068a2
        *v2 = v5;
        *(int64_t *)(*(int64_t *)(v5 - 24) + v1) = *(int64_t *)(v1 + 48);
        *v4 = *(int64_t *)(v1 + 56);
        int64_t v6 = *(int64_t *)(v1 + 32); // 0x5068bd
        *v4 = v6;
        *(int64_t *)(*(int64_t *)(v6 - 24) + v3) = *(int64_t *)(v1 + 40);
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x5068d2
        *v2 = v7;
        *(int64_t *)(*(int64_t *)(v7 - 24) + v1) = *(int64_t *)(v1 + 24);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v8; // 0x506894
        _Unwind_Resume((struct _Unwind_Exception *)v8);
        v8 = (int64_t)&g26;
    }
}

// Address range: 0x5068f7 - 0x5068f9
int64_t function_5068f7(void) {
    // 0x5068f7
    int64_t result; // 0x5068f7
    return result;
}

// Address range: 0x506900 - 0x506a12
// From class:    std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506900(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 248; // 0x506913
    function_54cb80(v1);
    *(int64_t *)(a1 + 464) = 0;
    *(int32_t *)(a1 + 472) = 0;
    *(char *)(a1 + 476) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x50697e
    *v2 = (int64_t)&g13;
    int64_t * v3 = (int64_t *)v1; // 0x506981
    *v3 = (int64_t)&g14;
    function_4fd0d0(v1, 0, a3);
    int64_t v4 = a1 + 8; // 0x506994
    *v3 = (int64_t)&g16;
    *v2 = (int64_t)&g15;
    function_5009e0(v4);
    function_4fd0d0(v1, (int32_t)v4, (int64_t)&g15);
    int64_t v5 = function_505ca0(v4, v4, a3 & 0xffffffef | 16); // 0x5069c9
    int64_t v6 = *(int64_t *)(a1 - 16) + a1; // 0x5069d5
    if (v5 == 0) {
        // 0x5069f8
        return function_4fca70(v6, *(int32_t *)(v6 + 32) | 4, v4);
    }
    // 0x5069dd
    return function_4fca70(v6, 0, v4);
}

// Address range: 0x506a12 - 0x506a4a
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506a12(void) {
    // 0x506a12
    int64_t v1; // 0x506a12
    function_505260(v1);
    while (true) {
        // 0x506a20
        *(int64_t *)(v1 + 248) = (int64_t)&g8;
        function_54cf10(v1);
        int64_t v2; // 0x506a12
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g26;
    }
}

// Address range: 0x506a4a - 0x506a4f
int64_t function_506a4a(void) {
    // 0x506a4a
    int64_t result; // 0x506a4a
    return result;
}

// Address range: 0x506a50 - 0x506b04
int64_t function_506a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x506a5e
    int64_t v2 = a1 + 16; // 0x506a68
    int64_t * v3 = (int64_t *)a1; // 0x506a6c
    *v3 = v1;
    int64_t * v4 = (int64_t *)(v1 - 24); // 0x506a6f
    int64_t v5 = *v4; // 0x506a6f
    *(int64_t *)(v5 + a1) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(*v4 + a1, 0, v5);
    *v3 = 0;
    int64_t v6 = *(int64_t *)(a2 + 24); // 0x506a9b
    *(int64_t *)(*(int64_t *)-24 + a1) = v6;
    function_5009e0(v2);
    int64_t * v7 = (int64_t *)(a1 - 8); // 0x506ab2
    function_4fd0d0(*v7 + a1, (int32_t)v2, v6);
    int64_t v8 = function_505ca0(v2, a3, a4 & 0xfffffff7 | 8); // 0x506aca
    int64_t v9 = *v7 + a1; // 0x506ad6
    if (v8 == 0) {
        // 0x506af0
        return function_4fca70(v9, *(int32_t *)(v9 + 32) | 4, v2);
    }
    // 0x506ade
    return function_4fca70(v9, 0, v2);
}

// Address range: 0x506b04 - 0x506b37
int64_t function_506b04(void) {
    // 0x506b04
    int64_t v1; // 0x506b04
    function_505260(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x506b12
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v3; // 0x506b04
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g26;
    }
}

// Address range: 0x506b40 - 0x506bec
int64_t function_506b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x506b4e
    int64_t v2 = a1 + 8; // 0x506b58
    int64_t * v3 = (int64_t *)a1; // 0x506b5c
    *v3 = v1;
    int64_t v4 = *(int64_t *)(v1 - 24) + a1; // 0x506b69
    *(int64_t *)v4 = *(int64_t *)(a2 + 16);
    function_4fd0d0(v4, 0, a3);
    *v3 = 0;
    int64_t v5 = *(int64_t *)(a2 + 24); // 0x506b7e
    *(int64_t *)(*(int64_t *)-24 + a1) = v5;
    function_5009e0(v2);
    int64_t * v6 = (int64_t *)(a1 - 16); // 0x506b95
    function_4fd0d0(*v6 + a1, (int32_t)v2, v5);
    int64_t v7 = function_505ca0(v2, v5, a4 & 0xffffffef | 16); // 0x506bad
    int64_t v8 = *v6 + a1; // 0x506bb9
    if (v7 == 0) {
        // 0x506bd8
        return function_4fca70(v8, *(int32_t *)(v8 + 32) | 4, v2);
    }
    // 0x506bc1
    return function_4fca70(v8, 0, v2);
}

// Address range: 0x506bec - 0x506c17
int64_t function_506bec(void) {
    // 0x506bec
    int64_t v1; // 0x506bec
    function_505260(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x506bfa
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        int64_t v3; // 0x506bec
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g26;
    }
}

// Address range: 0x506c20 - 0x506d3a
// From class:    std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506c20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 256; // 0x506c33
    function_54cb80(v1);
    *(int64_t *)(a1 + 472) = 0;
    *(int32_t *)(a1 + 480) = 0;
    *(char *)(a1 + 484) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x506c9e
    *v2 = (int64_t)&g9;
    int64_t * v3 = (int64_t *)v1; // 0x506ca1
    *v3 = (int64_t)&g10;
    *(int64_t *)(a1 + 8) = 0;
    function_4fd0d0(v1, 0, a3);
    int64_t v4 = a1 + 16; // 0x506cbc
    *v3 = (int64_t)&g12;
    *v2 = (int64_t)&g11;
    function_5009e0(v4);
    function_4fd0d0(v1, (int32_t)v4, (int64_t)&g11);
    int64_t v5 = function_505ca0(v4, v4, a3 & 0xfffffff7 | 8); // 0x506cf1
    int64_t v6 = *(int64_t *)(a1 - 8) + a1; // 0x506cfd
    if (v5 == 0) {
        // 0x506d20
        return function_4fca70(v6, *(int32_t *)(v6 + 32) | 4, v4);
    }
    // 0x506d05
    return function_4fca70(v6, 0, v4);
}

// Address range: 0x506d3a - 0x506d7a
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506d3a(void) {
    // 0x506d3a
    int64_t v1; // 0x506d3a
    function_505260(v1);
    while (true) {
        // 0x506d48
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 256) = (int64_t)&g8;
        function_54cf10(v1);
        int64_t v2; // 0x506d3a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g26;
    }
}

// Address range: 0x506d7a - 0x506d7f
int64_t function_506d7a(void) {
    // 0x506d7a
    int64_t result; // 0x506d7a
    return result;
}
