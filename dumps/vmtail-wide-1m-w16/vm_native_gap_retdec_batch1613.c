/*
 * Targeted RetDec C for native executable gap queue batch 1613.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x77c3d-0x77e3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x77e3d-0x7803d rank=- name=- kind=- bytes=- uncovered=-
 *   0x7823d-0x7826e rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f54e8-0x1f56e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f56e8-0x1f58e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f58e8-0x1f5ae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f5ae8-0x1f5ce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f5ce8-0x1f5d10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33750c-0x33770c rank=- name=- kind=- bytes=- uncovered=-
 *   0x33770c-0x33790c rank=- name=- kind=- bytes=- uncovered=-
 *   0x33790c-0x337b0c rank=- name=- kind=- bytes=- uncovered=-
 *   0x337b0c-0x337d0c rank=- name=- kind=- bytes=- uncovered=-
 *   0x337d0c-0x337d35 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c0cae-0x4c0eae rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c0eae-0x4c10ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c14ae-0x4c14d0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g8;
extern int g9;
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

int64_t function_11fb2200();
int64_t function_1f38d8e3();
int64_t function_1f54e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1f55fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f5766(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f58db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f5a29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f5b5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f5ccc(void);
int64_t function_1f5cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f5cdc(void);
int64_t function_33750c(void);
int64_t function_33750d(int64_t a1);
int64_t function_33754e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3376ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3377e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33791c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_337a74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_337be8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36eb58();
int64_t function_372f52();
int64_t function_3dba7519();
int64_t function_4c0310();
int64_t function_4c03a0();
int64_t function_4c0600();
int64_t function_4c0b00();
int64_t function_4c0c90();
int64_t function_4c0cae(int64_t a1);
int64_t function_4c14ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c14c0(void);
int64_t function_6136146b();
int64_t function_7231223f();
int64_t function_77c3d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_77c46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_77c92(void);
int64_t function_77ca0(void);
int64_t function_77cd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_77ced(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_77d5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_77d7f(void);
int64_t function_77e37(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_77e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_77e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_77ef0(void);
int64_t function_77f38(int64_t a1);
int64_t function_77f49(void);
int64_t function_77f61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_77f6c(void);
int64_t function_77f96(void);
int64_t function_7823d(void);
int64_t function_78240(void);
int64_t function_78242(int64_t a1);
int64_t function_78252(int64_t a1);
int64_t function_78262(int64_t a1);
int64_t function_c6d58();
int64_t unknown_ffffffffefb1afbd();

// Address range: 0x77c3d - 0x77c45
int64_t function_77c3d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x77c3d
    int64_t result; // 0x77c3d
    int64_t v1 = result;
    *(int32_t *)(v1 - 26) = (int32_t)v1;
    __asm_out(81, (char)result);
    return result;
}

// Address range: 0x77c46 - 0x77c92
int64_t function_77c46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    char v1 = *(char *)(a3 + 78); // 0x77c46
    bool v2; // 0x77c46
    int64_t v3 = v2 ? -4 : 4; // 0x77c4a
    int32_t * v4 = (int32_t *)(__asm_int1(v3 + a1, a2 & -256 | (int64_t)(v1 ^ (char)a2)) + 33); // 0x77c4c
    *v4 = 2 * *v4;
    int64_t v5; // 0x77c46
    int64_t result = v5 & 0xffffffff; // 0x77c82
    if (v5 != __readfsqword(40)) {
        // 0x77c84
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x77c89
    return result;
}

// Address range: 0x77c92 - 0x77c93
int64_t function_77c92(void) {
    // 0x77c92
    int64_t result; // 0x77c92
    return result;
}

// Address range: 0x77ca0 - 0x77cc8
int64_t function_77ca0(void) {
    // 0x77ca0
    __readfsqword(40);
    return function_36eb58();
}

// Address range: 0x77cd5 - 0x77ce7
int64_t function_77cd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x77cd5
    bool v1; // 0x77cd5
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x77cd5
    unknown_ffffffffefb1afbd(v2);
    int64_t v3; // 0x77cd5
    if ((char)v3 < (char)v3) {
        function_77c92();
    }
    char * v4 = (char *)(4 * v3 + 89 + v2); // 0x77cdd
    *v4 = *v4 + (char)a4;
    return function_7231223f();
}

// Address range: 0x77ced - 0x77d0e
int64_t function_77ced(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x77ced
    bool v1; // 0x77ced
    int64_t v2 = (int64_t)v1 & 0xffffff00; // 0x77cef
    char * v3 = (char *)(v2 | (int64_t)*(char *)0x7c7d501bd700f5ff); // 0x77cf8
    *v3 = *v3 | (char)a3;
    *(char *)a5 = __asm_insb((int16_t)a3);
    return v2 | (int64_t)__asm_in_133(-99);
}

// Address range: 0x77d5a - 0x77d66
int64_t function_77d5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x77d5a
    *(int32_t *)(2 * a1 + 0x5f800807 + a3) = (int32_t)a4;
    return function_3dba7519();
}

// Address range: 0x77d7f - 0x77d84
int64_t function_77d7f(void) {
    // 0x77d7f
    return function_1f38d8e3();
}

// Address range: 0x77e37 - 0x77e52
int64_t function_77e37(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x77e37
    int64_t v1; // 0x77e37
    *(char *)a1 = 2 * (char)v1;
    int64_t v2 = v1 & 0xf007ef1d | 0xff810e2; // 0x77e3a
    char * v3 = (char *)(a3 - 0x5a070294); // 0x77e3f
    unsigned char v4 = (char)(a4 / 256); // 0x77e3f
    *v3 = *v3 & v4;
    int32_t v5 = *(int32_t *)(v2 - 0x30aa25e2); // 0x77e47
    return (int32_t)v2 + (int32_t)(-1 - (char)a4 < v4) - v5;
}

// Address range: 0x77e80 - 0x77e8b
int64_t function_77e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 87); // 0x77e83
    *v1 = -*v1;
    int32_t * v2 = (int32_t *)((a3 & -0xff01 | (int64_t)&g8) + 11); // 0x77e86
    *v2 = *v2 ^ (int32_t)a1;
    int64_t result; // 0x77e80
    return result;
}

// Address range: 0x77e90 - 0x77eee
int64_t function_77e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x77e90
    int64_t v1; // 0x77e90
    int32_t v2 = v1;
    *(int32_t *)v1 = v2 & 0x21af39ec;
    int32_t * v3 = (int32_t *)(a1 + 0x5c65fc41); // 0x77e9f
    *v3 = *v3 & v2;
    *(int32_t *)(v1 + 20) = 0;
    int64_t result = v1 & 0xffffffff; // 0x77ede
    if (*(int64_t *)(v1 + 288) != __readfsqword(40)) {
        // 0x77ee0
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x77ee5
    return result;
}

// Address range: 0x77ef0 - 0x77f18
int64_t function_77ef0(void) {
    // 0x77ef0
    __readfsqword(40);
    return function_372f52();
}

// Address range: 0x77f38 - 0x77f3a
int64_t function_77f38(int64_t a1) {
    // 0x77f38
    int64_t result; // 0x77f38
    return result;
}

// Address range: 0x77f49 - 0x77f4a
int64_t function_77f49(void) {
    // 0x77f49
    int64_t result; // 0x77f49
    return result;
}

// Address range: 0x77f61 - 0x77f6c
int64_t function_77f61(int64_t a1, int64_t a2, int64_t a3) {
    // 0x77f61
    return function_77f49();
}

// Address range: 0x77f6c - 0x77f71
int64_t function_77f6c(void) {
    // 0x77f6c
    int64_t v1; // 0x77f6c
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x77f96 - 0x77f9e
int64_t function_77f96(void) {
    // 0x77f96
    return function_11fb2200();
}

// Address range: 0x7823d - 0x7823f
int64_t function_7823d(void) {
    // 0x7823d
    int64_t result; // 0x7823d
    return result;
}

// Address range: 0x78240 - 0x78241
int64_t function_78240(void) {
    // 0x78240
    int64_t result; // 0x78240
    return result;
}

// Address range: 0x78242 - 0x78252
int64_t function_78242(int64_t a1) {
    for (int64_t i = 0; i < 11; i++) {
        // 0x78244
        *(char *)(i + a1) = 0;
    }
    // 0x78251
    return 11;
}

// Address range: 0x78252 - 0x78262
int64_t function_78252(int64_t a1) {
    for (int64_t i = 0; i < 7; i++) {
        // 0x78254
        *(char *)(i + a1) = 0;
    }
    // 0x78261
    return 7;
}

// Address range: 0x78262 - 0x7826d
int64_t function_78262(int64_t a1) {
    // 0x78262
    *(int32_t *)a1 = 0;
    *(char *)(a1 + 4) = 0;
    int64_t result; // 0x78262
    return result;
}

// Address range: 0x1f54e8 - 0x1f55fe
int64_t function_1f54e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1f54e8
    int64_t result; // 0x1f54e8
    bool v1; // 0x1f54e8
    if (v1) {
        // 0x1f54ea
        return result;
    }
    uint32_t v2 = (int32_t)result & 0x6368000b; // 0x1f5506
    int64_t v3; // 0x1f54e8
    if (llvm_ctpop_i8((char)v2) % 2 == 0) {
        int64_t v4 = v2; // 0x1f5506
        int32_t * v5 = (int32_t *)(v4 - 127); // 0x1f550d
        *v5 = *v5 + (int32_t)a4;
        char v6 = __asm_in((int16_t)a3); // 0x1f5510
        char * v7 = (char *)(v4 & 0x63680000 | (int64_t)v6); // 0x1f5511
        *v7 = (*v7 | v6) + v6;
        v3 = a4;
    }
    // 0x1f555b
    return function_c6d58(a1, a2, a3, v3, result, result);
}

// Address range: 0x1f55fe - 0x1f5766
int64_t function_1f55fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f55fe
    int64_t v1; // bp-40, 0x1f55fe
    int64_t v2 = (int64_t)&v1; // 0x1f56c5
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1f56cd
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x1f56d9
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x1f56dd
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x1f56e0
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x1f56ef
    *v3 = a3;
    *v5 = v4;
    *v6 = v4;
    *v7 = v4;
    *v6 = *v7;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v5 = v1;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x1f5748
    v1 = v8;
    *v3 = v8;
    return function_c6d58(a1, a2, *v3, a4, a5, a6);
}

// Address range: 0x1f5766 - 0x1f58db
int64_t function_1f5766(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x1f2c16; // bp-24, 0x1f57a3
    int64_t v2 = (int64_t)&v1; // 0x1f57bc
    int64_t v3 = v2 - 8; // 0x1f57c4
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x1f57e0
    *v4 = a2;
    *v4 = v3;
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x1f5816
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x1f581e
    *v6 = a3;
    int64_t v7 = v2 - 32; // 0x1f5826
    int64_t * v8 = (int64_t *)v7; // 0x1f5826
    *v8 = v3;
    int64_t v9 = *v6; // 0x1f5836
    int64_t * v10 = (int64_t *)(v2 - 40); // 0x1f5836
    *v10 = v9;
    *v6 = v1;
    *v8 = v1;
    *v10 = v7;
    *v8 = v5;
    *(int64_t *)v3 = *v6;
    *v6 = 0x761b7000;
    *(int64_t *)(v2 + 8) = *v6;
    *v6 = v3;
    int64_t v11; // 0x1f5766
    return function_c6d58(a1, *v4, v9, v11, v11, v11);
}

// Address range: 0x1f58db - 0x1f5a29
int64_t function_1f58db(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f58db
    int64_t v1; // bp-24, 0x1f58db
    int64_t v2 = (int64_t)&v1; // 0x1f5966
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1f5980
    *v3 = 0x50f797b5;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x1f598d
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x1f5993
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x1f5993
    *v6 = v5;
    *v4 = v5;
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x1f599a
    *v7 = v5;
    int64_t v8 = v2 + 8; // 0x1f59a9
    int64_t v9 = *(int64_t *)v8; // 0x1f59a9
    *v4 = v9;
    *v6 = a3;
    *v7 = v5;
    v1 = *v4;
    *v6 = 0x572749d3;
    *v7 = v9;
    *(int64_t *)(v2 + 16) = *v6;
    int64_t v10 = *v3; // 0x1f59e9
    *v6 = v10;
    *v4 = v10;
    *v6 = v1;
    *v3 = v8;
    int64_t v11; // 0x1f58db
    return function_c6d58(a1, a2, *v6, v11, v11, v11);
}

// Address range: 0x1f5a29 - 0x1f5b5d
int64_t function_1f5a29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f5a29
    int64_t v1; // bp-40, 0x1f5a29
    int64_t v2 = (int64_t)&v1; // 0x1f5a8d
    v1 = 0x2da509e1;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1f5aa1
    *v3 = 0x277258f7;
    int64_t v4 = v2 - 16; // 0x1f5aa6
    int64_t * v5 = (int64_t *)v4; // 0x1f5ab1
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x1f5ab7
    *v3 = v6;
    *v5 = v6;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x1f5ac3
    *v3 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x1f5ad6
    *v8 = v4;
    *v5 = v6;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x1f5b09
    *v9 = *v3;
    *v8 = v7;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v5 = v1;
    int64_t v10 = *v9; // 0x1f5b3c
    v1 = v10;
    *v3 = v10;
    int64_t v11; // 0x1f5a29
    return function_c6d58(a1, a2, a3, a4, a5, v11);
}

// Address range: 0x1f5b5d - 0x1f5c8a
int64_t function_1f5b5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1f5b5d
    return function_c6d58(a1, a2, a3, 0x4571568a, a5, a6);
}

// Address range: 0x1f5ccc - 0x1f5ccf
int64_t function_1f5ccc(void) {
    // 0x1f5ccc
    int64_t result; // 0x1f5ccc
    return result;
}

// Address range: 0x1f5cd0 - 0x1f5cd6
int64_t function_1f5cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f5cd0
    int64_t result; // 0x1f5cd0
    return result;
}

// Address range: 0x1f5cdc - 0x1f5cdf
int64_t function_1f5cdc(void) {
    // 0x1f5cdc
    int64_t result; // 0x1f5cdc
    return result;
}

// Address range: 0x33750c - 0x33750d
int64_t function_33750c(void) {
    // 0x33750c
    int64_t result; // 0x33750c
    return result;
}

// Address range: 0x33750d - 0x33754e
int64_t function_33750d(int64_t a1) {
    // 0x33750d
    int64_t v1; // 0x33750d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x33750d
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_c6d58(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x33754e - 0x3376ac
int64_t function_33754e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-32, 0x3375f3
    int64_t v2 = (int64_t)&v1; // 0x33762f
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x33763f
    *v3 = a7;
    int64_t v4 = v2 + 8; // 0x337645
    *(int64_t *)v4 = a7;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x337649
    *v5 = 0x7c2f3114;
    *v3 = *v5;
    *(int64_t *)(v2 + 24) = *v5;
    *v5 = v1;
    *v3 = v2;
    *v3 = v1;
    *v5 = v4;
    return function_c6d58(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3376ac - 0x3377e8
int64_t function_3376ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3376ac
    int64_t v1; // 0x3376ac
    return function_c6d58(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x3377e8 - 0x33791c
int64_t function_3377e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3377e8
    int64_t v1; // bp-32, 0x3377e8
    int64_t v2 = (int64_t)&v1; // 0x33783b
    int64_t v3 = v2 - 8; // 0x337850
    int64_t * v4 = (int64_t *)v3; // 0x337850
    *v4 = 0x37d1de6b;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x337861
    *v5 = 0x5d60d73f;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x33786f
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x337875
    *v5 = v7;
    *v6 = v3;
    *v6 = v1;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x337895
    int64_t * v9 = (int64_t *)(v2 - 40); // 0x337898
    *v8 = 0x118dbc7d;
    *v9 = v7;
    *v4 = *v6;
    *v6 = 0x5981bc40;
    *v8 = 0xf38d5cc;
    *v9 = v1;
    *(int64_t *)(v2 + 8) = *v6;
    int64_t v10 = *v5; // 0x3378d0
    *v6 = v10;
    *v8 = v10;
    *v5 = *v4;
    *v6 = v3;
    return function_c6d58(a1, 310, a3, a4, a5, a6);
}

// Address range: 0x33791c - 0x337a74
int64_t function_33791c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33791c
    int64_t v1; // 0x33791c
    return function_c6d58(a1, a2, a3, 0x35fac884, v1, v1);
}

// Address range: 0x337a74 - 0x337be8
int64_t function_337a74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x336c72; // bp-24, 0x337abc
    int64_t v2 = (int64_t)&v1; // 0x337ac8
    int64_t v3 = v2 - 8; // 0x337ae6
    int64_t * v4 = (int64_t *)v3; // 0x337af3
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x337b0a
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x337b1f
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x337b23
    *v7 = v3;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x337b3f
    *v5 = v8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x337b57
    *v9 = v3;
    *(int64_t *)(v2 - 40) = *v7;
    *v7 = a2;
    *v9 = a4;
    *v7 = v6;
    v1 = *v5;
    *v5 = 0x72be6a5f;
    *v7 = 0x5461412c;
    *v9 = v8;
    *(int64_t *)(v2 + 16) = *v5;
    int64_t v10 = *v4; // 0x337bbb
    *v5 = v10;
    *v7 = v10;
    *v4 = v1;
    *v5 = v1;
    int64_t v11; // 0x337a74
    return function_c6d58(a1, *v7, a3, a4, 169, v11);
}

// Address range: 0x337be8 - 0x337d35
int64_t function_337be8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x337be8
    int64_t v1; // 0x337be8
    return function_c6d58(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x4c0cae - 0x4c10ab
int64_t function_4c0cae(int64_t a1) {
    // 0x4c0cae
    int64_t v1; // bp-472, 0x4c0cae
    function_4c0310(&v1);
    if ((int32_t)a1 != 0) {
        // 0x4c0fe8
        printf("  AES-GCM-%3d #%d (%s): ", 128, 0, "enc");
    }
    // 0x4c0d23
    function_4c03a0(&v1, 2, (int64_t)&g1, 128);
    int64_t str; // bp-536, 0x4c0cae
    int64_t str2; // bp-552, 0x4c0cae
    int64_t v2 = function_4c0b00(&v1, 1, 0, (int64_t)&g4, 12, (int64_t)&g3, 0, (int64_t)&g2, &str, 16, &str2); // 0x4c0e3c
    if ((int32_t)v2 == 0) {
        // 0x4c0e49
        if (memcmp(&str, &g5, 0) == 0) {
            // 0x4c0e87
            if (memcmp(&str2, &g6, 16) == 0) {
                // 0x4c0eaf
                function_4c0c90(&v1);
                if ((int32_t)a1 != 0) {
                    // 0x4c1010
                    puts("passed");
                    printf("  AES-GCM-%3d #%d (%s): ", 128, 0, "dec");
                }
                // 0x4c0ec5
                function_4c03a0(&v1, 2, (int64_t)&g1, 128);
                int64_t v3 = function_4c0b00(&v1, 0, 0, (int64_t)&g4, 12, (int64_t)&g3, 0, (int64_t)&g5, &str, 16, &str2); // 0x4c0f20
                if ((int32_t)v3 == 0) {
                    // 0x4c0f2d
                    if (memcmp(&str, &g2, 0) == 0) {
                        // 0x4c0f45
                        if (memcmp(&str2, &g6, 16) == 0) {
                            // 0x4c0f5f
                            function_4c0c90(&v1);
                            if ((int32_t)a1 != 0) {
                                // 0x4c1070
                                puts("passed");
                                return printf("  AES-GCM-%3d #%d split (%s): ", 128, 0, "enc");
                            }
                            // 0x4c0f75
                            function_4c03a0(&v1, 2, (int64_t)&g1, 128);
                            int64_t v4 = function_4c0600(&v1, 1, (int64_t)&g4, 12, (int64_t)&g3, 0); // 0x4c0fb4
                            // 0x4c0fc8
                            return (int32_t)v4 == 0 ? v4 : 1;
                        }
                    }
                }
            }
        }
    }
    // 0x4c1048
    if ((int32_t)a1 != 0) {
        // 0x4c1057
        puts("failed");
    }
    // 0x4c0fc8
    return 1;
}

// Address range: 0x4c14ae - 0x4c14b6
int64_t function_4c14ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c14ae
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_6136146b();
}

// Address range: 0x4c14c0 - 0x4c14c8
int64_t function_4c14c0(void) {
    // 0x4c14c0
    return (int64_t)&g7;
}
