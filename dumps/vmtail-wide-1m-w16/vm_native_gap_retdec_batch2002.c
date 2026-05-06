/*
 * Targeted RetDec C for native executable gap queue batch 2002.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x130c0e-0x130d0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x13110e-0x13130e rank=- name=- kind=- bytes=- uncovered=-
 *   0x13130e-0x13150e rank=- name=- kind=- bytes=- uncovered=-
 *   0x137da4-0x137fa4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x137fa4-0x1381a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x138ea4-0x138fa4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x138fa4-0x1390a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13ae09-0x13b009 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13b009-0x13b209 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13d168-0x13d268 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13d268-0x13d468 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13f668-0x13f6e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13f768-0x13f868 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13f868-0x13f8e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13f968-0x13fa68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x146f13-0x146f93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x147013-0x147113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x147113-0x147313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x149113-0x149313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x149413-0x149513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14c513-0x14c713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14c713-0x14c913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14d113-0x14d213 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14d313-0x14d513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x150b13-0x150c13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x150d13-0x150f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x163b2a-0x163baa rank=- name=- kind=- bytes=- uncovered=-
 *   0x163baa-0x163caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x163caa-0x163eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16ab2a-0x16abaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16abaa-0x16acaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16acaa-0x16adaa rank=- name=- kind=- bytes=- uncovered=-
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
extern int g13;
extern int g14;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
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

int64_t function_130c0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_130cde(void);
int64_t function_130cf1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_130cfb(int64_t a1);
int64_t function_13110e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13115d(int64_t a1);
int64_t function_131195(int64_t a1);
int64_t function_131238(void);
int64_t function_13123f(void);
int64_t function_13124b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_131284(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1312c7(void);
int64_t function_1312d5(void);
int64_t function_13131d(void);
int64_t function_13133c(int64_t a1, int64_t a2);
int64_t function_131362(void);
int64_t function_131373(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1313c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_131405(int64_t a1);
int64_t function_131452(void);
int64_t function_13146c(void);
int64_t function_13147c(void);
int64_t function_1314a0(int64_t a1, int64_t a2);
int64_t function_1314c6(void);
int64_t function_1314e4(void);
int64_t function_1314f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_137da4(void);
int64_t function_137e08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_137e74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_137ed7(int64_t a1);
int64_t function_137f06(int64_t a1, int64_t a2);
int64_t function_137f57(int64_t a1);
int64_t function_137fa4(int64_t a1);
int64_t function_137fc1(void);
int64_t function_137fd7(void);
int64_t function_137fe1(void);
int64_t function_13800f(void);
int64_t function_138127(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_138160(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_138ea4(int64_t a1);
int64_t function_138ebc(void);
int64_t function_138ec7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_138f2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_138f46(void);
int64_t function_138f4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_138fe8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_13903a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_13ae09(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13ae40(void);
int64_t function_13ae73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13aef9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13af83(void);
int64_t function_13af88(void);
int64_t function_13af97(void);
int64_t function_13afa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13afd1(void);
int64_t function_13affd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13b04e(void);
int64_t function_13b073(void);
int64_t function_13b075(void);
int64_t function_13b080(void);
int64_t function_13b08c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13b183(void);
int64_t function_13b18e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13b1d2(int64_t a1);
int64_t function_13b1e6(void);
int64_t function_13d168(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13d212(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13d2ec(void);
int64_t function_13d301(int64_t a1, int64_t a2);
int64_t function_13d30a(void);
int64_t function_13d35b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13d367(void);
int64_t function_13f668(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13f695(void);
int64_t function_13f6b8(void);
int64_t function_13f6ba(void);
int64_t function_13f6c9(void);
int64_t function_13f6cf(void);
int64_t function_13f6d4(void);
int64_t function_13f71d();
int64_t function_13f768(void);
int64_t function_13f769(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_13f82c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13f857(int64_t a1);
int64_t function_13f8c6(void);
int64_t function_13f8cc(void);
int64_t function_13f953();
int64_t function_13f968(void);
int64_t function_13f96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13f98d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13f9aa(void);
int64_t function_13f9c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13f9e6(int64_t a1);
int64_t function_13fa11(int32_t a1);
int64_t function_13fa34(int64_t a1);
int64_t function_146f13(void);
int64_t function_146f66(void);
int64_t function_146fd3();
int64_t function_147013(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_147038(void);
int64_t function_14707f(int64_t a1);
int64_t function_1470fd(int64_t a1, int64_t a2);
int64_t function_147129(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14714c(void);
int64_t function_147199(int64_t a1);
int64_t function_1471a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1471c8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1490ac();
int64_t function_149113(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_149160(void);
int64_t function_149169(void);
int64_t function_149183(void);
int64_t function_14918e(void);
int64_t function_149196(void);
int64_t function_149197(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1491a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1491d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_149228(void);
int64_t function_14922b(void);
int64_t function_149244(void);
int64_t function_14924c(void);
int64_t function_14927c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_1492f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_149342();
int64_t function_149413(int64_t a1, int64_t a2);
int64_t function_14941c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_14949c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1494a8(void);
int64_t function_14950d(void);
int64_t function_14c513(void);
int64_t function_14c52f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_14c610(int64_t a1, int64_t a2);
int64_t function_14c622(void);
int64_t function_14c650(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_14c662(void);
int64_t function_14c67a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_14c755(void);
int64_t function_14c757(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14c8a1(void);
int64_t function_14d113(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_14d1ce(int64_t a1);
int64_t function_14d1dc(int64_t a1, int64_t a2);
int64_t function_14d1fa(void);
int64_t function_14d313(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14d34c(int64_t a1);
int64_t function_14d388(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14d3b4(int64_t a1);
int64_t function_14d3c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14d3f5(void);
int64_t function_14d415(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_150afa();
int64_t function_150afa2();
int64_t function_150b13(void);
int64_t function_150b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_150b4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_150b61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150ba2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150d13(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_150d4b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_150d69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150d77(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_150e26(int64_t a1);
int64_t function_150ec0(int64_t a1);
int64_t function_150ef6(int64_t a1, int64_t a2);
int64_t function_163b2a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_163b73(void);
int64_t function_163b7c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_163b9b(void);
int64_t function_163b9e(void);
int64_t function_163ba2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_163bb7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_163c4f(void);
int64_t function_163cb4(void);
int64_t function_163cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_163d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_163dbc(int64_t a1);
int64_t function_163dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_163de4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_163e9f(void);
int64_t function_16ab2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16abca(void);
int64_t function_16ac32(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16ac39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16acab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16acd1(void);
int64_t function_16acd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16ad08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16ad2f(int64_t a1);
int64_t function_16ad49(int64_t a1);
int64_t function_16ad54(void);
int64_t function_1fbdeab();
int64_t function_1feac06();
int64_t function_2e2fee();
int64_t function_3f1462f3();
int64_t function_4bf9dc8();
int64_t function_592fae2();
int64_t function_7f1533a2();
int64_t function_88bd278();
int64_t function_cc7820a();
int64_t function_e8d6ec88();
int64_t function_ffffffff8934ad81();
int64_t function_ffffffff903515cf();
int64_t function_ffffffff916c7077();
int64_t function_ffffffff9654578e();
int64_t function_ffffffffa6ec11ca();
int64_t function_ffffffffc9de2683();
int64_t function_ffffffffd513136a();
int64_t function_ffffffffe73865b2();
int64_t function_fffffffff52593bc();
int64_t unknown_151c69b();
int64_t unknown_1d05729b();
int64_t unknown_1ee6c26c();
int64_t unknown_2a1a4b4c();
int64_t unknown_2eb5ca3b();
int64_t unknown_3d967f5e();
int64_t unknown_4816478e();
int64_t unknown_49976671();
int64_t unknown_4ebdda8c();
int64_t unknown_55a09e3b();
int64_t unknown_5a9179c7();
int64_t unknown_5f0d22c9();
int64_t unknown_650eeece();
int64_t unknown_7d0cf231();
int64_t unknown_7f16e77a();
int64_t unknown_7faa625a();
int64_t unknown_87c05cd();
int64_t unknown_a90a034();
int64_t unknown_bac8dec();
int64_t unknown_cf2b019();
int64_t unknown_e30f2ee();
int64_t unknown_e93e864();
int64_t unknown_ffffffff8874ec2d();
int64_t unknown_ffffffff8cc2dbaf();
int64_t unknown_ffffffff928d84ff();
int64_t unknown_ffffffff9c146925();
int64_t unknown_ffffffff9d2f8e16();
int64_t unknown_ffffffff9e0ad288();
int64_t unknown_ffffffffa7a66146();
int64_t unknown_ffffffffabc8964e();
int64_t unknown_ffffffffad5a1790();
int64_t unknown_ffffffffafb3f76b();
int64_t unknown_ffffffffb1071f62();
int64_t unknown_ffffffffb20b4dbf();
int64_t unknown_ffffffffb43406d1();
int64_t unknown_ffffffffb453e844();
int64_t unknown_ffffffffba1ed9b4();
int64_t unknown_ffffffffbc0ea77f();
int64_t unknown_ffffffffbd16e906();
int64_t unknown_ffffffffbee115b8();
int64_t unknown_ffffffffca32ea94();
int64_t unknown_ffffffffcb0cb0ed();
int64_t unknown_ffffffffd361a1b8();
int64_t unknown_ffffffffd8c1f68d();
int64_t unknown_ffffffffe815d1c3();
int64_t unknown_ffffffffe8429d5e();
int64_t unknown_ffffffffe909f36a();
int64_t unknown_fffffffff57bc8d9();
int64_t unknown_ffffffffff2b5c39();

// Address range: 0x130c0e - 0x130cd0
int64_t function_130c0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x130c0e
    int64_t v1; // 0x130c0e
    uint64_t v2 = v1;
    int64_t v3 = v1;
    char v4 = *(char *)(a2 - 78); // 0x130c13
    int64_t v5 = 256 * (int64_t)(v4 + (char)(v2 / 256)) | v2 & -0xff01; // 0x130c13
    int32_t v6 = *(int32_t *)(v5 + (int64_t)&g13); // 0x130c20
    int32_t * v7 = (int32_t *)(a1 - 0x28c5f3f9); // 0x130c2a
    *v7 = *v7 ^ 0x2c4b6934;
    int64_t * v8 = (int64_t *)((int64_t)(-0x2d9dfec3 * v6) - 8); // 0x130c30
    *v8 = -0x1dc400f6;
    int32_t * v9 = (int32_t *)(a2 + (int64_t)&g2); // 0x130c38
    *v9 = *v9 + (int32_t)a5;
    unsigned char v10 = (char)v3; // 0x130c3e
    *v8 = a1;
    if (v10 == 43) {
        // 0x130c43
        return v3 & 0xcb18852f;
    }
    int64_t v11 = (v3 + 61 + (int64_t)(v10 < 43)) % 256 | v3 & -256; // 0x130cb5
    int32_t * v12 = (int32_t *)v11; // 0x130cb7
    *v12 = *v12 + (int32_t)v11;
    *(int32_t *)v5 = (int32_t)a1;
    int32_t * v13 = (int32_t *)(int64_t)((0x10000 * (int32_t)__asm_iretd(a1, a2, 0x2c4b6934, a4) >> 16) + 0x3c9e3ac0 | 49); // 0x130ccd
    *v13 = *v13 + 0x2c4b6934;
    return __asm_wait();
}

// Address range: 0x130cde - 0x130cdf
int64_t function_130cde(void) {
    // 0x130cde
    int64_t result; // 0x130cde
    return result;
}

// Address range: 0x130cf1 - 0x130cf6
int64_t function_130cf1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x130cf1
    int64_t result; // 0x130cf1
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x130cfb - 0x130cfc
int64_t function_130cfb(int64_t a1) {
    // 0x130cfb
    int64_t result; // 0x130cfb
    return result;
}

// Address range: 0x13110e - 0x131135
int64_t function_13110e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13110e
    int64_t v1; // 0x13110e
    __asm_out(-112, (char)v1);
    *(char *)a2 = (char)v1 - 74 + (char)unknown_ffffffff9d2f8e16();
    unknown_ffffffff9c146925();
    int64_t v2; // 0x13110e
    __asm_outsb((int16_t)a3, *(char *)&v2);
    int64_t v3; // 0x13110e
    *(char *)a3 = *(char *)&v3 | -2;
    char * v4 = (char *)(a4 - 0x4575fd81); // 0x131128
    *v4 = *v4 - (char)a3;
    return unknown_a90a034() & -26;
}

// Address range: 0x13115d - 0x131160
int64_t function_13115d(int64_t a1) {
    // 0x13115d
    int64_t v1; // 0x13115d
    return v1 & -256 | (int64_t)__asm_in_133((char)a1);
}

// Address range: 0x131195 - 0x1311a3
int64_t function_131195(int64_t a1) {
    // 0x131195
    return unknown_1d05729b(a1);
}

// Address range: 0x131238 - 0x131239
int64_t function_131238(void) {
    // 0x131238
    int64_t result; // 0x131238
    return result;
}

// Address range: 0x13123f - 0x131240
int64_t function_13123f(void) {
    // 0x13123f
    int64_t result; // 0x13123f
    return result;
}

// Address range: 0x13124b - 0x131284
int64_t function_13124b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13124b
    int64_t v1; // 0x13124b
    uint64_t v2 = v1;
    int64_t v3 = unknown_7faa625a(); // 0x13124b
    int32_t * v4 = (int32_t *)(a1 - 0x62d1ff10); // 0x131250
    *v4 = *v4 + (int32_t)a4;
    char * v5 = (char *)(a2 - 125); // 0x131257
    *v5 = *v5 + (char)v2;
    unsigned char v6 = *(char *)0x40b700687d6be10a; // 0x13125f
    uint32_t v7 = 0x10000 * (int32_t)(v3 & 0xff00 | (int64_t)v6) >> 16; // 0x13126d
    int64_t v8 = v7; // 0x13126d
    int32_t * v9 = (int32_t *)((256 * v8 + a4 & 0xff00 | a4 & -0xff01) + 8 * v8); // 0x131271
    *v9 = *v9 + (int32_t)a2;
    *(char *)0xeed47b = *(char *)0xeed47b + (char)(v2 / 256);
    int32_t v10 = v7 + 0x11de4d36; // 0x13127a
    int64_t result = v10; // 0x13127f
    if (v10 < 0 == (v10 & (v7 ^ -0x80000000)) < 0) {
        result = function_131238();
    }
    // 0x131281
    return result;
}

// Address range: 0x131284 - 0x1312c4
int64_t function_131284(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x131284
    uint32_t v3 = (int32_t)v2;
    uint32_t v4 = (int32_t)v2; // 0x13128f
    *(int32_t *)a1 = v3 - v4;
    unsigned char v5 = (char)v2; // 0x131292
    char v6 = v3 < v4; // 0x131292
    unsigned char v7 = (char)(v2 / 256) + v6; // 0x131292
    unsigned char v8 = v5 - v7; // 0x131292
    int32_t v9 = *(int32_t *)&v1; // 0x131295
    int32_t v10 = v2; // 0x131295
    int32_t v11 = v3 < v4 ? v7 != -1 | v8 - v6 > v5 : v7 > v5; // 0x131295
    int32_t v12 = v9 + v10 + v11; // 0x131295
    int32_t v13 = v12 + v11; // 0x131295
    *(int32_t *)a4 = v12;
    int64_t v14 = v2 & -256 | (int64_t)v8; // 0x1312a1
    if (v12 < 0 == ((v13 ^ v9) & (v13 ^ v10)) < 0 == (v12 != 0)) {
        v14 = function_13123f();
    }
    int64_t v15 = v14;
    *(char *)-0x5bd7556 = *(char *)-0x5bd7556 - 56;
    int32_t v16 = *(int32_t *)(8 * v2 + 0x4ac78a1c + v15); // 0x1312a9
    int64_t v17; // bp-16, 0x131284
    *(int64_t *)((int64_t)(v16 & (int32_t)(int64_t)&v17) - 8) = -0x4c0964f6;
    return ((v15 + a3) % 256 | v15 & 0xffffff00) + 0x13d5f16 & 0xffffffff;
}

// Address range: 0x1312c7 - 0x1312c8
int64_t function_1312c7(void) {
    // 0x1312c7
    int64_t result; // 0x1312c7
    return result;
}

// Address range: 0x1312d5 - 0x1312d6
int64_t function_1312d5(void) {
    // 0x1312d5
    int64_t result; // 0x1312d5
    return result;
}

// Address range: 0x13131d - 0x131325
int64_t function_13131d(void) {
    // 0x13131d
    int64_t result; // 0x13131d
    return result;
}

// Address range: 0x13133c - 0x131348
int64_t function_13133c(int64_t a1, int64_t a2) {
    // 0x13133c
    int64_t v1; // 0x13133c
    uint64_t v2 = v1;
    int64_t result; // 0x13133c
    bool v3; // 0x13133c
    if (!v3) {
        result = function_1312d5();
    }
    // 0x131342
    *(char *)v2 = (char)(v2 / 256) + (char)v2;
    return result;
}

// Address range: 0x131362 - 0x131363
int64_t function_131362(void) {
    // 0x131362
    int64_t result; // 0x131362
    return result;
}

// Address range: 0x131373 - 0x131397
int64_t function_131373(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x131373
    int64_t result; // 0x131373
    bool v1; // 0x131373
    if (a4 == 1 || v1) {
        // 0x131375
        return result;
    }
    char * v2 = (char *)(result + 0x78bbcaaf); // 0x131385
    *v2 = *v2 ^ (char)result;
    int64_t v3; // 0x131373
    return a3 & 0xffffff00 | (int64_t)*(char *)&v3;
}

// Address range: 0x1313c9 - 0x1313d1
int64_t function_1313c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1313c9
    int64_t result; // 0x1313c9
    return result;
}

// Address range: 0x131405 - 0x13140e
int64_t function_131405(int64_t a1) {
    // 0x131405
    int64_t result; // 0x131405
    return result;
}

// Address range: 0x131452 - 0x131456
int64_t function_131452(void) {
    // 0x131452
    int64_t v1; // 0x131452
    return v1 & 0xffffffff;
}

// Address range: 0x13146c - 0x131471
int64_t function_13146c(void) {
    // 0x13146c
    return function_ffffffff903515cf();
}

// Address range: 0x13147c - 0x13147d
int64_t function_13147c(void) {
    // 0x13147c
    int64_t result; // 0x13147c
    return result;
}

// Address range: 0x1314a0 - 0x1314b4
int64_t function_1314a0(int64_t a1, int64_t a2) {
    // 0x1314a0
    *(char *)0xa9bd526 = *(char *)0xa9bd526 + (char)a2;
    return function_4bf9dc8();
}

// Address range: 0x1314c6 - 0x1314c9
int64_t function_1314c6(void) {
    // 0x1314c6
    int64_t result; // 0x1314c6
    return result;
}

// Address range: 0x1314e4 - 0x1314f0
int64_t function_1314e4(void) {
    // 0x1314e4
    int64_t result; // 0x1314e4
    bool v1; // 0x1314e4
    if (!v1) {
        result = function_13147c();
    }
    char v2 = *(char *)-0x700c1612; // 0x1314e7
    int64_t v3; // 0x1314e4
    *(char *)-0x700c1612 = v2 + (char)((uint64_t)v3 / 256);
    return result;
}

// Address range: 0x1314f0 - 0x1314f7
int64_t function_1314f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1314f0
    int64_t result; // 0x1314f0
    char * v1 = (char *)(result + 0x3cde351a); // 0x1314f0
    bool v2; // 0x1314f0
    *v1 = (char)v2 - (char)a4 + *v1;
    return result;
}

// Address range: 0x137da4 - 0x137da5
int64_t function_137da4(void) {
    // 0x137da4
    int64_t result; // 0x137da4
    return result;
}

// Address range: 0x137e08 - 0x137e71
int64_t function_137e08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x137e08
    int64_t v1; // 0x137e08
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = v1 & -256; // 0x137e0f
    int64_t v5 = v4 | v2 % 256; // 0x137e0f
    int32_t * v6 = (int32_t *)v5; // 0x137e11
    *v6 = *v6 + 61;
    int32_t * v7 = (int32_t *)(a1 - 79); // 0x137e14
    uint32_t v8 = *v7; // 0x137e14
    uint32_t v9 = v8 + (int32_t)a3; // 0x137e14
    *v7 = v9;
    *(int32_t *)-0x316a85efef513026 = (int32_t)v5;
    if ((v9 < v8 ? 76 : 75) < (char)v2) {
        // 0x137e27
        return v4 | 242;
    }
    // 0x137e51
    unknown_3d967f5e();
    int128_t v10; // 0x137e08
    __asm_movups(*(int128_t *)&v3, v10);
    int64_t result = unknown_ffffffffe909f36a(); // 0x137e64
    *(int32_t *)-0x6be9f190 = *(int32_t *)-0x6be9f190 + (int32_t)a1;
    return result;
}

// Address range: 0x137e74 - 0x137e7a
int64_t function_137e74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(4 * a3 + a1); // 0x137e76
    int64_t result; // 0x137e74
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x137ed7 - 0x137edb
int64_t function_137ed7(int64_t a1) {
    // 0x137ed7
    int64_t result; // 0x137ed7
    return result;
}

// Address range: 0x137f06 - 0x137f18
int64_t function_137f06(int64_t a1, int64_t a2) {
    // 0x137f06
    return a2 & 0xffffff00 | (int64_t)*(char *)-0x1715bf07710d3f79;
}

// Address range: 0x137f57 - 0x137f6a
int64_t function_137f57(int64_t a1) {
    int64_t v1 = -0x362731b6; // bp-8, 0x137f57
    int64_t v2; // 0x137f57
    int32_t * v3 = (int32_t *)(v2 + 0x4994320a); // 0x137f61
    *v3 = *v3 + (int32_t)(int64_t)&v1;
    int64_t v4; // 0x137f57
    return (int64_t)(*(int32_t *)&v4 & (int32_t)v2);
}

// Address range: 0x137fa4 - 0x137faa
int64_t function_137fa4(int64_t a1) {
    // 0x137fa4
    int64_t result; // 0x137fa4
    return result;
}

// Address range: 0x137fc1 - 0x137fc2
int64_t function_137fc1(void) {
    // 0x137fc1
    int64_t result; // 0x137fc1
    return result;
}

// Address range: 0x137fd7 - 0x137fd9
int64_t function_137fd7(void) {
    // 0x137fd7
    return function_137fc1();
}

// Address range: 0x137fe1 - 0x137fe6
int64_t function_137fe1(void) {
    // 0x137fe1
    return function_3f1462f3();
}

// Address range: 0x13800f - 0x138010
int64_t function_13800f(void) {
    // 0x13800f
    int64_t result; // 0x13800f
    return result;
}

// Address range: 0x138127 - 0x138158
int64_t function_138127(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff8874ec2d(); // 0x138127
    int32_t * v2 = (int32_t *)(a3 + 0x4501e8f9); // 0x13812f
    uint32_t v3 = *v2; // 0x13812f
    bool v4; // 0x138127
    int32_t v5 = v4; // 0x13812f
    int64_t v6; // 0x138127
    uint32_t v7 = v5 + (int32_t)v6; // 0x13812f
    int32_t v8 = v3 - v7; // 0x13812f
    *v2 = v8;
    char * v9 = (char *)(v6 - 0x50ca0100); // 0x138135
    *v9 = *v9 - 24 + (char)(v4 ? v7 != -1 | v3 < v8 - v5 : v3 < v7);
    __asm_iretd(a1, a4, v6 + a3 & 0xffffffff, 0x7192c910);
    int64_t result = unknown_ffffffffabc8964e(); // 0x138148
    if ((char)v1 == -14) {
        // 0x1381ba
        return result;
    }
    // 0x13814f
    return __asm_wait();
}

// Address range: 0x138160 - 0x138168
int64_t function_138160(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x138160
    int64_t result; // 0x138160
    return result;
}

// Address range: 0x138ea4 - 0x138ea5
int64_t function_138ea4(int64_t a1) {
    // 0x138ea4
    int64_t result; // 0x138ea4
    return result;
}

// Address range: 0x138ebc - 0x138ebd
int64_t function_138ebc(void) {
    // 0x138ebc
    int64_t result; // 0x138ebc
    return result;
}

// Address range: 0x138ec7 - 0x138ef0
int64_t function_138ec7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x138ec7
    unknown_87c05cd();
    int64_t result = unknown_e30f2ee(); // 0x138ee7
    int64_t v1; // 0x138ec7
    *(int64_t *)v1 = -12;
    return result;
}

// Address range: 0x138f2e - 0x138f3c
int64_t function_138f2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x138f2e
    int64_t v1; // 0x138f2e
    int64_t v2 = v1;
    char * v3 = (char *)(v1 - 82); // 0x138f2e
    *v3 = *v3 | (char)a4;
    return 257 * v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x138f46 - 0x138f47
int64_t function_138f46(void) {
    // 0x138f46
    int64_t result; // 0x138f46
    return result;
}

// Address range: 0x138f4b - 0x138f6d
int64_t function_138f4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x138f4b
    int64_t v1; // 0x138f4b
    int64_t result = v1 & -0xff01 | (int64_t)&g1; // 0x138f4e
    bool v2; // 0x138f4b
    if (a4 != 1 && !v2) {
        result = function_138f46();
    }
    int32_t * v3 = (int32_t *)(a4 + 0x58c723ca); // 0x138f52
    *v3 = *v3 + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a2 + 0x4beb3547); // 0x138f58
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x138fe8 - 0x13903a
int64_t function_138fe8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x138fe8
    int64_t v1; // 0x138fe8
    int64_t v2 = v1 & 0xffffffff | a4 % 256; // 0x138ff1
    __asm_out_134((int16_t)a3, (int32_t)((a2 + 235) % 256 | a2 & 0xffffff00));
    *(int32_t *)(v2 - 72) = (int32_t)v2;
    int64_t v3 = __asm_int3(a1); // 0x138ffd
    __asm_out(-78, (char)v3);
    int64_t v4 = v3 & 0x74340094 | (int64_t)&g14; // 0x13900b
    __asm_out_135(42, (int32_t)v4);
    int64_t v5 = v4 + 0x99fc0ff & 0xffffffff; // 0x13901f
    int64_t v6; // 0x138fe8
    int64_t v7 = (int64_t)&v6; // 0x13901f
    *(int64_t *)(v5 - 8) = -0x4d2a09c8;
    *(int64_t *)(v5 - 16) = v7;
    *(int64_t *)(v5 - 24) = 0x2d4ccc99;
    unsigned char v8 = *(char *)((v7 & 248) + (v1 & -0xff01 | (int64_t)&g5)); // 0x13902b
    *(int32_t *)-0x3868fec2af05ff34 = (int32_t)(v7 & 0xffffff00 | (int64_t)v8);
    return __asm_wait();
}

// Address range: 0x13903a - 0x139067
int64_t function_13903a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 + 0x1e80900 + 4 * a3); // 0x13903a
    *v1 = *v1 ^ (char)(a4 / 256);
    int64_t v2; // 0x13903a
    int64_t v3 = v2 & 0x75d6afd5; // 0x139041
    *(char *)a3 = (char)a4;
    __asm_out(-104, (char)v3);
    int64_t v4 = a4 - 1; // 0x139054
    __asm_iretd(a1, v3 + 20, a3, v4);
    int64_t result = a3 & 0xffffffff; // 0x139057
    char v5 = result; // 0x139058
    unsigned char v6 = v5 + 22; // 0x139058
    result = result & -256 | (int64_t)v6;
    while ((v6 & (v5 ^ -128)) < 0) {
        // 0x139058
        v5 = result;
        v6 = v5 + 22;
        result = result & -256 | (int64_t)v6;
    }
    uint32_t v7 = (int32_t)v4 % 32; // 0x13905f
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)result; // 0x13905f
        uint32_t v9 = *v8; // 0x13905f
        *v8 = v9 >> 32 - v7 | v9 << v7;
    }
    return result;
}

// Address range: 0x13ae09 - 0x13ae11
int64_t function_13ae09(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13ae09
    int64_t v1; // 0x13ae09
    int32_t * v2 = (int32_t *)(4 * a4 - 4 + v1); // 0x13ae09
    *v2 = *v2 + (int32_t)a3;
    char * v3 = (char *)(a2 + 12); // 0x13ae0d
    *v3 = *v3 + (char)a3;
    int64_t v4; // 0x13ae09
    return v1 & -256 | (int64_t)*(char *)&v4;
}

// Address range: 0x13ae40 - 0x13ae41
int64_t function_13ae40(void) {
    // 0x13ae40
    int64_t result; // 0x13ae40
    return result;
}

// Address range: 0x13ae73 - 0x13aec5
int64_t function_13ae73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13ae73
    int64_t v1; // 0x13ae73
    int64_t result = v1;
    int64_t v2 = a2 + a1 & 0xffffffff; // 0x13ae73
    char v3 = result; // 0x13ae75
    char v4 = *(char *)v2; // 0x13ae75
    if (((v3 - v4 ^ v3) & (v4 ^ v3)) >= 0) {
        // 0x13ae78
        return result;
    }
    // 0x13aea1
    bool v5; // 0x13ae73
    *(int32_t *)((v5 ? -1 : 1) + v2) = (int32_t)result;
    char v6 = *(char *)0x278a67bd; // 0x13aeb6
    *(char *)0x278a67bd = v6 + (char)((uint64_t)v1 / 256);
    return (result & 0x5b6a038f) + 0x21046f0b + (int64_t)((result & 256) != 0);
}

// Address range: 0x13aef9 - 0x13af7c
int64_t function_13aef9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = unknown_ffffffff928d84ff(); // 0x13aefe
    int32_t v2 = v1 + 0x27013d00; // 0x13aefe
    int64_t v3 = v2; // 0x13aefe
    if (v2 < 0 == (v2 & (v1 ^ -0x80000000)) < 0 != v2 != 0) {
        int64_t v4 = v3 ^ 145; // 0x13af08
        char * v5 = (char *)v4; // 0x13af0a
        unsigned char v6 = *v5; // 0x13af0a
        *v5 = v6 + 62;
        return v4 + 0xe52aa1e4 + (int64_t)(v6 < 194) & 0xffffffff;
    }
    char v7 = v2; // 0x13af3a
    *(char *)a1 = v7;
    bool v8; // 0x13aef9
    int64_t v9 = (v8 ? -1 : 1) + a1; // 0x13af3a
    *(char *)0x280ce44b = *(char *)0x280ce44b + (char)v9;
    unsigned char v10 = (char)a4; // 0x13af51
    unsigned char v11 = *(char *)(a4 - 23) + v10; // 0x13af51
    int64_t v12; // 0x13aef9
    int32_t * v13 = (int32_t *)(v12 + 0xa35aa2); // 0x13af57
    *v13 = *v13 + (int32_t)v9;
    char * v14 = (char *)(a3 + 21); // 0x13af6b
    *v14 = *v14 + v7;
    __readfsdword(a4 & -0x10000 | (int64_t)v11 | a4 - 256 * ((int64_t)(v11 < v10) + a3) & 0xff00);
    return v3 ^ 222;
}

// Address range: 0x13af83 - 0x13af88
int64_t function_13af83(void) {
    // 0x13af83
    return function_cc7820a();
}

// Address range: 0x13af88 - 0x13af92
int64_t function_13af88(void) {
    // 0x13af88
    unknown_4816478e();
    return function_150afa2();
}

// Address range: 0x13af97 - 0x13af9f
int64_t function_13af97(void) {
    // 0x13af97
    int64_t v1; // 0x13af97
    return v1 + 0x79da16a2 & 0xffffffff;
}

// Address range: 0x13afa3 - 0x13afcb
int64_t function_13afa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x13afa3
    int64_t v1; // 0x13afa3
    int32_t * v2 = (int32_t *)(v1 - 127); // 0x13afa6
    *v2 = *v2 + (int32_t)a1;
    char * v3 = (char *)(a2 - 0x5941930b); // 0x13afa9
    *v3 = *v3 + (char)a3;
    uint64_t v4 = __asm_wait(); // 0x13afaf
    *(int32_t *)0x2a9025ed013d0073 = (int32_t)v4;
    return v4 & -256 | (int64_t)(*(char *)(v4 % 256 + v1) + 50);
}

// Address range: 0x13afd1 - 0x13afd2
int64_t function_13afd1(void) {
    // 0x13afd1
    int64_t result; // 0x13afd1
    return result;
}

// Address range: 0x13affd - 0x13b044
int64_t function_13affd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13affd
    int64_t v1; // 0x13affd
    int32_t v2 = *(int32_t *)(v1 + 0x13d0068) + (int32_t)a1; // 0x13b000
    int64_t v3 = v2; // 0x13b000
    if (v2 >= 1) {
        // 0x13b008
        *(char *)a2 = (char)a3 + (char)a2;
        *(int32_t *)v3 = -0xdc5ff55;
        return function_13afd1();
    }
    char * v4 = (char *)(v1 + 86); // 0x13b038
    *v4 = *v4 & (char)a4;
    *(int32_t *)__asm_int3(v3) = (int32_t)v1;
    int64_t v5; // bp-8, 0x13affd
    return (int64_t)&v5;
}

// Address range: 0x13b04e - 0x13b050
int64_t function_13b04e(void) {
    // 0x13b04e
    return __asm_wait();
}

// Address range: 0x13b073 - 0x13b074
int64_t function_13b073(void) {
    // 0x13b073
    int64_t result; // 0x13b073
    return result;
}

// Address range: 0x13b075 - 0x13b076
int64_t function_13b075(void) {
    // 0x13b075
    int64_t result; // 0x13b075
    return result;
}

// Address range: 0x13b080 - 0x13b081
int64_t function_13b080(void) {
    // 0x13b080
    int64_t result; // 0x13b080
    return result;
}

// Address range: 0x13b08c - 0x13b15f
int64_t function_13b08c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13b08c
    int64_t v1; // 0x13b08c
    bool v2; // 0x13b08c
    if (v2) {
        v1 = function_13b073();
    }
    // 0x13b0e4
    int64_t v3; // 0x13b08c
    int32_t v4 = *(int32_t *)((a3 & 0xffffffc3) - 0x2c4de60b + 8 * v3); // 0x13b0e7
    uint32_t v5 = v4 + (int32_t)v1; // 0x13b0e7
    int64_t v6 = v5; // 0x13b0e7
    char * v7 = (char *)v6; // 0x13b0ef
    *v7 = *v7 + (char)a4;
    int64_t v8 = v2 ? -4 : 4; // 0x13b0f9
    int64_t v9 = v8 + a1; // 0x13b0f9
    int64_t v10 = v8 + a2; // 0x13b0f9
    uint64_t v11 = a3 & 0xffffff00; // 0x13b0fa
    char * v12 = (char *)(v11 - 0x78acff4d + (v3 & 0xffffffff)); // 0x13b0fb
    *v12 = *v12 + (char)(v3 / 256);
    int16_t v13 = v3; // 0x13b102
    int16_t v14 = (int16_t)*v7; // 0x13b102
    int16_t v15 = v13 / v14; // 0x13b102
    int64_t v16 = v3 & 0xffff0000; // 0x13b102
    int64_t v17 = 256 * (v13 % v14); // 0x13b102
    char v18 = v15; // 0x13b107
    __asm_out(49, v18);
    char v19 = *(char *)(v16 | (int64_t)(v15 % 256) | v17); // 0x13b109
    *(int32_t *)v9 = *(int32_t *)v10;
    char v20 = *(char *)(v6 + 0x7064c325); // 0x13b118
    int64_t v21 = v6 & 0xffffff00 | (int64_t)((char)v5 - v20 ^ (char)(v5 / 256)); // 0x13b11e
    *(char *)0x5fd22827 = *(char *)0x5fd22827 + (char)(v11 / 256);
    int64_t v22 = v16 | (int64_t)&g3 | (int64_t)(v19 | v18); // 0x13b127
    int32_t v23 = (int32_t)v22 + (int32_t)((v17 & 256) != 0) + *(int32_t *)v22; // 0x13b129
    int64_t v24 = v11 | 232; // 0x13b12e
    uint32_t v25 = v23 + 156;
    uint32_t v26 = 19 * *(int32_t *)v24; // 0x13b132
    char * v27 = (char *)((int64_t)v26 + 0x13d0075); // 0x13b135
    *v27 = *v27 + (char)v26;
    __asm_out_136((int16_t)v21, (char)v25);
    uint32_t v28 = *(int32_t *)v21 | (int32_t)(v9 + v8); // 0x13b13e
    int32_t * v29 = (int32_t *)(int64_t)(v25 % 256 | v23 & -256); // 0x13b140
    *v29 = *v29 | 5;
    int64_t v30 = __asm_int3((int64_t)v28); // 0x13b143
    int32_t * v31 = (int32_t *)(v21 - 109); // 0x13b147
    *v31 = *v31 + (int32_t)v24;
    __asm_out(17, (char)v30);
    uint64_t v32 = v30 + 0xe801e872; // 0x13b14f
    *(int32_t *)-0x2d1ebaa5 = *(int32_t *)-0x2d1ebaa5 + v28;
    char * v33 = (char *)(v10 + v8); // 0x13b15c
    *v33 = *v33 & (char)(v32 / 256);
    return v32 & 0xffffffff;
}

// Address range: 0x13b183 - 0x13b185
int64_t function_13b183(void) {
    // 0x13b183
    int64_t result; // 0x13b183
    return result;
}

// Address range: 0x13b18e - 0x13b198
int64_t function_13b18e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffca32ea94(a1, a2, a3, a4, a5); // 0x13b18e
    *(char *)result = (char)a4;
    int64_t v1; // 0x13b18e
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x13b1d2 - 0x13b1d5
int64_t function_13b1d2(int64_t a1) {
    // 0x13b1d2
    int64_t result; // 0x13b1d2
    return result;
}

// Address range: 0x13b1e6 - 0x13b1f1
int64_t function_13b1e6(void) {
    // 0x13b1e6
    unknown_bac8dec();
    __asm_wait();
    return function_1fbdeab();
}

// Address range: 0x13d168 - 0x13d1dd
int64_t function_13d168(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13d168
    unknown_ffffffffbc0ea77f();
    unknown_ffffffffe815d1c3();
    return 0x13472289;
}

// Address range: 0x13d212 - 0x13d2a3
int64_t function_13d212(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13d212
    unknown_cf2b019();
    __asm_hlt(a1, a2);
    int32_t v1 = __asm_in((int16_t)a3); // 0x13d219
    uint32_t v2 = (int32_t)a4; // 0x13d221
    int64_t v3; // 0x13d212
    uint32_t v4 = (int32_t)v3; // 0x13d221
    if (v2 == -v4) {
        // 0x13d240
        return 0x1000 * (int64_t)(v4 % 16 + v2 % 16 > 15) | unknown_ffffffffa7a66146() & -0xff01 | 768;
    }
    uint64_t v5 = (int64_t)*(int32_t *)(a1 - 0x1771998b + 8 * a3) * (int64_t)v1; // 0x13d21a
    *(int32_t *)a1 = (int32_t)v5;
    char * v6 = (char *)(v3 + 1 + v3); // 0x13d22b
    *v6 = *v6 ^ (char)(v5 / 0x10000000000);
    return v5 & 0xffffffff;
}

// Address range: 0x13d2ec - 0x13d2ed
int64_t function_13d2ec(void) {
    // 0x13d2ec
    int64_t result; // 0x13d2ec
    return result;
}

// Address range: 0x13d301 - 0x13d307
int64_t function_13d301(int64_t a1, int64_t a2) {
    // 0x13d301
    int64_t v1; // 0x13d301
    *(char *)a2 = (char)(v1 / 256) + (char)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x13d30a - 0x13d30d
int64_t function_13d30a(void) {
    // 0x13d30a
    int64_t result; // 0x13d30a
    return result;
}

// Address range: 0x13d35b - 0x13d365
int64_t function_13d35b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 0x57d1aade); // 0x13d35b
    int64_t v2; // 0x13d35b
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    int64_t result; // 0x13d35b
    if (a4 == 0) {
        result = function_13d2ec();
    }
    // 0x13d363
    return result;
}

// Address range: 0x13d367 - 0x13d368
int64_t function_13d367(void) {
    // 0x13d367
    int64_t result; // 0x13d367
    return result;
}

// Address range: 0x13f668 - 0x13f686
int64_t function_13f668(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13f668
    int64_t v1; // 0x13f668
    *(int32_t *)0xa71341 = *(int32_t *)0xa71341 + (int32_t)v1;
    int64_t result = v1 & 0xffff00ff | (int64_t)&g21; // 0x13f677
    *(char *)0x332000681432cc14 = (char)result;
    return result;
}

// Address range: 0x13f695 - 0x13f6a2
int64_t function_13f695(void) {
    // 0x13f695
    bool v1; // 0x13f695
    if (v1 || v1) {
        // 0x13f697
        return function_7f1533a2();
    }
    // 0x13f6e1
    int64_t result; // 0x13f695
    return result;
}

// Address range: 0x13f6b8 - 0x13f6b9
int64_t function_13f6b8(void) {
    // 0x13f6b8
    int64_t result; // 0x13f6b8
    return result;
}

// Address range: 0x13f6ba - 0x13f6bc
int64_t function_13f6ba(void) {
    // 0x13f6ba
    int64_t result; // 0x13f6ba
    return result;
}

// Address range: 0x13f6c9 - 0x13f6cb
int64_t function_13f6c9(void) {
    // 0x13f6c9
    int64_t result; // 0x13f6c9
    return result;
}

// Address range: 0x13f6cf - 0x13f6d3
int64_t function_13f6cf(void) {
    // 0x13f6cf
    int64_t result; // 0x13f6cf
    return result;
}

// Address range: 0x13f6d4 - 0x13f6e1
int64_t function_13f6d4(void) {
    uint64_t v1 = unknown_2eb5ca3b() & 0xffffffff ^ 0x8fb39da6; // 0x13f6d9
    __asm_int(115);
    int64_t v2; // 0x13f6d4
    return v1 & 0xffffff00 | (int64_t)*(char *)(v1 % 256 + v2);
}

// Address range: 0x13f768 - 0x13f769
int64_t function_13f768(void) {
    // 0x13f768
    int64_t result; // 0x13f768
    return result;
}

// Address range: 0x13f769 - 0x13f78c
int64_t function_13f769(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x13f769
    int64_t v1; // 0x13f769
    int32_t v2 = 2 * (int32_t)v1; // 0x13f76b
    *(int32_t *)v1 = v2;
    __asm_in_137(30);
    if (v2 != 0) {
        function_13f71d();
    }
    // 0x13f772
    int64_t v3; // 0x13f769
    char * v4 = (char *)(v3 + 0x6d2898d2); // 0x13f772
    *v4 = *v4 + (char)(a3 / 256);
    *(int32_t *)v3 = (int32_t)a3 & -256 | *(int32_t *)&v3 | 61;
    return function_ffffffffe73865b2();
}

// Address range: 0x13f82c - 0x13f855
int64_t function_13f82c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13f82c
    int64_t v1; // 0x13f82c
    *(char *)v1 = 0;
    int64_t v2; // 0x13f82c
    *(char *)v2 = *(char *)&v2 ^ (char)a4;
    int64_t v3 = unknown_55a09e3b(); // 0x13f835
    int32_t v4 = *(int32_t *)((a1 + 0xfec2fffe & 0xffffffff) - 0x678c8939); // 0x13f840
    return v4 | (int32_t)v3;
}

// Address range: 0x13f857 - 0x13f864
int64_t function_13f857(int64_t a1) {
    char v1 = *(char *)-0x3c135da2; // 0x13f857
    int64_t result; // 0x13f857
    *(char *)-0x3c135da2 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x13f8c6 - 0x13f8cb
int64_t function_13f8c6(void) {
    // 0x13f8c6
    return function_ffffffffa6ec11ca();
}

// Address range: 0x13f8cc - 0x13f8cd
int64_t function_13f8cc(void) {
    // 0x13f8cc
    int64_t result; // 0x13f8cc
    return result;
}

// Address range: 0x13f968 - 0x13f969
int64_t function_13f968(void) {
    // 0x13f968
    int64_t result; // 0x13f968
    return result;
}

// Address range: 0x13f96a - 0x13f985
int64_t function_13f96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13f96a
    int64_t result; // 0x13f96a
    int32_t * v1 = (int32_t *)(result - 0x3b689fcf); // 0x13f96b
    *v1 = *v1 | (int32_t)result;
    int32_t v2 = result; // 0x13f971
    __asm_out_135(63, v2);
    int32_t * v3 = (int32_t *)(a1 + 117); // 0x13f97a
    *v3 = *v3 | v2;
    return result;
}

// Address range: 0x13f98d - 0x13f9a5
int64_t function_13f98d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13f98d
    int64_t v1; // 0x13f98d
    bool v2; // 0x13f98d
    if (!v2) {
        v1 = function_13f953();
    }
    uint32_t v3 = (int32_t)a4 % 32; // 0x13f994
    if (v3 != 0) {
        uint32_t v4 = (int32_t)v1; // 0x13f994
        *(int32_t *)v1 = v4 >> 32 - v3 | v4 << v3;
    }
    return function_592fae2();
}

// Address range: 0x13f9aa - 0x13f9ab
int64_t function_13f9aa(void) {
    // 0x13f9aa
    int64_t result; // 0x13f9aa
    return result;
}

// Address range: 0x13f9c2 - 0x13f9d4
int64_t function_13f9c2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x3c0b10a3); // 0x13f9c2
    bool v2; // 0x13f9c2
    *v1 = *v1 + (int32_t)a3 + (int32_t)(bool)v2;
    return function_13fa11(*(int32_t *)(a3 + 58));
}

// Address range: 0x13f9e6 - 0x13f9e7
int64_t function_13f9e6(int64_t a1) {
    // 0x13f9e6
    int64_t result; // 0x13f9e6
    return result;
}

// Address range: 0x13fa11 - 0x13fa1c
int64_t function_13fa11(int32_t a1) {
    // 0x13fa11
    return function_13f9aa();
}

// Address range: 0x13fa34 - 0x13fa37
int64_t function_13fa34(int64_t a1) {
    // 0x13fa34
    int64_t result; // 0x13fa34
    return result;
}

// Address range: 0x146f13 - 0x146f1a
int64_t function_146f13(void) {
    // 0x146f13
    int64_t result; // 0x146f13
    return result;
}

// Address range: 0x146f66 - 0x146f6e
int64_t function_146f66(void) {
    // 0x146f66
    return unknown_1ee6c26c();
}

// Address range: 0x147013 - 0x147035
int64_t function_147013(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x147013
    int64_t v1; // 0x147013
    uint64_t v2 = v1;
    if ((int32_t)v1 >= 0x40edd01) {
        // 0x14701a
        return a2 & 0xffffffff;
    }
    int64_t v3 = function_146fd3(); // 0x14701e
    int64_t v4 = v3 & 23 | 232; // 0x147020
    int32_t * v5 = (int32_t *)((v4 | v3 & -256) + 1); // 0x147022
    *v5 = *v5 + (int32_t)v2;
    *(char *)-0x5fbb48cf = *(char *)-0x5fbb48cf + (char)(v2 / 256);
    *(char *)a1 = (char)v4;
    return __asm_in((int16_t)a3);
}

// Address range: 0x147038 - 0x147046
int64_t function_147038(void) {
    // 0x147038
    int64_t v1; // 0x147038
    return v1 & -256 | (int64_t)(*(char *)0x3313a35eedb8f096 | 127);
}

// Address range: 0x14707f - 0x147080
int64_t function_14707f(int64_t a1) {
    // 0x14707f
    int64_t result; // 0x14707f
    return result;
}

// Address range: 0x1470fd - 0x14710d
int64_t function_1470fd(int64_t a1, int64_t a2) {
    // 0x1470fd
    int64_t v1; // 0x1470fd
    int32_t * v2 = (int32_t *)(v1 + 0x65c43a70); // 0x1470ff
    *v2 = *v2 + (int32_t)v1;
    return (int64_t)*(int32_t *)(a2 + 0x1e84fee);
}

// Address range: 0x147129 - 0x147135
int64_t function_147129(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x147129
    int64_t v1; // 0x147129
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    return __asm_int3(a1);
}

// Address range: 0x14714c - 0x147156
int64_t function_14714c(void) {
    // 0x14714c
    int64_t result; // 0x14714c
    int32_t v1 = result; // 0x14714c
    uint32_t v2 = v1 >> 31; // 0x14714c
    __asm_out_135(-103, v1);
    char * v3 = (char *)(int64_t)v2; // 0x147151
    *v3 = *v3 + (char)v2;
    return result;
}

// Address range: 0x147199 - 0x14719c
int64_t function_147199(int64_t a1) {
    // 0x147199
    int64_t result; // 0x147199
    return result;
}

// Address range: 0x1471a5 - 0x1471b5
int64_t function_1471a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1471a5
    int64_t v1; // 0x1471a5
    *(int32_t *)(v1 + 8 * v1) = (int32_t)a4;
    __asm_in((int16_t)a3);
    unknown_ffffffffba1ed9b4();
    return function_e8d6ec88();
}

// Address range: 0x1471c8 - 0x1471da
int64_t function_1471c8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1471c8
    int64_t v1; // 0x1471c8
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(v2 - 0x506fe18); // 0x1471c8
    *v4 = *v4 | (int32_t)v2;
    int64_t v5; // 0x1471c8
    *(char *)a3 = *(char *)&v5 + (char)(v2 / 256);
    return (v3 + 21) % 256 | v3 & -256;
}

// Address range: 0x149113 - 0x14913a
int64_t function_149113(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x149113
    bool v3; // 0x149113
    if (v3 || v3) {
        v2 = function_1490ac();
    }
    int64_t v4 = v2 + (v3 ? 0xab008001 : 0xab008000); // 0x149116
    int32_t * v5 = (int32_t *)(2 * ((v4 + a4 / 256) % 256 | v4 & 0xffffff00)); // 0x14911d
    int64_t v6; // 0x149113
    *v5 = *v5 + (int32_t)v6;
    uint32_t v7 = (int32_t)v4 >> 31; // 0x149125
    *(char *)v1 = *(char *)&v1 + (char)(v7 / 256);
    int64_t result = unknown_7d0cf231(); // 0x14912b
    *(int32_t *)a1 = __asm_insd((int16_t)v7);
    return result;
}

// Address range: 0x149160 - 0x149161
int64_t function_149160(void) {
    // 0x149160
    int64_t result; // 0x149160
    return result;
}

// Address range: 0x149169 - 0x14916a
int64_t function_149169(void) {
    // 0x149169
    int64_t result; // 0x149169
    return result;
}

// Address range: 0x149183 - 0x14918e
int64_t function_149183(void) {
    // 0x149183
    return unknown_ffffffffd8c1f68d();
}

// Address range: 0x14918e - 0x149194
int64_t function_14918e(void) {
    // 0x14918e
    int64_t v1; // 0x14918e
    float80_t v2; // 0x14918e
    *(float64_t *)(v1 - 88) = (float64_t)v2;
    return function_149197(v1, v1, v1);
}

// Address range: 0x149196 - 0x149197
int64_t function_149196(void) {
    // 0x149196
    int64_t result; // 0x149196
    return result;
}

// Address range: 0x149197 - 0x1491a6
int64_t function_149197(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = __asm_in((int16_t)a3); // 0x149198
    int64_t v2; // 0x149197
    int32_t v3 = (char)v2 > (char)v1 ? 169 : 168; // 0x14919a
    uint32_t v4 = ((v1 - v3) % 256 | v1 & -256) + 0x535592c4; // 0x14919c
    return v4 / 2 % 128 | v4 & -256;
}

// Address range: 0x1491a7 - 0x1491d4
int64_t function_1491a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a2 - 51); // 0x1491a7
    *v2 = *v2 + (int32_t)a4;
    int64_t v3; // 0x1491a7
    unsigned char v4 = llvm_ctpop_i8((char)a1 - (char)v3); // 0x1491aa
    int64_t v5 = (int64_t)(0x7b39990f * *(int32_t *)&v1); // 0x1491ac
    int64_t v6 = unknown_ffffffffbee115b8(v5); // 0x1491b2
    if (v4 % 2 != 0) {
        // 0x1491c3
        unknown_5f0d22c9();
        __asm_iretd(v5, a2, v1, a4);
        __asm_in_138((int16_t)v1);
        return function_fffffffff52593bc();
    }
    int64_t v7 = v6 & -0xff01 | (int64_t)&g20; // 0x1491b8
    int64_t v8; // bp-8, 0x1491a7
    uint32_t v9 = (int32_t)(int64_t)&v8; // 0x1491bc
    uint32_t v10 = (int32_t)v7 + v9; // 0x1491bc
    int64_t result = v7; // 0x1491be
    if (v10 < v9 || v10 == 0) {
        result = function_149160();
    }
    // 0x1491c0
    return result;
}

// Address range: 0x1491d4 - 0x1491e8
int64_t function_1491d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x46ef0223); // 0x1491d4
    *v1 = *v1 / 2;
    int64_t v2; // 0x1491d4
    char * v3 = (char *)(v2 - 79); // 0x1491dc
    *v3 = *v3 & (char)a4;
    return function_149169();
}

// Address range: 0x149228 - 0x149229
int64_t function_149228(void) {
    // 0x149228
    int64_t result; // 0x149228
    return result;
}

// Address range: 0x14922b - 0x14922c
int64_t function_14922b(void) {
    // 0x14922b
    int64_t result; // 0x14922b
    return result;
}

// Address range: 0x149244 - 0x149245
int64_t function_149244(void) {
    // 0x149244
    int64_t result; // 0x149244
    return result;
}

// Address range: 0x14924c - 0x149255
int64_t function_14924c(void) {
    // 0x14924c
    int64_t v1; // 0x14924c
    *(char *)(v1 - 0x5d29e7fd) = 0;
    return function_149228();
}

// Address range: 0x14927c - 0x1492e5
int64_t function_14927c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a4 - 1; // 0x14927c
    int64_t v3; // 0x14927c
    bool v4; // 0x14927c
    if (v2 != 0 && !v4) {
        v3 = function_149244();
    }
    uint32_t v5 = (int32_t)v2 % 32; // 0x14927e
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(v3 - 0x2c61fe18); // 0x14927e
        *v6 = *v6 >> v5;
    }
    int32_t * v7 = (int32_t *)(a5 - 0x3c46f797); // 0x14928b
    *v7 = *v7 + (int32_t)a1;
    char v8 = *(char *)-0x25e49168 + (char)(a5 / 256); // 0x149291
    *(char *)-0x25e49168 = v8;
    int64_t v9 = v3; // 0x149297
    if (a4 != 2 && v8 != 0) {
        v9 = function_14922b();
    }
    int32_t v10 = v9; // 0x149299
    if (v10 < 0x28ee0158) {
        // 0x1492a0
        *(int32_t *)(a1 - 12) = v10 + (int32_t)a5;
        return v9 & -0xff01 | (int64_t)&g6;
    }
    int64_t v11 = v1; // 0x1492d0
    *(int32_t *)v11 = *(int32_t *)&v1 + (int32_t)v11;
    return v1 & 0xffffffff;
}

// Address range: 0x1492f3 - 0x1492fc
int64_t function_1492f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1492f3
    int64_t v1; // 0x1492f3
    *(char *)a1 = (char)(v1 / 256 | v1);
    if (a4 != 1) {
        function_149342();
    }
    // 0x1492f7
    return function_ffffffffc9de2683();
}

// Address range: 0x149413 - 0x14941a
int64_t function_149413(int64_t a1, int64_t a2) {
    // 0x149413
    int64_t result; // 0x149413
    int32_t * v1 = (int32_t *)(result - 12); // 0x149413
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x14941c - 0x14949a
int64_t function_14941c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x14941c
    int64_t v1; // 0x14941c
    *(int64_t *)v1 = -0x73ce8c00;
    *(char *)a1 = (char)v1;
    char * v2 = (char *)(v1 - 34); // 0x149427
    *v2 = *v2 + (char)(a4 / 256);
    uint64_t v3 = v1 / 256; // 0x14942f
    int64_t v4; // 0x14941c
    int64_t result = (int64_t)*(int32_t *)&v4; // 0x149431
    if ((char)(v3 || a4) == 0) {
        char * v5 = (char *)(result + 0x2595be6d); // 0x149434
        *v5 = *v5 | (char)a3;
        return result;
    }
    char * v6 = (char *)((v3 % 256 | a4) + 0x3d00c4e1); // 0x149494
    *v6 = *v6 | (char)v3;
    return result;
}

// Address range: 0x14949c - 0x1494a2
int64_t function_14949c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14949c
    int64_t result; // 0x14949c
    *(int32_t *)a2 = (int32_t)(result | result);
    int64_t v1; // 0x14949c
    *(int32_t *)a1 = *(int32_t *)&v1;
    return result;
}

// Address range: 0x1494a8 - 0x1494ab
int64_t function_1494a8(void) {
    // 0x1494a8
    int64_t result; // 0x1494a8
    return result;
}

// Address range: 0x14950d - 0x149511
int64_t function_14950d(void) {
    // 0x14950d
    __asm_int(-118);
    int64_t result; // 0x14950d
    return result;
}

// Address range: 0x14c513 - 0x14c514
int64_t function_14c513(void) {
    // 0x14c513
    int64_t result; // 0x14c513
    return result;
}

// Address range: 0x14c52f - 0x14c5ae
int64_t function_14c52f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x14c52f
    int64_t v1; // 0x14c52f
    uint64_t v2 = v1;
    int64_t v3 = v2 / 256 % 256 | v2; // 0x14c52f
    int32_t * v4 = (int32_t *)(v3 + 0x50002ab); // 0x14c533
    *v4 = *v4 + (int32_t)v3;
    bool v5; // 0x14c52f
    int64_t v6 = v5 ? -1 : 1; // 0x14c539
    uint64_t v7 = __asm_hlt(v6 + a1, v6 + a2); // 0x14c541
    int64_t result = v7 ^ 165; // 0x14c542
    *(int16_t *)a3 = (int16_t)v1;
    int64_t v8; // 0x14c52f
    *(char *)(v8 + 22 & 0xffffffff) = 0;
    uint32_t v9 = (int32_t)result; // 0x14c551
    if (v9 < 0x62c08701) {
        char v10 = *(char *)&v8; // 0x14c5a9
        return 256 * (int64_t)(v10 ^ (char)(v7 / 256)) | result & -0xff01;
    }
    int32_t * v11 = (int32_t *)(a3 + 56 + v8); // 0x14c55d
    *v11 = *v11 + v9;
    return result;
}

// Address range: 0x14c610 - 0x14c61a
int64_t function_14c610(int64_t a1, int64_t a2) {
    // 0x14c610
    int64_t v1; // 0x14c610
    __asm_pcmpgtb(v1, a2);
    return function_14c67a(a1, a2, v1, v1);
}

// Address range: 0x14c622 - 0x14c627
int64_t function_14c622(void) {
    // 0x14c622
    return function_ffffffff9654578e();
}

// Address range: 0x14c650 - 0x14c661
int64_t function_14c650(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x14c650
    int64_t result; // 0x14c650
    int64_t v1 = result;
    *(char *)v1 = (char)(result / 256) + (char)v1;
    char * v2 = (char *)(2 * a1 - 0x4219fe98 + a3); // 0x14c652
    *v2 = *v2 | (char)(a4 / 256);
    return result;
}

// Address range: 0x14c662 - 0x14c66b
int64_t function_14c662(void) {
    // 0x14c662
    return __asm_sti() & 0xe4013d00;
}

// Address range: 0x14c67a - 0x14c72e
int64_t function_14c67a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x14c67a
    int64_t v1; // 0x14c67a
    uint64_t v2 = v1;
    int64_t v3 = a2;
    uint64_t v4 = v2 / 256; // 0x14c67a
    *(int32_t *)v2 = (int32_t)v2;
    int32_t * v5 = (int32_t *)(a1 + 0x6075d6c4); // 0x14c683
    *v5 = *v5 + (int32_t)a1;
    if ((char)(v4 || v2) == 0) {
        int64_t result = unknown_151c69b(); // 0x14c695
        *(char *)-0x3e551dea = *(char *)-0x3e551dea ^ (char)(a4 / 256);
        return result;
    }
    char v6 = __asm_in_133(104); // 0x14c6ee
    char * v7 = (char *)((v4 % 256 | a4 & -256) + 0xa550bc); // 0x14c6f0
    *v7 = *v7 + (char)v4;
    char v8 = (uint64_t)v1 / 256 + a3; // 0x14c6f8
    *(char *)0x37eb6fff = *(char *)0x37eb6fff + v8;
    *(char *)v3 = *(char *)&v3 - 96;
    *(char *)0x6660a018 = *(char *)0x6660a018 + v8;
    return v2 & 0x308c7e00 | (int64_t)v6 | -0x308c7ec6;
}

// Address range: 0x14c755 - 0x14c756
int64_t function_14c755(void) {
    // 0x14c755
    int64_t result; // 0x14c755
    return result;
}

// Address range: 0x14c757 - 0x14c88f
int64_t function_14c757(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14c757
    int64_t v1; // 0x14c757
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    int64_t v5 = a3 & -0xff01; // 0x14c757
    int32_t * v6 = (int32_t *)(v3 + 0x354bc977); // 0x14c75d
    *v6 = *v6 + (int32_t)v1;
    uint32_t v7 = *(int32_t *)0x1fd83b5; // 0x14c763
    uint32_t v8 = (int32_t)v1; // 0x14c763
    bool v9; // 0x14c757
    if (v7 < v8) {
        int64_t v10 = a4 - 1; // 0x14c771
        if (v10 != 0 == v7 == v8) {
            int32_t v11 = __readfsdword(unknown_ffffffff8cc2dbaf() - 0x176757fb); // 0x14c7ae
            int32_t * v12 = (int32_t *)(4 * v4 + 0x8e351896); // 0x14c7b5
            *v12 = (int32_t)(v7 < v8) - v11 + (int32_t)v3 + *v12;
            __asm_sti();
            *(int64_t *)0x8e35188e = -29;
            return unknown_5a9179c7(v4 + (v9 ? -1 : 1));
        }
        int64_t v13 = v5 | (int64_t)"many_avx512"; // 0x14c757
        int32_t * v14 = (int32_t *)(v13 - 103); // 0x14c775
        *v14 = *v14 + (int32_t)v13;
        __asm_in_137(82);
        int64_t v15 = unknown_ffffffffad5a1790(); // 0x14c789
        char v16 = __asm_in_138((int16_t)v13); // 0x14c79a
        *(int64_t *)0x8e35188e = 256 * v10 & 0xff00 | v10;
        return v15 & -256 | (int64_t)v16;
    }
    int32_t * v17 = (int32_t *)(v2 - 0x7f60bbe6); // 0x14c7cd
    *v17 = *v17 + (int32_t)v2;
    int64_t v18; // bp-134092656, 0x14c757
    int64_t v19 = (int64_t)&v18; // 0x14c7d3
    char v20 = (char)v19 & 40; // 0x14c7da
    *(int32_t *)-0x380d3be1fe17818b = (int32_t)v19;
    *(int64_t *)0x8e35188e = v4;
    if (v20 == 0) {
        int64_t v21 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 64 * (int64_t)(v20 == 0) | 4 * (int64_t)(llvm_ctpop_i8(v20) % 2 == 0) | 2; // bp-134092664, 0x14c7ec
        int32_t * v22 = (int32_t *)(v1 + 0x31012900); // 0x14c7f2
        *v22 = *v22 + (int32_t)(int64_t)&v21;
        return 0x7635988e;
    }
    int32_t v23 = *(int32_t *)&v4; // 0x14c7d8
    float80_t v24; // 0x14c757
    *(int32_t *)(v2 - 16) = (int32_t)(v24 + (float80_t)v23);
    int32_t v25 = (256 * (int32_t)v4 & 0xe700 | -0x71cae772) - 0x3401e877; // 0x14c84c
    unsigned char v26 = *(char *)&v3; // 0x14c856
    int64_t v27 = v5 | (int64_t)"many_avx512" & -0xff01 | 256 * (int64_t)v26; // 0x14c856
    __asm_out_134((int16_t)v27, v25);
    __asm_out_135(-53, v25);
    char * v28 = (char *)v27; // 0x14c85b
    *v28 = *v28 + (char)*(int32_t *)(4 * a4 + 0x8e35188e);
    char * v29 = (char *)(unknown_e93e864() + 0x7964550a); // 0x14c863
    unsigned char v30 = *v29; // 0x14c863
    *v29 = v30 / 2 | 128 * v30;
    uint64_t v31 = unknown_49976671(); // 0x14c86b
    char * v32 = (char *)v31; // 0x14c875
    *v32 = *v32 + (char)(v31 / 256);
    int32_t * v33 = (int32_t *)(2 * (v2 / 0x4000 % 0x40000 | 0x80000 * v2 & 0xfff80000) + 0x1e8cb0a + v4); // 0x14c877
    int16_t v34; // 0x14c757
    *v33 = *v33 & (int32_t)v34;
    return v31 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x14c8a1 - 0x14c8a6
int64_t function_14c8a1(void) {
    // 0x14c8a1
    return function_ffffffff916c7077();
}

// Address range: 0x14d113 - 0x14d125
int64_t function_14d113(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x14d113
    int64_t v1; // 0x14d113
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a1;
    int64_t v2 = v1 & -234; // 0x14d115
    char * v3 = (char *)(v2 + 0x20b8000); // 0x14d117
    *v3 = *v3 + (char)v2;
    int32_t * v4 = (int32_t *)(a3 + 1); // 0x14d11f
    *v4 = *v4 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v1 & -256;
}

// Address range: 0x14d1ce - 0x14d1d5
int64_t function_14d1ce(int64_t a1) {
    // 0x14d1ce
    int64_t result; // 0x14d1ce
    return result;
}

// Address range: 0x14d1dc - 0x14d1df
int64_t function_14d1dc(int64_t a1, int64_t a2) {
    // 0x14d1dc
    int64_t result; // 0x14d1dc
    *(char *)a2 = (char)(result & result);
    return result;
}

// Address range: 0x14d1fa - 0x14d1ff
int64_t function_14d1fa(void) {
    // 0x14d1fa
    return function_88bd278();
}

// Address range: 0x14d313 - 0x14d34a
int64_t function_14d313(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14d313
    int64_t v1; // 0x14d313
    int64_t result = v1;
    bool v2; // 0x14d313
    if (v2) {
        // 0x14d339
        *(int32_t *)result = (int32_t)result;
        return result;
    }
    // 0x14d315
    return result;
}

// Address range: 0x14d34c - 0x14d34d
int64_t function_14d34c(int64_t a1) {
    // 0x14d34c
    int64_t result; // 0x14d34c
    return result;
}

// Address range: 0x14d388 - 0x14d38e
int64_t function_14d388(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14d388
    int64_t v1; // 0x14d388
    __asm_outsb((int16_t)a3, (char)v1);
    return function_ffffffffd513136a();
}

// Address range: 0x14d3b4 - 0x14d3c1
int64_t function_14d3b4(int64_t a1) {
    // 0x14d3b4
    return (int64_t)*(int32_t *)0x3a2d7382db43b42c;
}

// Address range: 0x14d3c5 - 0x14d3da
int64_t function_14d3c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14d3c5
    return __asm_in_137(0);
}

// Address range: 0x14d3f5 - 0x14d3f7
int64_t function_14d3f5(void) {
    // 0x14d3f5
    int64_t result; // 0x14d3f5
    return result;
}

// Address range: 0x14d415 - 0x14d511
int64_t function_14d415(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x14d415
    int64_t v1; // 0x14d415
    uint64_t v2 = v1;
    char v3 = *(char *)0x1f4cfa1c; // 0x14d415
    char v4 = v2 / 256; // 0x14d415
    char v5 = v3 + v4; // 0x14d415
    *(char *)0x1f4cfa1c = v5;
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0 != v5 != 0) {
        char * v6 = (char *)(v2 + 4 * a3); // 0x14d427
        *v6 = *v6 + v4;
        return v1 + a2 & 0xffffff00 | 112;
    }
    int64_t result = __asm_in_137(-120); // 0x14d46c
    int32_t * v7 = (int32_t *)(2 * result + 81); // 0x14d46e
    *v7 = *v7 + (int32_t)a3;
    return result;
}

// Address range: 0x150b13 - 0x150b1d
int64_t function_150b13(void) {
    // 0x150b13
    int64_t result; // 0x150b13
    return result;
}

// Address range: 0x150b20 - 0x150b4e
int64_t function_150b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x150b20
    int64_t v1; // 0x150b20
    int64_t v2 = v1;
    *(int32_t *)v2 = *(int32_t *)&v1 + (int32_t)v2;
    if (a4 != 1) {
        function_150afa();
    }
    // 0x150b3c
    return unknown_2a1a4b4c();
}

// Address range: 0x150b4e - 0x150b61
int64_t function_150b4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x150b4e
    int64_t result; // 0x150b4e
    int32_t * v1 = (int32_t *)(result + 103); // 0x150b4e
    *v1 = 2 * *v1;
    *(char *)-0x34e2e3fe1769fad6 = (char)result;
    char * v2 = (char *)(a3 - 0x31c5dbb3); // 0x150b5a
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x150b61 - 0x150ba1
int64_t function_150b61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(8 * a4 + 0x9cd01e8); // 0x150b61
    int64_t v2; // 0x150b61
    char v3 = v2; // 0x150b61
    *v1 = *v1 + v3;
    __asm_out(-42, v3 & -26);
    char v4 = a4; // 0x150b78
    *(char *)0x51799990 = *(char *)0x51799990 + v4;
    int64_t result = unknown_ffffffff9e0ad288(); // 0x150b82
    int32_t * v5 = (int32_t *)(a2 - 0x4564e776); // 0x150b87
    *v5 = *v5 - 0x5071900;
    char * v6 = (char *)(a4 + 0x6ddef949); // 0x150b94
    *v6 = *v6 + (char)((uint64_t)v2 / 256);
    int64_t v7; // 0x150b61
    *(char *)0xfaf8e700 = *(char *)&v7;
    char * v8 = (char *)result; // 0x150b9c
    *v8 = *v8 | v4;
    return result;
}

// Address range: 0x150ba2 - 0x150bad
int64_t function_150ba2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150ba2
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x150ba2
    return v1 & 0xb60810d7;
}

// Address range: 0x150d13 - 0x150d31
int64_t function_150d13(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x150d13
    int64_t v1; // 0x150d13
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 - 16 + v1); // 0x150d19
    *v3 = *v3 | (char)(a3 / 256);
    int64_t v4; // 0x150d13
    *(char *)a1 = *(char *)&v4 + (char)a4;
    unsigned char v5 = *(char *)0xa899c29; // 0x150d22
    unsigned char v6 = v5 + (char)(v2 / 256); // 0x150d22
    *(char *)0xa899c29 = v6;
    *(int32_t *)v2 = (int32_t)v2 + 0x2038456 + (int32_t)(v6 < v5);
    int64_t v7; // 0x150d13
    *(int32_t *)a1 = *(int32_t *)&v7;
    int64_t v8; // 0x150d13
    return a2 & 0xffff0000 | (int64_t)(*(char *)&v8 + (char)a2) | 0xf100;
}

// Address range: 0x150d4b - 0x150d4f
int64_t function_150d4b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x150d4b
    int64_t v1; // 0x150d4b
    return function_150d77(a1, a2, a3 & -256 | 93, v1);
}

// Address range: 0x150d69 - 0x150d77
int64_t function_150d69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150d69
    int64_t result; // 0x150d69
    bool v1; // 0x150d69
    *(char *)a4 = (char)result - (v1 ? 71 : 70);
    *(int32_t *)0x8fb4e013d008cc8 = (int32_t)result;
    return result;
}

// Address range: 0x150d77 - 0x150dfe
int64_t function_150d77(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 + 0x5df939a2); // 0x150d77
    *v1 = *v1 - (char)(a4 / 256);
    char * v2 = (char *)(a3 + 0x625c2b2); // 0x150d7d
    char v3 = 2 * *v2; // 0x150d7d
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x150d7d
    *v2 = v3;
    int64_t v5; // 0x150d77
    int32_t v6 = -0x67bffec3 * *(int32_t *)&v5; // 0x150d84
    int64_t result = v6; // 0x150d84
    v5 = result;
    if (v4 % 2 != 0) {
        // 0x150d8f
        return result;
    }
    int64_t v7 = (int64_t)(v6 >> 31 & -0xff01) | (int64_t)&g7; // 0x150d95
    int64_t v8 = a4; // 0x150dd4
    int64_t v9; // 0x150d77
    int64_t v10 = v9;
    int64_t v11 = result & 0xffffffff; // 0x150d9b
    uint64_t v12 = v8 / 256; // 0x150d9c
    int32_t * v13 = (int32_t *)(v11 + 0x13d0065); // 0x150d9e
    *v13 = *v13 + (int32_t)result;
    int32_t * v14 = (int32_t *)(v11 + 0x510021cf); // 0x150da4
    *v14 = (int32_t)a2;
    int64_t v15 = (int64_t)*v14; // 0x150da4
    char v16 = v12; // 0x150daa
    int64_t v17; // 0x150d77
    *(char *)(v17 - 28) = v16;
    int32_t v18 = *(int32_t *)(v7 + 96); // 0x150dad
    uint64_t v19 = 0x100000000 * ((v12 | v10) % 256 | v10 & 0xffffff00) / 0x100000000 * (int64_t)v18; // 0x150dad
    uint64_t v20 = v19 / 0x100000000; // 0x150dad
    char * v21 = (char *)(v15 - 0x1b9c5626 + 4 * v15); // 0x150db1
    *v21 = *v21 | (char)v19;
    char v22 = __asm_in_138((int16_t)v20); // 0x150db8
    char v23 = result / 256; // 0x150db9
    *(char *)-0x6f13aa40 = *(char *)-0x6f13aa40 + v23;
    char * v24 = (char *)v20; // 0x150dbf
    char v25 = *v24 + v23; // 0x150dbf
    *v24 = v25;
    int64_t v26 = (int64_t)v22 & 0xffffffff | v19 & 0xffffff00; // 0x150dc1
    int64_t v27; // 0x150d77
    int64_t v28 = *(int64_t *)v27; // 0x150dc2
    unsigned char v29 = *(char *)v28; // 0x150dc5
    int64_t v30 = v20 & 0xffffff00 | (int64_t)v29; // 0x150dc5
    v5 = v30;
    *(int64_t *)0x13d9efe004d1fa5 = v30;
    __asm_out_136((int16_t)v26, v29);
    v8--;
    while (v8 != 0 == v25 == v16) {
        int64_t v31 = __asm_iretd(a1, v28, v26, v8); // 0x150d94
        v5 = v31;
        v7 = *(int64_t *)(v27 + 8);
        v27 += 16;
        v10 = v11;
        v11 = v31 & 0xffffffff;
        v12 = v8 / 256;
        v13 = (int32_t *)(v11 + 0x13d0065);
        *v13 = *v13 + (int32_t)v31;
        v14 = (int32_t *)(v11 + 0x510021cf);
        *v14 = (int32_t)v28;
        v15 = (int64_t)*v14;
        v16 = v12;
        *(char *)(v17 - 28) = v16;
        v18 = *(int32_t *)(v7 + 96);
        v19 = 0x100000000 * ((v12 | v10) % 256 | v10 & 0xffffff00) / 0x100000000 * (int64_t)v18;
        v20 = v19 / 0x100000000;
        v21 = (char *)(v15 - 0x1b9c5626 + 4 * v15);
        *v21 = *v21 | (char)v19;
        v22 = __asm_in_138((int16_t)v20);
        v23 = v31 / 256;
        *(char *)-0x6f13aa40 = *(char *)-0x6f13aa40 + v23;
        v24 = (char *)v20;
        v25 = *v24 + v23;
        *v24 = v25;
        v26 = (int64_t)v22 & 0xffffffff | v19 & 0xffffff00;
        v28 = *(int64_t *)v27;
        v29 = *(char *)v28;
        v30 = v20 & 0xffffff00 | (int64_t)v29;
        v5 = v30;
        *(int64_t *)0x13d9efe004d1fa5 = v30;
        __asm_out_136((int16_t)v26, v29);
        v8--;
    }
    // 0x150dd6
    *(char *)0xe9d006804a30093 = v29;
    char v32 = v8 / 256; // 0x150de4
    *(char *)(v26 + 11) = v32;
    *(char *)-0x6e2ed611 = *(char *)-0x6e2ed611 + (char)v17;
    unsigned char v33 = v32 - *(char *)(v17 - 0x3897c87c); // 0x150dee
    uint64_t result2 = v5 & -256 | (int64_t)__asm_in_133(104); // 0x150df4
    char * v34 = (char *)(result2 + 0x46fc3a9a); // 0x150df6
    *v34 = *v34 + v33;
    char * v35 = (char *)(256 * (int64_t)v33 | v8 & -0xff01); // 0x150dfc
    *v35 = *v35 + (char)(result2 / 256);
    return result2;
}

// Address range: 0x150e26 - 0x150e29
int64_t function_150e26(int64_t a1) {
    // 0x150e26
    int64_t result; // 0x150e26
    return result;
}

// Address range: 0x150ec0 - 0x150ec7
int64_t function_150ec0(int64_t a1) {
    // 0x150ec0
    int64_t result; // 0x150ec0
    return result;
}

// Address range: 0x150ef6 - 0x150efd
int64_t function_150ef6(int64_t a1, int64_t a2) {
    // 0x150ef6
    int64_t v1; // 0x150ef6
    return v1 & 0x710d01e8;
}

// Address range: 0x163b2a - 0x163b39
int64_t function_163b2a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x163b2a
    int64_t result; // 0x163b2a
    *(int32_t *)a3 = (int32_t)result + (int32_t)a1;
    char * v1 = (char *)(result + 12); // 0x163b31
    *v1 = *v1 - (char)(a4 / 256);
    return result;
}

// Address range: 0x163b73 - 0x163b74
int64_t function_163b73(void) {
    // 0x163b73
    int64_t result; // 0x163b73
    return result;
}

// Address range: 0x163b7c - 0x163b82
int64_t function_163b7c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x163b7c
    bool v1; // 0x163b7c
    return (int64_t)v1 & 0xffffffff;
}

// Address range: 0x163b9b - 0x163b9c
int64_t function_163b9b(void) {
    // 0x163b9b
    int64_t result; // 0x163b9b
    return result;
}

// Address range: 0x163b9e - 0x163ba2
int64_t function_163b9e(void) {
    // 0x163b9e
    __asm_in_133(96);
    int64_t v1; // 0x163b9e
    return function_163bb7(v1, v1, v1, v1, (int64_t)&g22);
}

// Address range: 0x163ba2 - 0x163bb7
int64_t function_163ba2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x163ba2
    int64_t v1; // 0x163ba2
    int32_t * v2 = (int32_t *)(v1 - 24 + v1); // 0x163ba6
    *v2 = *v2 - (int32_t)v1;
    int64_t v3 = __asm_wait(); // 0x163bad
    if (((int32_t)a3 & -0xff01 || (int32_t)&g19) + (int32_t)a4 >= 0) {
        v3 = function_163b9b();
    }
    // 0x163baf
    *(char *)a1 = (char)v3;
    bool v4; // 0x163ba2
    return unknown_ffffffffd361a1b8((v4 ? -1 : 1) + a1);
}

// Address range: 0x163bb7 - 0x163c0a
int64_t function_163bb7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x163bb7
    float80_t v1; // 0x163bb7
    *(float32_t *)(a1 - 24) = (float32_t)v1;
    int64_t v2; // 0x163bb7
    int32_t * v3 = (int32_t *)(v2 + a3); // 0x163bc0
    int32_t v4 = *v3; // 0x163bc0
    int32_t v5 = a4; // 0x163bc0
    int32_t v6 = v4 + v5; // 0x163bc0
    *v3 = v6;
    int64_t v7; // 0x163bb7
    unsigned char v8 = *(char *)&v7; // 0x163bc3
    bool v9; // 0x163bb7
    v7 = (v9 ? -1 : 1) + a2;
    int64_t v10 = v2 & -256 | (int64_t)v8; // 0x163bc4
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        v10 = function_163b73();
    }
    uint32_t v11 = (int32_t)v10 >> 31; // 0x163bc6
    uint64_t v12 = a4 / 256; // 0x163bc7
    uint64_t v13 = v10 + v12; // 0x163bc7
    int64_t v14 = v10 & -256; // 0x163bc7
    int32_t * v15 = (int32_t *)(v2 + 0x169097b5); // 0x163bc9
    *v15 = *v15 + (int32_t)a1;
    char * v16 = (char *)((v13 % 256 | v14) + 0x3601c00); // 0x163bcf
    *v16 = *v16 + (char)v13;
    int64_t v17 = (v13 + v12) % 256 | v14; // 0x163bd5
    int32_t * v18 = (int32_t *)((int64_t)v11 + 1); // 0x163bd7
    *v18 = *v18 + (int32_t)v2;
    char * v19 = (char *)(a1 - 41); // 0x163bdb
    *v19 = *v19 + (char)(v2 / 256);
    char * v20 = (char *)(a1 + 0x10d4f73a + 8 * v17); // 0x163bdf
    *v20 = *v20 + (char)a4;
    __asm_outsd((int16_t)v11, *(int32_t *)v7);
    int32_t v21 = *(int32_t *)(v17 + (8 * v2 | 1)); // 0x163be7
    int64_t v22 = unknown_7f16e77a(); // 0x163beb
    __asm_out(122, (char)v22);
    __readfsbyte(a4 - 0x76337900);
    int32_t * v23 = (int32_t *)(8 * a1 - 76 + (int64_t)(v21 + (int32_t)v2)); // 0x163c06
    *v23 = *v23 + (int32_t)v7;
    return (v22 + v12) % 256 | v22 & -256;
}

// Address range: 0x163c4f - 0x163c54
int64_t function_163c4f(void) {
    // 0x163c4f
    return function_1feac06();
}

// Address range: 0x163cb4 - 0x163cb5
int64_t function_163cb4(void) {
    // 0x163cb4
    int64_t result; // 0x163cb4
    return result;
}

// Address range: 0x163cb6 - 0x163d13
int64_t function_163cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x163cb6
    int64_t v1; // 0x163cb6
    uint64_t v2 = (uint64_t)v1 / 256; // 0x163cb6
    char * v3 = (char *)a4; // 0x163cb6
    *v3 = (char)(v1 & v2);
    int64_t v4 = unknown_ffffffffb20b4dbf(); // 0x163cb9
    float80_t v5; // 0x163cb6
    *(int32_t *)a1 = (int32_t)v5;
    bool v6; // 0x163cb6
    int64_t v7 = (v6 ? -1 : 1) + a1; // 0x163cc2
    int64_t v8; // 0x163cb6
    *v3 = *(char *)&v8 | (char)v4 | -86;
    unknown_650eeece(v7);
    __asm_iretd(v7, a2, a3, a4);
    int64_t v9 = unknown_fffffffff57bc8d9(); // 0x163cd3
    char * v10 = (char *)(v7 - 128); // 0x163cd8
    char v11 = *v10 | (char)v2; // 0x163cd8
    *v10 = v11;
    int64_t v12 = v9; // 0x163ce5
    if (v11 >= 0 != v11 != 0) {
        // 0x163ce8
        v12 = function_2e2fee();
    }
    uint32_t v13 = 0x10000 * (int32_t)v12 >> 16; // 0x163cf2
    int64_t v14 = v13; // 0x163cf2
    char * v15 = (char *)v14; // 0x163cfa
    *v15 = 2 * (char)v12 + *v15;
    return (v14 + 160 + (int64_t)(v13 < 0x21787801)) % 256 | v14 & 0xffffff00;
}

// Address range: 0x163d14 - 0x163db1
int64_t function_163d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a4; // 0x163d1a
    uint32_t v2 = 2 * v1; // 0x163d1a
    if (v2 >= 0) {
        if ((v2 ^ v1) < 0) {
            // 0x163d56
            int64_t result; // 0x163d14
            return result;
        }
        // 0x163d22
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return function_163cb4();
    }
    // 0x163d4e
    int64_t v3; // 0x163d14
    int32_t v4 = v3; // 0x163d4e
    uint32_t result2 = (int32_t)v3 + v4; // 0x163d4e
    if (result2 != 0) {
        // 0x163d56
        return result2;
    }
    // 0x163d58
    unknown_ffffffffe8429d5e();
    int64_t v5 = unknown_ffffffffafb3f76b(); // 0x163d64
    uint32_t v6 = v2 & 30; // 0x163d6a
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(v5 + 0x1e8e124); // 0x163d6a
        *v7 = *v7 << v6;
    }
    char v8 = *(char *)(a2 - 0x5a9f444e); // 0x163d73
    int64_t v9 = a3 & -256 | (int64_t)(v8 + (char)a3); // 0x163d73
    int32_t * v10 = (int32_t *)(a2 - 24); // 0x163d79
    *v10 = *v10 & (int32_t)a2;
    int32_t * v11 = (int32_t *)v5; // 0x163d7c
    *v11 = *v11 + (int32_t)v9;
    int64_t v12 = v2; // 0x163d7e
    *(char *)a1 = __asm_insb((int16_t)v9);
    while (v12 != 1) {
        v12--;
        *(char *)a1 = __asm_insb((int16_t)v9);
    }
    int64_t result3 = unknown_4ebdda8c(); // 0x163d86
    *(char *)-0x1771c85f = *(char *)-0x1771c85f | (char)result3;
    int32_t * v13 = (int32_t *)(result3 - 127); // 0x163d3f
    *v13 = *v13 + v4;
    __asm_fldenv(*(int224_t *)(result3 - 0x1750caa6));
    return result3;
}

// Address range: 0x163dbc - 0x163dbd
int64_t function_163dbc(int64_t a1) {
    // 0x163dbc
    int64_t result; // 0x163dbc
    return result;
}

// Address range: 0x163dbf - 0x163dc2
int64_t function_163dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x163dbf
    int64_t result; // 0x163dbf
    return result;
}

// Address range: 0x163de4 - 0x163e61
int64_t function_163de4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x163de4
    int64_t v1; // 0x163de4
    int64_t v2 = v1;
    uint64_t v3 = v1;
    bool v4; // 0x163de4
    if (v4 || v4) {
        // 0x163e56
        *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
        return unknown_ffffffffb1071f62();
    }
    uint32_t v5 = (int32_t)a3; // 0x163dea
    uint32_t v6 = 2 * v5; // 0x163dea
    int64_t v7 = v6; // 0x163dea
    char v8 = *(char *)(2 * v7 - 0x17ff66f3); // 0x163dec
    unsigned char v9 = (char)(v6 < v5) + (char)a4 + v8; // 0x163dec
    int64_t v10 = a4 & -256 | (int64_t)v9; // 0x163dec
    int32_t * v11 = (int32_t *)(v7 - 122); // 0x163df3
    *v11 = *v11 + (int32_t)v1;
    int64_t v12; // 0x163de4
    int64_t v13 = v12;
    *(char *)v13 = *(char *)&v12 + (char)v13;
    int64_t v14 = unknown_ffffffffbd16e906(); // 0x163e00
    char * v15 = (char *)(v10 - 0x2d131c00); // 0x163e05
    *v15 = *v15 + (char)v3;
    int64_t v16 = v14 - (*(char *)(v3 + 3) > (char)(v3 / 256) ? 0x1e8e3a7 : 0x1e8e3a6); // 0x163e0e
    *(int64_t *)((v12 & 0xffffffff) - 8) = v10;
    char v17 = *(char *)(a1 + 90); // 0x163e14
    *(char *)v7 = v9;
    return v16 & 0xffff0000 | (int64_t)((256 * (int16_t)v16 >> 8) * (int16_t)v17 & -256);
}

// Address range: 0x163e9f - 0x163ea2
int64_t function_163e9f(void) {
    // 0x163e9f
    int64_t result; // 0x163e9f
    return result;
}

// Address range: 0x16ab2a - 0x16ab37
int64_t function_16ab2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16ab2a
    int64_t v1; // 0x16ab2a
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return v2 & -256 | 58;
}

// Address range: 0x16abca - 0x16abcb
int64_t function_16abca(void) {
    // 0x16abca
    int64_t result; // 0x16abca
    return result;
}

// Address range: 0x16ac32 - 0x16ac39
int64_t function_16ac32(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16ac32
    int64_t v1; // 0x16ac32
    __asm_outsb((int16_t)a3, (char)v1);
    return unknown_ffffffffff2b5c39();
}

// Address range: 0x16ac39 - 0x16ac64
int64_t function_16ac39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a3 >> 32; // 0x16ac3b
    int64_t v2 = -19 * v1; // 0x16ac3b
    int64_t v3 = unknown_ffffffffb453e844(); // 0x16ac43
    bool v4; // 0x16ac39
    if (v4 != v2 != -0x1300000000 * v1 >> 32) {
        v3 = function_16abca();
    }
    int64_t result = v2 & 0xffffffff; // 0x16ac3b
    int64_t v5; // 0x16ac39
    int64_t v6 = v3 + v5; // 0x16ac46
    int32_t * v7 = (int32_t *)(result - 0x7057f8d0); // 0x16ac48
    uint32_t v8 = *v7; // 0x16ac48
    uint32_t v9 = v8 + (int32_t)v6; // 0x16ac48
    *v7 = v9;
    unsigned char v10 = (char)v6; // 0x16ac4e
    unsigned char v11 = v9 < v8 ? 67 : 66; // 0x16ac4e
    if (v9 < v8 || v11 > v10) {
        int32_t * v12 = (int32_t *)(v5 - 24); // 0x16ac52
        *v12 = *v12 ^ (int32_t)a3;
        return v6 & 0xffffff00 | (int64_t)(v10 - v11);
    }
    // 0x16ac56
    __asm_in_137(-47);
    int32_t * v13 = (int32_t *)((a4 & 0xffffff00 | 154) + a3); // 0x16ac60
    int64_t v14; // 0x16ac39
    *v13 = *v13 + (int32_t)(int64_t)&v14;
    return result;
}

// Address range: 0x16acab - 0x16acd1
int64_t function_16acab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16acab
    int64_t v1; // 0x16acab
    *(int32_t *)0x1713134a = *(int32_t *)0x1713134a + (int32_t)v1;
    char * v2 = (char *)(v1 + 0x35c5700); // 0x16acb1
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x16acb9
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(v1 - 109); // 0x16acc8
    *v4 = *v4 + (char)v1;
    return unknown_ffffffffb43406d1();
}

// Address range: 0x16acd1 - 0x16acd6
int64_t function_16acd1(void) {
    // 0x16acd1
    return function_ffffffff8934ad81();
}

// Address range: 0x16acd6 - 0x16acf8
int64_t function_16acd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 10); // 0x16acd9
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x16acd6
    int32_t * v3 = (int32_t *)(a1 - 14 + 4 * v2); // 0x16ace2
    *v3 = *v3 + 46;
    return unknown_ffffffffcb0cb0ed();
}

// Address range: 0x16ad08 - 0x16ad14
int64_t function_16ad08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x642bb002); // 0x16ad08
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x16ad08
    return result;
}

// Address range: 0x16ad2f - 0x16ad30
int64_t function_16ad2f(int64_t a1) {
    // 0x16ad2f
    int64_t result; // 0x16ad2f
    return result;
}

// Address range: 0x16ad49 - 0x16ad4a
int64_t function_16ad49(int64_t a1) {
    // 0x16ad49
    int64_t result; // 0x16ad49
    return result;
}

// Address range: 0x16ad54 - 0x16ad57
int64_t function_16ad54(void) {
    // 0x16ad54
    int64_t result; // 0x16ad54
    return result;
}
