/*
 * Targeted RetDec C for native executable gap queue batch 1052.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1027ee-0x1029ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1029ee-0x102bee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dca79-0x4dcb79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dcc79-0x4dcd79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dcef9-0x4dcf79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dd079-0x4dd0f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dd379-0x4dd3f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dd879-0x4dd8f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e2579-0x4e2779 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e2879-0x4e2979 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e2979-0x4e2b79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e2b79-0x4e2d79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e2d79-0x4e2f79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e2f79-0x4e3179 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e3179-0x4e3379 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e3379-0x4e3579 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1027ee(int64_t a1);
int64_t function_102809(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result, int64_t a6, int64_t a7);
int64_t function_1028e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1029f1(int64_t a1);
int64_t function_102a7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_102ae0(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_102b37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4dca79(void);
int64_t function_4dca88(void);
int64_t function_4dca8c(void);
int64_t function_4dca92(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4dcabe(void);
int64_t function_4dcac1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4dcad7(void);
int64_t function_4dcaf9(void);
int64_t function_4dcb15(void);
int64_t function_4dcc4e();
int64_t function_4dcc79(void);
int64_t function_4dccb8(void);
int64_t function_4dccbd(void);
int64_t function_4dcccd(void);
int64_t function_4dccd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4dcce0(void);
int64_t function_4dccf2(void);
int64_t function_4dcd1b(void);
int64_t function_4dcd2b(void);
int64_t function_4dcd32(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4dcd3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4dcd47(void);
int64_t function_4dcd56(void);
int64_t function_4dcef9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4dd079(void);
int64_t function_4dd082(void);
int64_t function_4dd084(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4dd095(void);
int64_t function_4dd0ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4dd0be(void);
int64_t function_4dd379(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4dd389(void);
int64_t function_4dd879(void);
int64_t function_4dd8dc(int64_t a1);
int64_t function_4e2579(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4e258b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4e25ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4e25b6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e25bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4e25d9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e2879(void);
int64_t unknown_ffffffffd405ed87();

// Address range: 0x1027ee - 0x1027ef
int64_t function_1027ee(int64_t a1) {
    // 0x1027ee
    int64_t result; // 0x1027ee
    return result;
}

// Address range: 0x102809 - 0x1028b0
int64_t function_102809(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    char v2 = __asm_in_133(-50); // 0x102809
    int64_t v3; // 0x102809
    char * v4 = (char *)(v3 + 7); // 0x10280b
    char v5 = *v4; // 0x10280b
    char v6 = a4; // 0x10280b
    bool v7; // 0x102809
    char v8 = v7; // 0x10280b
    char v9 = v8 + v6 + v5; // 0x10280b
    char v10 = v9 + v8; // 0x10280b
    *v4 = v9;
    if (v9 < 0 == ((v10 ^ v5) & (v10 ^ v6)) < 0) {
        int32_t * v11 = (int32_t *)(a3 - 24); // 0x102815
        *v11 = *v11 + (int32_t)a1;
        return result;
    }
    int32_t * v12 = (int32_t *)(a1 - 0x493bf079); // 0x102840
    int32_t v13 = v3; // 0x102840
    int32_t v14 = *v12 + v13; // 0x102840
    *v12 = v14;
    if (v14 != 0) {
        uint64_t v15 = (int64_t)v2; // 0x102809
        return (v3 | v15) & -256 | (int64_t)*(char *)(v15 % 256 + v3);
    }
    char * v16 = (char *)(a3 + 0x2ff9cbb); // 0x102848
    unsigned char v17 = *v16; // 0x102848
    *v16 = v17 / 8 | 32 * v17;
    uint32_t result2 = *(int32_t *)&v1; // 0x10284f
    v1 += (v7 ? -4 : 4);
    char v18 = v3 / 256; // 0x10285b
    char v19 = *(char *)(v3 + 5); // 0x10285b
    if (((v18 - v19 ^ v18) & (v19 ^ v18)) >= 0) {
        // 0x102884
        return result2;
    }
    int32_t v20 = *(int32_t *)(a4 + 0x510a3e81) & (int32_t)v3; // 0x102850
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char v21 = *(char *)(v1 + 61); // 0x102862
    int32_t * v22 = (int32_t *)(a1 + 0x48019da9); // 0x102866
    *v22 = *v22 + result2;
    *(char *)-0x4808d78d = *(char *)-0x4808d78d - v18;
    *(int32_t *)(v1 - 0x57311599) = v13;
    return (int64_t)((char)v20 - (char)a3 + v21) | (int64_t)(v20 & -256);
}

// Address range: 0x1028e7 - 0x1028ec
int64_t function_1028e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1028e7
    int64_t result; // 0x1028e7
    return result;
}

// Address range: 0x1029f1 - 0x1029f7
int64_t function_1029f1(int64_t a1) {
    // 0x1029f1
    int64_t result; // 0x1029f1
    *(char *)result = 0;
    return result;
}

// Address range: 0x102a7f - 0x102add
int64_t function_102a7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x102a7f
    bool v1; // 0x102a7f
    if (v1) {
        char * v2 = (char *)(a3 - 0x596e1814); // 0x102abf
        *v2 = *v2 + (char)a3;
        uint64_t result = a4 & 0xce2455db | 0x31dbaa24; // 0x102ac8
        char * v3 = (char *)(a3 + a2); // 0x102ad2
        *v3 = *v3 + (char)(result / 256);
        char * v4 = (char *)result; // 0x102ad5
        *v4 = *v4 + (char)result;
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return result;
    }
    int64_t v5 = unknown_ffffffffd405ed87(); // 0x102a81
    int64_t result2; // 0x102a7f
    char * v6 = (char *)(a1 + 58 + 8 * result2); // 0x102a86
    *v6 = *v6 + (char)v5;
    *(int32_t *)0x8ef01e87bce5d52 = (int32_t)v5;
    return result2;
}

// Address range: 0x102ae0 - 0x102aea
int64_t function_102ae0(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    int32_t * v1 = (int32_t *)(a3 - 0x76ec0181); // 0x102ae1
    int64_t v2; // 0x102ae0
    *v1 = *v1 + (int32_t)v2;
    return result;
}

// Address range: 0x102b37 - 0x102bab
int64_t function_102b37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)-0x623bede97dd3f5de; // 0x102b37
    int64_t v2; // 0x102b37
    int64_t v3 = v2 & -256 | (int64_t)v1; // 0x102b37
    int32_t * v4 = (int32_t *)(v2 - 53); // 0x102b40
    *v4 = *v4 + (int32_t)v2;
    char * v5 = (char *)v3; // 0x102b4f
    *v5 = *v5 + v1;
    int32_t * v6 = (int32_t *)v3; // 0x102b52
    int32_t v7 = v3; // 0x102b52
    *v6 = *v6 ^ v7;
    *(char *)-0x1a9db2a5 = *(char *)-0x1a9db2a5 + (char)(v2 / 256);
    __asm_out((int16_t)a3, v7);
    int64_t v8 = v3 & 0x7dda6430 | 0x82259bcf; // 0x102b5c
    bool v9; // 0x102b37
    if (*(int32_t *)(a5 - 85 + (v9 ? -1 : 1)) + (int32_t)v2 < 1) {
        // 0x102baa
        return 0x10000 * (int32_t)v8 >> 16;
    }
    // 0x102b66
    return v8 + 121 & 120 | v8 & 0xffffff00;
}

// Address range: 0x4dca79 - 0x4dca7a
int64_t function_4dca79(void) {
    // 0x4dca79
    int64_t result; // 0x4dca79
    return result;
}

// Address range: 0x4dca88 - 0x4dca8b
int64_t function_4dca88(void) {
    // 0x4dca88
    int64_t result; // 0x4dca88
    return result;
}

// Address range: 0x4dca8c - 0x4dca8d
int64_t function_4dca8c(void) {
    // 0x4dca8c
    int64_t result; // 0x4dca8c
    return result;
}

// Address range: 0x4dca92 - 0x4dcab0
int64_t function_4dca92(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4dca92
    int64_t v1; // 0x4dca92
    uint64_t v2 = v1;
    unsigned char v3 = 2 * (char)v2; // 0x4dca95
    int64_t v4 = v2 & -0x10000 | (int64_t)v3; // 0x4dca95
    unsigned char v5 = v3 + (char)(v2 / 256); // 0x4dca97
    int32_t * v6 = (int32_t *)(a3 + 84 + (256 * (int64_t)v5 | v4)); // 0x4dca99
    *v6 = *v6 >> 16;
    unsigned char v7 = v5 / 32 | 8 * v5; // 0x4dca9e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char * v8 = (char *)(a3 - 64 + a4); // 0x4dcaa2
    *v8 = *v8 - (char)a3 + (char)((v5 & 32) != 0);
    int32_t * v9 = (int32_t *)(a3 + 92 + (256 * (int64_t)v7 | v4)); // 0x4dcaa8
    *v9 = *v9 >> 16;
    return 256 * (int64_t)(2 * v7 | v5 / 16 % 2) | v4;
}

// Address range: 0x4dcabe - 0x4dcac0
int64_t function_4dcabe(void) {
    // 0x4dcabe
    int64_t result; // 0x4dcabe
    return result;
}

// Address range: 0x4dcac1 - 0x4dcac9
int64_t function_4dcac1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4dcac1
    int64_t v1; // 0x4dcac1
    int32_t * v2 = (int32_t *)(a3 + 84 + v1); // 0x4dcac1
    int32_t v3 = *v2 >> 16; // 0x4dcac1
    *v2 = v3;
    int64_t result; // 0x4dcac1
    if (a4 != 1 && v3 != 0) {
        result = function_4dca8c();
    }
    // 0x4dcac8
    return result;
}

// Address range: 0x4dcad7 - 0x4dcad8
int64_t function_4dcad7(void) {
    // 0x4dcad7
    int64_t result; // 0x4dcad7
    return result;
}

// Address range: 0x4dcaf9 - 0x4dcafa
int64_t function_4dcaf9(void) {
    // 0x4dcaf9
    int64_t result; // 0x4dcaf9
    return result;
}

// Address range: 0x4dcb15 - 0x4dcb1c
int64_t function_4dcb15(void) {
    // 0x4dcb15
    return function_4dcaf9();
}

// Address range: 0x4dcc79 - 0x4dcc82
int64_t function_4dcc79(void) {
    // 0x4dcc79
    *(int32_t *)-0x3a98420e = 0x200000 * *(int32_t *)-0x3a98420e;
    return function_4dcc4e();
}

// Address range: 0x4dccb8 - 0x4dccb9
int64_t function_4dccb8(void) {
    // 0x4dccb8
    int64_t result; // 0x4dccb8
    return result;
}

// Address range: 0x4dccbd - 0x4dccbe
int64_t function_4dccbd(void) {
    // 0x4dccbd
    int64_t result; // 0x4dccbd
    return result;
}

// Address range: 0x4dcccd - 0x4dccce
int64_t function_4dcccd(void) {
    // 0x4dcccd
    int64_t result; // 0x4dcccd
    return result;
}

// Address range: 0x4dccd4 - 0x4dcce0
int64_t function_4dccd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4dccd4
    int64_t v1; // 0x4dccd4
    int64_t v2 = v1 + 0xa3a2c02; // 0x4dccd6
    __asm_out((int16_t)a3, (int32_t)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x4dcce0 - 0x4dccf1
int64_t function_4dcce0(void) {
    // 0x4dcce0
    return function_4dccbd();
}

// Address range: 0x4dccf2 - 0x4dcd01
int64_t function_4dccf2(void) {
    // 0x4dccf2
    int64_t v1; // 0x4dccf2
    int32_t * v2 = (int32_t *)(v1 + 114); // 0x4dccf2
    uint32_t v3 = *v2; // 0x4dccf2
    bool v4; // 0x4dccf2
    *v2 = 0x10000 * v3 | v3 / 0x20000 | 0x8000 * (int32_t)v4;
    *(int32_t *)-0x3a9d418f = 0x200000 * *(int32_t *)-0x3a9d418f;
    return function_4dcccd();
}

// Address range: 0x4dcd1b - 0x4dcd1c
int64_t function_4dcd1b(void) {
    // 0x4dcd1b
    int64_t result; // 0x4dcd1b
    return result;
}

// Address range: 0x4dcd2b - 0x4dcd2c
int64_t function_4dcd2b(void) {
    // 0x4dcd2b
    int64_t result; // 0x4dcd2b
    return result;
}

// Address range: 0x4dcd32 - 0x4dcd3e
int64_t function_4dcd32(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4dcd32
    int64_t v1; // 0x4dcd32
    int64_t v2 = v1 + 0xa3a2c02; // 0x4dcd34
    __asm_out((int16_t)a3, (int32_t)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x4dcd3f - 0x4dcd43
int64_t function_4dcd3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4dcd3f
    int64_t result; // 0x4dcd3f
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4dcd47 - 0x4dcd4f
int64_t function_4dcd47(void) {
    // 0x4dcd47
    return function_4dcd1b();
}

// Address range: 0x4dcd56 - 0x4dcd5f
int64_t function_4dcd56(void) {
    // 0x4dcd56
    *(int32_t *)-0x3a984131 = 0x200000 * *(int32_t *)-0x3a984131;
    return function_4dcd2b();
}

// Address range: 0x4dcef9 - 0x4dcf0f
int64_t function_4dcef9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4dcef9
    int64_t v1; // 0x4dcef9
    int64_t v2 = v1;
    return 257 * v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x4dd079 - 0x4dd080
int64_t function_4dd079(void) {
    // 0x4dd079
    return __asm_in(-17);
}

// Address range: 0x4dd082 - 0x4dd083
int64_t function_4dd082(void) {
    // 0x4dd082
    int64_t result; // 0x4dd082
    return result;
}

// Address range: 0x4dd084 - 0x4dd08b
int64_t function_4dd084(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4dd084
    int64_t result; // 0x4dd084
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4dd095 - 0x4dd0a8
int64_t function_4dd095(void) {
    // 0x4dd095
    bool v1; // 0x4dd095
    if (!v1) {
        function_4dd082();
    }
    // 0x4dd097
    return __asm_in(-17);
}

// Address range: 0x4dd0ac - 0x4dd0b3
int64_t function_4dd0ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4dd0ac
    int64_t result; // 0x4dd0ac
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4dd0be - 0x4dd0c0
int64_t function_4dd0be(void) {
    // 0x4dd0be
    int64_t result; // 0x4dd0be
    return result;
}

// Address range: 0x4dd379 - 0x4dd388
int64_t function_4dd379(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4dd379
    int64_t result; // 0x4dd379
    return result;
}

// Address range: 0x4dd389 - 0x4dd38e
int64_t function_4dd389(void) {
    // 0x4dd389
    int64_t v1; // 0x4dd389
    int16_t v2 = v1; // 0x4dd389
    int16_t v3 = (int16_t)((uint64_t)v1 / 256) % 256; // 0x4dd389
    return v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3));
}

// Address range: 0x4dd879 - 0x4dd87a
int64_t function_4dd879(void) {
    // 0x4dd879
    int64_t result; // 0x4dd879
    return result;
}

// Address range: 0x4dd8dc - 0x4dd8df
int64_t function_4dd8dc(int64_t a1) {
    // 0x4dd8dc
    int64_t result; // 0x4dd8dc
    return result;
}

// Address range: 0x4e2579 - 0x4e258b
int64_t function_4e2579(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e2579
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x4e2579
    return v1 & 0x9d0095b7 | 0x62ff6a48;
}

// Address range: 0x4e258b - 0x4e2591
int64_t function_4e258b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e258b
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x4e258b
    return result;
}

// Address range: 0x4e25ae - 0x4e25b5
int64_t function_4e25ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e25ae
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x4e25ae
    return result;
}

// Address range: 0x4e25b6 - 0x4e25bb
int64_t function_4e25b6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e25b6
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x4e25b6
    return result;
}

// Address range: 0x4e25bc - 0x4e25c1
int64_t function_4e25bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e25bc
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x4e25bc
    return result;
}

// Address range: 0x4e25d9 - 0x4e25e5
int64_t function_4e25d9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e25d9
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint32_t v1 = *(int32_t *)(a3 + 17); // 0x4e25dc
    int64_t v2; // 0x4e25d9
    int32_t v3 = __asm_insd((int16_t)((v2 & 0xffffffff) * (int64_t)v1 / 0x100000000)); // 0x4e25e0
    *(int32_t *)a1 = v3;
    return v2 & 0xffffffff;
}

// Address range: 0x4e2879 - 0x4e3577
int64_t function_4e2879(void) {
    // 0x4e2879
    int256_t v1; // 0x4e2879
    int256_t v2 = __asm_vpaddd(v1, v1); // 0x4e2879
    int256_t v3 = __asm_vpaddd(v1, v1); // 0x4e287f
    int256_t v4 = __asm_vpaddd(v1, v1); // 0x4e2885
    int256_t v5 = __asm_vpaddd(v1, v1); // 0x4e288b
    int256_t v6 = __asm_vpaddd(v2, v1); // 0x4e288f
    int256_t v7 = __asm_vpaddd(v3, v1); // 0x4e2893
    int256_t v8 = __asm_vpaddd(v4, v1); // 0x4e2897
    int256_t v9 = __asm_vpxord(v1, v5); // 0x4e289b
    int256_t v10 = __asm_vpxord(v1, v6); // 0x4e28a1
    int256_t v11 = __asm_vpxord(v1, v7); // 0x4e28a7
    int256_t v12 = __asm_vpxord(v1, v8); // 0x4e28ad
    int256_t v13 = __asm_vprord(v9, 16); // 0x4e28b3
    int256_t v14 = __asm_vprord(v10, 16); // 0x4e28ba
    int256_t v15 = __asm_vprord(v11, 16); // 0x4e28c1
    int256_t v16 = __asm_vprord(v12, 16); // 0x4e28c8
    int256_t v17 = __asm_vpaddd(v1, v13); // 0x4e28cf
    int256_t v18 = __asm_vpaddd(v1, v14); // 0x4e28d4
    int256_t v19 = __asm_vpaddd(v1, v15); // 0x4e28d9
    int256_t v20 = __asm_vpaddd(v1, v16); // 0x4e28de
    int256_t v21 = __asm_vpxord(v1, v17); // 0x4e28e3
    int256_t v22 = __asm_vpxord(v1, v18); // 0x4e28e9
    int256_t v23 = __asm_vpxord(v1, v19); // 0x4e28ef
    int256_t v24 = __asm_vpxord(v1, v20); // 0x4e28f5
    int256_t v25 = __asm_vprord(v21, 12); // 0x4e28fb
    int256_t v26 = __asm_vprord(v22, 12); // 0x4e2902
    int256_t v27 = __asm_vprord(v23, 12); // 0x4e2909
    int256_t v28 = __asm_vprord(v24, 12); // 0x4e2910
    int256_t v29 = __asm_vpaddd(v5, v1); // 0x4e2917
    int256_t v30 = __asm_vpaddd(v6, v1); // 0x4e291d
    int256_t v31 = __asm_vpaddd(v7, v1); // 0x4e2923
    int256_t v32 = __asm_vpaddd(v8, v1); // 0x4e2929
    int256_t v33 = __asm_vpaddd(v29, v25); // 0x4e292f
    int256_t v34 = __asm_vpaddd(v30, v26); // 0x4e2933
    int256_t v35 = __asm_vpaddd(v31, v27); // 0x4e2937
    int256_t v36 = __asm_vpaddd(v32, v28); // 0x4e293b
    int256_t v37 = __asm_vpxord(v13, v33); // 0x4e293f
    int256_t v38 = __asm_vpxord(v14, v34); // 0x4e2945
    int256_t v39 = __asm_vpxord(v15, v35); // 0x4e294b
    int256_t v40 = __asm_vpxord(v16, v36); // 0x4e2951
    int256_t v41 = __asm_vprord(v37, 8); // 0x4e2957
    int256_t v42 = __asm_vprord(v38, 8); // 0x4e295e
    int256_t v43 = __asm_vprord(v39, 8); // 0x4e2965
    int256_t v44 = __asm_vprord(v40, 8); // 0x4e296c
    int256_t v45 = __asm_vpaddd(v17, v41); // 0x4e2973
    int256_t v46 = __asm_vpaddd(v18, v42); // 0x4e2978
    int256_t v47 = __asm_vpaddd(v19, v43); // 0x4e297d
    int256_t v48 = __asm_vpaddd(v20, v44); // 0x4e2982
    int256_t v49 = __asm_vpxord(v25, v45); // 0x4e2987
    int256_t v50 = __asm_vpxord(v26, v46); // 0x4e298d
    int256_t v51 = __asm_vpxord(v27, v47); // 0x4e2993
    int256_t v52 = __asm_vpxord(v28, v48); // 0x4e2999
    int256_t v53 = __asm_vprord(v49, 7); // 0x4e299f
    int256_t v54 = __asm_vprord(v50, 7); // 0x4e29a6
    int256_t v55 = __asm_vprord(v51, 7); // 0x4e29ad
    int256_t v56 = __asm_vprord(v52, 7); // 0x4e29b4
    int256_t v57 = __asm_vpaddd(v33, v1); // 0x4e29bb
    int256_t v58 = __asm_vpaddd(v34, v1); // 0x4e29c1
    int256_t v59 = __asm_vpaddd(v35, v1); // 0x4e29c7
    int256_t v60 = __asm_vpaddd(v36, v1); // 0x4e29cd
    int256_t v61 = __asm_vpaddd(v57, v54); // 0x4e29d3
    int256_t v62 = __asm_vpaddd(v58, v55); // 0x4e29d7
    int256_t v63 = __asm_vpaddd(v59, v56); // 0x4e29db
    int256_t v64 = __asm_vpaddd(v60, v53); // 0x4e29df
    int256_t v65 = __asm_vpxord(v44, v61); // 0x4e29e3
    int256_t v66 = __asm_vpxord(v41, v62); // 0x4e29e9
    int256_t v67 = __asm_vpxord(v42, v63); // 0x4e29ef
    int256_t v68 = __asm_vpxord(v43, v64); // 0x4e29f5
    int256_t v69 = __asm_vprord(v65, 16); // 0x4e29fb
    int256_t v70 = __asm_vprord(v66, 16); // 0x4e2a02
    int256_t v71 = __asm_vprord(v67, 16); // 0x4e2a09
    int256_t v72 = __asm_vprord(v68, 16); // 0x4e2a10
    int256_t v73 = __asm_vpaddd(v47, v69); // 0x4e2a17
    int256_t v74 = __asm_vpaddd(v48, v70); // 0x4e2a1c
    int256_t v75 = __asm_vpaddd(v45, v71); // 0x4e2a21
    int256_t v76 = __asm_vpaddd(v46, v72); // 0x4e2a26
    int256_t v77 = __asm_vpxord(v54, v73); // 0x4e2a2b
    int256_t v78 = __asm_vpxord(v55, v74); // 0x4e2a31
    int256_t v79 = __asm_vpxord(v56, v75); // 0x4e2a37
    int256_t v80 = __asm_vpxord(v53, v76); // 0x4e2a3d
    int256_t v81 = __asm_vprord(v77, 12); // 0x4e2a43
    int256_t v82 = __asm_vprord(v78, 12); // 0x4e2a4a
    int256_t v83 = __asm_vprord(v79, 12); // 0x4e2a51
    int256_t v84 = __asm_vprord(v80, 12); // 0x4e2a58
    int256_t v85 = __asm_vpaddd(v61, v1); // 0x4e2a5f
    int256_t v86 = __asm_vpaddd(v62, v1); // 0x4e2a65
    int256_t v87 = __asm_vpaddd(v63, v1); // 0x4e2a6b
    int256_t v88 = __asm_vpaddd(v64, v1); // 0x4e2a71
    int256_t v89 = __asm_vpaddd(v85, v81); // 0x4e2a77
    int256_t v90 = __asm_vpaddd(v86, v82); // 0x4e2a7b
    int256_t v91 = __asm_vpaddd(v87, v83); // 0x4e2a7f
    int256_t v92 = __asm_vpaddd(v88, v84); // 0x4e2a83
    int256_t v93 = __asm_vpxord(v69, v89); // 0x4e2a87
    int256_t v94 = __asm_vpxord(v70, v90); // 0x4e2a8d
    int256_t v95 = __asm_vpxord(v71, v91); // 0x4e2a93
    int256_t v96 = __asm_vpxord(v72, v92); // 0x4e2a99
    int256_t v97 = __asm_vprord(v93, 8); // 0x4e2a9f
    int256_t v98 = __asm_vprord(v94, 8); // 0x4e2aa6
    int256_t v99 = __asm_vprord(v95, 8); // 0x4e2aad
    int256_t v100 = __asm_vprord(v96, 8); // 0x4e2ab4
    int256_t v101 = __asm_vpaddd(v73, v97); // 0x4e2abb
    int256_t v102 = __asm_vpaddd(v74, v98); // 0x4e2ac0
    int256_t v103 = __asm_vpaddd(v75, v99); // 0x4e2ac5
    int256_t v104 = __asm_vpaddd(v76, v100); // 0x4e2aca
    int256_t v105 = __asm_vpxord(v81, v101); // 0x4e2acf
    int256_t v106 = __asm_vpxord(v82, v102); // 0x4e2ad5
    int256_t v107 = __asm_vpxord(v83, v103); // 0x4e2adb
    int256_t v108 = __asm_vpxord(v84, v104); // 0x4e2ae1
    int256_t v109 = __asm_vprord(v105, 7); // 0x4e2ae7
    int256_t v110 = __asm_vprord(v106, 7); // 0x4e2aee
    int256_t v111 = __asm_vprord(v107, 7); // 0x4e2af5
    int256_t v112 = __asm_vprord(v108, 7); // 0x4e2afc
    int256_t v113 = __asm_vpaddd(v89, v1); // 0x4e2b03
    int256_t v114 = __asm_vpaddd(v90, v1); // 0x4e2b09
    int256_t v115 = __asm_vpaddd(v91, v1); // 0x4e2b0f
    int256_t v116 = __asm_vpaddd(v92, v1); // 0x4e2b15
    int256_t v117 = __asm_vpaddd(v113, v112); // 0x4e2b1b
    int256_t v118 = __asm_vpaddd(v114, v109); // 0x4e2b1f
    int256_t v119 = __asm_vpaddd(v115, v110); // 0x4e2b23
    int256_t v120 = __asm_vpaddd(v116, v111); // 0x4e2b27
    int256_t v121 = __asm_vpxord(v98, v117); // 0x4e2b2b
    int256_t v122 = __asm_vpxord(v99, v118); // 0x4e2b31
    int256_t v123 = __asm_vpxord(v100, v119); // 0x4e2b37
    int256_t v124 = __asm_vpxord(v97, v120); // 0x4e2b3d
    int256_t v125 = __asm_vprord(v121, 16); // 0x4e2b43
    int256_t v126 = __asm_vprord(v122, 16); // 0x4e2b4a
    int256_t v127 = __asm_vprord(v123, 16); // 0x4e2b51
    int256_t v128 = __asm_vprord(v124, 16); // 0x4e2b58
    int256_t v129 = __asm_vpaddd(v103, v125); // 0x4e2b5f
    int256_t v130 = __asm_vpaddd(v104, v126); // 0x4e2b64
    int256_t v131 = __asm_vpaddd(v101, v127); // 0x4e2b69
    int256_t v132 = __asm_vpaddd(v102, v128); // 0x4e2b6e
    int256_t v133 = __asm_vpxord(v112, v129); // 0x4e2b73
    int256_t v134 = __asm_vpxord(v109, v130); // 0x4e2b79
    int256_t v135 = __asm_vpxord(v110, v131); // 0x4e2b7f
    int256_t v136 = __asm_vpxord(v111, v132); // 0x4e2b85
    int256_t v137 = __asm_vprord(v133, 12); // 0x4e2b8b
    int256_t v138 = __asm_vprord(v134, 12); // 0x4e2b92
    int256_t v139 = __asm_vprord(v135, 12); // 0x4e2b99
    int256_t v140 = __asm_vprord(v136, 12); // 0x4e2ba0
    int256_t v141 = __asm_vpaddd(v117, v1); // 0x4e2ba7
    int256_t v142 = __asm_vpaddd(v118, v1); // 0x4e2bad
    int256_t v143 = __asm_vpaddd(v119, v1); // 0x4e2bb3
    int256_t v144 = __asm_vpaddd(v120, v1); // 0x4e2bb9
    int256_t v145 = __asm_vpaddd(v141, v137); // 0x4e2bbf
    int256_t v146 = __asm_vpaddd(v142, v138); // 0x4e2bc3
    int256_t v147 = __asm_vpaddd(v143, v139); // 0x4e2bc7
    int256_t v148 = __asm_vpaddd(v144, v140); // 0x4e2bcb
    int256_t v149 = __asm_vpxord(v125, v145); // 0x4e2bcf
    int256_t v150 = __asm_vpxord(v126, v146); // 0x4e2bd5
    int256_t v151 = __asm_vpxord(v127, v147); // 0x4e2bdb
    int256_t v152 = __asm_vpxord(v128, v148); // 0x4e2be1
    int256_t v153 = __asm_vprord(v149, 8); // 0x4e2be7
    int256_t v154 = __asm_vprord(v150, 8); // 0x4e2bee
    int256_t v155 = __asm_vprord(v151, 8); // 0x4e2bf5
    int256_t v156 = __asm_vprord(v152, 8); // 0x4e2bfc
    int256_t v157 = __asm_vpaddd(v129, v153); // 0x4e2c03
    int256_t v158 = __asm_vpaddd(v130, v154); // 0x4e2c08
    int256_t v159 = __asm_vpaddd(v131, v155); // 0x4e2c0d
    int256_t v160 = __asm_vpaddd(v132, v156); // 0x4e2c12
    int256_t v161 = __asm_vpxord(v137, v157); // 0x4e2c17
    int256_t v162 = __asm_vpxord(v138, v158); // 0x4e2c1d
    int256_t v163 = __asm_vpxord(v139, v159); // 0x4e2c23
    int256_t v164 = __asm_vpxord(v140, v160); // 0x4e2c29
    int256_t v165 = __asm_vprord(v161, 7); // 0x4e2c2f
    int256_t v166 = __asm_vprord(v162, 7); // 0x4e2c36
    int256_t v167 = __asm_vprord(v163, 7); // 0x4e2c3d
    int256_t v168 = __asm_vprord(v164, 7); // 0x4e2c44
    int256_t v169 = __asm_vpaddd(v145, v1); // 0x4e2c4b
    int256_t v170 = __asm_vpaddd(v146, v1); // 0x4e2c51
    int256_t v171 = __asm_vpaddd(v147, v1); // 0x4e2c57
    int256_t v172 = __asm_vpaddd(v148, v1); // 0x4e2c5d
    int256_t v173 = __asm_vpaddd(v169, v166); // 0x4e2c63
    int256_t v174 = __asm_vpaddd(v170, v167); // 0x4e2c67
    int256_t v175 = __asm_vpaddd(v171, v168); // 0x4e2c6b
    int256_t v176 = __asm_vpaddd(v172, v165); // 0x4e2c6f
    int256_t v177 = __asm_vpxord(v156, v173); // 0x4e2c73
    int256_t v178 = __asm_vpxord(v153, v174); // 0x4e2c79
    int256_t v179 = __asm_vpxord(v154, v175); // 0x4e2c7f
    int256_t v180 = __asm_vpxord(v155, v176); // 0x4e2c85
    int256_t v181 = __asm_vprord(v177, 16); // 0x4e2c8b
    int256_t v182 = __asm_vprord(v178, 16); // 0x4e2c92
    int256_t v183 = __asm_vprord(v179, 16); // 0x4e2c99
    int256_t v184 = __asm_vprord(v180, 16); // 0x4e2ca0
    int256_t v185 = __asm_vpaddd(v159, v181); // 0x4e2ca7
    int256_t v186 = __asm_vpaddd(v160, v182); // 0x4e2cac
    int256_t v187 = __asm_vpaddd(v157, v183); // 0x4e2cb1
    int256_t v188 = __asm_vpaddd(v158, v184); // 0x4e2cb6
    int256_t v189 = __asm_vpxord(v166, v185); // 0x4e2cbb
    int256_t v190 = __asm_vpxord(v167, v186); // 0x4e2cc1
    int256_t v191 = __asm_vpxord(v168, v187); // 0x4e2cc7
    int256_t v192 = __asm_vpxord(v165, v188); // 0x4e2ccd
    int256_t v193 = __asm_vprord(v189, 12); // 0x4e2cd3
    int256_t v194 = __asm_vprord(v190, 12); // 0x4e2cda
    int256_t v195 = __asm_vprord(v191, 12); // 0x4e2ce1
    int256_t v196 = __asm_vprord(v192, 12); // 0x4e2ce8
    int256_t v197 = __asm_vpaddd(v173, v1); // 0x4e2cef
    int256_t v198 = __asm_vpaddd(v174, v1); // 0x4e2cf5
    int256_t v199 = __asm_vpaddd(v175, v1); // 0x4e2cfb
    int256_t v200 = __asm_vpaddd(v176, v1); // 0x4e2d01
    int256_t v201 = __asm_vpaddd(v197, v193); // 0x4e2d07
    int256_t v202 = __asm_vpaddd(v198, v194); // 0x4e2d0b
    int256_t v203 = __asm_vpaddd(v199, v195); // 0x4e2d0f
    int256_t v204 = __asm_vpaddd(v200, v196); // 0x4e2d13
    int256_t v205 = __asm_vpxord(v181, v201); // 0x4e2d17
    int256_t v206 = __asm_vpxord(v182, v202); // 0x4e2d1d
    int256_t v207 = __asm_vpxord(v183, v203); // 0x4e2d23
    int256_t v208 = __asm_vpxord(v184, v204); // 0x4e2d29
    int256_t v209 = __asm_vprord(v205, 8); // 0x4e2d2f
    int256_t v210 = __asm_vprord(v206, 8); // 0x4e2d36
    int256_t v211 = __asm_vprord(v207, 8); // 0x4e2d3d
    int256_t v212 = __asm_vprord(v208, 8); // 0x4e2d44
    int256_t v213 = __asm_vpaddd(v185, v209); // 0x4e2d4b
    int256_t v214 = __asm_vpaddd(v186, v210); // 0x4e2d50
    int256_t v215 = __asm_vpaddd(v187, v211); // 0x4e2d55
    int256_t v216 = __asm_vpaddd(v188, v212); // 0x4e2d5a
    int256_t v217 = __asm_vpxord(v193, v213); // 0x4e2d5f
    int256_t v218 = __asm_vpxord(v194, v214); // 0x4e2d65
    int256_t v219 = __asm_vpxord(v195, v215); // 0x4e2d6b
    int256_t v220 = __asm_vpxord(v196, v216); // 0x4e2d71
    int256_t v221 = __asm_vprord(v217, 7); // 0x4e2d77
    int256_t v222 = __asm_vprord(v218, 7); // 0x4e2d7e
    int256_t v223 = __asm_vprord(v219, 7); // 0x4e2d85
    int256_t v224 = __asm_vprord(v220, 7); // 0x4e2d8c
    int256_t v225 = __asm_vpaddd(v201, v1); // 0x4e2d93
    int256_t v226 = __asm_vpaddd(v202, v1); // 0x4e2d99
    int256_t v227 = __asm_vpaddd(v203, v1); // 0x4e2d9f
    int256_t v228 = __asm_vpaddd(v204, v1); // 0x4e2da5
    int256_t v229 = __asm_vpaddd(v225, v224); // 0x4e2dab
    int256_t v230 = __asm_vpaddd(v226, v221); // 0x4e2daf
    int256_t v231 = __asm_vpaddd(v227, v222); // 0x4e2db3
    int256_t v232 = __asm_vpaddd(v228, v223); // 0x4e2db7
    int256_t v233 = __asm_vpxord(v210, v229); // 0x4e2dbb
    int256_t v234 = __asm_vpxord(v211, v230); // 0x4e2dc1
    int256_t v235 = __asm_vpxord(v212, v231); // 0x4e2dc7
    int256_t v236 = __asm_vpxord(v209, v232); // 0x4e2dcd
    int256_t v237 = __asm_vprord(v233, 16); // 0x4e2dd3
    int256_t v238 = __asm_vprord(v234, 16); // 0x4e2dda
    int256_t v239 = __asm_vprord(v235, 16); // 0x4e2de1
    int256_t v240 = __asm_vprord(v236, 16); // 0x4e2de8
    int256_t v241 = __asm_vpaddd(v215, v237); // 0x4e2def
    int256_t v242 = __asm_vpaddd(v216, v238); // 0x4e2df4
    int256_t v243 = __asm_vpaddd(v213, v239); // 0x4e2df9
    int256_t v244 = __asm_vpaddd(v214, v240); // 0x4e2dfe
    int256_t v245 = __asm_vpxord(v224, v241); // 0x4e2e03
    int256_t v246 = __asm_vpxord(v221, v242); // 0x4e2e09
    int256_t v247 = __asm_vpxord(v222, v243); // 0x4e2e0f
    int256_t v248 = __asm_vpxord(v223, v244); // 0x4e2e15
    int256_t v249 = __asm_vprord(v245, 12); // 0x4e2e1b
    int256_t v250 = __asm_vprord(v246, 12); // 0x4e2e22
    int256_t v251 = __asm_vprord(v247, 12); // 0x4e2e29
    int256_t v252 = __asm_vprord(v248, 12); // 0x4e2e30
    int256_t v253 = __asm_vpaddd(v229, v1); // 0x4e2e37
    int256_t v254 = __asm_vpaddd(v230, v1); // 0x4e2e3d
    int256_t v255 = __asm_vpaddd(v231, v1); // 0x4e2e43
    int256_t v256 = __asm_vpaddd(v232, v1); // 0x4e2e49
    int256_t v257 = __asm_vpaddd(v253, v249); // 0x4e2e4f
    int256_t v258 = __asm_vpaddd(v254, v250); // 0x4e2e53
    int256_t v259 = __asm_vpaddd(v255, v251); // 0x4e2e57
    int256_t v260 = __asm_vpaddd(v256, v252); // 0x4e2e5b
    int256_t v261 = __asm_vpxord(v237, v257); // 0x4e2e5f
    int256_t v262 = __asm_vpxord(v238, v258); // 0x4e2e65
    int256_t v263 = __asm_vpxord(v239, v259); // 0x4e2e6b
    int256_t v264 = __asm_vpxord(v240, v260); // 0x4e2e71
    int256_t v265 = __asm_vprord(v261, 8); // 0x4e2e77
    int256_t v266 = __asm_vprord(v262, 8); // 0x4e2e7e
    int256_t v267 = __asm_vprord(v263, 8); // 0x4e2e85
    int256_t v268 = __asm_vprord(v264, 8); // 0x4e2e8c
    int256_t v269 = __asm_vpaddd(v241, v265); // 0x4e2e93
    int256_t v270 = __asm_vpaddd(v242, v266); // 0x4e2e98
    int256_t v271 = __asm_vpaddd(v243, v267); // 0x4e2e9d
    int256_t v272 = __asm_vpaddd(v244, v268); // 0x4e2ea2
    int256_t v273 = __asm_vpxord(v249, v269); // 0x4e2ea7
    int256_t v274 = __asm_vpxord(v250, v270); // 0x4e2ead
    int256_t v275 = __asm_vpxord(v251, v271); // 0x4e2eb3
    int256_t v276 = __asm_vpxord(v252, v272); // 0x4e2eb9
    int256_t v277 = __asm_vprord(v273, 7); // 0x4e2ebf
    int256_t v278 = __asm_vprord(v274, 7); // 0x4e2ec6
    int256_t v279 = __asm_vprord(v275, 7); // 0x4e2ecd
    int256_t v280 = __asm_vprord(v276, 7); // 0x4e2ed4
    int256_t v281 = __asm_vpaddd(v257, v1); // 0x4e2edb
    int256_t v282 = __asm_vpaddd(v258, v1); // 0x4e2ee1
    int256_t v283 = __asm_vpaddd(v259, v1); // 0x4e2ee7
    int256_t v284 = __asm_vpaddd(v260, v1); // 0x4e2eed
    int256_t v285 = __asm_vpaddd(v281, v278); // 0x4e2ef3
    int256_t v286 = __asm_vpaddd(v282, v279); // 0x4e2ef7
    int256_t v287 = __asm_vpaddd(v283, v280); // 0x4e2efb
    int256_t v288 = __asm_vpaddd(v284, v277); // 0x4e2eff
    int256_t v289 = __asm_vpxord(v268, v285); // 0x4e2f03
    int256_t v290 = __asm_vpxord(v265, v286); // 0x4e2f09
    int256_t v291 = __asm_vpxord(v266, v287); // 0x4e2f0f
    int256_t v292 = __asm_vpxord(v267, v288); // 0x4e2f15
    int256_t v293 = __asm_vprord(v289, 16); // 0x4e2f1b
    int256_t v294 = __asm_vprord(v290, 16); // 0x4e2f22
    int256_t v295 = __asm_vprord(v291, 16); // 0x4e2f29
    int256_t v296 = __asm_vprord(v292, 16); // 0x4e2f30
    int256_t v297 = __asm_vpaddd(v271, v293); // 0x4e2f37
    int256_t v298 = __asm_vpaddd(v272, v294); // 0x4e2f3c
    int256_t v299 = __asm_vpaddd(v269, v295); // 0x4e2f41
    int256_t v300 = __asm_vpaddd(v270, v296); // 0x4e2f46
    int256_t v301 = __asm_vpxord(v278, v297); // 0x4e2f4b
    int256_t v302 = __asm_vpxord(v279, v298); // 0x4e2f51
    int256_t v303 = __asm_vpxord(v280, v299); // 0x4e2f57
    int256_t v304 = __asm_vpxord(v277, v300); // 0x4e2f5d
    int256_t v305 = __asm_vprord(v301, 12); // 0x4e2f63
    int256_t v306 = __asm_vprord(v302, 12); // 0x4e2f6a
    int256_t v307 = __asm_vprord(v303, 12); // 0x4e2f71
    int256_t v308 = __asm_vprord(v304, 12); // 0x4e2f78
    int256_t v309 = __asm_vpaddd(v285, v1); // 0x4e2f7f
    int256_t v310 = __asm_vpaddd(v286, v1); // 0x4e2f85
    int256_t v311 = __asm_vpaddd(v287, v1); // 0x4e2f8b
    int256_t v312 = __asm_vpaddd(v288, v1); // 0x4e2f91
    int256_t v313 = __asm_vpaddd(v309, v305); // 0x4e2f97
    int256_t v314 = __asm_vpaddd(v310, v306); // 0x4e2f9b
    int256_t v315 = __asm_vpaddd(v311, v307); // 0x4e2f9f
    int256_t v316 = __asm_vpaddd(v312, v308); // 0x4e2fa3
    int256_t v317 = __asm_vpxord(v293, v313); // 0x4e2fa7
    int256_t v318 = __asm_vpxord(v294, v314); // 0x4e2fad
    int256_t v319 = __asm_vpxord(v295, v315); // 0x4e2fb3
    int256_t v320 = __asm_vpxord(v296, v316); // 0x4e2fb9
    int256_t v321 = __asm_vprord(v317, 8); // 0x4e2fbf
    int256_t v322 = __asm_vprord(v318, 8); // 0x4e2fc6
    int256_t v323 = __asm_vprord(v319, 8); // 0x4e2fcd
    int256_t v324 = __asm_vprord(v320, 8); // 0x4e2fd4
    int256_t v325 = __asm_vpaddd(v297, v321); // 0x4e2fdb
    int256_t v326 = __asm_vpaddd(v298, v322); // 0x4e2fe0
    int256_t v327 = __asm_vpaddd(v299, v323); // 0x4e2fe5
    int256_t v328 = __asm_vpaddd(v300, v324); // 0x4e2fea
    int256_t v329 = __asm_vpxord(v305, v325); // 0x4e2fef
    int256_t v330 = __asm_vpxord(v306, v326); // 0x4e2ff5
    int256_t v331 = __asm_vpxord(v307, v327); // 0x4e2ffb
    int256_t v332 = __asm_vpxord(v308, v328); // 0x4e3001
    int256_t v333 = __asm_vprord(v329, 7); // 0x4e3007
    int256_t v334 = __asm_vprord(v330, 7); // 0x4e300e
    int256_t v335 = __asm_vprord(v331, 7); // 0x4e3015
    int256_t v336 = __asm_vprord(v332, 7); // 0x4e301c
    int256_t v337 = __asm_vpaddd(v313, v1); // 0x4e3023
    int256_t v338 = __asm_vpaddd(v314, v1); // 0x4e3029
    int256_t v339 = __asm_vpaddd(v315, v1); // 0x4e302f
    int256_t v340 = __asm_vpaddd(v316, v1); // 0x4e3035
    int256_t v341 = __asm_vpaddd(v337, v336); // 0x4e303b
    int256_t v342 = __asm_vpaddd(v338, v333); // 0x4e303f
    int256_t v343 = __asm_vpaddd(v339, v334); // 0x4e3043
    int256_t v344 = __asm_vpaddd(v340, v335); // 0x4e3047
    int256_t v345 = __asm_vpxord(v322, v341); // 0x4e304b
    int256_t v346 = __asm_vpxord(v323, v342); // 0x4e3051
    int256_t v347 = __asm_vpxord(v324, v343); // 0x4e3057
    int256_t v348 = __asm_vpxord(v321, v344); // 0x4e305d
    int256_t v349 = __asm_vprord(v345, 16); // 0x4e3063
    int256_t v350 = __asm_vprord(v346, 16); // 0x4e306a
    int256_t v351 = __asm_vprord(v347, 16); // 0x4e3071
    int256_t v352 = __asm_vprord(v348, 16); // 0x4e3078
    int256_t v353 = __asm_vpaddd(v327, v349); // 0x4e307f
    int256_t v354 = __asm_vpaddd(v328, v350); // 0x4e3084
    int256_t v355 = __asm_vpaddd(v325, v351); // 0x4e3089
    int256_t v356 = __asm_vpaddd(v326, v352); // 0x4e308e
    int256_t v357 = __asm_vpxord(v336, v353); // 0x4e3093
    int256_t v358 = __asm_vpxord(v333, v354); // 0x4e3099
    int256_t v359 = __asm_vpxord(v334, v355); // 0x4e309f
    int256_t v360 = __asm_vpxord(v335, v356); // 0x4e30a5
    int256_t v361 = __asm_vprord(v357, 12); // 0x4e30ab
    int256_t v362 = __asm_vprord(v358, 12); // 0x4e30b2
    int256_t v363 = __asm_vprord(v359, 12); // 0x4e30b9
    int256_t v364 = __asm_vprord(v360, 12); // 0x4e30c0
    int256_t v365 = __asm_vpaddd(v341, v1); // 0x4e30c7
    int256_t v366 = __asm_vpaddd(v342, v1); // 0x4e30cd
    int256_t v367 = __asm_vpaddd(v343, v1); // 0x4e30d3
    int256_t v368 = __asm_vpaddd(v344, v1); // 0x4e30d9
    int256_t v369 = __asm_vpaddd(v365, v361); // 0x4e30df
    int256_t v370 = __asm_vpaddd(v366, v362); // 0x4e30e3
    int256_t v371 = __asm_vpaddd(v367, v363); // 0x4e30e7
    int256_t v372 = __asm_vpaddd(v368, v364); // 0x4e30eb
    int256_t v373 = __asm_vpxord(v349, v369); // 0x4e30ef
    int256_t v374 = __asm_vpxord(v350, v370); // 0x4e30f5
    int256_t v375 = __asm_vpxord(v351, v371); // 0x4e30fb
    int256_t v376 = __asm_vpxord(v352, v372); // 0x4e3101
    int256_t v377 = __asm_vprord(v373, 8); // 0x4e3107
    int256_t v378 = __asm_vprord(v374, 8); // 0x4e310e
    int256_t v379 = __asm_vprord(v375, 8); // 0x4e3115
    int256_t v380 = __asm_vprord(v376, 8); // 0x4e311c
    int256_t v381 = __asm_vpaddd(v353, v377); // 0x4e3123
    int256_t v382 = __asm_vpaddd(v354, v378); // 0x4e3128
    int256_t v383 = __asm_vpaddd(v355, v379); // 0x4e312d
    int256_t v384 = __asm_vpaddd(v356, v380); // 0x4e3132
    int256_t v385 = __asm_vpxord(v361, v381); // 0x4e3137
    int256_t v386 = __asm_vpxord(v362, v382); // 0x4e313d
    int256_t v387 = __asm_vpxord(v363, v383); // 0x4e3143
    int256_t v388 = __asm_vpxord(v364, v384); // 0x4e3149
    int256_t v389 = __asm_vprord(v385, 7); // 0x4e314f
    int256_t v390 = __asm_vprord(v386, 7); // 0x4e3156
    int256_t v391 = __asm_vprord(v387, 7); // 0x4e315d
    int256_t v392 = __asm_vprord(v388, 7); // 0x4e3164
    int256_t v393 = __asm_vpaddd(v369, v1); // 0x4e316b
    int256_t v394 = __asm_vpaddd(v370, v1); // 0x4e3171
    int256_t v395 = __asm_vpaddd(v371, v1); // 0x4e3177
    int256_t v396 = __asm_vpaddd(v372, v1); // 0x4e317d
    int256_t v397 = __asm_vpaddd(v393, v390); // 0x4e3183
    int256_t v398 = __asm_vpaddd(v394, v391); // 0x4e3187
    int256_t v399 = __asm_vpaddd(v395, v392); // 0x4e318b
    int256_t v400 = __asm_vpaddd(v396, v389); // 0x4e318f
    int256_t v401 = __asm_vpxord(v380, v397); // 0x4e3193
    int256_t v402 = __asm_vpxord(v377, v398); // 0x4e3199
    int256_t v403 = __asm_vpxord(v378, v399); // 0x4e319f
    int256_t v404 = __asm_vpxord(v379, v400); // 0x4e31a5
    int256_t v405 = __asm_vprord(v401, 16); // 0x4e31ab
    int256_t v406 = __asm_vprord(v402, 16); // 0x4e31b2
    int256_t v407 = __asm_vprord(v403, 16); // 0x4e31b9
    int256_t v408 = __asm_vprord(v404, 16); // 0x4e31c0
    int256_t v409 = __asm_vpaddd(v383, v405); // 0x4e31c7
    int256_t v410 = __asm_vpaddd(v384, v406); // 0x4e31cc
    int256_t v411 = __asm_vpaddd(v381, v407); // 0x4e31d1
    int256_t v412 = __asm_vpaddd(v382, v408); // 0x4e31d6
    int256_t v413 = __asm_vpxord(v390, v409); // 0x4e31db
    int256_t v414 = __asm_vpxord(v391, v410); // 0x4e31e1
    int256_t v415 = __asm_vpxord(v392, v411); // 0x4e31e7
    int256_t v416 = __asm_vpxord(v389, v412); // 0x4e31ed
    int256_t v417 = __asm_vprord(v413, 12); // 0x4e31f3
    int256_t v418 = __asm_vprord(v414, 12); // 0x4e31fa
    int256_t v419 = __asm_vprord(v415, 12); // 0x4e3201
    int256_t v420 = __asm_vprord(v416, 12); // 0x4e3208
    int256_t v421 = __asm_vpaddd(v397, v1); // 0x4e320f
    int256_t v422 = __asm_vpaddd(v398, v1); // 0x4e3215
    int256_t v423 = __asm_vpaddd(v399, v1); // 0x4e321b
    int256_t v424 = __asm_vpaddd(v400, v1); // 0x4e3221
    int256_t v425 = __asm_vpaddd(v421, v417); // 0x4e3227
    int256_t v426 = __asm_vpaddd(v422, v418); // 0x4e322b
    int256_t v427 = __asm_vpaddd(v423, v419); // 0x4e322f
    int256_t v428 = __asm_vpaddd(v424, v420); // 0x4e3233
    int256_t v429 = __asm_vpxord(v405, v425); // 0x4e3237
    int256_t v430 = __asm_vpxord(v406, v426); // 0x4e323d
    int256_t v431 = __asm_vpxord(v407, v427); // 0x4e3243
    int256_t v432 = __asm_vpxord(v408, v428); // 0x4e3249
    int256_t v433 = __asm_vprord(v429, 8); // 0x4e324f
    int256_t v434 = __asm_vprord(v430, 8); // 0x4e3256
    int256_t v435 = __asm_vprord(v431, 8); // 0x4e325d
    int256_t v436 = __asm_vprord(v432, 8); // 0x4e3264
    int256_t v437 = __asm_vpaddd(v409, v433); // 0x4e326b
    int256_t v438 = __asm_vpaddd(v410, v434); // 0x4e3270
    int256_t v439 = __asm_vpaddd(v411, v435); // 0x4e3275
    int256_t v440 = __asm_vpaddd(v412, v436); // 0x4e327a
    int256_t v441 = __asm_vpxord(v417, v437); // 0x4e327f
    int256_t v442 = __asm_vpxord(v418, v438); // 0x4e3285
    int256_t v443 = __asm_vpxord(v419, v439); // 0x4e328b
    int256_t v444 = __asm_vpxord(v420, v440); // 0x4e3291
    int256_t v445 = __asm_vprord(v441, 7); // 0x4e3297
    int256_t v446 = __asm_vprord(v442, 7); // 0x4e329e
    int256_t v447 = __asm_vprord(v443, 7); // 0x4e32a5
    int256_t v448 = __asm_vprord(v444, 7); // 0x4e32ac
    int256_t v449 = __asm_vpaddd(v425, v1); // 0x4e32b3
    int256_t v450 = __asm_vpaddd(v426, v1); // 0x4e32b9
    int256_t v451 = __asm_vpaddd(v427, v1); // 0x4e32bf
    int256_t v452 = __asm_vpaddd(v428, v1); // 0x4e32c5
    int256_t v453 = __asm_vpaddd(v449, v448); // 0x4e32cb
    int256_t v454 = __asm_vpaddd(v450, v445); // 0x4e32cf
    int256_t v455 = __asm_vpaddd(v451, v446); // 0x4e32d3
    int256_t v456 = __asm_vpaddd(v452, v447); // 0x4e32d7
    int256_t v457 = __asm_vpxord(v434, v453); // 0x4e32db
    int256_t v458 = __asm_vpxord(v435, v454); // 0x4e32e1
    int256_t v459 = __asm_vpxord(v436, v455); // 0x4e32e7
    int256_t v460 = __asm_vpxord(v433, v456); // 0x4e32ed
    int256_t v461 = __asm_vprord(v457, 16); // 0x4e32f3
    int256_t v462 = __asm_vprord(v458, 16); // 0x4e32fa
    int256_t v463 = __asm_vprord(v459, 16); // 0x4e3301
    int256_t v464 = __asm_vprord(v460, 16); // 0x4e3308
    int256_t v465 = __asm_vpaddd(v439, v461); // 0x4e330f
    int256_t v466 = __asm_vpaddd(v440, v462); // 0x4e3314
    int256_t v467 = __asm_vpaddd(v437, v463); // 0x4e3319
    int256_t v468 = __asm_vpaddd(v438, v464); // 0x4e331e
    int256_t v469 = __asm_vpxord(v448, v465); // 0x4e3323
    int256_t v470 = __asm_vpxord(v445, v466); // 0x4e3329
    int256_t v471 = __asm_vpxord(v446, v467); // 0x4e332f
    int256_t v472 = __asm_vpxord(v447, v468); // 0x4e3335
    int256_t v473 = __asm_vprord(v469, 12); // 0x4e333b
    int256_t v474 = __asm_vprord(v470, 12); // 0x4e3342
    int256_t v475 = __asm_vprord(v471, 12); // 0x4e3349
    int256_t v476 = __asm_vprord(v472, 12); // 0x4e3350
    int256_t v477 = __asm_vpaddd(v453, v1); // 0x4e3357
    int256_t v478 = __asm_vpaddd(v454, v1); // 0x4e335d
    int256_t v479 = __asm_vpaddd(v455, v1); // 0x4e3363
    int256_t v480 = __asm_vpaddd(v456, v1); // 0x4e3369
    int256_t v481 = __asm_vpaddd(v477, v473); // 0x4e336f
    int256_t v482 = __asm_vpaddd(v478, v474); // 0x4e3373
    int256_t v483 = __asm_vpaddd(v479, v475); // 0x4e3377
    int256_t v484 = __asm_vpaddd(v480, v476); // 0x4e337b
    int256_t v485 = __asm_vpxord(v461, v481); // 0x4e337f
    int256_t v486 = __asm_vpxord(v462, v482); // 0x4e3385
    int256_t v487 = __asm_vpxord(v463, v483); // 0x4e338b
    int256_t v488 = __asm_vpxord(v464, v484); // 0x4e3391
    int256_t v489 = __asm_vprord(v485, 8); // 0x4e3397
    int256_t v490 = __asm_vprord(v486, 8); // 0x4e339e
    int256_t v491 = __asm_vprord(v487, 8); // 0x4e33a5
    int256_t v492 = __asm_vprord(v488, 8); // 0x4e33ac
    int256_t v493 = __asm_vpaddd(v465, v489); // 0x4e33b3
    int256_t v494 = __asm_vpaddd(v466, v490); // 0x4e33b8
    int256_t v495 = __asm_vpaddd(v467, v491); // 0x4e33bd
    int256_t v496 = __asm_vpaddd(v468, v492); // 0x4e33c2
    int256_t v497 = __asm_vpxord(v473, v493); // 0x4e33c7
    int256_t v498 = __asm_vpxord(v474, v494); // 0x4e33cd
    int256_t v499 = __asm_vpxord(v475, v495); // 0x4e33d3
    int256_t v500 = __asm_vpxord(v476, v496); // 0x4e33d9
    int256_t v501 = __asm_vprord(v497, 7); // 0x4e33df
    int256_t v502 = __asm_vprord(v498, 7); // 0x4e33e6
    int256_t v503 = __asm_vprord(v499, 7); // 0x4e33ed
    int256_t v504 = __asm_vprord(v500, 7); // 0x4e33f4
    int256_t v505 = __asm_vpaddd(v481, v1); // 0x4e33fb
    int256_t v506 = __asm_vpaddd(v482, v1); // 0x4e3401
    int256_t v507 = __asm_vpaddd(v483, v1); // 0x4e3407
    int256_t v508 = __asm_vpaddd(v484, v1); // 0x4e340d
    int256_t v509 = __asm_vpaddd(v505, v502); // 0x4e3413
    int256_t v510 = __asm_vpaddd(v506, v503); // 0x4e3417
    int256_t v511 = __asm_vpaddd(v507, v504); // 0x4e341b
    int256_t v512 = __asm_vpaddd(v508, v501); // 0x4e341f
    int256_t v513 = __asm_vpxord(v492, v509); // 0x4e3423
    int256_t v514 = __asm_vpxord(v489, v510); // 0x4e3429
    int256_t v515 = __asm_vpxord(v490, v511); // 0x4e342f
    int256_t v516 = __asm_vpxord(v491, v512); // 0x4e3435
    int256_t v517 = __asm_vprord(v513, 16); // 0x4e343b
    int256_t v518 = __asm_vprord(v514, 16); // 0x4e3442
    int256_t v519 = __asm_vprord(v515, 16); // 0x4e3449
    int256_t v520 = __asm_vprord(v516, 16); // 0x4e3450
    int256_t v521 = __asm_vpaddd(v495, v517); // 0x4e3457
    int256_t v522 = __asm_vpaddd(v496, v518); // 0x4e345c
    int256_t v523 = __asm_vpaddd(v493, v519); // 0x4e3461
    int256_t v524 = __asm_vpaddd(v494, v520); // 0x4e3466
    int256_t v525 = __asm_vpxord(v502, v521); // 0x4e346b
    int256_t v526 = __asm_vpxord(v503, v522); // 0x4e3471
    int256_t v527 = __asm_vpxord(v504, v523); // 0x4e3477
    int256_t v528 = __asm_vpxord(v501, v524); // 0x4e347d
    int256_t v529 = __asm_vprord(v525, 12); // 0x4e3483
    int256_t v530 = __asm_vprord(v526, 12); // 0x4e348a
    int256_t v531 = __asm_vprord(v527, 12); // 0x4e3491
    int256_t v532 = __asm_vprord(v528, 12); // 0x4e3498
    int256_t v533 = __asm_vpaddd(v509, v1); // 0x4e349f
    int256_t v534 = __asm_vpaddd(v510, v1); // 0x4e34a5
    int256_t v535 = __asm_vpaddd(v511, v1); // 0x4e34ab
    int256_t v536 = __asm_vpaddd(v512, v1); // 0x4e34b1
    int256_t v537 = __asm_vpaddd(v533, v529); // 0x4e34b7
    int256_t v538 = __asm_vpaddd(v534, v530); // 0x4e34bb
    int256_t v539 = __asm_vpaddd(v535, v531); // 0x4e34bf
    int256_t v540 = __asm_vpaddd(v536, v532); // 0x4e34c3
    int256_t v541 = __asm_vpxord(v517, v537); // 0x4e34c7
    int256_t v542 = __asm_vpxord(v518, v538); // 0x4e34cd
    int256_t v543 = __asm_vpxord(v519, v539); // 0x4e34d3
    int256_t v544 = __asm_vpxord(v520, v540); // 0x4e34d9
    int256_t v545 = __asm_vprord(v541, 8); // 0x4e34df
    int256_t v546 = __asm_vprord(v542, 8); // 0x4e34e6
    int256_t v547 = __asm_vprord(v543, 8); // 0x4e34ed
    int256_t v548 = __asm_vprord(v544, 8); // 0x4e34f4
    int256_t v549 = __asm_vpaddd(v521, v545); // 0x4e34fb
    int256_t v550 = __asm_vpaddd(v522, v546); // 0x4e3500
    int256_t v551 = __asm_vpaddd(v523, v547); // 0x4e3505
    int256_t v552 = __asm_vpaddd(v524, v548); // 0x4e350a
    int256_t v553 = __asm_vpxord(v529, v549); // 0x4e350f
    int256_t v554 = __asm_vpxord(v530, v550); // 0x4e3515
    int256_t v555 = __asm_vpxord(v531, v551); // 0x4e351b
    int256_t v556 = __asm_vpxord(v532, v552); // 0x4e3521
    int256_t v557 = __asm_vprord(v553, 7); // 0x4e3527
    int256_t v558 = __asm_vprord(v554, 7); // 0x4e352e
    int256_t v559 = __asm_vprord(v555, 7); // 0x4e3535
    int256_t v560 = __asm_vprord(v556, 7); // 0x4e353c
    int256_t v561 = __asm_vpaddd(v537, v1); // 0x4e3543
    int256_t v562 = __asm_vpaddd(v538, v1); // 0x4e3549
    int256_t v563 = __asm_vpaddd(v539, v1); // 0x4e354f
    int256_t v564 = __asm_vpaddd(v540, v1); // 0x4e3555
    int256_t v565 = __asm_vpaddd(v561, v560); // 0x4e355b
    int256_t v566 = __asm_vpaddd(v562, v557); // 0x4e355f
    __asm_vpaddd(v563, v558);
    __asm_vpaddd(v564, v559);
    __asm_vpxord(v546, v565);
    __asm_vpxord(v547, v566);
    int64_t result; // 0x4e2879
    return result;
}
