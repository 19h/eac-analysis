/*
 * Targeted RetDec C for native executable gap queue batch 1097.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a203d-0x1a223d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a223d-0x1a243d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a243d-0x1a263d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a263d-0x1a283d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a283d-0x1a2a3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a2a3d-0x1a2c3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a2c3d-0x1a2e3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a2e3d-0x1a303d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e119b-0x2e139b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e139b-0x2e159b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e159b-0x2e179b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e179b-0x2e199b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e199b-0x2e1b9b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e1b9b-0x2e1d9b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e1d9b-0x2e1f9b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e1f9b-0x2e219b rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g8;
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

int64_t function_1a203d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a216b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a22cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1a2414(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a256b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a2702(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a285f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a29b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a2aeb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a2c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a2d96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a2f2d(void);
int64_t function_1a2f2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a2f61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2169189();
int64_t function_2169f7f();
int64_t function_2c0b2ac8();
int64_t function_2e119b(void);
int64_t function_2e1268(void);
int64_t function_2e12f4(int64_t a1);
int64_t function_2e1331(int64_t a1);
int64_t function_2e1379(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2e13a5(int64_t a1);
int64_t function_2e13ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e13b4(void);
int64_t function_2e13cd(void);
int64_t function_2e13f9(void);
int64_t function_2e13fe(int64_t a1, int64_t a2, uint64_t result, uint64_t a4);
int64_t function_2e1432(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e1580(void);
int64_t function_2e15a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e15bc(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e15ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e16af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e16cb(int64_t a1);
int64_t function_2e16e1(void);
int64_t function_2e16f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e1723(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e1746(void);
int64_t function_2e1763(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e17b2(void);
int64_t function_2e17cc(int64_t a1);
int64_t function_2e17eb(void);
int64_t function_2e17ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e17f7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2e17fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e180f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e1839(int64_t a1);
int64_t function_2e185a(int64_t a1, int64_t a2);
int64_t function_2e1881(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e1a52(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2e1a77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e1a99(void);
int64_t function_2e1ab0(int64_t a1, int64_t a2);
int64_t function_2e1abf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2e1b0b(void);
int64_t function_2e1b11(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e1b58(void);
int64_t function_2e1bc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e1c80(void);
int64_t function_2e1c94(void);
int64_t function_2e1ccb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e1d40(void);
int64_t function_2e1d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e1dd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e1e51(void);
int64_t function_2e1e53(void);
int64_t function_2e1e72(int64_t a1);
int64_t function_2e1ee4(int64_t a1);
int64_t function_2e1f49(int64_t a1);
int64_t function_2e1fa2(int64_t a1);
int64_t function_2e1fae(void);
int64_t function_2e1fb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e20bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e2150(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2e2161(int64_t a1);
int64_t function_6f3181a5();
int64_t function_c57b8();
int64_t function_ffffffffad2f5e72();
int64_t function_ffffffffe8a1e4ee();
int64_t unknown_14bd104d();
int64_t unknown_1ee1c58c();
int64_t unknown_23df9061();
int64_t unknown_2abb20bd();
int64_t unknown_2b96b008();
int64_t unknown_3a76b526();
int64_t unknown_3ac503cc();
int64_t unknown_3ac5c307();
int64_t unknown_3acb6f88();
int64_t unknown_3bf2fa60();
int64_t unknown_3d30008e();
int64_t unknown_4660e5e4();
int64_t unknown_ae33413();
int64_t unknown_ffffffffaf2361f3();
int64_t unknown_ffffffffc0a18e20();
int64_t unknown_ffffffffc167f681();
int64_t unknown_ffffffffcbe4f4db();
int64_t unknown_ffffffffd346ee53();
int64_t unknown_ffffffffe80992c6();
int64_t unknown_ffffffffee359c2b();

// Address range: 0x1a203d - 0x1a216b
int64_t function_1a203d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a203d
    int64_t v1; // bp-40, 0x1a203d
    int64_t v2 = (int64_t)&v1; // 0x1a20df
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x1a20e7
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x1a20e7
    *v4 = v3;
    int64_t v5 = v2 - 16; // 0x1a20eb
    int64_t * v6 = (int64_t *)v5; // 0x1a20eb
    *v6 = 0x4984f870;
    bool v7; // 0x1a203d
    *(int64_t *)(v2 - 32) = 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    v1 = *v6;
    *(int64_t *)(v2 - 24) = v5;
    *v6 = v3;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v6 = v1;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x1a2150
    v1 = v8;
    *v4 = v8;
    int64_t v9; // 0x1a203d
    return function_c57b8(a1, 310, a3, a4, v9, v9, v1, 0x5bfb82a0);
}

// Address range: 0x1a216b - 0x1a22cb
int64_t function_1a216b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6; // bp-24, 0x1a2253
    int64_t v2 = (int64_t)&v1; // 0x1a2293
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1a229f
    *v3 = a2;
    *v3 = v2 + 8;
    int64_t v4; // 0x1a216b
    return function_c57b8(a1, *v3, a3, a4, a5, v4, v1, 169);
}

// Address range: 0x1a22cb - 0x1a2414
int64_t function_1a22cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a1; // bp-32, 0x1a230b
    int64_t v2 = (int64_t)&v1; // 0x1a2387
    int64_t v3 = v2 - 8; // 0x1a238f
    int64_t * v4 = (int64_t *)v3; // 0x1a239f
    *v4 = a7;
    int64_t v5 = v2 + 16; // 0x1a23b0
    int64_t * v6 = (int64_t *)v5; // 0x1a23b0
    *v6 = v1;
    *v4 = v3;
    v1 = 169;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x1a23d5
    *(int64_t *)(v2 + 40) = *v7;
    *v7 = *v6;
    v1 = v5;
    int64_t v8 = *v6; // 0x1a23f9
    *v7 = v8;
    v1 = v8;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x197f89, (int64_t)&g8);
}

// Address range: 0x1a2414 - 0x1a256b
int64_t function_1a2414(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a2414
    int64_t v1; // 0x1a2414
    return function_c57b8(a1, a2, a3, 0x198242, v1, v1, 0x7e4d2b7a, (int64_t)&g8);
}

// Address range: 0x1a256b - 0x1a2702
int64_t function_1a256b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a256b
    int64_t v1; // bp-40, 0x1a256b
    int64_t v2 = (int64_t)&v1; // 0x1a25f1
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x1a2613
    *(int64_t *)(v2 - 8) = v3;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x1a2617
    *v4 = a1;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x1a2623
    int64_t * v6 = (int64_t *)(v2 - 32); // 0x1a2646
    *v6 = a6;
    *v4 = v2;
    int64_t v7 = *(int64_t *)(v2 + 8); // 0x1a2661
    *v4 = v7;
    *v5 = *v4;
    *v6 = a2;
    *v5 = 0x52a17d11;
    *v6 = v3;
    v1 = *v4;
    *v5 = v7;
    *(int64_t *)(v2 + 16) = *v4;
    *v5 = v2;
    *v6 = *v4;
    int64_t v8; // 0x1a256b
    return function_c57b8(*v5, a2, a3, a4, a5, a6, v8, 0x198515);
}

// Address range: 0x1a2702 - 0x1a285f
int64_t function_1a2702(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a2702
    int64_t v1; // 0x1a2702
    return function_c57b8(a1, a2, a3, a4, v1, v1, a5, 0x66250cb2);
}

// Address range: 0x1a285f - 0x1a29b2
int64_t function_1a285f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a285f
    bool v1; // 0x1a285f
    int64_t result = function_c57b8(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2, (int64_t)&g8); // 0x1a29ad
    return result;
}

// Address range: 0x1a29b2 - 0x1a2aeb
int64_t function_1a29b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a29b2
    int64_t v1; // bp-40, 0x1a29b2
    int64_t v2 = (int64_t)&v1; // 0x1a2a23
    int64_t * v3 = (int64_t *)(v2 + 40); // 0x1a2a51
    int64_t v4 = *v3; // 0x1a2a51
    v1 = v4;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1a2a55
    *v5 = v4;
    *(int64_t *)(v2 - 16) = v4;
    int64_t v6 = v2 + 24; // 0x1a2a64
    v1 = 0x1539c9c1;
    *v5 = v4;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x1a2a8d
    *v7 = v1;
    v1 = *(int64_t *)v6;
    int64_t v8 = v2 + 8; // 0x1a2ab0
    int64_t * v9 = (int64_t *)v8; // 0x1a2ab3
    *v3 = *v9;
    v1 = v8;
    *v9 = v6;
    int64_t v10 = *v7; // 0x1a2ad7
    *v9 = v10;
    v1 = v10;
    int64_t v11; // 0x1a29b2
    return function_c57b8(a1, a2, a3, a4, v11, v11, v11, (int64_t)&g8);
}

// Address range: 0x1a2aeb - 0x1a2c4c
int64_t function_1a2aeb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1a2aeb
    int64_t v1; // 0x1a2aeb
    return function_c57b8(a1, a2, v1, v1, v1, v1, 0x5974e50c, 310);
}

// Address range: 0x1a2c4c - 0x1a2d96
int64_t function_1a2c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a2c4c
    bool v1; // 0x1a2c4c
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x1a2c4c
    int64_t v3 = v2; // bp-48, 0x1a2cc0
    int64_t v4 = (int64_t)&v3; // 0x1a2cfc
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x1a2d04
    *v5 = 0x33f7fb00;
    *(int64_t *)(v4 - 24) = v2;
    int64_t v6 = v4 + 8; // 0x1a2d17
    int64_t * v7 = (int64_t *)v6; // 0x1a2d17
    *v7 = *v5;
    int64_t v8 = v4 - 16; // 0x1a2d20
    int64_t * v9 = (int64_t *)v8; // 0x1a2d2e
    *v9 = v8;
    *v5 = 0x3a382eee;
    *(int64_t *)(v4 + 32) = v3;
    v3 = v2;
    *v5 = v4 + 16;
    *v9 = v3;
    v3 = *v7;
    *v5 = v6;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x2a893e31, (int64_t)&g8);
}

// Address range: 0x1a2d96 - 0x1a2f00
int64_t function_1a2d96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a2d96
    int64_t v1; // 0x1a2d96
    return function_c57b8(a1, a2, 169, a4, a5, v1, 0x4cfbe653, 0x78d30c18);
}

// Address range: 0x1a2f2d - 0x1a2f2f
int64_t function_1a2f2d(void) {
    // 0x1a2f2d
    int64_t v1; // 0x1a2f2d
    return function_1a2f61(v1, v1, v1, v1, (int64_t)&g8);
}

// Address range: 0x1a2f2f - 0x1a2f61
int64_t function_1a2f2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a2f2f
    int64_t v1; // 0x1a2f2f
    uint32_t v2 = *(int32_t *)((v1 & 0xffffffff) + 72); // 0x1a2f30
    return (v1 & 0xffffffff | 0x100000000 * a3) / (int64_t)v2 & 0xffffffff;
}

// Address range: 0x1a2f61 - 0x1a303d
int64_t function_1a2f61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a2f61
    int64_t result; // 0x1a2f61
    return result;
}

// Address range: 0x2e119b - 0x2e119c
int64_t function_2e119b(void) {
    // 0x2e119b
    int64_t result; // 0x2e119b
    return result;
}

// Address range: 0x2e1268 - 0x2e1270
int64_t function_2e1268(void) {
    // 0x2e1268
    int64_t result; // 0x2e1268
    int64_t v1 = result;
    *(char *)v1 = (char)v1 - 1;
    return result;
}

// Address range: 0x2e12f4 - 0x2e12f8
int64_t function_2e12f4(int64_t a1) {
    // 0x2e12f4
    int64_t result; // 0x2e12f4
    return result;
}

// Address range: 0x2e1331 - 0x2e1332
int64_t function_2e1331(int64_t a1) {
    // 0x2e1331
    int64_t result; // 0x2e1331
    return result;
}

// Address range: 0x2e1379 - 0x2e138e
int64_t function_2e1379(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2e1379
    int64_t v1; // 0x2e1379
    char * v2 = (char *)(v1 + 0x1e83f10); // 0x2e1382
    *v2 = *v2 + (char)(a4 / 256);
    __asm_iretd();
    return function_6f3181a5();
}

// Address range: 0x2e13a5 - 0x2e13ac
int64_t function_2e13a5(int64_t a1) {
    // 0x2e13a5
    int64_t result; // 0x2e13a5
    int32_t * v1 = (int32_t *)(result + 0x4a08830a); // 0x2e13a5
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2e13ad - 0x2e13b0
int64_t function_2e13ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2e13ad
    int64_t result; // 0x2e13ad
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x2e13b4 - 0x2e13b5
int64_t function_2e13b4(void) {
    // 0x2e13b4
    int64_t result; // 0x2e13b4
    return result;
}

// Address range: 0x2e13cd - 0x2e13ce
int64_t function_2e13cd(void) {
    // 0x2e13cd
    int64_t result; // 0x2e13cd
    return result;
}

// Address range: 0x2e13f9 - 0x2e13fe
int64_t function_2e13f9(void) {
    // 0x2e13f9
    return function_2169f7f();
}

// Address range: 0x2e13fe - 0x2e1429
int64_t function_2e13fe(int64_t a1, int64_t a2, uint64_t result, uint64_t a4) {
    // 0x2e13fe
    bool v1; // 0x2e13fe
    if (v1) {
        function_2e13cd();
    }
    unknown_ae33413();
    while (true == !v1) {
        // 0x2e1400
        unknown_ae33413();
    }
    // 0x2e1415
    __asm_in((int16_t)result);
    *(char *)(4 * a4 + a1) = (char)(a4 / 256);
    unknown_ffffffffc0a18e20();
    int64_t v2; // 0x2e13fe
    *(int32_t *)a1 = __asm_insd((int16_t)(256 * v2 | result % 256));
    return result;
}

// Address range: 0x2e1432 - 0x2e1496
int64_t function_2e1432(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2e1432
    bool v3; // 0x2e1432
    int64_t v4 = v2 & -0xff01 | 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | 512; // 0x2e1433
    if (v3 || v3) {
        int64_t v5 = a4 & -256 | (int64_t)(*(char *)(a2 - 0x17fe1743) ^ (char)a4); // 0x2e1437
        *(int32_t *)-0x175d99bc = *(int32_t *)-0x175d99bc + (int32_t)a1;
        int32_t * v6 = (int32_t *)v5; // 0x2e1443
        *v6 = *v6 + (int32_t)v5;
        __asm_out(16, (char)v2);
        char * v7 = (char *)(v4 + 8 * v2); // 0x2e1447
        unsigned char v8 = *v7; // 0x2e1447
        *v7 = v8 / 128 | 2 * v8;
        uint64_t result = __asm_int1(); // 0x2e144b
        char * v9 = (char *)(a3 - 0x67590744); // 0x2e1451
        *v9 = *v9 + (char)(result / 256);
        return result;
    }
    char v10 = *(char *)0x40428479; // 0x2e1472
    *(char *)0x40428479 = v10 + (char)((int64_t)&g3 >> 8);
    int64_t result2 = __asm_wait(); // 0x2e147e
    int32_t * v11 = (int32_t *)(a3 - 53); // 0x2e147f
    uint32_t v12 = *v11; // 0x2e147f
    int32_t v13 = ((int32_t)v4 ^ -2) < 0xe60336e; // 0x2e147f
    uint32_t v14 = v13 + (int32_t)a3; // 0x2e147f
    int32_t v15 = v12 - v14; // 0x2e147f
    bool v16 = ((int32_t)v4 ^ -2) < 0xe60336e ? v14 != -1 | v12 < v15 - v13 : v12 < v14; // 0x2e147f
    *v11 = v15;
    char * v17 = (char *)result2; // 0x2e1489
    char v18 = result2; // 0x2e1489
    *v17 = *v17 + v18 + (char)v16;
    if (llvm_ctpop_i8(v18 - 1) % 2 != 0) {
        // 0x2e1460
        return result2;
    }
    // 0x2e1492
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x2e1580 - 0x2e1584
int64_t function_2e1580(void) {
    // 0x2e1580
    int64_t v1; // 0x2e1580
    int64_t result = v1;
    *(char *)result = (char)result + 60;
    return result;
}

// Address range: 0x2e15a0 - 0x2e15a7
int64_t function_2e15a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e15a0
    return function_ffffffffe8a1e4ee();
}

// Address range: 0x2e15bc - 0x2e15d3
int64_t function_2e15bc(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e15bc
    int64_t v1; // 0x2e15bc
    char * v2 = (char *)(v1 - 93);
    *v2 = *v2 + (char)(v1 / 256);
    __asm_hlt();
    char * v3 = (char *)(a3 - 24); // 0x2e15c3
    *v3 = *v3 | (char)a4;
    unknown_3ac503cc();
    int64_t v4; // 0x2e15bc
    *(int32_t *)v4 = *(int32_t *)&v4 ^ (int32_t)a2;
    char v5 = *(char *)&v4; // 0x2e15ce
    return 256 * (int64_t)((char)(a1 / 256) - v5) | a1 & 0xffff00ff;
}

// Address range: 0x2e15ee - 0x2e1692
int64_t function_2e15ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e15ee
    int64_t v1; // 0x2e15ee
    uint64_t v2 = v1;
    int32_t v3 = *(int32_t *)(a2 - 122 + 4 * v2); // 0x2e15ee
    int32_t * v4 = (int32_t *)(a4 - 79); // 0x2e15f4
    *v4 = *v4 + (int32_t)v2;
    uint64_t v5 = unknown_2b96b008(); // 0x2e1602
    char v6 = *(char *)(v1 - 0x1ade4ff); // 0x2e1614
    int32_t * v7 = (int32_t *)((int64_t)(v3 + (int32_t)a3) + 0x3683cfb5); // 0x2e161a
    int32_t v8 = *v7; // 0x2e161a
    *v7 = 2 * v8;
    int64_t v9 = unknown_3a76b526() & -0xff01 | (int64_t)&g6; // 0x2e1625
    int32_t * v10 = (int32_t *)(v9 - 93); // 0x2e1627
    *v10 = *v10 + (v8 < 0 ? -0x17feb88a : -0x17feb88b);
    unsigned char v11 = *(char *)0x129a89b64; // 0x2e1639
    *(char *)0x129a89b64 = v11 - 29;
    uint64_t v12 = __asm_wait(); // 0x2e1641
    int64_t v13 = a4 - (a2 + a1) + (int64_t)(v11 > 28); // 0x2e1642
    char * v14 = (char *)((v13 & 0xffffffff) - 79); // 0x2e164a
    *v14 = *v14 + (char)v13;
    unknown_ffffffffd346ee53();
    char * v15 = (char *)(v2 & -256 | (int64_t)(v6 + (char)v2 + (char)(((int32_t)(v5 / 2 & 64 | v5 & 0xffffff00) ^ -64) < 0x30e51440))); // 0x2e1652
    char v16 = *v15 + (char)(v2 / 256); // 0x2e1652
    *v15 = v16;
    if (v16 < 0) {
        // 0x2e1671
        return __asm_int3();
    }
    int64_t v17 = (int32_t)v9 >> 31; // 0x2e163f
    uint64_t v18 = __asm_iretd(); // 0x2e1656
    char * v19 = (char *)v17; // 0x2e1657
    *v19 = *v19 - (char)(v18 / 256);
    uint64_t result = unknown_3bf2fa60(); // 0x2e1659
    int64_t v20 = (256 * (int64_t)((char)(v12 / 256) - *v15) | v12 & 0xffff00ff) - 1; // 0x2e1664
    if (v20 == 0) {
        // 0x2e1666
        return result + 0x4401e87f + (int64_t)(result % 2 != 0) & 0xffffffff;
    }
    int32_t * v21 = (int32_t *)(v17 - 0x114ef2f); // 0x2e1683
    *v21 = *v21 + (int32_t)a1;
    int32_t * v22 = (int32_t *)v20; // 0x2e1690
    *v22 = *v22 + (int32_t)result;
    return result;
}

// Address range: 0x2e16af - 0x2e16bf
int64_t function_2e16af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e16af
    int64_t v1; // 0x2e16af
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return (int64_t)(*(int32_t *)(v1 - 42) & (int32_t)__asm_int1());
}

// Address range: 0x2e16cb - 0x2e16cc
int64_t function_2e16cb(int64_t a1) {
    // 0x2e16cb
    int64_t result; // 0x2e16cb
    return result;
}

// Address range: 0x2e16e1 - 0x2e16e2
int64_t function_2e16e1(void) {
    // 0x2e16e1
    int64_t result; // 0x2e16e1
    return result;
}

// Address range: 0x2e16f4 - 0x2e1723
int64_t function_2e16f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x7d77c5ac); // 0x2e16fa
    int64_t v2; // 0x2e16f4
    *v1 = *v1 + (int32_t)v2;
    *(int64_t *)0xe8e7e08e = a5;
    int32_t * v3 = (int32_t *)(v2 + 0x2e534de9); // 0x2e1705
    int32_t v4 = v2; // 0x2e1705
    *v3 = *v3 + v4;
    int64_t v5; // 0x2e16f4
    *(int32_t *)v5 = *(int32_t *)&v5 + v4;
    int32_t * v6 = (int32_t *)(v2 + 0x43c21577 & 0xffffffff); // 0x2e1712
    *v6 = *v6 - v4;
    int32_t v7 = *(int32_t *)-0x422da670; // 0x2e1719
    *(int32_t *)-0x422da670 = v7 + (int32_t)(a4 - 256 * v2 & 0xff00 | a4 & 0xffff00ff);
    return v2 + 0xe87842ae & 0xffffffff;
}

// Address range: 0x2e1723 - 0x2e172c
int64_t function_2e1723(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e1723
    unknown_ffffffffee359c2b(a1, a2, a3);
    return a2 & 0xffffffff;
}

// Address range: 0x2e1746 - 0x2e1748
int64_t function_2e1746(void) {
    // 0x2e1746
    return function_2e16e1();
}

// Address range: 0x2e1763 - 0x2e17a3
int64_t function_2e1763(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e1763
    int64_t v1; // 0x2e1763
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x2e1763
    int64_t v4 = v3 ? -4 : 4; // 0x2e1763
    int64_t v5 = v4 + a1; // 0x2e1763
    unknown_ffffffffc167f681(v5);
    int64_t v6; // 0x2e1763
    *(int32_t *)v5 = *(int32_t *)&v6;
    int64_t v7 = unknown_1ee1c58c(v5 + (v3 ? -5 : 5), v4 + a2); // 0x2e1786
    char * v8 = (char *)(v7 + 0x204b000); // 0x2e178c
    *v8 = *v8 + (char)v7;
    char * v9 = (char *)((256 * v2 & 0xff00 | v2 & -0xff01) - 0x34fe1800); // 0x2e1793
    *v9 = *v9 + (char)((v2 ^ a4) / 256);
    return v7 & 0xffffffff ^ 0x1c74bd76;
}

// Address range: 0x2e17b2 - 0x2e17b3
int64_t function_2e17b2(void) {
    // 0x2e17b2
    int64_t result; // 0x2e17b2
    return result;
}

// Address range: 0x2e17cc - 0x2e17d0
int64_t function_2e17cc(int64_t a1) {
    // 0x2e17cc
    int64_t v1; // 0x2e17cc
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x2e17eb - 0x2e17ec
int64_t function_2e17eb(void) {
    // 0x2e17eb
    int64_t result; // 0x2e17eb
    return result;
}

// Address range: 0x2e17ee - 0x2e17f7
int64_t function_2e17ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 98); // 0x2e17f3
    int64_t result; // 0x2e17ee
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2e17f7 - 0x2e17fe
int64_t function_2e17f7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 - 0xdfbc56e); // 0x2e17f7
    *v1 = *v1 + (char)(a4 / 256);
    int64_t result; // 0x2e17f7
    return result;
}

// Address range: 0x2e17fe - 0x2e180d
int64_t function_2e17fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 113); // 0x2e17fe
    unsigned char v2 = *v1; // 0x2e17fe
    int64_t v3; // 0x2e17fe
    unsigned char v4 = v2 + (char)((uint64_t)v3 / 256); // 0x2e17fe
    *v1 = v4;
    int64_t result = unknown_3ac5c307(); // 0x2e1806
    if (v4 >= v2) {
        result = function_2e17eb();
    }
    // 0x2e1808
    return result;
}

// Address range: 0x2e180f - 0x2e182d
int64_t function_2e180f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e180f
    int64_t v1; // 0x2e180f
    int64_t v2 = 2 * v1; // 0x2e180f
    int32_t * v3 = (int32_t *)(v1 - 17); // 0x2e1811
    uint32_t v4 = *v3; // 0x2e1811
    uint32_t v5 = v4 + (int32_t)v1; // 0x2e1811
    *v3 = v5;
    int32_t v6 = *(int32_t *)(v2 & 0xffffffff); // 0x2e1814
    uint32_t v7 = v6 + (int32_t)v2 + (int32_t)(v5 < v4); // 0x2e1814
    int64_t result = v7; // 0x2e1816
    if (a4 != 1 && v7 != 0) {
        result = function_2e17b2();
    }
    // 0x2e1818
    return result;
}

// Address range: 0x2e1839 - 0x2e183a
int64_t function_2e1839(int64_t a1) {
    // 0x2e1839
    int64_t result; // 0x2e1839
    return result;
}

// Address range: 0x2e185a - 0x2e1863
int64_t function_2e185a(int64_t a1, int64_t a2) {
    // 0x2e185a
    int64_t v1; // 0x2e185a
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2e185a
    int64_t v3 = v2 ? -4 : 4; // 0x2e185a
    int64_t v4 = unknown_23df9061(v3 + a1, v3 + a2); // 0x2e185b
    int64_t v5; // 0x2e185a
    return v4 & -256 | (int64_t)(*(char *)&v5 + (char)v4);
}

// Address range: 0x2e1881 - 0x2e19a3
int64_t function_2e1881(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t v2 = *(int32_t *)(a1 - 0x21299971); // 0x2e1881
    int64_t v3; // 0x2e1881
    int64_t * v4 = (int64_t *)(int64_t)((int32_t)v3 - v2); // 0x2e1887
    int64_t v5 = *v4; // 0x2e1887
    int64_t v6 = unknown_3d30008e(); // 0x2e1888
    int32_t * v7 = (int32_t *)(a3 - 24 + v3); // 0x2e188d
    *v7 = *v7 + (int32_t)a3;
    int32_t * v8 = (int32_t *)(a3 - 51); // 0x2e1891
    uint32_t v9 = *v8; // 0x2e1891
    uint32_t v10 = v9 + (int32_t)a4; // 0x2e1891
    *v8 = v10;
    char * v11 = (char *)(v3 - 0x1602ce7b); // 0x2e1894
    *v11 = *v11 + (char)v3 + (char)(v10 < v9);
    int64_t v12 = v6 & 0xffffffff ^ 0x1e8fcd9; // 0x2e189a
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v13 = (v12 + a3) % 256 | a3 & -256; // 0x2e18a7
    int64_t v14 = v12 & 0xffffff3d; // 0x2e18a9
    int32_t * v15 = (int32_t *)v14; // 0x2e18ab
    *v15 = *v15 + (int32_t)v14;
    int32_t v16 = *(int32_t *)&v1; // 0x2e18ad
    __asm_outsd((int16_t)v13, v16);
    unsigned char v17 = (char)a1; // 0x2e18b1
    unsigned char v18 = (char)v16;
    char v19 = v17 - v18; // 0x2e18b1
    int64_t v20 = a1 & 0xffffff00 | (int64_t)v19; // 0x2e18b1
    if (v19 != 0) {
        // 0x2e18b5
        return v20 & 0xffff00ff | 256 * (128 * (int64_t)(v19 < 0) | (int64_t)(v17 < v18) | 16 * (int64_t)(v17 % 16 - v18 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v19) % 2 == 0)) | 512;
    }
    int64_t v21 = a4 & -0xff01 | (int64_t)&g2; // 0x2e18af
    char v22 = v3 / 256; // 0x2e1925
    *(char *)0x795d052c = *(char *)0x795d052c + v22;
    uint32_t v23 = *(int32_t *)(v20 - 0x4d8fac14) & (int32_t)v13; // 0x2e192b
    int64_t v24 = v23; // 0x2e192b
    int16_t v25 = v20; // 0x2e1931
    int16_t v26 = (int16_t)*(char *)v24; // 0x2e1931
    int64_t v27 = a1 & 0xffff0000 | (int64_t)(v25 / v26 % 256) | (int64_t)(256 * (v25 % v26)); // 0x2e1931
    __asm_rcl(*(char *)(v14 + 0x4d2c0a10));
    int64_t v28 = v1 + ((v5 & (int64_t)&g1) != 0 ? -4 : 4); // 0x2e1939
    v1 = v28;
    *v4 = v28;
    int32_t v29 = v27; // 0x2e193b
    *(int32_t *)0xa5013d01b532 = v29;
    char * v30 = (char *)v21; // 0x2e1944
    unsigned char v31 = *v30; // 0x2e1944
    unsigned char v32 = v31 + (char)v21; // 0x2e1944
    *v30 = v32;
    int32_t v33 = *(int32_t *)v27; // 0x2e1946
    *(char *)0xab63b4f = *(char *)0xab63b4f + v22;
    int64_t v34 = v21 - 1; // 0x2e1952
    if (v34 == 0) {
        // 0x2e1954
        return (int64_t)(v29 - v33 + (int32_t)(v32 < v31) & -0xff01) | (int64_t)&g7;
    }
    // 0x2e1971
    __asm_in_133((int16_t)v23);
    unsigned char v35 = *(char *)0x4ef59580; // 0x2e1979
    unsigned char v36 = v35 + v22; // 0x2e1979
    *(char *)0x4ef59580 = v36;
    char * v37 = (char *)(v24 + 102); // 0x2e197f
    char v38 = *v37; // 0x2e197f
    *v37 = v38 - ((char)v34 | (char)&g7) + (char)(v36 < v35);
    v1 += ((v5 & (int64_t)&g1) != 0 ? -1 : 1);
    uint64_t v39 = __asm_sti(); // 0x2e1996
    char * v40 = (char *)(v39 - 0x62de49bb); // 0x2e1999
    *v40 = *v40 + (char)(v23 / 256);
    char * v41 = (char *)(v1 + 81); // 0x2e199f
    *v41 = *v41 - 1;
    return v39 & -256 | (int64_t)*(char *)(v39 % 256 + v3);
}

// Address range: 0x2e1a52 - 0x2e1a5a
int64_t function_2e1a52(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2e1a52
    int64_t v1; // 0x2e1a52
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 126); // 0x2e1a54
    *v3 = *v3 + (int32_t)a4;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x2e1a77 - 0x2e1a89
int64_t function_2e1a77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e1a77
    int64_t v1; // 0x2e1a77
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v3; // 0x2e1a77
    *(int32_t *)a3 = *(int32_t *)&v3 + (int32_t)a2;
    return v2 & 0xff00 & 256 * v2 | v2 & 0xffff00ff;
}

// Address range: 0x2e1a99 - 0x2e1a9a
int64_t function_2e1a99(void) {
    // 0x2e1a99
    int64_t result; // 0x2e1a99
    return result;
}

// Address range: 0x2e1ab0 - 0x2e1abf
int64_t function_2e1ab0(int64_t a1, int64_t a2) {
    // 0x2e1ab0
    return unknown_2abb20bd();
}

// Address range: 0x2e1abf - 0x2e1b07
int64_t function_2e1abf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2e1abf
    int64_t v1; // 0x2e1abf
    int64_t v2 = v1 & v1;
    unsigned char v3 = *(char *)((v2 & 44 | 211) + v1); // 0x2e1acd
    *(int32_t *)a1 = (int32_t)v2 & -256 | (int32_t)v3;
    int32_t * v4 = (int32_t *)(a6 + 42); // 0x2e1ad1
    *v4 = *v4 + (int32_t)v1;
    bool v5; // 0x2e1abf
    char * v6 = (char *)unknown_ffffffffcbe4f4db((v5 ? -4 : 4) + a1); // 0x2e1ada
    char v7 = *v6 + (char)a3; // 0x2e1ada
    *v6 = v7;
    if (a4 != 1 != (v7 == 0)) {
        // 0x2e1ae0
        return a2 & 0xffffffff;
    }
    // 0x2e1aef
    __asm_sti();
    int64_t v8 = function_2e1a99(); // 0x2e1afc
    *(int32_t *)a3 = (int32_t)v8;
    return v8 & 0xfe17690a | 0x1e896f5;
}

// Address range: 0x2e1b0b - 0x2e1b0f
int64_t function_2e1b0b(void) {
    // 0x2e1b0b
    int64_t result; // 0x2e1b0b
    __asm_out(-81, (char)result);
    return result;
}

// Address range: 0x2e1b11 - 0x2e1b12
int64_t function_2e1b11(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e1b11
    return a4 & 0xffffffff;
}

// Address range: 0x2e1b58 - 0x2e1b59
int64_t function_2e1b58(void) {
    // 0x2e1b58
    int64_t result; // 0x2e1b58
    return result;
}

// Address range: 0x2e1bc3 - 0x2e1c33
int64_t function_2e1bc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a2;
    bool v2; // 0x2e1bc3
    uint32_t v3 = (int32_t)a3 + v1 + (int32_t)v2; // 0x2e1bc3
    int64_t v4 = v3; // 0x2e1bc3
    __asm_rcl(*(char *)(v4 + 0x7fa34339));
    int64_t v5; // 0x2e1bc3
    *(char *)0x31f7f1e = *(char *)0x31f7f1e + (char)(v5 / 256);
    int64_t v6 = v5 + 0x702ef674 + v5; // 0x2e1c23
    int64_t result = v6 & 0xffffffff; // 0x2e1c23
    if ((int16_t)v6 >= 0) {
        int32_t * v7 = (int32_t *)result; // 0x2e1bd3
        *v7 = *v7 + v1;
        return v6 & 0xffffff00 | (int64_t)(*(char *)(v5 - 96) & (char)v6);
    }
    char * v8 = (char *)(a2 + 61 + 8 * (v5 & v4)); // 0x2e1c2d
    *v8 = *v8 + (char)(v3 / 256);
    int32_t * v9 = (int32_t *)v4; // 0x2e1c31
    int64_t v10; // 0x2e1bc3
    *v9 = *v9 + (int32_t)(int64_t)&v10;
    return result;
}

// Address range: 0x2e1c80 - 0x2e1c86
int64_t function_2e1c80(void) {
    // 0x2e1c80
    int64_t result; // 0x2e1c80
    return result;
}

// Address range: 0x2e1c94 - 0x2e1c9a
int64_t function_2e1c94(void) {
    // 0x2e1c94
    return 0xaf2527ab;
}

// Address range: 0x2e1ccb - 0x2e1d40
int64_t function_2e1ccb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t v2 = *(int32_t *)0x3005a4; // 0x2e1ccb
    int64_t v3; // 0x2e1ccb
    v2 += (int32_t)v3;
    *(int32_t *)0x3005a4 = v2;
    uint32_t v4 = *(int32_t *)0x2708499701e8a7e3 + (int32_t)a2; // 0x2e1ce7
    while (v4 != 0) {
        // 0x2e1ccf
        v2 += (int32_t)v3;
        *(int32_t *)0x3005a4 = v2;
        v4 = *(int32_t *)0x2708499701e8a7e3 + (int32_t)a2;
    }
    int64_t v5 = v4; // 0x2e1ce7
    int32_t * v6 = (int32_t *)(v5 + 0x4adbc182); // 0x2e1ceb
    int32_t v7 = a3; // 0x2e1ceb
    *v6 = *v6 | v7;
    char * v8 = (char *)(a3 - 24); // 0x2e1cf1
    *v8 = *v8 ^ (char)(a3 / 256);
    *(int32_t *)0xc1c23969 = *(int32_t *)0xc1c23969 - 0x17220b7e;
    int32_t v9 = *(int32_t *)(v5 + 0x1e82d62) + v7; // 0x2e1cfa
    char * v10 = (char *)v5; // 0x2e1d0f
    *v10 = *v10 - 80;
    int64_t v11 = v5; // bp-16, 0x2e1d12
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t v12 = a1 + 4 + (v5 & 0xffffff00 | (int64_t)((char)v4 - 72 + *v10)); // 0x2e1d18
    int64_t v13 = v12 & 0xffffffff; // 0x2e1d18
    char * v14 = (char *)(v13 - 0x57bcc5b6); // 0x2e1d1a
    *v14 = *v14 - 126;
    char * v15 = (char *)v13; // 0x2e1d2c
    *v15 = (char)v9;
    int64_t v16 = (int64_t)*v15 | (int64_t)(v9 & -256); // 0x2e1d2c
    int32_t * v17 = (int32_t *)(v16 + 4 * v3); // 0x2e1d31
    *v17 = *v17 + (int32_t)(int64_t)&v11;
    int32_t * v18 = (int32_t *)v13; // 0x2e1d38
    *v18 = *v18 + (int32_t)v12;
    *(char *)v13 = __asm_insb((int16_t)v16);
    return function_2e1d42(v13, v1 + 4, v16, 0x1e8b876);
}

// Address range: 0x2e1d40 - 0x2e1d42
int64_t function_2e1d40(void) {
    // 0x2e1d40
    int64_t v1; // 0x2e1d40
    return v1 & 0xffffffff & v1;
}

// Address range: 0x2e1d42 - 0x2e1d96
int64_t function_2e1d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 10); // 0x2e1d45
    int32_t v2 = a3;
    int64_t v3 = a2; // 0x2e1d42
    *v1 = *v1 + v2;
    v3 = v3 & 0x5c73fbf2 | 0xa38c040d;
    int64_t v4; // 0x2e1d42
    int64_t v5 = v4 - 8; // 0x2e1d52
    int64_t * v6 = (int64_t *)v5; // 0x2e1d52
    *v6 = v4;
    int64_t v7 = __asm_int3(); // 0x2e1d5b
    while (a4 == 0) {
        // 0x2e1d81
        unknown_3acb6f88();
        v4 = v5;
        if ((*v6 & 4) != 0) {
            int64_t result = __asm_int3(); // 0x2e1d8a
            *(int32_t *)0xb0658f0 = *(int32_t *)0xb0658f0 + v2;
            return result;
        }
        *v1 = *v1 + v2;
        v3 = v3 & 0x5c73fbf2 | 0xa38c040d;
        v5 = v4 - 8;
        v6 = (int64_t *)v5;
        *v6 = v4;
        v7 = __asm_int3();
    }
    int64_t v8 = v7 + a3; // 0x2e1d5e
    return v8 & 0xffffff00 | (int64_t)(*(char *)v3 | (char)v8);
}

// Address range: 0x2e1dd9 - 0x2e1de7
int64_t function_2e1dd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2e1de0
    if (v1 != 0) {
        int64_t v2; // 0x2e1dd9
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)(v2 & 0xffffffff) = v3 >> 32 - v1 | v3 << v1;
    }
    return function_2c0b2ac8();
}

// Address range: 0x2e1e51 - 0x2e1e53
int64_t function_2e1e51(void) {
    // 0x2e1e51
    int64_t result; // 0x2e1e51
    return result;
}

// Address range: 0x2e1e53 - 0x2e1e56
int64_t function_2e1e53(void) {
    // 0x2e1e53
    int64_t result; // 0x2e1e53
    return result;
}

// Address range: 0x2e1e72 - 0x2e1e7a
int64_t function_2e1e72(int64_t a1) {
    // 0x2e1e72
    int64_t v1; // 0x2e1e72
    int64_t v2 = v1;
    int64_t result = (v2 + 195) % 256 | v2 & -256; // 0x2e1e72
    int32_t * v3 = (int32_t *)result; // 0x2e1e75
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x2e1ee4 - 0x2e1ee7
int64_t function_2e1ee4(int64_t a1) {
    // 0x2e1ee4
    int64_t result; // 0x2e1ee4
    return result;
}

// Address range: 0x2e1f49 - 0x2e1f4a
int64_t function_2e1f49(int64_t a1) {
    // 0x2e1f49
    int64_t result; // 0x2e1f49
    return result;
}

// Address range: 0x2e1fa2 - 0x2e1fa3
int64_t function_2e1fa2(int64_t a1) {
    // 0x2e1fa2
    int64_t result; // 0x2e1fa2
    return result;
}

// Address range: 0x2e1fae - 0x2e1fb3
int64_t function_2e1fae(void) {
    // 0x2e1fae
    return function_2169189();
}

// Address range: 0x2e1fb8 - 0x2e2052
int64_t function_2e1fb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    unknown_ffffffffe80992c6();
    int64_t result = __asm_hlt(); // 0x2e1fc6
    int64_t v2; // 0x2e1fb8
    bool v3; // 0x2e1fb8
    if ((char)v2 - 18 + (char)v3 < *(char *)(3 * a1)) {
        // 0x2e1fc8
        return result;
    }
    int64_t result2 = unknown_14bd104d(); // 0x2e2047
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (a4 == 1 | *(int32_t *)(a2 - 72) == -(int32_t)a2) {
        // 0x2e1fc8
        return result2;
    }
    // 0x2e1fdc
    unknown_4660e5e4();
    uint32_t v4 = *(int32_t *)&v1; // 0x2e1fe3
    char * v5 = (char *)(int64_t)v4; // 0x2e1feb
    *v5 = *v5 + (char)v4;
    return unknown_ffffffffaf2361f3();
}

// Address range: 0x2e20bb - 0x2e20e6
int64_t function_2e20bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e20bb
    int64_t v1; // 0x2e20bb
    char * v2 = (char *)(v1 + 53); // 0x2e20bb
    bool v3; // 0x2e20bb
    *v2 = (char)v3 - (char)(v1 / 256) + *v2;
    return function_ffffffffad2f5e72();
}

// Address range: 0x2e2150 - 0x2e2161
int64_t function_2e2150(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2e2150
    int64_t result; // 0x2e2150
    char * v1 = (char *)(result + 94); // 0x2e215b
    *v1 = *v1 & (char)(a4 / 256);
    return result;
}

// Address range: 0x2e2161 - 0x2e2162
int64_t function_2e2161(int64_t a1) {
    // 0x2e2161
    int64_t result; // 0x2e2161
    return result;
}
