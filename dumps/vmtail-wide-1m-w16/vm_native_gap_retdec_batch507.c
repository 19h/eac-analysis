/*
 * Targeted RetDec C for native executable gap queue batch 507.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x153513-0x153713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x153713-0x153913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x153913-0x153b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x153d13-0x153f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cc9ff-0x3ccbff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ccbff-0x3ccdff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ccdff-0x3ccfff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cd1ff-0x3cd3ff rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
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
void unknown_b6ccb9(void);
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
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
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

int64_t function_15238fa();
int64_t function_153513(void);
int64_t function_153529(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15358e(int64_t a1);
int64_t function_153624(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_153630(int64_t a1, int64_t a2);
int64_t function_153640(void);
int64_t function_153678(int64_t a1, int64_t a2, int64_t a3);
int64_t function_153686(void);
int64_t function_153690(void);
int64_t function_1536af(void);
int64_t function_1536be(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_153705(int64_t a1);
int64_t function_153737(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1537f9(int64_t a1);
int64_t function_15382a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1538c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1538e8(int64_t a1);
int64_t function_1538fa(void);
int64_t function_153931(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_153988(void);
int64_t function_15398b(void);
int64_t function_153993(void);
int64_t function_15399b(int64_t a1);
int64_t function_1539bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1539dd(void);
int64_t function_1539ea(int64_t a1);
int64_t function_153a22(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_153a5d(void);
int64_t function_153a6d(void);
int64_t function_153a74(void);
int64_t function_153a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_153a90(void);
int64_t function_153ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_153ae9(void);
int64_t function_153d13(int64_t a1, int64_t a2);
int64_t function_153d1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_153e2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_153ed5(int64_t a1);
int64_t function_3cc9ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ccb69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ccc89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ccdd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ccf89(void);
int64_t function_3ccfa4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ccfe2(int64_t a1);
int64_t function_3cd1ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3cd36e(void);
int64_t function_3cd381(void);
int64_t function_3e224d();
int64_t function_622220ec();
int64_t function_c57b8();
int64_t unknown_14ae1ed1();
int64_t unknown_3d171d32();
int64_t unknown_56763596();
int64_t unknown_65d8b12d();
int64_t unknown_68c286d7();
int64_t unknown_98dbf5();

// Address range: 0x153513 - 0x153514
int64_t function_153513(void) {
    // 0x153513
    int64_t result; // 0x153513
    return result;
}

// Address range: 0x153529 - 0x153544
int64_t function_153529(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x153529
    bool v1; // 0x153529
    __asm_wait((v1 ? -1 : 1) + a1);
    unknown_3d171d32();
    int32_t * v2 = (int32_t *)(a3 + 0x4a01e855); // 0x153531
    *v2 = *v2 + (int32_t)a2;
    __asm_int(16);
    return 0xa271cc0c;
}

// Address range: 0x15358e - 0x153591
int64_t function_15358e(int64_t a1) {
    // 0x15358e
    int64_t result; // 0x15358e
    return result;
}

// Address range: 0x153624 - 0x153630
int64_t function_153624(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x153624
    int64_t result; // 0x153624
    return result;
}

// Address range: 0x153630 - 0x15363c
int64_t function_153630(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x16e0f1c3); // 0x153635
    *v1 = *v1 - 1;
    int64_t result; // 0x153630
    return result;
}

// Address range: 0x153640 - 0x15364a
int64_t function_153640(void) {
    // 0x153640
    int64_t v1; // 0x153640
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_153686();
}

// Address range: 0x153678 - 0x153686
int64_t function_153678(int64_t a1, int64_t a2, int64_t a3) {
    // 0x153678
    int64_t v1; // 0x153678
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return 0xf8cbdbd5;
}

// Address range: 0x153686 - 0x15368c
int64_t function_153686(void) {
    // 0x153686
    int64_t v1; // 0x153686
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x153690 - 0x153693
int64_t function_153690(void) {
    // 0x153690
    int64_t result; // 0x153690
    return result;
}

// Address range: 0x1536af - 0x1536b4
int64_t function_1536af(void) {
    // 0x1536af
    return function_622220ec();
}

// Address range: 0x1536be - 0x1536fd
int64_t function_1536be(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    char * v2 = (char *)(a1 + 0x57cb29a); // 0x1536be
    int64_t v3; // 0x1536be
    *v2 = *v2 + (char)(v3 / 256);
    *(char *)0x69d2fe60276fe6cb = (char)v3;
    int64_t v4; // 0x1536be
    *(int32_t *)v4 = (int32_t)v3;
    char v5 = __asm_in(61); // 0x1536d4
    int32_t * v6 = (int32_t *)(a1 + 4); // 0x1536d6
    int32_t v7 = *v6; // 0x1536d6
    int32_t v8 = v3; // 0x1536d6
    int32_t v9 = v7 + v8; // 0x1536d6
    *v6 = v9;
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0) {
        // 0x153707
        return (int64_t)v5 | (int64_t)(*(int32_t *)&v4 & -256);
    }
    char * v10 = (char *)(2 * v4 + a3); // 0x1536dd
    *v10 = *v10 + 1;
    bool v11; // 0x1536be
    int64_t v12 = (v11 ? -8 : 8) + a2; // 0x1536e6
    char v13 = a4; // 0x1536e9
    *(char *)v1 = *(char *)&v1 & v13;
    char * v14 = (char *)(v12 - 0x208a33e); // 0x1536f2
    *v14 = v13 + 1 + *v14;
    char * v15 = (char *)((a3 & 0xffffffff ^ 0x3a8da171) - 87); // 0x1536f9
    *v15 = *v15 ^ (char)(a4 / 256);
    return v12 & 0xffffffff;
}

// Address range: 0x153705 - 0x153707
int64_t function_153705(int64_t a1) {
    // 0x153705
    int64_t result; // 0x153705
    return result;
}

// Address range: 0x153737 - 0x1537d0
int64_t function_153737(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x153737
    char * v3 = (char *)(v2 - 0x5bf81374); // 0x153737
    char v4 = a3 / 256; // 0x153737
    *v3 = *v3 + v4;
    *(char *)0x2e94bbab = *(char *)0x2e94bbab + (char)v2;
    *(int32_t *)(a2 + 0x7c048d00) = (int32_t)v2;
    *(int32_t *)v2 = (int32_t)(int64_t)&v1;
    int64_t v5 = __asm_hlt(); // 0x1537b8
    *(char *)-0x10539f3f = *(char *)-0x10539f3f + (char)(v2 / 256);
    int64_t v6 = 256 * ((int64_t)(*(char *)(a3 + 0x53f348b3) + v4) + a3); // 0x1537c0
    int64_t v7 = v6 & 0xff00 | a3 & -0xff01; // 0x1537c0
    char v8 = (char)v5 | 40; // 0x1537c2
    if (v8 < 0) {
        // 0x1537c6
        __asm_out((int16_t)v7, (int32_t)(v5 & 0xffffff00 | (int64_t)v8));
        return unknown_14ae1ed1();
    }
    // 0x153783
    *(int32_t *)a1 = __asm_insd((int16_t)(v7 + v6 & 0xff00 | a3 % 256));
    int64_t v9 = a4 & 0xffff00ff | (int64_t)&g3; // 0x15378a
    int32_t v10 = *(int32_t *)-0x6783c730; // 0x15378d
    *(int32_t *)-0x6783c730 = -(int32_t)(((int64_t)&g3 >> 8)&1) - (int32_t)v9 + v10;
    int64_t result = (v9 + 252) % 256 | v9 & -256; // 0x153794
    uint32_t v11 = (int32_t)a4 % 32; // 0x15379a
    if (v11 != 0) {
        int32_t * v12 = (int32_t *)result; // 0x15379a
        uint32_t v13 = *v12; // 0x15379a
        *v12 = v13 >> 32 - v11 | v13 << v11;
    }
    return result;
}

// Address range: 0x1537f9 - 0x1537fd
int64_t function_1537f9(int64_t a1) {
    // 0x1537f9
    int64_t result; // 0x1537f9
    return result;
}

// Address range: 0x15382a - 0x15389d
int64_t function_15382a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15382a
    int64_t v1; // 0x15382a
    int64_t v2 = v1;
    bool v3; // 0x15382a
    if (v3) {
        // 0x15388e
        *(char *)v2 = 0;
        return v2 - (v1 & 0xff00) & 0xff00 | v2 & -0xffe9;
    }
    // 0x15382c
    __asm_iretd();
    return function_15238fa();
}

// Address range: 0x1538c7 - 0x1538e1
int64_t function_1538c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1538c7
    int64_t v1; // 0x1538c7
    bool v2; // 0x1538c7
    int64_t result = unknown_68c286d7(v1 & 0xffffffff, (v2 ? -1 : 1) + a2); // 0x1538d0
    *(int32_t *)a3 = (int32_t)(v1 | v1);
    char v3 = *(char *)0x7df37df; // 0x1538d8
    *(char *)0x7df37df = v3 + (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x1538e8 - 0x1538ee
int64_t function_1538e8(int64_t a1) {
    // 0x1538e8
    int64_t result; // 0x1538e8
    return result;
}

// Address range: 0x1538fa - 0x153901
int64_t function_1538fa(void) {
    // 0x1538fa
    int64_t result; // 0x1538fa
    return result;
}

// Address range: 0x153931 - 0x153938
int64_t function_153931(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x153931
    int64_t v1; // 0x153931
    *(char *)a3 = (char)(v1 ^ a4 / 256);
    return a2 & 0xffffffff;
}

// Address range: 0x153988 - 0x15398a
int64_t function_153988(void) {
    // 0x153988
    return function_1539dd();
}

// Address range: 0x15398b - 0x15398e
int64_t function_15398b(void) {
    // 0x15398b
    int64_t v1; // 0x15398b
    return function_1539bd(v1, v1, v1, v1);
}

// Address range: 0x153993 - 0x153998
int64_t function_153993(void) {
    // 0x153993
    return function_3e224d();
}

// Address range: 0x15399b - 0x15399e
int64_t function_15399b(int64_t a1) {
    // 0x15399b
    int64_t result; // 0x15399b
    return result;
}

// Address range: 0x1539bd - 0x1539c6
int64_t function_1539bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1539bd
    int64_t v1; // 0x1539bd
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x1539dd - 0x1539e2
int64_t function_1539dd(void) {
    // 0x1539dd
    int64_t result; // 0x1539dd
    return result;
}

// Address range: 0x1539ea - 0x1539eb
int64_t function_1539ea(int64_t a1) {
    // 0x1539ea
    int64_t result; // 0x1539ea
    return result;
}

// Address range: 0x153a22 - 0x153a25
int64_t function_153a22(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x153a22
    int64_t result; // 0x153a22
    *(char *)a4 = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x153a5d - 0x153a5e
int64_t function_153a5d(void) {
    // 0x153a5d
    int64_t result; // 0x153a5d
    return result;
}

// Address range: 0x153a6d - 0x153a71
int64_t function_153a6d(void) {
    // 0x153a6d
    int64_t result; // 0x153a6d
    return result;
}

// Address range: 0x153a74 - 0x153a76
int64_t function_153a74(void) {
    // 0x153a74
    return unknown_56763596();
}

// Address range: 0x153a8e - 0x153a90
int64_t function_153a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x153a8e
    int64_t result; // 0x153a8e
    return result;
}

// Address range: 0x153a90 - 0x153a95
int64_t function_153a90(void) {
    // 0x153a90
    return unknown_56763596();
}

// Address range: 0x153ab8 - 0x153ac2
int64_t function_153ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x153ab8
    int64_t v1; // 0x153ab8
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 | a4);
    return function_153a5d();
}

// Address range: 0x153ae9 - 0x153aef
int64_t function_153ae9(void) {
    // 0x153ae9
    int64_t v1; // 0x153ae9
    return v1 & 0xe6013d00;
}

// Address range: 0x153d13 - 0x153d1d
int64_t function_153d13(int64_t a1, int64_t a2) {
    // 0x153d13
    int64_t v1; // 0x153d13
    return v1 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x153d1e - 0x153e1e
int64_t function_153d1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x153d1e
    int64_t v1; // 0x153d1e
    int64_t v2 = v1;
    bool v3; // 0x153d1e
    if (v3) {
        int64_t result; // 0x153d1e
        if (a4 != 1) {
            // 0x153da7
            result = v2 - 256 * a1 & 0xff00 | v2 & -0xff01;
        }
        // 0x153d5c
        return result;
    }
    int64_t v4 = v1 | 256 * a3 & 0xff00; // 0x153d23
    int64_t v5; // bp-8, 0x153d1e
    int64_t v6 = (int64_t)&v5; // bp-16, 0x153d25
    int64_t v7 = (int64_t)&v6; // 0x153d25
    __asm_wait(a1);
    unknown_65d8b12d();
    int64_t v8 = (v3 ? -4 : 4) + a2; // 0x153d2e
    uint32_t v9 = *(int32_t *)(8 * a3 - 0x176d4243 + v7) + (int32_t)a4; // 0x153d30
    int64_t v10 = v9; // 0x153d30
    uint32_t v11 = (int32_t)v4 + (int32_t)a2; // 0x153d37
    int32_t * v12 = (int32_t *)(a3 + 0x5c015806); // 0x153d39
    int32_t v13 = a3; // 0x153d39
    *v12 = *v12 | v13;
    *(char *)((int64_t)v11 - 0x414d03ee) = -24;
    *(int32_t *)0x505d15f6 = *(int32_t *)0x505d15f6 + (int32_t)v8;
    *(char *)a1 = *(char *)v8;
    if (v11 < -0x5993dff) {
        char v14 = *(char *)v10; // 0x153e17
        int64_t result2 = (int64_t)(v14 | -(char)v11) | (int64_t)(-v11 & -256); // 0x153e17
        *(int64_t *)(v7 - 8) = result2;
        return result2;
    }
    int64_t v15 = v3 ? -1 : 1; // 0x153d4c
    int64_t v16 = __asm_int1(v15 + a1, v8 + v15); // 0x153dca
    int32_t * v17 = (int32_t *)(v10 + 61); // 0x153dd5
    *v17 = *v17 | v9;
    uint32_t v18 = v9 % 32; // 0x153dd8
    if (v18 != 0) {
        int32_t * v19 = (int32_t *)(v16 & 0xffffffff ^ 0x73f06750); // 0x153dd8
        uint32_t v20 = *v19; // 0x153dd8
        *v19 = v20 >> 32 - v18 | v20 << v18;
    }
    // 0x153d87
    __asm_sti();
    int32_t * v21 = (int32_t *)(a3 - 0x2919a8d5 + v4); // 0x153de4
    *v21 = *v21 + v13;
    return unknown_98dbf5();
}

// Address range: 0x153e2b - 0x153e52
int64_t function_153e2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x153e2b
    int64_t v1; // 0x153e2b
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a3; // 0x153e2e
    int32_t v4 = v3 / 0x80000 | 0x2000 * v3; // 0x153e2e
    *(char *)v2 = (char)v2 - ((v3 & 0x40000) == 0 ? -104 : -103);
    int64_t v5 = v2 + 0xe7ffbde9; // 0x153e40
    int64_t result = v5 & 0xffffffff; // 0x153e40
    *(int32_t *)a1 = (int32_t)v5;
    bool v6; // 0x153e2b
    *(char *)((v6 ? -4 : 4) + a1) = __asm_insb((int16_t)v4);
    int32_t * v7 = (int32_t *)result; // 0x153e50
    *v7 = *v7 - v4;
    return result;
}

// Address range: 0x153ed5 - 0x153ed6
int64_t function_153ed5(int64_t a1) {
    // 0x153ed5
    int64_t result; // 0x153ed5
    return result;
}

// Address range: 0x3cc9ff - 0x3ccb69
int64_t function_3cc9ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3cc9ff
    int64_t v1; // bp-56, 0x3cc9ff
    int64_t v2 = (int64_t)&v1 + 16; // bp-40, 0x3ccaeb
    v1 = (int64_t)&v2;
    int64_t v3; // 0x3cc9ff
    return function_c57b8(a1, v3, a3, a4, a5, a6, a7);
}

// Address range: 0x3ccb69 - 0x3ccc89
int64_t function_3ccb69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x3cdd424d; // bp-32, 0x3ccbc6
    int64_t v2 = (int64_t)&v1; // 0x3ccbfa
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x3ccc02
    int64_t v4 = *v3; // 0x3ccc02
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x3ccc02
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x3ccc06
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x3ccc1d
    *v7 = 0x638f3c14;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x3ccc30
    *v8 = a6;
    v1 = *v6;
    *v6 = 0x4ae88f32;
    *v8 = v4;
    *v7 = v4;
    *v3 = *v6;
    int64_t v9 = *v5; // 0x3ccc55
    *v6 = v9;
    *v7 = v9;
    *v5 = v1;
    *v6 = v1;
    int64_t v10; // 0x3ccb69
    return function_c57b8(a1, a2, a3, a4, a5, v10, v1);
}

// Address range: 0x3ccc89 - 0x3ccdd8
int64_t function_3ccc89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ccc89
    int64_t v1; // bp-32, 0x3ccc89
    int64_t v2 = (int64_t)&v1; // 0x3ccceb
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3cccf3
    *v3 = a3;
    *v3 = 0x4d4a96ea;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x3ccd0d
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x3ccd1c
    int64_t v6 = v2 - 16; // 0x3ccd1c
    int64_t * v7 = (int64_t *)v6; // 0x3ccd1c
    *v7 = v5;
    *v4 = v5;
    int64_t v8 = v2 - 32; // 0x3ccd27
    int64_t * v9 = (int64_t *)v8; // 0x3ccd37
    *v9 = v6;
    *v4 = v1;
    *v9 = a4;
    int64_t * v10 = (int64_t *)(v2 - 40); // 0x3ccd51
    *v10 = v8;
    *v9 = 0x119ba4bc;
    *(int64_t *)(v2 - 48) = v5;
    *v7 = *v9;
    *v10 = v8;
    *v9 = v6;
    int64_t v11 = *v7; // 0x3ccdba
    *v4 = v11;
    *v9 = v11;
    return function_c57b8(a1, a2, *v3, *v9, a5, a6, 0x3ca3d9);
}

// Address range: 0x3ccdd8 - 0x3ccf61
int64_t function_3ccdd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ccdd8
    int64_t v1; // bp-24, 0x3ccdd8
    int64_t v2 = (int64_t)&v1; // 0x3ccdeb
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x3ccdf9
    *v3 = 310;
    v1 = a4;
    int64_t v4 = v2 - 8; // 0x3cce02
    int64_t * v5 = (int64_t *)v4; // 0x3cce06
    int64_t v6 = v2 - 16; // 0x3cce0e
    int64_t * v7 = (int64_t *)v6; // 0x3cce1d
    *v5 = 0x3ca5de;
    *v7 = a4;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x3cce3d
    *v7 = 0x36ad4a2e;
    int64_t v9 = *(int64_t *)(v2 + 24); // 0x3cce73
    *v7 = v9;
    *v8 = v4;
    int64_t v10 = *v3; // 0x3cce9b
    *v7 = v10;
    *v8 = v4;
    int64_t * v11 = (int64_t *)(v2 - 32); // 0x3ccec3
    *v11 = v9;
    *v5 = *v8;
    *v8 = 0x734c62fa;
    *(int64_t *)(v2 + 16) = v10;
    *v11 = *v8;
    *v8 = *v7;
    *v11 = v6;
    *(int64_t *)(v2 - 40) = a5;
    *v11 = v6;
    int64_t v12; // 0x3ccdd8
    return function_c57b8(a1, a2, a3, *v7, a5, *v11, v12);
}

// Address range: 0x3ccf89 - 0x3ccf8c
int64_t function_3ccf89(void) {
    // 0x3ccf89
    int64_t result; // 0x3ccf89
    return result;
}

// Address range: 0x3ccfa4 - 0x3ccfae
int64_t function_3ccfa4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 119); // 0x3ccfa4
    unsigned char v2 = *v1; // 0x3ccfa4
    *v1 = v2 / 2 | 128 * v2;
    int64_t result; // 0x3ccfa4
    int32_t * v3 = (int32_t *)(result + 77); // 0x3ccfa7
    uint32_t v4 = *v3; // 0x3ccfa7
    *v3 = 0x1000000 * v4 | v4 / 512 | 0x800000 * (int32_t)(v2 % 2 != 0);
    return result;
}

// Address range: 0x3ccfe2 - 0x3ccfe3
int64_t function_3ccfe2(int64_t a1) {
    // 0x3ccfe2
    int64_t result; // 0x3ccfe2
    return result;
}

// Address range: 0x3cd1ff - 0x3cd323
int64_t function_3cd1ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3cd1ff
    int64_t v1; // 0x3cd1ff
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x3cd1ff
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    char * v5 = (char *)(v3 - 119); // 0x3cd203
    *v5 = *v5 + (char)a4;
    int64_t v6 = 0x6ea04b11; // 0x3cd2d8
    return function_c57b8(a1, a2, (int64_t)&v6, a4, a5, a6, 0x377f5f80);
}

// Address range: 0x3cd36e - 0x3cd374
int64_t function_3cd36e(void) {
    // 0x3cd36e
    int64_t result; // 0x3cd36e
    char * v1 = (char *)(result + 104); // 0x3cd36e
    *v1 = *v1 | (char)result;
    return result;
}

// Address range: 0x3cd381 - 0x3cd384
int64_t function_3cd381(void) {
    // 0x3cd381
    int64_t result; // 0x3cd381
    return result;
}
