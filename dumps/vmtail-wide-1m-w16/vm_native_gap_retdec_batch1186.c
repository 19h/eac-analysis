/*
 * Targeted RetDec C for native executable gap queue batch 1186.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x305c1e-0x305e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x366ab6-0x366cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x366cb6-0x366eb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x366eb6-0x3670b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3670b6-0x3672b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3672b6-0x3674b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3674b6-0x3676b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3678b6-0x367ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b0a15-0x3b0c15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b0c15-0x3b0e15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b0e15-0x3b1015 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b1015-0x3b1215 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b1215-0x3b1415 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b1415-0x3b1615 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b1615-0x3b1815 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b1815-0x3b1a15 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1b131096();
int64_t function_23cf3d3();
int64_t function_2f9c223f();
int64_t function_305c1e(int64_t a1);
int64_t function_305c32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_305da7(void);
int64_t function_366ab6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_366bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_366d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_366e66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36702d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3671ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36732c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3674ba(void);
int64_t function_3674f0(void);
int64_t function_3674f6(void);
int64_t function_367509(void);
int64_t function_36759f(void);
int64_t function_3675a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36763c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_367694(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3676ad(int64_t a1);
int64_t function_3678b6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36797e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3679c3(int64_t a1);
int64_t function_3679cd(int64_t a1);
int64_t function_367a08(void);
int64_t function_367a17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_367a3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_367a71(void);
int64_t function_367a89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36b11b();
int64_t function_3b0a15(void);
int64_t function_3b0a2a(int64_t a1);
int64_t function_3b0a52(void);
int64_t function_3b0a53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b0b71(void);
int64_t function_3b0b92(void);
int64_t function_3b0c5e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b0c7a(void);
int64_t function_3b0c90(void);
int64_t function_3b0c93(void);
int64_t function_3b0d2b(void);
int64_t function_3b0d2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b0de2(void);
int64_t function_3b0de3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3b0e03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b0e28(void);
int64_t function_3b0e4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b0e9b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b0ec0(int64_t a1);
int64_t function_3b0f45(void);
int64_t function_3b0f5c(int64_t a1);
int64_t function_3b0f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b0fe4(int64_t a1);
int64_t function_3b1058(void);
int64_t function_3b1074(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b10bd(void);
int64_t function_3b10c9(int64_t a1);
int64_t function_3b1191(void);
int64_t function_3b11da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b11eb(void);
int64_t function_3b125a(void);
int64_t function_3b12e4(void);
int64_t function_3b12f5(void);
int64_t function_3b1333(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b13af(void);
int64_t function_3b13d3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b1460(void);
int64_t function_3b146d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3b14a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b14c2(void);
int64_t function_3b14d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b14f0(void);
int64_t function_3b14f9(int32_t a1);
int64_t function_3b1505(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b1537(int64_t a1);
int64_t function_3b1542(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b1575(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b15bd(void);
int64_t function_3b1606(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b1650(int64_t a1);
int64_t function_3b16b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b173a(int64_t a1, int64_t a2);
int64_t function_3b1751(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b17c2(int64_t a1);
int64_t function_3b17fe(void);
int64_t function_3b1812(void);
int64_t function_3b181c(void);
int64_t function_3b1829(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b1884(void);
int64_t function_3b1895(int64_t a1, int64_t a2);
int64_t function_3b18a6(void);
int64_t function_3b18b3(void);
int64_t function_3b18cb(void);
int64_t function_3b18e2(void);
int64_t function_3b18fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b19dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4883baed();
int64_t function_5cff6bc();
int64_t function_7b753283();
int64_t function_c6d58();
int64_t function_c823b();
int64_t function_ffffffffa5162f86();
int64_t function_ffffffffac68a6fb();
int64_t function_ffffffffc8cc17aa();
int64_t function_ffffffffd8919a64();
int64_t function_ffffffffe8d6475b();
int64_t unknown_1c173c8();
int64_t unknown_209781e7();
int64_t unknown_2ade479b();
int64_t unknown_349b383d();
int64_t unknown_3b2d3c7e();
int64_t unknown_3d3cf541();
int64_t unknown_3d3cfe0f();
int64_t unknown_40315e4a();
int64_t unknown_6bbed796();
int64_t unknown_ffffffffb01048a1();
int64_t unknown_ffffffffe8432360();

// Address range: 0x305c1e - 0x305c32
int64_t function_305c1e(int64_t a1) {
    // 0x305c1e
    int64_t v1; // 0x305c1e
    return function_c823b(v1);
}

// Address range: 0x305c32 - 0x305d88
int64_t function_305c32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x305c32
    return function_c823b(a1);
}

// Address range: 0x305da7 - 0x305dac
int64_t function_305da7(void) {
    // 0x305da7
    return function_4883baed();
}

// Address range: 0x366ab6 - 0x366bc0
int64_t function_366ab6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x366ab6
    int64_t v1; // bp-16, 0x366ab6
    int64_t v2 = (int64_t)&v1 + 16; // 0x366b2e
    int64_t v3 = v2; // 0x366b46
    v1 = (int64_t)&v3;
    return function_c6d58(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x366bc0 - 0x366d10
int64_t function_366bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x366bc0
    return function_c6d58(a1, a2, 0x364aa6, a4, a5, a6, 0x5af19641);
}

// Address range: 0x366d10 - 0x366e66
int64_t function_366d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x366d10
    int64_t v1; // 0x366d10
    return function_c6d58(a1, a2, a3, a4, a5, v1, a6);
}

// Address range: 0x366e66 - 0x36702d
int64_t function_366e66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x366e66
    int64_t v1; // bp-40, 0x366e66
    int64_t v2 = (int64_t)&v1; // 0x366ebf
    int64_t v3 = v2 + 8; // 0x366ec3
    int64_t v4 = *(int64_t *)(v2 + 40); // 0x366eff
    v1 = v4;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x366f03
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x366f19
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x366f25
    int64_t v8 = *v7; // 0x366f25
    *v5 = v8;
    int64_t * v9 = (int64_t *)(v2 - 24); // 0x366f3b
    *v6 = a3;
    *v9 = v4;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x366f5c
    *v10 = a2;
    int64_t v11 = *v9; // 0x366f67
    *v9 = v11 - 0x4ddf453b;
    *(int64_t *)v3 = v11;
    *v6 = 0x2d0b222f;
    *v9 = 0x36a06bb0;
    *v10 = v8;
    *v7 = *v6;
    *v6 = a4;
    *v5 = *v6;
    *v6 = a6;
    *v9 = v2;
    *v5 = v3;
    return function_c6d58(a1, *v10, *v6, *v5, a5, *v6, 0x1250a39);
}

// Address range: 0x36702d - 0x3671ac
int64_t function_36702d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x36702d
    int64_t v1; // 0x36702d
    return function_c6d58(a1, a2, a3, a4, a5, v1, 0x36504c);
}

// Address range: 0x3671ac - 0x36732c
int64_t function_3671ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3671ac
    int64_t v1; // bp-24, 0x3671ac
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // bp-32, 0x3671ac
    v2 = (int64_t)&v2 + 16;
    int64_t v3; // 0x3671ac
    return function_c6d58(a1, a2, a3, a4, a5, v3, a6);
}

// Address range: 0x36732c - 0x3674ba
int64_t function_36732c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36732c
    int64_t v1; // bp-32, 0x36732c
    int64_t v2 = (int64_t)&v1; // 0x3673d9
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x3673e1
    int64_t v4 = *v3; // 0x3673e1
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x3673e1
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x3673e9
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x3673f1
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x367408
    *v6 = 0x2420688a;
    *v8 = a4;
    *v7 = a5;
    v1 = *v6;
    *v8 = v4 - 0x5deef311;
    *v6 = v4;
    *v3 = v4;
    *v7 = *v5;
    *v5 = *v7;
    *v6 = v2 + 8;
    *v7 = *v5;
    int64_t v9; // 0x36732c
    return function_c6d58(a1, a2, a3, *v8, v9, v9, v1);
}

// Address range: 0x3674ba - 0x3674bf
int64_t function_3674ba(void) {
    // 0x3674ba
    return function_36b11b();
}

// Address range: 0x3674f0 - 0x3674f5
int64_t function_3674f0(void) {
    // 0x3674f0
    int64_t v1; // 0x3674f0
    bool v2; // 0x3674f0
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x3674f6 - 0x3674f9
int64_t function_3674f6(void) {
    // 0x3674f6
    int64_t result; // 0x3674f6
    return result;
}

// Address range: 0x367509 - 0x36750e
int64_t function_367509(void) {
    // 0x367509
    return function_2f9c223f();
}

// Address range: 0x36759f - 0x3675a0
int64_t function_36759f(void) {
    // 0x36759f
    int64_t result; // 0x36759f
    return result;
}

// Address range: 0x3675a1 - 0x36761d
int64_t function_3675a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = a4 | a1; // 0x3675a1
    *(char *)a1 = v1;
    int64_t result; // 0x3675a1
    if (v1 >= 1) {
        // 0x3675a5
        return result;
    }
    int32_t * v2 = (int32_t *)((a1 + 0xe803f1f9 & 0xffffffff) - 111); // 0x367614
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x36763c - 0x36768a
int64_t function_36763c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x36763c
    int64_t v1; // 0x36763c
    int64_t result = v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    bool v2; // 0x36763c
    if (v2) {
        char * v3 = (char *)(a4 + 0x17013d11); // 0x367684
        *v3 = *v3 + (char)v1;
        return result & -0x10000 | (result + 150) % 256 | 0x8000 * (int64_t)v2 | 0x4000 * (int64_t)v2 | 0x1000 * (int64_t)v2 | 1024 * (int64_t)v2 | 768;
    }
    // 0x36765a
    return result;
}

// Address range: 0x367694 - 0x3676a3
int64_t function_367694(int64_t a1, int64_t a2, int64_t a3) {
    // 0x367694
    return __asm_iretd();
}

// Address range: 0x3676ad - 0x3676ae
int64_t function_3676ad(int64_t a1) {
    // 0x3676ad
    int64_t result; // 0x3676ad
    return result;
}

// Address range: 0x3678b6 - 0x367927
int64_t function_3678b6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3678b6
    int64_t v1; // 0x3678b6
    int32_t * v2 = (int32_t *)(v1 & -0xff01 | (int64_t)".2"); // 0x3678b8
    int32_t v3 = *v2 + (int32_t)v1; // 0x3678b8
    *v2 = v3;
    uint64_t v4 = __asm_sti(); // 0x3678bb
    if (v3 != 0) {
        // 0x3678bf
        __asm_out(69, (char)v4);
        return 0x1f968ddb;
    }
    char * v5 = (char *)(a2 + 0x3a1d6a00); // 0x367921
    *v5 = *v5 | (char)(v4 / 256);
    return v4 & -48;
}

// Address range: 0x36797e - 0x36798c
int64_t function_36797e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x39a0396); // 0x367986
    int64_t result; // 0x36797e
    *v1 = *v1 + (char)(result | a3);
    return result;
}

// Address range: 0x3679c3 - 0x3679c6
int64_t function_3679c3(int64_t a1) {
    // 0x3679c3
    int64_t result; // 0x3679c3
    return result;
}

// Address range: 0x3679cd - 0x3679d3
int64_t function_3679cd(int64_t a1) {
    // 0x3679cd
    int64_t result; // 0x3679cd
    return result;
}

// Address range: 0x367a08 - 0x367a0a
int64_t function_367a08(void) {
    // 0x367a08
    int64_t v1; // 0x367a08
    return function_367a3b(v1, v1, v1, v1);
}

// Address range: 0x367a17 - 0x367a1c
int64_t function_367a17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x367a17
    int64_t result; // 0x367a17
    *(char *)a4 = (char)(result & a4);
    return result;
}

// Address range: 0x367a3b - 0x367a44
int64_t function_367a3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x418ac7fa); // 0x367a3b
    int64_t result; // 0x367a3b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x367a71 - 0x367a74
int64_t function_367a71(void) {
    // 0x367a71
    int64_t result; // 0x367a71
    return result;
}

// Address range: 0x367a89 - 0x367ab2
int64_t function_367a89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x367a8c
    if (v1 != 0) {
        *(int32_t *)a5 = (int32_t)a5 << v1 | (int32_t)((a5 & 0xffffffff) >> (int64_t)(33 - v1));
    }
    int64_t v2 = unknown_6bbed796(); // 0x367a90
    int32_t * v3 = (int32_t *)v2; // 0x367a9d
    *v3 = *v3 + (int32_t)v2;
    uint16_t v4 = (int16_t)a3 % 256; // 0x367a9f
    char v5 = __asm_in(v4); // 0x367a9f
    int64_t result = v2 & -256 | (int64_t)v5; // 0x367a9f
    bool v6; // 0x367a89
    int64_t v7 = v6 ? -4 : 4; // 0x367aa0
    int64_t v8 = v7 + a1; // 0x367aa0
    *(char *)v8 = __asm_insb(v4);
    int32_t * v9 = (int32_t *)(result + 115); // 0x367aa6
    *v9 = *v9 | (int32_t)v8;
    __asm_out(-123, v5);
    int64_t v10; // 0x367a89
    *(int32_t *)(a2 - 0x68d2ffdb + v7) = (int32_t)(int64_t)&v10;
    return result;
}

// Address range: 0x3b0a15 - 0x3b0a1b
int64_t function_3b0a15(void) {
    // 0x3b0a15
    int64_t v1; // 0x3b0a15
    return v1 + 0x11fec685 & 0xffffffff;
}

// Address range: 0x3b0a2a - 0x3b0a2b
int64_t function_3b0a2a(int64_t a1) {
    // 0x3b0a2a
    int64_t result; // 0x3b0a2a
    return result;
}

// Address range: 0x3b0a52 - 0x3b0a53
int64_t function_3b0a52(void) {
    // 0x3b0a52
    int64_t result; // 0x3b0a52
    return result;
}

// Address range: 0x3b0a53 - 0x3b0b70
int64_t function_3b0a53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)a1; // 0x3b0a53
    int64_t v3; // 0x3b0a53
    *v2 = (int32_t)v3 + (int32_t)a1;
    int64_t v4; // 0x3b0a53
    int64_t v5 = -0x76f1fc20 * (int64_t)*(int32_t *)&v4; // 0x3b0a5a
    int64_t result = v5 & 0xffffffe0; // 0x3b0a5a
    int64_t v6 = a4 - 1; // 0x3b0a60
    if (v6 == 0) {
        int32_t * v7 = (int32_t *)(a1 + 0x33ee82c3); // 0x3b0a62
        *v7 = *v7 & 12;
        *(char *)result = 0;
        int32_t * v8 = (int32_t *)result; // 0x3b0a6c
        *v8 = *v8 + (int32_t)v5;
        return function_3b0a52();
    }
    uint32_t v9 = 0xbd9bb14 << (int32_t)v6 % 32;
    int64_t v10 = v9;
    int64_t v11 = a4 - 2; // 0x3b0aa5
    if (v11 == 0) {
        // 0x3b0aa7
        if (*(char *)&v1 == (char)v4) {
            // 0x3b0a9a
            *(char *)-0x40ad195f = *(char *)-0x40ad195f + (char)(v4 / 256);
            return result;
        }
        // 0x3b0ab0
        *(int32_t *)(v10 + 34) = v9;
        return result;
    }
    char v12 = *(char *)(a4 + 0x754905); // 0x3b0a7b
    uint32_t v13 = (int32_t)v5; // 0x3b0a81
    char v14 = *(char *)((a3 & -256 | (int64_t)(v12 ^ (char)a3)) - 75); // 0x3b0a86
    unsigned char v15 = llvm_ctpop_i8((char)v4 + (char)(v13 < 0x54093701) + v14); // 0x3b0a86
    *v2 = v13;
    if (v15 % 2 != 0) {
        char * v16 = (char *)result; // 0x3b0af5
        *v16 = *v16 + (char)v5;
        return result;
    }
    int64_t v17 = result; // bp-24, 0x3b0a8d
    int32_t * v18 = (int32_t *)(v10 + 31); // 0x3b0a93
    *v18 = *v18 + (int32_t)(int64_t)&v17;
    return v11 & 0xffffffff;
}

// Address range: 0x3b0b71 - 0x3b0b7d
int64_t function_3b0b71(void) {
    // 0x3b0b71
    return function_23cf3d3();
}

// Address range: 0x3b0b92 - 0x3b0b93
int64_t function_3b0b92(void) {
    // 0x3b0b92
    int64_t result; // 0x3b0b92
    return result;
}

// Address range: 0x3b0c5e - 0x3b0c69
int64_t function_3b0c5e(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x54bc01e8 + a2); // 0x3b0c5f
    int64_t result; // 0x3b0c5e
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3b0c7a - 0x3b0c7b
int64_t function_3b0c7a(void) {
    // 0x3b0c7a
    int64_t result; // 0x3b0c7a
    return result;
}

// Address range: 0x3b0c90 - 0x3b0c91
int64_t function_3b0c90(void) {
    // 0x3b0c90
    int64_t result; // 0x3b0c90
    return result;
}

// Address range: 0x3b0c93 - 0x3b0c97
int64_t function_3b0c93(void) {
    // 0x3b0c93
    int64_t result; // 0x3b0c93
    return result;
}

// Address range: 0x3b0d2b - 0x3b0d2e
int64_t function_3b0d2b(void) {
    // 0x3b0d2b
    int64_t result; // 0x3b0d2b
    return result;
}

// Address range: 0x3b0d2f - 0x3b0d57
int64_t function_3b0d2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b0d2f
    int64_t v1; // 0x3b0d2f
    int32_t * v2 = (int32_t *)(a4 - 0x23c5001d + 8 * v1); // 0x3b0d2f
    *v2 = *v2 + (int32_t)v1;
    __asm_hlt(a1);
    int64_t v3 = unknown_3d3cf541(); // 0x3b0d3b
    int32_t * v4 = (int32_t *)(v1 - 100); // 0x3b0d42
    *v4 = *v4 / 8;
    int32_t * v5 = (int32_t *)((a4 + a1 & 0xffffffff) + 0x1e81a6f); // 0x3b0d46
    *v5 = *v5 + (int32_t)a3;
    return v3 & 0xa5058a98;
}

// Address range: 0x3b0de2 - 0x3b0de3
int64_t function_3b0de2(void) {
    // 0x3b0de2
    int64_t result; // 0x3b0de2
    return result;
}

// Address range: 0x3b0de3 - 0x3b0df9
int64_t function_3b0de3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 48); // 0x3b0de5
    int64_t result; // 0x3b0de3
    *v1 = *v1 + (int32_t)result;
    unsigned char v2 = *(char *)(a1 + 0x80003b) & (char)(a3 / 256); // 0x3b0de8
    int64_t v3 = 256 * (int64_t)v2 | a3 & -0xff01; // 0x3b0de8
    char * v4 = (char *)(v3 + 0x1e80048); // 0x3b0dee
    *v4 = *v4 & v2;
    *(int32_t *)a1 = (int32_t)result;
    char * v5 = (char *)v3; // 0x3b0df5
    *v5 = *v5 + v2;
    return result;
}

// Address range: 0x3b0e03 - 0x3b0e0d
int64_t function_3b0e03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x51f913fa); // 0x3b0e06
    int64_t result; // 0x3b0e03
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3b0e28 - 0x3b0e29
int64_t function_3b0e28(void) {
    // 0x3b0e28
    int64_t result; // 0x3b0e28
    return result;
}

// Address range: 0x3b0e4b - 0x3b0e5b
int64_t function_3b0e4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x6b60bb2c); // 0x3b0e53
    int64_t v2; // 0x3b0e4b
    *v1 = *v1 + (char)v2;
    return function_3b0de2();
}

// Address range: 0x3b0e9b - 0x3b0eae
int64_t function_3b0e9b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b0e9b
    unknown_ffffffffb01048a1();
    int64_t v1; // 0x3b0e9b
    __asm_outsb((int16_t)a3, (char)v1);
    bool v2; // 0x3b0e9b
    if (!v2) {
        function_3b0e28();
    }
    // 0x3b0ea6
    __asm_int(-38);
    return function_1b131096();
}

// Address range: 0x3b0ec0 - 0x3b0ec3
int64_t function_3b0ec0(int64_t a1) {
    // 0x3b0ec0
    int64_t result; // 0x3b0ec0
    return result;
}

// Address range: 0x3b0f45 - 0x3b0f4e
int64_t function_3b0f45(void) {
    // 0x3b0f45
    int64_t result; // 0x3b0f45
    char * v1 = (char *)(result + 0x65d117a8); // 0x3b0f45
    *v1 = *v1 | (char)result;
    return result;
}

// Address range: 0x3b0f5c - 0x3b0f65
int64_t function_3b0f5c(int64_t a1) {
    // 0x3b0f5c
    int64_t v1; // 0x3b0f5c
    uint64_t result = v1;
    char * v2 = (char *)(result + 0x2356c3b7); // 0x3b0f5c
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x3b0f7a - 0x3b0fac
int64_t function_3b0f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b0f7a
    int64_t v1; // 0x3b0f7a
    *(char *)0x122dc989 = *(char *)0x122dc989 + (char)(v1 / 256);
    uint64_t v2 = v1 + a4; // 0x3b0f88
    int64_t result = unknown_2ade479b(); // 0x3b0f95
    unsigned char v3 = *(char *)-0x5dbce95d; // 0x3b0f9c
    unsigned char v4 = v3 + (char)(v2 / 256); // 0x3b0f9c
    *(char *)-0x5dbce95d = v4;
    int32_t * v5 = (int32_t *)(8 * v1 - 50 + (v2 & 0xffffffff)); // 0x3b0fa2
    *v5 = *v5 - (v4 < v3 ? 0x7631514c : 0x7631514b);
    return result;
}

// Address range: 0x3b0fe4 - 0x3b0fe7
int64_t function_3b0fe4(int64_t a1) {
    // 0x3b0fe4
    int64_t result; // 0x3b0fe4
    return result;
}

// Address range: 0x3b1058 - 0x3b1059
int64_t function_3b1058(void) {
    // 0x3b1058
    int64_t result; // 0x3b1058
    return result;
}

// Address range: 0x3b1074 - 0x3b107e
int64_t function_3b1074(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b1074
    return unknown_3b2d3c7e(a1, a2, a3, a4, a5);
}

// Address range: 0x3b10bd - 0x3b10bf
int64_t function_3b10bd(void) {
    // 0x3b10bd
    return function_3b1058();
}

// Address range: 0x3b10c9 - 0x3b10d5
int64_t function_3b10c9(int64_t a1) {
    // 0x3b10c9
    int64_t result; // 0x3b10c9
    __asm_out(26, (char)result);
    *(int32_t *)a1 = (int32_t)result | -103;
    return result;
}

// Address range: 0x3b1191 - 0x3b1196
int64_t function_3b1191(void) {
    // 0x3b1191
    return function_ffffffffe8d6475b();
}

// Address range: 0x3b11da - 0x3b11e5
int64_t function_3b11da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b11da
    int64_t v1; // 0x3b11da
    int64_t v2 = v1;
    return (v2 + 31) % 256 | v2 & -256;
}

// Address range: 0x3b11eb - 0x3b11ec
int64_t function_3b11eb(void) {
    // 0x3b11eb
    int64_t result; // 0x3b11eb
    return result;
}

// Address range: 0x3b125a - 0x3b125c
int64_t function_3b125a(void) {
    // 0x3b125a
    return function_3b11eb();
}

// Address range: 0x3b12e4 - 0x3b12e5
int64_t function_3b12e4(void) {
    // 0x3b12e4
    int64_t result; // 0x3b12e4
    return result;
}

// Address range: 0x3b12f5 - 0x3b12fa
int64_t function_3b12f5(void) {
    // 0x3b12f5
    return function_ffffffffa5162f86();
}

// Address range: 0x3b1333 - 0x3b1367
int64_t function_3b1333(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b1333
    int64_t v1; // 0x3b1333
    unsigned char v2 = (char)v1 & -10; // 0x3b1339
    int64_t result = v1 & -256 | (int64_t)v2; // 0x3b133d
    if (v2 == 0) {
        result = function_3b12e4();
    }
    // 0x3b1340
    *(int32_t *)-0x34b04e0a = *(int32_t *)-0x34b04e0a + (int32_t)a1;
    if (a4 == 0) {
        // 0x3b13b1
        return result;
    }
    // 0x3b1349
    *(char *)a4 = (char)a4 + 38;
    return result & 0x3ac400 | (int64_t)(*(char *)0x200836dc17dc50fe & 126);
}

// Address range: 0x3b13af - 0x3b13b1
int64_t function_3b13af(void) {
    // 0x3b13af
    int64_t result; // 0x3b13af
    return result;
}

// Address range: 0x3b13d3 - 0x3b13eb
int64_t function_3b13d3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t result; // 0x3b13d3
    __asm_out(-30, (char)result);
    *(int32_t *)a1 = (int32_t)a2;
    bool v2; // 0x3b13d3
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x3b13d7
    char v4 = a4 / 256; // 0x3b13d8
    char v5 = *(char *)(v3 - 126); // 0x3b13d8
    if (((v4 - v5 ^ v4) & (v5 ^ v4)) >= 0) {
        // 0x3b13dd
        return result;
    }
    // 0x3b13e1
    *(char *)v1 = *(char *)&v1 + (char)((uint64_t)result / 256);
    *(int32_t *)(v3 - 24) = (int32_t)v3;
    return result;
}

// Address range: 0x3b1460 - 0x3b1461
int64_t function_3b1460(void) {
    // 0x3b1460
    int64_t result; // 0x3b1460
    return result;
}

// Address range: 0x3b146d - 0x3b1488
int64_t function_3b146d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int32_t * v3 = (int32_t *)(a3 + 0xc8080 + a4); // 0x3b146d
    int64_t v4; // 0x3b146d
    *v3 = *v3 + (int32_t)v4;
    int64_t v5; // 0x3b146d
    int32_t v6; // 0x3b146d
    int64_t v7; // 0x3b146d
    if ((char)(v4 / 256) != (char)(a3 / 256)) {
        int64_t v8 = function_3b1460(); // 0x3b1476
        v7 = v8;
        v5 = v8;
        v6 = v8;
    } else {
        // 0x3b146d
        v5 = v7;
        v6 = *(int32_t *)&v7;
    }
    // 0x3b1478
    *(int32_t *)v5 = v6 + (int32_t)v4;
    __asm_out_133(-121, (int32_t)v7);
    __asm_sti();
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a1;
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x3b14a9 - 0x3b14c1
int64_t function_3b14a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b14a9
    int64_t v1; // 0x3b14a9
    return v1 & -256 | (int64_t)*(char *)-0x127e81a6fe178000;
}

// Address range: 0x3b14c2 - 0x3b14ca
int64_t function_3b14c2(void) {
    // 0x3b14c2
    unknown_1c173c8();
    int64_t v1; // 0x3b14c2
    return function_3b1505(v1, v1, v1, v1);
}

// Address range: 0x3b14d0 - 0x3b14d6
int64_t function_3b14d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b14d0
    int64_t v1; // 0x3b14d0
    int32_t * v2 = (int32_t *)(v1 + 45); // 0x3b14d0
    *v2 = *v2 + (int32_t)a4;
    int64_t v3; // 0x3b14d0
    return (int64_t)(*(int32_t *)&v3 & (int32_t)v1);
}

// Address range: 0x3b14f0 - 0x3b14f3
int64_t function_3b14f0(void) {
    // 0x3b14f0
    int64_t result; // 0x3b14f0
    return result;
}

// Address range: 0x3b14f9 - 0x3b14fb
int64_t function_3b14f9(int32_t a1) {
    // 0x3b14f9
    int64_t result; // 0x3b14f9
    return result;
}

// Address range: 0x3b1505 - 0x3b150a
int64_t function_3b1505(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b1505
    int64_t result; // 0x3b1505
    return result;
}

// Address range: 0x3b1537 - 0x3b1542
int64_t function_3b1537(int64_t a1) {
    // 0x3b1537
    *(int32_t *)a1 = (int32_t)unknown_349b383d(a1);
    bool v1; // 0x3b1537
    return function_ffffffffd8919a64((v1 ? -4 : 4) + a1);
}

// Address range: 0x3b1542 - 0x3b154c
int64_t function_3b1542(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b1542
    int64_t v1; // 0x3b1542
    *(int32_t *)a3 = (int32_t)(v1 | a1);
    return unknown_40315e4a(a1, a2, a3, a4);
}

// Address range: 0x3b1575 - 0x3b157c
int64_t function_3b1575(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b1575
    int64_t v1; // 0x3b1575
    return (int64_t)(*(int32_t *)(v1 & -256 | 140) * (int32_t)v1);
}

// Address range: 0x3b15bd - 0x3b15c2
int64_t function_3b15bd(void) {
    // 0x3b15bd
    return function_ffffffffc8cc17aa();
}

// Address range: 0x3b1606 - 0x3b1626
int64_t function_3b1606(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_3d3cfe0f(); // 0x3b1609
    int64_t v2; // 0x3b1606
    uint32_t v3 = (int32_t)v2; // 0x3b160e
    uint32_t v4 = v3 + (int32_t)v2; // 0x3b160e
    int64_t v5 = a4 / 256 + (int64_t)(v4 < v3) + v1; // 0x3b1611
    int32_t * v6 = (int32_t *)(2 * (int64_t)v4 + a1); // 0x3b1613
    *v6 = *v6 + (int32_t)a3;
    int64_t v7; // 0x3b1606
    *(char *)a3 = *(char *)&v7 | (char)v4;
    return (v5 + 193 + (int64_t)((char)v5 < 208)) % 256 | v1 & -256;
}

// Address range: 0x3b1650 - 0x3b1651
int64_t function_3b1650(int64_t a1) {
    // 0x3b1650
    int64_t result; // 0x3b1650
    return result;
}

// Address range: 0x3b16b3 - 0x3b16b9
int64_t function_3b16b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3b16b3
    if (v1 != 0) {
        char * v2 = (char *)(a4 - 121); // 0x3b16b3
        *v2 = *v2 << v1;
    }
    int64_t result; // 0x3b16b3
    return result;
}

// Address range: 0x3b173a - 0x3b1747
int64_t function_3b173a(int64_t a1, int64_t a2) {
    // 0x3b173a
    int64_t v1; // 0x3b173a
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a1;
    char * v2 = (char *)(v1 + 0x543a3b06); // 0x3b173c
    *v2 = *v2 | (char)v1;
    return function_5cff6bc();
}

// Address range: 0x3b1751 - 0x3b175e
int64_t function_3b1751(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b1751
    int64_t result; // 0x3b1751
    char * v1 = (char *)(result + 0x3a94f580); // 0x3b1751
    *v1 = *v1 + (char)result;
    uint32_t v2 = (int32_t)a4 % 32; // 0x3b1757
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(a4 + 0x4e85f10); // 0x3b1757
        uint32_t v4 = *v3; // 0x3b1757
        *v3 = v4 >> 32 - v2 | v4 << v2;
    }
    return result;
}

// Address range: 0x3b17c2 - 0x3b17c5
int64_t function_3b17c2(int64_t a1) {
    // 0x3b17c2
    int64_t result; // 0x3b17c2
    return result;
}

// Address range: 0x3b17fe - 0x3b17ff
int64_t function_3b17fe(void) {
    // 0x3b17fe
    int64_t result; // 0x3b17fe
    return result;
}

// Address range: 0x3b1812 - 0x3b1815
int64_t function_3b1812(void) {
    // 0x3b1812
    int64_t result; // 0x3b1812
    return result;
}

// Address range: 0x3b181c - 0x3b1821
int64_t function_3b181c(void) {
    // 0x3b181c
    return function_7b753283();
}

// Address range: 0x3b1829 - 0x3b1880
int64_t function_3b1829(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3b1829
    int64_t result; // 0x3b1829
    bool v1; // 0x3b1829
    if (v1) {
        uint32_t v2 = (int32_t)unknown_ffffffffe8432360(); // 0x3b185f
        uint32_t v3 = v2 + (int32_t)a4; // 0x3b185f
        *(char *)a3 = (char)a3 - (char)a4 + (char)(v3 < v2);
        int32_t v4 = *(int32_t *)((result & -0xff01 | a4 & 0xff00) - 0x720ffff5); // 0x3b1868
        int32_t * v5 = (int32_t *)((int64_t)v3 + 45); // 0x3b186f
        *v5 = *v5 + 61 * v4;
        return (0x3d0000 * v4 >> 16) + 0x3e12809b;
    }
    // 0x3b182b
    return result;
}

// Address range: 0x3b1884 - 0x3b1885
int64_t function_3b1884(void) {
    // 0x3b1884
    int64_t result; // 0x3b1884
    return result;
}

// Address range: 0x3b1895 - 0x3b18a4
int64_t function_3b1895(int64_t a1, int64_t a2) {
    // 0x3b1895
    return function_3b1884();
}

// Address range: 0x3b18a6 - 0x3b18a7
int64_t function_3b18a6(void) {
    // 0x3b18a6
    int64_t result; // 0x3b18a6
    return result;
}

// Address range: 0x3b18b3 - 0x3b18b4
int64_t function_3b18b3(void) {
    // 0x3b18b3
    int64_t result; // 0x3b18b3
    return result;
}

// Address range: 0x3b18cb - 0x3b18cc
int64_t function_3b18cb(void) {
    // 0x3b18cb
    int64_t result; // 0x3b18cb
    return result;
}

// Address range: 0x3b18e2 - 0x3b18e4
int64_t function_3b18e2(void) {
    // 0x3b18e2
    return function_3b18b3();
}

// Address range: 0x3b18fb - 0x3b194d
int64_t function_3b18fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a4; // 0x3b18fb
    int64_t v3; // bp-16, 0x3b18fb
    int64_t v4; // 0x3b18fb
    bool v5; // 0x3b18fb
    if (!v5 && true) {
        // 0x3b18fd
        __asm_int3();
        char * v6 = (char *)(a1 - 0x11fec29d); // 0x3b18fe
        *v6 = *v6 + (char)a4;
        int64_t v7 = a4; // bp-8, 0x3b1905
        v3 = 0x6833b800;
        unsigned char v8 = (char)(a4 / 256) + (char)a3; // 0x3b190d
        uint32_t v9 = *(int32_t *)&v1; // 0x3b190f
        v1 = 0x6833b800;
        v2 = 256 * (int64_t)v8 | a4 & -0xff01;
        if (v8 == 0) {
            int64_t v10 = v9; // 0x3b190f
            char v11 = v9; // 0x3b1936
            *(char *)v10 = v11;
            char * v12 = (char *)(v4 + 0xcb8000 + v10); // 0x3b1938
            *v12 = *v12 + v11;
            // 0x3b1940
            *(int64_t *)((int64_t)&v7 - 8) = 0x510f2100;
            return ((a3 + 118) % 256 | a3 & 0xffffff00) ^ 23;
        }
    }
    // 0x3b1913
    v3 = a1;
    int64_t v13 = (int64_t)&v3; // 0x3b1913
    int32_t * v14 = (int32_t *)(a1 + 0x7b7e01 + v4); // 0x3b1915
    int32_t v15 = *v14 | (int32_t)v13; // 0x3b1915
    *v14 = v15;
    if (v2 != 1 == v15 == 0) {
        // 0x3b1940
        *(int64_t *)(v13 - 8) = 0x510f2100;
        return ((a3 + 118) % 256 | a3 & 0xffffff00) ^ 23;
    }
    if (v15 != 0) {
        function_3b18cb();
    }
    // 0x3b1924
    __asm_hlt(v4);
    return function_ffffffffac68a6fb();
}

// Address range: 0x3b19dc - 0x3b19fd
int64_t function_3b19dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b19dc
    int64_t v1; // 0x3b19dc
    int32_t * v2 = (int32_t *)(v1 + 5 + 4 * v1); // 0x3b19dc
    *v2 = *v2 + (int32_t)v1;
    __asm_out_134((int16_t)a3, (char)v1);
    unknown_209781e7();
    *(char *)((a3 & 0xffffffff) - 64) = (char)a4;
    int32_t * v3 = (int32_t *)(a1 + 0x67fcaa17); // 0x3b19ef
    *v3 = *v3 + (int32_t)a2;
    int32_t * v4 = (int32_t *)(a1 + 0x7001e8ca); // 0x3b19f6
    *v4 = *v4 + (int32_t)a1;
    return a3 + 0xe89bfc24 & 0xffffffff;
}
