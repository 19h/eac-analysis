/*
 * Targeted RetDec C for native executable gap queue batch 601.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x35268a-0x35288a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35288a-0x352a8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x352a8a-0x352c8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x47d630-0x47d830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47d830-0x47da30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47da30-0x47dc30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47dc30-0x47de30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47de30-0x47e030 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
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

int64_t function_35268a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_352731(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35284b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_352992(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_352ae3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_352c5c(void);
int64_t function_47d630(void);
int64_t function_47d6c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47d6e4(void);
int64_t function_47d6e9(int64_t a1);
int64_t function_47d6ed(int64_t result);
int64_t function_47d70c(void);
int64_t function_47d736(int64_t a1);
int64_t function_47d75b(void);
int64_t function_47d7d6(void);
int64_t function_47d80e(void);
int64_t function_47d812(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47d879(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47d958(void);
int64_t function_47d9a6(int64_t a1);
int64_t function_47d9ea(void);
int64_t function_47da1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47da20(int64_t a1, int64_t a2);
int64_t function_47da63(void);
int64_t function_47da8c(int64_t a1);
int64_t function_47dac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5);
int64_t function_47dbeb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47dc61(void);
int64_t function_47dc7b(int64_t a1);
int64_t function_47dcb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47dcc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47dd74(void);
int64_t function_47dd8a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47ddc3(void);
int64_t function_47ddd0(int64_t a1, int64_t a2);
int64_t function_47ddef(void);
int64_t function_47ddf3(void);
int64_t function_47ddf6(void);
int64_t function_47ddfc(void);
int64_t function_47de0f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47de13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47de62(void);
int64_t function_47de76(void);
int64_t function_47de89(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47dec6(void);
int64_t function_47df0e(void);
int64_t function_47df1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47df24(int64_t a1);
int64_t function_47df4c(int64_t a1);
int64_t function_47df8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_63673b4f();
int64_t function_cf3c7();
int64_t function_ffffffff94392ac0();
int64_t function_ffffffff9506dd5a();
int64_t function_ffffffff99b988e0();
int64_t function_ffffffffbe7afab9();
int64_t function_ffffffffc1e1f708();

// Address range: 0x35268a - 0x352731
int64_t function_35268a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x35268a
    int64_t v1; // 0x35268a
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x35268a
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = v3;
    *(char *)v5 = *(char *)&v3 + (char)v5;
    int64_t v6 = v3;
    *(char *)v6 = *(char *)&v3 + (char)v6;
    int64_t v7 = v1 + a1; // 0x352692
    int64_t v8 = v7 + 16; // 0x35269f
    int64_t * v9 = (int64_t *)v8; // 0x35269f
    int64_t v10 = *v9; // 0x35269f
    int64_t v11 = v7 - 8; // 0x35269f
    int64_t * v12 = (int64_t *)v11; // 0x35269f
    int64_t * v13 = (int64_t *)(v7 - 16); // 0x3526a3
    *(int64_t *)(v7 - 24) = v10;
    *v13 = v11;
    *v12 = v11;
    int64_t * v14 = (int64_t *)v7; // 0x3526ce
    *v9 = v3;
    *v14 = 0x68d8680e;
    *v12 = 0x1bd94d42;
    *v13 = v10;
    *(int64_t *)(v7 + 32) = *v14;
    int64_t v15 = v7 + 8; // 0x3526e7
    int64_t * v16 = (int64_t *)v15; // 0x3526eb
    *v12 = *v16;
    *v14 = v8;
    *v14 = *v16;
    *v12 = v15;
    return function_cf3c7(a6, a2, a3, a4, v1, v1);
}

// Address range: 0x352731 - 0x35284b
int64_t function_352731(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x352731
    int64_t v1; // 0x352731
    return function_cf3c7(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x35284b - 0x352992
int64_t function_35284b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35284b
    int64_t v1; // 0x35284b
    return function_cf3c7(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x352992 - 0x352ae3
int64_t function_352992(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x352992
    int64_t v1; // bp-40, 0x352992
    int64_t v2 = (int64_t)&v1; // 0x352a1e
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x352a26
    int64_t * v4 = (int64_t *)v3; // 0x352a31
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x352a34
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x352a38
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x352a3b
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 + 16); // 0x352a47
    int64_t v9 = *v8; // 0x352a47
    *v4 = v9;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x352a68
    *v6 = 0x3c21d142;
    *v10 = v5;
    *v7 = v5;
    v1 = *v6;
    *v7 = 0x1097a736;
    *v10 = v9;
    *v8 = *v6;
    *v6 = *v4;
    *v7 = v3;
    *v6 = *v4;
    *v7 = v3;
    return function_cf3c7(v5, a2, a3, a4, a5, 169);
}

// Address range: 0x352ae3 - 0x352c39
int64_t function_352ae3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x352ae3
    int64_t v1; // bp-24, 0x352ae3
    v1 = (int64_t)&v1 + 16;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x352c5c - 0x352c5f
int64_t function_352c5c(void) {
    // 0x352c5c
    int64_t result; // 0x352c5c
    return result;
}

// Address range: 0x47d630 - 0x47d631
int64_t function_47d630(void) {
    // 0x47d630
    int64_t result; // 0x47d630
    return result;
}

// Address range: 0x47d6c7 - 0x47d6db
int64_t function_47d6c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47d6c7
    return __asm_int3();
}

// Address range: 0x47d6e4 - 0x47d6e8
int64_t function_47d6e4(void) {
    // 0x47d6e4
    int64_t v1; // 0x47d6e4
    __asm_out(-42, (int32_t)v1);
    return function_47d75b();
}

// Address range: 0x47d6e9 - 0x47d6ec
int64_t function_47d6e9(int64_t a1) {
    // 0x47d6e9
    int64_t result; // 0x47d6e9
    return result;
}

// Address range: 0x47d6ed - 0x47d6f7
int64_t function_47d6ed(int64_t result) {
    // 0x47d6ed
    return result;
}

// Address range: 0x47d70c - 0x47d70f
int64_t function_47d70c(void) {
    // 0x47d70c
    int64_t result; // 0x47d70c
    return result;
}

// Address range: 0x47d736 - 0x47d73b
int64_t function_47d736(int64_t a1) {
    // 0x47d736
    int64_t v1; // 0x47d736
    int64_t v2 = v1;
    bool v3; // 0x47d736
    return (v2 + 109 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x47d75b - 0x47d762
int64_t function_47d75b(void) {
    // 0x47d75b
    int64_t v1; // 0x47d75b
    return v1 + 0xda4db3eb & 0xffffffff;
}

// Address range: 0x47d7d6 - 0x47d7e2
int64_t function_47d7d6(void) {
    // 0x47d7d6
    int64_t v1; // 0x47d7d6
    bool v2; // 0x47d7d6
    *(int32_t *)v1 = (int32_t)v2;
    return function_63673b4f();
}

// Address range: 0x47d80e - 0x47d810
int64_t function_47d80e(void) {
    // 0x47d80e
    int64_t v1; // 0x47d80e
    return function_47d879(v1, v1, v1);
}

// Address range: 0x47d812 - 0x47d82f
int64_t function_47d812(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47d812
    return function_ffffffff9506dd5a();
}

// Address range: 0x47d879 - 0x47d87b
int64_t function_47d879(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47d879
    int64_t result; // 0x47d879
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x47d958 - 0x47d95d
int64_t function_47d958(void) {
    // 0x47d958
    return function_ffffffff99b988e0();
}

// Address range: 0x47d9a6 - 0x47d9a9
int64_t function_47d9a6(int64_t a1) {
    // 0x47d9a6
    int64_t result; // 0x47d9a6
    return result;
}

// Address range: 0x47d9ea - 0x47d9ec
int64_t function_47d9ea(void) {
    // 0x47d9ea
    int64_t v1; // 0x47d9ea
    return function_47da20(v1, v1);
}

// Address range: 0x47da1b - 0x47da20
int64_t function_47da1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 34); // 0x47da1b
    bool v2; // 0x47da1b
    *v1 = *v1 + (int32_t)a3 + (int32_t)v2;
    int64_t result; // 0x47da1b
    return result;
}

// Address range: 0x47da20 - 0x47da49
int64_t function_47da20(int64_t a1, int64_t a2) {
    // 0x47da20
    int64_t v1; // 0x47da20
    *(char *)-0x417ec1d7a444d3c9 = (char)v1;
    int64_t v2 = v1 + 0xba6c4aab; // 0x47da2e
    char v3 = *(char *)((v2 & 0xffffffff) - 44); // 0x47da46
    return v2 & 0xffffff00 | (int64_t)(v3 | (char)v2);
}

// Address range: 0x47da63 - 0x47da64
int64_t function_47da63(void) {
    // 0x47da63
    int64_t result; // 0x47da63
    return result;
}

// Address range: 0x47da8c - 0x47daae
int64_t function_47da8c(int64_t a1) {
    // 0x47da8c
    int64_t v1; // 0x47da8c
    if (*(char *)0x366f8598 <= (char)v1) {
        function_47da63();
    }
    // 0x47da9e
    return function_ffffffffbe7afab9();
}

// Address range: 0x47dac0 - 0x47db3e
int64_t function_47dac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x47dac0
    if ((char)a3 - a5 < 0) {
        // 0x47dad5
        return function_ffffffff94392ac0();
    }
    // 0x47db37
    int64_t v1; // 0x47dac0
    *(int32_t *)a2 = (int32_t)(v1 ^ a2);
    int64_t v2; // bp-11194, 0x47dac0
    return (int64_t)&v2;
}

// Address range: 0x47dbeb - 0x47dc06
int64_t function_47dbeb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47dbeb
    int64_t v1; // 0x47dbeb
    uint64_t result = v1;
    int64_t v2 = a2;
    bool v3; // 0x47dbeb
    if (v3 || v3) {
        // 0x47dc31
        return result;
    }
    char * v4 = (char *)(a1 + 0x7a478a2c); // 0x47dbed
    *v4 = *v4 ^ (char)(result / 256);
    __asm_int(39);
    return result + 0xab9a4677 & 0xffffff00 | (int64_t)*(char *)&v2;
}

// Address range: 0x47dc61 - 0x47dc67
int64_t function_47dc61(void) {
    uint64_t v1 = __asm_iretd(); // 0x47dc61
    int64_t v2; // 0x47dc61
    char v3 = *(char *)(v1 - 62 + 2 * v2); // 0x47dc62
    return 256 * (int64_t)((char)(v1 / 256) - v3) | v1 & -0xff01;
}

// Address range: 0x47dc7b - 0x47dc81
int64_t function_47dc7b(int64_t a1) {
    // 0x47dc7b
    int64_t result; // 0x47dc7b
    return result;
}

// Address range: 0x47dcb8 - 0x47dcc3
int64_t function_47dcb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a6 - 0x4122f1cd); // 0x47dcb8
    int64_t v2; // 0x47dcb8
    *v1 = *v1 + (char)v2;
    return a4 & 0xffffffff;
}

// Address range: 0x47dcc4 - 0x47dd73
int64_t function_47dcc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t result = __asm_int1(); // 0x47dcc4
    bool v2; // 0x47dcc4
    if (v2) {
        // 0x47dcc7
        return result;
    }
    // 0x47dd00
    __asm_int3();
    int32_t * v3 = (int32_t *)(a2 + 74); // 0x47dd02
    *v3 = *v3 & -0x338536fd;
    *(int32_t *)a1 = *(int32_t *)&v1;
    return 0x56cb5b44;
}

// Address range: 0x47dd74 - 0x47dd89
int64_t function_47dd74(void) {
    // 0x47dd74
    int64_t v1; // 0x47dd74
    float80_t v2; // 0x47dd74
    *(float32_t *)(v1 - 0x326ff106) = (float32_t)v2;
    int64_t v3; // 0x47dd74
    int64_t result = (int64_t)&v3; // 0x47dd7e
    if (v1 > 0x326ff11c) {
        result = function_47ddd0(v1, v1);
    }
    // 0x47dd80
    return result;
}

// Address range: 0x47dd8a - 0x47dda7
int64_t function_47dd8a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47dd8a
    int64_t v1; // 0x47dd8a
    bool v2; // 0x47dd8a
    if (!v2) {
        v1 = function_47ddf6();
    }
    // 0x47dd8f
    int64_t v3; // 0x47dd8a
    float80_t v4; // 0x47dd8a
    *(int32_t *)v3 = (int32_t)v4;
    int64_t result = v1 & -256 | (int64_t)__asm_in(-112); // 0x47dda1
    if ((char)v1 >= 125) {
        result = __asm_wait(a1, v3, a2);
    }
    // 0x47dda3
    return result;
}

// Address range: 0x47ddc3 - 0x47ddc8
int64_t function_47ddc3(void) {
    // 0x47ddc3
    int64_t result; // 0x47ddc3
    return result;
}

// Address range: 0x47ddd0 - 0x47dddd
int64_t function_47ddd0(int64_t a1, int64_t a2) {
    // 0x47ddd0
    float80_t v1; // 0x47ddd0
    *(float80_t *)(a2 + 41) = __asm_fbstp(v1);
    int64_t v2; // 0x47ddd0
    bool v3; // 0x47ddd0
    return v2 - (v3 ? 0xca531e79 : 0xca531e78) & 0xffffffff;
}

// Address range: 0x47ddef - 0x47ddf0
int64_t function_47ddef(void) {
    // 0x47ddef
    int64_t result; // 0x47ddef
    return result;
}

// Address range: 0x47ddf3 - 0x47ddf4
int64_t function_47ddf3(void) {
    // 0x47ddf3
    int64_t result; // 0x47ddf3
    return result;
}

// Address range: 0x47ddf6 - 0x47ddfa
int64_t function_47ddf6(void) {
    // 0x47ddf6
    int64_t result; // 0x47ddf6
    return result;
}

// Address range: 0x47ddfc - 0x47ddfd
int64_t function_47ddfc(void) {
    // 0x47ddfc
    int64_t result; // 0x47ddfc
    return result;
}

// Address range: 0x47de0f - 0x47de12
int64_t function_47de0f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47de0f
    return __asm_wait(a1, a2, a3);
}

// Address range: 0x47de13 - 0x47de40
int64_t function_47de13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t * v1 = (int32_t *)(a3 + 0x1fdd307e); // 0x47de1c
    int32_t v2 = *v1; // 0x47de1c
    int64_t v3; // 0x47de13
    *v1 = v2 - (int32_t)a5 + (int32_t)(((int32_t)v3 ^ 176) < 0x17bfaa10);
    abort();
    // UNREACHABLE
}

// Address range: 0x47de62 - 0x47de6f
int64_t function_47de62(void) {
    // 0x47de62
    return (int64_t)*(int32_t *)0x9edd55b713d0a36;
}

// Address range: 0x47de76 - 0x47de77
int64_t function_47de76(void) {
    // 0x47de76
    int64_t result; // 0x47de76
    return result;
}

// Address range: 0x47de89 - 0x47debb
int64_t function_47de89(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)0x3f572090 | (int32_t)a1; // 0x47de8a
    *(int32_t *)0x3f572090 = v1;
    int64_t v2; // 0x47de89
    float64_t v3 = *(float64_t *)(v2 - 0x53bcffa7); // 0x47de91
    int64_t v4 = 0x10000 * (int32_t)a4 >> 16; // 0x47de97
    if (v1 == 0) {
        v4 = function_47de76();
    }
    char * v5 = (char *)(a3 + 0x6fd29037); // 0x47dea5
    *v5 = *v5 - (*(char *)(v2 + 56) > (char)v4 ? 71 : 70);
    float80_t v6; // 0x47de89
    *(int32_t *)(v2 + 33) = (int32_t)((float80_t)v3 - v6);
    return v2 & 0x65ab0891 | 0x9a54f76e;
}

// Address range: 0x47dec6 - 0x47decb
int64_t function_47dec6(void) {
    // 0x47dec6
    return function_ffffffffc1e1f708();
}

// Address range: 0x47df0e - 0x47df0f
int64_t function_47df0e(void) {
    // 0x47df0e
    int64_t result; // 0x47df0e
    return result;
}

// Address range: 0x47df1c - 0x47df24
int64_t function_47df1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x47df1c
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a3 + 121); // 0x47df1c
        uint32_t v3 = *v2; // 0x47df1c
        *v2 = v3 >> 32 - v1 | v3 << v1;
    }
    int64_t result; // 0x47df1c
    int32_t * v4 = (int32_t *)(result + 125); // 0x47df1f
    *v4 = *v4 & (int32_t)a2;
    return result;
}

// Address range: 0x47df24 - 0x47df25
int64_t function_47df24(int64_t a1) {
    // 0x47df24
    int64_t result; // 0x47df24
    return result;
}

// Address range: 0x47df4c - 0x47df60
int64_t function_47df4c(int64_t a1) {
    // 0x47df4c
    int64_t result; // 0x47df4c
    int32_t * v1 = (int32_t *)(result + 0x3ff771d1); // 0x47df4c
    bool v2; // 0x47df4c
    *v1 = *v1 - (v2 ? 0x55370eac : 0x55370eab);
    __readgsdword(result - 61);
    return result;
}

// Address range: 0x47df8c - 0x47e02e
int64_t function_47df8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    unsigned char v3 = (char)a4; // 0x47df8c
    int64_t v4; // 0x47df8c
    unsigned char v5 = *(char *)(v4 + 0x63fe32e1); // 0x47df8c
    int16_t v6 = a3; // 0x47df92
    *(int32_t *)a1 = __asm_insd(v6);
    uint32_t v7 = (int32_t)v4; // 0x47df93
    uint32_t v8 = v7 + 0x6a3c4c3d + (int32_t)(v5 > v3); // 0x47df93
    bool v9 = v5 > v3 ? v8 <= v7 : v7 > 0x95c3b3c2; // 0x47df93
    char * v10 = (char *)(v4 - 0x2184dd7d); // 0x47df98
    unsigned char v11 = *v10; // 0x47df98
    unsigned char v12 = (v3 - v5) % 32; // 0x47df98
    bool v13 = v9; // 0x47df98
    if (v12 != 0) {
        *v10 = v11 >> v12 | (char)((int16_t)v11 << (int16_t)(9 - v12)) | (char)v9 << 8 - v12;
        v13 = (1 << v12 - 1 & v11) != 0;
    }
    int32_t * v14 = (int32_t *)((int64_t)v8 + 117); // 0x47df9e
    *v14 = -1 - *v14;
    char v15 = *(char *)&v1; // 0x47dfa1
    bool v16; // 0x47df8c
    int64_t v17 = v1 + (v16 ? -1 : 1); // 0x47dfa1
    v1 = v17;
    unsigned char v18 = *(char *)(v4 + (int64_t)(v15 - (v13 ? 98 : 97))); // 0x47dfa8
    *(char *)v2 = __asm_insb(v6);
    int32_t v19 = v17; // 0x47dfaf
    int32_t result = (v8 & -256 | (int32_t)v18) + v19; // 0x47dfaf
    int32_t * v20 = (int32_t *)(v4 + 0x3e6c943a); // 0x47dfb1
    uint32_t v21 = *v20; // 0x47dfb1
    *v20 = v21 / 0x8000000 | 32 * v21;
    bool v22; // 0x47df8c
    int64_t v23; // 0x47df8c
    int64_t v24; // 0x47df8c
    if (result != 0) {
        // 0x47dfce
        if (result < 0 == ((result ^ v8) & (result ^ v19)) < 0) {
            // 0x47dfcd
            return result;
        }
        char v25 = result; // 0x47e019
        unsigned char v26 = *(char *)&v2; // 0x47e019
        int64_t result2 = __asm_in_134(v6); // 0x47e01c
        __asm_int(91);
        v23 = result2;
        v24 = a3;
        v22 = v26 > v25;
        if (v26 < v25) {
            // 0x47dfcd
            return result2;
        }
    } else {
        uint32_t v27 = *(int32_t *)v1; // 0x47dfba
        char v28 = *(char *)(v1 + (v16 ? -4 : 4)); // 0x47dfbb
        int64_t result3 = 256 * (int64_t)(v28 & (char)(v27 / 256)) | (int64_t)(v27 & -0xff01); // 0x47dfbb
        int32_t * v29 = (int32_t *)(a3 + 83); // 0x47dfc0
        *v29 = *v29 + (int32_t)a3;
        int32_t * v30 = (int32_t *)(v17 & 0xffffffff); // 0x47dfc7
        uint32_t v31 = *v30; // 0x47dfc7
        int32_t v32 = result3; // 0x47dfc7
        int32_t v33 = (char)(a3 / 256) < 73; // 0x47dfc7
        uint32_t v34 = v31 + v32; // 0x47dfc7
        int32_t v35 = v34 + v33; // 0x47dfc7
        *v30 = v35;
        v23 = result3;
        v24 = a3 + 0xb700 & 0xff00 | a3 & -0xff01;
        v22 = false;
        if ((char)(a3 / 256) < 73 ? v35 <= v31 : v34 < v31) {
            int32_t v36 = v35 + v33; // 0x47dfc7
            if (v35 < 0 == ((v36 ^ v31) & (v36 ^ v32)) < 0) {
                // 0x47dfcd
                return result3;
            }
            // 0x47e004
            return result3 | v4 % 256;
        }
    }
    // 0x47e022
    __asm_int(98);
    int32_t * v37 = (int32_t *)v24; // 0x47e024
    uint32_t v38 = *v37; // 0x47e024
    *v37 = 0x100000 * v38 | 0x80000 * (int32_t)v22 | v38 / 0x2000;
    return v23 & -256 | (int64_t)*(char *)0xf56427ec;
}
