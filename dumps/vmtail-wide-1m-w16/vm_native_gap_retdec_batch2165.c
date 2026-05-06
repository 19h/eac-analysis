/*
 * Targeted RetDec C for native executable gap queue batch 2165.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x363c0-0x365c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x365c0-0x36622 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38c36-0x38e36 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38e36-0x38e9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x66e54-0x66ea2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x70c90-0x70e90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x70e90-0x70ef4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c45a-0x48c65a rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c65a-0x48c69a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d1c3c-0x4d1e3c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d1e3c-0x4d1ea0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e13f9-0x4e1479 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fc11b-0x4fc31b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fc31b-0x4fc380 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50316a-0x50336a rank=- name=- kind=- bytes=- uncovered=-
 *   0x50336a-0x5033d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x505a3a-0x505c3a rank=- name=- kind=- bytes=- uncovered=-
 *   0x505c3a-0x505ca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x509d88-0x509f88 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50ca88-0x50cac0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54c920-0x54cb20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54cb20-0x54cb80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54ce15-0x54ce50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x550a9c-0x550c9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x550c9c-0x550d00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x553f78-0x553fb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5563ab-0x5565ab rank=- name=- kind=- bytes=- uncovered=-
 *   0x5565ab-0x556610 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5743bc-0x5745bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x5745bc-0x574600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57958d-0x57978d rank=- name=- kind=- bytes=- uncovered=-
 *   0x57978d-0x5797e0 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t function_20040();
int64_t function_20110();
int64_t function_20470();
int64_t function_20540();
int64_t function_20730();
int64_t function_20a50();
int64_t function_24ded();
int64_t function_25622();
int64_t function_2562c();
int64_t function_25856();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_2601b();
int64_t function_30d914();
int64_t function_35a50();
int64_t function_363c0(int64_t result, int64_t a2);
int64_t function_36418(int64_t result);
int64_t function_36420(int64_t result);
int64_t function_36424(int64_t result);
int64_t function_36428(int64_t result);
int64_t function_3642c(int64_t result);
int64_t function_36430(int64_t result);
int64_t function_36434(int64_t a1);
int64_t function_3643c(int64_t result);
int64_t function_36440(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36472(int64_t result);
int64_t function_36476(int64_t a1, int64_t a2);
int64_t function_36517(int64_t a1, int64_t a2);
int64_t function_36522(int64_t result);
int64_t function_3652a(int64_t result);
int64_t function_3652e(int64_t a1, int64_t a2);
int64_t function_365d0(int64_t a1);
int64_t function_365dc(int64_t result);
int64_t function_365e0(int64_t a1, int64_t a2);
int64_t function_36f05();
int64_t function_36ff8();
int64_t function_38a2e();
int64_t function_38a5e();
int64_t function_38b62();
int64_t function_38c36(int64_t result);
int64_t function_38c3a(int64_t a1);
int64_t function_38c3f(int64_t a1, int64_t a2);
int64_t function_38c4a(int64_t result);
int64_t function_38c52(int64_t result);
int64_t function_38c56(int64_t a1, int64_t a2);
int64_t function_38d04(int64_t result);
int64_t function_38d08(int64_t a1);
int64_t function_38d3e(int64_t result);
int64_t function_38d42(int64_t a1, int64_t a2);
int64_t function_38d4c(int64_t result);
int64_t function_38d54(int64_t result);
int64_t function_38d58(int64_t a1);
int64_t function_38d64(int64_t a1, int64_t a2);
int64_t function_38d8c(int64_t a1);
int64_t function_38d98(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38e9c();
int64_t function_38ef3();
int64_t function_48bfc0();
int64_t function_48c3e4();
int64_t function_48c45a(int64_t a1, int64_t a2);
int64_t function_48c4c5(int64_t a1, int64_t a2);
int64_t function_48c5e6(int64_t a1);
int64_t function_48c5fa(int64_t a1);
int64_t function_48c60a(int64_t a1);
int64_t function_48c61e(int64_t a1);
int64_t function_48c62e(int64_t a1);
int64_t function_48c642(int64_t a1);
int64_t function_48c656(int64_t a1);
int64_t function_48c666(int64_t a1);
int64_t function_48c676(int64_t a1);
int64_t function_48c686(int64_t a1);
int64_t function_48c696(int64_t result);
int64_t function_4d19d0();
int64_t function_4d1a60();
int64_t function_4d1b10();
int64_t function_4d1b30();
int64_t function_4d1b80();
int64_t function_4d1c3c(int64_t a1);
int64_t function_4e13f9(void);
int64_t function_4e1441(void);
int64_t function_4e1447(int64_t a1);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4fc11b(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_4fc370(int64_t a1, int64_t a2);
int64_t function_4fc380();
int64_t function_4fcce0();
int64_t function_502fa0();
int64_t function_50316a(int64_t result, int64_t a2);
int64_t function_503240(int64_t result, int64_t a2);
int64_t function_503310(int64_t result, int64_t a2);
int64_t function_505870();
int64_t function_505a3a(int64_t result, int64_t a2);
int64_t function_505b10(int64_t result, int64_t a2);
int64_t function_505be0(int64_t result, int64_t a2);
int64_t function_509d88(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_509e40(void);
int64_t function_509e80(int64_t a1, int64_t a2);
int64_t function_509ea0(int64_t a1, int64_t a2);
int64_t function_509ec0(int64_t a1, int64_t a2);
int64_t function_509ee0(void);
int64_t function_509ef0(int64_t a1, int64_t a2);
int64_t function_509f10(int64_t a1, int64_t a2);
int64_t function_50ca88(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_52b020();
int64_t function_5423f0();
int64_t function_542470();
int64_t function_542650();
int64_t function_54c860();
int64_t function_54c920(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_54ca70(int64_t a1, int64_t wstr);
int64_t function_54cac0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54cae0(int64_t a1);
int64_t function_54cb00(int64_t result, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_54cb70(int64_t a1, int64_t a2);
int64_t function_54cb80();
int64_t function_54cd06();
int64_t function_54cdc2();
int64_t function_54ce15(void);
int64_t function_54ce20(void);
int64_t function_54ce30(void);
int64_t function_54ce42(int64_t a1);
int64_t function_54d0a0();
int64_t function_54d560();
int64_t function_550a60();
int64_t function_550a9c(void);
int64_t function_550aa0(int64_t result);
int64_t function_550ae0(int64_t result);
int64_t function_550b10(int64_t result, int64_t a2);
int64_t function_550b40(int64_t a1, int64_t a2);
int64_t function_550b70(int64_t a1);
int64_t function_550ba0(int64_t result, int64_t a2);
int64_t function_550be0(int64_t a1, uint64_t a2);
int64_t function_550cb0(int64_t a1, int64_t result, int64_t a3, int64_t a4);
int64_t function_552550();
int64_t function_553f78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_556282();
int64_t function_556294();
int64_t function_5563ab(int64_t a1, uint32_t a2);
int64_t function_5563ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5564b0(void);
int64_t function_5564b5(void);
int64_t function_5564d7(int64_t a1);
int64_t function_556507(void);
int64_t function_55650c(void);
int64_t function_55651e(void);
int64_t function_556533(void);
int64_t function_556535(void);
int64_t function_55654a(void);
int64_t function_55654c(void);
int64_t function_556564(void);
int64_t function_556569(void);
int64_t function_55656b(void);
int64_t function_556570(int64_t a1);
int64_t function_565970();
int64_t function_565f80();
int64_t function_566390();
int64_t function_568460();
int64_t function_568730();
int64_t function_569eb0();
int64_t function_569fc0();
int64_t function_56adb0();
int64_t function_56aeb0();
int64_t function_56dd60();
int64_t function_572060();
int64_t function_57413b();
int64_t function_574184();
int64_t function_574286();
int64_t function_574387();
int64_t function_5743bc(void);
int64_t function_5743c1(void);
int64_t function_5743cb(void);
int64_t function_5743d5(void);
int64_t function_5743dc(void);
int64_t function_5743fc(void);
int64_t function_574415(void);
int64_t function_574441(void);
int64_t function_57445a(void);
int64_t function_57445c(void);
int64_t function_574478(void);
int64_t function_57447d(void);
int64_t function_574482(void);
int64_t function_574487(void);
int64_t function_5744af(void);
int64_t function_5744b4(void);
int64_t function_5744eb(void);
int64_t function_5744f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5745e0(int64_t a1, int64_t a2);
int64_t function_5793f1();
int64_t function_5794b3();
int64_t function_579548();
int64_t function_57958d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_579598(void);
int64_t function_5795a7(void);
int64_t function_5795b3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5797c8(void);
int64_t function_5797ca(int64_t a1);
int64_t function_66e54(int64_t a1, int64_t a2);
int64_t function_66e7a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_66e88(void);
int64_t function_66e8c(void);
int64_t function_66e92(int64_t a1, int64_t a2);
int64_t function_70c90(void);
int64_t function_70ca0(void);
int64_t function_70cfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_70d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_70d4b(int64_t a1);
int64_t function_70d6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_70ddc(int64_t a1, int64_t a2);
int64_t function_70e0d(void);
int64_t function_70e53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);

// Address range: 0x363c0 - 0x36417
int64_t function_363c0(int64_t result, int64_t a2) {
    int64_t v1 = result - 24;
    int64_t * v2 = (int64_t *)v1;
    uint64_t v3 = *v2 + 1; // 0x363d1
    int64_t * v4; // 0x363c0
    int64_t v5; // 0x363c0
    int64_t v6; // 0x363c0
    if (v3 > *(int64_t *)(result - 16)) {
        goto lab_0x363db;
    } else {
        // 0x363e8
        if ((char)function_25622(v1) != 0) {
            goto lab_0x363db;
        } else {
            int64_t v7 = result - 48; // 0x363fb
            v4 = (int64_t *)v7;
            v5 = v7;
            v6 = v1;
            goto lab_0x363f5;
        }
    }
  lab_0x363db:
    // 0x363db
    function_259ce(result, v3);
    v4 = v2;
    v5 = v1;
    v6 = result;
    goto lab_0x363f5;
  lab_0x363f5:;
    int64_t v8 = *v4; // 0x363fb
    *(char *)(v8 + v6) = (char)a2;
    function_2562c(v5, v3, v8);
    return result;
}

// Address range: 0x36418 - 0x36420
int64_t function_36418(int64_t result) {
    // 0x36418
    *(int64_t *)(result + 8) = result;
    return result;
}

// Address range: 0x36420 - 0x36424
int64_t function_36420(int64_t result) {
    // 0x36420
    return result;
}

// Address range: 0x36424 - 0x36428
int64_t function_36424(int64_t result) {
    // 0x36424
    return result;
}

// Address range: 0x36428 - 0x3642c
int64_t function_36428(int64_t result) {
    // 0x36428
    return result;
}

// Address range: 0x3642c - 0x36430
int64_t function_3642c(int64_t result) {
    // 0x3642c
    return result;
}

// Address range: 0x36430 - 0x36434
int64_t function_36430(int64_t result) {
    // 0x36430
    return result;
}

// Address range: 0x36434 - 0x3643c
int64_t function_36434(int64_t a1) {
    // 0x36434
    return *(int64_t *)(a1 - 24);
}

// Address range: 0x3643c - 0x36440
int64_t function_3643c(int64_t result) {
    // 0x3643c
    return result;
}

// Address range: 0x36440 - 0x36472
int64_t function_36440(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36440
    return function_24ded(a2);
}

// Address range: 0x36472 - 0x36476
int64_t function_36472(int64_t result) {
    // 0x36472
    return result;
}

// Address range: 0x36476 - 0x36517
int64_t function_36476(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x36484
    int64_t v2 = *v1; // 0x36484
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x36488
    char v4 = a2;
    int64_t result; // 0x36476
    if (v2 != *v3) {
        // 0x3648e
        *(char *)v2 = v4;
        *v1 = *v1 + 1;
        // 0x3650b
        return result;
    }
    // 0x3649a
    function_25856();
    int64_t v5 = 0; // 0x364bf
    if (a1 != 0) {
        // 0x364c1
        v5 = function_4efd30(a1);
    }
    // 0x364cc
    *(char *)(v2 - a1 + v5) = v4;
    int64_t v6 = function_2601b(v2, *v1, function_2601b(a1, v2, v5) + 1); // 0x364ed
    function_35a50(v2);
    *(int64_t *)a1 = v5;
    *v1 = v6;
    *v3 = v5 + a1;
    // 0x3650b
    return result;
}

// Address range: 0x36517 - 0x36521
int64_t function_36517(int64_t a1, int64_t a2) {
    // 0x36517
    return a2 & -256 | (int64_t)(bool)(a1 != a2);
}

// Address range: 0x36522 - 0x3652a
int64_t function_36522(int64_t result) {
    // 0x36522
    *(int64_t *)result = result + 24;
    return result;
}

// Address range: 0x3652a - 0x3652e
int64_t function_3652a(int64_t result) {
    // 0x3652a
    return result;
}

// Address range: 0x3652e - 0x365cf
int64_t function_3652e(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x3653c
    int64_t v2 = *v1; // 0x3653c
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x36540
    char v4 = a2;
    int64_t result; // 0x3652e
    if (v2 != *v3) {
        // 0x36546
        *(char *)v2 = v4;
        *v1 = *v1 + 1;
        // 0x365c3
        return result;
    }
    // 0x36552
    function_25856();
    int64_t v5 = 0; // 0x36577
    if (a1 != 0) {
        // 0x36579
        v5 = function_4efd30(a1);
    }
    // 0x36584
    *(char *)(v2 - a1 + v5) = v4;
    int64_t v6 = function_2601b(v2, *v1, function_2601b(a1, v2, v5) + 1); // 0x365a5
    function_35a50(v2);
    *(int64_t *)a1 = v5;
    *v1 = v6;
    *v3 = v5 + a1;
    // 0x365c3
    return result;
}

// Address range: 0x365d0 - 0x365db
int64_t function_365d0(int64_t a1) {
    // 0x365d0
    return a1 & -256 | (int64_t)(*(int64_t *)(a1 + 8) == a1);
}

// Address range: 0x365dc - 0x365e0
int64_t function_365dc(int64_t result) {
    // 0x365dc
    return result;
}

// Address range: 0x365e0 - 0x36622
int64_t function_365e0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x365e1
    int64_t v2 = *v1; // 0x365e1
    int64_t v3 = v2 - a1; // 0x365ee
    int64_t v4 = v2; // 0x365f5
    int64_t result = v3; // 0x365f5
    if (v3 >= 9) {
        int64_t v5 = v2 - 8; // 0x365fa
        int64_t * v6 = (int64_t *)v5; // 0x365fa
        *v6 = a1;
        function_36f05(a1, 0, v5 - a1 >> 3, *v6);
        v4 = *v1;
        result = 0;
    }
    // 0x3661b
    *v1 = v4 - 8;
    return result;
}

// Address range: 0x38c36 - 0x38c3a
int64_t function_38c36(int64_t result) {
    // 0x38c36
    return result;
}

// Address range: 0x38c3a - 0x38c3f
int64_t function_38c3a(int64_t a1) {
    // 0x38c3a
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x38c3f - 0x38c49
int64_t function_38c3f(int64_t a1, int64_t a2) {
    // 0x38c3f
    return a2 & -256 | (int64_t)(bool)(a1 != a2);
}

// Address range: 0x38c4a - 0x38c52
int64_t function_38c4a(int64_t result) {
    // 0x38c4a
    *(int64_t *)result = result + 48;
    return result;
}

// Address range: 0x38c52 - 0x38c56
int64_t function_38c52(int64_t result) {
    // 0x38c52
    return result;
}

// Address range: 0x38c56 - 0x38d04
int64_t function_38c56(int64_t a1, int64_t a2) {
    // 0x38c56
    if (*(int32_t *)(a1 - 8) < 0) {
        // 0x38cf6
        return a1 + a2;
    }
    int64_t v1 = a1 - 24; // 0x38c74
    if (v1 == (int64_t)g13) {
        // 0x38cf6
        return v1 + a2;
    }
    // 0x38c81
    if ((char)function_25622(v1) == 0) {
        // 0x38cec
        *(int32_t *)(v1 - 8) = -1;
        // 0x38cf6
        return v1 + a2;
    }
    uint64_t v2 = *(int64_t *)(a1 - 48); // 0x38c8d
    int64_t v3; // 0x38c56
    if (v2 > *(int64_t *)(a1 - 40)) {
        goto lab_0x38c97;
    } else {
        int64_t v4 = function_25622(v1); // 0x38cc3
        v3 = v1;
        if ((char)v4 != 0) {
            goto lab_0x38c97;
        } else {
            goto lab_0x38cdd;
        }
    }
  lab_0x38c97:;
    int64_t v5 = function_38a5e(v2, *(int64_t *)(v1 - 16)); // 0x38ca1
    int64_t v6 = v5 + 24; // 0x38ca9
    int64_t v7 = -24; // 0x38cad
    int64_t v8; // 0x38c56
    if (v2 != 0) {
        // 0x38caf
        function_25a28(v6, v2, v2);
        v8 = v2;
        v7 = v5;
    }
    // 0x38cce
    function_38a2e(v7);
    *(int64_t *)a1 = v6;
    int64_t v9 = v8; // 0x38cda
    v3 = v7;
    goto lab_0x38cdd;
  lab_0x38cdd:;
    int64_t v10 = v3 - 24; // 0x38ce3
    function_2562c(v10, v2, v9);
    // 0x38cec
    *(int32_t *)(v10 - 8) = -1;
    // 0x38cf6
    return v10 + a2;
}

// Address range: 0x38d04 - 0x38d08
int64_t function_38d04(int64_t result) {
    // 0x38d04
    return result;
}

// Address range: 0x38d08 - 0x38d3e
int64_t function_38d08(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x38d18
    int64_t v2 = *v1; // 0x38d18
    int64_t result; // 0x38d08
    if (v2 == a1) {
        // 0x38d32
        *v1 = a1;
        return result;
    }
    int64_t v3 = a1 + 48; // 0x38d27
    function_38b62(a1);
    while (v2 != v3) {
        int64_t v4 = v3;
        v3 = v4 + 48;
        function_38b62(v4);
    }
    // 0x38d32
    *v1 = a1;
    return result;
}

// Address range: 0x38d3e - 0x38d42
int64_t function_38d3e(int64_t result) {
    // 0x38d3e
    return result;
}

// Address range: 0x38d42 - 0x38d4c
int64_t function_38d42(int64_t a1, int64_t a2) {
    // 0x38d42
    return a2 & -256 | (int64_t)(bool)(a1 != a2);
}

// Address range: 0x38d4c - 0x38d54
int64_t function_38d4c(int64_t result) {
    // 0x38d4c
    *(int64_t *)result = result + 8;
    return result;
}

// Address range: 0x38d54 - 0x38d58
int64_t function_38d54(int64_t result) {
    // 0x38d54
    return result;
}

// Address range: 0x38d58 - 0x38d64
int64_t function_38d58(int64_t a1) {
    // 0x38d58
    return *(int64_t *)(a1 + 8) - a1 >> 3;
}

// Address range: 0x38d64 - 0x38d8c
int64_t function_38d64(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x38d64
    int64_t v2 = *v1; // 0x38d64
    if (v2 == *(int64_t *)(a1 + 16)) {
        // 0x38d81
        return function_38d98(a1, v2, a2);
    }
    int64_t result = function_38e9c(v2, a2); // 0x38d75
    *v1 = *v1 + 48;
    return result;
}

// Address range: 0x38d8c - 0x38d97
int64_t function_38d8c(int64_t a1) {
    // 0x38d8c
    return a1 & -256 | (int64_t)(*(int64_t *)(a1 + 8) == a1);
}

// Address range: 0x38d98 - 0x38e9c
int64_t function_38d98(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x38dbf
    int64_t v2 = 0x555555555555555; // 0x38df3
    int64_t v3; // 0x38d98
    int64_t v4; // 0x38d98
    if (v2 > 0x555555555555555 || v2 < -0x5555555555555555 * (*v1 - a1 >> 4)) {
        goto lab_0x38e8b;
    } else {
        // 0x38e02
        v3 = v2;
        v4 = 0;
        if (v2 != 0) {
            goto lab_0x38e8b;
        } else {
            goto lab_0x38e0e;
        }
    }
  lab_0x38e8b:;
    int64_t v5 = function_4efd30(48 * v2); // 0x38e8f
    v3 = v2;
    v4 = v5;
    goto lab_0x38e0e;
  lab_0x38e0e:;
    int64_t v6 = v4 + a2 - a1; // 0x38e0e
    function_38e9c(v6, a3);
    int64_t v7 = function_38ef3(a2, *v1, function_38ef3(v6, a2, v4) + 48); // 0x38e35
    int64_t v8 = *v1; // 0x38e3a
    int64_t v9 = a2; // 0x38e49
    if (v8 != a2) {
        int64_t v10 = a2 + 48; // 0x38e4e
        function_38b62(a2);
        v9 = a2;
        while (v8 != v10) {
            int64_t v11 = v10;
            v10 = v11 + 48;
            function_38b62(v11);
            v9 = v11;
        }
    }
    // 0x38e59
    if (v9 != 0) {
        // 0x38e62
        function_4eeb50(v9);
    }
    // 0x38e67
    *(int64_t *)a1 = v4;
    *v1 = v7;
    *(int64_t *)(a1 + 16) = v4 + 48 * v3;
    int64_t result; // 0x38d98
    return result;
}

// Address range: 0x66e54 - 0x66e7a
int64_t function_66e54(int64_t a1, int64_t a2) {
    int64_t result = 0; // 0x66e64
    int64_t v1; // 0x66e54
    if (v1 != __readfsqword(40)) {
        // 0x66e66
        __stack_chk_fail();
        result = (int64_t)&g22;
    }
    // 0x66e6b
    return result;
}

// Address range: 0x66e7a - 0x66e87
int64_t function_66e7a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x66e7a
    *(int32_t *)a1 = 13;
    *(int32_t *)(a1 + 4) = (int32_t)a2;
    *(int32_t *)(a1 + 8) = (int32_t)a3;
    int64_t result; // 0x66e7a
    return result;
}

// Address range: 0x66e88 - 0x66e8b
int64_t function_66e88(void) {
    // 0x66e88
    int64_t v1; // 0x66e88
    return v1 & -256 | 1;
}

// Address range: 0x66e8c - 0x66e92
int64_t function_66e8c(void) {
    // 0x66e8c
    return 6;
}

// Address range: 0x66e92 - 0x66ea2
int64_t function_66e92(int64_t a1, int64_t a2) {
    // 0x66e92
    return 4 * (int64_t)(bool)((int32_t)a2 == 13) | 3;
}

// Address range: 0x70c90 - 0x70c91
int64_t function_70c90(void) {
    // 0x70c90
    int64_t result; // 0x70c90
    return result;
}

// Address range: 0x70ca0 - 0x70ca1
int64_t function_70ca0(void) {
    // 0x70ca0
    int64_t result; // 0x70ca0
    return result;
}

// Address range: 0x70cfc - 0x70d14
int64_t function_70cfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x70cfc
    int64_t v1; // 0x70cfc
    int32_t * v2 = (int32_t *)(v1 - 0xe76a77c); // 0x70cfd
    *v2 = *v2 >> 26;
    int64_t v3; // 0x70cfc
    int64_t v4 = (int64_t)*(int32_t *)&v3; // 0x70d04
    uint64_t v5 = 90 * v4; // 0x70d04
    int32_t * v6 = (int32_t *)(v1 - 0x4a2254e7); // 0x70d07
    *v6 = *v6 - (int32_t)a2 + (int32_t)(v5 != 0x5a00000000 * v4 >> 32);
    *(int64_t *)a5 = a5;
    int64_t v7; // 0x70cfc
    *(char *)a1 = *(char *)&v7 + (char)(v5 / 256);
    return function_70d4b((int64_t)&g22);
}

// Address range: 0x70d14 - 0x70d1b
int64_t function_70d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4;
    uint32_t v2 = v1 % 32; // 0x70d14
    if (v2 != 0) {
        bool v3; // 0x70d14
        *(int32_t *)a4 = v1 << v2 | (int32_t)((a4 & 0xffffffff) >> (int64_t)(33 - v2)) | (int32_t)v3 << v2 - 1;
    }
    int64_t result; // 0x70d14
    return result;
}

// Address range: 0x70d4b - 0x70d57
int64_t function_70d4b(int64_t a1) {
    // 0x70d4b
    int64_t v1; // 0x70d4b
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x70d6c - 0x70ddb
int64_t function_70d6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x70d6c
    int64_t v1; // 0x70d6c
    int64_t v2 = v1 + a1 & 0xffffffff; // 0x70d73
    char * v3 = (char *)(v2 + 0x530a8ec4); // 0x70d7e
    *v3 = *v3 + (char)(v1 / 256);
    int64_t v4 = *(int32_t *)(v2 - 0x8f877b4) > 0xa2d1c352 ? 0x5f628219 : 0x5f62821a; // 0x70d8b
    int32_t * v5 = (int32_t *)(v4 - 0xdff8ec0); // 0x70d9b
    *v5 = *v5 - 32;
    int64_t result = v4; // 0x70dce
    if (v1 != __readfsqword(40)) {
        // 0x70dd0
        __stack_chk_fail();
        result = (int64_t)&g22;
    }
    // 0x70dd5
    return result;
}

// Address range: 0x70ddc - 0x70df2
int64_t function_70ddc(int64_t a1, int64_t a2) {
    // 0x70ddc
    return function_30d914();
}

// Address range: 0x70e0d - 0x70e0e
int64_t function_70e0d(void) {
    // 0x70e0d
    int64_t result; // 0x70e0d
    return result;
}

// Address range: 0x70e53 - 0x70ef4
int64_t function_70e53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x70e53
    bool v1; // 0x70e53
    if (v1) {
        int64_t v2 = a4 & -0xff01 | (int64_t)&g21; // 0x70e79
        int32_t * v3 = (int32_t *)(v2 + 0xa380a41); // 0x70e7b
        uint32_t v4 = *v3; // 0x70e7b
        *v3 = v4 / 0x40000 | 0x4000 * v4;
        int32_t * v5 = (int32_t *)v2; // 0x70e84
        int64_t v6; // 0x70e53
        int32_t v7 = *v5 & (int32_t)v6; // 0x70e84
        *v5 = v7;
        if (v7 == 0) {
            function_70e0d();
        }
        // 0x70e88
        return __asm_iretd();
    }
    char * v8 = (char *)(a4 + 0x40d34f7b); // 0x70e56
    *v8 = *v8 & 8;
    int32_t * v9 = (int32_t *)(a1 + 16); // 0x70ee1
    uint32_t result = *v9; // 0x70ee1
    *v9 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x70ef3
        return result;
    }
    // 0x70eee
    return function_4eeb50(a1);
}

// Address range: 0x48c45a - 0x48c4c5
int64_t function_48c45a(int64_t a1, int64_t a2) {
    // 0x48c45a
    if (a2 == a1) {
        // 0x48c4ba
        return (int64_t)&g17;
    }
    int64_t result; // 0x48c45a
    if (a1 == 0) {
        // 0x48c4a3
        function_542470("basic_string::_S_construct null not valid");
        result = (int64_t)&g17;
    } else {
        int64_t v1 = a2 - a1; // 0x48c474
        int64_t v2 = function_48c3e4(v1, 0); // 0x48c47c
        int64_t v3 = v2 + 24; // 0x48c481
        function_25a28(v3, a1, v1);
        function_2562c(v2, v1, v1);
        result = v3;
    }
    // 0x48c4ba
    return result;
}

// Address range: 0x48c4c5 - 0x48c5e5
int64_t function_48c4c5(int64_t a1, int64_t a2) {
    int64_t v1 = a2 - a1;
    int64_t v2 = __readfsqword(40); // 0x48c4e1
    int64_t v3 = 0; // bp-49, 0x48c4f6
    int64_t v4 = v1; // 0x48c501
    int64_t v5 = a1; // 0x48c501
    int64_t v6; // 0x48c4c5
    if (v1 < 256) {
        goto lab_0x48c565;
    } else {
        int64_t v7 = v1 / 256; // 0x48c4c5
        int64_t v8 = a1; // 0x48c4c5
        int64_t v9 = function_48bfc0(&v3, v8); // 0x48c509
        v6 = v8;
        while ((char)v9 == 0) {
            int64_t v10 = v8 + 64; // 0x48c516
            int64_t v11 = function_48bfc0(&v3, v10); // 0x48c520
            v6 = v10;
            if ((char)v11 != 0) {
                // break -> 0x48c5c0
                break;
            }
            int64_t v12 = v8 + 128; // 0x48c52d
            int64_t v13 = function_48bfc0(&v3, v12); // 0x48c53a
            v6 = v12;
            if ((char)v13 != 0) {
                // break -> 0x48c5c0
                break;
            }
            int64_t v14 = v8 + 192; // 0x48c543
            int64_t v15 = function_48bfc0(&v3, v14); // 0x48c557
            v6 = v14;
            if ((char)v15 != 0) {
                // break -> 0x48c5c0
                break;
            }
            int64_t v16 = v7;
            v5 = v8 + 256;
            v7 = v16 - 1;
            v8 = v5;
            if (v16 < 2) {
                // 0x48c4fb
                v4 = a2 - v5;
                goto lab_0x48c565;
            }
            v9 = function_48bfc0(&v3, v8);
            v6 = v8;
        }
        goto lab_0x48c5c0;
    }
  lab_0x48c565:;
    int64_t v17 = v4 >> 6; // 0x48c56b
    int64_t v18 = v5; // 0x48c4c5
    int64_t v19; // 0x48c4c5
    switch (v17) {
        case 2: {
            goto lab_0x48c597;
        }
        case 3: {
            int64_t v20 = function_48bfc0(&v3, v5); // 0x48c58a
            v6 = v5;
            if ((char)v20 != 0) {
                goto lab_0x48c5c0;
            } else {
                // 0x48c593
                v18 = v5 + 64;
                goto lab_0x48c597;
            }
        }
        default: {
            // 0x48c57b
            v19 = v5;
            if (v17 != 1) {
                // 0x48c5bd
                v6 = a2;
                goto lab_0x48c5c0;
            } else {
                goto lab_0x48c5ac;
            }
        }
    }
  lab_0x48c597:;
    int64_t v21 = function_48bfc0(&v3, v18); // 0x48c59f
    v6 = v18;
    if ((char)v21 != 0) {
        goto lab_0x48c5c0;
    } else {
        // 0x48c5a8
        v19 = v18 + 64;
        goto lab_0x48c5ac;
    }
  lab_0x48c5c0:;
    int64_t result = v6; // 0x48c5d1
    if (v2 != __readfsqword(40)) {
        // 0x48c5d3
        __stack_chk_fail();
        result = (int64_t)&g22;
    }
    // 0x48c5d8
    return result;
  lab_0x48c5ac:;
    int64_t v22 = function_48bfc0(&v3, v19); // 0x48c5b4
    v6 = v19;
    if ((char)v22 != 0) {
        goto lab_0x48c5c0;
    } else {
        // 0x48c5bd
        v6 = a2;
        goto lab_0x48c5c0;
    }
}

// Address range: 0x48c5e6 - 0x48c5fa
int64_t function_48c5e6(int64_t a1) {
    for (int64_t i = 0; i < 37; i += 4) {
        // 0x48c5e8
        *(int32_t *)(i + a1) = 0;
    }
    // 0x48c5f9
    return 40;
}

// Address range: 0x48c5fa - 0x48c60a
int64_t function_48c5fa(int64_t a1) {
    for (int64_t i = 0; i < 21; i++) {
        // 0x48c5fc
        *(char *)(i + a1) = 0;
    }
    // 0x48c609
    return 21;
}

// Address range: 0x48c60a - 0x48c61e
int64_t function_48c60a(int64_t a1) {
    for (int64_t i = 0; i < 37; i += 4) {
        // 0x48c60c
        *(int32_t *)(i + a1) = 0;
    }
    // 0x48c61d
    return 40;
}

// Address range: 0x48c61e - 0x48c62e
int64_t function_48c61e(int64_t a1) {
    for (int64_t i = 0; i < 17; i++) {
        // 0x48c620
        *(char *)(i + a1) = 0;
    }
    // 0x48c62d
    return 17;
}

// Address range: 0x48c62e - 0x48c642
int64_t function_48c62e(int64_t a1) {
    for (int64_t i = 0; i < 37; i += 4) {
        // 0x48c630
        *(int32_t *)(i + a1) = 0;
    }
    // 0x48c641
    return 40;
}

// Address range: 0x48c642 - 0x48c656
int64_t function_48c642(int64_t a1) {
    for (int64_t i = 0; i < 49; i += 4) {
        // 0x48c644
        *(int32_t *)(i + a1) = 0;
    }
    // 0x48c655
    return 52;
}

// Address range: 0x48c656 - 0x48c666
int64_t function_48c656(int64_t a1) {
    for (int64_t i = 0; i < 8; i++) {
        // 0x48c658
        *(char *)(i + a1) = 0;
    }
    // 0x48c665
    return 8;
}

// Address range: 0x48c666 - 0x48c676
int64_t function_48c666(int64_t a1) {
    for (int64_t i = 0; i < 20; i++) {
        // 0x48c668
        *(char *)(i + a1) = 0;
    }
    // 0x48c675
    return 20;
}

// Address range: 0x48c676 - 0x48c686
int64_t function_48c676(int64_t a1) {
    for (int64_t i = 0; i < 14; i++) {
        // 0x48c678
        *(char *)(i + a1) = 0;
    }
    // 0x48c685
    return 14;
}

// Address range: 0x48c686 - 0x48c696
int64_t function_48c686(int64_t a1) {
    for (int64_t i = 0; i < 27; i++) {
        // 0x48c688
        *(char *)(i + a1) = 0;
    }
    // 0x48c695
    return 27;
}

// Address range: 0x48c696 - 0x48c69a
int64_t function_48c696(int64_t result) {
    // 0x48c696
    return result;
}

// Address range: 0x4d1c3c - 0x4d1e97
int64_t function_4d1c3c(int64_t a1) {
    // 0x4d1c3c
    int64_t v1; // bp-152, 0x4d1c3c
    function_4d19d0(&v1);
    int64_t v2; // 0x4d1c3c
    if ((int32_t)function_4d1a60(&v1, 2, &g1, 128) != 0) {
        // 0x4d1c91
        v2 = 1;
        if ((int32_t)a1 != 0) {
            // 0x4d1e60
            printf("  CCM: setup failed");
            v2 = 1;
        }
      lab_0x4d1c9f:
        // 0x4d1c9f
        return v2 & 0xffffff01;
    }
    // 0x4d1ce0
    int64_t str; // bp-184, 0x4d1c3c
    int64_t v3 = (int64_t)&str; // 0x4d1ce0
    int64_t v4 = 0;
    if ((int32_t)a1 != 0) {
        // 0x4d1e30
        printf("  CCM-AES #%u: ", (int32_t)v4 + 1);
    }
    int64_t v5 = 8 * v4; // 0x4d1d0f
    int64_t v6 = *(int64_t *)(v5 + (int64_t)&g2); // 0x4d1d0f
    int64_t n = *(int64_t *)(v5 + (int64_t)&g3); // 0x4d1d1a
    int64_t v7 = *(int64_t *)(v5 + (int64_t)&g4); // 0x4d1d2a
    int64_t v8 = *(int64_t *)(v5 + (int64_t)&g5); // 0x4d1d38
    while ((int32_t)function_4d1b30(&v1, n, &g6, v8, &g7, v7, (int64_t)" !\"#$%&'()*+,-./01234567", &str, n + v3, v6) == 0) {
        int64_t str2 = 32 * v4 + (int64_t)&g8; // 0x4d1d80
        if (memcmp(&str, (int64_t *)str2, (int32_t)(n + v6)) != 0) {
            // break -> 0x4d1e78
            break;
        }
        int64_t v9 = function_4d1b80(&v1, n, &g6, v8, &g7, v7, str2, &str, n + str2, v6); // 0x4d1dd2
        if ((int32_t)v9 != 0) {
            // break -> 0x4d1e78
            break;
        }
        // 0x4d1ddf
        if (memcmp(&str, (int64_t *)" !\"#$%&'()*+,-./01234567", (int32_t)n) != 0) {
            // break -> 0x4d1e78
            break;
        }
        if ((int32_t)a1 != 0) {
            // 0x4d1e50
            puts("passed");
        }
        int64_t v10 = v4 + 1; // 0x4d1dfe
        if (v4 == 2) {
            int64_t v11 = v10 & 0x7fffffffffffff00; // 0x4d1e11
            function_4d1b10(&v1);
            v2 = v11;
            if ((int32_t)a1 == 0) {
                return v2 & 0xffffff01;
            } else {
                // 0x4d1e21
                putchar(10);
                v2 = v11;
                return v2 & 0xffffff01;
            }
        }
        v4 = v10;
        if ((int32_t)a1 != 0) {
            // 0x4d1e30
            printf("  CCM-AES #%u: ", (int32_t)v4 + 1);
        }
        // 0x4d1cf0
        v5 = 8 * v4;
        v6 = *(int64_t *)(v5 + (int64_t)&g2);
        n = *(int64_t *)(v5 + (int64_t)&g3);
        v7 = *(int64_t *)(v5 + (int64_t)&g4);
        v8 = *(int64_t *)(v5 + (int64_t)&g5);
    }
    // 0x4d1e78
    if ((int32_t)a1 != 0) {
        // 0x4d1e81
        puts("failed");
    }
    // 0x4d1c9f
    return 1;
}

// Address range: 0x4e13f9 - 0x4e13fa
int64_t function_4e13f9(void) {
    // 0x4e13f9
    int64_t result; // 0x4e13f9
    return result;
}

// Address range: 0x4e1441 - 0x4e1444
int64_t function_4e1441(void) {
    // 0x4e1441
    int64_t result; // 0x4e1441
    return result;
}

// Address range: 0x4e1447 - 0x4e1448
int64_t function_4e1447(int64_t a1) {
    // 0x4e1447
    int64_t result; // 0x4e1447
    return result;
}

// Address range: 0x4fc11b - 0x4fc36e
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_4fc11b(int64_t a1, uint64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 225); // 0x4fc120
    if (*v1 != 0) {
        // 0x4fc129
        return (int64_t)*(char *)(a1 + 224);
    }
    int64_t * v2 = (int64_t *)(a1 + 240); // 0x4fc141
    int64_t v3 = *v2; // 0x4fc141
    if (v3 != 0) {
        // 0x4fc14d
        int64_t result; // 0x4fc11b
        if (*(char *)(v3 + 56) == 0) {
            // 0x4fc170
            function_54d560(v3);
            result = 32;
        } else {
            // 0x4fc153
            result = (int64_t)*(char *)(v3 + 89);
        }
        // 0x4fc157
        *(char *)(a1 + 224) = (char)result;
        *v1 = 1;
        return result;
    }
    // 0x4fc19a
    function_5423f0();
    if (*v1 != 0) {
        char * v4 = (char *)(a1 + 224); // 0x4fc1b2
        *v4 = (char)a2;
        return (int64_t)*v4;
    }
    int64_t v5 = *v2; // 0x4fc1c8
    if (v5 != 0) {
        // 0x4fc1d4
        int64_t result2; // 0x4fc11b
        if (*(char *)(v5 + 56) == 0) {
            // 0x4fc1f8
            function_54d560(v5);
            result2 = 32;
        } else {
            // 0x4fc1dc
            result2 = (int64_t)*(char *)(v5 + 89);
        }
        // 0x4fc1e2
        *(char *)(a1 + 224) = (char)a2;
        *v1 = 1;
        return result2;
    }
    // 0x4fc222
    function_5423f0();
    int64_t v6 = *v2; // 0x4fc234
    if (v6 != 0) {
        char * v7 = (char *)(a2 % 256 + 313 + v6); // 0x4fc244
        unsigned char result3 = *v7; // 0x4fc244
        if (result3 != 0) {
            // 0x4fc250
            return result3;
        }
        int64_t v8 = *(int64_t *)(*(int64_t *)v6 + 64); // 0x4fc260
        int64_t v9 = v8 != g14 ? v8 : a2;
        char v10 = v9; // 0x4fc26d
        if ((char)a3 == v10) {
            // 0x4fc250
            return a3 & 0xffffffff;
        }
        // 0x4fc275
        *v7 = v10;
        return v9 & 0xffffffff;
    }
    // 0x4fc299
    function_5423f0();
    int64_t v11 = *v2; // 0x4fc2a5
    if (v11 != 0) {
        // 0x4fc2b1
        if (*(char *)(v11 + 56) != 0) {
            // 0x4fc250
            return (int64_t)*(char *)(a2 % 256 + 57 + v11);
        }
        // 0x4fc2d0
        function_54d560(v11);
        return a2 & 0xffffffff;
    }
    // 0x4fc300
    function_5423f0();
    function_54cb80();
    *(int64_t *)(a1 + 216) = 0;
    *(char *)(a1 + 224) = 0;
    *v1 = 0;
    *(int64_t *)(a1 + 232) = 0;
    *v2 = 0;
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)a1 = (int64_t)&g10;
    return (int64_t)&g10;
}

// Address range: 0x4fc370 - 0x4fc378
int64_t function_4fc370(int64_t a1, int64_t a2) {
    // 0x4fc370
    *(int64_t *)(a1 + 232) = a2;
    int64_t result; // 0x4fc370
    return result;
}

// Address range: 0x50316a - 0x50323b
int64_t function_50316a(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(result - 24) + result; // 0x50318e
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x503194
    function_54d0a0(v1, v2);
    function_4fc380(v1, v1 + 208);
    function_4fc380(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x5031bd
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x5031c4
    *v3 = *v4;
    *v4 = *v3;
    char * v5 = (char *)(v2 + 224); // 0x5031e2
    char * v6 = (char *)(v1 + 224); // 0x5031e9
    *v6 = *v5;
    *v5 = *v6;
    char * v7 = (char *)(v2 + 225); // 0x5031fc
    char * v8 = (char *)(v1 + 225); // 0x503203
    *v8 = *v7;
    *v7 = *v8;
    int64_t * v9 = (int64_t *)(a2 + 8); // 0x503216
    int64_t v10 = *v9; // 0x503216
    int64_t * v11 = (int64_t *)(result + 8); // 0x50321b
    *v11 = v10;
    *v9 = *v11;
    function_502fa0(result + 16, a2 + 16, v10);
    return result;
}

// Address range: 0x503240 - 0x50330b
int64_t function_503240(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(result - 24) + result; // 0x50325e
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x503264
    function_54d0a0(v1, v2);
    function_4fc380(v1, v1 + 208);
    function_4fc380(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x50328d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x503294
    *v3 = *v4;
    *v4 = *v3;
    char * v5 = (char *)(v2 + 224); // 0x5032b2
    char * v6 = (char *)(v1 + 224); // 0x5032b9
    *v6 = *v5;
    *v5 = *v6;
    char * v7 = (char *)(v2 + 225); // 0x5032cc
    char * v8 = (char *)(v1 + 225); // 0x5032d3
    *v8 = *v7;
    *v7 = *v8;
    int64_t * v9 = (int64_t *)(a2 + 8); // 0x5032e6
    int64_t v10 = *v9; // 0x5032e6
    int64_t * v11 = (int64_t *)(result + 8); // 0x5032eb
    *v11 = v10;
    *v9 = *v11;
    function_502fa0(result + 24, a2 + 24, v10);
    return result;
}

// Address range: 0x503310 - 0x5033c9
int64_t function_503310(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(result - 24) + result; // 0x50332e
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x503334
    function_54d0a0(v1, v2);
    function_4fc380(v1, v1 + 208);
    function_4fc380(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x50335d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x503364
    *v3 = *v4;
    *v4 = *v3;
    char * v5 = (char *)(v2 + 224); // 0x503382
    char * v6 = (char *)(v1 + 224); // 0x503389
    *v6 = *v5;
    *v5 = *v6;
    char * v7 = (char *)(v2 + 225); // 0x50339c
    unsigned char v8 = *v7; // 0x50339c
    char * v9 = (char *)(v1 + 225); // 0x5033a3
    *v9 = v8;
    *v7 = *v9;
    function_502fa0(result + 8, a2 + 8, (int64_t)v8);
    return result;
}

// Address range: 0x505a3a - 0x505b09
int64_t function_505a3a(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(result - 24) + result; // 0x505a5e
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x505a64
    function_54d0a0(v1, v2);
    function_4fcce0(v1, v1 + 208);
    function_4fcce0(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x505a8d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x505a94
    *v3 = *v4;
    int32_t * v5 = (int32_t *)(v2 + 224); // 0x505aab
    *v4 = *v3;
    int32_t * v6 = (int32_t *)(v1 + 224); // 0x505ab8
    *v6 = *v5;
    char * v7 = (char *)(v2 + 228); // 0x505ac4
    *v5 = *v6;
    char * v8 = (char *)(v1 + 228); // 0x505ad1
    *v8 = *v7;
    int64_t * v9 = (int64_t *)(a2 + 8); // 0x505ade
    int64_t v10 = *v9; // 0x505ade
    *v7 = *v8;
    int64_t * v11 = (int64_t *)(result + 8); // 0x505ae9
    *v11 = v10;
    *v9 = *v11;
    function_505870(result + 16, a2 + 16, v10);
    return result;
}

// Address range: 0x505b10 - 0x505bd9
int64_t function_505b10(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(result - 24) + result; // 0x505b2e
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x505b34
    function_54d0a0(v1, v2);
    function_4fcce0(v1, v1 + 208);
    function_4fcce0(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x505b5d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x505b64
    *v3 = *v4;
    int32_t * v5 = (int32_t *)(v2 + 224); // 0x505b7b
    *v4 = *v3;
    int32_t * v6 = (int32_t *)(v1 + 224); // 0x505b88
    *v6 = *v5;
    char * v7 = (char *)(v2 + 228); // 0x505b94
    *v5 = *v6;
    char * v8 = (char *)(v1 + 228); // 0x505ba1
    *v8 = *v7;
    int64_t * v9 = (int64_t *)(a2 + 8); // 0x505bae
    int64_t v10 = *v9; // 0x505bae
    *v7 = *v8;
    int64_t * v11 = (int64_t *)(result + 8); // 0x505bb9
    *v11 = v10;
    *v9 = *v11;
    function_505870(result + 24, a2 + 24, v10);
    return result;
}

// Address range: 0x505be0 - 0x505c97
int64_t function_505be0(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(result - 24) + result; // 0x505bfe
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x505c04
    function_54d0a0(v1, v2);
    function_4fcce0(v1, v1 + 208);
    function_4fcce0(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x505c2d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x505c34
    *v3 = *v4;
    int32_t * v5 = (int32_t *)(v2 + 224); // 0x505c4b
    *v4 = *v3;
    int32_t * v6 = (int32_t *)(v1 + 224); // 0x505c58
    *v6 = *v5;
    char * v7 = (char *)(v2 + 228); // 0x505c64
    unsigned char v8 = *v7; // 0x505c64
    *v5 = *v6;
    char * v9 = (char *)(v1 + 228); // 0x505c71
    *v9 = v8;
    *v7 = *v9;
    function_505870(result + 8, a2 + 8, (int64_t)v8);
    return result;
}

// Address range: 0x509d88 - 0x509e40
// From class:    std::__timepunct<wchar_t>
// Type:          constructor
int64_t function_509d88(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x509d88
    int64_t v1; // 0x509d88
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int32_t *)(v1 + 8) = (int32_t)(a4 != 0) | ((int32_t)&g22 ^ (int32_t)&g22) & -256;
    *(int64_t *)(v1 + 16) = 0;
    *(int64_t *)(v1 + 24) = 0;
    int64_t * v2 = (int64_t *)(v1 + 32); // 0x509dd3
    *v2 = 0;
    *(int64_t *)v1 = (int64_t)&g11;
    int64_t str2 = function_565f80(); // 0x509de2
    char * str = (char *)a3; // 0x509df0
    int32_t strcmp_rc = strcmp(str, (char *)str2); // 0x509df0
    int64_t dest_mem = str2; // 0x509df7
    if (strcmp_rc != 0) {
        int64_t v3 = (int64_t)strlen(str) + 1; // 0x509e20
        int64_t v4 = function_4eec00(v3); // 0x509e27
        dest_mem = (int64_t)memcpy((int64_t *)v4, (int64_t *)a3, (int32_t)v3);
    }
    // 0x509dfd
    *v2 = dest_mem;
    return function_56dd60(v1, a2);
}

// Address range: 0x509e40 - 0x509e7d
int64_t function_509e40(void) {
    // 0x509e40
    while (true) {
        // 0x509e43
        int64_t v1; // 0x509e40
        function_565970(v1);
        int64_t v2; // 0x509e40
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        function_1fd40((int64_t)&g22);
        int64_t v3 = *(int64_t *)(v1 + 32); // 0x509e5b
        if (v2 != v3 && v3 != 0) {
            // 0x509e69
            function_4eeb40(v3);
        }
        int64_t v4 = function_20a50(v3); // 0x509e6e
        function_20540(v3);
        v2 = v4;
    }
}

// Address range: 0x509e80 - 0x509e94
int64_t function_509e80(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x509e80
    *(int64_t *)a2 = *(int64_t *)(v1 + 16);
    int64_t result = *(int64_t *)(v1 + 24); // 0x509e8b
    *(int64_t *)(a2 + 8) = result;
    return result;
}

// Address range: 0x509ea0 - 0x509eb4
int64_t function_509ea0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x509ea0
    *(int64_t *)a2 = *(int64_t *)(v1 + 32);
    int64_t result = *(int64_t *)(v1 + 40); // 0x509eab
    *(int64_t *)(a2 + 8) = result;
    return result;
}

// Address range: 0x509ec0 - 0x509ed4
int64_t function_509ec0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x509ec0
    *(int64_t *)a2 = *(int64_t *)(v1 + 48);
    int64_t result = *(int64_t *)(v1 + 56); // 0x509ecb
    *(int64_t *)(a2 + 8) = result;
    return result;
}

// Address range: 0x509ee0 - 0x509ee2
int64_t function_509ee0(void) {
    // 0x509ee0
    int64_t result; // 0x509ee0
    return result;
}

// Address range: 0x509ef0 - 0x509f04
int64_t function_509ef0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x509ef0
    *(int64_t *)a2 = *(int64_t *)(v1 + 64);
    int64_t result = *(int64_t *)(v1 + 72); // 0x509efb
    *(int64_t *)(a2 + 8) = result;
    return result;
}

// Address range: 0x509f10 - 0x509f52
int64_t function_509f10(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x509f10
    *(int64_t *)a2 = *(int64_t *)(v1 + 88);
    *(int64_t *)(a2 + 8) = *(int64_t *)(v1 + 96);
    *(int64_t *)(a2 + 16) = *(int64_t *)(v1 + 104);
    *(int64_t *)(a2 + 24) = *(int64_t *)(v1 + 112);
    *(int64_t *)(a2 + 32) = *(int64_t *)(v1 + 120);
    *(int64_t *)(a2 + 40) = *(int64_t *)(v1 + 128);
    int64_t result = *(int64_t *)(v1 + 136); // 0x509f46
    *(int64_t *)(a2 + 48) = result;
    return result;
}

// Address range: 0x50ca88 - 0x50cab8
int64_t function_50ca88(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x50ca88
    int64_t result; // 0x50ca88
    if (*(int64_t *)(a4 + 16) <= a3) {
        // 0x50cab6
        return result;
    }
    int64_t v1 = *(int64_t *)(*(int64_t *)(a4 + 8) + 8 * a3); // 0x50ca92
    if (v1 != 0) {
        int64_t v2 = function_20730(v1, 0x847658, 0x844310, 0); // 0x50caab
        result = v2 & -256 | (int64_t)(v2 != 0);
    }
    // 0x50cab6
    return result;
}

// Address range: 0x54c920 - 0x54ca6b
int64_t function_54c920(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x54c920
    function_542470("basic_string::_M_construct null not valid");
    __stack_chk_fail();
    uint64_t v1 = *(int64_t *)(a2 + 8); // 0x54c944
    *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
    int64_t v2; // 0x54c920
    if (v1 >= a3) {
        int64_t v3 = 4 * a3 + a2; // 0x54c957
        int64_t v4 = v1 - a3; // 0x54c95f
        return function_54c860((int64_t)"basic_string::_M_construct null not valid", v3, 4 * v4 + v3, v4, v2);
    }
    // 0x54c972
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, v1, v2);
    *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = (int64_t)" is %zu) > this->size() (which is %zu)";
    if (a3 < 0x61623a3a676e6973) {
        uint64_t v5 = 0x61623a3a676e6972 - a3; // 0x54c9a7
        int64_t v6 = 4 * a3 + 0x74735f6369736162; // 0x54c9aa
        int64_t v7 = v5 > v1 ? v1 : v5; // 0x54c9b1
        return function_54c860((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", v6, 4 * v7 + v6, v1, 0x74735f6369736162);
    }
    // 0x54c9c9
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, 0x61623a3a676e6972, 0x74735f6369736162);
    *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = (int64_t)" is %zu) > this->size() (which is %zu)";
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "string::string", a3, 0x61623a3a676e6972, 0x74735f6369736162);
    *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = (int64_t)" is %zu) > this->size() (which is %zu)";
    return function_54c860((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"string::string", 4 * a3 + (int64_t)"string::string", 0x61623a3a676e6972, 0x74735f6369736162);
}

// Address range: 0x54ca70 - 0x54cab5
int64_t function_54ca70(int64_t a1, int64_t wstr) {
    // 0x54ca70
    *(int64_t *)a1 = a1 + 16;
    int64_t v1 = -4; // 0x54ca89
    if (wstr != 0) {
        // 0x54ca8b
        v1 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
    }
    // 0x54caa1
    int64_t v2; // 0x54ca70
    return function_54c860(a1, wstr, v1, v2, v2);
}

// Address range: 0x54cac0 - 0x54cadb
int64_t function_54cac0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x54cac0
    *(int64_t *)a1 = a1 + 16;
    int64_t v1; // 0x54cac0
    return function_54c860(a1, a2, 4 * a3 + a2, v1, v1);
}

// Address range: 0x54cae0 - 0x54caf7
int64_t function_54cae0(int64_t a1) {
    // 0x54cae0
    *(int64_t *)a1 = a1 + 16;
    int64_t v1; // 0x54cae0
    return function_54c860(a1, v1, v1, v1, v1);
}

// Address range: 0x54cb00 - 0x54cb6a
int64_t function_54cb00(int64_t result, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a2 + 8); // 0x54cb04
    int64_t v2; // 0x54cb00
    if (v1 < a3) {
        // 0x54cb3e
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", a3, v1, v2);
        return 0x74735f6369736100;
    }
    uint64_t v3 = v1 - a3; // 0x54cb11
    *(int64_t *)result = result + 16;
    int64_t v4 = 4 * a3 + a2; // 0x54cb27
    function_54c860(result, v4, 4 * (v3 > a4 ? a4 : v3) + v4, a4, v2);
    return result;
}

// Address range: 0x54cb70 - 0x54cb7a
int64_t function_54cb70(int64_t a1, int64_t a2) {
    // 0x54cb70
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}

// Address range: 0x54ce15 - 0x54ce18
int64_t function_54ce15(void) {
    // 0x54ce15
    int64_t result; // 0x54ce15
    return result;
}

// Address range: 0x54ce20 - 0x54ce28
int64_t function_54ce20(void) {
    // 0x54ce20
    return function_54cd06();
}

// Address range: 0x54ce30 - 0x54ce39
int64_t function_54ce30(void) {
    // 0x54ce30
    int64_t v1; // 0x54ce30
    return function_54cdc2(*(int64_t *)(v1 + 200));
}

// Address range: 0x54ce42 - 0x54ce45
int64_t function_54ce42(int64_t a1) {
    // 0x54ce42
    int64_t result; // 0x54ce42
    return result;
}

// Address range: 0x550a9c - 0x550a9d
int64_t function_550a9c(void) {
    // 0x550a9c
    int64_t result; // 0x550a9c
    return result;
}

// Address range: 0x550aa0 - 0x550ad2
int64_t function_550aa0(int64_t result) {
    // 0x550aa0
    if (*(int32_t *)(result - 8) < 0) {
        // 0x550ad0
        return result;
    }
    // 0x550aba
    function_550a60(result);
    return result;
}

// Address range: 0x550ae0 - 0x550b02
int64_t function_550ae0(int64_t result) {
    // 0x550ae0
    if (*(int32_t *)(result - 8) < 0) {
        // 0x550b00
        return result;
    }
    // 0x550aea
    function_550a60(result);
    return result;
}

// Address range: 0x550b10 - 0x550b3f
int64_t function_550b10(int64_t result, int64_t a2) {
    // 0x550b10
    if (*(int32_t *)(a2 - 8) >= 0) {
        // 0x550b23
        function_550a60(a2);
    }
    // 0x550b31
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x550b40 - 0x550b69
int64_t function_550b40(int64_t a1, int64_t a2) {
    // 0x550b40
    if (*(int32_t *)(a1 - 8) >= 0) {
        // 0x550b53
        function_550a60(a1);
    }
    // 0x550b5e
    return 4 * a2 + a1;
}

// Address range: 0x550b70 - 0x550b99
int64_t function_550b70(int64_t a1) {
    // 0x550b70
    if (*(int32_t *)(a1 - 8) < 0) {
        // 0x550b90
        return 4 * *(int64_t *)(a1 - 24) + a1;
    }
    // 0x550b7a
    function_550a60(a1);
    return 4 * *(int64_t *)(a1 - 24) + a1;
}

// Address range: 0x550ba0 - 0x550bd7
int64_t function_550ba0(int64_t result, int64_t a2) {
    // 0x550ba0
    if (*(int32_t *)(a2 - 8) >= 0) {
        // 0x550bb3
        function_550a60(a2);
    }
    // 0x550bc1
    *(int64_t *)result = 4 * *(int64_t *)(a2 - 24) + a2;
    return result;
}

// Address range: 0x550be0 - 0x550ca7
int64_t function_550be0(int64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x550bec
    if (v1 > a2) {
        // 0x550bf5
        if (*(int32_t *)(a1 - 8) >= 0) {
            // 0x550bfc
            function_550a60(a1);
        }
        // 0x550c07
        return 4 * a2 + a1;
    }
    // 0x550c12
    int64_t v2; // 0x550be0
    function_542650("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", (char *)a2, v1, v2, v2);
    if (a2 < 0x7274735f63697362) {
        uint64_t v3 = 0x7274735f63697361 - a2; // 0x550c2e
        int64_t v4 = v3 > v1 ? v1 : v3; // 0x550c34
        function_36ff8((int64_t)"basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v4, 0);
        return (int64_t)"basic_string::at: __n (which is %zu) >= this->size() (which is %zu)";
    }
    // 0x550c4c
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", a2, 0x7274735f63697361, v2);
    function_36ff8((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::erase" - 0x6f705f5f203a7325 >> 2, 1, 0);
    *(int32_t *)"OSIX" = -1;
    return (int64_t)"basic_string::erase";
}

// Address range: 0x550cb0 - 0x550cfb
int64_t function_550cb0(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    int64_t v1 = a3 - result >> 2; // 0x550cb6
    if (v1 == 0) {
        // 0x550cbf
        return result;
    }
    // 0x550cc8
    function_36ff8(a1, result - a1 >> 2, v1, 0);
    *(int32_t *)(a1 - 8) = -1;
    return result;
}

// Address range: 0x553f78 - 0x553fa1
int64_t function_553f78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x553f78
    int64_t v1; // 0x553f78
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 119); // 0x553f7a
    unsigned char v4 = *v3; // 0x553f7a
    char v5 = a4; // 0x553f7a
    unsigned char v6 = v4 + v5; // 0x553f7a
    *v3 = v6;
    char * v7 = (char *)(v2 - 117); // 0x553f7e
    *v7 = *v7 - v5 + (char)(v6 < v4);
    int64_t v8 = v2 & -256; // 0x553f82
    *(int64_t *)(a2 + 32) = a3;
    *(int64_t *)(a2 + 40) = *(int64_t *)(v8 | 184);
    int64_t result = *(int64_t *)(v8 | 192); // 0x553f95
    *(int64_t *)(a2 + 48) = result;
    return result;
}

// Address range: 0x5563ab - 0x5563ef
int64_t function_5563ab(int64_t a1, uint32_t a2) {
    int64_t v1 = (int64_t)a2 - 24; // 0x5563af
    int64_t v2; // 0x5563ab
    if (v1 == v2) {
        function_556282();
    }
    // 0x5563bc
    int64_t v3; // bp+23, 0x5563ab
    function_552550(v1, &v3);
    int64_t v4 = a1 - 24; // 0x5563cf
    if (v4 == v2) {
        function_556294();
    }
    // 0x5563dc
    function_552550(v4, &v3);
    return function_556294();
}

// Address range: 0x5563ef - 0x5564b0
int64_t function_5563ef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5563ef
    __stack_chk_fail();
    function_1fd40((int64_t)&g22);
    int64_t v1 = a3 - 24;
    int64_t v2 = a2 - 24;
    int64_t v3 = a1 - 24;
    int64_t v4 = (int64_t)&g22; // 0x5563f7
    while (true) {
        // 0x5563fc
        v4 = function_20a50(v4);
        if (v1 != (int64_t)&g16) {
            // 0x556419
            int64_t v5; // bp+22, 0x5563ef
            function_552550(v1, &v5);
        }
        if (v2 != (int64_t)&g16) {
            // 0x556439
            int64_t v6; // bp+21, 0x5563ef
            function_552550(v2, &v6);
        }
        if (v3 != (int64_t)&g16) {
            // 0x556459
            int64_t v7; // bp+20, 0x5563ef
            function_552550(v3, &v7);
        }
        // 0x55646b
        function_1fd40(v4);
        int64_t v8; // 0x5563ef
        if (v8 != 0) {
            // 0x556478
            function_4eeb40(v8);
        }
        // 0x556480
        if (v8 != 0) {
            // 0x556485
            function_4eeb40(v8);
        }
        // 0x55648d
        if (v8 != 0) {
            // 0x556492
            function_4eeb40(v8);
        }
    }
}

// Address range: 0x5564b0 - 0x5564b5
int64_t function_5564b0(void) {
    // 0x5564b0
    int64_t result; // 0x5564b0
    return result;
}

// Address range: 0x5564b5 - 0x5564d7
int64_t function_5564b5(void) {
    // 0x5564b5
    int64_t v1; // 0x5564b5
    function_20540(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return (int64_t)&g22;
}

// Address range: 0x5564d7 - 0x556507
int64_t function_5564d7(int64_t a1) {
    // 0x5564d7
    int64_t v1; // bp+23, 0x5564d7
    function_552550(a1 - 24, &v1);
    int64_t result; // 0x5564d7
    return result;
}

// Address range: 0x556507 - 0x55650c
int64_t function_556507(void) {
    // 0x556507
    return function_5564d7((int64_t)&g22);
}

// Address range: 0x55650c - 0x55651e
int64_t function_55650c(void) {
    // 0x55650c
    int64_t result; // 0x55650c
    return result;
}

// Address range: 0x55651e - 0x556533
int64_t function_55651e(void) {
    // 0x55651e
    int64_t result; // 0x55651e
    return result;
}

// Address range: 0x556533 - 0x556535
int64_t function_556533(void) {
    // 0x556533
    return function_55650c();
}

// Address range: 0x556535 - 0x55654a
int64_t function_556535(void) {
    // 0x556535
    int64_t result; // 0x556535
    return result;
}

// Address range: 0x55654a - 0x55654c
int64_t function_55654a(void) {
    // 0x55654a
    return function_556535();
}

// Address range: 0x55654c - 0x556564
int64_t function_55654c(void) {
    // 0x55654c
    int64_t result; // 0x55654c
    return result;
}

// Address range: 0x556564 - 0x556569
int64_t function_556564(void) {
    // 0x556564
    int64_t result; // 0x556564
    return result;
}

// Address range: 0x556569 - 0x55656b
int64_t function_556569(void) {
    // 0x556569
    return function_55650c();
}

// Address range: 0x55656b - 0x55656d
int64_t function_55656b(void) {
    // 0x55656b
    return function_556535();
}

// Address range: 0x556570 - 0x556610
int64_t function_556570(int64_t a1) {
    uint64_t v1 = function_566390(&g18); // 0x55657b
    int64_t v2 = (int64_t)&g18; // 0x55658b
    int64_t v3; // 0x556570
    if (*(int64_t *)((int64_t)&g18 + 16) > v1) {
        int64_t v4 = *(int64_t *)((int64_t)&g18 + 8); // 0x556587
        int64_t v5 = *(int64_t *)(v4 + 8 * v1); // 0x55658d
        v2 = 0;
        if (v5 == 0) {
            goto lab_0x5565b2;
        } else {
            int64_t result = function_20730(v5, (int64_t)&g12, 0x846990, 0); // 0x5565a6
            v3 = v5;
            if (result != 0) {
                // 0x5565b0
                return result;
            }
            goto lab_0x5565b7;
        }
    } else {
        goto lab_0x5565b2;
    }
  lab_0x5565b2:
    // 0x5565b2
    function_5423f0();
    v3 = v2;
    goto lab_0x5565b7;
  lab_0x5565b7:
    // 0x5565b7
    function_20110();
    uint64_t v6 = function_566390(&g19); // 0x5565cb
    int64_t v7 = *(int64_t *)v3; // 0x5565d0
    if (*(int64_t *)(v7 + 16) <= v6) {
        // 0x556602
        function_5423f0();
        // 0x556607
        return function_20110();
    }
    int64_t v8 = *(int64_t *)(*(int64_t *)(v7 + 8) + 8 * v6); // 0x5565dd
    if (v8 == 0) {
        // 0x556602
        function_5423f0();
        // 0x556607
        return function_20110();
    }
    int64_t result2 = function_20730(v8, (int64_t)&g12, 0x846978, 0); // 0x5565f6
    if (result2 == 0) {
        // 0x556607
        return function_20110();
    }
    // 0x5565b0
    return result2;
}

// Address range: 0x5743bc - 0x5743c1
int64_t function_5743bc(void) {
    // 0x5743bc
    return function_57413b();
}

// Address range: 0x5743c1 - 0x5743cb
int64_t function_5743c1(void) {
    // 0x5743c1
    int64_t v1; // 0x5743c1
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x5743c1
    *v2 = *v2 + 1;
    return function_574184();
}

// Address range: 0x5743cb - 0x5743d5
int64_t function_5743cb(void) {
    // 0x5743cb
    int64_t v1; // 0x5743cb
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x5743cb
    *v2 = *v2 + 1;
    return function_574286();
}

// Address range: 0x5743d5 - 0x5743dc
int64_t function_5743d5(void) {
    // 0x5743d5
    int64_t v1; // 0x5743d5
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x5743d5
    *v2 = *v2 + 1;
    return function_574387();
}

// Address range: 0x5743dc - 0x5743fc
int64_t function_5743dc(void) {
    // 0x5743dc
    int64_t v1; // 0x5743dc
    function_565970(v1);
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_5743dc();
}

// Address range: 0x5743fc - 0x574415
int64_t function_5743fc(void) {
    // 0x5743fc
    int64_t v1; // 0x5743fc
    function_572060(*(int64_t *)(v1 + 24));
    return function_568730(v1);
}

// Address range: 0x574415 - 0x574441
int64_t function_574415(void) {
    // 0x574415
    int64_t v1; // 0x574415
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_572060(*(int64_t *)(v1 + 24));
    return function_56aeb0(v1);
}

// Address range: 0x574441 - 0x57445a
int64_t function_574441(void) {
    // 0x574441
    int64_t v1; // 0x574441
    function_572060(*(int64_t *)(v1 + 24));
    return function_569eb0(v1);
}

// Address range: 0x57445a - 0x57445c
int64_t function_57445a(void) {
    // 0x57445a
    return function_574415();
}

// Address range: 0x57445c - 0x574478
int64_t function_57445c(void) {
    // 0x57445c
    int64_t v1; // 0x57445c
    function_572060(*(int64_t *)(v1 + 24));
    return function_568460(v1);
}

// Address range: 0x574478 - 0x57447d
int64_t function_574478(void) {
    // 0x574478
    return function_5743dc();
}

// Address range: 0x57447d - 0x574482
int64_t function_57447d(void) {
    // 0x57447d
    return function_5743dc();
}

// Address range: 0x574482 - 0x574487
int64_t function_574482(void) {
    // 0x574482
    return function_5743dc();
}

// Address range: 0x574487 - 0x5744af
int64_t function_574487(void) {
    // 0x574487
    function_542470("cannot create shim for unknown locale::facet");
    int64_t v1; // 0x574487
    function_572060(*(int64_t *)(v1 + 24));
    return function_56adb0(v1);
}

// Address range: 0x5744af - 0x5744b4
int64_t function_5744af(void) {
    // 0x5744af
    return function_5743dc();
}

// Address range: 0x5744b4 - 0x5744eb
int64_t function_5744b4(void) {
    // 0x5744b4
    int64_t v1; // 0x5744b4
    function_565970(v1);
    function_4eeb50(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_572060(*(int64_t *)(v1 + 24));
    return function_569fc0(v1);
}

// Address range: 0x5744eb - 0x5744ed
int64_t function_5744eb(void) {
    // 0x5744eb
    return function_5744b4();
}

// Address range: 0x5744f0 - 0x5745d4
int64_t function_5744f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5744fe
    int64_t v2; // 0x5744f0
    int64_t v3; // 0x5744f0
    int64_t v4; // 0x5744f0
    int64_t v5; // bp-40, 0x5744f0
    int64_t v6; // 0x57451f
    if (a2 == 0 == (a3 != 0)) {
        // 0x5745a7
        function_542470("basic_string::_M_construct null not valid");
        v3 = (int64_t)"basic_string::_M_construct null not valid";
        goto lab_0x5745b3;
    } else {
        // 0x57451c
        v6 = a3 - a2;
        v5 = v6;
        if (v6 < 16) {
            if (v6 != 1) {
                // 0x5745a0
                v4 = a1;
                v2 = a1;
                if (v6 == 0) {
                    goto lab_0x574544;
                } else {
                    goto lab_0x574589;
                }
            } else {
                // 0x574539
                int64_t v7; // 0x5744f0
                *(char *)a1 = (char)v7;
                v4 = a1;
                goto lab_0x574544;
            }
        } else {
            int64_t v8 = function_52b020(a1, &v5, 0); // 0x574578
            *(int64_t *)a1 = v8;
            *(int64_t *)(a1 + 16) = v5;
            v2 = v8;
            goto lab_0x574589;
        }
    }
  lab_0x5745b3:
    // 0x5745b3
    __stack_chk_fail();
    int64_t result = v3 + 16; // 0x5745c0
    *(int64_t *)(v3 + 8) = 0;
    *(char *)result = 0;
    *(int64_t *)v3 = result;
    return result;
  lab_0x574589:
    // 0x574589
    memcpy((int64_t *)v2, (int64_t *)a2, (int32_t)v6);
    v4 = v2;
    goto lab_0x574544;
  lab_0x574544:
    // 0x574544
    *(int64_t *)(a1 + 8) = v5;
    *(char *)(v5 + v4) = 0;
    int64_t result2 = __readfsqword(40) ^ v1; // 0x574555
    v3 = v4;
    if (result2 == 0) {
        // 0x574560
        return result2;
    }
    goto lab_0x5745b3;
}

// Address range: 0x5745e0 - 0x5745f9
int64_t function_5745e0(int64_t a1, int64_t a2) {
    // 0x5745e0
    *(int64_t *)a1 = a1 + 16;
    return function_5744f0(a1, a2, *(int64_t *)(a2 + 8) + a2);
}

// Address range: 0x57958d - 0x579591
int64_t function_57958d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x57958d
    while ((char)(a4 / 256 || a4) != 0) {
        // continue -> 0x57958f
    }
    // 0x579591
    int64_t result; // 0x57958d
    return result;
}

// Address range: 0x579598 - 0x5795a7
int64_t function_579598(void) {
    // 0x579598
    int64_t v1; // 0x579598
    return function_5793f1(v1);
}

// Address range: 0x5795a7 - 0x5795b3
int64_t function_5795a7(void) {
    // 0x5795a7
    int64_t v1; // 0x5795a7
    return function_579548(v1);
}

// Address range: 0x5795b3 - 0x5797c6
int64_t function_5795b3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5795b3
    int64_t v1; // 0x5795b3
    int64_t v2 = v1;
    __stack_chk_fail();
    int64_t v3 = (int64_t)&g22; // 0x5795bf
    int64_t v4; // 0x5795b3
    if (a3 == 1) {
        // 0x5795c1
        function_1fd40((int64_t)&g22);
        int64_t v5 = *(int64_t *)(v2 - 24) + v2; // 0x5795c9
        int32_t * v6 = (int32_t *)(v5 + 32); // 0x5795cd
        *v6 = *v6 | 1;
        int64_t v7 = (int64_t)&g22; // 0x5795d5
        if (*(char *)(v5 + 28) % 2 != 0) {
            // 0x5795d7
            v7 = function_20a50((int64_t)&g22);
            function_20540((int64_t)&g22);
            _Unwind_Resume((struct _Unwind_Exception *)v7);
        }
        // 0x5795ec
        v3 = v7;
        function_20a50(v3);
        v4 = v7;
    }
    int64_t v8 = v4;
    function_1fd40(v3);
    int64_t v9 = *(int64_t *)(*(int64_t *)v8 - 24) + v8; // 0x5795fd
    int32_t * v10 = (int32_t *)(v9 + 32); // 0x579600
    *v10 = *v10 | 1;
    if (*(char *)(v9 + 28) % 2 == 0) {
        // 0x57960a
        function_20540(v9);
        return function_5794b3();
    }
    int64_t v11 = function_20a50(v9); // 0x579617
    function_20540(v9);
    _Unwind_Resume((struct _Unwind_Exception *)v11);
    __readfsqword(40);
    if (g20 != 0) {
        int64_t stream = *(int64_t *)g15; // 0x579720
        fwrite((int64_t *)"terminate called recursively\n", 1, 29, (struct _IO_FILE *)stream);
        abort();
        // UNREACHABLE
    }
    // 0x579655
    g20 = 1;
    int64_t v12 = function_20040(); // 0x57965c
    if (v12 == 0) {
        int64_t stream2 = *(int64_t *)g15; // 0x579758
        fwrite((int64_t *)"terminate called without an active exception\n", 1, 45, (struct _IO_FILE *)stream2);
        abort();
        // UNREACHABLE
    }
    int64_t v13 = *(int64_t *)(v12 + 8); // 0x57966a
    int32_t v14 = -1; // bp-36, 0x579678
    int64_t str2 = v13 + (int64_t)(*(char *)v13 == 42); // 0x579687
    int64_t str = function_20470(str2, 0, 0, (int64_t *)&v14); // 0x57968d
    int64_t * stream3 = (int64_t *)g15; // 0x5796ad
    fwrite((int64_t *)"terminate called after throwing an instance of '", 1, 48, (struct _IO_FILE *)*stream3);
    int64_t stream4 = *stream3; // 0x5796ba
    if (v14 == 0) {
        // 0x5796f8
        fputs((char *)str, (struct _IO_FILE *)stream4);
        goto lab_0x5796ca;
    } else {
        // 0x5796c2
        fputs((char *)str2, (struct _IO_FILE *)stream4);
        goto lab_0x5796ca;
    }
  lab_0x5796ca:
    // 0x5796ca
    fwrite((int64_t *)"'\n", 1, 2, (struct _IO_FILE *)*stream3);
    int64_t v15 = (int64_t)"'\n"; // 0x5796ea
    if (v14 == 0) {
        // 0x579730
        free((int64_t *)str);
        v15 = str;
    }
    // 0x5796ec
    function_20a50(v15);
    // 0x5796f8
    fputs((char *)str, (struct _IO_FILE *)1);
    goto lab_0x5796ca;
}

// Address range: 0x5797c8 - 0x5797c9
int64_t function_5797c8(void) {
    // 0x5797c8
    int64_t result; // 0x5797c8
    return result;
}

// Address range: 0x5797ca - 0x5797d8
int64_t function_5797ca(int64_t a1) {
    // 0x5797ca
    int64_t result; // 0x5797ca
    bool v1; // 0x5797ca
    if (v1) {
        // 0x579839
        return result;
    }
    char v2 = result; // 0x5797cc
    *(char *)a1 = v2;
    int32_t * v3 = (int32_t *)(result - 119); // 0x5797cd
    *v3 = *v3 - 1;
    *(char *)((v1 ? -1 : 1) + a1) = v2;
    return result;
}
