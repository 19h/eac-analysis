/*
 * Targeted RetDec C for native executable gap queue batch 3902.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x25239-0x2527b rank=- name=- kind=- bytes=- uncovered=-
 *   0x29d4c-0x29d94 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35af4-0x35b38 rank=- name=- kind=- bytes=- uncovered=-
 *   0x360df-0x36126 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38ad4-0x38b18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38b8d-0x38bd2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x477ac-0x477fa rank=- name=- kind=- bytes=- uncovered=-
 *   0x4786c-0x478b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea6b-0x4eab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eb0e-0x4eb52 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50f4b-0x50f90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b1a-0x56b60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5b4af-0x5b4f4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x67c0d-0x67c50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x70f76-0x70fba rank=- name=- kind=- bytes=- uncovered=-
 *   0x71ced-0x71d34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496c08-0x496c50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d8c59-0x4d8ca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eeae8-0x4eeb30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f53b4-0x4f5400 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd4d6-0x4fd520 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51005d-0x5100a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51b95b-0x51b9a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e53a-0x52e580 rank=- name=- kind=- bytes=- uncovered=-
 *   0x542248-0x542290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54294c-0x542990 rank=- name=- kind=- bytes=- uncovered=-
 *   0x542a2c-0x542a70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5526d7-0x552720 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5551f9-0x555240 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568416-0x568460 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5686e7-0x568730 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b4a7-0x56b4f0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_250b0();
int64_t function_251e8();
int64_t function_25239(int64_t a1);
int64_t function_254fe();
int64_t function_2562c();
int64_t function_25a28();
int64_t function_29d4c(int64_t result);
int64_t function_35a7e();
int64_t function_35af4(int64_t a1, int64_t a2);
int64_t function_360df(int64_t a1);
int64_t function_360e6(int64_t a1, int64_t result);
int64_t function_360ee(int64_t a1);
int64_t function_360f6(int64_t result);
int64_t function_360fa(int64_t a1);
int64_t function_36102(int64_t a1, int64_t result);
int64_t function_36b64();
int64_t function_38a5e();
int64_t function_38ad4(int64_t a1, int64_t a2);
int64_t function_38b62();
int64_t function_38b8d(int64_t a1);
int64_t function_38b9a(int64_t a1);
int64_t function_470e0();
int64_t function_47294();
int64_t function_477ac(int64_t a1);
int64_t function_4786c(int64_t a1, int64_t a2);
int64_t function_496c08(int64_t a1, int64_t a2);
int64_t function_496c30(int64_t a1, int64_t a2);
int64_t function_496c40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4a41e();
int64_t function_4baf6();
int64_t function_4d8c59(void);
int64_t function_4d8c67(int64_t a1, int64_t a2);
int64_t function_4d8c7f(int64_t a1, int64_t a2);
int64_t function_4d8c96(void);
int64_t function_4e2a6();
int64_t function_4e8b2();
int64_t function_4ea10();
int64_t function_4ea6b(int64_t a1, int64_t a2);
int64_t function_4eb0e(int64_t a1, int64_t a2);
int64_t function_4eeae8(int64_t a1, int64_t a2, int64_t result);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4f53b4(void);
int64_t function_4f53c0(int64_t a1);
int64_t function_4fd4d5();
int64_t function_4fd4d6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fd4e0(void);
int64_t function_4fd4f0(int64_t a1);
int64_t function_50712();
int64_t function_50f4b(int64_t a1, int64_t a2);
int64_t function_50fd62();
int64_t function_50fd99();
int64_t function_51005d(void);
int64_t function_510072(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_510091(void);
int64_t function_51b89f();
int64_t function_51b95b(int64_t a1, int64_t a2);
int64_t function_51b966(void);
int64_t function_52af50();
int64_t function_52e4d7();
int64_t function_52e53a(void);
int64_t function_52e55a(void);
int64_t function_52e55d(void);
int64_t function_52e56f(int64_t a1);
int64_t function_542230();
int64_t function_542240();
int64_t function_542248(void);
int64_t function_542250(int64_t a1, int64_t a2);
int64_t function_542280(int64_t a1);
int64_t function_54294c(void);
int64_t function_542950(int64_t a1);
int64_t function_542a2c(void);
int64_t function_542a30(int64_t a1);
int64_t function_54cf10();
int64_t function_552550();
int64_t function_55267f();
int64_t function_5526d7(void);
int64_t function_5526f6(void);
int64_t function_55270c(void);
int64_t function_554f2d();
int64_t function_554f5e();
int64_t function_554f68();
int64_t function_55501b();
int64_t function_5551f9(void);
int64_t function_55520b(void);
int64_t function_55521e(void);
int64_t function_555229(uint64_t a1);
int64_t function_565a0();
int64_t function_566180();
int64_t function_568383();
int64_t function_568416(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_568438(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_568455(int64_t a1);
int64_t function_5686e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_568707(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_568724(int64_t a1);
int64_t function_56b06();
int64_t function_56b1a(int64_t a1);
int64_t function_56b32(int64_t a1, int64_t a2);
int64_t function_56b4a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56b4c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_56b4e3(int64_t a1);
int64_t function_56b529();
int64_t function_5b2e6();
int64_t function_5b4af(int64_t a1, int64_t a2);
int64_t function_67c0d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_67c17(int64_t a1, int64_t a2, int64_t a3);
int64_t function_67c21(int64_t a1, int64_t a2, int64_t a3);
int64_t function_67c2b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_67c35(int64_t a1, int64_t a2, int64_t a3);
int64_t function_67c40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_70f00();
int64_t function_70f76(int64_t a1, int64_t a2);
int64_t function_71ced(int64_t a1);
int64_t function_71d12(int64_t a1);
int64_t function_71d1a(int64_t a1);
int64_t function_72782();
int64_t function_72994();
int64_t function_72bbc();

// Address range: 0x25239 - 0x2527b
int64_t function_25239(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x25241
    int64_t v2 = function_72994(v1); // 0x25245
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x2524a
    int64_t v4 = v1; // 0x25254
    int64_t result = v2; // 0x25254
    int64_t v5 = v1; // 0x25254
    if (v3 != v1) {
        int64_t v6 = v4 + 8; // 0x25256
        v4 += 64;
        result = function_254fe(v6);
        v5 = v6;
        while (v3 != v4) {
            // 0x25256
            v6 = v4 + 8;
            v4 += 64;
            result = function_254fe(v6);
            v5 = v6;
        }
    }
    // 0x25265
    if (v5 == 0) {
        // 0x25276
        return result;
    }
    // 0x2526d
    return function_4eeb50(v5);
}

// Address range: 0x29d4c - 0x29d93
int64_t function_29d4c(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x29d60
    function_250b0();
    if (v1 != __readfsqword(40)) {
        // 0x29d85
        __stack_chk_fail();
    }
    // 0x29d8a
    return result;
}

// Address range: 0x35af4 - 0x35b38
int64_t function_35af4(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x35afe
    int64_t v2 = function_35a7e(v1, *(int64_t *)(a1 + 8)); // 0x35b05
    int64_t result = 0; // 0x35b17
    if (v1 != 0) {
        // 0x35b19
        function_25a28(result, a1 + 24, v1);
    }
    // 0x35b25
    function_2562c(v2, result);
    return result;
}

// Address range: 0x360df - 0x360e5
int64_t function_360df(int64_t a1) {
    // 0x360df
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x360e6 - 0x360ed
int64_t function_360e6(int64_t a1, int64_t result) {
    // 0x360e6
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x360ee - 0x360f6
int64_t function_360ee(int64_t a1) {
    // 0x360ee
    return *(int64_t *)(a1 - 24);
}

// Address range: 0x360f6 - 0x360fa
int64_t function_360f6(int64_t result) {
    // 0x360f6
    return result;
}

// Address range: 0x360fa - 0x36102
int64_t function_360fa(int64_t a1) {
    // 0x360fa
    return *(int64_t *)(a1 - 24) + a1;
}

// Address range: 0x36102 - 0x36126
int64_t function_36102(int64_t a1, int64_t result) {
    // 0x36102
    function_36b64();
    return result;
}

// Address range: 0x38ad4 - 0x38b18
int64_t function_38ad4(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x38ade
    int64_t v2 = function_38a5e(v1, *(int64_t *)(a1 + 8)); // 0x38ae5
    int64_t result = 0; // 0x38af7
    if (v1 != 0) {
        // 0x38af9
        function_25a28(result, a1 + 24, v1);
    }
    // 0x38b05
    function_2562c(v2, result);
    return result;
}

// Address range: 0x38b8d - 0x38b9a
int64_t function_38b8d(int64_t a1) {
    // 0x38b8d
    int64_t v1; // 0x38b8d
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x38b8d
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    *(int64_t *)(a1 + 16) = 0;
    return result;
}

// Address range: 0x38b9a - 0x38bd2
int64_t function_38b9a(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x38ba1
    int64_t v2 = a1; // 0x38bab
    int64_t result; // 0x38b9a
    if (v1 != a1) {
        int64_t v3 = a1 + 48; // 0x38bb0
        result = function_38b62(a1);
        v2 = a1;
        while (v1 != v3) {
            int64_t v4 = v3;
            v3 = v4 + 48;
            result = function_38b62(v4);
            v2 = v4;
        }
    }
    // 0x38bbb
    if (v2 == 0) {
        // 0x38bcd
        return result;
    }
    // 0x38bc4
    return function_4eeb50(v2);
}

// Address range: 0x477ac - 0x477fa
int64_t function_477ac(int64_t a1) {
    // 0x477ac
    function_251e8(a1 + 16);
    function_4e2a6(a1 + (int64_t)&g2);
    *(int64_t *)(a1 + (int64_t)&g4) = 0;
    function_4a41e(a1 + (int64_t)&g5);
    *(char *)(a1 + (int64_t)&g6) = 1;
    function_4baf6(a1 + 40);
    int64_t result = function_47294(a1); // 0x477ef
    *(char *)(a1 + 24) = 0;
    return result;
}

// Address range: 0x4786c - 0x478b0
int64_t function_4786c(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x47876
    int64_t v2 = function_470e0(v1, *(int64_t *)(a1 + 8)); // 0x4787d
    int64_t result = 0; // 0x4788f
    if (v1 != 0) {
        // 0x47891
        function_25a28(result, a1 + 24, v1);
    }
    // 0x4789d
    function_2562c(v2, result);
    return result;
}

// Address range: 0x4ea6b - 0x4eab5
int64_t function_4ea6b(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 8; // 0x4ea72
    int64_t v2 = *(int64_t *)v1; // 0x4ea72
    if (v2 == a2) {
        // 0x4eab0
        return 0;
    }
    int64_t v3 = v1;
    char v4 = *(char *)(v3 - 8); // 0x4ea85
    int64_t result = 0; // 0x4ea96
    while ((char)function_4ea10(a1, v3, v4) != 0) {
        int64_t v5 = v3 + 16; // 0x4ea98
        if (v2 == v3 + 8) {
            // 0x4eaaa
            result = v5 & -256 | 1;
            return result;
        }
        v3 = v5;
        v4 = *(char *)(v3 - 8);
        result = 0;
    }
  lab_0x4eab0:
    // 0x4eab0
    return result;
}

// Address range: 0x4eb0e - 0x4eb52
int64_t function_4eb0e(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x4eb18
    int64_t v2 = function_4e8b2(v1, *(int64_t *)(a1 + 8)); // 0x4eb1f
    int64_t result = 0; // 0x4eb31
    if (v1 != 0) {
        // 0x4eb33
        function_25a28(result, a1 + 24, v1);
    }
    // 0x4eb3f
    function_2562c(v2, result);
    return result;
}

// Address range: 0x50f4b - 0x50f90
int64_t function_50f4b(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x50f56
    int64_t v2 = function_50712(v1, *(int64_t *)(a1 + 8)); // 0x50f5d
    int64_t result = 0; // 0x50f6f
    if (v1 != 0) {
        // 0x50f71
        function_25a28(result, a1 + 24, v1);
    }
    // 0x50f7d
    function_2562c(v2, result);
    return result;
}

// Address range: 0x56b1a - 0x56b31
int64_t function_56b1a(int64_t a1) {
    // 0x56b1a
    function_56b06();
    return function_4eeb30(a1, &g1);
}

// Address range: 0x56b32 - 0x56b5f
int64_t function_56b32(int64_t a1, int64_t a2) {
    // 0x56b32
    function_565a0();
    *(int64_t *)a1 = (int64_t)&g7;
    __asm_rep_movsd_memcpy((char *)(a1 + 33), (char *)a2, 140);
    int64_t result; // 0x56b32
    return result;
}

// Address range: 0x5b4af - 0x5b4f4
int64_t function_5b4af(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x5b4ba
    int64_t v2 = function_5b2e6(v1, *(int64_t *)(a1 + 8)); // 0x5b4c1
    int64_t result = 0; // 0x5b4d3
    if (v1 != 0) {
        // 0x5b4d5
        function_25a28(result, a1 + 24, v1);
    }
    // 0x5b4e1
    function_2562c(v2, result);
    return result;
}

// Address range: 0x67c0d - 0x67c17
int64_t function_67c0d(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a3 == 1) {
        // 0x67c11
        *(int64_t *)a1 = a2;
    }
    // 0x67c14
    return 0;
}

// Address range: 0x67c17 - 0x67c21
int64_t function_67c17(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a3 == 1) {
        // 0x67c1b
        *(int64_t *)a1 = a2;
    }
    // 0x67c1e
    return 0;
}

// Address range: 0x67c21 - 0x67c2b
int64_t function_67c21(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a3 == 1) {
        // 0x67c25
        *(int64_t *)a1 = a2;
    }
    // 0x67c28
    return 0;
}

// Address range: 0x67c2b - 0x67c35
int64_t function_67c2b(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a3 == 1) {
        // 0x67c2f
        *(int64_t *)a1 = a2;
    }
    // 0x67c32
    return 0;
}

// Address range: 0x67c35 - 0x67c3f
int64_t function_67c35(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a3 == 1) {
        // 0x67c39
        *(int64_t *)a1 = a2;
    }
    // 0x67c3c
    return 0;
}

// Address range: 0x67c40 - 0x67c4f
int64_t function_67c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x67c40
    *(int64_t *)(a1 + 144) = a2;
    *(int64_t *)(a1 + 152) = a3;
    int64_t result; // 0x67c40
    return result;
}

// Address range: 0x70f76 - 0x70fba
int64_t function_70f76(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x70f80
    int64_t v2 = function_70f00(v1, *(int64_t *)(a1 + 8)); // 0x70f87
    int64_t result = 0; // 0x70f99
    if (v1 != 0) {
        // 0x70f9b
        function_25a28(result, a1 + 24, v1);
    }
    // 0x70fa7
    function_2562c(v2, result);
    return result;
}

// Address range: 0x71ced - 0x71d11
int64_t function_71ced(int64_t a1) {
    // 0x71ced
    *(char *)(a1 + 408) = 1;
    __asm_mfence(a1 + 248);
    function_72782();
    return function_72bbc(a1);
}

// Address range: 0x71d12 - 0x71d1a
int64_t function_71d12(int64_t a1) {
    // 0x71d12
    return *(int64_t *)(a1 + 200);
}

// Address range: 0x71d1a - 0x71d33
int64_t function_71d1a(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 344); // 0x71d1b
    int64_t result = 0; // 0x71d27
    if (v1 != 0) {
        // 0x71d29
        result = function_52af50() - v1;
    }
    // 0x71d31
    return result;
}

// Address range: 0x496c08 - 0x496c29
int64_t function_496c08(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 373); // 0x496c10
    int64_t result = 16 * a2 & 16 | (int64_t)(*v1 & -17); // 0x496c20
    *v1 = (char)result;
    return result;
}

// Address range: 0x496c30 - 0x496c37
int64_t function_496c30(int64_t a1, int64_t a2) {
    // 0x496c30
    *(int32_t *)(a1 + 360) = (int32_t)a2;
    int64_t result; // 0x496c30
    return result;
}

// Address range: 0x496c40 - 0x496c4d
int64_t function_496c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x496c40
    *(int32_t *)(a1 + 340) = (int32_t)a2;
    *(int32_t *)(a1 + 344) = (int32_t)a3;
    int64_t result; // 0x496c40
    return result;
}

// Address range: 0x4d8c59 - 0x4d8c67
int64_t function_4d8c59(void) {
    // 0x4d8c59
    int64_t result; // 0x4d8c59
    int64_t v1 = result - 4;
    return result;
}

// Address range: 0x4d8c67 - 0x4d8c7f
int64_t function_4d8c67(int64_t a1, int64_t a2) {
    // 0x4d8c67
    int64_t result; // 0x4d8c67
    *(int32_t *)a2 = (int32_t)result;
    int64_t v1 = (result & 0xffffffff) - 4;
    *(int32_t *)(v1 + a2) = *(int32_t *)(v1 + a1);
    return result;
}

// Address range: 0x4d8c7f - 0x4d8c95
int64_t function_4d8c7f(int64_t a1, int64_t a2) {
    // 0x4d8c7f
    int64_t result; // 0x4d8c7f
    int64_t v1 = (result & 0xffffffff) - 2;
    *(int16_t *)(v1 + a2) = *(int16_t *)(v1 + a1);
    return result;
}

// Address range: 0x4d8c96 - 0x4d8c9c
int64_t function_4d8c96(void) {
    // 0x4d8c96
    int64_t result; // 0x4d8c96
    return result;
}

// Address range: 0x4eeae8 - 0x4eeb24
int64_t function_4eeae8(int64_t a1, int64_t a2, int64_t result) {
    // 0x4eeae8
    if (a2 == 0) {
        // 0x4eeb1d
        return result;
    }
    int64_t result2 = result; // 0x4eeb05
    int64_t v1 = a1 + 1; // 0x4eeb08
    result2 = 0x100000001b3 * (result2 ^ (int64_t)*(char *)a1);
    while (v1 != a2 + a1) {
        int64_t v2 = v1;
        v1 = v2 + 1;
        result2 = 0x100000001b3 * (result2 ^ (int64_t)*(char *)v2);
    }
    // 0x4eeb1d
    return result2;
}

// Address range: 0x4f53b4 - 0x4f53c0
int64_t function_4f53b4(void) {
    // 0x4f53b4
    int64_t result; // 0x4f53b4
    return result;
}

// Address range: 0x4f53c0 - 0x4f53fb
// From class:    std::istream
// Type:          constructor
int64_t function_4f53c0(int64_t a1) {
    // 0x4f53c0
    *(int64_t *)(a1 + 8) = 0;
    int64_t v1 = a1 + 16; // 0x4f53d3
    *(int64_t *)a1 = (int64_t)&g8;
    *(int64_t *)v1 = (int64_t)&g9;
    function_54cf10(v1);
    return function_4eeb50(a1);
}

// Address range: 0x4fd4d6 - 0x4fd4dd
int64_t function_4fd4d6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4fd4d6
    int64_t v1; // 0x4fd4d6
    return v1 & 0xffffffff;
}

// Address range: 0x4fd4e0 - 0x4fd4e9
int64_t function_4fd4e0(void) {
    // 0x4fd4e0
    return function_4fd4d5();
}

// Address range: 0x4fd4f0 - 0x4fd51f
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4fd4f0(int64_t a1) {
    // 0x4fd4f0
    if (*(int64_t *)(a1 + 32) < *(int64_t *)(a1 + 40)) {
        // 0x4fd500
        return (int32_t)a1 == -1 ? 0xffffffff : 0;
    }
    // 0x4fd4fa
    return 0;
}

// Address range: 0x51005d - 0x510072
int64_t function_51005d(void) {
    // 0x51005d
    return function_50fd62();
}

// Address range: 0x510072 - 0x51008d
int64_t function_510072(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x510072
    int64_t v1; // 0x510072
    *(int64_t *)(v1 - 120) = a6;
    *(int32_t *)(v1 - 104) = (int32_t)v1;
    return function_50fd99();
}

// Address range: 0x510091 - 0x510094
int64_t function_510091(void) {
    // 0x510091
    int64_t result; // 0x510091
    return result;
}

// Address range: 0x51b95b - 0x51b966
int64_t function_51b95b(int64_t a1, int64_t a2) {
    // 0x51b95b
    return function_51b89f();
}

// Address range: 0x51b966 - 0x51b995
int64_t function_51b966(void) {
    // 0x51b966
    __stack_chk_fail();
    int64_t v1; // 0x51b966
    int64_t v2 = *(int64_t *)(v1 - 96); // 0x51b96b
    if (v2 != v1 + 16) {
        // 0x51b97b
        function_4eeb50(v2);
    }
    while (true) {
        // 0x51b980
        function_566180(v1);
        _Unwind_Resume((struct _Unwind_Exception *)&g13);
    }
}

// Address range: 0x52e53a - 0x52e548
int64_t function_52e53a(void) {
    // 0x52e53a
    int64_t v1; // 0x52e53a
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x52e53a
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_52e4d7();
}

// Address range: 0x52e55a - 0x52e55b
int64_t function_52e55a(void) {
    // 0x52e55a
    int64_t result; // 0x52e55a
    return result;
}

// Address range: 0x52e55d - 0x52e560
int64_t function_52e55d(void) {
    // 0x52e55d
    int64_t result; // 0x52e55d
    return result;
}

// Address range: 0x52e56f - 0x52e573
int64_t function_52e56f(int64_t a1) {
    // 0x52e56f
    int64_t result; // 0x52e56f
    return result;
}

// Address range: 0x542248 - 0x542250
int64_t function_542248(void) {
    // 0x542248
    int64_t result; // 0x542248
    return result;
}

// Address range: 0x542250 - 0x54227c
// From class:    *N12_GLOBAL__N_121system_error_categoryE
// Type:          virtual member function
int64_t function_542250(int64_t a1, int64_t a2) {
    int64_t result = a2 & 0xffffffff; // 0x542257
    if ((int32_t)a2 < 132) {
        int32_t v1 = *(int32_t *)(4 * result + (int64_t)&g3); // 0x542262
        return (int64_t)v1 + (int64_t)&g3;
    }
    // 0x542270
    function_542230();
    return result;
}

// Address range: 0x542280 - 0x54228c
int64_t function_542280(int64_t a1) {
    // 0x542280
    function_542240();
    int64_t v1; // 0x542280
    return v1 & 0xffffffff;
}

// Address range: 0x54294c - 0x542950
int64_t function_54294c(void) {
    // 0x54294c
    int64_t result; // 0x54294c
    return result;
}

// Address range: 0x542950 - 0x542983
// From class:    std::ostream
// Type:          constructor
int64_t function_542950(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x54295b
    *(int64_t *)a1 = (int64_t)&g11;
    *(int64_t *)v1 = (int64_t)&g9;
    function_54cf10(v1);
    return function_4eeb50(a1);
}

// Address range: 0x542a2c - 0x542a30
int64_t function_542a2c(void) {
    // 0x542a2c
    int64_t result; // 0x542a2c
    return result;
}

// Address range: 0x542a30 - 0x542a63
// From class:    std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_542a30(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x542a3b
    *(int64_t *)a1 = (int64_t)&g12;
    *(int64_t *)v1 = (int64_t)&g10;
    function_54cf10(v1);
    return function_4eeb50(a1);
}

// Address range: 0x5526d7 - 0x5526eb
int64_t function_5526d7(void) {
    // 0x5526d7
    function_552550();
    return function_55267f();
}

// Address range: 0x5526f6 - 0x5526f7
int64_t function_5526f6(void) {
    // 0x5526f6
    int64_t result; // 0x5526f6
    return result;
}

// Address range: 0x55270c - 0x552717
int64_t function_55270c(void) {
    // 0x55270c
    int64_t result; // 0x55270c
    int32_t * v1 = (int32_t *)(result - 119); // 0x55270c
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x5551f9 - 0x55520b
int64_t function_5551f9(void) {
    // 0x5551f9
    int64_t v1; // 0x5551f9
    return function_554f68(0xffffffff, v1);
}

// Address range: 0x55520b - 0x55521e
int64_t function_55520b(void) {
    // 0x55520b
    int64_t v1; // 0x55520b
    return function_554f68(0xffffffff, v1 & 0xffffffff);
}

// Address range: 0x55521e - 0x555229
int64_t function_55521e(void) {
    // 0x55521e
    return function_554f2d();
}

// Address range: 0x555229 - 0x55523c
int64_t function_555229(uint64_t a1) {
    // 0x555229
    int64_t v1; // 0x555229
    if ((uint64_t)v1 < a1) {
        function_554f5e();
    }
    // 0x555237
    return function_55501b();
}

// Address range: 0x568416 - 0x568423
int64_t function_568416(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x568416
    int64_t v1; // 0x568416
    *(int64_t *)(*(int64_t *)(v1 + 16) + 16) = a4;
    return function_568383();
}

// Address range: 0x568438 - 0x56844a
int64_t function_568438(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x568438
    int64_t v1; // 0x568438
    char * v2 = (char *)(v1 - 57);
    *v2 = *v2 | (char)a4;
    int64_t v3; // 0x568438
    int64_t v4; // 0x568438
    *(char *)a5 = *(char *)&v3 + (char)v4;
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    int64_t v6 = v4;
    int64_t result = (v6 + a4 / 256) % 256 | v6 & -256; // 0x568441
    int32_t * v7 = (int32_t *)(a2 - 0x76b70055); // 0x568443
    *v7 = *v7 | (int32_t)result;
    return result;
}

// Address range: 0x568455 - 0x568459
int64_t function_568455(int64_t a1) {
    // 0x568455
    int64_t result; // 0x568455
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x5686e7 - 0x5686ee
int64_t function_5686e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5686e7
    int64_t result; // 0x5686e7
    char * v1 = (char *)(result - 119); // 0x5686e8
    bool v2; // 0x5686e7
    *v1 = (char)v2 + (char)a4 + *v1;
    return result;
}

// Address range: 0x568707 - 0x568719
int64_t function_568707(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x568707
    int64_t v1; // 0x568707
    char * v2 = (char *)(v1 - 57);
    *v2 = *v2 | (char)a4;
    int64_t v3; // 0x568707
    int64_t v4; // 0x568707
    *(char *)a5 = *(char *)&v3 + (char)v4;
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    int64_t v6 = v4;
    return (v6 + a4 / 256) % 256 | v6 & -256;
}

// Address range: 0x568724 - 0x568728
int64_t function_568724(int64_t a1) {
    // 0x568724
    int64_t result; // 0x568724
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x56b4a7 - 0x56b4ae
int64_t function_56b4a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56b4a7
    int64_t result; // 0x56b4a7
    char * v1 = (char *)(result - 119); // 0x56b4a8
    bool v2; // 0x56b4a7
    *v1 = (char)v2 + (char)a4 + *v1;
    return result;
}

// Address range: 0x56b4c7 - 0x56b4d9
int64_t function_56b4c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x56b4c7
    int64_t v1; // 0x56b4c7
    char * v2 = (char *)(v1 - 57);
    *v2 = *v2 | (char)a4;
    int64_t v3; // 0x56b4c7
    int64_t result; // 0x56b4c7
    *(char *)a5 = *(char *)&v3 + (char)result;
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    unsigned char v5 = (char)result + (char)(a4 / 256); // 0x56b4d0
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x56b4d0
    int64_t v7 = result & -256 | (int64_t)v5; // 0x56b4d0
    result = v7;
    int64_t v8 = v7; // 0x56b4d2
    if (v6 % 2 == 0) {
        v8 = function_56b529();
        result = v8;
    }
    // 0x56b4d4
    *(int32_t *)a1 = (int32_t)v8;
    int32_t * v9 = (int32_t *)(result - 119); // 0x56b4d5
    *v9 = *v9 - 1;
    return result;
}

// Address range: 0x56b4e3 - 0x56b4e8
int64_t function_56b4e3(int64_t a1) {
    // 0x56b4e3
    int64_t result; // 0x56b4e3
    *(int32_t *)a1 = (int32_t)result;
    return result;
}
