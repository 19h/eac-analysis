/*
 * Targeted RetDec C for native executable gap queue batch 763.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x28cc4c-0x28ce4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28ce4c-0x28d04c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28d04c-0x28d24c rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c8079-0x3c8279 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c8279-0x3c8479 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c8479-0x3c8679 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c8679-0x3c8879 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c8879-0x3c8a79 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_28cc4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28cd71(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28ce8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_28cfd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28d1b9(void);
int64_t function_3c8035();
int64_t function_3c805f();
int64_t function_3c8079(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c8124(void);
int64_t function_3c817a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3c81e7(void);
int64_t function_3c81eb(void);
int64_t function_3c8202(void);
int64_t function_3c8241(void);
int64_t function_3c828d(int64_t a1);
int64_t function_3c8297(int64_t a1);
int64_t function_3c830b(int64_t a1);
int64_t function_3c8312(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c83c7(void);
int64_t function_3c83cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c83fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c843f(void);
int64_t function_3c8446(int64_t a1, int64_t a2);
int64_t function_3c84a4(int64_t a1);
int64_t function_3c856e(void);
int64_t function_3c85b5(void);
int64_t function_3c85e7(void);
int64_t function_3c85ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c8601(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c8650(void);
int64_t function_3c8651(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c86eb(void);
int64_t function_3c86ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c8742(void);
int64_t function_3c8874(void);
int64_t function_3c8891(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c88b4(int64_t a1);
int64_t function_3c893b(void);
int64_t function_3c8954(void);
int64_t function_3c89c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c8a26(void);
int64_t function_578fc9ed();
int64_t function_caf2a();
int64_t function_e7d2c6();
int64_t unknown_1786e211();
int64_t unknown_17f5ca97();
int64_t unknown_38958f98();
int64_t unknown_47dde032();
int64_t unknown_48144f29();
int64_t unknown_4c4cb902();
int64_t unknown_4e57f582();
int64_t unknown_6be8786();
int64_t unknown_737d77b1();
int64_t unknown_ffffffffaa2db1a6();
int64_t unknown_ffffffffab49fb95();
int64_t unknown_ffffffffae05560b();
int64_t unknown_ffffffffcdbfcb21();
int64_t unknown_ffffffffd7372f1e();
int64_t unknown_ffffffffe04491a4();

// Address range: 0x28cc4c - 0x28cd71
int64_t function_28cc4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x28cc4c
    int64_t v1; // bp-40, 0x28cc4c
    int64_t v2 = (int64_t)&v1; // 0x28ccad
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x28ccc4
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x28ccc7
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x28cccb
    *v5 = v2;
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x28cceb
    int64_t v7 = *v6; // 0x28cceb
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x28ccef
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x28cd06
    *v8 = a1;
    *v9 = v4;
    *v3 = v4;
    int64_t v10 = *v8; // 0x28cd1b
    *v9 = v10;
    *v8 = 0x1292719d;
    *(int64_t *)(v2 - 40) = v7;
    *v6 = *v8;
    int64_t v11 = *v5; // 0x28cd41
    *v8 = v11;
    *v9 = v11;
    int64_t v12 = *v3; // 0x28cd50
    *v5 = v12;
    *v8 = v12;
    return function_caf2a(v10, a2, a3, a4);
}

// Address range: 0x28cd71 - 0x28ce8f
int64_t function_28cd71(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0xdd42ca2; // bp-24, 0x28ce21
    int64_t v2 = (int64_t)&v1; // 0x28ce46
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x28ce63
    *v3 = a1;
    *(int64_t *)(v2 - 16) = v2 + 8;
    int64_t v4 = *v3; // 0x28ce81
    *(int64_t *)(v2 - 24) = v4;
    return function_caf2a(v4, a2, a3, 0x2859d9);
}

// Address range: 0x28ce8f - 0x28cfd8
int64_t function_28ce8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x28ce8f
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x28cfd8 - 0x28d155
int64_t function_28cfd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28cfd8
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x28d1b9 - 0x28d1bc
int64_t function_28d1b9(void) {
    // 0x28d1b9
    int64_t result; // 0x28d1b9
    return result;
}

// Address range: 0x3c8079 - 0x3c80a7
int64_t function_3c8079(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_4e57f582(); // 0x3c807c
    *(char *)a1 = (char)v1;
    int64_t v2; // 0x3c8079
    char v3 = *(char *)(2 * v2 - 45 + v2); // 0x3c8082
    int64_t v4 = v1 / 2 % 128 | v1 & -0x10000 | 256 * (int64_t)(v3 ^ (char)(v1 / 256)); // 0x3c8086
    int32_t * v5 = (int32_t *)(v4 - 0x1fb3bdf6); // 0x3c8088
    int32_t v6 = *v5; // 0x3c8088
    int32_t v7 = v2; // 0x3c8088
    int32_t v8 = v6 + v7; // 0x3c8088
    *v5 = v8;
    uint32_t v9 = (int32_t)a4 % 32; // 0x3c808e
    bool v10 = ((v8 ^ v6) & (v8 ^ v7)) < 0; // 0x3c808e
    if (v9 != 0) {
        int32_t * v11 = (int32_t *)v4; // 0x3c808e
        uint32_t v12 = *v11; // 0x3c808e
        int32_t v13 = v12 >> 32 - v9 | v12 << v9; // 0x3c808e
        *v11 = v13;
        v10 = v9 == 1 ? v13 % 2 != (int32_t)(v13 < 0) : ((v8 ^ v6) & (v8 ^ v7)) < 0;
    }
    if (v8 < 0 == v10) {
        function_3c805f();
    }
    int64_t v14 = unknown_38958f98(); // 0x3c8092
    int64_t v15 = v2 & 0xffffffff; // 0x3c8098
    if (v8 != 0) {
        v15 = function_3c8035();
    }
    // 0x3c809a
    bool v16; // 0x3c8079
    *(int32_t *)((v16 ? -1 : 1) + a1) = __asm_insd((int16_t)a3);
    return (int64_t)(*(int32_t *)((v14 & 0xffffffff) + 30) * (int32_t)v15);
}

// Address range: 0x3c8124 - 0x3c8125
int64_t function_3c8124(void) {
    // 0x3c8124
    int64_t result; // 0x3c8124
    return result;
}

// Address range: 0x3c817a - 0x3c81c7
int64_t function_3c817a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char v1 = unknown_6be8786(); // 0x3c8185
    unsigned char v2 = (char)(a3 / 256); // 0x3c8185
    char v3 = v1 + v2; // 0x3c8185
    if (v3 < 0 == ((v3 ^ v1) & (v3 ^ v2)) < 0) {
        function_3c8124();
    }
    uint64_t result = unknown_ffffffffab49fb95(); // 0x3c818f
    if (-1 - v1 < v2 || v3 == 0) {
        int64_t v4 = (result / 256 + a3) % 256 | a3 & -256; // 0x3c8197
        uint64_t v5 = unknown_ffffffffe04491a4(); // 0x3c819e
        int64_t v6; // 0x3c817a
        unsigned char v7 = *(char *)(v5 % 256 + v6); // 0x3c81a3
        __asm_out(2, (int32_t)(v5 & 0xffffff00 | (int64_t)v7));
        int64_t v8 = unknown_737d77b1(); // 0x3c81ab
        int32_t * v9 = (int32_t *)(a4 + 62 + 2 * a4); // 0x3c81b2
        int64_t v10; // bp-24, 0x3c817a
        *v9 = *v9 + (int32_t)(int64_t)&v10;
        int32_t * v11 = (int32_t *)(v4 + 0x723401e8); // 0x3c81b7
        *v11 = *v11 & (int32_t)a4;
        char * v12 = (char *)(a4 + 0x8ecc9e6); // 0x3c81be
        char v13 = v8; // 0x3c81be
        *v12 = *v12 - v13;
        return v8 & -256 | (int64_t)(*(char *)v4 ^ v13);
    }
    // 0x3c81cf
    return result;
}

// Address range: 0x3c81e7 - 0x3c81e8
int64_t function_3c81e7(void) {
    // 0x3c81e7
    int64_t result; // 0x3c81e7
    return result;
}

// Address range: 0x3c81eb - 0x3c81ed
int64_t function_3c81eb(void) {
    // 0x3c81eb
    return function_3c81e7();
}

// Address range: 0x3c8202 - 0x3c8211
int64_t function_3c8202(void) {
    // 0x3c8202
    return unknown_ffffffffae05560b();
}

// Address range: 0x3c8241 - 0x3c8246
int64_t function_3c8241(void) {
    // 0x3c8241
    int64_t v1; // 0x3c8241
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3c828d - 0x3c8296
int64_t function_3c828d(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x4bc2c961); // 0x3c828d
    int64_t result; // 0x3c828d
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3c8297 - 0x3c82a9
int64_t function_3c8297(int64_t a1) {
    // 0x3c8297
    *(int32_t *)-0x8678078 = *(int32_t *)-0x8678078 | 0x3d000013;
    int64_t v1; // 0x3c8297
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    return v1 & -256 | (int64_t)__asm_in((char)a1);
}

// Address range: 0x3c830b - 0x3c8312
int64_t function_3c830b(int64_t a1) {
    // 0x3c830b
    return unknown_1786e211(a1);
}

// Address range: 0x3c8312 - 0x3c834b
int64_t function_3c8312(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c8312
    int64_t v1; // 0x3c8312
    uint32_t v2 = (int32_t)v1;
    *(int32_t *)v1 = v2 / 32 | 0x8000000 * v2;
    int64_t v3 = a1 / 0x2000000 % 128 | 256 * a1 & 0xffffff00 | 128 * (int64_t)((v2 & 16) != 0); // 0x3c8316
    int64_t v4; // 0x3c8312
    uint32_t v5 = *(int32_t *)&v4; // 0x3c8319
    uint32_t v6 = (int32_t)a3; // 0x3c8319
    int32_t v7 = v5 + v6; // 0x3c8319
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x3c8319
    *(int32_t *)v4 = v7;
    int32_t * v9 = (int32_t *)(v1 & -0xff01 | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | 512); // 0x3c831c
    uint32_t v10 = *v9; // 0x3c831c
    *v9 = v10 / 2 | 0x80000000 * v10;
    if (v7 < 0 == (v10 % 2 != (int32_t)(v10 < 0)) == (v7 != 0)) {
        // 0x3c834a
        return __asm_int1(v3);
    }
    // 0x3c8322
    unknown_48144f29(v3);
    return unknown_47dde032();
}

// Address range: 0x3c83c7 - 0x3c83c8
int64_t function_3c83c7(void) {
    // 0x3c83c7
    int64_t result; // 0x3c83c7
    return result;
}

// Address range: 0x3c83cc - 0x3c83e8
int64_t function_3c83cc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c83cc
    int64_t v1; // 0x3c83cc
    *(char *)-0x1345ea4fe17635b = (char)v1;
    int32_t * v2 = (int32_t *)(a1 + 0x24e2bac0); // 0x3c83df
    *v2 = *v2 + (int32_t)a3;
    return function_3c83c7();
}

// Address range: 0x3c83fd - 0x3c841b
int64_t function_3c83fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3c83fd
    int64_t v1; // 0x3c83fd
    int64_t v2 = v1;
    int64_t v3 = a1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    int64_t v4 = v2 + 0xc7c30922; // 0x3c83ff
    int32_t v5 = v4; // 0x3c8405
    *(int32_t *)a1 = *(int32_t *)&v3 + v5;
    __asm_out_133((int16_t)a3, v5);
    int32_t * v6 = (int32_t *)(a2 - 0x41f59703); // 0x3c840a
    *v6 = *v6 + (int32_t)a1;
    unsigned char v7 = (char)a4 % 32; // 0x3c8411
    if (v7 != 0) {
        unsigned char v8 = *(char *)&v3; // 0x3c8411
        *(char *)v3 = v8 >> 8 - v7 | v8 << v7;
    }
    int32_t v9 = *(int32_t *)-0x20e3a14b; // 0x3c8413
    int64_t v10; // bp+16, 0x3c83fd
    *(int32_t *)-0x20e3a14b = v9 + (int32_t)(int64_t)&v10;
    return v4 & 0xffffffff;
}

// Address range: 0x3c843f - 0x3c8441
int64_t function_3c843f(void) {
    // 0x3c843f
    int64_t v1; // 0x3c843f
    bool v2; // 0x3c843f
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x3c8446 - 0x3c844b
int64_t function_3c8446(int64_t a1, int64_t a2) {
    // 0x3c8446
    int64_t v1; // 0x3c8446
    return v1 + a2 & 0xffffffff;
}

// Address range: 0x3c84a4 - 0x3c84a7
int64_t function_3c84a4(int64_t a1) {
    // 0x3c84a4
    int64_t result; // 0x3c84a4
    return result;
}

// Address range: 0x3c856e - 0x3c8573
int64_t function_3c856e(void) {
    // 0x3c856e
    return function_e7d2c6();
}

// Address range: 0x3c85b5 - 0x3c85b7
int64_t function_3c85b5(void) {
    // 0x3c85b5
    int64_t v1; // 0x3c85b5
    return function_3c8601(v1, v1, v1, v1);
}

// Address range: 0x3c85e7 - 0x3c85e8
int64_t function_3c85e7(void) {
    // 0x3c85e7
    int64_t result; // 0x3c85e7
    return result;
}

// Address range: 0x3c85ea - 0x3c8601
int64_t function_3c85ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c85ea
    int64_t v1; // 0x3c85ea
    if ((int32_t)v1 > 0x5001e894) {
        function_3c85e7();
    }
    // 0x3c85f3
    *(int32_t *)a2 = (int32_t)v1;
    return unknown_4c4cb902();
}

// Address range: 0x3c8601 - 0x3c861f
int64_t function_3c8601(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0xdfb8698; // 0x3c8601
    *(char *)0xdfb8698 = v1 / 2 | 128 * v1;
    if (a4 == 0) {
        // 0x3c8613
        return unknown_ffffffffd7372f1e();
    }
    // 0x3c8609
    return a4 & 0xffffffff;
}

// Address range: 0x3c8650 - 0x3c8651
int64_t function_3c8650(void) {
    // 0x3c8650
    int64_t result; // 0x3c8650
    return result;
}

// Address range: 0x3c8651 - 0x3c868e
int64_t function_3c8651(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c8651
    int64_t v1; // 0x3c8651
    uint64_t v2 = v1;
    char v3 = v2;
    bool v4; // 0x3c8651
    *(char *)v2 = (char)(v2 / 256) + v3 + (char)v4;
    char v5 = v3 & -52; // 0x3c8655
    if (v5 >= 0 != v5 != 0) {
        int64_t result = a2 & 0xffffffff; // 0x3c865f
        if (v5 < 1) {
            result = function_3c8650();
        }
        // 0x3c8661
        return result;
    }
    unsigned char v6 = *(char *)0x1fbe2584; // 0x3c867d
    char v7 = v6 - 103; // 0x3c867d
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x3c867d
    *(char *)0x1fbe2584 = v7;
    uint16_t v9 = (256 * (int16_t)a2 >> 8) * (int16_t)*(char *)(a4 - 0x7027da13); // 0x3c8683
    char v10 = v9 / 256; // 0x3c8683
    char * v11 = (char *)((v2 & 0xffffffff) - 16); // 0x3c868a
    *v11 = *v11 | 21;
    return a2 & 0xffff0000 | (int64_t)(v9 % 256) | 256 * (64 * (int64_t)(v7 == 0) | 16 * (int64_t)(v6 % 16 > 6) | 128 * (int64_t)(v7 < 0) | 4 * (int64_t)(v8 % 2 == 0) | (int64_t)(v10 != 0 == (v10 != -1))) | 512;
}

// Address range: 0x3c86eb - 0x3c86ec
int64_t function_3c86eb(void) {
    // 0x3c86eb
    int64_t result; // 0x3c86eb
    return result;
}

// Address range: 0x3c86ff - 0x3c8725
int64_t function_3c86ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c86ff
    int64_t v1; // 0x3c86ff
    int32_t * v2 = (int32_t *)(v1 + 0x3a06ff25); // 0x3c86ff
    *v2 = *v2 | 0x3dff9726;
    uint32_t v3 = *(int32_t *)0x67228713 | (int32_t)a1; // 0x3c870c
    uint32_t v4 = v3 - *(int32_t *)((int64_t)v3 - 0x1315e60a); // 0x3c8713
    unknown_ffffffffcdbfcb21(v4);
    int64_t v5; // 0x3c86ff
    *(int32_t *)(int64_t)v4 = *(int32_t *)&v5;
    return function_3c86eb();
}

// Address range: 0x3c8742 - 0x3c8748
int64_t function_3c8742(void) {
    // 0x3c8742
    return function_578fc9ed();
}

// Address range: 0x3c8874 - 0x3c8875
int64_t function_3c8874(void) {
    // 0x3c8874
    int64_t result; // 0x3c8874
    return result;
}

// Address range: 0x3c8891 - 0x3c88b1
int64_t function_3c8891(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c8891
    unknown_17f5ca97();
    bool v1; // 0x3c8891
    if (!v1) {
        // 0x3c889f
        return unknown_ffffffffaa2db1a6();
    }
    if (v1) {
        function_3c8874();
    }
    // 0x3c88ac
    int64_t v2; // 0x3c8891
    __asm_outsb(2538, (char)v2);
    return a4 & 0xffffffff;
}

// Address range: 0x3c88b4 - 0x3c88b8
int64_t function_3c88b4(int64_t a1) {
    // 0x3c88b4
    int64_t result; // 0x3c88b4
    return result;
}

// Address range: 0x3c893b - 0x3c893c
int64_t function_3c893b(void) {
    // 0x3c893b
    int64_t result; // 0x3c893b
    return result;
}

// Address range: 0x3c8954 - 0x3c895b
int64_t function_3c8954(void) {
    // 0x3c8954
    return function_3c893b();
}

// Address range: 0x3c89c3 - 0x3c89e0
int64_t function_3c89c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c89c3
    int64_t v1; // 0x3c89c3
    int64_t v2 = v1;
    int64_t v3 = v2 & -256; // 0x3c89c3
    uint64_t v4 = v2 + 122 + ((char)v2 > 133 ? -235 : -234); // 0x3c89c5
    unsigned char v5 = *(char *)-0x16c76a2a; // 0x3c89c7
    *(char *)-0x16c76a2a = v5 / 128 | 2 * v5;
    char * v6 = (char *)((v4 % 256 | v3) + 0x6e02360f); // 0x3c89d1
    *v6 = *v6 + 24;
    int64_t v7; // 0x3c89c3
    *(int32_t *)a3 = *(int32_t *)&v7 + (int32_t)a1;
    return v3 | (int64_t)(*(char *)(a3 + a2) + (char)v4);
}

// Address range: 0x3c8a26 - 0x3c8a28
int64_t function_3c8a26(void) {
    // 0x3c8a26
    int64_t result; // 0x3c8a26
    return result;
}
