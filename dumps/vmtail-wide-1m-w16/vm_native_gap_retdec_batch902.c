/*
 * Targeted RetDec C for native executable gap queue batch 902.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x28e44c-0x28e64c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4032d1-0x4034d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4036d1-0x4038d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4038d1-0x403ad1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x403ad1-0x403cd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4547e3-0x4549e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4549e3-0x454be3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x454fe3-0x4551e3 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10db497f();
int64_t function_13c382e7();
int64_t function_18fc9002();
int64_t function_28e44c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28e4c4(int64_t a1);
int64_t function_28e53a(void);
int64_t function_28e53e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28e53f(int64_t a1, int64_t a2);
int64_t function_28e544(void);
int64_t function_28e615(void);
int64_t function_28e639(void);
int64_t function_28e644(void);
int64_t function_4032a8();
int64_t function_4032d1(void);
int64_t function_4032da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result2, int64_t a7);
int64_t function_403386(void);
int64_t function_403398(void);
int64_t function_40339d(void);
int64_t function_4033ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4033f9(void);
int64_t function_40340b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_403484(int64_t a1);
int64_t function_403494(void);
int64_t function_4034bd(int64_t a1);
int64_t function_4036d1(void);
int64_t function_403709(void);
int64_t function_403724(int64_t a1);
int64_t function_403765(void);
int64_t function_403794(void);
int64_t function_4037b2(void);
int64_t function_4037d1(void);
int64_t function_40387d(int64_t a1);
int64_t function_40393f(void);
int64_t function_403953(void);
int64_t function_40396c(void);
int64_t function_40398a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_403990(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4039aa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_403a67(int64_t a1);
int64_t function_403a8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_403b3e(int64_t a1);
int64_t function_403b75(void);
int64_t function_403b88(void);
int64_t function_403bb0(int64_t a1);
int64_t function_403bfb(void);
int64_t function_403c29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_403c76(void);
int64_t function_403c78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4547e3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_4548b4(void);
int64_t function_4548cc(int64_t a1);
int64_t function_454926(void);
int64_t function_45493b(void);
int64_t function_45495d(void);
int64_t function_4549fe(int64_t a1);
int64_t function_454a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_454b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_454b53(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_454f8f();
int64_t function_454fe3(void);
int64_t function_454ff9(void);
int64_t function_45500d(void);
int64_t function_455014(void);
int64_t function_455047(void);
int64_t function_455053(void);
int64_t function_455067(int64_t a1, int64_t a2, int64_t a3);
int64_t function_455089(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4550a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4550e2(void);
int64_t function_455131(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45513c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4d8002b5();
int64_t function_518e553();
int64_t function_6f7d5925();
int64_t function_ffffffffa84560b0();
int64_t function_ffffffffd7a8e568();
int64_t unknown_4a116248();
int64_t unknown_ffffffff83afac4a();

// Address range: 0x28e44c - 0x28e45a
int64_t function_28e44c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28e44c
    *(char *)a5 = (char)a4;
    int64_t v1; // 0x28e44c
    return v1 & -0xff01 | 256 * a4 & 0xff00;
}

// Address range: 0x28e4c4 - 0x28e4ca
int64_t function_28e4c4(int64_t a1) {
    // 0x28e4c4
    return function_518e553();
}

// Address range: 0x28e53a - 0x28e53c
int64_t function_28e53a(void) {
    // 0x28e53a
    int64_t v1; // 0x28e53a
    return function_28e53f(v1, v1);
}

// Address range: 0x28e53e - 0x28e53f
int64_t function_28e53e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28e53e
    return a4 & 0xffffffff;
}

// Address range: 0x28e53f - 0x28e542
int64_t function_28e53f(int64_t a1, int64_t a2) {
    // 0x28e53f
    int64_t result; // 0x28e53f
    *(char *)a2 = (char)(result & result);
    return result;
}

// Address range: 0x28e544 - 0x28e549
int64_t function_28e544(void) {
    // 0x28e544
    int64_t result; // 0x28e544
    __asm_out(28, (int32_t)result);
    return result;
}

// Address range: 0x28e615 - 0x28e616
int64_t function_28e615(void) {
    // 0x28e615
    int64_t result; // 0x28e615
    return result;
}

// Address range: 0x28e639 - 0x28e63c
int64_t function_28e639(void) {
    // 0x28e639
    int64_t result; // 0x28e639
    // 0x28e63b
    return result;
}

// Address range: 0x28e644 - 0x28e64a
int64_t function_28e644(void) {
    // 0x28e644
    return unknown_ffffffff83afac4a();
}

// Address range: 0x4032d1 - 0x4032d2
int64_t function_4032d1(void) {
    // 0x4032d1
    int64_t result; // 0x4032d1
    return result;
}

// Address range: 0x4032da - 0x403373
int64_t function_4032da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result2, int64_t a7) {
    // 0x4032da
    bool v1; // 0x4032da
    bool v2 = v1;
    unknown_4a116248();
    if (!v1 && !v2) {
        function_4032a8();
    }
    int64_t result = __asm_int3(); // 0x4032e2
    if (v1 || v1) {
        // 0x4032e4
        return result;
    }
    int32_t v3 = *(int32_t *)0x3fe0772c78caa17d; // 0x40334e
    if (((v2 ? 0x5e2ed49f : 0x5e2ed49e) + (int32_t)v2 + -1 - v3 & v3) < 0) {
        // 0x4032e4
        return result2;
    }
    int64_t result3 = __asm_int1(); // 0x40335f
    *(int32_t *)-0x5ddb99377bf0ef10 = (int32_t)result3;
    *(int32_t *)a2 = (int32_t)a3;
    int64_t v4; // 0x4032da
    *(int32_t *)v4 = *(int32_t *)&v4 & (int32_t)a2;
    return result3;
}

// Address range: 0x403386 - 0x403387
int64_t function_403386(void) {
    // 0x403386
    int64_t result; // 0x403386
    return result;
}

// Address range: 0x403398 - 0x40339b
int64_t function_403398(void) {
    // 0x403398
    int64_t result; // 0x403398
    return result;
}

// Address range: 0x40339d - 0x4033a2
int64_t function_40339d(void) {
    // 0x40339d
    return function_13c382e7();
}

// Address range: 0x4033ef - 0x4033f9
int64_t function_4033ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4033ef
    int64_t result; // 0x4033ef
    return result;
}

// Address range: 0x4033f9 - 0x4033fa
int64_t function_4033f9(void) {
    // 0x4033f9
    int64_t result; // 0x4033f9
    return result;
}

// Address range: 0x40340b - 0x403419
int64_t function_40340b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40340b
    int64_t result; // 0x40340b
    return result;
}

// Address range: 0x403484 - 0x403485
int64_t function_403484(int64_t a1) {
    // 0x403484
    int64_t result; // 0x403484
    return result;
}

// Address range: 0x403494 - 0x403497
int64_t function_403494(void) {
    // 0x403494
    int64_t result; // 0x403494
    return result;
}

// Address range: 0x4034bd - 0x4034be
int64_t function_4034bd(int64_t a1) {
    // 0x4034bd
    int64_t result; // 0x4034bd
    return result;
}

// Address range: 0x4036d1 - 0x4036d2
int64_t function_4036d1(void) {
    // 0x4036d1
    int64_t result; // 0x4036d1
    return result;
}

// Address range: 0x403709 - 0x40370b
int64_t function_403709(void) {
    // 0x403709
    int64_t result; // 0x403709
    return result;
}

// Address range: 0x403724 - 0x403727
int64_t function_403724(int64_t a1) {
    // 0x403724
    int64_t result; // 0x403724
    return result;
}

// Address range: 0x403765 - 0x40376a
int64_t function_403765(void) {
    // 0x403765
    return function_6f7d5925();
}

// Address range: 0x403794 - 0x403795
int64_t function_403794(void) {
    // 0x403794
    int64_t result; // 0x403794
    return result;
}

// Address range: 0x4037b2 - 0x4037b4
int64_t function_4037b2(void) {
    // 0x4037b2
    int64_t result; // 0x4037b2
    return result;
}

// Address range: 0x4037d1 - 0x4037d3
int64_t function_4037d1(void) {
    // 0x4037d1
    int64_t v1; // 0x4037d1
    return v1 ^ 170;
}

// Address range: 0x40387d - 0x403880
int64_t function_40387d(int64_t a1) {
    // 0x40387d
    int64_t result; // 0x40387d
    return result;
}

// Address range: 0x40393f - 0x403940
int64_t function_40393f(void) {
    // 0x40393f
    int64_t result; // 0x40393f
    return result;
}

// Address range: 0x403953 - 0x403954
int64_t function_403953(void) {
    // 0x403953
    int64_t result; // 0x403953
    return result;
}

// Address range: 0x40396c - 0x40396e
int64_t function_40396c(void) {
    // 0x40396c
    int64_t v1; // 0x40396c
    return function_403990(v1, v1, v1);
}

// Address range: 0x40398a - 0x403990
int64_t function_40398a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40398a
    int64_t v1; // 0x40398a
    __asm_outsb((int16_t)a3, (char)v1);
    bool v2; // 0x40398a
    return v1 - (v2 ? 0xc59cb463 : 0xc59cb462) & 0xffffffff;
}

// Address range: 0x403990 - 0x4039a7
int64_t function_403990(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x403990
    int64_t v2; // 0x403990
    int32_t v3 = v2;
    __asm_outsd(v1, v3);
    bool v4; // 0x403990
    unsigned char v5 = (char)v2 - 67 + (char)v4; // 0x403991
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x403991
    int64_t v7 = v2 & -256 | (int64_t)v5; // 0x403993
    if (v6 % 2 == 0) {
        v7 = function_40393f();
    }
    // 0x403995
    __asm_outsd(v1, v3);
    if ((v7 & 0xa8e25953) != 0) {
        function_403953();
    }
    // 0x40399d
    return function_18fc9002();
}

// Address range: 0x4039aa - 0x403a2e
int64_t function_4039aa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4039aa
    int64_t result; // 0x4039aa
    bool v1; // 0x4039aa
    if (v1 || v1) {
        // 0x4039ac
        return result;
    }
    // 0x403a26
    *(int32_t *)a1 = (int32_t)a2;
    return result & 0xffffffff;
}

// Address range: 0x403a67 - 0x403a88
int64_t function_403a67(int64_t a1) {
    // 0x403a67
    int64_t result; // 0x403a67
    bool v1; // 0x403a67
    if (true == !v1) {
        // 0x403a80
        return result;
    }
    // 0x403a6a
    return result + 0x6ee44291 & 0xffffffff;
}

// Address range: 0x403a8f - 0x403b3c
int64_t function_403a8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x403a8f
    bool v1; // 0x403a8f
    bool v2 = v1;
    int64_t v3; // 0x403a8f
    int64_t v4 = v3 & -256; // 0x403a8f
    if (v2 || (v2 ? 98 : 97) > (char)v3) {
        // 0x403ae8
        return v4 | 190;
    }
    unsigned char v5 = *(char *)(v3 + 190); // 0x403a95
    int64_t result = v4 | (int64_t)v5; // 0x403a95
    int32_t * v6 = (int32_t *)(a2 + a1); // 0x403a99
    int32_t v7 = *v6 | (int32_t)a1; // 0x403a99
    *v6 = v7;
    if (v7 == 0) {
        // 0x403a9e
        return result;
    }
    // 0x403b14
    *(char *)-0x73c58e79ceb57133 = v5;
    return result;
}

// Address range: 0x403b3e - 0x403b41
int64_t function_403b3e(int64_t a1) {
    // 0x403b3e
    int64_t result; // 0x403b3e
    return result;
}

// Address range: 0x403b75 - 0x403b76
int64_t function_403b75(void) {
    // 0x403b75
    int64_t result; // 0x403b75
    return result;
}

// Address range: 0x403b88 - 0x403b8a
int64_t function_403b88(void) {
    // 0x403b88
    int64_t result; // 0x403b88
    return result;
}

// Address range: 0x403bb0 - 0x403bb1
int64_t function_403bb0(int64_t a1) {
    // 0x403bb0
    int64_t result; // 0x403bb0
    return result;
}

// Address range: 0x403bfb - 0x403bfc
int64_t function_403bfb(void) {
    // 0x403bfb
    int64_t result; // 0x403bfb
    return result;
}

// Address range: 0x403c29 - 0x403c2f
int64_t function_403c29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result; // 0x403c29
    if (a4 == 0) {
        result = function_403bfb();
    }
    // 0x403c2b
    return result;
}

// Address range: 0x403c76 - 0x403c77
int64_t function_403c76(void) {
    // 0x403c76
    int64_t result; // 0x403c76
    return result;
}

// Address range: 0x403c78 - 0x403c8f
int64_t function_403c78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403c78
    int64_t v1; // 0x403c78
    int64_t v2 = v1;
    bool v3; // 0x403c78
    int32_t * v4 = (int32_t *)(((v2 + 42 + (int64_t)v3) % 256 | v2 & -256) - 69); // 0x403c7e
    *v4 = *v4 | 0x13717e24;
    __asm_int(10);
    return function_403c76();
}

// Address range: 0x4547e3 - 0x45489b
int64_t function_4547e3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2; // 0x4547e3
    uint64_t v3 = v2 + 0x2ef22f6e; // 0x4547e5
    *(char *)a1 = (char)v3;
    bool v4; // 0x4547e3
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x4547ea
    *(int32_t *)v5 = (int32_t)v3;
    if (llvm_ctpop_i8((char)(v3 / 256) - *(char *)(a4 + 109)) % 2 == 0) {
        int64_t v6 = v5 + (v4 ? -4 : 4); // 0x4547ed
        int64_t v7 = v3 & 0xffffffff ^ 0x7cd95fe5; // 0x454827
        *(int32_t *)(2 * v6 + a5) = (int32_t)a5;
        char * v8 = (char *)(v6 + 98); // 0x454830
        *v8 = *v8 - (char)v1;
        char v9 = (char)v7 ^ -84; // 0x454834
        unsigned char v10 = llvm_ctpop_i8(v9); // 0x454834
        int32_t * v11 = (int32_t *)(a4 + 84); // 0x454839
        *v11 = *v11 | (int32_t)v2;
        return v7 & 0xffff0000 | (int64_t)v9 | 0x4000 * (int64_t)(v9 == 0) | 0x8000 * (int64_t)(v9 < 0) | 1024 * (int64_t)(v10 % 2 == 0) | 512;
    }
    int64_t v12 = a2 ^ a1;
    int64_t v13 = v12 & 0xffffffff; // 0x4547e3
    char * v14 = (char *)(v2 - 124); // 0x4547f4
    unsigned char v15 = *v14; // 0x4547f4
    unsigned char v16 = v15 + (char)(v1 / 256); // 0x4547f4
    *v14 = v16;
    int32_t * v17 = (int32_t *)(v13 + 40); // 0x4547fb
    *v17 = *v17 | (int32_t)v2;
    *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)v2;
    *(int32_t *)(v1 - 0x83cacbd) = (int32_t)v12;
    char * v18 = (char *)(v1 + 14); // 0x45480b
    unsigned char v19 = *v18; // 0x45480b
    unsigned char v20 = (char)(a4 / 256); // 0x45480b
    *v18 = v19 - v20;
    char * v21 = (char *)(v13 - 0x7cc9d198); // 0x45480e
    *v21 = *v21 + (char)(v19 < v20) + (char)(v1 / 256);
    return (v2 + 70 + (int64_t)(v16 < v15)) % 256 | v3 & 0xffffff00;
}

// Address range: 0x4548b4 - 0x4548b5
int64_t function_4548b4(void) {
    // 0x4548b4
    int64_t result; // 0x4548b4
    return result;
}

// Address range: 0x4548cc - 0x4548cf
int64_t function_4548cc(int64_t a1) {
    // 0x4548cc
    int64_t result; // 0x4548cc
    return result;
}

// Address range: 0x454926 - 0x45492b
int64_t function_454926(void) {
    // 0x454926
    return function_10db497f();
}

// Address range: 0x45493b - 0x454941
int64_t function_45493b(void) {
    // 0x45493b
    return function_4d8002b5();
}

// Address range: 0x45495d - 0x45495f
int64_t function_45495d(void) {
    // 0x45495d
    int64_t result; // 0x45495d
    return result;
}

// Address range: 0x4549fe - 0x4549ff
int64_t function_4549fe(int64_t a1) {
    // 0x4549fe
    int64_t result; // 0x4549fe
    return result;
}

// Address range: 0x454a80 - 0x454b17
int64_t function_454a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = (int32_t)a4; // 0x454a86
    bool v2; // 0x454a80
    int32_t v3 = v2; // 0x454a86
    uint32_t v4 = v3 + (int32_t)a6; // 0x454a86
    uint32_t v5 = v1 - v4; // 0x454a86
    bool v6 = v2 ? v4 != -1 | v5 - v3 > v1 : v4 > v1; // 0x454a86
    int32_t v7 = *(int32_t *)((int64_t)v5 + 81); // 0x454a8f
    int64_t v8; // 0x454a80
    int32_t v9 = v7 + (int32_t)v8 + (int32_t)v6; // 0x454a8f
    if (v9 < 0) {
        int32_t v10 = __asm_in_134((int16_t)a3); // 0x454b08
        return (int64_t)(v10 & -256) | (int64_t)*(char *)-0x48ec5f089dbf864;
    }
    int64_t v11 = v9; // 0x454a8f
    *(int32_t *)0x150a56da8642790f = v9;
    *(int32_t *)0xeb42dd57 = -0x14bd2322;
    char * v12 = (char *)(v11 + 123 + 4 * v11); // 0x454aa4
    *v12 = *v12 + (char)v9;
    return __asm_hlt();
}

// Address range: 0x454b42 - 0x454b49
int64_t function_454b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x454b42
    int64_t v1; // 0x454b42
    int64_t v2 = v1;
    unsigned char v3 = (char)v1;
    *(char *)a4 = v3 / 2 | 128 * v3;
    bool v4; // 0x454b42
    return (v2 + 59 + (int64_t)v4) % 256 | v2 & -256;
}

// Address range: 0x454b53 - 0x454b58
int64_t function_454b53(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x454b53
    int64_t result; // 0x454b53
    return result;
}

// Address range: 0x454fe3 - 0x454fe5
int64_t function_454fe3(void) {
    // 0x454fe3
    int64_t result; // 0x454fe3
    bool v1; // 0x454fe3
    if (true == !v1) {
        result = function_454f8f();
    }
    // 0x454fe5
    return result;
}

// Address range: 0x454ff9 - 0x454ffa
int64_t function_454ff9(void) {
    // 0x454ff9
    int64_t result; // 0x454ff9
    return result;
}

// Address range: 0x45500d - 0x45500e
int64_t function_45500d(void) {
    // 0x45500d
    int64_t result; // 0x45500d
    return result;
}

// Address range: 0x455014 - 0x455016
int64_t function_455014(void) {
    // 0x455014
    int64_t result; // 0x455014
    return result;
}

// Address range: 0x455047 - 0x45504b
int64_t function_455047(void) {
    // 0x455047
    int64_t v1; // 0x455047
    return function_4550a1(v1, v1, v1, v1);
}

// Address range: 0x455053 - 0x455054
int64_t function_455053(void) {
    // 0x455053
    int64_t result; // 0x455053
    return result;
}

// Address range: 0x455067 - 0x45506e
int64_t function_455067(int64_t a1, int64_t a2, int64_t a3) {
    // 0x455067
    return function_ffffffffa84560b0();
}

// Address range: 0x455089 - 0x455091
int64_t function_455089(int64_t a1, int64_t a2, int64_t a3) {
    function_455053();
    // 0x45508b
    int64_t v1; // 0x455089
    __asm_outsb((int16_t)a3, (char)v1);
    return function_ffffffffd7a8e568();
}

// Address range: 0x4550a1 - 0x4550a7
int64_t function_4550a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4550a1
    int64_t result; // 0x4550a1
    bool v1; // 0x4550a1
    if (v1) {
        result = function_455047();
    }
    // 0x4550a3
    return result;
}

// Address range: 0x4550e2 - 0x4550e3
int64_t function_4550e2(void) {
    // 0x4550e2
    int64_t result; // 0x4550e2
    return result;
}

// Address range: 0x455131 - 0x45513c
int64_t function_455131(int64_t a1, int64_t a2, int64_t a3) {
    // 0x455131
    int64_t v1; // 0x455131
    return v1 & 0xffffffff;
}

// Address range: 0x45513c - 0x4551cd
int64_t function_45513c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45513c
    int64_t v1; // 0x45513c
    int64_t v2 = v1 & -256 | 93; // 0x45513c
    int64_t result; // 0x45513c
    bool v3; // 0x45513c
    if (v3) {
        uint32_t v4 = (int32_t)v2; // 0x455180
        uint32_t v5 = ((v1 & 0x100000) != 0 ? 0x6165ef35 : 0x6165ef34) + v4; // 0x455180
        int64_t v6 = v5; // 0x455180
        result = v6;
        if ((v1 & 0x100000) != 0 ? v5 <= v4 : v4 > 0x9e9a10cb) {
            // 0x455188
            return v6 & 0xffffff00 | (int64_t)__asm_in_133(50);
        }
    } else {
        // 0x455140
        result = v2;
        if (!v3 && !v3) {
            result = function_4550e2();
        }
    }
    // 0x455145
    return result;
}
