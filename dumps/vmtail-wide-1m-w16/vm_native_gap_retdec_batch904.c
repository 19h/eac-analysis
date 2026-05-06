/*
 * Targeted RetDec C for native executable gap queue batch 904.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xdcdc7-0xdcfc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdcfc7-0xdd1c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdd1c7-0xdd3c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b8e59-0x3b9059 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b9059-0x3b9259 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b9259-0x3b9459 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b9459-0x3b9659 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b9659-0x3b9859 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
extern int g5;
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

int64_t function_2239d68();
int64_t function_3b8e59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_3b8f1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b8f6f(void);
int64_t function_3b8f8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b8f94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b8f96(int64_t a1);
int64_t function_3b8fcc(void);
int64_t function_3b9073(int64_t a1, int64_t a2);
int64_t function_3b90b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b90ea(int64_t a1, int64_t a2);
int64_t function_3b90f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b910d(int64_t a1);
int64_t function_3b9127(void);
int64_t function_3b9137(int64_t a1);
int64_t function_3b91d8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b91ed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b9201(void);
int64_t function_3b9213(void);
int64_t function_3b921f(int64_t a1);
int64_t function_3b923a(void);
int64_t function_3b924c(int64_t a1);
int64_t function_3b9274(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b92ee(void);
int64_t function_3b930a(void);
int64_t function_3b9329(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b9376(int64_t a1);
int64_t function_3b9397(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b93bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b93ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3b93e6(void);
int64_t function_3b9402(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b941a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b942b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b9465(void);
int64_t function_3b9482(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b94cf(int64_t a1);
int64_t function_3b94d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b94e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b9513(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b951a(int64_t a1);
int64_t function_3b95e2(void);
int64_t function_3b95f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b96e4(int64_t a1, int64_t a2);
int64_t function_3b971f(void);
int64_t function_3b97cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b9844(int64_t a1);
int64_t function_523ec2f();
int64_t function_71f480b8();
int64_t function_bb94a6();
int64_t function_cf3c7();
int64_t function_dcdc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dce17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dcf54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_dd0e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dd22d(void);
int64_t function_dd264(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_dd2e1(void);
int64_t function_dd2fe(void);
int64_t function_dd306(int64_t a1);
int64_t function_dd36a(void);
int64_t function_dd37a(int64_t a1, int64_t a2);
int64_t function_dd39b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ffffffff80d8923e();
int64_t function_ffffffffd8e73f43();
int64_t unknown_10538ed();
int64_t unknown_2d2226cd();
int64_t unknown_373bd13d();
int64_t unknown_61cc0237();
int64_t unknown_ffffffff96c505a9();
int64_t unknown_ffffffffaeab17d6();
int64_t unknown_ffffffffafd8f048();
int64_t unknown_ffffffffc2adb8fe();
int64_t unknown_ffffffffe3367386();
int64_t unknown_ffffffffe884bbb1();
int64_t unknown_ffffffffec159a9a();

// Address range: 0xdcdc7 - 0xdce17
int64_t function_dcdc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdcdc7
    int64_t v1; // 0xdcdc7
    return function_cf3c7(a1, a4, v1, v1, a3, v1, a2);
}

// Address range: 0xdce17 - 0xdcf54
int64_t function_dce17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdce17
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x46357435);
}

// Address range: 0xdcf54 - 0xdd0e3
int64_t function_dcf54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xdcf54
    int64_t v1; // bp-56, 0xdcf54
    int64_t v2 = (int64_t)&v1; // 0xdd016
    int64_t * v3 = (int64_t *)(v2 + 8); // 0xdd02c
    v1 = v2;
    *v3 = a7;
    int64_t * v4 = (int64_t *)(v2 + 16); // 0xdd04c
    int64_t v5 = v2 + 32; // 0xdd04c
    *(int64_t *)v5 = *v4;
    *v4 = 0x5cbb61d1;
    v1 = 0xdad82;
    *(int64_t *)(v2 + 48) = *v4;
    *v4 = a6;
    *v3 = v5;
    *(int64_t *)(v2 + 24) = v2 + 40;
    return function_cf3c7(a1, a2, a3, a4, a5, *v4, 0x7fe507ba);
}

// Address range: 0xdd0e3 - 0xdd22d
int64_t function_dd0e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = *(int64_t *)102; // 0xdd184
    *(int64_t *)78 = v1;
    *(int64_t *)62 = 62;
    *(int64_t *)70 = 86;
    *(int64_t *)94 = *(int64_t *)78;
    *(int64_t *)70 = v1;
    *(int64_t *)110 = *(int64_t *)78;
    *(int64_t *)70 = 78;
    *(int64_t *)78 = 94;
    int64_t v2; // bp-48, 0xdd0e3
    return function_cf3c7(a1, a2, a3, a4, a5, a6, (int64_t)&v2);
}

// Address range: 0xdd22d - 0xdd232
int64_t function_dd22d(void) {
    // 0xdd22d
    int64_t result; // 0xdd22d
    return result;
}

// Address range: 0xdd264 - 0xdd2d7
int64_t function_dd264(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = *(int32_t *)a2; // 0xdd2bd
    int32_t * v2 = (int32_t *)((int64_t)v1 + 1); // 0xdd2c2
    uint32_t v3 = *v2; // 0xdd2c2
    uint32_t v4 = v3 + (int32_t)a1; // 0xdd2c2
    *v2 = v4;
    int64_t result = unknown_ffffffffaeab17d6(); // 0xdd2d0
    if (v4 < v3) {
        // 0xdd2d7
        return result;
    }
    // 0xdd28c
    bool v5; // 0xdd264
    int64_t v6 = v5 ? -4 : 4; // 0xdd290
    int64_t v7; // 0xdd264
    char * v8 = (char *)(v7 + 0x3bbc266f);
    char v9 = *(char *)-0x6733a4a60d82e15c; // 0xdd2c5
    uint32_t v10 = v1; // 0xdd2bd
    int64_t v11 = a1; // 0xdd29a
    int32_t * v12 = (int32_t *)(v11 + 1); // 0xdd28c
    *v12 = *v12 | (int32_t)result;
    int64_t v13; // 0xdd264
    int64_t v14 = v13 - 8; // 0xdd28f
    *(int64_t *)v14 = a3 & -0x10000 | (int64_t)&g4 | 106;
    __asm_wait();
    int32_t v15 = unknown_ffffffffec159a9a(); // 0xdd299
    int64_t v16 = v15 >> 31; // 0xdd299
    *(int32_t *)v11 = v15;
    v11 += v6;
    int64_t v17 = unknown_ffffffff96c505a9(v11); // 0xdd2a2
    *v8 = *v8 + (char)v14;
    int32_t * v18 = (int32_t *)(v16 + 69); // 0xdd2b1
    *v18 = *v18 + (int32_t)v17;
    v10 = *(int32_t *)(v6 + (int64_t)(v10 & -256 | (int32_t)v9));
    int32_t * v19 = (int32_t *)((int64_t)v10 + 1); // 0xdd2c2
    uint32_t v20 = *v19; // 0xdd2c2
    uint32_t v21 = v20 + (int32_t)v11; // 0xdd2c2
    *v19 = v21;
    v9 = *(char *)-0x6733a4a60d82e15c;
    int64_t result2 = unknown_ffffffffaeab17d6(); // 0xdd2d0
    while (v21 >= v20) {
        // 0xdd28c
        v12 = (int32_t *)(v11 + 1);
        *v12 = *v12 | (int32_t)result2;
        v14 -= 8;
        *(int64_t *)v14 = v16 & -0x10000 | (int64_t)&g4 | 106;
        __asm_wait();
        v15 = unknown_ffffffffec159a9a();
        v16 = v15 >> 31;
        *(int32_t *)v11 = v15;
        v11 += v6;
        v17 = unknown_ffffffff96c505a9(v11);
        *v8 = *v8 + (char)v14;
        v18 = (int32_t *)(v16 + 69);
        *v18 = *v18 + (int32_t)v17;
        v10 = *(int32_t *)(v6 + (int64_t)(v10 & -256 | (int32_t)v9));
        v19 = (int32_t *)((int64_t)v10 + 1);
        v20 = *v19;
        v21 = v20 + (int32_t)v11;
        *v19 = v21;
        v9 = *(char *)-0x6733a4a60d82e15c;
        result2 = unknown_ffffffffaeab17d6();
    }
    // 0xdd2d7
    return result2;
}

// Address range: 0xdd2e1 - 0xdd2e2
int64_t function_dd2e1(void) {
    // 0xdd2e1
    int64_t result; // 0xdd2e1
    return result;
}

// Address range: 0xdd2fe - 0xdd2ff
int64_t function_dd2fe(void) {
    // 0xdd2fe
    int64_t result; // 0xdd2fe
    return result;
}

// Address range: 0xdd306 - 0xdd307
int64_t function_dd306(int64_t a1) {
    // 0xdd306
    int64_t result; // 0xdd306
    return result;
}

// Address range: 0xdd36a - 0xdd36f
int64_t function_dd36a(void) {
    // 0xdd36a
    return function_71f480b8();
}

// Address range: 0xdd37a - 0xdd387
int64_t function_dd37a(int64_t a1, int64_t a2) {
    // 0xdd37a
    int64_t result; // 0xdd37a
    return result;
}

// Address range: 0xdd39b - 0xdd3a5
int64_t function_dd39b(int64_t a1, int64_t a2, int64_t a3) {
    // 0xdd39b
    int64_t v1; // 0xdd39b
    uint64_t v2 = v1;
    *(char *)a1 = (char)v2;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x3b8e59 - 0x3b8ef1
int64_t function_3b8e59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    // 0x3b8e59
    int64_t v1; // 0x3b8e59
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a6;
    bool v5; // 0x3b8e59
    if (!v5 && !v5) {
        // 0x3b8e5c
        *(char *)(a1 + 0xa301f19) = -1;
        int32_t * v6 = (int32_t *)(a5 - 0x10fec300); // 0x3b8e66
        *v6 = *v6 | (int32_t)a2;
        char v7 = __asm_sti((int64_t)&g5); // 0x3b8e6d
        __asm_out(20, v7);
        __asm_out_133((int16_t)(v2 + 256 * a4 & 0xff00 | v2 % 256), v7);
        int64_t v8 = __asm_sti((int64_t)&g5); // 0x3b8e70
        int64_t result = v8 & -256 | (int64_t)((char)v8 - *(char *)(v8 - 120)); // 0x3b8e77
        int32_t * v9 = (int32_t *)(2 * result + 0x13d09c2); // 0x3b8e7a
        int32_t v10 = *v9 + (int32_t)(int64_t)&v4; // 0x3b8e7a
        *v9 = v10;
        if (v10 >= 0) {
            // 0x3b8e83
            return result;
        }
        int64_t result2 = unknown_ffffffffe884bbb1(); // 0x3b8eab
        *(int32_t *)-0x5b1e1649 = *(int32_t *)-0x5b1e1649 + (int32_t)a1;
        return result2;
    }
    char * v11 = (char *)(a3 + 0x1e8bd02); // 0x3b8eba
    *v11 = (char)v5 + (char)v2 + *v11;
    char v12 = a5 / 256; // 0x3b8ec3
    char v13 = *(char *)(4 * a4 + 58 + v1); // 0x3b8ec3
    unsigned char v14 = v13 + v12; // 0x3b8ec3
    int64_t result3 = unknown_2d2226cd(); // 0x3b8ec7
    uint16_t v15 = (int16_t)a4 % 32; // 0x3b8ecc
    bool v16 = ((v14 ^ v12) & (v14 ^ v13)) < 0; // 0x3b8ecc
    if (v15 != 0) {
        int16_t * v17 = (int16_t *)result3; // 0x3b8ecc
        uint16_t v18 = *v17; // 0x3b8ecc
        uint16_t v19 = v18 >> 16 - v15 | v18 << v15; // 0x3b8ecc
        *v17 = v19;
        v16 = v15 == 1 ? v19 / 0x8000 != v19 % 2 : ((v14 ^ v12) & (v14 ^ v13)) < 0;
    }
    unsigned char v20 = (char)a4 % 32; // 0x3b8ecf
    if (v20 == 0) {
        if (!v16) {
            // 0x3b8e83
            return result3;
        }
    } else {
        char * v21 = (char *)(v1 - 0x79fe1752); // 0x3b8ecf
        char v22 = *v21; // 0x3b8ecf
        char v23 = v22 << v20; // 0x3b8ecf
        *v21 = v23;
        if (!((v20 == 1 ? (v23 ^ v22 << v20 - 1) < 0 : v16))) {
            // 0x3b8e83
            return result3;
        }
    }
    uint32_t v24 = *(int32_t *)&v3; // 0x3b8ee1
    uint32_t v25 = v24 + (int32_t)a1; // 0x3b8ee1
    *(int32_t *)v3 = v25;
    if (v25 >= v24) {
        int32_t * v26 = (int32_t *)(v3 - 115); // 0x3b8ea3
        *v26 = *v26 + (int32_t)a4;
        return result3 & -0xff01 | (int64_t)&g3;
    }
    int32_t * v27 = (int32_t *)((256 * (int64_t)v14 | a5 & -0xff01) + 0x3cff7b59); // 0x3b8ee9
    *v27 = *v27 + (int32_t)v1;
    *(int32_t *)a1 = (int32_t)result3;
    return result3;
}

// Address range: 0x3b8f1d - 0x3b8f25
int64_t function_3b8f1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b8f1d
    int64_t result; // 0x3b8f1d
    return result;
}

// Address range: 0x3b8f6f - 0x3b8f70
int64_t function_3b8f6f(void) {
    // 0x3b8f6f
    int64_t result; // 0x3b8f6f
    return result;
}

// Address range: 0x3b8f8d - 0x3b8f93
int64_t function_3b8f8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b8f8d
    int64_t v1; // 0x3b8f8d
    __asm_out_133((int16_t)a3, (char)v1);
    return function_3b8f96((int64_t)&g5);
}

// Address range: 0x3b8f94 - 0x3b8f96
int64_t function_3b8f94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b8f94
    int64_t result; // 0x3b8f94
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x3b8f96 - 0x3b8f99
int64_t function_3b8f96(int64_t a1) {
    // 0x3b8f96
    int64_t result; // 0x3b8f96
    return result;
}

// Address range: 0x3b8fcc - 0x3b8fcd
int64_t function_3b8fcc(void) {
    // 0x3b8fcc
    int64_t result; // 0x3b8fcc
    return result;
}

// Address range: 0x3b9073 - 0x3b9095
int64_t function_3b9073(int64_t a1, int64_t a2) {
    // 0x3b9073
    int64_t result; // 0x3b9073
    __asm_out(-29, (char)result);
    return result;
}

// Address range: 0x3b90b0 - 0x3b90cb
int64_t function_3b90b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b90b0
    int64_t v1; // 0x3b90b0
    uint64_t v2 = v1;
    *(char *)v2 = (char)(v2 / 256) + (char)v2;
    int64_t v3; // 0x3b90b0
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 | (char)v4;
    bool v5; // 0x3b90b0
    int64_t v6 = v5 ? -1 : 1; // 0x3b90b7
    int64_t v7 = v6 + a1; // 0x3b90b7
    v3 = __asm_int1(v7);
    int64_t v8; // 0x3b90b0
    *(char *)v7 = *(char *)&v8;
    int64_t v9 = v6 + a2;
    v8 = v9;
    __asm_outsb((int16_t)a3, *(char *)v9);
    int64_t v10 = v3;
    int32_t v11 = *(int32_t *)(a4 + 0x44122e5c + v9); // 0x3b90c4
    return v11 + (int32_t)((v10 + 144) % 256 | v10 & 0xffffff00);
}

// Address range: 0x3b90ea - 0x3b90ed
int64_t function_3b90ea(int64_t a1, int64_t a2) {
    // 0x3b90ea
    int64_t result; // 0x3b90ea
    *(int32_t *)a1 = (int32_t)result - 1;
    return result;
}

// Address range: 0x3b90f9 - 0x3b90fd
int64_t function_3b90f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b90f9
    int64_t result; // 0x3b90f9
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x3b910d - 0x3b9110
int64_t function_3b910d(int64_t a1) {
    // 0x3b910d
    int64_t result; // 0x3b910d
    return result;
}

// Address range: 0x3b9127 - 0x3b912c
int64_t function_3b9127(void) {
    // 0x3b9127
    return function_2239d68();
}

// Address range: 0x3b9137 - 0x3b913a
int64_t function_3b9137(int64_t a1) {
    // 0x3b9137
    int64_t v1; // 0x3b9137
    return v1 & -227;
}

// Address range: 0x3b91d8 - 0x3b91dd
int64_t function_3b91d8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b91d8
    int64_t v1; // 0x3b91d8
    return v1 & 0xffffffff;
}

// Address range: 0x3b91ed - 0x3b9201
int64_t function_3b91ed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3b91ed
    int64_t v1; // 0x3b91ed
    int64_t result = 2 * v1 & 0xffffffff; // 0x3b91ed
    char v2 = *(char *)(a4 - 94); // 0x3b91ef
    char v3 = *(char *)(a2 - 0x343eac7f); // 0x3b91f2
    char * v4 = (char *)(4 * v1 - 24 + result); // 0x3b91f8
    *v4 = *v4 + (char)a3;
    int32_t * v5 = (int32_t *)((256 * (int64_t)(v2 | (char)(a4 / 256)) | a4 & -0x10000 | (int64_t)(v3 | (char)a4)) - 110); // 0x3b91fc
    *v5 = *v5 + (int32_t)v1;
    return result;
}

// Address range: 0x3b9201 - 0x3b9206
int64_t function_3b9201(void) {
    // 0x3b9201
    return function_ffffffff80d8923e();
}

// Address range: 0x3b9213 - 0x3b9216
int64_t function_3b9213(void) {
    // 0x3b9213
    int64_t result; // 0x3b9213
    return result;
}

// Address range: 0x3b921f - 0x3b9222
int64_t function_3b921f(int64_t a1) {
    // 0x3b921f
    int64_t result; // 0x3b921f
    return result;
}

// Address range: 0x3b923a - 0x3b923b
int64_t function_3b923a(void) {
    // 0x3b923a
    int64_t result; // 0x3b923a
    return result;
}

// Address range: 0x3b924c - 0x3b9250
int64_t function_3b924c(int64_t a1) {
    // 0x3b924c
    bool v1; // 0x3b924c
    if (!v1) {
        function_3b923a();
    }
    // 0x3b924e
    int64_t v2; // 0x3b924c
    return v2 & 0xffffffff;
}

// Address range: 0x3b9274 - 0x3b929d
int64_t function_3b9274(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b9274
    int64_t v1; // 0x3b9274
    int32_t * v2 = (int32_t *)(v1 + 2); // 0x3b9274
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)0xb31744be14e00a = (int32_t)v1;
    int64_t v3 = (unknown_ffffffffe3367386() & 0xffff00ff | (int64_t)(int32_t)"cxa_get_globals_fast") + 2 * v1; // 0x3b9289
    int64_t v4 = v3 & 0xffffffff; // 0x3b9289
    int32_t * v5 = (int32_t *)(a3 + 0xab1054); // 0x3b928b
    *v5 = *v5 + (int32_t)v3;
    char * v6 = (char *)v4; // 0x3b9291
    *v6 = *v6 + (char)v3;
    return v4 ^ 0x798000;
}

// Address range: 0x3b92ee - 0x3b92ef
int64_t function_3b92ee(void) {
    // 0x3b92ee
    int64_t result; // 0x3b92ee
    return result;
}

// Address range: 0x3b930a - 0x3b930d
int64_t function_3b930a(void) {
    // 0x3b930a
    int64_t result; // 0x3b930a
    return result;
}

// Address range: 0x3b9329 - 0x3b9361
int64_t function_3b9329(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)a4; // 0x3b9329
    int64_t v2; // 0x3b9329
    *v1 = (char)(v2 ^ v2);
    int64_t v3; // 0x3b9329
    unsigned char v4 = *(char *)&v3; // 0x3b932b
    *v1 = v4 / 128 | 2 * v4;
    int64_t v5; // 0x3b9329
    char * v6 = (char *)(v5 - 0x7dd6f7ef); // 0x3b932d
    *v6 = (char)(a4 / 256);
    int32_t * v7 = (int32_t *)(v5 - 33); // 0x3b933a
    uint32_t v8 = *v7; // 0x3b933a
    int32_t v9 = a3; // 0x3b933a
    uint32_t v10 = v8 + v9; // 0x3b933a
    *v7 = v10;
    unsigned char v11 = *(char *)(a3 - 39) + (char)a4 + (char)(v10 < v8); // 0x3b933d
    int64_t v12 = 256 * (int64_t)*v6 | a4 & -0x10000 | (int64_t)v11; // 0x3b933d
    v3 = v12;
    int64_t result = __asm_in(-24); // 0x3b9340
    *(int32_t *)v5 = *(int32_t *)&v5 + v9;
    int64_t v13 = v5;
    *(int32_t *)(v13 + 85) = (int32_t)v13;
    int32_t * v14 = (int32_t *)(v12 - 0x5b75c59c); // 0x3b9348
    *v14 = 256 * *v14;
    unsigned char v15 = v11 % 32; // 0x3b934f
    if (v15 != 0) {
        int64_t v16 = 4 * result - 24;
        *(char *)(v3 + v16) = *(char *)(v16 + v12) << v15;
    }
    int32_t * v17 = (int32_t *)(result - 107); // 0x3b9353
    *v17 = *v17 + (int32_t)v5;
    *(int64_t *)((v2 & 0xffffffff) - 8) = 0x13d0000;
    int64_t v18 = v3 - 1; // 0x3b935b
    v3 = v18;
    if (v18 == 0) {
        // 0x3b935d
        return function_3b92ee();
    }
    // 0x3b93a4
    return result;
}

// Address range: 0x3b9376 - 0x3b9379
int64_t function_3b9376(int64_t a1) {
    // 0x3b9376
    int64_t v1; // 0x3b9376
    return function_3b93ca(v1, v1, v1, v1);
}

// Address range: 0x3b9397 - 0x3b93a4
int64_t function_3b9397(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b9397
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x3b9397
    int32_t * v2 = (int32_t *)(v1 + 8 * v1); // 0x3b939a
    bool v3; // 0x3b9397
    *v2 = (int32_t)v3 - (int32_t)v1 + *v2;
    char * v4 = (char *)(v1 + 0x77013d82); // 0x3b939d
    *v4 = *v4 + (char)v1;
    return __asm_wait();
}

// Address range: 0x3b93bb - 0x3b93c8
int64_t function_3b93bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b93bb
    *(int32_t *)0x7f16cbc2 = *(int32_t *)0x7f16cbc2 + (int32_t)a1;
    int64_t v1; // 0x3b93bb
    unsigned char v2 = llvm_ctpop_i8((char)(v1 & a4)); // 0x3b93c3
    int64_t result = 0x10000 * (int32_t)v1 >> 16; // 0x3b93c6
    if (v2 % 2 == 0) {
        result = function_3b9402(a3 & 0xffffffff, a2, a3);
    }
    // 0x3b93c8
    return result;
}

// Address range: 0x3b93ca - 0x3b93dc
int64_t function_3b93ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3b93ca
    int64_t v1; // 0x3b93ca
    int32_t * v2 = (int32_t *)(a4 + 0x4f09a34 + 8 * v1); // 0x3b93ca
    uint32_t v3 = *v2; // 0x3b93ca
    uint32_t v4 = v3 + (int32_t)a2; // 0x3b93ca
    *v2 = v4;
    int64_t result; // 0x3b93ca
    if (v4 < v3) {
        result = function_3b93bb(a1, a2, a3, a4);
    }
    int32_t * v5 = (int32_t *)(result - 25); // 0x3b93d3
    *v5 = *v5 + (int32_t)v1;
    char * v6 = (char *)(v1 - 0x563324ae); // 0x3b93d6
    *v6 = *v6 | (char)(a3 / 256);
    return result;
}

// Address range: 0x3b93e6 - 0x3b93e7
int64_t function_3b93e6(void) {
    // 0x3b93e6
    int64_t result; // 0x3b93e6
    return result;
}

// Address range: 0x3b9402 - 0x3b940a
int64_t function_3b9402(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b9402
    int64_t result; // 0x3b9402
    int64_t v1 = result;
    bool v2; // 0x3b9402
    __writefsbyte(v1, __readfsbyte(v1) + (char)a3 + (char)v2);
    char * v3 = (char *)(a1 + 124); // 0x3b9405
    *v3 = *v3 + (char)v1;
    return result;
}

// Address range: 0x3b941a - 0x3b941c
int64_t function_3b941a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b941a
    int64_t result; // 0x3b941a
    return result;
}

// Address range: 0x3b942b - 0x3b944c
int64_t function_3b942b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3b942b
    int64_t v1; // 0x3b942b
    int64_t v2 = v1;
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a4;
    char * v3 = (char *)(((v2 + 24) % 256 | v2 & -256) - 0x7dc5d840); // 0x3b9430
    *v3 = *v3 + (char)(a4 / 256);
    unknown_373bd13d();
    int64_t v4; // 0x3b942b
    *(char *)a4 = *(char *)&v4 + (char)v1;
    *(int32_t *)unknown_ffffffffafd8f048() = (int32_t)a2;
    return function_3b93e6();
}

// Address range: 0x3b9465 - 0x3b946b
int64_t function_3b9465(void) {
    // 0x3b9465
    return function_bb94a6();
}

// Address range: 0x3b9482 - 0x3b9488
int64_t function_3b9482(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b9482
    return function_523ec2f();
}

// Address range: 0x3b94cf - 0x3b94d0
int64_t function_3b94cf(int64_t a1) {
    // 0x3b94cf
    int64_t result; // 0x3b94cf
    return result;
}

// Address range: 0x3b94d1 - 0x3b94d6
int64_t function_3b94d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b94d1
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x3b94d1
    return v1 & -256 | 25;
}

// Address range: 0x3b94e7 - 0x3b9513
int64_t function_3b94e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_10538ed(); // 0x3b94e7
    float80_t v2; // 0x3b94e7
    *(int16_t *)(a3 + 0x145fbcc6) = (int16_t)v2;
    int64_t v3; // 0x3b94e7
    *(char *)v3 = (char)((int32_t)v1 / 256);
    unknown_ffffffffc2adb8fe();
    uint64_t v4 = __asm_iretd(); // 0x3b94fd
    *(int32_t *)0x7ff2f5d1 = *(int32_t *)0x7ff2f5d1 + (int32_t)v4;
    *(char *)a1 = __asm_insb((int16_t)a3);
    unsigned char v5 = *(char *)(v4 % 256 + v3); // 0x3b9510
    return 0x10000 * (int32_t)(v4 & 0xff00 | (int64_t)v5) >> 16;
}

// Address range: 0x3b9513 - 0x3b9517
int64_t function_3b9513(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b9513
    return a2 & 0xffffffff;
}

// Address range: 0x3b951a - 0x3b951b
int64_t function_3b951a(int64_t a1) {
    // 0x3b951a
    int64_t result; // 0x3b951a
    return result;
}

// Address range: 0x3b95e2 - 0x3b95e3
int64_t function_3b95e2(void) {
    // 0x3b95e2
    int64_t result; // 0x3b95e2
    return result;
}

// Address range: 0x3b95f6 - 0x3b96a2
int64_t function_3b95f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3b95f6
    int64_t result; // 0x3b95f6
    bool v1; // 0x3b95f6
    if (!v1) {
        // 0x3b95f8
        return result;
    }
    uint32_t v2 = *(int32_t *)-0x36e9191b; // 0x3b9627
    uint32_t v3 = v2 + (int32_t)result; // 0x3b9627
    *(int32_t *)-0x36e9191b = v3;
    uint64_t v4 = a4 - 1; // 0x3b962d
    int64_t result2; // 0x3b95f6
    int32_t * v5; // 0x3b963f
    if (v4 != 0 && v3 != 0) {
        // 0x3b963f
        v5 = (int32_t *)v4;
        *v5 = *v5 + (int32_t)a2;
        return result2;
    }
    int64_t v6 = unknown_61cc0237(); // 0x3b9631
    if (v3 < v2) {
        // 0x3b969e
        *(int32_t *)a3 = (int32_t)result + (int32_t)a3;
        return (v6 + v4 / 256) % 256 | v6 & -256;
    }
    // 0x3b9638
    result2 = v6;
    if (v4 == 0) {
        result2 = function_3b95e2();
    }
    // 0x3b963f
    v5 = (int32_t *)v4;
    *v5 = *v5 + (int32_t)a2;
    return result2;
}

// Address range: 0x3b96e4 - 0x3b96e9
int64_t function_3b96e4(int64_t a1, int64_t a2) {
    // 0x3b96e4
    int64_t result; // 0x3b96e4
    return result;
}

// Address range: 0x3b971f - 0x3b9722
int64_t function_3b971f(void) {
    // 0x3b971f
    int64_t result; // 0x3b971f
    return result;
}

// Address range: 0x3b97cf - 0x3b97df
int64_t function_3b97cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b97cf
    return function_ffffffffd8e73f43();
}

// Address range: 0x3b9844 - 0x3b9846
int64_t function_3b9844(int64_t a1) {
    // 0x3b9844
    return __asm_sti(a1);
}
