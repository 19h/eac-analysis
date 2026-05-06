/*
 * Targeted RetDec C for native executable gap queue batch 1381.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1abb1c-0x1abd1c rank=- name=- kind=- bytes=- uncovered=-
 *   0x29f2bf-0x29f4bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29f4bf-0x29f6bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29f6bf-0x29f8bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29f8bf-0x29fabf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29fabf-0x29fcbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29fcbf-0x29febf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29febf-0x2a00bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a00bf-0x2a01bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a01bf-0x2a023f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4daf79-0x4daff9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4db1f9-0x4db279 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4db3f9-0x4db4f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4db779-0x4db7f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4db9f9-0x4dbaf9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dbcf9-0x4dbdf9 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g4;
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

int64_t function_10c5f1ab();
int64_t function_1abb1c(void);
int64_t function_1abb27(int64_t a1);
int64_t function_1abb38(void);
int64_t function_1abb4f(void);
int64_t function_1abb93(void);
int64_t function_1abba2(int64_t a1);
int64_t function_1abba9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1abca1(int64_t a1, int64_t a2);
int64_t function_1abcde(void);
int64_t function_1abcec(void);
int64_t function_29f26e();
int64_t function_29f2bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29f2db(void);
int64_t function_29f2df(int64_t a1);
int64_t function_29f332(void);
int64_t function_29f36b(void);
int64_t function_29f3a1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29f3d8(void);
int64_t function_29f433(int64_t a1);
int64_t function_29f481(void);
int64_t function_29f48c(void);
int64_t function_29f49b(void);
int64_t function_29f4cc(int64_t a1);
int64_t function_29f55f(void);
int64_t function_29f608(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_29f6c0(int64_t a1);
int64_t function_29f73a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29f791(int64_t a1);
int64_t function_29f795(int64_t a1);
int64_t function_29f7be(void);
int64_t function_29f818(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29f842(void);
int64_t function_29f846(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_29f898(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_29f8eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29f941(void);
int64_t function_29f94b(void);
int64_t function_29f97f(void);
int64_t function_29f9f0(int64_t a1);
int64_t function_29fa64(void);
int64_t function_29fa96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29fb29(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_29fc43(void);
int64_t function_29fc54(int64_t a1);
int64_t function_29fc64(void);
int64_t function_29fc75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29fcaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29fcf0(void);
int64_t function_29fcfe(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_29fd26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29fdfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29fe19(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29fefa(void);
int64_t function_29ff39(void);
int64_t function_29ff43(void);
int64_t function_29ff45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29ffba(int64_t a1);
int64_t function_29ffc7(void);
int64_t function_29ffcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29ffe4(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t result2, int64_t a8);
int64_t function_2a0181(int64_t a1);
int64_t function_4bb402c0();
int64_t function_4daf79(void);
int64_t function_4dafe2(void);
int64_t function_4db1f9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4db241(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4db25d(void);
int64_t function_4db263(int64_t a1);
int64_t function_4db272(void);
int64_t function_4db3ec();
int64_t function_4db3f9(void);
int64_t function_4db401(void);
int64_t function_4db410(void);
int64_t function_4db41a(void);
int64_t function_4db41f(void);
int64_t function_4db42e(int64_t a1);
int64_t function_4db4be(void);
int64_t function_4db4d3(void);
int64_t function_4db4e2(void);
int64_t function_4db4ec(void);
int64_t function_4db4f1(void);
int64_t function_4db779(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4db9f9(void);
int64_t function_4dba69(void);
int64_t function_4dba7e(void);
int64_t function_4dba8d(void);
int64_t function_4dba97(void);
int64_t function_4dba9c(void);
int64_t function_4dbaab(int64_t a1);
int64_t function_4dbce4();
int64_t function_4dbcf9(void);
int64_t function_4dbd08(void);
int64_t function_4dbd12(void);
int64_t function_4dbd17(void);
int64_t function_4dbda4(void);
int64_t function_4dbdb9(void);
int64_t function_4dbdc8(void);
int64_t function_4dbdd2(void);
int64_t function_4dbdd7(void);
int64_t function_4dbde6(int64_t a1);
int64_t function_ffffffffac23647b();
int64_t function_ffffffffc56bfea7();
int64_t function_ffffffffe8d0ef32();
int64_t function_ffffffffef9b740c();
int64_t function_fffffffff5c8f191();
int64_t unknown_10fb2e16();
int64_t unknown_1126009e();
int64_t unknown_13eef221();
int64_t unknown_1a1c6a34();
int64_t unknown_23cd1d18();
int64_t unknown_290395b6();
int64_t unknown_2c8abfcc();
int64_t unknown_332b5f5c();
int64_t unknown_3a3ee78a();
int64_t unknown_3d2be021();
int64_t unknown_3d2be40e();
int64_t unknown_47d66827();
int64_t unknown_54349dba();
int64_t unknown_5ff1f94c();
int64_t unknown_63f74212();
int64_t unknown_6ad561fa();
int64_t unknown_7c9f93bf();
int64_t unknown_c2aaa86();
int64_t unknown_e8466a7();
int64_t unknown_ffffffff80787ab4();
int64_t unknown_ffffffff82adaed2();
int64_t unknown_ffffffff892e16eb();
int64_t unknown_ffffffff9d6e6ea5();
int64_t unknown_ffffffffb58db03e();
int64_t unknown_ffffffffb6c30cf3();
int64_t unknown_ffffffffbc320f59();
int64_t unknown_ffffffffcd292720();
int64_t unknown_ffffffffd31a4aa4();
int64_t unknown_ffffffffe0bf61a9();
int64_t unknown_ffffffffe2b452c9();
int64_t unknown_fffffffff262f045();
int64_t unknown_fffffffff9d3ff32();
int64_t unknown_fffffffffcd84b38();

// Address range: 0x1abb1c - 0x1abb1d
int64_t function_1abb1c(void) {
    // 0x1abb1c
    int64_t result; // 0x1abb1c
    return result;
}

// Address range: 0x1abb27 - 0x1abb28
int64_t function_1abb27(int64_t a1) {
    // 0x1abb27
    int64_t result; // 0x1abb27
    return result;
}

// Address range: 0x1abb38 - 0x1abb46
int64_t function_1abb38(void) {
    // 0x1abb38
    int64_t result; // 0x1abb38
    char * v1 = (char *)(result - 115); // 0x1abb42
    *v1 = *v1 & (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x1abb4f - 0x1abb50
int64_t function_1abb4f(void) {
    // 0x1abb4f
    int64_t result; // 0x1abb4f
    return result;
}

// Address range: 0x1abb93 - 0x1abba1
int64_t function_1abb93(void) {
    // 0x1abb93
    int64_t v1; // 0x1abb93
    return function_1abba9(v1, v1, v1, v1);
}

// Address range: 0x1abba2 - 0x1abba9
int64_t function_1abba2(int64_t a1) {
    // 0x1abba2
    int64_t result; // 0x1abba2
    return result;
}

// Address range: 0x1abba9 - 0x1abc1d
int64_t function_1abba9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = *(char *)-0x745f584b; // 0x1abbae
    int64_t v2; // 0x1abba9
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x1abbae
    *(char *)-0x745f584b = v3;
    bool v4; // 0x1abba9
    int64_t v5 = v2 + 0x968eeac9 + (v4 ? -0x9d689d19 : -0x9d689d18) + (int64_t)(v3 < v1); // 0x1abbb4
    char * v6 = (char *)(v5 & 0xffffffff); // 0x1abbbb
    *v6 = *v6 - 1;
    int64_t result = a2 & 0xffffffff; // 0x1abbbd
    int64_t v7; // 0x1abba9
    char v8 = *(char *)&v7; // 0x1abbbe
    char v9 = (char)(a4 / 256) < (char)v5 ? 17 : 16; // 0x1abbbe
    *(char *)result = v8 - v9;
    if (v8 > v9) {
        // 0x1abbc3
        return result;
    }
    // 0x1abbfc
    return __asm_wait();
}

// Address range: 0x1abca1 - 0x1abcb3
int64_t function_1abca1(int64_t a1, int64_t a2) {
    // 0x1abca1
    return 0x918b473e;
}

// Address range: 0x1abcde - 0x1abcdf
int64_t function_1abcde(void) {
    // 0x1abcde
    int64_t result; // 0x1abcde
    return result;
}

// Address range: 0x1abcec - 0x1abcee
int64_t function_1abcec(void) {
    // 0x1abcec
    return function_1abcde();
}

// Address range: 0x29f2bf - 0x29f2c9
int64_t function_29f2bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 25); // 0x29f2c0
    int64_t v2; // 0x29f2bf
    *v1 = *v1 + (char)v2;
    return unknown_ffffffffe2b452c9(a1, a2, a3, a4);
}

// Address range: 0x29f2db - 0x29f2dd
int64_t function_29f2db(void) {
    // 0x29f2db
    return function_29f26e();
}

// Address range: 0x29f2df - 0x29f2e0
int64_t function_29f2df(int64_t a1) {
    // 0x29f2df
    int64_t result; // 0x29f2df
    return result;
}

// Address range: 0x29f332 - 0x29f333
int64_t function_29f332(void) {
    // 0x29f332
    int64_t result; // 0x29f332
    return result;
}

// Address range: 0x29f36b - 0x29f36c
int64_t function_29f36b(void) {
    // 0x29f36b
    int64_t result; // 0x29f36b
    return result;
}

// Address range: 0x29f3a1 - 0x29f3ad
int64_t function_29f3a1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29f3a1
    __asm_in((int16_t)a3);
    return function_ffffffffe8d0ef32();
}

// Address range: 0x29f3d8 - 0x29f3da
int64_t function_29f3d8(void) {
    // 0x29f3d8
    return function_29f36b();
}

// Address range: 0x29f433 - 0x29f436
int64_t function_29f433(int64_t a1) {
    // 0x29f433
    int64_t result; // 0x29f433
    return result;
}

// Address range: 0x29f481 - 0x29f482
int64_t function_29f481(void) {
    // 0x29f481
    int64_t result; // 0x29f481
    return result;
}

// Address range: 0x29f48c - 0x29f48f
int64_t function_29f48c(void) {
    // 0x29f48c
    int64_t result; // 0x29f48c
    return result;
}

// Address range: 0x29f49b - 0x29f4ad
int64_t function_29f49b(void) {
    // 0x29f49b
    unknown_e8466a7();
    return function_29f481();
}

// Address range: 0x29f4cc - 0x29f4d2
int64_t function_29f4cc(int64_t a1) {
    // 0x29f4cc
    return unknown_ffffffff82adaed2(a1);
}

// Address range: 0x29f55f - 0x29f560
int64_t function_29f55f(void) {
    // 0x29f55f
    int64_t result; // 0x29f55f
    return result;
}

// Address range: 0x29f608 - 0x29f6a3
int64_t function_29f608(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a4 != 1) {
        // 0x29f698
        return unknown_ffffffffd31a4aa4();
    }
    int32_t * v1 = (int32_t *)(a1 + 0x1ea16dcb); // 0x29f624
    int64_t v2; // 0x29f608
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x29f608
    return a2 + 0x78185888 + v2 + (v3 ? 0xfffffffc : 4) & 0xffffffff;
}

// Address range: 0x29f6c0 - 0x29f6c1
int64_t function_29f6c0(int64_t a1) {
    // 0x29f6c0
    int64_t result; // 0x29f6c0
    return result;
}

// Address range: 0x29f73a - 0x29f74d
int64_t function_29f73a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29f73a
    int64_t v1; // 0x29f73a
    if (a4 != 1 == (char)((uint64_t)v1 / 256 || a3) == 0) {
        function_29f6c0((int64_t)&g6);
    }
    // 0x29f73e
    bool v2; // 0x29f73a
    int64_t v3 = v2 ? -4 : 4; // 0x29f73e
    int64_t v4 = a3 & -0xff01 | (int64_t)&g4; // 0x29f73f
    int64_t result = __asm_fnstenv(v3 + a1, v3 + a2, v4); // 0x29f747
    *(int224_t *)v4 = (int224_t)result;
    return result;
}

// Address range: 0x29f791 - 0x29f792
int64_t function_29f791(int64_t a1) {
    // 0x29f791
    int64_t result; // 0x29f791
    return result;
}

// Address range: 0x29f795 - 0x29f796
int64_t function_29f795(int64_t a1) {
    // 0x29f795
    int64_t result; // 0x29f795
    return result;
}

// Address range: 0x29f7be - 0x29f7bf
int64_t function_29f7be(void) {
    // 0x29f7be
    int64_t result; // 0x29f7be
    return result;
}

// Address range: 0x29f818 - 0x29f83e
int64_t function_29f818(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(unknown_3d2be021() - 0x544a85bc); // 0x29f820
    *v1 = *v1 + (int32_t)a1;
    *(int64_t *)a1 = a2;
    bool v2; // 0x29f818
    int64_t v3 = v2 ? -8 : 8; // 0x29f826
    unknown_fffffffff9d3ff32(v3 + a1, v3 + a2, a3 & -256 | 49);
    return function_29f7be();
}

// Address range: 0x29f842 - 0x29f843
int64_t function_29f842(void) {
    // 0x29f842
    int64_t result; // 0x29f842
    return result;
}

// Address range: 0x29f846 - 0x29f88b
int64_t function_29f846(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x29f846
    int64_t result; // 0x29f846
    bool v1; // 0x29f846
    if (!v1) {
        // 0x29f84a
        return result;
    }
    int32_t v2 = result;
    if ((int32_t)v1 + v2 == -v2) {
        function_29f842();
    }
    char * v3 = (char *)(a3 + 0x3d7ce5b6); // 0x29f87e
    *v3 = *v3 | (char)(a3 / 256);
    unknown_3a3ee78a();
    __asm_in_133((int16_t)a3);
    return result & 0xffffffff;
}

// Address range: 0x29f898 - 0x29f8eb
int64_t function_29f898(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x29f898
    unknown_1126009e();
    int64_t v1 = unknown_ffffffffe0bf61a9() | 74; // 0x29f8aa
    *(int32_t *)v1 = (int32_t)v1;
    int64_t v2 = unknown_ffffffff80787ab4(); // 0x29f8ae
    *(char *)-0x1779fc29017287e6 = (char)v2;
    int64_t v3; // 0x29f898
    int32_t * v4 = (int32_t *)(4 * a4 + 0x508029c + v3); // 0x29f8bc
    *v4 = *v4 + (int32_t)v2;
    __asm_hlt();
    int64_t v5 = unknown_2c8abfcc(); // 0x29f8c6
    char * v6 = (char *)(v5 + 0x2537c00); // 0x29f8cb
    *v6 = *v6 + (char)v5;
    int32_t * v7 = (int32_t *)(v3 - 0x8ff6300); // 0x29f8d3
    *v7 = *v7 + (int32_t)v3;
    __asm_int(-103);
    char * v8 = (char *)(a1 + 85); // 0x29f8db
    char v9 = v5 + a4 / 256;
    *v8 = *v8 + v9;
    char * v10 = (char *)((v3 | a2) & 0xffffffff); // 0x29f8e2
    char v11 = v9 | (char)&g2; // 0x29f8e2
    *v10 = *v10 + v11;
    __asm_out_134((int16_t)(((int32_t)v5 | (int32_t)&g2) >> 31), v11);
    return unknown_ffffffff892e16eb();
}

// Address range: 0x29f8eb - 0x29f939
int64_t function_29f8eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29f8eb
    bool v1; // 0x29f8eb
    if (v1) {
        function_fffffffff5c8f191();
    }
    int64_t v2 = unknown_6ad561fa(); // 0x29f8f4
    *(int64_t *)v2 = v2;
    int64_t v3 = a2 + a1; // 0x29f904
    __asm_sti((int32_t)v3);
    int32_t * v4 = (int32_t *)(a2 + 107); // 0x29f907
    int32_t v5 = *v4; // 0x29f907
    *v4 = 2 * v5 | (int32_t)(v5 < 0);
    int64_t v6 = unknown_23cd1d18(); // 0x29f912
    int32_t * v7 = (int32_t *)(a2 - 119); // 0x29f917
    *v7 = *v7 + (int32_t)v6;
    int64_t v8 = v1 ? -1 : 1; // 0x29f91f
    int64_t v9 = v8 + (v3 & 0xffffffff); // 0x29f91f
    int64_t v10 = v8 + a2; // 0x29f91f
    unknown_47d66827(v9, v10);
    int32_t * v11 = (int32_t *)(v9 + 0x9d80147 + v10); // 0x29f926
    *v11 = *v11 + (int32_t)v10;
    return unknown_1a1c6a34();
}

// Address range: 0x29f941 - 0x29f942
int64_t function_29f941(void) {
    // 0x29f941
    int64_t result; // 0x29f941
    return result;
}

// Address range: 0x29f94b - 0x29f94d
int64_t function_29f94b(void) {
    // 0x29f94b
    return function_29f941();
}

// Address range: 0x29f97f - 0x29f987
int64_t function_29f97f(void) {
    // 0x29f97f
    int64_t result; // 0x29f97f
    return result;
}

// Address range: 0x29f9f0 - 0x29f9f1
int64_t function_29f9f0(int64_t a1) {
    // 0x29f9f0
    int64_t result; // 0x29f9f0
    return result;
}

// Address range: 0x29fa64 - 0x29fa65
int64_t function_29fa64(void) {
    // 0x29fa64
    int64_t result; // 0x29fa64
    return result;
}

// Address range: 0x29fa96 - 0x29facb
int64_t function_29fa96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29fa96
    int64_t v1; // 0x29fa96
    int64_t v2 = v1 + 0xe8bc30c5; // 0x29fa96
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff); // 0x29fa9b
    *v3 = *v3 + (int32_t)v2;
    char v4 = v2; // 0x29fa9f
    int64_t v5; // 0x29fa96
    char v6 = *(char *)&v5; // 0x29fa9f
    __asm_fbld(*(float80_t *)(8 * a4 - 0x545cfe18 + v1));
    if (((v4 - v6 ^ v4) & (v6 ^ v4)) < 0) {
        function_29fa64();
    }
    // 0x29faa9
    *(char *)a2 = 0;
    __asm_out_135(-65, (int32_t)unknown_290395b6());
    unknown_7c9f93bf();
    return function_4bb402c0();
}

// Address range: 0x29fb29 - 0x29fc21
int64_t function_29fb29(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x29fb29
    int64_t v1; // 0x29fb29
    int64_t v2 = v1;
    int32_t v3 = a1;
    if (*(char *)(v1 + 0x7d9f10da) <= (char)v2) {
        uint32_t v4 = (int32_t)a3;
        uint32_t v5 = v4 + v3; // 0x29fb37
        *(int32_t *)a3 = v5;
        return ((v2 | a4 / 256) - (v5 < v4 ? 199 : 198)) % 256 | v2 & -256;
    }
    unsigned char v6 = (char)a4;
    int64_t v7 = __asm_hlt(); // 0x29fb75
    char v8 = __asm_in_133((int16_t)a3); // 0x29fb76
    uint32_t v9 = (int32_t)v1; // 0x29fb79
    int64_t v10 = (int64_t)(v9 / 2 | 0x80000000 * v9); // 0x29fb79
    unsigned char v11 = (char)(a4 / 256) + v6; // 0x29fb7b
    *(char *)a4 = v11;
    char * v12 = (char *)(2 * v10 + a3); // 0x29fb7d
    *v12 = (char)(v11 < v6) - (char)(v9 / 512) + *v12;
    int64_t v13 = (v7 & 0xffffff00 | (int64_t)v8) + 0x30612ff; // 0x29fb80
    int64_t result = v13 & 0xffffffff; // 0x29fb80
    uint32_t v14 = (int32_t)a4; // 0x29fb88
    uint32_t v15 = *(int32_t *)(result - 66) + v14; // 0x29fb88
    if (v15 < v14 || v15 == 0) {
        // 0x29fb6c
        return result;
    }
    unsigned char v16 = (char)v13 + 82; // 0x29fb92
    if (v16 == 0) {
        unsigned char v17 = *(char *)((int64_t)v16 + v10); // 0x29fb97
        int64_t result2 = unknown_ffffffff9d6e6ea5(0x843ce5fd, (v13 & 0xffffff00 | (int64_t)v17) + 1, 0x1e8c89f, v15); // 0x29fb9f
        int32_t * v18 = (int32_t *)(v1 + 0x1b201431 + result2); // 0x29fba4
        *v18 = *v18 + (int32_t)v1;
        return result2;
    }
    // 0x29fc05
    __asm_int3();
    __asm_int(33);
    int64_t v19 = unknown_3d2be40e(); // 0x29fc08
    int32_t * v20 = (int32_t *)(v1 - 90); // 0x29fc0d
    *v20 = *v20 + (int32_t)v19;
    unknown_10fb2e16();
    float80_t v21; // 0x29fb29
    *(float32_t *)(a2 + 0xf4644f8) = (float32_t)(v21 * (float80_t)v3);
    return __asm_sti(0x1201e8cc);
}

// Address range: 0x29fc43 - 0x29fc45
int64_t function_29fc43(void) {
    // 0x29fc43
    int64_t result; // 0x29fc43
    return result;
}

// Address range: 0x29fc54 - 0x29fc5b
int64_t function_29fc54(int64_t a1) {
    // 0x29fc54
    int64_t result; // 0x29fc54
    return result;
}

// Address range: 0x29fc64 - 0x29fc66
int64_t function_29fc64(void) {
    // 0x29fc64
    int64_t result; // 0x29fc64
    return result;
}

// Address range: 0x29fc75 - 0x29fc7d
int64_t function_29fc75(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29fc75
    int64_t result; // 0x29fc75
    char * v1 = (char *)(result + 35); // 0x29fc75
    *v1 = 4 * *v1;
    return result;
}

// Address range: 0x29fcaa - 0x29fcb2
int64_t function_29fcaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29fcaa
    return function_29fcfe(a1, a2, a3, a4);
}

// Address range: 0x29fcf0 - 0x29fcf1
int64_t function_29fcf0(void) {
    // 0x29fcf0
    int64_t result; // 0x29fcf0
    return result;
}

// Address range: 0x29fcfe - 0x29fd24
int64_t function_29fcfe(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x29fcfe
    int64_t v1; // 0x29fcfe
    int64_t v2 = v1;
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a2;
    char * v3 = (char *)(v2 + 4 * v1); // 0x29fd00
    *v3 = *v3 | (char)(a4 / 256);
    int32_t * v4 = (int32_t *)(a3 + 14); // 0x29fd09
    uint32_t v5 = *v4; // 0x29fd09
    uint32_t v6 = v5 + (int32_t)v1; // 0x29fd09
    *v4 = v6;
    int32_t * v7 = (int32_t *)(((a3 + 112 + (int64_t)(v6 < v5)) % 256 | a3 & 0xffffff00) + 0xe84edbc9 & 0xffffffff); // 0x29fd14
    *v7 = *v7 + (int32_t)v2;
    return (v2 + 155) % 256 | v2 & 0xffffff00;
}

// Address range: 0x29fd26 - 0x29fdc2
int64_t function_29fd26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29fd26
    int64_t v1; // 0x29fd26
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int32_t * v4 = (int32_t *)(4 * a1 - 53 + v1); // 0x29fd28
    int32_t v5 = *v4 + (int32_t)a2; // 0x29fd28
    *v4 = v5;
    *(char *)a1 = __asm_insb((int16_t)a3);
    if (v5 < 1) {
        function_29fcf0();
    }
    char v6 = *(char *)(a4 - 58); // 0x29fd2f
    unknown_fffffffffcd84b38();
    int64_t v7 = unknown_fffffffff262f045(); // 0x29fd3f
    uint64_t v8 = v7 + 244; // 0x29fd44
    char * v9 = (char *)((256 * (int64_t)(v6 + (char)(v2 / 256)) | v2 & -0xff01) + 0x1e893d7); // 0x29fd46
    char v10 = *v9 & (char)v8; // 0x29fd46
    *v9 = v10;
    if (v10 >= 0) {
        // 0x29fdb1
        return unknown_54349dba();
    }
    char * v11 = (char *)(v8 % 256 | v7 & -256); // 0x29fd50
    *v11 = *v11 - 1;
    unknown_332b5f5c();
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a1;
    *(int64_t *)0x212aa51 = *(int64_t *)0x212aa51 | 107;
    return function_ffffffffac23647b();
}

// Address range: 0x29fdfc - 0x29fe16
int64_t function_29fdfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 79); // 0x29fe00
    int64_t v2; // 0x29fdfc
    *v1 = *v1 + (int32_t)v2;
    *(char *)a1 = (char)v2 ^ -2;
    bool v3; // 0x29fdfc
    unknown_63f74212((v3 ? -1 : 1) + a1);
    return function_ffffffffc56bfea7();
}

// Address range: 0x29fe19 - 0x29fe44
int64_t function_29fe19(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29fe19
    unknown_13eef221();
    int64_t v1; // 0x29fe19
    *(int32_t *)(a2 & 0xffffffff) = *(int32_t *)&v1 + (int32_t)a3;
    __asm_in((int16_t)a3);
    return __asm_in_136(16);
}

// Address range: 0x29fefa - 0x29fefb
int64_t function_29fefa(void) {
    // 0x29fefa
    int64_t result; // 0x29fefa
    return result;
}

// Address range: 0x29ff39 - 0x29ff3a
int64_t function_29ff39(void) {
    // 0x29ff39
    int64_t result; // 0x29ff39
    return result;
}

// Address range: 0x29ff43 - 0x29ff44
int64_t function_29ff43(void) {
    // 0x29ff43
    int64_t result; // 0x29ff43
    return result;
}

// Address range: 0x29ff45 - 0x29ff8c
int64_t function_29ff45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = llvm_ctpop_i8(0); // 0x29ff45
    bool v3; // 0x29ff45
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x29ff45
    int64_t v5 = unknown_5ff1f94c(v4); // 0x29ff46
    int64_t v6; // 0x29ff45
    if (v2 % 2 != 0) {
        // 0x29ff4d
        __asm_rcl(*(char *)(v5 - 0x741705eb));
        unknown_ffffffffbc320f59();
        __asm_in_136(-1);
        int64_t v7 = __asm_sti((int32_t)v4); // 0x29ff5a
        int32_t v8 = (int32_t)v6 + (int32_t)a2; // 0x29ff5d
        *(int32_t *)v6 = v8;
        int64_t result = v7; // 0x29ff5f
        if (a4 != 1 && v8 != 0) {
            result = function_29fefa();
        }
        // 0x29ff61
        return result;
    }
    int32_t * v9 = (int32_t *)(a2 - 0x7fffd39c); // 0x29ff75
    *v9 = *v9 + (int32_t)v4;
    char * v10 = (char *)(8 * v5 + v6); // 0x29ff7b
    *v10 = *v10 + (char)(v6 / 256);
    int64_t result2 = unknown_c2aaa86(); // 0x29ff80
    int32_t * v11 = (int32_t *)(a3 + 28); // 0x29ff85
    *v11 = *v11 + (int32_t)a4;
    int16_t v12 = a3; // 0x29ff88
    __asm_outsb(v12, *(char *)&v1);
    *(char *)v4 = __asm_insb(v12);
    return result2;
}

// Address range: 0x29ffba - 0x29ffbd
int64_t function_29ffba(int64_t a1) {
    // 0x29ffba
    int64_t result; // 0x29ffba
    return result;
}

// Address range: 0x29ffc7 - 0x29ffc8
int64_t function_29ffc7(void) {
    // 0x29ffc7
    int64_t result; // 0x29ffc7
    return result;
}

// Address range: 0x29ffcb - 0x29ffe4
int64_t function_29ffcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29ffcb
    int64_t v1; // 0x29ffcb
    int64_t v2 = v1 & v1;
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) - 0x2d2b9bf6); // 0x29ffd0
    *v3 = *v3 + (int32_t)v1;
    return ((v2 ^ 154) + 24) % 256 | v2 & 0xffffff00;
}

// Address range: 0x29ffe4 - 0x2a0132
int64_t function_29ffe4(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t result2, int64_t a8) {
    int64_t v1 = a1;
    unsigned char v2 = *(char *)(a3 - 0x5da59445); // 0x29ffe7
    uint64_t v3 = unknown_ffffffffb6c30cf3(); // 0x29ffed
    int64_t v4 = v3 & 0xdf933b54 | 0x206cc4ab; // 0x29fff4
    int64_t v5 = (v4 - a4 / 256) % 256 | v4 & 0xffffff00; // 0x29fff9
    int64_t result = v5; // 0x29fff9
    int64_t v6; // 0x29ffe4
    int32_t * v7 = (int32_t *)(v6 + 55 + 4 * v6); // 0x29fffb
    int32_t v8 = *v7; // 0x29fffb
    int32_t v9 = v5; // 0x29fffb
    int32_t v10 = v8 + v9; // 0x29fffb
    *v7 = v10;
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0) {
        // 0x2a0001
        return result;
    }
    unsigned char v11 = (char)(v6 / 256); // 0x29ffe7
    int32_t v12 = *(int32_t *)&result ^ -0x45fcb41b; // 0x2a0014
    *(int32_t *)v6 = v12;
    int64_t v13 = unknown_ffffffffcd292720(); // 0x2a001a
    result = v13;
    uint64_t v14 = a4 - 1; // 0x2a001f
    if (v14 == 0) {
        // 0x2a0021
        *(char *)v1 = *(char *)&v1 | (char)v13;
        int32_t * v15 = (int32_t *)(v6 - 0x5d5c4f54); // 0x2a002a
        int32_t v16 = *v15; // 0x2a002a
        *v15 = v16 + (int32_t)(256 * (v3 / 256 + a3 / 256 + (int64_t)(v2 > v11)) & 0xff00 | a3 & 0xffff00ff);
        if ((*(char *)(result - 105) || (char)a3) < 1) {
            function_29ffc7();
        }
        // 0x2a0037
        return unknown_ffffffffb58db03e();
    }
    // 0x2a005c
    if (llvm_ctpop_i8((char)v12) % 2 == 0) {
        // 0x2a005e
        *(char *)v1 = *(char *)&v1 + (char)a3;
        return result;
    }
    char * v17 = (char *)(a4 + 0x6064019c + v1); // 0x2a00de
    *v17 = *v17 | (char)(v14 / 256);
    *(char *)-0x136d809 = v11 - v2 + *(char *)-0x136d809;
    return result2;
}

// Address range: 0x2a0181 - 0x2a0182
int64_t function_2a0181(int64_t a1) {
    // 0x2a0181
    int64_t result; // 0x2a0181
    return result;
}

// Address range: 0x4daf79 - 0x4daf90
int64_t function_4daf79(void) {
    // 0x4daf79
    int64_t v1; // 0x4daf79
    uint64_t v2 = v1;
    int64_t v3 = 256 * (v2 / 0x2000 & 4 | v2 / 32 & 88) | v2 & 0xc0170018; // 0x4daf79
    int64_t v4 = v3 + 0x7c7611d7; // 0x4daf89
    return v4 - ((int32_t)v3 < 0x8389ee29 ? 7 : 6) & 57 | v4 & 0xfcff7d00;
}

// Address range: 0x4dafe2 - 0x4dafe7
int64_t function_4dafe2(void) {
    // 0x4dafe2
    return function_10c5f1ab();
}

// Address range: 0x4db1f9 - 0x4db1fe
int64_t function_4db1f9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4db1f9
    int64_t result; // 0x4db1f9
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4db241 - 0x4db248
int64_t function_4db241(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4db241
    int64_t v1; // 0x4db241
    __asm_out((int16_t)a3, (int32_t)v1);
    return function_ffffffffef9b740c();
}

// Address range: 0x4db25d - 0x4db25e
int64_t function_4db25d(void) {
    // 0x4db25d
    int64_t result; // 0x4db25d
    return result;
}

// Address range: 0x4db263 - 0x4db266
int64_t function_4db263(int64_t a1) {
    // 0x4db263
    int64_t result; // 0x4db263
    return result;
}

// Address range: 0x4db272 - 0x4db275
int64_t function_4db272(void) {
    // 0x4db272
    return function_4db25d();
}

// Address range: 0x4db3f9 - 0x4db3fb
int64_t function_4db3f9(void) {
    // 0x4db3f9
    int64_t v1; // 0x4db3f9
    return v1 | 197;
}

// Address range: 0x4db401 - 0x4db404
int64_t function_4db401(void) {
    // 0x4db401
    return function_4db3ec();
}

// Address range: 0x4db410 - 0x4db413
int64_t function_4db410(void) {
    // 0x4db410
    int64_t result; // 0x4db410
    return result;
}

// Address range: 0x4db41a - 0x4db41b
int64_t function_4db41a(void) {
    // 0x4db41a
    int64_t result; // 0x4db41a
    return result;
}

// Address range: 0x4db41f - 0x4db422
int64_t function_4db41f(void) {
    // 0x4db41f
    return function_4db41a();
}

// Address range: 0x4db42e - 0x4db431
int64_t function_4db42e(int64_t a1) {
    // 0x4db42e
    int64_t result; // 0x4db42e
    return result;
}

// Address range: 0x4db4be - 0x4db4bf
int64_t function_4db4be(void) {
    // 0x4db4be
    int64_t result; // 0x4db4be
    return result;
}

// Address range: 0x4db4d3 - 0x4db4d6
int64_t function_4db4d3(void) {
    // 0x4db4d3
    return function_4db4be();
}

// Address range: 0x4db4e2 - 0x4db4e5
int64_t function_4db4e2(void) {
    // 0x4db4e2
    int64_t result; // 0x4db4e2
    return result;
}

// Address range: 0x4db4ec - 0x4db4ed
int64_t function_4db4ec(void) {
    // 0x4db4ec
    int64_t result; // 0x4db4ec
    return result;
}

// Address range: 0x4db4f1 - 0x4db4f4
int64_t function_4db4f1(void) {
    // 0x4db4f1
    return function_4db4ec();
}

// Address range: 0x4db779 - 0x4db780
int64_t function_4db779(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4db779
    int64_t v1; // 0x4db779
    int64_t v2 = v1 & -96; // 0x4db779
    char * v3 = (char *)v2; // 0x4db77b
    *v3 = *v3 + (char)v2;
    return __asm_in((int16_t)a3);
}

// Address range: 0x4db9f9 - 0x4db9fa
int64_t function_4db9f9(void) {
    // 0x4db9f9
    int64_t result; // 0x4db9f9
    return result;
}

// Address range: 0x4dba69 - 0x4dba6a
int64_t function_4dba69(void) {
    // 0x4dba69
    int64_t result; // 0x4dba69
    return result;
}

// Address range: 0x4dba7e - 0x4dba81
int64_t function_4dba7e(void) {
    // 0x4dba7e
    return function_4dba69();
}

// Address range: 0x4dba8d - 0x4dba90
int64_t function_4dba8d(void) {
    // 0x4dba8d
    int64_t result; // 0x4dba8d
    return result;
}

// Address range: 0x4dba97 - 0x4dba98
int64_t function_4dba97(void) {
    // 0x4dba97
    int64_t result; // 0x4dba97
    return result;
}

// Address range: 0x4dba9c - 0x4dba9f
int64_t function_4dba9c(void) {
    // 0x4dba9c
    return function_4dba97();
}

// Address range: 0x4dbaab - 0x4dbaae
int64_t function_4dbaab(int64_t a1) {
    // 0x4dbaab
    int64_t result; // 0x4dbaab
    return result;
}

// Address range: 0x4dbcf9 - 0x4dbcfc
int64_t function_4dbcf9(void) {
    // 0x4dbcf9
    return function_4dbce4();
}

// Address range: 0x4dbd08 - 0x4dbd0b
int64_t function_4dbd08(void) {
    // 0x4dbd08
    int64_t result; // 0x4dbd08
    return result;
}

// Address range: 0x4dbd12 - 0x4dbd13
int64_t function_4dbd12(void) {
    // 0x4dbd12
    int64_t result; // 0x4dbd12
    return result;
}

// Address range: 0x4dbd17 - 0x4dbd1a
int64_t function_4dbd17(void) {
    // 0x4dbd17
    return function_4dbd12();
}

// Address range: 0x4dbda4 - 0x4dbda5
int64_t function_4dbda4(void) {
    // 0x4dbda4
    int64_t result; // 0x4dbda4
    return result;
}

// Address range: 0x4dbdb9 - 0x4dbdbc
int64_t function_4dbdb9(void) {
    // 0x4dbdb9
    return function_4dbda4();
}

// Address range: 0x4dbdc8 - 0x4dbdcb
int64_t function_4dbdc8(void) {
    // 0x4dbdc8
    int64_t result; // 0x4dbdc8
    return result;
}

// Address range: 0x4dbdd2 - 0x4dbdd3
int64_t function_4dbdd2(void) {
    // 0x4dbdd2
    int64_t result; // 0x4dbdd2
    return result;
}

// Address range: 0x4dbdd7 - 0x4dbdda
int64_t function_4dbdd7(void) {
    // 0x4dbdd7
    return function_4dbdd2();
}

// Address range: 0x4dbde6 - 0x4dbde9
int64_t function_4dbde6(int64_t a1) {
    // 0x4dbde6
    int64_t result; // 0x4dbde6
    return result;
}
