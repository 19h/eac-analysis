/*
 * Targeted RetDec C for native executable gap queue batch 403.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x196685-0x196885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x196a85-0x196c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x196e85-0x197085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x225c66-0x225e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x226066-0x226266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x226266-0x226466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x226466-0x226666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e3296-0x3e3496 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
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

int64_t function_1156665();
int64_t function_196685(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1966f3(void);
int64_t function_196705(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_196753(void);
int64_t function_196776(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_196792(int64_t a1, int64_t a2);
int64_t function_1967db(int64_t a1, int64_t a2);
int64_t function_1967ed(void);
int64_t function_1967f3(void);
int64_t function_19684f(void);
int64_t function_196a85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_196b09(int64_t a1);
int64_t function_196b12(int64_t a1);
int64_t function_196b46(int64_t a1, int64_t a2, int64_t a3);
int64_t function_196b98(int64_t a1);
int64_t function_196c2f(int64_t a1, int64_t a2);
int64_t function_196c48(void);
int64_t function_196c66(void);
int64_t function_196e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_196eb3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_196ed4(void);
int64_t function_196eef(void);
int64_t function_196f12(void);
int64_t function_196f19(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_196faa(int64_t a1);
int64_t function_19704e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_225c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_225d08(int64_t a1);
int64_t function_225d0b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_225d2e(void);
int64_t function_225d43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_225d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_225d96(int64_t a1, int64_t a2, int64_t a3);
int64_t function_225e35(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_22603c();
int64_t function_22605e();
int64_t function_226066(int64_t a1, int64_t a2, int64_t a3);
int64_t function_226094(int64_t a1);
int64_t function_2260b6(void);
int64_t function_2260b7(void);
int64_t function_226131(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2261a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22623b(int64_t a1);
int64_t function_226241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2262d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_226365(int64_t a1);
int64_t function_2263ac(void);
int64_t function_226419(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22648a(void);
int64_t function_2264e6(int64_t a1);
int64_t function_226513(int64_t a1, int64_t a2);
int64_t function_22653e(void);
int64_t function_226550(int64_t a1, int64_t a2);
int64_t function_226585(void);
int64_t function_22658b(void);
int64_t function_226598(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_226601(int64_t a1);
int64_t function_226604(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2ae04212();
int64_t function_3e3296(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e3322(int64_t a1);
int64_t function_3e335c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e3372(void);
int64_t function_3e33f0(void);
int64_t function_3e340c(int64_t a1);
int64_t function_3e3466(void);
int64_t function_5d1a58a7();
int64_t function_6a3e5c92();
int64_t function_6c12ebbc();
int64_t function_ffffffff83b1bbc6();
int64_t function_ffffffff97c478c9();
int64_t function_ffffffffb120c05f();
int64_t unknown_1e40b08f();
int64_t unknown_2e26902c();
int64_t unknown_30fb40f();
int64_t unknown_62294701();
int64_t unknown_9369b1();
int64_t unknown_d10133();
int64_t unknown_ffffffff89e8b71f();
int64_t unknown_ffffffffa8b75828();
int64_t unknown_ffffffffc303dba1();
int64_t unknown_ffffffffc3dbfa3e();
int64_t unknown_ffffffffdde01ea7();
int64_t unknown_fffffffff867f8af();

// Address range: 0x196685 - 0x19668d
int64_t function_196685(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x196685
    int64_t v1; // 0x196685
    int64_t v2 = v1;
    unsigned char v3 = *(char *)(v1 + 109); // 0x196685
    __asm_out(-51, (int32_t)v2);
    return (v2 - (v3 > (char)(a4 / 256) ? 42 : 41)) % 256 | v2 & -256;
}

// Address range: 0x1966f3 - 0x1966f4
int64_t function_1966f3(void) {
    // 0x1966f3
    int64_t result; // 0x1966f3
    return result;
}

// Address range: 0x196705 - 0x196752
int64_t function_196705(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x196705
    int64_t v1; // 0x196705
    uint64_t v2 = v1;
    bool v3; // 0x196705
    int32_t * v4 = (int32_t *)((256 * (v2 / 256 + a3 / 256 + (int64_t)v3) & 0xff00 | v2 & -0xff01) - 0x1ff2c07); // 0x196709
    uint32_t v5 = *v4; // 0x196709
    uint32_t v6 = v5 + (int32_t)a2; // 0x196709
    *v4 = v6;
    char * v7 = (char *)(a3 - 0x17d74f82); // 0x196712
    *v7 = 128 * (char)(v6 < v5) | *v7 / 2;
    int64_t v8; // 0x196705
    if (llvm_ctpop_i8((char)v2 + (char)a4) % 2 == 0) {
        v8 = function_1966f3();
    }
    unknown_2e26902c();
    // 0x19671e
    while ((v8 & 2) != 0) {
        // 0x196726
        unknown_2e26902c();
    }
    // 0x19672d
    *(float64_t *)(v1 + 0x1e801e8) = (float64_t)0.0;
    uint32_t v9 = (int32_t)a3; // 0x19673e
    char * v10 = (char *)(__asm_int3() + 6); // 0x196741
    *v10 = (char)(-1 - v9 < v9) + (char)a1 + *v10;
    return __asm_int1(a1);
}

// Address range: 0x196753 - 0x196755
int64_t function_196753(void) {
    // 0x196753
    int64_t v1; // 0x196753
    return function_196792(v1, v1);
}

// Address range: 0x196776 - 0x196792
int64_t function_196776(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x196776
    int64_t v1; // 0x196776
    char * v2 = (char *)(v1 + 0x545bc9c7); // 0x196776
    *v2 = *v2 ^ (char)(a3 / 256);
    int64_t v3 = function_1967db(a1, a2); // 0x196781
    int64_t v4 = v3 & -0xff01 | (int64_t)&g5; // 0x196788
    int32_t * v5 = (int32_t *)v4; // 0x19678a
    *v5 = *v5 & (-1 << (int32_t)v4 % 32) - 1;
    return __asm_iretd(a1, a2, a3) + 0x9c03d022 & 0xffffffff;
}

// Address range: 0x196792 - 0x1967b0
int64_t function_196792(int64_t a1, int64_t a2) {
    // 0x196792
    *(int32_t *)0x457c599 = *(int32_t *)0x457c599 + (int32_t)a1;
    int64_t v1; // 0x196792
    *(char *)0x4b9da8aa1501e876 = (char)v1;
    bool v2; // 0x196792
    return unknown_fffffffff867f8af((v2 ? -4 : 4) + a1);
}

// Address range: 0x1967db - 0x1967e9
int64_t function_1967db(int64_t a1, int64_t a2) {
    // 0x1967db
    int64_t result; // 0x1967db
    int32_t * v1 = (int32_t *)(result + 8 * result); // 0x1967df
    *v1 = *v1 + (int32_t)result;
    int32_t * v2 = (int32_t *)(a1 - 0x7f74f245); // 0x1967e3
    *v2 = *v2 + (int32_t)a2;
    return result;
}

// Address range: 0x1967ed - 0x1967ee
int64_t function_1967ed(void) {
    // 0x1967ed
    int64_t result; // 0x1967ed
    return result;
}

// Address range: 0x1967f3 - 0x1967f4
int64_t function_1967f3(void) {
    // 0x1967f3
    int64_t result; // 0x1967f3
    return result;
}

// Address range: 0x19684f - 0x196850
int64_t function_19684f(void) {
    // 0x19684f
    int64_t result; // 0x19684f
    return result;
}

// Address range: 0x196a85 - 0x196a92
int64_t function_196a85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x196a85
    int64_t result; // 0x196a85
    *(int32_t *)a1 = (int32_t)result + (int32_t)a1;
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x196b09 - 0x196b0f
int64_t function_196b09(int64_t a1) {
    // 0x196b09
    return unknown_30fb40f(a1);
}

// Address range: 0x196b12 - 0x196b13
int64_t function_196b12(int64_t a1) {
    // 0x196b12
    int64_t result; // 0x196b12
    return result;
}

// Address range: 0x196b46 - 0x196b4b
int64_t function_196b46(int64_t a1, int64_t a2, int64_t a3) {
    // 0x196b46
    int64_t v1; // 0x196b46
    return v1 + a2 & 0xffffffff;
}

// Address range: 0x196b98 - 0x196b99
int64_t function_196b98(int64_t a1) {
    // 0x196b98
    int64_t result; // 0x196b98
    return result;
}

// Address range: 0x196c2f - 0x196c35
int64_t function_196c2f(int64_t a1, int64_t a2) {
    // 0x196c2f
    int64_t result; // 0x196c2f
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x196c48 - 0x196c4d
int64_t function_196c48(void) {
    // 0x196c48
    int64_t result; // 0x196c48
    return result;
}

// Address range: 0x196c66 - 0x196c67
int64_t function_196c66(void) {
    // 0x196c66
    int64_t result; // 0x196c66
    return result;
}

// Address range: 0x196e85 - 0x196ea1
int64_t function_196e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x196e85
    bool v1; // 0x196e85
    if (v1 || v1) {
        function_ffffffff83b1bbc6();
    }
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x196e85
    float80_t v3; // 0x196e85
    *(int32_t *)(a3 + 0x3d01e874) = (int32_t)v3;
    uint32_t v4 = (int32_t)a3; // 0x196e94
    uint32_t v5 = (int32_t)v2 + v4; // 0x196e94
    int64_t v6 = __asm_iretd(a1, v2, (int64_t)v5); // 0x196e96
    int32_t v7 = *(int32_t *)(a1 + 0x1e868a3); // 0x196e9a
    return (int32_t)(v5 < v4) - v7 + (int32_t)v6;
}

// Address range: 0x196eb3 - 0x196eb7
int64_t function_196eb3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x196eb3
    int64_t result; // 0x196eb3
    return result;
}

// Address range: 0x196ed4 - 0x196ed5
int64_t function_196ed4(void) {
    // 0x196ed4
    int64_t result; // 0x196ed4
    return result;
}

// Address range: 0x196eef - 0x196ef0
int64_t function_196eef(void) {
    // 0x196eef
    int64_t result; // 0x196eef
    return result;
}

// Address range: 0x196f12 - 0x196f13
int64_t function_196f12(void) {
    // 0x196f12
    int64_t result; // 0x196f12
    return result;
}

// Address range: 0x196f19 - 0x196f65
int64_t function_196f19(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    char v1 = unknown_ffffffff89e8b71f() + a3 / 256; // 0x196f20
    char v2 = v1 + 124; // 0x196f20
    int64_t v3 = unknown_ffffffffa8b75828(); // 0x196f27
    if (v2 < 0 == (v2 & (v1 ^ -128)) < 0 == (v2 != 0)) {
        v3 = function_196ed4();
    }
    char * v4 = (char *)(a3 + 48); // 0x196f29
    *v4 = *v4 + (char)(v3 / 256);
    int64_t v5 = unknown_d10133(); // 0x196f2d
    unsigned char v6 = (char)a3; // 0x196f32
    unsigned char v7 = *(char *)v5 + v6; // 0x196f32
    int64_t v8 = a3 & 0xffffff00 | (int64_t)v7; // 0x196f32
    float80_t v9; // 0x196f19
    *(int16_t *)v8 = (int16_t)v9;
    int64_t v10 = v8; // 0x196f37
    if (v7 >= v6) {
        v10 = function_196f12();
    }
    char * v11 = (char *)(v10 + 0x360e000); // 0x196f3f
    *v11 = *v11 + (char)v10;
    int32_t * v12 = (int32_t *)(v5 & 0xffffff00 | 233); // 0x196f47
    int64_t v13; // 0x196f19
    *v12 = *v12 + (int32_t)v13;
    bool v14; // 0x196f19
    int32_t * v15 = (int32_t *)(a2 - 103 + a4 + (v14 ? -4 : 4)); // 0x196f4b
    *v15 = *v15 + (int32_t)a4;
    uint64_t v16 = 2 * a4 / 256 + 14 + v10; // 0x196f51
    unsigned char v17 = *(char *)0x241b576e; // 0x196f56
    unsigned char v18 = (char)v16; // 0x196f56
    char v19 = v17 + v18; // 0x196f56
    unsigned char v20 = llvm_ctpop_i8(v19); // 0x196f56
    *(char *)0x241b576e = v19;
    uint64_t v21 = 256 * (64 * (int64_t)(v19 == 0) | (int64_t)(v19 < v17) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v17 % 16 + v18 % 16 > 15) | 4 * (int64_t)(v20 % 2 == 0)) | 512; // 0x196f5c
    int64_t result = v16 % 256 | v10 & -0x10000 | v21; // 0x196f5c
    *(int32_t *)(-((v13 + a1)) & 0xffffffff) = (int32_t)result;
    char * v22 = (char *)(result + 5); // 0x196f5e
    *v22 = *v22 + (char)(v21 / 256);
    return result;
}

// Address range: 0x196faa - 0x196fb0
int64_t function_196faa(int64_t a1) {
    // 0x196faa
    int64_t result; // 0x196faa
    return result;
}

// Address range: 0x19704e - 0x197052
int64_t function_19704e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19704e
    int64_t result; // 0x19704e
    return result;
}

// Address range: 0x225c66 - 0x225cc6
int64_t function_225c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x225c66
    int64_t v1; // 0x225c66
    *(int32_t *)(a4 - 26) = (int32_t)v1;
    int64_t v2 = __asm_sti(); // 0x225c74
    int64_t v3 = v2 + 0x3d00dc64; // 0x225c75
    int32_t v4 = v1; // 0x225c81
    if ((int32_t)(((char)v3 ^ -2) < 150) + v4 < v4) {
        // 0x225c85
        return v3 & 0xffffff00 | (v2 + 250) % 256;
    }
    int32_t * v5 = (int32_t *)(a3 - 0x62100a90); // 0x225c9c
    *v5 = *v5 + (int32_t)a3;
    return (int64_t)*(int32_t *)0x56cf19013d000068;
}

// Address range: 0x225d08 - 0x225d09
int64_t function_225d08(int64_t a1) {
    // 0x225d08
    int64_t result; // 0x225d08
    return result;
}

// Address range: 0x225d0b - 0x225d0e
int64_t function_225d0b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x225d0b
    int64_t result; // 0x225d0b
    return result;
}

// Address range: 0x225d2e - 0x225d2f
int64_t function_225d2e(void) {
    // 0x225d2e
    int64_t result; // 0x225d2e
    return result;
}

// Address range: 0x225d43 - 0x225d4d
int64_t function_225d43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int32_t * v1 = (int32_t *)(a4 - 1); // 0x225d45
    *v1 = 2 * *v1;
    return result;
}

// Address range: 0x225d70 - 0x225d8e
int64_t function_225d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x225d70
    *(char *)-0x56c2c5f4 = *(char *)-0x56c2c5f4 + 1;
    *(int32_t *)0x1e8c98d = 0xacbe31c;
    int16_t v1 = a3; // 0x225d89
    int64_t v2; // 0x225d70
    __asm_out_134(v1, (int32_t)(v2 & 0xffffff00 | (int64_t)__asm_in(v1)));
    return function_225d2e();
}

// Address range: 0x225d96 - 0x225d99
int64_t function_225d96(int64_t a1, int64_t a2, int64_t a3) {
    // 0x225d96
    int64_t result; // 0x225d96
    return result;
}

// Address range: 0x225e35 - 0x225e56
int64_t function_225e35(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x225e35
    int64_t v1; // 0x225e35
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 0x2232b14); // 0x225e37
    *v3 = *v3 >> 6;
    unsigned char v4 = (char)a4 % 32; // 0x225e45
    if (v4 != 0) {
        char * v5 = (char *)(a5 - 5); // 0x225e45
        *v5 = *v5 << v4;
    }
    unsigned char v6 = *(char *)0x77b85f50; // 0x225e49
    unsigned char v7 = v6 + (char)(v2 / 256); // 0x225e49
    *(char *)0x77b85f50 = v7;
    __asm_out(97, (int32_t)a6);
    unsigned char v8 = (char)v2; // 0x225e52
    unsigned char v9 = (char)(a4 / 256); // 0x225e52
    char v10 = v7 < v6; // 0x225e52
    unsigned char v11 = v8 + v9; // 0x225e52
    char v12 = v11 + v10; // 0x225e52
    unsigned char v13 = llvm_ctpop_i8(v12); // 0x225e52
    bool v14 = v7 < v6 ? v12 <= v8 : v11 < v8; // 0x225e52
    return a6 & 0xffff00ff | 256 * (16 * (int64_t)(v8 % 16 + v9 % 16 + v10 > 15) | (int64_t)v14 | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 4 * (int64_t)(v13 % 2 == 0)) | 512;
}

// Address range: 0x226066 - 0x226094
int64_t function_226066(int64_t a1, int64_t a2, int64_t a3) {
    // 0x226066
    bool v1; // 0x226066
    if (true == !v1) {
        function_22603c();
    }
    // 0x22606d
    unknown_9369b1();
    unknown_1e40b08f();
    int64_t v2; // 0x226066
    __asm_outsb(-0x73ff, (char)v2);
    return function_6a3e5c92();
}

// Address range: 0x226094 - 0x2260b4
int64_t function_226094(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 113); // 0x22609e
    int64_t v2; // 0x226094
    *v1 = *v1 - (int32_t)v2;
    *(int32_t *)0x13d0020025d4648 = (int32_t)unknown_ffffffffdde01ea7();
    return function_5d1a58a7();
}

// Address range: 0x2260b6 - 0x2260b7
int64_t function_2260b6(void) {
    // 0x2260b6
    int64_t result; // 0x2260b6
    return result;
}

// Address range: 0x2260b7 - 0x2260b9
int64_t function_2260b7(void) {
    // 0x2260b7
    return function_22605e();
}

// Address range: 0x226131 - 0x226153
int64_t function_226131(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x226131
    int64_t v2; // 0x226131
    if (v1 != 0) {
        v2 = function_2260b6();
    }
    char * v3 = (char *)(v2 + 7); // 0x22613b
    *v3 = *v3 + ((v1 & 512) == 0 ? -39 : -38);
    int32_t * v4 = (int32_t *)(a1 + 0x428e9aa2); // 0x22614a
    int64_t v5; // 0x226131
    *v4 = *v4 + ((int32_t)v5 & -256);
    return (int64_t)*(int32_t *)0x3d0000b38ed4c0be;
}

// Address range: 0x2261a7 - 0x2261b0
int64_t function_2261a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2261a7
    *(char *)a4 = 0;
    int64_t v1; // 0x2261a7
    *(int32_t *)a1 = *(int32_t *)&v1 + (int32_t)a2;
    int64_t result; // 0x2261a7
    return result;
}

// Address range: 0x22623b - 0x226240
int64_t function_22623b(int64_t a1) {
    // 0x22623b
    int64_t v1; // 0x22623b
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x226241 - 0x2262c8
int64_t function_226241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    uint32_t v3 = (int32_t)a2; // 0x226241
    int64_t v4; // 0x226241
    uint32_t v5 = *(int32_t *)(v4 + 0x38d65000); // 0x226241
    int64_t v6; // 0x226241
    if (v5 != v3) {
        int32_t * v7 = (int32_t *)(v4 - 101); // 0x22624b
        uint32_t v8 = *v7; // 0x22624b
        int32_t v9 = v5 > v3; // 0x22624b
        int32_t v10 = v9 + v3; // 0x22624b
        int32_t v11 = v8 - v10; // 0x22624b
        *v7 = v11;
        if (v8 > v10) {
            int64_t v12 = v5 > v3 ? v10 != -1 | v8 < v11 - v9 : v8 < v10 ? 132 : 131; // 0x2262a9
            int32_t * v13 = (int32_t *)(a2 - 118); // 0x2262b0
            *v13 = *v13 + 0x67700658;
            int32_t v14 = *(int32_t *)-0x10625544; // 0x2262b5
            *(int32_t *)-0x10625544 = v14 - (int32_t)a1 + (int32_t)(23 - (char)(v1 + v12) < (char)v4);
            return 0x67700658;
        }
        uint32_t v15 = *(int32_t *)&v1; // 0x226250
        *(int32_t *)v1 = v15 / 2 | 0x80000000 * v15;
        char v16 = *(char *)0xb197259; // 0x226252
        *(char *)0xb197259 = v16 + (char)((int64_t)&g3 >> 8);
        int32_t v17 = __asm_in_135(35); // 0x226259
        int32_t * v18 = (int32_t *)((int64_t)v17 + 0xe56e8eb); // 0x22625b
        *v18 = *v18 | v3;
        char * v19 = (char *)(a1 + 87); // 0x226261
        unsigned char v20 = *v19; // 0x226261
        *v19 = v20 / 2 | 128 * v20;
        *(char *)v2 = *(char *)&v2 - (char)v17;
        v6 = v17;
    }
    // 0x226267
    *(int32_t *)0x15f631d = *(int32_t *)0x15f631d + (int32_t)v6;
    char * v21 = (char *)(__asm_int1(0x640ca50a) + 59); // 0x226278
    *v21 = *v21 | 110;
    return a2 & 0xffffffff;
}

// Address range: 0x2262d8 - 0x226334
int64_t function_2262d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2262d8
    int64_t v1; // 0x2262d8
    uint64_t v2 = v1 + 20; // 0x2262de
    int64_t v3 = v1 & -256; // 0x2262de
    int64_t v4 = v2 % 256 | v3; // 0x2262de
    *(char *)a2 = (char)(v1 / 256) + (char)a2;
    int32_t * v5 = (int32_t *)v4; // 0x2262e7
    *v5 = *v5 + (int32_t)v4;
    int32_t * v6 = (int32_t *)(a1 + 171); // 0x2262e9
    *v6 = (int32_t)v1;
    char v7 = v2; // 0x2262ef
    __asm_out_136(4, v7);
    char * v8 = (char *)(v4 + 0x60580079); // 0x2262f1
    unsigned char v9 = *v8; // 0x2262f1
    unsigned char v10 = v9 + v7; // 0x2262f1
    *v8 = v10;
    int32_t v11 = *(int32_t *)((v1 + 14 + (int64_t)(v10 < v9)) % 256 | v3); // 0x2262fe
    if (llvm_ctpop_i8((char)(v11 ^ *v6)) % 2 == 0) {
        int32_t v12 = *(int32_t *)(a2 - 48); // 0x226305
        int64_t v13; // 0x2262d8
        *(char *)v13 = *(char *)&v13 + (char)v1;
        return __asm_iretd((int64_t)(0x3ddb6000 * v12 + (int32_t)a4), a4 + a2 & 0xffffffff, a3);
    }
    // 0x226323
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v14 = (char *)(a1 - 0x4be2e307); // 0x226324
    *v14 = *v14 + (char)a4;
    uint32_t v15 = (int32_t)a4 % 32; // 0x22632f
    if (v15 != 0) {
        uint32_t v16 = *(int32_t *)0x4b00b303; // 0x22632f
        *(int32_t *)0x4b00b303 = v16 >> 32 - v15 | v16 << v15;
    }
    return v3 | 92;
}

// Address range: 0x226365 - 0x226368
int64_t function_226365(int64_t a1) {
    // 0x226365
    int64_t result; // 0x226365
    return result;
}

// Address range: 0x2263ac - 0x2263b1
int64_t function_2263ac(void) {
    // 0x2263ac
    return function_ffffffff97c478c9();
}

// Address range: 0x226419 - 0x226479
int64_t function_226419(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x226419
    *(char *)(a1 + 17) = (char)a4;
    int64_t v1; // 0x226419
    char v2 = *(char *)&v1; // 0x226427
    int64_t v3; // 0x226419
    char v4 = *(char *)&v3; // 0x226427
    bool v5; // 0x226419
    int64_t v6 = v5 ? -1 : 1; // 0x226427
    int64_t v7 = v6 + a1; // 0x226427
    int64_t v8 = v6 + a2; // 0x226427
    v3 = v7;
    v1 = v8;
    if (((v2 - v4 ^ v2) & (v4 ^ v2)) < 0) {
        // 0x22642f
        return function_ffffffffb120c05f(v7, v8);
    }
    // 0x226476
    int64_t v9; // 0x226419
    uint64_t v10 = v9 / 2; // 0x22641e
    return (v10 - v9) % 256 | v10 & 0x7fffff00;
}

// Address range: 0x22648a - 0x226491
int64_t function_22648a(void) {
    // 0x22648a
    int64_t v1; // 0x22648a
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_6c12ebbc();
}

// Address range: 0x2264e6 - 0x2264e9
int64_t function_2264e6(int64_t a1) {
    // 0x2264e6
    int64_t v1; // 0x2264e6
    return v1 & -256 | (int64_t)__asm_in_137((char)a1);
}

// Address range: 0x226513 - 0x226515
int64_t function_226513(int64_t a1, int64_t a2) {
    // 0x226513
    return a1 & 0xffffffff;
}

// Address range: 0x22653e - 0x226543
int64_t function_22653e(void) {
    // 0x22653e
    return function_2ae04212();
}

// Address range: 0x226550 - 0x226566
int64_t function_226550(int64_t a1, int64_t a2) {
    char v1 = __asm_in_137(39); // 0x226550
    int64_t v2; // 0x226550
    int64_t result = v2 & -256 | (int64_t)v1; // 0x226550
    char * v3 = (char *)(result + 3 + 4 * (int64_t)*(int32_t *)(result + v2)); // 0x226555
    *v3 = *v3 | v1;
    *(char *)-0x8b31a9a = *(char *)-0x8b31a9a + (char)(v2 / 256);
    return result;
}

// Address range: 0x226585 - 0x226588
int64_t function_226585(void) {
    // 0x226585
    int64_t result; // 0x226585
    return result;
}

// Address range: 0x22658b - 0x226598
int64_t function_22658b(void) {
    // 0x22658b
    return function_226601((int64_t)&g6);
}

// Address range: 0x226598 - 0x2265e3
int64_t function_226598(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffffc303dba1(); // 0x22659b
    unsigned char v2 = (char)v1; // 0x2265a0
    bool v3; // 0x226598
    unsigned char v4 = v3 ? -52 : -53; // 0x2265a0
    uint64_t v5 = a4 % 64; // 0x2265a5
    bool v6 = v3 | v4 > v2; // 0x2265a5
    if (v5 != 0) {
        int64_t * v7 = (int64_t *)(a2 + 0x13013d00); // 0x2265a5
        uint64_t v8 = *v7; // 0x2265a5
        int64_t v9 = v8 >> v5 | v8 << 64 - v5; // 0x2265a5
        *v7 = v9;
        v6 = v9 < 0;
    }
    unsigned char v10 = v2 - v4 | (char)&g4; // 0x2265a4
    int64_t v11; // 0x226598
    uint32_t v12 = *(int32_t *)(a2 - 37) + (int32_t)v11 + (int32_t)v6; // 0x2265ac
    int64_t v13 = *(int64_t *)(int64_t)v12; // 0x2265af
    unsigned char v14 = v10 + (char)(a3 / 256); // 0x2265b5
    int64_t v15 = v1 & 0xffff0000 | (int64_t)(int32_t)&g4 & 0xffffff00 | (int64_t)v14; // 0x2265b5
    int32_t v16 = v11; // 0x2265b8
    uint32_t v17 = 8 - v16 + (int32_t)(v14 < v10) + v12; // 0x2265b8
    char * v18 = (char *)(2 * a6 + 0x7e013dc8 + v11); // 0x2265ba
    *v18 = *v18 + (char)a3;
    char * v19 = (char *)(v13 - 88); // 0x2265c3
    char v20 = *v19; // 0x2265c3
    char v21 = v11 / 256; // 0x2265c3
    char v22 = v20 + v21; // 0x2265c3
    *v19 = v22;
    __asm_out(-43, v16);
    int64_t v23 = (int64_t)v17 - 8; // 0x2265c9
    *(int64_t *)v23 = a3 & 0xffffffff;
    if (v22 < 0 == ((v22 ^ v20) & (v22 ^ v21)) < 0 == (v22 != 0)) {
        function_226604(0x68f283c9, v13, v15, a4, a5, a6, (int64_t)&g6);
    }
    int16_t v24 = v15; // 0x2265d0
    int32_t * v25 = (int32_t *)v13; // 0x2265d0
    __asm_outsd(v24, *v25);
    *(char *)0x68f28361 = *(char *)0x68f28361 >> 1;
    int32_t * v26 = (int32_t *)(v15 + 126); // 0x2265d4
    *v26 = *v26 | (int32_t)v23 - (int32_t)&g1;
    __asm_outsd(v24, *v25);
    return v17 - 8;
}

// Address range: 0x226601 - 0x226604
int64_t function_226601(int64_t a1) {
    // 0x226601
    int64_t result; // 0x226601
    return result;
}

// Address range: 0x226604 - 0x22665e
int64_t function_226604(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x226604
    bool v1; // 0x226604
    bool v2 = v1;
    int64_t v3; // 0x226604
    char v4 = v3 / 256; // 0x22660d
    unsigned char v5 = *(char *)-0x1a8e5ec + v4; // 0x22660d
    *(char *)-0x1a8e5ec = v5;
    if (v5 >= 0) {
        unsigned char v6 = (char)a6; // 0x226605
        unsigned char v7 = *(char *)(a2 + 14) + (char)v2; // 0x226605
        bool v8 = v2 ? v7 != -1 | (char)v2 + v6 - v7 > v6 : v7 > v6; // 0x226605
        return (uint64_t)v3 % 256 | a7 & -0x10000 | a7 - (v8 ? 0x1700 : 0x1600) & 0xff00;
    }
    // 0x22661f
    unknown_62294701();
    char v9 = *(char *)0x6fb2592b; // 0x226624
    char v10 = v9 + v4; // 0x226624
    *(char *)0x6fb2592b = v10;
    if (v10 < 0 == ((v10 ^ v9) & (v10 ^ v4)) < 0) {
        // 0x22662c
        return unknown_ffffffffc3dbfa3e();
    }
    int64_t result = __asm_wait((int64_t)&g6); // 0x22664f
    *(int32_t *)a1 = (int32_t)result;
    *(char *)((v1 ? -4 : 4) + a1) = (char)result;
    *(char *)-0x8f544a1 = *(char *)-0x8f544a1 + v4;
    return result;
}

// Address range: 0x3e3296 - 0x3e3321
int64_t function_3e3296(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e3296
    int64_t v1; // 0x3e3296
    char * v2 = (char *)(v1 - 0x19c7124e); // 0x3e3296
    char v3 = *v2 | (char)a5; // 0x3e3296
    *v2 = v3;
    int64_t v4; // 0x3e3296
    __asm_outsd((int16_t)a3, *(int32_t *)&v4);
    if (v3 == 0) {
        // 0x3e32aa
        return (int64_t)*(int32_t *)0x406b8a62a3888752;
    }
    int32_t * v5 = (int32_t *)(v1 - 0x15e006dc); // 0x3e331b
    *v5 = *v5 ^ (int32_t)a1;
    int64_t v6; // 0x3e3296
    return (int64_t)&v6;
}

// Address range: 0x3e3322 - 0x3e332b
int64_t function_3e3322(int64_t a1) {
    // 0x3e3322
    __asm_wait(a1);
    return function_3e3372();
}

// Address range: 0x3e335c - 0x3e3372
int64_t function_3e335c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e335c
    int64_t v1; // 0x3e335c
    __asm_out_136(-17, (char)v1);
    return 0xe001194d;
}

// Address range: 0x3e3372 - 0x3e3379
int64_t function_3e3372(void) {
    // 0x3e3372
    int64_t v1; // 0x3e3372
    return (v1 | 108) + 0x9244951a & 0xffffff9f;
}

// Address range: 0x3e33f0 - 0x3e33f6
int64_t function_3e33f0(void) {
    // 0x3e33f0
    return function_1156665();
}

// Address range: 0x3e340c - 0x3e340f
int64_t function_3e340c(int64_t a1) {
    // 0x3e340c
    int64_t result; // 0x3e340c
    return result;
}

// Address range: 0x3e3466 - 0x3e346b
int64_t function_3e3466(void) {
    // 0x3e3466
    int64_t result; // 0x3e3466
    return result;
}
