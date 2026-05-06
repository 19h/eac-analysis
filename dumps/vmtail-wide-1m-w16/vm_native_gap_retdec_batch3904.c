/*
 * Targeted RetDec C for native executable gap queue batch 3904.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x25122-0x2515a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c9b4-0x3c9ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c094-0x4c0ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x524d7-0x52512 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54cb3-0x54cea rank=- name=- kind=- bytes=- uncovered=-
 *   0x71017-0x7104e rank=- name=- kind=- bytes=- uncovered=-
 *   0x494587-0x4945c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496505-0x496540 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49d878-0x49d8b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49e3d4-0x49e410 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a93d7-0x4a9410 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ab285-0x4ab2c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4afe34-0x4afe70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b53b8-0x4b53f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f33d6-0x4f3410 rank=- name=- kind=- bytes=- uncovered=-
 *   0x509f88-0x509fc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50d1a9-0x50d1e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50d8c9-0x50d900 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50e078-0x50e0b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x530e56-0x530e90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5358fc-0x535930 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5429ca-0x542a00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x558297-0x5582d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5583c8-0x558400 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55a086-0x55a0c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56e949-0x56e980 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57790b-0x577940 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5779eb-0x577a20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x578058-0x578090 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5781e8-0x578220 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57c987-0x57c9c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57cf07-0x57cf40 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g11;
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

int64_t function_1fd40();
int64_t function_20a50();
int64_t function_2509a();
int64_t function_25122(int64_t a1);
int64_t function_2513a(void);
int64_t function_25140(int64_t a1);
int64_t function_25148(int64_t a1);
int64_t function_25154(void);
int64_t function_25506();
int64_t function_3c9b4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_49449a();
int64_t function_494587(int64_t a1);
int64_t function_4945a0(void);
int64_t function_4945b0(void);
int64_t function_496370();
int64_t function_496505(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49650c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49d450();
int64_t function_49d878(int64_t a1);
int64_t function_49d87b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49df59();
int64_t function_49e3d4(void);
int64_t function_49e3d9(void);
int64_t function_49e770();
int64_t function_4a8c40();
int64_t function_4a8eeb();
int64_t function_4a8f1e();
int64_t function_4a92eb();
int64_t function_4a93d7(void);
int64_t function_4a93e0(void);
int64_t function_4a93e8(void);
int64_t function_4a93f2(void);
int64_t function_4ab04a();
int64_t function_4ab061();
int64_t function_4ab0db();
int64_t function_4ab0e9();
int64_t function_4ab285(void);
int64_t function_4ab298(void);
int64_t function_4ab2a8(void);
int64_t function_4ab2b5(void);
int64_t function_4afd53();
int64_t function_4afe00();
int64_t function_4afe34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4afe48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b5139();
int64_t function_4b51cd();
int64_t function_4b53b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b53be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b53e0(void);
int64_t function_4c094(int64_t a1);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4f3330();
int64_t function_4f33d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4f33f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_508450();
int64_t function_509f88(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50d1a9(int64_t a1, int64_t a2);
int64_t function_50d1ad(void);
int64_t function_50d1cf(void);
int64_t function_50d8c9(int64_t a1, int64_t a2);
int64_t function_50d8cd(void);
int64_t function_50d8ef(void);
int64_t function_50e01c();
int64_t function_50e078(void);
int64_t function_50e07a(void);
int64_t function_52392();
int64_t function_524d7(int64_t a1, int64_t a2);
int64_t function_530e56(void);
int64_t function_535728();
int64_t function_535869();
int64_t function_5358fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_535910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5429ca(void);
int64_t function_5429d0(int64_t a1);
int64_t function_54c7c();
int64_t function_54cb3(int64_t a1);
int64_t function_54cd2(int64_t a1);
int64_t function_54cf10();
int64_t function_552550();
int64_t function_558297(void);
int64_t function_5583c8(int64_t a1, int64_t a2);
int64_t function_5583cc(void);
int64_t function_5583ee(void);
int64_t function_559e21();
int64_t function_559ef9();
int64_t function_55a086(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_55a08f(void);
int64_t function_55a0ad(void);
int64_t function_55a0b7(int64_t a1, int64_t a2);
int64_t function_566180();
int64_t function_56e949(int64_t a1, int64_t a2);
int64_t function_56e960(int64_t a1);
int64_t function_56e970(void);
int64_t function_574600();
int64_t function_5778ec();
int64_t function_57790b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_577914(int64_t a1);
int64_t function_5779cc();
int64_t function_5779eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5779f6(int64_t a1);
int64_t function_577fee();
int64_t function_578058(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_578060(int64_t a1);
int64_t function_578085(int64_t a1);
int64_t function_57817e();
int64_t function_5781e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5781f0(int64_t a1);
int64_t function_578215(int64_t a1);
int64_t function_57c889();
int64_t function_57c8e6();
int64_t function_57c920();
int64_t function_57c987(void);
int64_t function_57c9a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57c9b0(void);
int64_t function_57caea();
int64_t function_57cd90();
int64_t function_57ceff();
int64_t function_57cf07(void);
int64_t function_57cf10(void);
int64_t function_57cf18(void);
int64_t function_57cf20(void);
int64_t function_57cf28(void);
int64_t function_57cf30(int64_t a1, int64_t a2, int64_t a3);
int64_t function_71017(void);
int64_t function_7101a(void);
int64_t function_7101b(void);
int64_t function_7101e(int64_t result);
int64_t function_71022(int64_t result);
int64_t function_71026(int64_t result);
int64_t function_7102a(int64_t result);
int64_t function_7102e(int64_t result);
int64_t function_71032(int64_t result);
int64_t function_71036(int64_t result);
int64_t function_7103a(int64_t result);
int64_t function_7103e(int64_t result);
int64_t function_71042(int64_t result);
int64_t function_71046(int64_t result);
int64_t function_7104a(int64_t result);

// Address range: 0x25122 - 0x2513a
int64_t function_25122(int64_t a1) {
    // 0x25122
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t result; // 0x25122
    return result;
}

// Address range: 0x2513a - 0x2513f
int64_t function_2513a(void) {
    // 0x2513a
    int64_t result; // 0x2513a
    return result;
}

// Address range: 0x25140 - 0x25148
int64_t function_25140(int64_t a1) {
    // 0x25140
    return *(int64_t *)(a1 + 8) - a1;
}

// Address range: 0x25148 - 0x25153
int64_t function_25148(int64_t a1) {
    // 0x25148
    return a1 & -256 | (int64_t)(*(int64_t *)(a1 + 8) == a1);
}

// Address range: 0x25154 - 0x25159
int64_t function_25154(void) {
    // 0x25154
    return function_25506();
}

// Address range: 0x3c9b4 - 0x3c9ec
int64_t function_3c9b4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x3c9b7
    int64_t result = 0; // 0x3c9d6
    if ((int32_t)v1 == (int32_t)a3) {
        int64_t * v2 = (int64_t *)(a3 + 8); // 0x3c9d8
        *v2 = *v2 + v1;
        int64_t * v3 = (int64_t *)(a3 + 16); // 0x3c9dc
        *v3 = *v3 + v1;
        result = 1;
    }
    // 0x3c9e5
    return result;
}

// Address range: 0x4c094 - 0x4c0ce
int64_t function_4c094(int64_t a1) {
    // 0x4c094
    if (a1 == 0) {
        // 0x4c0cd
        int64_t result; // 0x4c094
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 40); // 0x4c0a5
    uint64_t v2 = *(int64_t *)(a1 + 72) + 8; // 0x4c0a9
    if (v2 <= v1) {
        // 0x4c0c1
        return function_4eeb50(a1);
    }
    int64_t v3 = v1; // 0x4c0b0
    int64_t v4 = *(int64_t *)v3; // 0x4c0b2
    v3 += 8;
    function_4eeb50(v4);
    int64_t v5 = v4; // 0x4c0b0
    while (v2 > v3) {
        // 0x4c0b2
        v4 = *(int64_t *)v3;
        v3 += 8;
        function_4eeb50(v4);
        v5 = v4;
    }
    // 0x4c0c1
    return function_4eeb50(v5);
}

// Address range: 0x524d7 - 0x52512
int64_t function_524d7(int64_t a1, int64_t a2) {
    // 0x524d7
    int64_t result; // 0x524d7
    if (a2 == 0) {
        // 0x5250d
        return result;
    }
    int64_t v1 = a2;
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x524f7
    function_52392(v1 + 40, *(int64_t *)(v1 + 24));
    result = function_4eeb50(v1);
    while (v2 != 0) {
        // 0x524e7
        v1 = v2;
        v2 = *(int64_t *)(v1 + 16);
        function_52392(v1 + 40, *(int64_t *)(v1 + 24));
        result = function_4eeb50(v1);
    }
    // 0x5250d
    return result;
}

// Address range: 0x54cb3 - 0x54cd1
int64_t function_54cb3(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x54cb5
    int64_t result = function_54c7c(v1); // 0x54cbc
    if (v1 == 0) {
        // 0x54ccf
        return result;
    }
    // 0x54cc6
    return function_4eeb50(v1);
}

// Address range: 0x54cd2 - 0x54ce9
int64_t function_54cd2(int64_t a1) {
    // 0x54cd2
    function_54c7c(a1);
    return function_4eeb30(a1, &g4);
}

// Address range: 0x71017 - 0x71019
int64_t function_71017(void) {
    // 0x71017
    int64_t result; // 0x71017
    return result;
}

// Address range: 0x7101a - 0x7101b
int64_t function_7101a(void) {
    // 0x7101a
    int64_t result; // 0x7101a
    return result;
}

// Address range: 0x7101b - 0x7101e
int64_t function_7101b(void) {
    // 0x7101b
    int64_t v1; // 0x7101b
    return v1 & -256 | 19;
}

// Address range: 0x7101e - 0x71022
int64_t function_7101e(int64_t result) {
    // 0x7101e
    return result;
}

// Address range: 0x71022 - 0x71026
int64_t function_71022(int64_t result) {
    // 0x71022
    return result;
}

// Address range: 0x71026 - 0x7102a
int64_t function_71026(int64_t result) {
    // 0x71026
    return result;
}

// Address range: 0x7102a - 0x7102e
int64_t function_7102a(int64_t result) {
    // 0x7102a
    return result;
}

// Address range: 0x7102e - 0x71032
int64_t function_7102e(int64_t result) {
    // 0x7102e
    return result;
}

// Address range: 0x71032 - 0x71036
int64_t function_71032(int64_t result) {
    // 0x71032
    return result;
}

// Address range: 0x71036 - 0x7103a
int64_t function_71036(int64_t result) {
    // 0x71036
    return result;
}

// Address range: 0x7103a - 0x7103e
int64_t function_7103a(int64_t result) {
    // 0x7103a
    return result;
}

// Address range: 0x7103e - 0x71042
int64_t function_7103e(int64_t result) {
    // 0x7103e
    return result;
}

// Address range: 0x71042 - 0x71046
int64_t function_71042(int64_t result) {
    // 0x71042
    return result;
}

// Address range: 0x71046 - 0x7104a
int64_t function_71046(int64_t result) {
    // 0x71046
    return result;
}

// Address range: 0x7104a - 0x7104e
int64_t function_7104a(int64_t result) {
    // 0x7104a
    return result;
}

// Address range: 0x494587 - 0x494591
int64_t function_494587(int64_t a1) {
    // 0x494587
    return function_49449a();
}

// Address range: 0x4945a0 - 0x4945a6
int64_t function_4945a0(void) {
    // 0x4945a0
    return 0xffff8f80;
}

// Address range: 0x4945b0 - 0x4945b6
int64_t function_4945b0(void) {
    // 0x4945b0
    return 0xffff8f80;
}

// Address range: 0x496505 - 0x49650b
int64_t function_496505(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x496505
    int64_t v1; // 0x496505
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(4 * a4 + 5 + v1); // 0x496507
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x49650c - 0x496534
int64_t function_49650c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x49650c
    int64_t v1; // 0x49650c
    char * v2 = (char *)(v1 - 115); // 0x49650e
    *v2 = *v2 + (char)a4;
    function_49e770(v1, 1, a3, &g5, v1);
    return function_496370();
}

// Address range: 0x49d878 - 0x49d879
int64_t function_49d878(int64_t a1) {
    // 0x49d878
    int64_t result; // 0x49d878
    return result;
}

// Address range: 0x49d87b - 0x49d8a1
int64_t function_49d87b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x49d87b
    int64_t v1; // 0x49d87b
    char * v2 = (char *)(v1 - 115); // 0x49d87b
    *v2 = *v2 + (char)a4;
    function_49e770(v1, 1, a3, (int64_t **)&g3, v1);
    return function_49d450();
}

// Address range: 0x49e3d4 - 0x49e3d9
int64_t function_49e3d4(void) {
    // 0x49e3d4
    return function_49df59();
}

// Address range: 0x49e3d9 - 0x49e404
int64_t function_49e3d9(void) {
    // 0x49e3d9
    int64_t v1; // 0x49e3d9
    function_49e770(v1, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t **)&g2, (int64_t)"new server cert during renegotiation");
    return function_49df59();
}

// Address range: 0x4a93d7 - 0x4a93d8
int64_t function_4a93d7(void) {
    // 0x4a93d7
    int64_t result; // 0x4a93d7
    return result;
}

// Address range: 0x4a93e0 - 0x4a93e5
int64_t function_4a93e0(void) {
    // 0x4a93e0
    return function_4a92eb();
}

// Address range: 0x4a93e8 - 0x4a93f2
int64_t function_4a93e8(void) {
    // 0x4a93e8
    return function_4a8eeb();
}

// Address range: 0x4a93f2 - 0x4a9404
int64_t function_4a93f2(void) {
    // 0x4a93f2
    int64_t v1; // 0x4a93f2
    function_4a8c40(v1);
    return function_4a8f1e();
}

// Address range: 0x4ab285 - 0x4ab292
int64_t function_4ab285(void) {
    // 0x4ab285
    int64_t v1; // 0x4ab285
    if ((int32_t)v1 == 0) {
        function_4ab0db();
    }
    // 0x4ab28d
    return function_4ab0e9();
}

// Address range: 0x4ab298 - 0x4ab2a5
int64_t function_4ab298(void) {
    // 0x4ab298
    int64_t v1; // 0x4ab298
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 | (int32_t)&g1;
    return function_4ab061();
}

// Address range: 0x4ab2a8 - 0x4ab2b5
int64_t function_4ab2a8(void) {
    // 0x4ab2a8
    int64_t v1; // 0x4ab2a8
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 | (int32_t)&g6;
    return function_4ab04a();
}

// Address range: 0x4ab2b5 - 0x4ab2bf
int64_t function_4ab2b5(void) {
    // 0x4ab2b5
    return function_4ab0e9();
}

// Address range: 0x4afe34 - 0x4afe41
int64_t function_4afe34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4afe34
    int64_t v1; // 0x4afe34
    *(int64_t *)a3 = (v1 | a4) & 0xffffffff;
    return function_4afd53();
}

// Address range: 0x4afe48 - 0x4afe61
int64_t function_4afe48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x4afe48
    if (a5 == 1) {
        v1 = function_4afe00();
    }
    // 0x4afe4e
    *(int64_t *)a3 = (int64_t)*(char *)(v1 + 1);
    *(int64_t *)a1 = v1 + 2;
    return function_4afd53();
}

// Address range: 0x4b53b8 - 0x4b53bd
int64_t function_4b53b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b53b8
    int64_t result; // 0x4b53b8
    bool v1; // 0x4b53b8
    *(char *)a1 = (char)result - (char)a4 + (char)v1;
    return result;
}

// Address range: 0x4b53be - 0x4b53d9
int64_t function_4b53be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b53be
    int64_t v1; // 0x4b53be
    int32_t * v2 = (int32_t *)(a4 + 117 + v1); // 0x4b53be
    *v2 = *v2 - 1;
    char * v3 = (char *)(v1 + 1); // 0x4b53c2
    *v3 = *v3 + (char)a4;
    int64_t v4; // 0x4b53be
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    return function_4b51cd();
}

// Address range: 0x4b53e0 - 0x4b53ea
int64_t function_4b53e0(void) {
    // 0x4b53e0
    return function_4b5139();
}

// Address range: 0x4f33d6 - 0x4f33f3
int64_t function_4f33d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4f33d6
    int64_t v1; // 0x4f33d6
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_4f3330();
}

// Address range: 0x4f33f3 - 0x4f3406
int64_t function_4f33f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4f33f3
    __stack_chk_fail();
    return function_4f3330();
}

// Address range: 0x509f88 - 0x509fb1
int64_t function_509f88(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x509f88
    int64_t v1; // 0x509f88
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 119); // 0x509f8a
    unsigned char v4 = *v3; // 0x509f8a
    char v5 = a4; // 0x509f8a
    unsigned char v6 = v4 + v5; // 0x509f8a
    *v3 = v6;
    char * v7 = (char *)(v2 - 117); // 0x509f8e
    *v7 = *v7 - v5 + (char)(v6 < v4);
    int64_t v8 = v2 & -256; // 0x509f92
    *(int64_t *)(a2 + 32) = a3;
    *(int64_t *)(a2 + 40) = *(int64_t *)(v8 | 184);
    int64_t result = *(int64_t *)(v8 | 192); // 0x509fa5
    *(int64_t *)(a2 + 48) = result;
    return result;
}

// Address range: 0x50d1a9 - 0x50d1ad
int64_t function_50d1a9(int64_t a1, int64_t a2) {
    // 0x50d1a9
    int64_t result; // 0x50d1a9
    return result;
}

// Address range: 0x50d1ad - 0x50d1cd
int64_t function_50d1ad(void) {
    // 0x50d1ad
    int64_t v1; // 0x50d1ad
    function_1fd40(v1);
    while (true) {
        // 0x50d1b5
        function_1fd40(function_20a50());
    }
}

// Address range: 0x50d1cf - 0x50d1d0
int64_t function_50d1cf(void) {
    // 0x50d1cf
    int64_t result; // 0x50d1cf
    return result;
}

// Address range: 0x50d8c9 - 0x50d8cd
int64_t function_50d8c9(int64_t a1, int64_t a2) {
    // 0x50d8c9
    int64_t result; // 0x50d8c9
    return result;
}

// Address range: 0x50d8cd - 0x50d8ed
int64_t function_50d8cd(void) {
    // 0x50d8cd
    int64_t v1; // 0x50d8cd
    function_1fd40(v1);
    while (true) {
        // 0x50d8d5
        function_1fd40(function_20a50());
    }
}

// Address range: 0x50d8ef - 0x50d8f0
int64_t function_50d8ef(void) {
    // 0x50d8ef
    int64_t result; // 0x50d8ef
    return result;
}

// Address range: 0x50e078 - 0x50e07a
int64_t function_50e078(void) {
    // 0x50e078
    return function_50e01c();
}

// Address range: 0x50e07a - 0x50e0b0
int64_t function_50e07a(void) {
    // 0x50e07a
    __stack_chk_fail();
    int64_t v1; // 0x50e07a
    int64_t v2 = *(int64_t *)(v1 - 64) - 24; // 0x50e086
    if (v2 != *(int64_t *)0x848c20) {
        // 0x50e093
        function_508450(v2, v1);
    }
    while (true) {
        // 0x50e09b
        function_566180(v1);
        _Unwind_Resume((struct _Unwind_Exception *)&g13);
    }
}

// Address range: 0x530e56 - 0x530e86
int64_t function_530e56(void) {
    // 0x530e56
    __asm_wait();
    __stack_chk_fail();
    int64_t v1; // 0x530e56
    int64_t v2 = *(int64_t *)(v1 - 96); // 0x530e5c
    if (v2 != v1 + 16) {
        // 0x530e6c
        function_4eeb50(v2);
    }
    while (true) {
        // 0x530e71
        function_566180(v1);
        _Unwind_Resume((struct _Unwind_Exception *)&g13);
    }
}

// Address range: 0x5358fc - 0x53590e
int64_t function_5358fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5358fc
    int64_t v1; // 0x5358fc
    return function_535728(v1);
}

// Address range: 0x535910 - 0x535929
int64_t function_535910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x535910
    int64_t v1; // 0x535910
    return function_535869(v1);
}

// Address range: 0x5429ca - 0x5429d0
int64_t function_5429ca(void) {
    // 0x5429ca
    int64_t result; // 0x5429ca
    return result;
}

// Address range: 0x5429d0 - 0x5429f6
// From class:    std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5429d0(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x5429d7
    *(int64_t *)a1 = (int64_t)&g8;
    *(int64_t *)v1 = (int64_t)&g7;
    return function_54cf10(v1);
}

// Address range: 0x558297 - 0x5582d0
int64_t function_558297(void) {
    // 0x558297
    int64_t v1; // 0x558297
    int64_t v2 = *(int64_t *)(v1 - 64) - 24; // 0x5582a6
    if (v2 != (int64_t)g9) {
        // 0x5582b3
        function_552550(v2, v1);
    }
    while (true) {
        // 0x5582bb
        function_566180(v1);
        int64_t v3; // 0x558297
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g13;
    }
}

// Address range: 0x5583c8 - 0x5583cc
int64_t function_5583c8(int64_t a1, int64_t a2) {
    // 0x5583c8
    int64_t result; // 0x5583c8
    return result;
}

// Address range: 0x5583cc - 0x5583ec
int64_t function_5583cc(void) {
    // 0x5583cc
    int64_t v1; // 0x5583cc
    function_1fd40(v1);
    while (true) {
        // 0x5583d4
        function_1fd40(function_20a50());
    }
}

// Address range: 0x5583ee - 0x5583ef
int64_t function_5583ee(void) {
    // 0x5583ee
    int64_t result; // 0x5583ee
    return result;
}

// Address range: 0x55a086 - 0x55a08e
int64_t function_55a086(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x55a086
    int64_t result; // 0x55a086
    int32_t * v1 = (int32_t *)(result - 117); // 0x55a08b
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x55a08f - 0x55a0ad
int64_t function_55a08f(void) {
    // 0x55a08f
    int64_t v1; // 0x55a08f
    if ((int32_t)v1 != -1) {
        function_559ef9();
    }
    // 0x55a09b
    *(int64_t *)(v1 - 80) = 0;
    return function_559e21();
}

// Address range: 0x55a0ad - 0x55a0b5
int64_t function_55a0ad(void) {
    // 0x55a0ad
    return function_559e21();
}

// Address range: 0x55a0b7 - 0x55a0bc
int64_t function_55a0b7(int64_t a1, int64_t a2) {
    // 0x55a0b7
    int64_t v1; // 0x55a0b7
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x56e949 - 0x56e95c
int64_t function_56e949(int64_t a1, int64_t a2) {
    // 0x56e949
    return function_574600();
}

// Address range: 0x56e960 - 0x56e96f
int64_t function_56e960(int64_t a1) {
    // 0x56e960
    *(int64_t *)a1 = (int64_t)&g11;
    return (int64_t)&g11;
}

// Address range: 0x56e970 - 0x56e975
int64_t function_56e970(void) {
    // 0x56e970
    return function_2509a();
}

// Address range: 0x57790b - 0x577913
int64_t function_57790b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57790b
    *(int32_t *)(a3 - 8) = (int32_t)a4 - 1;
    return function_5778ec();
}

// Address range: 0x577914 - 0x57791b
int64_t function_577914(int64_t a1) {
    // 0x577914
    int64_t result; // 0x577914
    *(char *)a1 = (char)result;
    int32_t * v1 = (int32_t *)(result - 119); // 0x577917
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x5779eb - 0x5779f3
int64_t function_5779eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5779eb
    *(int32_t *)(a3 - 8) = (int32_t)a4 - 1;
    return function_5779cc();
}

// Address range: 0x5779f6 - 0x5779fb
int64_t function_5779f6(int64_t a1) {
    // 0x5779f6
    int64_t result; // 0x5779f6
    *(char *)a1 = (char)result;
    int32_t * v1 = (int32_t *)(result - 119); // 0x5779f7
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x578058 - 0x57805d
int64_t function_578058(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x578058
    int64_t v1; // 0x578058
    *(int32_t *)(a4 - 8) = (int32_t)v1;
    return function_577fee();
}

// Address range: 0x578060 - 0x578065
int64_t function_578060(int64_t a1) {
    // 0x578060
    int64_t result; // 0x578060
    *(char *)a1 = (char)result;
    int32_t * v1 = (int32_t *)(result - 119); // 0x578061
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x578085 - 0x578089
int64_t function_578085(int64_t a1) {
    // 0x578085
    int64_t result; // 0x578085
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x5781e8 - 0x5781ed
int64_t function_5781e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5781e8
    int64_t v1; // 0x5781e8
    *(int32_t *)(a4 - 8) = (int32_t)v1;
    return function_57817e();
}

// Address range: 0x5781f0 - 0x5781f5
int64_t function_5781f0(int64_t a1) {
    // 0x5781f0
    int64_t result; // 0x5781f0
    *(char *)a1 = (char)result;
    int32_t * v1 = (int32_t *)(result - 119); // 0x5781f1
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x578215 - 0x578219
int64_t function_578215(int64_t a1) {
    // 0x578215
    int64_t result; // 0x578215
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x57c987 - 0x57c99c
int64_t function_57c987(void) {
    // 0x57c987
    int64_t v1; // 0x57c987
    bool v2; // 0x57c987
    if (!v2) {
        v1 = function_57c920();
    }
    // 0x57c98a
    int64_t v3; // 0x57c987
    *(int64_t *)(v3 + 24) = v1 + 1;
    return function_57c889();
}

// Address range: 0x57c9a0 - 0x57c9ac
int64_t function_57c9a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57c9a0
    return function_57c889();
}

// Address range: 0x57c9b0 - 0x57c9bd
int64_t function_57c9b0(void) {
    // 0x57c9b0
    int64_t v1; // 0x57c9b0
    *(int32_t *)v1 = 30;
    return function_57c8e6();
}

// Address range: 0x57cf07 - 0x57cf10
int64_t function_57cf07(void) {
    // 0x57cf07
    return function_57cd90();
}

// Address range: 0x57cf10 - 0x57cf18
int64_t function_57cf10(void) {
    // 0x57cf10
    return function_57ceff();
}

// Address range: 0x57cf18 - 0x57cf20
int64_t function_57cf18(void) {
    // 0x57cf18
    return function_57ceff();
}

// Address range: 0x57cf20 - 0x57cf28
int64_t function_57cf20(void) {
    // 0x57cf20
    return function_57ceff();
}

// Address range: 0x57cf28 - 0x57cf30
int64_t function_57cf28(void) {
    // 0x57cf28
    return function_57ceff();
}

// Address range: 0x57cf30 - 0x57cf3b
int64_t function_57cf30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x57cf30
    return function_57caea();
}
