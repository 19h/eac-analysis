/*
 * Targeted RetDec C for native executable gap queue batch 972.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2d0107-0x2d0307 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d0307-0x2d0507 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d0507-0x2d0707 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d0707-0x2d0907 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d0907-0x2d0b07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d0b07-0x2d0d07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d0d07-0x2d0f07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d0f07-0x2d1107 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38f5a0-0x38f6a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38f6a0-0x38f8a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38f8a0-0x38faa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38fca0-0x38fea0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38fea0-0x3900a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3900a0-0x3902a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x480e30-0x481030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x481230-0x481430 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_1080e5e();
int64_t function_175fada();
int64_t function_2d0107(int64_t a1, int64_t a2);
int64_t function_2d01ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d0304(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d043a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d0586(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d06bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d07c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d08f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d0a3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d0bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d0d25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d0ea4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d1008(void);
int64_t function_2d1009(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d100e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d1016(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38f533();
int64_t function_38f55b();
int64_t function_38f57e();
int64_t function_38f5a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_38f5e9(int64_t a1, int64_t a2);
int64_t function_38f60d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38f61a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38f62c(void);
int64_t function_38f630(int64_t a1, int64_t a2);
int64_t function_38f688(int64_t a1);
int64_t function_38f76b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38f812(void);
int64_t function_38f862(void);
int64_t function_38f866(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38f8ba(void);
int64_t function_38f8c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38f91c(int64_t a1);
int64_t function_38f929(void);
int64_t function_38f963(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38fa6f(void);
int64_t function_38fca0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38fcb9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_38fcd9(void);
int64_t function_38fce2(int64_t a1);
int64_t function_38fd38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38fd69(int64_t a1, int64_t a2);
int64_t function_38fd7f(void);
int64_t function_38fda9(void);
int64_t function_38fdbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38fec8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38fee9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38feef(int64_t a1);
int64_t function_38ff67(void);
int64_t function_38ff7c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38ff9c(void);
int64_t function_38ffbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38fff1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39009b(void);
int64_t function_39011c(int64_t a1);
int64_t function_390124(int64_t a1);
int64_t function_390160(int64_t a1);
int64_t function_390193(int64_t a1);
int64_t function_3901ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_390297(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_480df1();
int64_t function_480e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_480ec8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_480f10(int64_t a1, int64_t a2);
int64_t function_480fe8(void);
int64_t function_481230(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_481250(int64_t a1);
int64_t function_4812ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_481336(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4813c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48140f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_7b98fe9b();
int64_t function_7c839a26();
int64_t function_a1727b();
int64_t function_cf3c7();
int64_t function_ffffffff9522ca72();
int64_t function_ffffffffe8f7255b();
int64_t function_ffffffffea485f8c();
int64_t unknown_106468ce();
int64_t unknown_141476ff();
int64_t unknown_1bb51a91();
int64_t unknown_3456bc0e();
int64_t unknown_3aac6689();
int64_t unknown_3d3ae4ad();
int64_t unknown_3d806bc5();
int64_t unknown_69227c41();

// Address range: 0x2d0107 - 0x2d01ca
int64_t function_2d0107(int64_t a1, int64_t a2) {
    // 0x2d0107
    int64_t v1; // bp-8, 0x2d0107
    int64_t v2 = (int64_t)&v1; // 0x2d011d
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x2d0138
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2d0138
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2d013c
    *v5 = v3;
    int64_t v6 = v2 + 16; // 0x2d014e
    int64_t v7 = *(int64_t *)v6; // 0x2d014e
    *v4 = v7;
    *v5 = 0x389e2146;
    *(int64_t *)(v2 - 24) = v3;
    *(int64_t *)(v2 + 8) = *v4;
    *v5 = v7;
    *(int64_t *)(v2 + 24) = v7;
    *v5 = v1;
    v1 = a2;
    *v4 = v6;
    *v5 = v1;
    int64_t v8; // 0x2d0107
    return function_cf3c7(a1, v1, v8, v8, v8, v8);
}

// Address range: 0x2d01ca - 0x2d0304
int64_t function_2d01ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d01ca
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2d0304 - 0x2d043a
int64_t function_2d0304(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d0304
    int64_t v1; // bp-32, 0x2d0304
    v1 = (int64_t)&v1;
    return function_cf3c7(a1, a2, a3, 169, a5, a6);
}

// Address range: 0x2d043a - 0x2d0586
int64_t function_2d043a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d043a
    int64_t v1; // bp-48, 0x2d043a
    int64_t v2 = (int64_t)&v1; // 0x2d0542
    v1 = 0x2bcc2d;
    *(int64_t *)(v2 + 32) = 0x2bcc2d;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x2d0552
    int64_t v4 = *v3; // 0x2d0552
    v1 = v4;
    *(int64_t *)(v2 - 8) = v4;
    int64_t v5 = *(int64_t *)(v2 + 16); // 0x2d0568
    *v3 = v5;
    v1 = v5;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2d0586 - 0x2d06bc
int64_t function_2d0586(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d0586
    int64_t v1; // 0x2d0586
    return function_cf3c7(a1, a2, a3, v1, v1, v1);
}

// Address range: 0x2d06bc - 0x2d07c7
int64_t function_2d06bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d06bc
    int64_t v1; // 0x2d06bc
    bool v2; // 0x2d06bc
    return function_cf3c7(a1, a2, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2, a4, a5, v1);
}

// Address range: 0x2d07c7 - 0x2d08f8
int64_t function_2d07c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d07c7
    int64_t v1; // bp-40, 0x2d07c7
    int64_t v2 = (int64_t)&v1; // 0x2d083d
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x2d0855
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2d0855
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2d0859
    *v5 = v2;
    int64_t v6 = v2 + 8; // 0x2d0879
    int64_t * v7 = (int64_t *)v6; // 0x2d0879
    int64_t v8 = *v7; // 0x2d0879
    int64_t * v9 = (int64_t *)(v2 - 24); // 0x2d087d
    *v9 = v8;
    *(int64_t *)(v2 - 32) = v8;
    *v5 = v3;
    *v7 = *v4;
    *v5 = 0x76ce2d90;
    *v9 = v8;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v1;
    v1 = *v7;
    *v4 = v6;
    int64_t v10; // 0x2d07c7
    return function_cf3c7(a1, a2, a3, a4, v10, v10);
}

// Address range: 0x2d08f8 - 0x2d0a3a
int64_t function_2d08f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d08f8
    int64_t v1; // 0x2d08f8
    return function_cf3c7(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x2d0a3a - 0x2d0bbb
int64_t function_2d0a3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d0a3a
    int64_t v1; // 0x2d0a3a
    return function_cf3c7(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x2d0bbb - 0x2d0d25
int64_t function_2d0bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d0bbb
    int64_t v1; // bp-24, 0x2d0bbb
    int64_t v2 = (int64_t)&v1; // 0x2d0c3a
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x2d0cfb
    *v3 = a4;
    v1 = v2 + 24;
    int64_t v4 = *v3; // 0x2d0d17
    *(int64_t *)(v2 - 8) = v4;
    int64_t v5; // 0x2d0bbb
    return function_cf3c7(a1, a2, a3, v4, v5, v5);
}

// Address range: 0x2d0d25 - 0x2d0ea4
int64_t function_2d0d25(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d0d25
    int64_t v1; // bp-40, 0x2d0d25
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2d0d25
    return function_cf3c7(a1, a2, v2, a4, a5, v2);
}

// Address range: 0x2d0ea4 - 0x2d0fdc
int64_t function_2d0ea4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d0ea4
    int64_t v1; // bp-64, 0x2d0ea4
    int64_t v2 = (int64_t)&v1; // 0x2d0fa3
    int64_t v3 = v2 + 16; // 0x2d0fa9
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x2d0fb8
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2d1008 - 0x2d1009
int64_t function_2d1008(void) {
    // 0x2d1008
    int64_t result; // 0x2d1008
    return result;
}

// Address range: 0x2d1009 - 0x2d100e
int64_t function_2d1009(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x2d1009
    *v1 = *v1 | (char)a4;
    return function_2d1016(a1, a2, a3, a4, (int64_t)&g3);
}

// Address range: 0x2d100e - 0x2d1016
int64_t function_2d100e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d100e
    int64_t v1; // 0x2d100e
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x2d1010
    *v3 = *v3 + (char)a4;
    return v2 & -184;
}

// Address range: 0x2d1016 - 0x2d1104
int64_t function_2d1016(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 & 0xffffffff; // 0x2d1016
    int64_t v2 = v1 - 8; // 0x2d1019
    int64_t * v3 = (int64_t *)v2; // 0x2d101a
    int64_t * v4 = (int64_t *)v1; // 0x2d1020
    *v4 = 0x2be22b;
    *v3 = 0x7afa2e26;
    *(int64_t *)(v1 - 16) = a3;
    int64_t * v5 = (int64_t *)(v1 - 24); // 0x2d102e
    int64_t * v6 = (int64_t *)(v1 - 32); // 0x2d102f
    *v3 = *v5;
    *v5 = 0x66e4ba04;
    int64_t result = *(int64_t *)(v1 + 16); // 0x2d106d
    *v5 = result;
    *v6 = result;
    *(int64_t *)(v1 - 40) = result;
    int64_t v7 = *v4; // 0x2d1080
    *v5 = v7;
    *v6 = result;
    *v3 = *v5;
    *v6 = v7;
    *(int64_t *)(v1 + 8) = v7;
    *v5 = v2;
    return result;
}

// Address range: 0x38f5a0 - 0x38f5e2
int64_t function_38f5a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4 - 1; // 0x38f5a2
    int64_t v2; // 0x38f5a0
    int64_t v3; // 0x38f5a0
    if (v1 != 0 == (char)a3 == (char)(v3 / 256)) {
        v2 = function_38f533();
    }
    int64_t v4 = v2 & 0xba82f6a4; // 0x38f5a4
    char * v5 = (char *)v4; // 0x38f5a9
    *v5 = *v5 & (char)v4;
    char v6 = *(char *)(v4 + 4 * v3); // 0x38f5b0
    __asm_in((int16_t)a3);
    char * v7 = (char *)((v1 & -256 | (int64_t)(v6 & (char)v1)) + 0x13d00c5); // 0x38f5bf
    unsigned char v8 = *v7; // 0x38f5bf
    char v9 = v8 + (char)v3; // 0x38f5bf
    *v7 = v9;
    if (v9 >= v8 && v9 != 0) {
        function_38f55b();
    }
    // 0x38f5c7
    if (llvm_ctpop_i8(v9) % 2 != 0) {
        function_38f57e();
    }
    int16_t v10 = a5; // 0x38f5ce
    *(char *)a1 = __asm_insb(v10);
    int64_t result = __asm_sti(); // 0x38f5d1
    if (v9 >= 0) {
        // 0x38f5d6
        return result;
    }
    // 0x38f5d8
    __asm_outsd(v10, *(int32_t *)a7);
    int64_t result2 = __asm_int1(); // 0x38f5d9
    *(char *)-0x1180c01f = *(char *)-0x1180c01f + 37;
    return result2;
}

// Address range: 0x38f5e9 - 0x38f5fa
int64_t function_38f5e9(int64_t a1, int64_t a2) {
    // 0x38f5e9
    int64_t v1; // 0x38f5e9
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(a2 - 0x29eb61c1); // 0x38f5e9
    float80_t v4; // 0x38f5e9
    *(int32_t *)(v1 - 90) = (int32_t)v4;
    int64_t result = v2 % 256 * (int64_t)v3 & 0xff00 | v2 & -0x10000 | (int64_t)__asm_in_133(61); // 0x38f5f3
    int32_t * v5 = (int32_t *)result; // 0x38f5f5
    *v5 = *v5 + (int32_t)result;
    return result;
}

// Address range: 0x38f60d - 0x38f615
int64_t function_38f60d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38f60d
    int64_t v1; // 0x38f60d
    int32_t * v2 = (int32_t *)(v1 + 0x480b4208); // 0x38f60d
    *v2 = *v2 + (int32_t)a4;
    return function_38f62c();
}

// Address range: 0x38f61a - 0x38f61f
int64_t function_38f61a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38f61a
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x38f61a
    return result;
}

// Address range: 0x38f62c - 0x38f62e
int64_t function_38f62c(void) {
    // 0x38f62c
    int64_t v1; // 0x38f62c
    return v1 & -256 | (int64_t)__asm_in_133(-105);
}

// Address range: 0x38f630 - 0x38f632
int64_t function_38f630(int64_t a1, int64_t a2) {
    // 0x38f630
    int64_t result; // 0x38f630
    return result;
}

// Address range: 0x38f688 - 0x38f695
int64_t function_38f688(int64_t a1) {
    // 0x38f688
    int64_t v1; // 0x38f688
    *(char *)a1 = (char)v1 & 58;
    return unknown_1bb51a91(a1) & -256 | 216;
}

// Address range: 0x38f76b - 0x38f78b
int64_t function_38f76b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38f76b
    int64_t result; // 0x38f76b
    if (*(char *)(result - 76) != (char)a3) {
        // 0x38f770
        return result;
    }
    char * v1 = (char *)(result + a3);
    while (true) {
        int64_t v2 = unknown_3aac6689(); // 0x38f783
        int64_t v3; // 0x38f76b
        int64_t v4 = v3 - 8; // 0x38f788
        *(int64_t *)v4 = a4;
        *v1 = *v1 | (char)v2;
        v3 = v4;
    }
}

// Address range: 0x38f812 - 0x38f813
int64_t function_38f812(void) {
    // 0x38f812
    int64_t result; // 0x38f812
    return result;
}

// Address range: 0x38f862 - 0x38f864
int64_t function_38f862(void) {
    // 0x38f862
    return function_38f812();
}

// Address range: 0x38f866 - 0x38f874
int64_t function_38f866(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)(a4 - 9); // 0x38f866
    __asm_wait();
    uint32_t v2 = (int32_t)a4 % 32; // 0x38f86c
    if (v2 != 0) {
        int64_t v3; // 0x38f866
        int32_t * v4 = (int32_t *)(v3 + 0x2329013d); // 0x38f86c
        uint32_t v5 = *v4; // 0x38f86c
        *v4 = (int32_t)(v1 > (char)(v3 / 256)) << v2 - 1 | v5 << v2 | (int32_t)((int64_t)v5 >> (int64_t)(33 - v2));
    }
    return function_38f8c9(a1, a2, a3, a4, (int64_t)&g3);
}

// Address range: 0x38f8ba - 0x38f8bc
int64_t function_38f8ba(void) {
    // 0x38f8ba
    int64_t v1; // 0x38f8ba
    return unknown_3d806bc5(v1);
}

// Address range: 0x38f8c9 - 0x38f8e3
int64_t function_38f8c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38f8c9
    int64_t v1; // 0x38f8c9
    uint64_t v2 = (0x100000000 * v1 >> 32) * (0x100000000 * v1 >> 32); // 0x38f8c9
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff); // 0x38f8cb
    int32_t v4 = v2; // 0x38f8cb
    *v3 = *v3 | v4;
    __asm_out((int16_t)(v2 / 0x100000000), v4);
    int64_t v5; // 0x38f8c9
    return (int64_t)*(int32_t *)&v5;
}

// Address range: 0x38f91c - 0x38f927
int64_t function_38f91c(int64_t a1) {
    int64_t v1 = unknown_3d806bc5(a1); // 0x38f91c
    int32_t * v2 = (int32_t *)v1; // 0x38f922
    uint32_t v3 = *v2; // 0x38f922
    uint32_t v4 = v3 + (int32_t)v1; // 0x38f922
    *v2 = v4;
    return (v1 - (v4 < v3 ? 153 : 152)) % 256 | v1 & -256;
}

// Address range: 0x38f929 - 0x38f92e
int64_t function_38f929(void) {
    // 0x38f929
    return function_a1727b();
}

// Address range: 0x38f963 - 0x38f96d
int64_t function_38f963(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38f963
    int64_t result; // 0x38f963
    *(int32_t *)a1 = (int32_t)result;
    char * v1 = (char *)(result + 0x66013d86); // 0x38f964
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x38fa6f - 0x38fa74
int64_t function_38fa6f(void) {
    // 0x38fa6f
    return function_175fada();
}

// Address range: 0x38fca0 - 0x38fcb3
int64_t function_38fca0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38fca0
    unknown_3d3ae4ad();
    return function_7b98fe9b();
}

// Address range: 0x38fcb9 - 0x38fcd4
int64_t function_38fcb9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x38fcb9
    *(char *)0x3d38fcd1 = *(char *)0x3d38fcd1 + (char)(a4 / 256);
    int64_t v1; // 0x38fcb9
    int64_t v2; // 0x38fcb9
    *(int32_t *)a3 = (int32_t)(int64_t)&v1 + (int32_t)v2;
    return 256 * (int64_t)*(char *)(a2 - 123) | v2 & -0xff01;
}

// Address range: 0x38fcd9 - 0x38fcde
int64_t function_38fcd9(void) {
    // 0x38fcd9
    return function_ffffffff9522ca72();
}

// Address range: 0x38fce2 - 0x38fce3
int64_t function_38fce2(int64_t a1) {
    // 0x38fce2
    int64_t result; // 0x38fce2
    return result;
}

// Address range: 0x38fd38 - 0x38fd48
int64_t function_38fd38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(unknown_69227c41(a1, a2, a3, a4) - 14); // 0x38fd40
    *v1 = *v1 + (char)a4;
    return function_1080e5e();
}

// Address range: 0x38fd69 - 0x38fd6b
int64_t function_38fd69(int64_t a1, int64_t a2) {
    // 0x38fd69
    int64_t result; // 0x38fd69
    return result;
}

// Address range: 0x38fd7f - 0x38fd80
int64_t function_38fd7f(void) {
    // 0x38fd7f
    int64_t result; // 0x38fd7f
    return result;
}

// Address range: 0x38fda9 - 0x38fdaa
int64_t function_38fda9(void) {
    // 0x38fda9
    int64_t result; // 0x38fda9
    return result;
}

// Address range: 0x38fdbb - 0x38fe24
int64_t function_38fdbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x7cd08741); // 0x38fdbb
    int64_t v2; // 0x38fdbb
    int32_t v3 = *v1 + (int32_t)v2; // 0x38fdbb
    *v1 = v3;
    int64_t result; // 0x38fdbb
    if (a4 != 1 && v3 != 0) {
        result = function_38fd7f();
    }
    int64_t v4 = a4 - 2; // 0x38fdc3
    if (v4 == 0 || v3 == 0) {
        // 0x38fdc5
        int64_t v5; // 0x38fdbb
        __asm_outsd((int16_t)a3, *(int32_t *)&v5);
        return function_38fda9();
    }
    char * v6 = (char *)(result + 0x3a8bd4f3); // 0x38fe0e
    char v7 = v2 / 256; // 0x38fe0e
    *v6 = *v6 + v7;
    int64_t v8 = result;
    *(char *)v8 = *(char *)&result - (char)v8;
    *(char *)0x78efe71f = *(char *)0x78efe71f + v7;
    char * v9 = (char *)(v2 + 0x3a00b3a5); // 0x38fe1e
    *v9 = *v9 - (char)v4;
    return result;
}

// Address range: 0x38fec8 - 0x38fee5
int64_t function_38fec8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38fec8
    *(char *)a1 = (char)(unknown_106468ce() | a1);
    *(int32_t *)-0x6eeb4121 = *(int32_t *)-0x6eeb4121 + (int32_t)a1;
    return function_ffffffffe8f7255b();
}

// Address range: 0x38fee9 - 0x38feeb
int64_t function_38fee9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38fee9
    int64_t result; // 0x38fee9
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x38feef - 0x38fef2
int64_t function_38feef(int64_t a1) {
    // 0x38feef
    int64_t result; // 0x38feef
    return result;
}

// Address range: 0x38ff67 - 0x38ff68
int64_t function_38ff67(void) {
    // 0x38ff67
    int64_t result; // 0x38ff67
    return result;
}

// Address range: 0x38ff7c - 0x38ff7f
int64_t function_38ff7c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38ff7c
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_38ff67();
}

// Address range: 0x38ff9c - 0x38ff9f
int64_t function_38ff9c(void) {
    // 0x38ff9c
    int64_t result; // 0x38ff9c
    return result;
}

// Address range: 0x38ffbf - 0x38ffd9
int64_t function_38ffbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38ffbf
    int64_t v1; // 0x38ffbf
    bool v2; // 0x38ffbf
    int64_t v3 = v1 - 0x5c50fc51 + (int64_t)v2; // 0x38ffbf
    *(int32_t *)a3 = (int32_t)(v1 | v1);
    int32_t * v4 = (int32_t *)(v1 - 98); // 0x38ffce
    *v4 = *v4 & (int32_t)v3;
    return v3 + 0xf6272ffc & 0xffffffff;
}

// Address range: 0x38fff1 - 0x390011
int64_t function_38fff1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint32_t v2 = (int32_t)a4 % 32; // 0x38fff1
    int32_t v3; // 0x38fff1
    if (v2 == 0) {
        // 0x38fff1
        v3 = a2;
    } else {
        int32_t * v4 = (int32_t *)(a2 - 0x41b98c04);
        uint32_t v5 = *v4; // 0x38fff1
        *v4 = v5 >> v2 | v5 << 32 - v2;
        v3 = *(int32_t *)&v1;
    }
    unknown_141476ff();
    *(int32_t *)a1 = v3;
    bool v6; // 0x38fff1
    int64_t v7 = v6 ? -4 : 4; // 0x38fffe
    int64_t v8; // 0x38fff1
    int32_t * v9 = (int32_t *)(v8 + a3); // 0x390005
    *v9 = *v9 - (int32_t)v8;
    int64_t result = unknown_3456bc0e(v7 + a1, v1 + v7); // 0x390008
    __asm_out_135(-16, (char)result);
    return result;
}

// Address range: 0x39009b - 0x39009e
int64_t function_39009b(void) {
    // 0x39009b
    int64_t result; // 0x39009b
    return result;
}

// Address range: 0x39011c - 0x390121
int64_t function_39011c(int64_t a1) {
    // 0x39011c
    int64_t v1; // 0x39011c
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result - (int32_t)v1;
    return result;
}

// Address range: 0x390124 - 0x390125
int64_t function_390124(int64_t a1) {
    // 0x390124
    int64_t result; // 0x390124
    return result;
}

// Address range: 0x390160 - 0x39016a
int64_t function_390160(int64_t a1) {
    // 0x390160
    int64_t result; // 0x390160
    int32_t * v1 = (int32_t *)(result - 0x17b2e90e); // 0x390160
    int32_t v2 = *v1; // 0x390160
    *v1 = 2 * v2 | (int32_t)(v2 < 0);
    return result;
}

// Address range: 0x390193 - 0x390196
int64_t function_390193(int64_t a1) {
    // 0x390193
    int64_t result; // 0x390193
    return result;
}

// Address range: 0x3901ae - 0x3901be
int64_t function_3901ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x1779dc10; // 0x3901af
    *(char *)-0x1779dc10 = v1 / 128 | 2 * v1;
    int64_t v2; // 0x3901ae
    *(char *)a4 = -1 - (char)v2;
    int64_t result; // 0x3901ae
    *(char *)result = *(char *)&result - 30;
    return result;
}

// Address range: 0x390297 - 0x3902a0
int64_t function_390297(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x390297
    int64_t result; // 0x390297
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a3;
    return result;
}

// Address range: 0x480e30 - 0x480e64
int64_t function_480e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x480e30
    int64_t v1; // 0x480e30
    uint64_t v2 = v1;
    int64_t v3 = v2 % 256 * (int64_t)*(char *)(v1 + 0x4bfd6bf5) | v2 & -0x10000; // 0x480e30
    char v4 = *(char *)(v3 + 0x7d5925dd); // 0x480e3b
    int64_t v5 = (int64_t)*(int32_t *)(a2 + 93); // 0x480e41
    int64_t v6 = 0x61f30a6d * v5; // 0x480e41
    uint32_t v7 = (int32_t)v6; // 0x480e41
    *(int64_t *)0xf1b6c6fd = v3;
    int64_t v8 = a4 & -0xff01 | (int64_t)&g2; // 0x480e49
    int32_t v9 = *(int32_t *)((a3 & -256 | (int64_t)(v4 + (char)a3)) + 67); // 0x480e4b
    int32_t v10 = v6 != 0x61f30a6d00000000 * v5 >> 32; // 0x480e4b
    uint32_t v11 = v9 + v10; // 0x480e4b
    uint32_t v12 = v7 - v11; // 0x480e4b
    bool v13 = v6 != 0x61f30a6d00000000 * v5 >> 32 ? v11 != -1 | v12 - v10 > v7 : v11 > v7; // 0x480e4b
    *(int32_t *)0x67f62a4c358b7543 = (int32_t)v3;
    char * v14 = (char *)(a2 - 81); // 0x480e57
    *v14 = *v14 + (char)(v12 / 256) + (char)v13;
    int32_t v15 = *(int32_t *)(v8 + 65) | (int32_t)v8; // 0x480e5a
    int64_t result = v3; // 0x480e5e
    if (v15 >= 0 == (v15 != 0)) {
        result = function_480df1();
    }
    // 0x480e61
    return result;
}

// Address range: 0x480ec8 - 0x480ee6
int64_t function_480ec8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x480ec8
    bool v1; // 0x480ec8
    if (a4 != 1 == v1) {
        // 0x480f12
        int64_t v2; // 0x480ec8
        return (uint64_t)v2 % 256 | 0x61025b00;
    }
    int64_t v3 = __asm_int3(); // 0x480ed9
    char v4 = *(char *)(a4 - 0x530975cc); // 0x480edd
    return v3 & -256 | (int64_t)((v4 | (char)v3) & -57);
}

// Address range: 0x480f10 - 0x480f12
int64_t function_480f10(int64_t a1, int64_t a2) {
    // 0x480f10
    int64_t result; // 0x480f10
    return result;
}

// Address range: 0x480fe8 - 0x480ffe
int64_t function_480fe8(void) {
    // 0x480fe8
    int64_t result; // 0x480fe8
    *(int16_t *)0x2b2389a6b627933c = (int16_t)result;
    return result;
}

// Address range: 0x481230 - 0x481236
int64_t function_481230(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x481230
    int64_t result; // 0x481230
    return result;
}

// Address range: 0x481250 - 0x481253
int64_t function_481250(int64_t a1) {
    // 0x481250
    int64_t result; // 0x481250
    return result;
}

// Address range: 0x4812ac - 0x4812b8
int64_t function_4812ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x640064a1); // 0x4812ac
    *v1 = 2 * *v1;
    int64_t result; // 0x4812ac
    return result;
}

// Address range: 0x481336 - 0x4813af
int64_t function_481336(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x481336
    int64_t v1; // 0x481336
    int64_t v2 = v1;
    char * v3 = (char *)(v1 - 0x5722d87d); // 0x481338
    *v3 = *v3 + (char)(a4 / 256);
    unsigned char v4 = *(char *)(2 * a1 + 0x402c5e44 + a4) | (char)a3; // 0x48133f
    if (v4 >= 1) {
        // 0x481348
        bool v5; // 0x481336
        return v1 & -256 | (int64_t)*(char *)((v5 ? -4 : 4) + a2);
    }
    // 0x48139c
    *(int64_t *)v2 = v1 ^ v2;
    unsigned char v6 = (char)a4 % 32; // 0x4813a8
    if (v6 != 0) {
        char * v7 = (char *)(a2 + 58); // 0x4813a8
        *v7 = *v7 >> v6;
    }
    char v8 = __asm_insb((int16_t)(a3 & 0xff00 | (int64_t)v4)); // 0x4813ad
    *(char *)(v1 & 0xffffffff) = v8;
    return (int64_t)(*(char *)0x8d58b972 & 114) | 0x8d58b900;
}

// Address range: 0x4813c9 - 0x4813da
int64_t function_4813c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4813c9
    int64_t result; // 0x4813c9
    __asm_outsd((int16_t)a3, (int32_t)result);
    bool v1; // 0x4813c9
    if (v1 || v1) {
        // 0x4813fd
        return result;
    }
    char * v2 = (char *)(a3 - 0x78e284d6); // 0x4813ce
    *v2 = *v2 ^ (char)result;
    return function_ffffffffea485f8c();
}

// Address range: 0x48140f - 0x481423
int64_t function_48140f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48140f
    bool v1; // 0x48140f
    if (v1) {
        // 0x481482
        int64_t result; // 0x48140f
        return result;
    }
    // 0x481411
    __asm_in_133(-97);
    return function_7c839a26((v1 ? -4 : 4) + a1, 0x2a339dd6 * a4 & 0xfffffffe);
}
