/*
 * Targeted RetDec C for native executable gap queue batch 764.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3d01ff-0x3d03ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d03ff-0x3d05ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d05ff-0x3d07ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d07ff-0x3d09ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d09ff-0x3d0aff rank=- name=- kind=- bytes=- uncovered=-
 *   0x443067-0x443267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x443267-0x443467 rank=- name=- kind=- bytes=- uncovered=-
 *   0x443567-0x443667 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_fnstenv(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
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

int64_t function_225f7d3();
int64_t function_3d01ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d023e(void);
int64_t function_3d029f(void);
int64_t function_3d02ad(int64_t a1, int64_t a2);
int64_t function_3d02bd(void);
int64_t function_3d02cb(void);
int64_t function_3d02d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d032b(void);
int64_t function_3d0331(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3d03d0(int64_t a1);
int64_t function_3d0409(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d041b(int64_t a1);
int64_t function_3d0474(int64_t a1, int64_t a2);
int64_t function_3d048f(void);
int64_t function_3d0496(int64_t a1);
int64_t function_3d04a9(void);
int64_t function_3d0517(int64_t a1);
int64_t function_3d0607(int64_t a1);
int64_t function_3d0621(void);
int64_t function_3d0657(int64_t a1);
int64_t function_3d0665(void);
int64_t function_3d067a(int64_t a1);
int64_t function_3d0680(void);
int64_t function_3d06f4(void);
int64_t function_3d07a1(int64_t a1);
int64_t function_3d0810(void);
int64_t function_3d0863(void);
int64_t function_3d09cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d0a6e(void);
int64_t function_3d0a8b(void);
int64_t function_443042();
int64_t function_443067(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_443081(int64_t a1, int64_t a2, int64_t a3);
int64_t function_443115(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_443227(int64_t a1);
int64_t function_443247(int64_t a1, int64_t a2);
int64_t function_443264(int64_t a1);
int64_t function_443270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_443401(void);
int64_t function_443464(void);
int64_t function_443567(void);
int64_t function_4435c1(void);
int64_t function_54ba2c6c();
int64_t function_7f5904f4();
int64_t function_ffffffffe18107ac();
int64_t function_ffffffffe8af097f();
int64_t function_ffffffffebb802bc();
int64_t unknown_171a4535();
int64_t unknown_207fe9f1();
int64_t unknown_333e656d();
int64_t unknown_3add0de8();
int64_t unknown_ffffffffb81a0307();
int64_t unknown_ffffffffb8e9268f();
int64_t unknown_ffffffffbc672a20();

// Address range: 0x3d01ff - 0x3d0227
int64_t function_3d01ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3d01ff
    uint32_t v3 = 0x10000 * (int32_t)v2 >> 16; // 0x3d01ff
    bool v4; // 0x3d01ff
    *(char *)(int64_t)v3 = (char)v3 + (char)a4 + (char)v4;
    int32_t * v5 = (int32_t *)(a1 + 0x608b583d); // 0x3d020c
    *v5 = *v5 + (int32_t)v2;
    *(char *)v1 = *(char *)&v1 | (char)(0xe849fa0b * a1 / 256);
    unknown_ffffffffbc672a20();
    *(char *)a1 = *(char *)&v1;
    __asm_int(56);
    return function_54ba2c6c();
}

// Address range: 0x3d023e - 0x3d0243
int64_t function_3d023e(void) {
    // 0x3d023e
    return function_ffffffffebb802bc();
}

// Address range: 0x3d029f - 0x3d02a4
int64_t function_3d029f(void) {
    // 0x3d029f
    return function_ffffffffe18107ac();
}

// Address range: 0x3d02ad - 0x3d02af
int64_t function_3d02ad(int64_t a1, int64_t a2) {
    // 0x3d02ad
    int64_t result; // 0x3d02ad
    return result;
}

// Address range: 0x3d02bd - 0x3d02be
int64_t function_3d02bd(void) {
    // 0x3d02bd
    int64_t result; // 0x3d02bd
    return result;
}

// Address range: 0x3d02cb - 0x3d02cc
int64_t function_3d02cb(void) {
    // 0x3d02cb
    int64_t result; // 0x3d02cb
    return result;
}

// Address range: 0x3d02d4 - 0x3d031d
int64_t function_3d02d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x3d02d4
    if ((v2 & 217) != 0) {
        function_3d02bd();
    }
    // 0x3d02df
    __asm_outsb((int16_t)a3, (char)v2);
    unknown_3add0de8();
    int64_t v3 = v2 + 19; // 0x3d02e8
    unknown_207fe9f1();
    uint32_t v4 = (int32_t)v3 % 32; // 0x3d02f6
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(v2 - 24); // 0x3d02f6
        uint32_t v6 = *v5; // 0x3d02f6
        *v5 = v6 << v4 | (int32_t)((int64_t)v6 >> (int64_t)(33 - v4));
    }
    uint32_t v7 = (int32_t)a1; // 0x3d02f9
    char v8 = v2 / 256; // 0x3d02fb
    char v9 = v2; // 0x3d02fb
    char v10 = v7 > 0xcd2f0eb3; // 0x3d02fb
    char v11 = v9 + v10 + v8; // 0x3d02fb
    char v12 = v11 + v10; // 0x3d02fb
    if (v11 < 0 == ((v12 ^ v8) & (v12 ^ v9)) < 0 == (v11 != 0)) {
        function_3d02cb();
    }
    int64_t v13 = v3 & 0xffffffff; // 0x3d02e8
    int32_t v14 = *(int32_t *)&v1 | v7; // 0x3d02ff
    int64_t result2 = unknown_ffffffffb81a0307(v14); // 0x3d0301
    uint64_t v15 = v13 - 1; // 0x3d0306
    if (v15 == 0 || v14 == 0) {
        // 0x3d0308
        *(char *)-0x1ffe174ddac57cb9 = (char)result2;
        int64_t result = (result2 - v15 / 256) % 256 | result2 & -256; // 0x3d0316
        int32_t * v16 = (int32_t *)(v13 - 36 + 2 * result); // 0x3d0318
        *v16 = *v16 + (int32_t)v1;
        return result;
    }
    // 0x3d0330
    return result2;
}

// Address range: 0x3d032b - 0x3d0330
int64_t function_3d032b(void) {
    // 0x3d032b
    int64_t result; // 0x3d032b
    return result;
}

// Address range: 0x3d0331 - 0x3d0396
int64_t function_3d0331(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3d0331
    int64_t v1; // 0x3d0331
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a3;
    *(int32_t *)0x1e8e424dac45a27 = (int32_t)v3;
    __readgsdword(v2);
    int64_t v5 = (v3 & 0xffffff00 | (int64_t)*(char *)(v3 + 0x1e88805)) - 1; // 0x3d034c
    int32_t * v6 = (int32_t *)(a5 - 26); // 0x3d034f
    int32_t v7 = a1; // 0x3d034f
    *v6 = *v6 + v7;
    *(char *)-0x7fffc2eb8efe178a = (char)a4;
    *(char *)(a4 & 0xffffffff) = *(char *)&v5 + (char)(a3 / 256);
    int64_t v8 = unknown_333e656d(); // 0x3d0367
    uint32_t v9 = *(int32_t *)&v4; // 0x3d036c
    uint32_t v10 = v9 + v7; // 0x3d036c
    *(int32_t *)a3 = v10;
    int64_t v11 = v8 + 0xa3afb2af + (int64_t)(v10 < v9); // 0x3d036e
    int64_t v12 = v11 & 0xffffffff; // 0x3d036e
    int64_t v13; // 0x3d0331
    *(int32_t *)a1 = *(int32_t *)&v13 | v7;
    int32_t * v14 = (int32_t *)v12; // 0x3d037b
    *v14 = *v14 + (int32_t)v11;
    char v15 = *(char *)(v12 + a1); // 0x3d037d
    char v16 = *(char *)(a3 - 0x287584b3); // 0x3d0380
    char * v17 = (char *)(v12 + 111); // 0x3d0386
    *v17 = *v17 + 1;
    uint64_t v18 = unknown_ffffffffb8e9268f(); // 0x3d0389
    unsigned char v19 = *(char *)((256 * (int64_t)(v15 + (char)(v2 / 256)) | v2 & -0x10000 | (int64_t)(v16 ^ (char)v2)) + v18 % 256); // 0x3d038e
    return v18 & -256 | (int64_t)v19;
}

// Address range: 0x3d03d0 - 0x3d03d1
int64_t function_3d03d0(int64_t a1) {
    // 0x3d03d0
    int64_t result; // 0x3d03d0
    return result;
}

// Address range: 0x3d0409 - 0x3d040d
int64_t function_3d0409(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d0409
    int64_t result; // 0x3d0409
    *(int32_t *)a3 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x3d041b - 0x3d041c
int64_t function_3d041b(int64_t a1) {
    // 0x3d041b
    int64_t result; // 0x3d041b
    return result;
}

// Address range: 0x3d0474 - 0x3d048c
int64_t function_3d0474(int64_t a1, int64_t a2) {
    // 0x3d0474
    int64_t v1; // 0x3d0474
    int32_t * v2 = (int32_t *)(v1 - 14); // 0x3d0485
    *v2 = *v2 + (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x3d048f - 0x3d0494
int64_t function_3d048f(void) {
    // 0x3d048f
    return function_7f5904f4();
}

// Address range: 0x3d0496 - 0x3d0497
int64_t function_3d0496(int64_t a1) {
    // 0x3d0496
    int64_t result; // 0x3d0496
    return result;
}

// Address range: 0x3d04a9 - 0x3d04aa
int64_t function_3d04a9(void) {
    // 0x3d04a9
    int64_t result; // 0x3d04a9
    return result;
}

// Address range: 0x3d0517 - 0x3d051a
int64_t function_3d0517(int64_t a1) {
    // 0x3d0517
    int64_t result; // 0x3d0517
    return result;
}

// Address range: 0x3d0607 - 0x3d060b
int64_t function_3d0607(int64_t a1) {
    // 0x3d0607
    int64_t v1; // 0x3d0607
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x3d0621 - 0x3d0622
int64_t function_3d0621(void) {
    // 0x3d0621
    int64_t result; // 0x3d0621
    return result;
}

// Address range: 0x3d0657 - 0x3d0658
int64_t function_3d0657(int64_t a1) {
    // 0x3d0657
    int64_t result; // 0x3d0657
    return result;
}

// Address range: 0x3d0665 - 0x3d0666
int64_t function_3d0665(void) {
    // 0x3d0665
    int64_t result; // 0x3d0665
    return result;
}

// Address range: 0x3d067a - 0x3d067f
int64_t function_3d067a(int64_t a1) {
    // 0x3d067a
    int64_t result; // 0x3d067a
    return result;
}

// Address range: 0x3d0680 - 0x3d0681
int64_t function_3d0680(void) {
    // 0x3d0680
    int64_t result; // 0x3d0680
    return result;
}

// Address range: 0x3d06f4 - 0x3d06f5
int64_t function_3d06f4(void) {
    // 0x3d06f4
    int64_t result; // 0x3d06f4
    return result;
}

// Address range: 0x3d07a1 - 0x3d07aa
int64_t function_3d07a1(int64_t a1) {
    // 0x3d07a1
    int64_t result; // 0x3d07a1
    *(int32_t *)(result - 0x7c50dad6) = (int32_t)result;
    return result;
}

// Address range: 0x3d0810 - 0x3d0811
int64_t function_3d0810(void) {
    // 0x3d0810
    int64_t result; // 0x3d0810
    return result;
}

// Address range: 0x3d0863 - 0x3d0877
int64_t function_3d0863(void) {
    // 0x3d0863
    int64_t v1; // 0x3d0863
    int32_t v2 = v1; // 0x3d0868
    if (v2 >= 0 == v2 >= 2) {
        function_3d0810();
    }
    // 0x3d0871
    return function_ffffffffe8af097f();
}

// Address range: 0x3d09cf - 0x3d0a6d
int64_t function_3d09cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d09cf
    int64_t v1; // 0x3d09cf
    int64_t v2 = v1;
    bool v3; // 0x3d09cf
    if (v3 || v3) {
        // 0x3d0a21
        *(int32_t *)-0x1cc10dd8 = *(int32_t *)-0x1cc10dd8 + (int32_t)a1;
        return 256 * v2 & 0xff00 | v2 & -0xff01;
    }
    int64_t result = a3 & 0xffffffff; // 0x3d09d1
    uint32_t v4 = (int32_t)a4 % 32; // 0x3d09d7
    if (v4 != 0) {
        uint32_t v5 = (int32_t)a3;
        *(int32_t *)result = v5 >> 32 - v4 | v5 << v4;
    }
    char v6 = *(char *)-0x6b613520; // 0x3d09d9
    *(char *)-0x6b613520 = v6 + (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x3d0a6e - 0x3d0a73
int64_t function_3d0a6e(void) {
    // 0x3d0a6e
    return function_225f7d3();
}

// Address range: 0x3d0a8b - 0x3d0a8e
int64_t function_3d0a8b(void) {
    // 0x3d0a8b
    int64_t result; // 0x3d0a8b
    return result;
}

// Address range: 0x443067 - 0x44307e
int64_t function_443067(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3; // bp-8, 0x443067
    char v2 = *(char *)(8 * a2 - 0x1cc2ace4 + (int64_t)&v1); // 0x443068
    int64_t v3; // 0x443067
    unsigned char v4 = v2 ^ (char)(v3 / 256); // 0x443068
    int64_t result = 256 * (int64_t)v4 | v3 & -0xff01; // 0x443068
    if (v4 == 0) {
        // 0x4430ab
        return result;
    }
    int32_t * v5 = (int32_t *)(v3 + a1); // 0x443071
    *v5 = *v5 / 2;
    char * v6 = (char *)(a4 + 0x3a7cfb3b + 8 * v3); // 0x443074
    *v6 = *v6 | (char)(a3 / 256);
    char * v7 = (char *)(a2 - 118); // 0x44307b
    *v7 = *v7 + (char)a4;
    return result;
}

// Address range: 0x443081 - 0x4430ab
int64_t function_443081(int64_t a1, int64_t a2, int64_t a3) {
    // 0x443081
    int64_t v1; // 0x443081
    int64_t v2 = v1;
    int64_t v3 = v2 & a3;
    uint32_t v4 = (int32_t)v3; // 0x443081
    int64_t v5; // 0x443081
    if (v4 == 0) {
        v5 = function_443042();
    }
    // 0x443087
    __asm_outsb((int16_t)v3, (char)a2);
    char * v6 = (char *)(a2 - 0x398b9e79); // 0x44309f
    *v6 = *v6 / 2;
    char * v7 = (char *)((2 * v2 & 254 | v2 & -256) + v1); // 0x4430a6
    *v7 = *v7 | (char)(v4 / 256);
    return v5 + v1 & 0xffffffff;
}

// Address range: 0x443115 - 0x443225
int64_t function_443115(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x443115
    int64_t v1; // 0x443115
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t result = v2 & 0xffffffff; // 0x443115
    int64_t v4 = a4 - 1; // 0x443116
    if (v4 == 0) {
        // 0x443118
        return result;
    }
    char v5 = a1;
    bool v6; // 0x443115
    if (v6) {
        unsigned char v7 = (char)v4 % 32; // 0x443125
        char v8 = v5; // 0x443125
        if (v7 != 0) {
            *(char *)a3 = (char)a3 << v7;
            v8 = v3;
        }
        __readfsbyte(result + 0x682a7986);
        char * v9 = (char *)(a4 - 68); // 0x443132
        char v10 = *v9; // 0x443132
        *v9 = v10 + v8;
        int64_t v11 = *(int64_t *)(1 - a4 + v1 + (int64_t)(v8 > -1 - v10) & 0xffffffff); // 0x44313e
        return v11 + 0xe2418555 & 0xffffffff;
    }
    if (v6) {
        char v12 = *(char *)v4; // 0x44316d
        char * v13 = (char *)(a5 + 96); // 0x443173
        *v13 = *v13 + (char)v1;
        __asm_out_133((int16_t)a3, (int32_t)(256 * (int64_t)((char)v6 + (char)(v2 / 256) - v12) | v2 & 0xffff00ff));
        int32_t v14 = *(int32_t *)-0x76222aff7f91e881; // 0x44318c
        *(int32_t *)-0x76222aff7f91e881 = 2 * v14 | (int32_t)(v14 < 0);
        int32_t v15 = *(int32_t *)&v3; // 0x443196
        int64_t result2 = __asm_wait(); // 0x443198
        *(int64_t *)(v1 & 0xffffffff) = (int64_t)(v15 & (int32_t)v1);
        return result2;
    }
    unsigned char v16 = (char)a2;
    int64_t result3 = v2 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3); // 0x4431a0
    int64_t v17 = v6 ? -1 : 1; // 0x4431a1
    v3 = v17 + a1;
    if (llvm_ctpop_i8(v16 - v5) % 2 == 0) {
        // 0x443214
        __asm_out_134(120, (int32_t)result3);
        return result3;
    }
    uint32_t v18 = (int32_t)(v16 < v5) + (int32_t)a2 + (int32_t)v1; // 0x4431a4
    char * v19 = (char *)(a2 - 44 + v17); // 0x4431a6
    char v20 = *v19; // 0x4431a6
    unsigned char v21 = (char)v18 % 32; // 0x4431a6
    if (v21 != 0) {
        *v19 = v20 << v21;
        char * v22 = (char *)((int64_t)v18 + 0x3e21c339); // 0x4431a9
        unsigned char v23 = *v22; // 0x4431a9
        *v22 = v23 >> v21 | (char)((v20 & 128 >> v21 - 1) != 0) << 8 - v21 | (char)((int16_t)v23 << (int16_t)(9 - v21));
    }
    // 0x443118
    return result3;
}

// Address range: 0x443227 - 0x44322d
int64_t function_443227(int64_t a1) {
    // 0x443227
    int64_t v1; // 0x443227
    bool v2; // 0x443227
    return v1 + 0x742f4690 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x443247 - 0x44324d
int64_t function_443247(int64_t a1, int64_t a2) {
    // 0x443247
    return 23 * a2 & 0xffffffff;
}

// Address range: 0x443264 - 0x443267
int64_t function_443264(int64_t a1) {
    // 0x443264
    int64_t result; // 0x443264
    return result;
}

// Address range: 0x443270 - 0x4433c9
int64_t function_443270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x443270
    int64_t v1; // 0x443270
    int64_t v2 = v1 | a2;
    char v3 = v2; // 0x443270
    switch (a4) {
        case 1: {
            // 0x443274
            *(char *)a3 = v3 + (char)a3;
            int64_t v4 = __asm_int1(); // 0x4432c5
            char v5 = v4; // 0x4432c6
            char v6 = *(char *)(v1 - 54); // 0x4432c6
            unsigned char v7 = v6 + v5; // 0x4432c6
            if (((v7 ^ v5) & (v7 ^ v6)) < 0) {
                // 0x4432cd
                return v4 & -256 | (int64_t)v7;
            }
            // 0x4432d6
            *(int32_t *)a1 = __asm_insd((int16_t)a3);
            __asm_int1();
            return unknown_171a4535();
        }
        case 2: {
            // 0x4432f7
            if (llvm_ctpop_i8(v3) % 2 == 0) {
                // 0x4432fd
                return a3 & 0xffffffff;
            }
            int32_t v8 = v2; // 0x443270
            *(char *)a1 = v3;
            *(int32_t *)a2 = (int32_t)a2;
            return (v2 & 0xffff00ff | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v1 < 0) | 128 * (int64_t)(v8 < 0)) | 512) + 0x6c6d30fc & 0xffffffff;
        }
    }
    int32_t * v9 = (int32_t *)(a2 - 52 + a3); // 0x44332a
    *v9 = *v9 + 1;
    return v2 & 0xffffffff;
}

// Address range: 0x443401 - 0x443402
int64_t function_443401(void) {
    // 0x443401
    int64_t result; // 0x443401
    return result;
}

// Address range: 0x443464 - 0x443466
int64_t function_443464(void) {
    // 0x443464
    return function_443401();
}

// Address range: 0x443567 - 0x44359c
int64_t function_443567(void) {
    // 0x443567
    int64_t v1; // 0x443567
    unsigned char v2 = (char)v1;
    unsigned char v3 = v2 + (char)v1; // 0x443567
    *(char *)v1 = v3;
    int64_t result; // 0x443567
    if (v3 < v2 || v3 == 0) {
        // 0x44356c
        return result;
    }
    // 0x44359a
    return (int64_t)*(int32_t *)&result;
}

// Address range: 0x4435c1 - 0x4435c3
int64_t function_4435c1(void) {
    // 0x4435c1
    int64_t result; // 0x4435c1
    return result;
}
