/*
 * Targeted RetDec C for native executable gap queue batch 1443.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x15a713-0x15a913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15a913-0x15ab13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15ab13-0x15ad13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15ad13-0x15af13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15af13-0x15b113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15b113-0x15b313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15b313-0x15b513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15b513-0x15b5b2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52ec97-0x52ee97 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52ee97-0x52f097 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52f097-0x52f297 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52f297-0x52f497 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52f497-0x52f697 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52f697-0x52f897 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52f897-0x52fa97 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52fa97-0x52fb30 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g27;
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

int64_t function_15a713(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15a79c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15a936(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15aa90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15abe4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15ad78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15af51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15b096(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15b1c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15b2fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15b43b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20540();
int64_t function_208a0();
int64_t function_4eeb50();
int64_t function_52b020();
int64_t function_52ec97(void);
int64_t function_52ece1(void);
int64_t function_52ecf0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52ed2a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52ed76(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52edc6(void);
int64_t function_52ee10(int64_t a1);
int64_t function_52ee40(int64_t result, int64_t a2, int64_t a3);
int64_t function_52f110(int64_t a1, int64_t a2);
int64_t function_52f20a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52f256(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52f2a6(void);
int64_t function_52f2f0(int64_t a1);
int64_t function_52f320(int64_t result, int64_t a2, int64_t a3);
int64_t function_52f5f0(int64_t a1, int64_t a2);
int64_t function_52fad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_52fae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_52faf0(int64_t a1, int64_t a2);
int64_t function_52fb10(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52fb20(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_542470();
int64_t function_54c860();
int64_t function_565970();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_56a0d0();
int64_t function_56a740();
int64_t function_56adb0();
int64_t function_56aeb0();
int64_t function_cdc60();

// Address range: 0x15a713 - 0x15a79c
int64_t function_15a713(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15a713
    int64_t v1; // 0x15a713
    return function_cdc60(a1, a2, a3, a4, v1, v1, 0x653fb026);
}

// Address range: 0x15a79c - 0x15a936
int64_t function_15a79c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x151206; // bp-24, 0x15a805
    int64_t v2 = (int64_t)&v1; // 0x15a810
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x15a83c
    int64_t v4; // 0x15a79c
    *v3 = v4 * (int64_t)&g26;
    int64_t v5 = v2 - 16; // 0x15a840
    int64_t * v6 = (int64_t *)v5; // 0x15a840
    *v6 = 0x5677371;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x15a845
    *v7 = 0x5e14430a;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x15a855
    int64_t v9 = *(int64_t *)(v2 + 16); // 0x15a85b
    *v7 = v9;
    *v8 = v5;
    int64_t v10 = *v3; // 0x15a881
    *v8 = v10;
    int64_t * v11 = (int64_t *)(v2 - 48); // 0x15a888
    *v11 = v10;
    *(int64_t *)(v2 - 40) = v9;
    *v6 = *v8;
    *v8 = a4;
    *v11 = a1;
    *v8 = v10;
    *(int64_t *)(v2 + 8) = *v7;
    *v7 = *v6;
    *v8 = v5;
    *v7 = *v6;
    *v8 = v5;
    return function_cdc60(a1, a2, a3, *v8, v4, v4, v1);
}

// Address range: 0x15a936 - 0x15aa90
int64_t function_15a936(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15a936
    int64_t v1; // bp-40, 0x15a936
    v1 = (int64_t)&v1;
    int64_t v2; // bp-56, 0x15a936
    int64_t v3 = (int64_t)&v2; // 0x15aa43
    v2 = v3;
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x15aa4c
    *v4 = a1;
    *(int64_t *)(v3 + 32) = v2;
    int64_t * v5 = (int64_t *)(v3 + 8); // 0x15aa53
    int64_t v6 = *v5; // 0x15aa53
    v2 = v6;
    *v4 = v6;
    v2 = *(int64_t *)(v3 + 16);
    *v5 = v3 + 24;
    int64_t v7; // 0x15a936
    return function_cdc60(a1, a2, a3, a4, a5, v7, a6);
}

// Address range: 0x15aa90 - 0x15abe4
int64_t function_15aa90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15aa90
    int64_t v1; // 0x15aa90
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x151afc);
}

// Address range: 0x15abe4 - 0x15ad78
int64_t function_15abe4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15abe4
    int64_t v1; // 0x15abe4
    return function_cdc60(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x15ad78 - 0x15af51
int64_t function_15ad78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x151f8e; // bp-32, 0x15ae45
    int64_t v2 = (int64_t)&v1; // 0x15ae7e
    int64_t v3 = v2 - 8; // 0x15ae86
    int64_t * v4 = (int64_t *)v3; // 0x15ae86
    *(int64_t *)(v2 - 16) = v3;
    *(int64_t *)(v2 - 24) = *v4;
    *(int64_t *)(v2 + 16) = a6;
    v1 = 0x38b259e6;
    *v4 = 310;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x15aedb
    *v5 = a4;
    *v4 = a2;
    *v5 = v2 + 24;
    int64_t v6; // 0x15ad78
    return function_cdc60(a1, a2, a3, *v5, a5, v6, v1);
}

// Address range: 0x15af51 - 0x15b096
int64_t function_15af51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15af51
    int64_t v1; // 0x15af51
    return function_cdc60(a1, a2, a3, a4, a5, v1, v1);
}

// Address range: 0x15b096 - 0x15b1c6
int64_t function_15b096(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x7b535461; // bp-40, 0x15b102
    int64_t v2 = (int64_t)&v1; // 0x15b171
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x15b1ab
    v1 = v3;
    *(int64_t *)(v2 - 8) = v3;
    int64_t v4; // 0x15b096
    return function_cdc60(a1, a2, a3, a4, v4, v4, 0x153438);
}

// Address range: 0x15b1c6 - 0x15b2fe
int64_t function_15b1c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15b1c6
    int64_t v1; // 0x15b1c6
    int64_t v2 = -0x7528acd7 * (0x100000000 * v1 >> 32) & 0xffffffff; // bp-32, 0x15b238
    int64_t v3 = (int64_t)&v2; // 0x15b2a5
    int64_t v4 = *(int64_t *)(v3 + 8); // 0x15b2e3
    v2 = v4;
    *(int64_t *)(v3 - 8) = v4;
    return function_cdc60(a1, a2, a3, a4, a5, a6, 169);
}

// Address range: 0x15b2fe - 0x15b43b
int64_t function_15b2fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15b2fe
    int64_t v1; // bp-56, 0x15b2fe
    int64_t v2 = (int64_t)&v1; // 0x15b387
    int64_t v3 = v2 + 16; // 0x15b38e
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x15b39d
    int64_t v5 = *v4; // 0x15b39d
    v1 = v5;
    bool v6; // 0x15b2fe
    *(int64_t *)(v2 + 8) = 0x4000 * (int64_t)(bool)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    int64_t * v7 = (int64_t *)v3; // 0x15b3ca
    *v4 = *v7;
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 + 24); // 0x15b3f0
    *(int64_t *)(v2 + 56) = *v8;
    *v7 = a1;
    int64_t v9 = v2 + 40; // 0x15b40b
    *v8 = v9;
    *v8 = *(int64_t *)v9;
    *v4 = v2 + 48;
    return function_cdc60(a1, a2, a3, a4, a5, a6, a6);
}

// Address range: 0x15b43b - 0x15b5b2
int64_t function_15b43b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15b43b
    int64_t v1; // bp-48, 0x15b43b
    int64_t v2 = (int64_t)&v1; // 0x15b4f4
    int64_t v3 = v2 + 16; // 0x15b4fc
    int64_t v4 = *(int64_t *)v3; // 0x15b4fc
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x15b4fc
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x15b500
    v1 = 169;
    *(int64_t *)(v2 - 24) = v4;
    *v6 = v4;
    *(int64_t *)(v2 + 24) = *v5;
    *v6 = v1;
    v1 = a1;
    int64_t v7 = v1; // 0x15b5a5
    v1 = v3;
    int64_t v8; // 0x15b43b
    return function_cdc60(v7, a2, a3, a4, v4, v8, v8);
}

// Address range: 0x52ec97 - 0x52ece1
int64_t function_52ec97(void) {
    // 0x52ec97
    function_208a0();
    __stack_chk_fail();
    function_20540();
    while (true) {
        // 0x52eca9
        int64_t v1; // 0x52ec97
        int64_t v2 = *(int64_t *)(v1 - 96); // 0x52ecb0
        if (v2 != *(int64_t *)(v1 - 136) + 16) {
            // 0x52ecbd
            function_4eeb50(v2);
        }
        int64_t v3 = *(int64_t *)*(int64_t *)(v1 - 104); // 0x52ecc6
        if (*(int64_t *)(v1 - 128) != v3) {
            // 0x52eccf
            function_4eeb50(v3);
        }
        // 0x52ecd4
        _Unwind_Resume((struct _Unwind_Exception *)&g27);
    }
}

// Address range: 0x52ece1 - 0x52ece6
int64_t function_52ece1(void) {
    // 0x52ece1
    int64_t result; // 0x52ece1
    return result;
}

// Address range: 0x52ecf0 - 0x52ed2a
// From class:    std::__cxx11::moneypunct<wchar_t, false>
// Type:          constructor
int64_t function_52ecf0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52ecf0
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g3;
    return function_56a740(a1, 0, 0);
}

// Address range: 0x52ed2a - 0x52ed76
// From class:    std::__cxx11::moneypunct<wchar_t, false>
// Type:          constructor
int64_t function_52ed2a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52ed2a
    int64_t v1; // 0x52ed2a
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g27 ^ (int32_t)&g27) & -256;
    *(int64_t *)v1 = (int64_t)&g3;
    return function_56a740(v1, 0, 0);
}

// Address range: 0x52ed76 - 0x52edc6
// From class:    std::__cxx11::moneypunct<wchar_t, false>
// Type:          constructor
int64_t function_52ed76(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x52ed76
    int64_t v1; // 0x52ed76
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g27 ^ (int32_t)&g27) & -256;
    *(int64_t *)v1 = (int64_t)&g3;
    return function_56a740(v1, (int32_t)a2, (int32_t)a3);
}

// Address range: 0x52edc6 - 0x52ee02
int64_t function_52edc6(void) {
    // 0x52edc6
    int64_t v1; // 0x52edc6
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g27 + 16); // 0x52ede3
    if (result != g16) {
        // 0x52ee00
        return result;
    }
    // 0x52edf0
    return (int64_t)*(int32_t *)(*(int64_t *)(v1 + 16) + 36);
}

// Address range: 0x52ee10 - 0x52ee32
int64_t function_52ee10(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x52ee13
    if (result != g11) {
        // 0x52ee30
        return result;
    }
    // 0x52ee20
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 40);
}

// Address range: 0x52ee40 - 0x52f102
int64_t function_52ee40(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x52ee4d
    int64_t v2 = a2; // 0x52ee6b
    int64_t v3; // 0x52ee40
    int64_t v4; // 0x52ee40
    int64_t v5; // 0x52ee40
    int64_t v6; // 0x52ee40
    int64_t v7; // bp-56, 0x52ee40
    int32_t len; // 0x52ee8c
    int64_t v8; // 0x52ee79
    if (*(int64_t *)(a2 + 32) != g18) {
        goto lab_0x52eeb5;
    } else {
        int64_t v9 = result + 16; // 0x52ee75
        v8 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        int64_t * v10 = (int64_t *)result; // 0x52ee7d
        *v10 = v9;
        v6 = a2;
        if (v8 == 0) {
            goto lab_0x52ef24;
        } else {
            char * str = (char *)v8; // 0x52ee8c
            len = strlen(str);
            int64_t v11 = len; // 0x52ee8c
            v7 = v11;
            if (len < 16) {
                if (len != 1) {
                    // 0x52ef18
                    v3 = 0;
                    v4 = v9;
                    v2 = a2;
                    v5 = v9;
                    if (len == 0) {
                        goto lab_0x52eeac;
                    } else {
                        goto lab_0x52eef3;
                    }
                } else {
                    // 0x52eea4
                    *(char *)v9 = *str;
                    v3 = v11;
                    v4 = v9;
                    v2 = a2;
                    goto lab_0x52eeac;
                }
            } else {
                int64_t v12 = function_52b020(result, &v7, 0); // 0x52eee0
                *v10 = v12;
                *(int64_t *)v9 = v7;
                v5 = v12;
                goto lab_0x52eef3;
            }
        }
    }
  lab_0x52eeb5:
    // 0x52eeb5
    if (v1 == __readfsqword(40)) {
        // 0x52eec8
        return result;
    }
    // 0x52ef1f
    __stack_chk_fail();
    v6 = v2;
    goto lab_0x52ef24;
  lab_0x52ef24:
    // 0x52ef24
    function_542470("basic_string::_M_construct null not valid");
    int64_t v13 = __readfsqword(40); // 0x52ef39
    int64_t v14 = v6; // 0x52ef57
    if (*(int64_t *)(*(int64_t *)v6 + 40) == g13) {
        int64_t wstr = *(int64_t *)(*(int64_t *)(v6 + 16) + 48); // 0x52ef64
        *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
        int64_t v15 = -4; // 0x52ef72
        if (wstr != 0) {
            // 0x52ef74
            v15 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
        }
        // 0x52ef81
        function_54c860((int64_t)"basic_string::_M_construct null not valid", wstr, v15);
        v14 = wstr;
    }
    // 0x52ef94
    if (v13 == __readfsqword(40)) {
        // 0x52eec8
        return (int64_t)"basic_string::_M_construct null not valid";
    }
    // 0x52efb4
    __stack_chk_fail();
    int64_t v16 = __readfsqword(40); // 0x52efc9
    int64_t v17 = v14; // 0x52efe7
    if (*(int64_t *)(*(int64_t *)v14 + 48) == g14) {
        int64_t wstr2 = *(int64_t *)(*(int64_t *)(v14 + 16) + 64); // 0x52eff4
        *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
        int64_t v18 = -4; // 0x52f002
        if (wstr2 != 0) {
            // 0x52f004
            v18 = 4 * (int64_t)wcslen((int32_t *)wstr2) + wstr2;
        }
        // 0x52f011
        function_54c860((int64_t)"basic_string::_M_construct null not valid", wstr2, v18);
        v17 = wstr2;
    }
    // 0x52f024
    if (v16 == __readfsqword(40)) {
        // 0x52eec8
        return (int64_t)"basic_string::_M_construct null not valid";
    }
    // 0x52f044
    __stack_chk_fail();
    int64_t v19 = __readfsqword(40); // 0x52f059
    if (*(int64_t *)(*(int64_t *)v17 + 56) == g23) {
        int64_t wstr3 = *(int64_t *)(*(int64_t *)(v17 + 16) + 80); // 0x52f084
        *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
        int64_t v20 = -4; // 0x52f092
        if (wstr3 != 0) {
            // 0x52f094
            v20 = 4 * (int64_t)wcslen((int32_t *)wstr3) + wstr3;
        }
        // 0x52f0a1
        function_54c860((int64_t)"basic_string::_M_construct null not valid", wstr3, v20);
    }
    // 0x52f0b4
    if (v19 == __readfsqword(40)) {
        // 0x52eec8
        return (int64_t)"basic_string::_M_construct null not valid";
    }
    // 0x52f0d4
    __stack_chk_fail();
    int64_t result2 = *(int64_t *)0x74735f63697361a2; // 0x52f0e3
    if (result2 != g21) {
        // 0x52eec8
        return result2;
    }
    int64_t v21 = *(int64_t *)((int64_t)"basic_string::_M_construct null not valid" + 16); // 0x52f0f0
    return (int64_t)*(int32_t *)(v21 + 96);
  lab_0x52eef3:
    // 0x52eef3
    memcpy((int64_t *)v5, (int64_t *)v8, len);
    v3 = v7;
    v4 = v5;
    v2 = v8;
    goto lab_0x52eeac;
  lab_0x52eeac:
    // 0x52eeac
    *(int64_t *)(result + 8) = v3;
    *(char *)(v4 + v3) = 0;
    goto lab_0x52eeb5;
}

// Address range: 0x52f110 - 0x52f20a
// From class:    std::__cxx11::moneypunct<wchar_t, true>
// Type:          constructor
int64_t function_52f110(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x52f114
    int64_t result = *(int64_t *)(a1 + 72); // 0x52f127
    if (result != g19) {
        // 0x52f150
        if (v1 == __readfsqword(40)) {
            // 0x52f160
            return result;
        }
    } else {
        // 0x52f134
        if (v1 == __readfsqword(40)) {
            // 0x52f14b
            return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 100);
        }
    }
    // 0x52f166
    __stack_chk_fail();
    int64_t v2 = __readfsqword(40); // 0x52f174
    int64_t result2 = *(int64_t *)(a1 + 80); // 0x52f187
    int64_t * v3; // 0x52f110
    if (result2 != g9) {
        // 0x52f1b0
        if (v2 == __readfsqword(40)) {
            // 0x52f160
            return result2;
        }
        // 0x52f1b0
        v3 = (int64_t *)(a1 + 16);
    } else {
        int64_t * v4 = (int64_t *)(a1 + 16);
        v3 = v4;
        if (v2 == __readfsqword(40)) {
            // 0x52f1ab
            return (int64_t)*(int32_t *)(*v4 + 104);
        }
    }
    // 0x52f1c6
    __stack_chk_fail();
    *v3 = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0) | ((int32_t)&g27 ^ (int32_t)&g27) & -256;
    *(int64_t *)a1 = (int64_t)&g2;
    return function_56a0d0(a1, 0, 0);
}

// Address range: 0x52f20a - 0x52f256
// From class:    std::__cxx11::moneypunct<wchar_t, true>
// Type:          constructor
int64_t function_52f20a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52f20a
    int64_t v1; // 0x52f20a
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g27 ^ (int32_t)&g27) & -256;
    *(int64_t *)v1 = (int64_t)&g2;
    return function_56a0d0(v1, 0, 0);
}

// Address range: 0x52f256 - 0x52f2a6
// From class:    std::__cxx11::moneypunct<wchar_t, true>
// Type:          constructor
int64_t function_52f256(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x52f256
    int64_t v1; // 0x52f256
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g27 ^ (int32_t)&g27) & -256;
    *(int64_t *)v1 = (int64_t)&g2;
    return function_56a0d0(v1, (int32_t)a2, (int32_t)a3);
}

// Address range: 0x52f2a6 - 0x52f2e2
int64_t function_52f2a6(void) {
    // 0x52f2a6
    int64_t v1; // 0x52f2a6
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g27 + 16); // 0x52f2c3
    if (result != g24) {
        // 0x52f2e0
        return result;
    }
    // 0x52f2d0
    return (int64_t)*(int32_t *)(*(int64_t *)(v1 + 16) + 36);
}

// Address range: 0x52f2f0 - 0x52f312
int64_t function_52f2f0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x52f2f3
    if (result != g8) {
        // 0x52f310
        return result;
    }
    // 0x52f300
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 40);
}

// Address range: 0x52f320 - 0x52f5e2
int64_t function_52f320(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x52f32d
    int64_t v2 = a2; // 0x52f34b
    int64_t v3; // 0x52f320
    int64_t v4; // 0x52f320
    int64_t v5; // 0x52f320
    int64_t v6; // 0x52f320
    int64_t v7; // bp-56, 0x52f320
    int32_t len; // 0x52f36c
    int64_t v8; // 0x52f359
    if (*(int64_t *)(a2 + 32) != g15) {
        goto lab_0x52f395;
    } else {
        int64_t v9 = result + 16; // 0x52f355
        v8 = *(int64_t *)(*(int64_t *)(a2 + 16) + 16);
        int64_t * v10 = (int64_t *)result; // 0x52f35d
        *v10 = v9;
        v6 = a2;
        if (v8 == 0) {
            goto lab_0x52f404;
        } else {
            char * str = (char *)v8; // 0x52f36c
            len = strlen(str);
            int64_t v11 = len; // 0x52f36c
            v7 = v11;
            if (len < 16) {
                if (len != 1) {
                    // 0x52f3f8
                    v3 = 0;
                    v4 = v9;
                    v2 = a2;
                    v5 = v9;
                    if (len == 0) {
                        goto lab_0x52f38c;
                    } else {
                        goto lab_0x52f3d3;
                    }
                } else {
                    // 0x52f384
                    *(char *)v9 = *str;
                    v3 = v11;
                    v4 = v9;
                    v2 = a2;
                    goto lab_0x52f38c;
                }
            } else {
                int64_t v12 = function_52b020(result, &v7, 0); // 0x52f3c0
                *v10 = v12;
                *(int64_t *)v9 = v7;
                v5 = v12;
                goto lab_0x52f3d3;
            }
        }
    }
  lab_0x52f395:
    // 0x52f395
    if (v1 == __readfsqword(40)) {
        // 0x52f3a8
        return result;
    }
    // 0x52f3ff
    __stack_chk_fail();
    v6 = v2;
    goto lab_0x52f404;
  lab_0x52f404:
    // 0x52f404
    function_542470("basic_string::_M_construct null not valid");
    int64_t v13 = __readfsqword(40); // 0x52f419
    int64_t v14 = v6; // 0x52f437
    if (*(int64_t *)(*(int64_t *)v6 + 40) == g25) {
        int64_t wstr = *(int64_t *)(*(int64_t *)(v6 + 16) + 48); // 0x52f444
        *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
        int64_t v15 = -4; // 0x52f452
        if (wstr != 0) {
            // 0x52f454
            v15 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
        }
        // 0x52f461
        function_54c860((int64_t)"basic_string::_M_construct null not valid", wstr, v15);
        v14 = wstr;
    }
    // 0x52f474
    if (v13 == __readfsqword(40)) {
        // 0x52f3a8
        return (int64_t)"basic_string::_M_construct null not valid";
    }
    // 0x52f494
    __stack_chk_fail();
    int64_t v16 = __readfsqword(40); // 0x52f4a9
    int64_t v17 = v14; // 0x52f4c7
    if (*(int64_t *)(*(int64_t *)v14 + 48) == g12) {
        int64_t wstr2 = *(int64_t *)(*(int64_t *)(v14 + 16) + 64); // 0x52f4d4
        *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
        int64_t v18 = -4; // 0x52f4e2
        if (wstr2 != 0) {
            // 0x52f4e4
            v18 = 4 * (int64_t)wcslen((int32_t *)wstr2) + wstr2;
        }
        // 0x52f4f1
        function_54c860((int64_t)"basic_string::_M_construct null not valid", wstr2, v18);
        v17 = wstr2;
    }
    // 0x52f504
    if (v16 == __readfsqword(40)) {
        // 0x52f3a8
        return (int64_t)"basic_string::_M_construct null not valid";
    }
    // 0x52f524
    __stack_chk_fail();
    int64_t v19 = __readfsqword(40); // 0x52f539
    if (*(int64_t *)(*(int64_t *)v17 + 56) == g10) {
        int64_t wstr3 = *(int64_t *)(*(int64_t *)(v17 + 16) + 80); // 0x52f564
        *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
        int64_t v20 = -4; // 0x52f572
        if (wstr3 != 0) {
            // 0x52f574
            v20 = 4 * (int64_t)wcslen((int32_t *)wstr3) + wstr3;
        }
        // 0x52f581
        function_54c860((int64_t)"basic_string::_M_construct null not valid", wstr3, v20);
    }
    // 0x52f594
    if (v19 == __readfsqword(40)) {
        // 0x52f3a8
        return (int64_t)"basic_string::_M_construct null not valid";
    }
    // 0x52f5b4
    __stack_chk_fail();
    int64_t result2 = *(int64_t *)0x74735f63697361a2; // 0x52f5c3
    if (result2 != g17) {
        // 0x52f3a8
        return result2;
    }
    int64_t v21 = *(int64_t *)((int64_t)"basic_string::_M_construct null not valid" + 16); // 0x52f5d0
    return (int64_t)*(int32_t *)(v21 + 96);
  lab_0x52f3d3:
    // 0x52f3d3
    memcpy((int64_t *)v5, (int64_t *)v8, len);
    v3 = v7;
    v4 = v5;
    v2 = v8;
    goto lab_0x52f38c;
  lab_0x52f38c:
    // 0x52f38c
    *(int64_t *)(result + 8) = v3;
    *(char *)(v4 + v3) = 0;
    goto lab_0x52f395;
}

// Address range: 0x52f5f0 - 0x52faca
// From class:    std::__cxx11::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_52f5f0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x52f5f4
    int64_t result = *(int64_t *)(a1 + 72); // 0x52f607
    int64_t v2; // 0x52f5f0
    if (result != g22) {
        // 0x52f630
        if (v1 == __readfsqword(40)) {
            // 0x52f640
            return result;
        }
    } else {
        int64_t v3 = __readfsqword(40) ^ v1; // 0x52f61d
        v2 = v3;
        if (v3 == 0) {
            // 0x52f62b
            return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 100);
        }
    }
    // 0x52f646
    __stack_chk_fail();
    int64_t v4 = __readfsqword(40); // 0x52f654
    int64_t result2 = *(int64_t *)(a1 + 80); // 0x52f667
    int64_t * v5; // 0x52f5f0
    int64_t v6; // 0x52f5f0
    if (result2 != g20) {
        // 0x52f690
        if (v4 == __readfsqword(40)) {
            // 0x52f640
            return result2;
        }
        // 0x52f690
        v5 = (int64_t *)(a1 + 16);
        v6 = v2;
    } else {
        int64_t * v7 = (int64_t *)(a1 + 16);
        int64_t v8 = __readfsqword(40) ^ v4; // 0x52f67d
        v5 = v7;
        v6 = v8;
        if (v8 == 0) {
            // 0x52f68b
            return (int64_t)*(int32_t *)(*v7 + 104);
        }
    }
    // 0x52f6a6
    __stack_chk_fail();
    *v5 = 0;
    int64_t v9 = __readfsqword(40); // 0x52f6c6
    *(int32_t *)(a1 + 8) = (int32_t)(v6 != 0);
    int64_t * v10 = (int64_t *)a1; // 0x52f6f0
    *v10 = (int64_t)&g3;
    function_56a740(a1, 0, 0);
    *v10 = (int64_t)&g4;
    bool v11; // 0x52f5f0
    int64_t v12 = v11 ? -1 : 1;
    int64_t v13 = (int64_t)&g1; // 0x52f5f0
    int64_t v14 = a2; // 0x52f715
    int64_t v15 = 2; // 0x52f715
    unsigned char v16 = *(char *)v14; // 0x52f715
    char v17 = *(char *)v13; // 0x52f715
    v14 += v12;
    char v18 = v17; // 0x52f715
    bool v19 = false; // 0x52f715
    while (v16 == v17) {
        v15--;
        v13 += v12;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v12;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = (int64_t)"POSIX"; // 0x52f71e
    int64_t v22 = a2; // 0x52f71e
    int64_t v23 = 6; // 0x52f71e
    int64_t v24 = v14; // 0x52f71e
    if ((v16 >= v20 && !v19) != v16 < v20) {
        unsigned char v25 = *(char *)v22; // 0x52f72f
        char v26 = *(char *)v21; // 0x52f72f
        v22 += v12;
        v23--;
        char v27 = v26; // 0x52f72f
        bool v28 = false; // 0x52f72f
        while (v25 == v26) {
            // 0x52f720
            v21 += v12;
            v27 = v25;
            v28 = true;
            if (v23 == 0) {
                // break -> 
                break;
            }
            v25 = *(char *)v22;
            v26 = *(char *)v21;
            v22 += v12;
            v23--;
            v27 = v26;
            v28 = false;
        }
        unsigned char v29 = v27;
        v24 = v22;
        if ((v25 >= v29 && !v28) != v25 < v29) {
            // 0x52f758
            int32_t v30; // bp-88, 0x52f5f0
            function_5679b0((int64_t *)&v30, a2, 0, v23);
            function_56a740(a1, v30, 0);
            function_5679e0((int64_t *)&v30);
            v24 = v30;
        }
    }
    int64_t result3 = __readfsqword(40) ^ v9; // 0x52f73f
    if (result3 == 0) {
        // 0x52f640
        return result3;
    }
    // 0x52f780
    __stack_chk_fail();
    function_56aeb0(a1);
    _Unwind_Resume((struct _Unwind_Exception *)&g27);
    function_565970(a1);
    _Unwind_Resume((struct _Unwind_Exception *)&g27);
    int64_t v31 = *(int64_t *)v24; // 0x52f7bb
    *(int64_t *)((int64_t)&g27 + 16) = 0;
    int64_t v32 = __readfsqword(40); // 0x52f7c6
    *(int32_t *)((int64_t)&g27 + 8) = 0;
    *(int64_t *)&g27 = (int64_t)&g3;
    function_56a740((int64_t)&g27, 0, 0);
    *(int64_t *)&g27 = (int64_t)&g4;
    int64_t v33 = (int64_t)&g1; // 0x52f5f0
    int64_t v34 = v31; // 0x52f815
    int64_t v35 = 2; // 0x52f815
    unsigned char v36 = *(char *)v34; // 0x52f815
    char v37 = *(char *)v33; // 0x52f815
    v34 += v12;
    char v38 = v37; // 0x52f815
    bool v39 = false; // 0x52f815
    while (v36 == v37) {
        v35--;
        v33 += v12;
        v38 = v36;
        v39 = true;
        if (v35 == 0) {
            // break -> 
            break;
        }
        v36 = *(char *)v34;
        v37 = *(char *)v33;
        v34 += v12;
        v38 = v37;
        v39 = false;
    }
    unsigned char v40 = v38;
    int64_t v41 = (int64_t)"POSIX"; // 0x52f81e
    int64_t v42 = v31; // 0x52f81e
    int64_t v43 = 6; // 0x52f81e
    int64_t v44 = v34; // 0x52f81e
    if ((v36 >= v40 && !v39) != v36 < v40) {
        unsigned char v45 = *(char *)v42; // 0x52f82f
        char v46 = *(char *)v41; // 0x52f82f
        v42 += v12;
        v43--;
        char v47 = v46; // 0x52f82f
        bool v48 = false; // 0x52f82f
        while (v45 == v46) {
            // 0x52f820
            v41 += v12;
            v47 = v45;
            v48 = true;
            if (v43 == 0) {
                // break -> 
                break;
            }
            v45 = *(char *)v42;
            v46 = *(char *)v41;
            v42 += v12;
            v43--;
            v47 = v46;
            v48 = false;
        }
        unsigned char v49 = v47;
        v44 = v42;
        if ((v45 >= v49 && !v48) != v45 < v49) {
            // 0x52f858
            char * v50; // bp-128, 0x52f5f0
            function_5679b0((int64_t *)&v50, v31, 0, v43);
            int64_t v51 = (int64_t)v50; // 0x52f868
            function_56a740((int64_t)&g27, (int32_t)v51, 0);
            function_5679e0((int64_t *)&v50);
            v44 = v51;
        }
    }
    int64_t result4 = __readfsqword(40) ^ v32; // 0x52f83f
    if (result4 == 0) {
        // 0x52f640
        return result4;
    }
    // 0x52f880
    __stack_chk_fail();
    function_56aeb0((int64_t)&g27);
    _Unwind_Resume((struct _Unwind_Exception *)&g27);
    function_565970((int64_t)&g27);
    _Unwind_Resume((struct _Unwind_Exception *)&g27);
    *(int64_t *)((int64_t)&g27 + 16) = 0;
    int64_t v52 = __readfsqword(40); // 0x52f8c6
    *(int32_t *)((int64_t)&g27 + 8) = 0;
    *(int64_t *)&g27 = (int64_t)&g2;
    function_56a0d0((int64_t)&g27, 0, 0);
    *(int64_t *)&g27 = (int64_t)&g5;
    int64_t v53 = (int64_t)&g1; // 0x52f5f0
    int64_t v54 = v44; // 0x52f915
    int64_t v55 = 2; // 0x52f915
    unsigned char v56 = *(char *)v54; // 0x52f915
    char v57 = *(char *)v53; // 0x52f915
    v54 += v12;
    char v58 = v57; // 0x52f915
    bool v59 = false; // 0x52f915
    while (v56 == v57) {
        v55--;
        v53 += v12;
        v58 = v56;
        v59 = true;
        if (v55 == 0) {
            // break -> 
            break;
        }
        v56 = *(char *)v54;
        v57 = *(char *)v53;
        v54 += v12;
        v58 = v57;
        v59 = false;
    }
    unsigned char v60 = v58;
    int64_t v61 = (int64_t)"POSIX"; // 0x52f91e
    int64_t v62 = v44; // 0x52f91e
    int64_t v63 = 6; // 0x52f91e
    int64_t v64 = v54; // 0x52f91e
    if ((v56 >= v60 && !v59) != v56 < v60) {
        unsigned char v65 = *(char *)v62; // 0x52f92f
        char v66 = *(char *)v61; // 0x52f92f
        v62 += v12;
        v63--;
        char v67 = v66; // 0x52f92f
        bool v68 = false; // 0x52f92f
        while (v65 == v66) {
            // 0x52f920
            v61 += v12;
            v67 = v65;
            v68 = true;
            if (v63 == 0) {
                // break -> 
                break;
            }
            v65 = *(char *)v62;
            v66 = *(char *)v61;
            v62 += v12;
            v63--;
            v67 = v66;
            v68 = false;
        }
        unsigned char v69 = v67;
        v64 = v62;
        if ((v65 >= v69 && !v68) != v65 < v69) {
            // 0x52f958
            int64_t v70; // bp-168, 0x52f5f0
            function_5679b0(&v70, v44, 0, v63);
            function_56a0d0((int64_t)&g27, (int32_t)v70, 0);
            function_5679e0(&v70);
            v64 = v70;
        }
    }
    int64_t result5 = __readfsqword(40) ^ v52; // 0x52f93f
    if (result5 == 0) {
        // 0x52f640
        return result5;
    }
    // 0x52f980
    __stack_chk_fail();
    function_56adb0((int64_t)&g27);
    _Unwind_Resume((struct _Unwind_Exception *)&g27);
    function_565970((int64_t)&g27);
    _Unwind_Resume((struct _Unwind_Exception *)&g27);
    int64_t v71 = *(int64_t *)v64; // 0x52f9bb
    *(int64_t *)((int64_t)&g27 + 16) = 0;
    int64_t v72 = __readfsqword(40); // 0x52f9c6
    *(int32_t *)((int64_t)&g27 + 8) = 0;
    *(int64_t *)&g27 = (int64_t)&g2;
    function_56a0d0((int64_t)&g27, 0, 0);
    *(int64_t *)&g27 = (int64_t)&g5;
    int64_t v73 = (int64_t)&g1; // 0x52f5f0
    int64_t v74 = v71; // 0x52fa15
    int64_t v75 = 2; // 0x52fa15
    unsigned char v76 = *(char *)v74; // 0x52fa15
    char v77 = *(char *)v73; // 0x52fa15
    v74 += v12;
    char v78 = v77; // 0x52fa15
    bool v79 = false; // 0x52fa15
    while (v76 == v77) {
        v75--;
        v73 += v12;
        v78 = v76;
        v79 = true;
        if (v75 == 0) {
            // break -> 
            break;
        }
        v76 = *(char *)v74;
        v77 = *(char *)v73;
        v74 += v12;
        v78 = v77;
        v79 = false;
    }
    unsigned char v80 = v78;
    int64_t v81 = (int64_t)"POSIX"; // 0x52fa1e
    int64_t v82 = v71; // 0x52fa1e
    int64_t v83 = 6; // 0x52fa1e
    int64_t v84 = v74; // 0x52fa1e
    if ((v76 >= v80 && !v79) != v76 < v80) {
        unsigned char v85 = *(char *)v82; // 0x52fa2f
        char v86 = *(char *)v81; // 0x52fa2f
        v82 += v12;
        v83--;
        char v87 = v86; // 0x52fa2f
        bool v88 = false; // 0x52fa2f
        while (v85 == v86) {
            // 0x52fa20
            v81 += v12;
            v87 = v85;
            v88 = true;
            if (v83 == 0) {
                // break -> 
                break;
            }
            v85 = *(char *)v82;
            v86 = *(char *)v81;
            v82 += v12;
            v83--;
            v87 = v86;
            v88 = false;
        }
        unsigned char v89 = v87;
        v84 = v82;
        if ((v85 >= v89 && !v88) != v85 < v89) {
            // 0x52fa58
            int32_t v90; // bp-208, 0x52f5f0
            function_5679b0((int64_t *)&v90, v71, 0, v83);
            function_56a0d0((int64_t)&g27, v90, 0);
            function_5679e0((int64_t *)&v90);
            v84 = v90;
        }
    }
    int64_t result6 = __readfsqword(40) ^ v72; // 0x52fa3f
    if (result6 == 0) {
        // 0x52f640
        return result6;
    }
    // 0x52fa80
    __stack_chk_fail();
    function_56adb0((int64_t)&g27);
    _Unwind_Resume((struct _Unwind_Exception *)&g27);
    function_565970((int64_t)&g27);
    _Unwind_Resume((struct _Unwind_Exception *)&g27);
    *(int32_t *)((int64_t)&g27 + 8) = (int32_t)(v84 != 0) | ((int32_t)&g27 ^ (int32_t)&g27) & -256;
    *(int64_t *)&g27 = (int64_t)&g6;
    return (int64_t)&g6;
}

// Address range: 0x52fad0 - 0x52fadd
int64_t function_52fad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x52fad0
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x52fae0 - 0x52faed
int64_t function_52fae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x52fae0
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x52faf0 - 0x52fb0a
// From class:    std::__cxx11::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          constructor
int64_t function_52faf0(int64_t a1, int64_t a2) {
    // 0x52faf0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g7;
    return (int64_t)&g7;
}

// Address range: 0x52fb10 - 0x52fb19
int64_t function_52fb10(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x52fb10
    return result;
}

// Address range: 0x52fb20 - 0x52fb29
int64_t function_52fb20(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x52fb20
    return result;
}
