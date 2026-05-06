/*
 * Targeted RetDec C for native executable gap queue batch 597.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3863a8-0x3865a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3865a8-0x3867a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3867a8-0x3869a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x386ba8-0x386da8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x412342-0x412542 rank=- name=- kind=- bytes=- uncovered=-
 *   0x412542-0x412742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x412942-0x412b42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x412b42-0x412d42 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_3863a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_386524(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38665d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3867a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_38693c(void);
int64_t function_386ba8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_386cec(void);
int64_t function_386d0b(void);
int64_t function_386d0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_386d11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_386d19(int64_t a1);
int64_t function_386d36(int64_t result);
int64_t function_412342(void);
int64_t function_412374(void);
int64_t function_4123b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4123c3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4123e0(void);
int64_t function_4123e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41243b(int64_t a1);
int64_t function_412461(void);
int64_t function_41246d(int64_t a1);
int64_t function_412490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4124da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41252f(void);
int64_t function_412550(void);
int64_t function_412575(void);
int64_t function_41259d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4125c7(void);
int64_t function_4125c9(void);
int64_t function_4125d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_412602(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_41273b(void);
int64_t function_412942(void);
int64_t function_412945(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_412959(int64_t a1);
int64_t function_412962(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_412974(void);
int64_t function_41297d(void);
int64_t function_41298a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41299a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4129ac(int64_t a1);
int64_t function_4129d3(int64_t a1);
int64_t function_4129da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_412a1c(void);
int64_t function_412a1e(void);
int64_t function_412a61(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_412b11(void);
int64_t function_412b41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_412bc5(void);
int64_t function_412bd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_412be3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_412be8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_412bfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_412c8a(int64_t a1);
int64_t function_412cd0(int64_t a1);
int64_t function_42232f1b();
int64_t function_cc59c();
int64_t function_ffffffff8c857d74();
int64_t function_ffffffff9f408702();

// Address range: 0x3863a8 - 0x386524
int64_t function_3863a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3863a8
    int64_t v1; // 0x3863a8
    return function_cc59c(a1, a2, a3, v1, a5, v1, 0x37c209);
}

// Address range: 0x386524 - 0x38665d
int64_t function_386524(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x386524
    int64_t v1; // bp-56, 0x386524
    int64_t v2 = (int64_t)&v1; // 0x3865f3
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x3865ff
    bool v4; // 0x386524
    *v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x386629
    int64_t v6 = *v5; // 0x386629
    v1 = v6;
    *(int64_t *)(v2 - 8) = v6;
    int64_t v7 = *v3; // 0x386642
    *v5 = v7;
    v1 = v7;
    int64_t v8; // 0x386524
    return function_cc59c(a1, a2, a3, 0x666b4b81, v8, v8, 0x37c454);
}

// Address range: 0x38665d - 0x3867a5
int64_t function_38665d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x38665d
    int64_t v1; // bp-32, 0x38665d
    int64_t v2 = (int64_t)&v1; // 0x3866dd
    int64_t v3 = v2 - 8; // 0x3866e9
    int64_t * v4 = (int64_t *)v3; // 0x3866e9
    *v4 = 0x6661aae6;
    int64_t v5 = v2 - 24; // 0x3866f2
    int64_t * v6 = (int64_t *)v5; // 0x3866fd
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x386703
    int64_t * v8 = (int64_t *)(v2 - 16); // 0x386703
    *v8 = v7;
    *v6 = v7;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x38670a
    *v9 = v7;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x386719
    int64_t v11 = *v10; // 0x386719
    *v8 = v11;
    *v6 = a3;
    *v9 = v5;
    *v9 = a4;
    int64_t * v12 = (int64_t *)(v2 - 40); // 0x386740
    *v12 = a1;
    *v6 = v7;
    *v4 = v7;
    *v6 = 0x5a1b5abe;
    *v9 = 0x46c4e92;
    *v12 = v11;
    *v10 = *v6;
    *v9 = v3;
    *v12 = *v6;
    int64_t v13 = *v6; // 0x386786
    int64_t v14 = *(int64_t *)v13; // 0x38678a
    *(int64_t *)(v13 - 8) = v14;
    *(int64_t *)(v13 - 16) = v14;
    return function_cc59c(a1, a2, *v6, *v9, a5, a6, 0x37c6c7);
}

// Address range: 0x3867a5 - 0x3868ca
int64_t function_3867a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3867a5
    int64_t v1; // bp-40, 0x3867a5
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3867a5
    return function_cc59c(a1, v2, a3, a4, a5, a6, 0x7acdaea5);
}

// Address range: 0x38693c - 0x38693f
int64_t function_38693c(void) {
    // 0x38693c
    int64_t result; // 0x38693c
    return result;
}

// Address range: 0x386ba8 - 0x386cb4
int64_t function_386ba8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x386ba8
    int64_t v1; // 0x386ba8
    int64_t v2 = (int64_t)&v1; // 0x386bcd
    int64_t v3 = v2 - 8; // 0x386be5
    int64_t * v4 = (int64_t *)v3; // 0x386be5
    int64_t v5 = v2 - 16; // 0x386bea
    int64_t * v6 = (int64_t *)v5; // 0x386c03
    *v6 = v5;
    *v4 = a7;
    int64_t v7 = *(int64_t *)(v2 + 32); // 0x386c0f
    *v4 = v7;
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 + 16); // 0x386c1b
    int64_t v9 = *v8; // 0x386c1b
    *v4 = v9;
    *v6 = v9;
    int64_t v10 = v2 - 24; // 0x386c22
    int64_t * v11 = (int64_t *)v10; // 0x386c22
    *v11 = v7;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = v9;
    *v11 = v3;
    *v8 = *v6;
    *v6 = 0x1d7f9820;
    *v11 = a1;
    *v6 = v2;
    *v6 = *v4;
    *(int64_t *)(v2 - 32) = v10;
    *v11 = v3;
    int64_t v12; // 0x386ba8
    return function_cc59c(*v6, a2, a3, a4, a5, v12, 0x37d0a8);
}

// Address range: 0x386cec - 0x386cee
int64_t function_386cec(void) {
    // 0x386cec
    return function_386d36((int64_t)&g1);
}

// Address range: 0x386d0b - 0x386d0c
int64_t function_386d0b(void) {
    // 0x386d0b
    int64_t result; // 0x386d0b
    return result;
}

// Address range: 0x386d0c - 0x386d11
int64_t function_386d0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x386d0c
    int64_t v1; // 0x386d0c
    char * v2 = (char *)(v1 - 127); // 0x386d0c
    *v2 = *v2 | (char)a4;
    return function_386d19((int64_t)&g1);
}

// Address range: 0x386d11 - 0x386d19
int64_t function_386d11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x386d11
    int64_t v1; // 0x386d11
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 121); // 0x386d13
    unsigned char v4 = *v3; // 0x386d13
    unsigned char v5 = v4 + (char)a4; // 0x386d13
    *v3 = v5;
    return (v2 - (v5 < v4 ? 37 : 36)) % 256 | v2 & -256;
}

// Address range: 0x386d19 - 0x386d35
int64_t function_386d19(int64_t a1) {
    // 0x386d19
    int64_t result; // 0x386d19
    return result;
}

// Address range: 0x386d36 - 0x386da8
int64_t function_386d36(int64_t result) {
    // 0x386d36
    return result;
}

// Address range: 0x412342 - 0x412343
int64_t function_412342(void) {
    // 0x412342
    int64_t result; // 0x412342
    return result;
}

// Address range: 0x412374 - 0x412377
int64_t function_412374(void) {
    // 0x412374
    int64_t result; // 0x412374
    return result;
}

// Address range: 0x4123b8 - 0x4123bc
int64_t function_4123b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4123b8
    int64_t result; // 0x4123b8
    return result;
}

// Address range: 0x4123c3 - 0x4123de
int64_t function_4123c3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4123c3
    *(int32_t *)(a3 - 0x180619cb) = -0x20b289db;
    int64_t result; // 0x4123c3
    return result;
}

// Address range: 0x4123e0 - 0x4123e2
int64_t function_4123e0(void) {
    // 0x4123e0
    int64_t result; // 0x4123e0
    return result;
}

// Address range: 0x4123e7 - 0x41240d
int64_t function_4123e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4123e7
    int64_t v1; // 0x4123e7
    bool v2; // 0x4123e7
    return v1 + 0x3b041ebe + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x41243b - 0x412444
int64_t function_41243b(int64_t a1) {
    // 0x41243b
    int64_t result; // 0x41243b
    return result;
}

// Address range: 0x412461 - 0x412463
int64_t function_412461(void) {
    // 0x412461
    int64_t v1; // 0x412461
    return function_4124da(v1, v1, v1, v1, v1);
}

// Address range: 0x41246d - 0x412472
int64_t function_41246d(int64_t a1) {
    // 0x41246d
    bool v1; // 0x41246d
    *(char *)a1 = (char)v1;
    int64_t result; // 0x41246d
    return result;
}

// Address range: 0x412490 - 0x4124bf
int64_t function_412490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x412490
    bool v2; // 0x412490
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)(a1 + 0x41827262); // 0x412490
        uint32_t v4 = *v3; // 0x412490
        *v3 = v4 >> v1 | (int32_t)v2 << 32 - v1 | (int32_t)((int64_t)v4 << (int64_t)(33 - v1));
    }
    int64_t v5 = v2 ? -1 : 1; // 0x412496
    int64_t v6 = v5 + a2; // 0x412496
    char * v7 = (char *)(a4 + 0x52076b48 + v6); // 0x4124a8
    *v7 = *v7 & (char)a3;
    __asm_sti(v5 + a1, v6);
    return function_42232f1b();
}

// Address range: 0x4124da - 0x4124df
int64_t function_4124da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4124da
    int64_t result; // 0x4124da
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x41252f - 0x412536
int64_t function_41252f(void) {
    // 0x41252f
    return function_ffffffff9f408702();
}

// Address range: 0x412550 - 0x412552
int64_t function_412550(void) {
    // 0x412550
    int64_t result; // 0x412550
    return result;
}

// Address range: 0x412575 - 0x412577
int64_t function_412575(void) {
    // 0x412575
    int64_t result; // 0x412575
    return result;
}

// Address range: 0x41259d - 0x4125c5
int64_t function_41259d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x4125a3
    *(char *)a1 = __asm_insb(v1);
    if (llvm_ctpop_i8((char)a4 + 42) % 2 == 0) {
        // 0x4125c4
        return __asm_iretd();
    }
    uint32_t result = 0x10000 * __asm_in(30) >> 16; // 0x4125bd
    __asm_out(v1, (char)result);
    return result;
}

// Address range: 0x4125c7 - 0x4125c8
int64_t function_4125c7(void) {
    // 0x4125c7
    int64_t result; // 0x4125c7
    return result;
}

// Address range: 0x4125c9 - 0x4125cb
int64_t function_4125c9(void) {
    // 0x4125c9
    int64_t result; // 0x4125c9
    return result;
}

// Address range: 0x4125d8 - 0x412602
int64_t function_4125d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4125d8
    int64_t v1; // 0x4125d8
    int64_t v2 = v1;
    bool v3; // 0x4125d8
    uint32_t v4 = (int32_t)(v2 + 6 + (int64_t)v3 & 77 | v2 & 0x2eb7eb00) | -0x2eb7eb4e; // 0x4125e0
    uint32_t v5 = *(int32_t *)((a3 & -256 | 254) + a1); // 0x4125e8
    uint32_t v6 = v4 - v5; // 0x4125e8
    int64_t result = v6; // 0x4125e8
    int32_t * v7 = (int32_t *)(a1 + 53); // 0x4125eb
    *v7 = *v7 + (int32_t)a2 + (int32_t)(v4 < v5);
    *(char *)a1 = (char)v6;
    int32_t * v8 = (int32_t *)(2 * v1 + 108 + result); // 0x4125fc
    *v8 = 0x10000 * *v8;
    return result;
}

// Address range: 0x412602 - 0x412720
int64_t function_412602(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    bool v2; // 0x412602
    if (v2) {
        int64_t result = __asm_wait(); // 0x412604
        *(char *)(a3 + 0x34b1007c) = (char)(a3 / 256);
        return result;
    }
    uint32_t v3 = (int32_t)a1; // 0x41261d
    int32_t v4 = v3 + 0x88bb584; // 0x41261d
    if (((v4 ^ v3) & (v3 ^ -0x80000000)) < 0) {
        int64_t v5 = function_4125c7(); // 0x412623
        return (v5 + (v3 < 0xf7744a7c ? 82 : 81)) % 256 | v5 & -256;
    }
    if (v4 == 0) {
        // 0x41267e
        return __asm_in(4);
    }
    // 0x412637
    __asm_outsd((int16_t)a3, (int32_t)a2);
    unsigned char v6 = (char)(a3 / 256); // 0x41263c
    unsigned char v7 = (char)a4 + v6; // 0x41263c
    int16_t v8 = 256 * (int64_t)v7 | a3 % 256; // 0x41263e
    __asm_outsb(v8, (char)a2);
    int64_t v9 = a4 - 1; // 0x41263f
    int64_t v10; // 0x412602
    if (v9 != 0 == v7 == 0) {
        int32_t * v11 = (int32_t *)(a4 + 85); // 0x4126be
        int32_t v12 = *v11; // 0x4126be
        *v11 = (int32_t)(v10 & 0xffffff00 | a2 % 256) + (int32_t)(v7 < v6) + v12;
        __asm_wait();
        return __asm_int3() - v1 & 0xffffffff;
    }
    uint32_t v13 = *(int32_t *)(v10 - 112) | (int32_t)v10; // 0x41261a
    int64_t v14 = (int64_t)*(int32_t *)v9; // 0x412643
    int64_t v15 = 19 * v14; // 0x412643
    char * v16 = (char *)((int64_t)v13 + 94); // 0x412649
    *v16 = *v16 ^ (char)v13;
    __asm_outsb(v8, *(char *)&v1);
    return (v15 + 242 + (int64_t)(v15 != 0x1300000000 * v14 >> 32)) % 256 | v15 & 0xffffff00;
}

// Address range: 0x41273b - 0x412742
int64_t function_41273b(void) {
    // 0x41273b
    int64_t v1; // 0x41273b
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x412942 - 0x412944
int64_t function_412942(void) {
    // 0x412942
    int64_t result; // 0x412942
    float80_t v1; // 0x412942
    *(int16_t *)result = (int16_t)v1;
    return result;
}

// Address range: 0x412945 - 0x412954
int64_t function_412945(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x412945
    int64_t v1; // 0x412945
    return function_412962(a1, a2, a3 % 256 % 256 | a3 & -256, v1);
}

// Address range: 0x412959 - 0x412962
int64_t function_412959(int64_t a1) {
    // 0x412959
    int64_t v1; // 0x412959
    return v1 + 0x1fbdc6af & 0xffffff00 | (int64_t)__asm_in_134((char)a1);
}

// Address range: 0x412962 - 0x41296e
int64_t function_412962(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x412962
    int64_t v1; // 0x412962
    char * v2 = (char *)(v1 - 0x48899562); // 0x412964
    *v2 = *v2 + (char)v1;
    return __asm_sti(a1, a2);
}

// Address range: 0x412974 - 0x41297b
int64_t function_412974(void) {
    // 0x412974
    int64_t result; // 0x412974
    char * v1 = (char *)(result - 0x7fb4a816); // 0x412974
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x41297d - 0x41297e
int64_t function_41297d(void) {
    // 0x41297d
    int64_t result; // 0x41297d
    return result;
}

// Address range: 0x41298a - 0x41298f
int64_t function_41298a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 31); // 0x41298a
    *v1 = *v1 - (char)a3;
    return function_4129da(a1, a2, a3);
}

// Address range: 0x41299a - 0x4129a3
int64_t function_41299a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41299a
    int64_t v1; // 0x41299a
    return v1 & -256 | 39;
}

// Address range: 0x4129ac - 0x4129ad
int64_t function_4129ac(int64_t a1) {
    // 0x4129ac
    int64_t result; // 0x4129ac
    return result;
}

// Address range: 0x4129d3 - 0x4129d7
int64_t function_4129d3(int64_t a1) {
    // 0x4129d3
    int64_t result; // 0x4129d3
    return result;
}

// Address range: 0x4129da - 0x4129e2
int64_t function_4129da(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a1 & 0xffffffff; // 0x4129e0
    bool v1; // 0x4129da
    if (!v1) {
        result = function_41297d();
    }
    // 0x4129e2
    return result;
}

// Address range: 0x412a1c - 0x412a1d
int64_t function_412a1c(void) {
    // 0x412a1c
    int64_t result; // 0x412a1c
    return result;
}

// Address range: 0x412a1e - 0x412a1f
int64_t function_412a1e(void) {
    // 0x412a1e
    int64_t result; // 0x412a1e
    return result;
}

// Address range: 0x412a61 - 0x412b05
int64_t function_412a61(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x412a61
    int64_t v1; // 0x412a61
    int32_t * v2 = (int32_t *)(v1 + 0x25e3f83c); // 0x412a61
    bool v3; // 0x412a61
    *v2 = *v2 - (v3 ? 0x7b18e076 : 0x7b18e075);
    unsigned char v4 = (char)v1; // 0x412a6b
    char v5 = v4 - 59; // 0x412a6b
    int64_t v6 = v1 & -256; // 0x412a6f
    if (v5 < 0 == ((v5 ^ v4) & v4 + 69) < 0) {
        v6 = function_412a1c();
    }
    int64_t v7 = v6;
    while (v4 > 58) {
        // 0x412a6f
        v6 = v7;
        if (v5 < 0 == ((v5 ^ v4) & v4 + 69) < 0) {
            v6 = function_412a1c();
        }
        // 0x412a71
        v7 = v6;
    }
    int32_t * v8 = (int32_t *)(a4 + 0x2371b3bc); // 0x412a73
    *v8 = *v8 + (int32_t)v1;
    uint32_t v9 = (int32_t)v7 >> 31; // 0x412a79
    char * v10 = (char *)((int64_t)v9 + 88); // 0x412a7a
    *v10 = *v10 - (char)(a4 / 256);
    if (a4 != 1) {
        function_412a1e();
    }
    char * v11 = (char *)(a2 + 0x1cdb21f6); // 0x412a83
    *v11 = *v11 + (char)v1;
    *(int32_t *)(v1 + a1 & 0xffffffff) = __asm_insd((int16_t)v9);
    return 0x10000 * (int32_t)__asm_wait() >> 16;
}

// Address range: 0x412b11 - 0x412b12
int64_t function_412b11(void) {
    // 0x412b11
    int64_t result; // 0x412b11
    return result;
}

// Address range: 0x412b41 - 0x412b79
int64_t function_412b41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_int3(); // 0x412b46
    int16_t v1 = a3; // 0x412b47
    int64_t v2; // 0x412b41
    __asm_outsb(v1, (char)v2);
    int32_t v3 = result; // 0x412b48
    if ((int32_t)v2 >= v3) {
        // 0x412b4c
        return 0x10000 * v3 >> 16;
    }
    // 0x412b74
    bool v4; // 0x412b41
    *(char *)((v4 ? -4 : 4) + a1) = __asm_insb(v1);
    return result;
}

// Address range: 0x412bc5 - 0x412bca
int64_t function_412bc5(void) {
    // 0x412bc5
    return function_ffffffff8c857d74();
}

// Address range: 0x412bd3 - 0x412bd9
int64_t function_412bd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x412bd3
    int64_t result; // 0x412bd3
    return result;
}

// Address range: 0x412be3 - 0x412be8
int64_t function_412be3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x412be3
    int64_t result; // 0x412be3
    return result;
}

// Address range: 0x412be8 - 0x412bf4
int64_t function_412be8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x412be8
    int64_t v1; // 0x412be8
    uint64_t result = v1;
    char * v2 = (char *)(a4 - 0x506dbaa8); // 0x412be8
    bool v3; // 0x412be8
    *v2 = (char)v3 - (char)(result / 256) + *v2;
    return result;
}

// Address range: 0x412bfa - 0x412c81
int64_t function_412bfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t result; // 0x412bfa
    bool v2; // 0x412bfa
    if (v2) {
        // 0x412bfd
        return result;
    }
    unsigned char v3 = (char)a4 % 32; // 0x412c6b
    if (v3 != 0) {
        char * v4 = (char *)(a3 + 0x68d5119c); // 0x412c6b
        *v4 = *v4 >> v3;
    }
    int32_t * v5 = (int32_t *)(result + 0x337c1ec); // 0x412c72
    *v5 = *v5 - (int32_t)result;
    *(int64_t *)((result & 0xffffffff) - 8) = a1;
    return (int64_t)&v1;
}

// Address range: 0x412c8a - 0x412c8b
int64_t function_412c8a(int64_t a1) {
    // 0x412c8a
    int64_t result; // 0x412c8a
    return result;
}

// Address range: 0x412cd0 - 0x412cd3
int64_t function_412cd0(int64_t a1) {
    // 0x412cd0
    int64_t result; // 0x412cd0
    return result;
}
