/*
 * Targeted RetDec C for native executable gap queue batch 968.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xdd3c7-0xdd5c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdd5c7-0xdd7c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdd7c7-0xdd9c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x281cee-0x281eee rank=- name=- kind=- bytes=- uncovered=-
 *   0x281eee-0x2820ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2820ee-0x2822ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2822ee-0x2824ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2824ee-0x2826ee rank=- name=- kind=- bytes=- uncovered=-
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
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
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

int64_t function_1189d764();
int64_t function_21020bc();
int64_t function_210b8b6();
int64_t function_281cee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_281d49(void);
int64_t function_281d59(void);
int64_t function_281d6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_281d85(void);
int64_t function_281d97(void);
int64_t function_281df1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_281e45(int64_t a1);
int64_t function_281e55(void);
int64_t function_281e63(void);
int64_t function_281e68(void);
int64_t function_281e93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_281ec9(void);
int64_t function_281edd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_281f2e(void);
int64_t function_281f7e(void);
int64_t function_281fd8(void);
int64_t function_281ff2(void);
int64_t function_282031(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_282086(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2820e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_282179(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2821b8(int64_t a1);
int64_t function_2821ce(int64_t a1);
int64_t function_2821fc(void);
int64_t function_2821fe(void);
int64_t function_282218(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_282232(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28226c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_282299(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2822ad(int64_t a1);
int64_t function_282379(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2823bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_282402(void);
int64_t function_282445(void);
int64_t function_2824bc(int64_t a1, int64_t a2);
int64_t function_2824d5(int64_t a1);
int64_t function_28250c(int64_t a1);
int64_t function_282514(void);
int64_t function_282538(void);
int64_t function_282558(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28255a(void);
int64_t function_282560(int64_t a1, int64_t a2, int64_t a3);
int64_t function_282574(void);
int64_t function_28257c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28259a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2825b1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_28260f(void);
int64_t function_282675(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2826b3(int64_t a1);
int64_t function_3d7a25fe();
int64_t function_3dde23c0();
int64_t function_dd3c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_dd470(void);
int64_t function_dd494(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_dd551(void);
int64_t function_dd5c2(void);
int64_t function_dd5ce(int64_t a1);
int64_t function_dd619(void);
int64_t function_dd634(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_dd6c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_dd6fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dd70d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dd727(void);
int64_t function_dd73b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dd76e(int64_t result);
int64_t function_dd77a(void);
int64_t function_dd795(int64_t a1, int64_t a2, int64_t a3);
int64_t function_dd80f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_dd863(void);
int64_t function_dd891(int64_t a1);
int64_t function_dd8d8(int64_t a1);
int64_t function_dd9b1(void);
int64_t function_ecc73f5();
int64_t function_ffffffff911f1157();
int64_t function_ffffffffc8c0c9bc();
int64_t function_ffffffffd7f794e4();
int64_t function_ffffffffe83360f6();
int64_t unknown_30b431f();
int64_t unknown_4487458();
int64_t unknown_462baf04();
int64_t unknown_64328d98();
int64_t unknown_67f4ad69();
int64_t unknown_683d53f1();
int64_t unknown_6c83636a();
int64_t unknown_76db8316();
int64_t unknown_7e92c197();
int64_t unknown_7fa21f54();
int64_t unknown_82e453e();
int64_t unknown_ffffffff8685152e();
int64_t unknown_ffffffffa7a5664b();
int64_t unknown_ffffffffabc0a8bd();
int64_t unknown_ffffffffabc36940();
int64_t unknown_ffffffffae18f8cd();
int64_t unknown_ffffffffbf834709();
int64_t unknown_ffffffffc702e5f7();
int64_t unknown_ffffffffe6c654be();
int64_t unknown_ffffffffe8ec3da5();
int64_t unknown_fffffffff9b67657();
int64_t unknown_fffffffffa717944();

// Address range: 0xdd3c7 - 0xdd3d3
int64_t function_dd3c7(int64_t a1, int64_t a2, int64_t a3) {
    // 0xdd3c7
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0xdd3c7
    unsigned char v1 = *(char *)(result + 30); // 0xdd3ca
    *(char *)result = (char)(v1 > (char)result + -1 - (char)result);
    return result;
}

// Address range: 0xdd470 - 0xdd475
int64_t function_dd470(void) {
    // 0xdd470
    return function_ecc73f5();
}

// Address range: 0xdd494 - 0xdd52a
int64_t function_dd494(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0xdd494
    int64_t v1; // 0xdd494
    int64_t v2 = v1 + 0x1e8cfbe; // 0xdd494
    int64_t v3 = (a4 | a2) & 0xffffffff; // 0xdd49a
    int32_t * v4 = (int32_t *)a1; // 0xdd4a1
    *v4 = (int32_t)a1 - ((int32_t)v1 | -0x49ff8000);
    uint64_t v5 = a4 / 256; // 0xdd4a3
    int32_t * v6 = (int32_t *)((v2 & 0xffffffff) - 0x66ff5800); // 0xdd4a5
    *v6 = *v6 + (int32_t)v1;
    char * v7 = (char *)(v3 - 49); // 0xdd4ab
    *v7 = *v7 + (char)v1;
    char v8 = (char)(v1 + v5) & 43; // 0xdd4ae
    int64_t v9 = llvm_ctpop_i8(v8) % 2 == 0; // 0xdd4b0
    int64_t v10 = v2 + a3; // 0xdd4b3
    int64_t v11 = v10 & 0xffffffff; // 0xdd4b3
    int64_t v12 = unknown_ffffffffabc0a8bd(); // 0xdd4b7
    char * v13 = (char *)v12; // 0xdd4bc
    *v13 = *v13 + (char)v5;
    char * v14 = (char *)v11; // 0xdd4ce
    uint64_t v15 = v1 / 256; // 0xdd4ce
    char v16 = *v14; // 0xdd4c3
    int64_t v17 = v12; // 0xdd4c3
    v16 += (char)v15;
    int64_t v18 = v3 + a1; // 0xdd4d6
    int64_t v19 = v18 & 0xffffffff; // 0xdd4d6
    while ((v17 & 0x4100) == 0) {
        // 0xdd4c5
        v17 &= 0xffffffff;
        v16 += (char)v15;
        v18 = v19 + a1;
        v19 = v18 & 0xffffffff;
    }
    // 0xdd4db
    *v14 = v16;
    float80_t v20; // 0xdd494
    *(float64_t *)(v1 - 0xb9a97f6) = (float64_t)v20;
    char * v21 = (char *)v19; // 0xdd4e1
    *v21 = -*v21;
    int32_t * v22 = (int32_t *)v19; // 0xdd4e5
    *v22 = *v22 + (int32_t)v2;
    int64_t v23 = 64 * (int64_t)(v8 == 0) | (int64_t)&g1 | 2 | 4 * v9; // 0xdd4ee
    int64_t v24 = unknown_ffffffffc702e5f7(); // 0xdd4f1
    int64_t v25 = (v18 + 189) % 256 | v18 & 0xffffff00; // 0xdd4fc
    *(char *)a1 = __asm_insb((int16_t)v10);
    int32_t v26 = v25; // 0xdd4ff
    __asm_out(-24, v26);
    int32_t * v27 = (int32_t *)(8 * v23 + v11); // 0xdd501
    int32_t v28 = a5; // 0xdd501
    *v27 = *v27 + v28;
    char * v29 = (char *)v25; // 0xdd50a
    *v29 = (char)v23 - 1 + *v29;
    int32_t * v30 = (int32_t *)((v15 % 256 ^ v1) - 0x17b9bda1); // 0xdd50c
    *v30 = *v30 - (int32_t)v24;
    int32_t * v31 = (int32_t *)(v11 + 0x5603ccc + v23); // 0xdd512
    *v31 = *v31 + v28;
    *v4 = v26;
    int64_t v32 = v25 | 0x1e81855; // 0xdd51d
    return (int64_t)(*(int32_t *)v32 + (int32_t)v32);
}

// Address range: 0xdd551 - 0xdd556
int64_t function_dd551(void) {
    // 0xdd551
    return function_ffffffff911f1157();
}

// Address range: 0xdd5c2 - 0xdd5c4
int64_t function_dd5c2(void) {
    // 0xdd5c2
    int64_t v1; // 0xdd5c2
    return function_dd634(v1, v1, v1, v1);
}

// Address range: 0xdd5ce - 0xdd5d4
int64_t function_dd5ce(int64_t a1) {
    // 0xdd5ce
    int64_t result; // 0xdd5ce
    return result;
}

// Address range: 0xdd619 - 0xdd61f
int64_t function_dd619(void) {
    // 0xdd619
    return unknown_30b431f();
}

// Address range: 0xdd634 - 0xdd6bb
int64_t function_dd634(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0xdd634
    bool v3; // 0xdd634
    uint32_t v4 = (int32_t)v3 + (int32_t)v2 - *(int32_t *)(a2 - 54 + 2 * v2); // 0xdd634
    int64_t v5 = v4; // 0xdd634
    unknown_ffffffffabc36940();
    int32_t * v6 = (int32_t *)(v2 + 69); // 0xdd63f
    *v6 = *v6 & v4;
    __asm_out_133(80, (char)__asm_int1(a1));
    unknown_ffffffffa7a5664b();
    int32_t * v7 = (int32_t *)(a3 - 0x4d1eb234); // 0xdd64f
    int32_t v8 = a3; // 0xdd64f
    *v7 = *v7 + v8;
    unknown_6c83636a();
    unsigned char v9 = *(char *)-0x172e3cb1; // 0xdd66c
    *(char *)-0x172e3cb1 = v9 / 128 | 2 * v9;
    char v10 = a4; // 0xdd673
    *(char *)a3 = v10;
    int64_t v11; // 0xdd634
    uint32_t v12 = *(int32_t *)&v11; // 0xdd67d
    uint32_t v13 = v12 + (int32_t)a2; // 0xdd67d
    *(int32_t *)a1 = v13;
    int32_t v14 = *(int32_t *)(int64_t)(*(int32_t *)&v1 | v8); // 0xdd67f
    uint32_t v15 = v14 + (int32_t)a1 + (int32_t)(v13 < v12); // 0xdd67f
    __asm_hlt(v15);
    int32_t v16 = __asm_in(-34); // 0xdd684
    int32_t * v17 = (int32_t *)(a4 + 0x703b1a26); // 0xdd688
    *v17 = *v17 + v16;
    uint32_t v18 = v16 - 0x171277cd; // 0xdd68e
    int64_t v19 = v18; // 0xdd68e
    int32_t * v20 = (int32_t *)(v19 + 0x506c5655); // 0xdd693
    int32_t v21 = (int32_t)(v5 - 8) - (int32_t)&g5 + 8; // 0xdd693
    *v20 = *v20 + v21;
    *(int32_t *)(int64_t)v15 = v18;
    char * v22 = (char *)(a2 + 0xe7001e8 + a4); // 0xdd69a
    *v22 = *v22 + v10;
    int32_t * v23 = (int32_t *)(v19 - 20); // 0xdd6a7
    *v23 = *v23 + (int32_t)a4;
    char * v24 = (char *)(v19 + 0x252e000); // 0xdd6ad
    *v24 = *v24 + (char)v18;
    int32_t * v25 = (int32_t *)(v5 + 0x58001bf8); // 0xdd6b5
    *v25 = *v25 + v21;
    return (a4 / 256 + v19) % 256 | v19 & 0xffffff00;
}

// Address range: 0xdd6c7 - 0xdd6fc
int64_t function_dd6c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_ffffffffae18f8cd(); // 0xdd6c7
    int32_t * v2 = (int32_t *)v1; // 0xdd6cc
    bool v3; // 0xdd6c7
    *v2 = *v2 - (v3 ? 0x64823a02 : 0x64823a01);
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0xdd6d2
    uint32_t v5 = (int32_t)a2; // 0xdd6d5
    char v6 = *(char *)0xf4dc2a8d; // 0xdd6dc
    *(char *)0xf4dc2a8d = v6 + (char)a4 + (char)(-1 - (int32_t)((v1 + a4 / 256) % 256 | v1 & 0xffffff00) < v5);
    int64_t v7; // 0xdd6c7
    *(char *)(v7 + 78) = 42;
    int32_t * v8 = (int32_t *)(v4 + 0x1e89de5); // 0xdd6e1
    uint32_t v9 = *v8; // 0xdd6e1
    *v8 = v5;
    *(char *)0xf4dc2a8d = *(char *)0xf4dc2a8d + 115;
    __asm_out_133(-39, -115);
    uint64_t v10 = 141 - v7 / 256; // 0xdd6eb
    char * v11 = (char *)(v10 % 256 | 0xf4dc2a00); // 0xdd6ed
    *v11 = *v11 - (char)v10;
    int32_t * v12 = (int32_t *)(v4 + 10); // 0xdd6f5
    *v12 = *v12 + (int32_t)v7;
    int64_t result = function_dd70d(v4, (int64_t)v9, a3 & -0xff01 | (int64_t)&g11, a4); // 0xdd6fa
    return result;
}

// Address range: 0xdd6fc - 0xdd70d
int64_t function_dd6fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdd6fc
    bool v1; // 0xdd6fc
    if (a4 != 1 && !v1) {
        __asm_int1((int64_t)&g13);
    }
    uint64_t v2 = unknown_ffffffffbf834709(); // 0xdd703
    int64_t v3; // 0xdd6fc
    return v2 % 256 * ((uint64_t)v3 % 256) | v2 & -0x10000;
}

// Address range: 0xdd70d - 0xdd71d
int64_t function_dd70d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0xdd70d
    *(char *)a3 = (char)a3 - (char)((uint64_t)v2 / 256);
    int64_t v3 = unknown_76db8316(); // 0xdd70f
    uint32_t v4 = (int32_t)a4 % 32; // 0xdd71a
    if (v4 != 0) {
        uint32_t v5 = *(int32_t *)&v1; // 0xdd71a
        *(int32_t *)v1 = v5 >> v4 | v5 << 32 - v4;
    }
    return 0x10000 * (int32_t)v3 >> 16 | 210;
}

// Address range: 0xdd727 - 0xdd72c
int64_t function_dd727(void) {
    // 0xdd727
    return function_1189d764();
}

// Address range: 0xdd73b - 0xdd75b
int64_t function_dd73b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2; // 0xdd73b
    int32_t * v3 = (int32_t *)(8 * v2 + 0x511e3c3a + (int64_t)&v1); // 0xdd744
    int32_t v4 = *v3; // 0xdd744
    int32_t v5 = a2; // 0xdd744
    int32_t v6 = v4 + v5; // 0xdd744
    *v3 = v6;
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        function_dd77a();
    }
    // 0xdd74d
    unknown_7fa21f54();
    char * v7 = (char *)((v2 & -256 | 213) + 0x5c0107d5); // 0xdd753
    *v7 = *v7 ^ -43;
    return function_dd795(a1, a2, (int64_t)&g13);
}

// Address range: 0xdd76e - 0xdd779
int64_t function_dd76e(int64_t result) {
    // 0xdd76e
    *(char *)-0xcf51011c70ef7dd = (char)__asm_int1(result);
    return result;
}

// Address range: 0xdd77a - 0xdd77b
int64_t function_dd77a(void) {
    // 0xdd77a
    int64_t result; // 0xdd77a
    return result;
}

// Address range: 0xdd795 - 0xdd7a0
int64_t function_dd795(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x9d6fe18); // 0xdd795
    int64_t v2; // 0xdd795
    *v1 = *v1 | (int32_t)v2;
    return __asm_iretd(a1);
}

// Address range: 0xdd80f - 0xdd812
int64_t function_dd80f(int64_t a1, int64_t a2, int64_t a3) {
    // 0xdd80f
    int64_t result; // 0xdd80f
    return result;
}

// Address range: 0xdd863 - 0xdd864
int64_t function_dd863(void) {
    // 0xdd863
    int64_t result; // 0xdd863
    return result;
}

// Address range: 0xdd891 - 0xdd897
int64_t function_dd891(int64_t a1) {
    // 0xdd891
    return unknown_7e92c197(a1);
}

// Address range: 0xdd8d8 - 0xdd8db
int64_t function_dd8d8(int64_t a1) {
    // 0xdd8d8
    int64_t result; // 0xdd8d8
    bool v1; // 0xdd8d8
    if (v1) {
        result = function_dd863();
    }
    // 0xdd8da
    return result;
}

// Address range: 0xdd9b1 - 0xdd9b2
int64_t function_dd9b1(void) {
    // 0xdd9b1
    int64_t result; // 0xdd9b1
    return result;
}

// Address range: 0x281cee - 0x281d48
int64_t function_281cee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x281cee
    int64_t v1; // 0x281cee
    int64_t v2 = v1;
    int64_t v3 = (v2 + 32) % 256 | v2 & 0xffffff00; // 0x281cf3
    *(int32_t *)v3 = (int32_t)v3;
    int32_t * v4 = (int32_t *)(v1 & 0xffffff00 | 167); // 0x281cfe
    *v4 = *v4 + (int32_t)a1;
    __readfsdword(a4 + 0x45fa1957);
    int32_t * v5 = (int32_t *)((v3 | 0x2c01e89a) + 0x6df4700a); // 0x281d09
    *v5 = *v5 + (int32_t)a4;
    return a1 & 0xffffffff;
}

// Address range: 0x281d49 - 0x281d4b
int64_t function_281d49(void) {
    // 0x281d49
    int64_t result; // 0x281d49
    return result;
}

// Address range: 0x281d59 - 0x281d69
int64_t function_281d59(void) {
    // 0x281d59
    int64_t v1; // 0x281d59
    uint16_t v2 = (int16_t)v1; // 0x281d63
    uint16_t v3 = (int16_t)*(char *)(v1 - 0x60fc895c); // 0x281d63
    return v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3));
}

// Address range: 0x281d6a - 0x281d7d
int64_t function_281d6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x281d6a
    int64_t result; // 0x281d6a
    __asm_out(-69, (int32_t)result);
    uint32_t v1 = (int32_t)result;
    uint32_t v2 = (int32_t)a4; // 0x281d72
    uint32_t v3 = v1 + v2; // 0x281d72
    *(int32_t *)a3 = v3;
    uint32_t v4 = v2 % 32; // 0x281d74
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(a4 - 0xf361c00); // 0x281d74
        uint32_t v6 = *v5; // 0x281d74
        *v5 = v6 << v4 | (int32_t)(v3 < v1) << v4 - 1 | (int32_t)((int64_t)v6 >> (int64_t)(33 - v4));
    }
    return result;
}

// Address range: 0x281d85 - 0x281d8a
int64_t function_281d85(void) {
    // 0x281d85
    return function_ffffffffc8c0c9bc();
}

// Address range: 0x281d97 - 0x281d98
int64_t function_281d97(void) {
    // 0x281d97
    int64_t result; // 0x281d97
    return result;
}

// Address range: 0x281df1 - 0x281e0b
int64_t function_281df1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x281df1
    *(int32_t *)0x7e070441 = *(int32_t *)0x7e070441 ^ (int32_t)a1;
    __asm_outsb((int16_t)(256 * a3 | a3), *(char *)0x3a05086f);
    return function_281d97();
}

// Address range: 0x281e45 - 0x281e46
int64_t function_281e45(int64_t a1) {
    // 0x281e45
    int64_t result; // 0x281e45
    return result;
}

// Address range: 0x281e55 - 0x281e5a
int64_t function_281e55(void) {
    // 0x281e55
    int64_t result; // 0x281e55
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x281e63 - 0x281e68
int64_t function_281e63(void) {
    // 0x281e63
    return function_21020bc();
}

// Address range: 0x281e68 - 0x281e6f
int64_t function_281e68(void) {
    // 0x281e68
    int64_t v1; // 0x281e68
    bool v2; // 0x281e68
    *(char *)v1 = (char)v2;
    return v1 & -111;
}

// Address range: 0x281e93 - 0x281ebd
int64_t function_281e93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t * v1 = (int16_t *)(8 * a3 + a1); // 0x281e99
    *v1 = *v1 >> 1;
    int64_t v2; // 0x281e93
    __asm_out_134((int16_t)a3, (int32_t)v2);
    int64_t v3; // 0x281e93
    *(char *)a1 = *(char *)&v3;
    int64_t v4 = (int64_t)*(char *)(v2 % 256 + v2); // 0x281eab
    int64_t v5 = v2 & -256; // 0x281eab
    *(int32_t *)(v5 | v4) = 0x2f58013d;
    return v5 | (int64_t)*(char *)(v2 + v4);
}

// Address range: 0x281ec9 - 0x281eca
int64_t function_281ec9(void) {
    // 0x281ec9
    int64_t result; // 0x281ec9
    return result;
}

// Address range: 0x281edd - 0x281f0d
int64_t function_281edd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x281edd
    int64_t v1; // 0x281edd
    *(char *)a1 = (char)v1;
    if (a4 == 0) {
        function_281ec9();
    }
    // 0x281ee1
    bool v2; // 0x281edd
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x281edd
    int32_t * v4 = (int32_t *)(a4 + 0x3d01e855); // 0x281ee1
    *v4 = *v4 + (int32_t)v3;
    int32_t * v5 = (int32_t *)(v1 - 113); // 0x281ee7
    *v5 = *v5 + (int32_t)v1;
    *(char *)v3 = __asm_insb((int16_t)a3);
    int64_t result = unknown_462baf04(); // 0x281efe
    __asm_rcl(*(int32_t *)(((v1 + a3) % 256 | a3 & -256) + 0x1e854ce));
    return result;
}

// Address range: 0x281f2e - 0x281f2f
int64_t function_281f2e(void) {
    // 0x281f2e
    int64_t result; // 0x281f2e
    return result;
}

// Address range: 0x281f7e - 0x281f81
int64_t function_281f7e(void) {
    // 0x281f7e
    int64_t result; // 0x281f7e
    return result;
}

// Address range: 0x281fd8 - 0x281fd9
int64_t function_281fd8(void) {
    // 0x281fd8
    int64_t result; // 0x281fd8
    return result;
}

// Address range: 0x281ff2 - 0x281ff9
int64_t function_281ff2(void) {
    // 0x281ff2
    return function_210b8b6();
}

// Address range: 0x282031 - 0x28205d
int64_t function_282031(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x282031
    int64_t result; // 0x282031
    char * v1 = (char *)(result + (8 * result | 1)); // 0x282031
    unsigned char v2 = *v1; // 0x282031
    *v1 = v2 / 128 | 2 * v2;
    bool v3; // 0x282031
    if (!v3) {
        int32_t * v4 = (int32_t *)(result + 0x5158b33d); // 0x28203c
        *v4 = *v4 + (int32_t)a1;
        return result;
    }
    if ((int32_t)result == -(int32_t)a1) {
        function_281fd8();
    }
    char * v5 = (char *)a3; // 0x282049
    unsigned char v6 = *v5 | (char)(result / 256); // 0x282049
    int64_t v7 = result & -0xff01 | a2 | 256 * (int64_t)v6;
    unknown_fffffffff9b67657(a5, (int32_t)v7);
    *v5 = *v5 + v6;
    __asm_outsd((int16_t)a3, *(int32_t *)(v7 & 0xffffffff));
    return a4 & 0xffff00ff | (int64_t)(int32_t)&g10;
}

// Address range: 0x282086 - 0x2820e0
int64_t function_282086(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x282086
    int64_t v1; // 0x282086
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t result = 0x10000 * (int32_t)v1 >> 16; // 0x282088
    bool v4; // 0x282086
    if (true != !v4) {
        int32_t * v5 = (int32_t *)(a3 - 42); // 0x282096
        uint32_t v6 = *v5; // 0x282096
        uint32_t v7 = v6 + (int32_t)v2; // 0x282096
        *v5 = v7;
        char * v8 = (char *)(v2 + 0x4c0068d5); // 0x282099
        *v8 = *v8 + (char)(v2 / 256) + (char)(v7 < v6);
        return result;
    }
    uint32_t v9 = *(int32_t *)(a1 + 48) | (int32_t)a1; // 0x2820a1
    int64_t v10 = v9; // 0x2820a1
    unsigned char v11 = *(char *)0x1cf301e8501c8aa4; // 0x2820a4
    *(int32_t *)0x63ed20b5 = v9;
    char * v12 = (char *)(a3 + 0x68c713a5); // 0x2820b7
    char v13 = a3; // 0x2820b7
    *v12 = *v12 & v13;
    char * v14 = (char *)((result & 0xffffff00 | (int64_t)v11) - 0x6ce7f7f6); // 0x2820bd
    *v14 = *v14 - 41;
    __asm_int1(v10);
    char * v15 = (char *)(v10 + 17); // 0x2820c4
    *v15 = *v15 + v13;
    int64_t result2 = (int64_t)*(int32_t *)&v3; // 0x2820cd
    v3 += (v4 ? -4 : 4);
    int32_t * v16 = (int32_t *)(result2 - 0x6344fc19); // 0x2820cf
    *v16 = *v16 + 10;
    char * v17 = (char *)(v3 + (int64_t)&g2); // 0x2820da
    *v17 = *v17 + (char)(a4 / 256);
    return result2;
}

// Address range: 0x2820e4 - 0x282109
int64_t function_2820e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2820e4
    if (a4 != 0) {
        // 0x2820eb
        return unknown_683d53f1();
    }
    // 0x2820f5
    int64_t result; // 0x2820e4
    *(int32_t *)a3 = (int32_t)a3 - (int32_t)result;
    *(char *)0x321c6fe = *(char *)0x321c6fe + (char)(result / 256);
    int32_t * v1 = (int32_t *)(result + 81 & 0xffffffff); // 0x282100
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x282179 - 0x28218d
int64_t function_282179(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x282179
    *(int32_t *)a3 = (int32_t)a1;
    int64_t result; // 0x282179
    char * v1 = (char *)(result + 61 + 2 * result); // 0x282183
    *v1 = *v1 + (char)(result / 256);
    int32_t * v2 = (int32_t *)(a1 - 70); // 0x282187
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x2821b8 - 0x2821c0
int64_t function_2821b8(int64_t a1) {
    // 0x2821b8
    return unknown_ffffffffe6c654be(a1);
}

// Address range: 0x2821ce - 0x2821cf
int64_t function_2821ce(int64_t a1) {
    // 0x2821ce
    int64_t result; // 0x2821ce
    return result;
}

// Address range: 0x2821fc - 0x2821fd
int64_t function_2821fc(void) {
    // 0x2821fc
    int64_t result; // 0x2821fc
    return result;
}

// Address range: 0x2821fe - 0x282201
int64_t function_2821fe(void) {
    // 0x2821fe
    int64_t result; // 0x2821fe
    return result;
}

// Address range: 0x282218 - 0x282232
int64_t function_282218(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff8685152e(); // 0x282228
    int64_t v1; // 0x282218
    if ((int32_t)v1 < 0) {
        // 0x28226b
        return result;
    }
    // 0x28222f
    return function_2821fc();
}

// Address range: 0x282232 - 0x28226b
int64_t function_282232(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x282232
    int64_t v1; // 0x282232
    int64_t v2 = 2 * v1; // 0x282234
    int32_t * v3 = (int32_t *)(a1 - 0x52728580); // 0x282236
    *v3 = *v3 + (int32_t)v2;
    *(int32_t *)a1 = (int32_t)unknown_fffffffffa717944();
    bool v4; // 0x282232
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x282243
    int32_t * v6 = (int32_t *)(4 * v5 + v1); // 0x282244
    *v6 = *v6 & -24;
    int64_t v7 = __asm_iretd(v5); // 0x28224a
    int64_t v8 = (a5 & (int64_t)&g3) == 0 ? 4 : -4; // 0x28224d
    int64_t v9 = v5 + v8; // 0x28224d
    *(int32_t *)v9 = (int32_t)v7;
    char * v10 = (char *)((8 * v2 & 0x7fffffff8) + v1); // 0x28224f
    *v10 = *v10 & (char)v7;
    int64_t v11 = unknown_4487458(v9 + v8); // 0x282252
    int64_t result = (v11 & 0xff00) + a4 & 0xff00 | v11 & -0xff01; // 0x282259
    char * v12 = (char *)result; // 0x282263
    *v12 = 116 - (char)v11 + *v12;
    return result;
}

// Address range: 0x28226c - 0x282284
int64_t function_28226c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28226c
    int64_t v1; // 0x28226c
    int32_t * v2 = (int32_t *)(a4 - 52 + (2 * v1 & 0xffffffff)); // 0x28226e
    *v2 = *v2 + (int32_t)a3;
    return 2 * (__asm_int1(a1 & 0xffffffff) + v1) & 0xfffffffe;
}

// Address range: 0x282299 - 0x2822a4
int64_t function_282299(int64_t a1, int64_t a2, int64_t a3) {
    // 0x282299
    int64_t v1; // 0x282299
    char * v2 = (char *)(v1 - 0x41fe17e2); // 0x282299
    *v2 = *v2 + (char)a3;
    return function_3dde23c0();
}

// Address range: 0x2822ad - 0x2822b2
int64_t function_2822ad(int64_t a1) {
    // 0x2822ad
    int64_t v1; // 0x2822ad
    return v1 & -0xff01 | (int64_t)&g9;
}

// Address range: 0x282379 - 0x282388
int64_t function_282379(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 + a2; // 0x28237c
    *(int32_t *)(a3 + 0x13d005e) = (int32_t)v1;
    *(int32_t *)a1 = *(int32_t *)(v1 & 0xffffffff);
    int64_t v2; // 0x282379
    return (v2 ^ v2) & 0xffffffff;
}

// Address range: 0x2823bd - 0x2823ce
int64_t function_2823bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2823bd
    int64_t result; // 0x2823bd
    __asm_out_133(11, (char)result);
    bool v1; // 0x2823bd
    int64_t v2 = v1 ? -5 : 5;
    *(int32_t *)(v2 + a1) = (int32_t)result;
    __asm_outsd((int16_t)a3, *(int32_t *)(v2 + a2));
    return result;
}

// Address range: 0x282402 - 0x282403
int64_t function_282402(void) {
    // 0x282402
    int64_t result; // 0x282402
    return result;
}

// Address range: 0x282445 - 0x282446
int64_t function_282445(void) {
    // 0x282445
    int64_t result; // 0x282445
    return result;
}

// Address range: 0x2824bc - 0x2824c3
int64_t function_2824bc(int64_t a1, int64_t a2) {
    // 0x2824bc
    int64_t result; // 0x2824bc
    return result;
}

// Address range: 0x2824d5 - 0x2824d9
int64_t function_2824d5(int64_t a1) {
    // 0x2824d5
    int64_t result; // 0x2824d5
    return result;
}

// Address range: 0x28250c - 0x282510
int64_t function_28250c(int64_t a1) {
    // 0x28250c
    int64_t result; // 0x28250c
    int32_t * v1 = (int32_t *)(result - 74); // 0x28250c
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x282514 - 0x282519
int64_t function_282514(void) {
    // 0x282514
    return function_ffffffffe83360f6();
}

// Address range: 0x282538 - 0x28253f
int64_t function_282538(void) {
    // 0x282538
    unknown_82e453e();
    return function_28255a();
}

// Address range: 0x282558 - 0x28255a
int64_t function_282558(int64_t a1, int64_t a2, int64_t a3) {
    // 0x282558
    int64_t result; // 0x282558
    *(int32_t *)a1 = (int32_t)(result ^ a3);
    return result;
}

// Address range: 0x28255a - 0x28255f
int64_t function_28255a(void) {
    // 0x28255a
    int64_t v1; // 0x28255a
    return (uint64_t)v1 % 256 | (int64_t)(int32_t)(int16_t)&g12;
}

// Address range: 0x282560 - 0x28256d
int64_t function_282560(int64_t a1, int64_t a2, int64_t a3) {
    // 0x282560
    __asm_in_135((int16_t)a3);
    int64_t v1; // 0x282560
    *(char *)a3 = (char)(v1 | (uint64_t)v1 / 256);
    unknown_67f4ad69();
    return function_3d7a25fe();
}

// Address range: 0x282574 - 0x282577
int64_t function_282574(void) {
    // 0x282574
    int64_t result; // 0x282574
    return result;
}

// Address range: 0x28257c - 0x282599
int64_t function_28257c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28257c
    int64_t v1; // 0x28257c
    int32_t * v2 = (int32_t *)(v1 + 47); // 0x282584
    *v2 = *v2 + (int32_t)a3;
    while (true) {
        char * v3 = (char *)(__asm_int3() & -15); // 0x28258d
        unsigned char v4 = *v3; // 0x28258d
        *v3 = v4 / 128 | 2 * v4;
        unknown_64328d98();
    }
}

// Address range: 0x28259a - 0x2825b1
int64_t function_28259a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28259a
    int64_t v1; // 0x28259a
    char * v2 = (char *)(v1 + 96); // 0x28259a
    *v2 = *v2 + (char)a4;
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x28259a
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x28259d
    int64_t result = unknown_ffffffffe8ec3da5(v4); // 0x28259e
    *(int32_t *)-0x17ae1555 = *(int32_t *)-0x17ae1555 + (int32_t)v4;
    int32_t * v5 = (int32_t *)result; // 0x2825aa
    *v5 = *v5 + (int32_t)a4;
    return result;
}

// Address range: 0x2825b1 - 0x2825d8
int64_t function_2825b1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2825b1
    int64_t v1; // 0x2825b1
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = (v2 + a4 / 256) % 256 | v2 & -256; // 0x2825b3
    int32_t * v5 = (int32_t *)(v4 + 0xec375709 & 0xffffffff); // 0x2825b5
    *v5 = *v5 - (int32_t)a3;
    *(int32_t *)v3 = *(int32_t *)&v3 | (int32_t)v4;
    char * v6 = (char *)(a1 - 24); // 0x2825cb
    *v6 = *v6 + 1;
    int32_t * v7 = (int32_t *)(a1 - 0x7e8cfd55); // 0x2825d0
    *v7 = *v7 ^ 0x7c01e808;
    return a2 & 0xffffffff;
}

// Address range: 0x28260f - 0x282614
int64_t function_28260f(void) {
    // 0x28260f
    return function_ffffffffd7f794e4();
}

// Address range: 0x282675 - 0x28268e
int64_t function_282675(int64_t a1, int64_t a2, int64_t a3) {
    // 0x282675
    *(int64_t *)0xc0e6967b = a2;
    int64_t result; // 0x282675
    return result;
}

// Address range: 0x2826b3 - 0x2826b4
int64_t function_2826b3(int64_t a1) {
    // 0x2826b3
    int64_t result; // 0x2826b3
    return result;
}
