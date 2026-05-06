/*
 * Targeted RetDec C for native executable gap queue batch 540.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d925a-0x1d945a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d945a-0x1d965a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d965a-0x1d985a rank=- name=- kind=- bytes=- uncovered=-
 *   0x241418-0x241618 rank=- name=- kind=- bytes=- uncovered=-
 *   0x241618-0x241818 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b2b75-0x2b2d75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b2d75-0x2b2f75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b3175-0x2b3375 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g7;
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
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

int64_t function_1d91e2();
int64_t function_1d925a(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1d925e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d9379(void);
int64_t function_1d938d(int64_t a1);
int64_t function_1d939b(void);
int64_t function_1d93f4(int64_t a1);
int64_t function_1d93ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d945d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d94b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d94d4(void);
int64_t function_1d94d9(int64_t a1);
int64_t function_1d94de(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d950c(int64_t a1);
int64_t function_1d9540(void);
int64_t function_1d955d(void);
int64_t function_1d957b(int64_t a1);
int64_t function_1d9595(void);
int64_t function_1d95e3(int64_t a1);
int64_t function_1d963c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1d965d(void);
int64_t function_1d969b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d96c4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d96f0(void);
int64_t function_1d96f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d974d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d97c9(int64_t a1);
int64_t function_1d97cb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d983b(int64_t a1);
int64_t function_1d984c(void);
int64_t function_1d9851(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1da3049f();
int64_t function_205c4b3();
int64_t function_241418(void);
int64_t function_241457(int64_t a1);
int64_t function_241486(void);
int64_t function_2414a6(void);
int64_t function_2414ad(void);
int64_t function_241568(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2415c7(void);
int64_t function_2415cd(int64_t a1, int64_t a2);
int64_t function_24162b(void);
int64_t function_241634(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24166f(void);
int64_t function_2416e3(void);
int64_t function_2416fd(int64_t a1);
int64_t function_241716(void);
int64_t function_24178a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2417e1(int64_t a1);
int64_t function_241806(int64_t a1);
int64_t function_2b2b75(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2b2be0(void);
int64_t function_2b2c08(void);
int64_t function_2b2c0c(void);
int64_t function_2b2c17(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2b2c31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b2cc9(int64_t a1);
int64_t function_2b2d8f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2b2e18(void);
int64_t function_2b2e24(void);
int64_t function_2b2e6c(int64_t a1);
int64_t function_2b2e81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b2e9e(void);
int64_t function_2b2eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b3175(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b319f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b31bb(void);
int64_t function_2b31d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b320c(int64_t a1);
int64_t function_2b321a(int64_t a1, int64_t a2);
int64_t function_2b325f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b3280(int64_t a1);
int64_t function_2b3286(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b32da(int64_t a1);
int64_t function_689bfbda();
int64_t function_9d977c();
int64_t function_ffffffff9b3fd1b6();
int64_t unknown_322e9c25();
int64_t unknown_3a2126d9();
int64_t unknown_3a2cd6a7();
int64_t unknown_3a2dbee4();
int64_t unknown_3aabae3e();
int64_t unknown_517e70be();
int64_t unknown_5e19ad8c();
int64_t unknown_ffffffff89dda031();
int64_t unknown_ffffffff90a62ace();
int64_t unknown_ffffffff91d7a9e6();
int64_t unknown_ffffffffa040c99f();
int64_t unknown_ffffffffc3f35905();
int64_t unknown_ffffffffc400739c();
int64_t unknown_ffffffffe85b4eaa();

// Address range: 0x1d925a - 0x1d925d
int64_t function_1d925a(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1d925a
    int64_t result; // 0x1d925a
    char * v1 = (char *)(8 * result + a1); // 0x1d925a
    *v1 = *v1 & (char)(a3 / 256);
    return result;
}

// Address range: 0x1d925e - 0x1d9266
int64_t function_1d925e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d925e
    int64_t result; // 0x1d925e
    bool v1; // 0x1d925e
    if (a4 != 1 == v1) {
        result = function_1d91e2();
    }
    // 0x1d9260
    return result;
}

// Address range: 0x1d9379 - 0x1d937a
int64_t function_1d9379(void) {
    // 0x1d9379
    int64_t result; // 0x1d9379
    return result;
}

// Address range: 0x1d938d - 0x1d9399
int64_t function_1d938d(int64_t a1) {
    // 0x1d938d
    int64_t v1; // 0x1d938d
    int64_t result = v1 & -0xff01 | (int64_t)&g6; // 0x1d938d
    uint32_t v2 = *(int32_t *)(result + 8); // 0x1d938f
    float80_t v3; // 0x1d938d
    *(float64_t *)((int64_t)v2 - 0xa64fe18) = (float64_t)v3;
    return result;
}

// Address range: 0x1d939b - 0x1d93a0
int64_t function_1d939b(void) {
    // 0x1d939b
    return function_689bfbda();
}

// Address range: 0x1d93f4 - 0x1d93f7
int64_t function_1d93f4(int64_t a1) {
    // 0x1d93f4
    int64_t result; // 0x1d93f4
    return result;
}

// Address range: 0x1d93ff - 0x1d940c
int64_t function_1d93ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x1d93ff
    int64_t v2; // 0x1d93ff
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)(v2 - 0x4a7eff2d); // 0x1d93ff
        *v3 = *v3 << v1;
    }
    *(int32_t *)a1 = (int32_t)v2;
    bool v4; // 0x1d93ff
    return function_1da3049f((v4 ? -4 : 4) + a1);
}

// Address range: 0x1d945d - 0x1d945f
int64_t function_1d945d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d945d
    int64_t result; // 0x1d945d
    return result;
}

// Address range: 0x1d94b4 - 0x1d94bb
int64_t function_1d94b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d94b4
    int64_t v1; // 0x1d94b4
    int64_t result = v1 & -256 | 226; // 0x1d94b4
    char * v2 = (char *)result; // 0x1d94b6
    bool v3; // 0x1d94b4
    *v2 = *v2 + (char)a4 + (char)v3;
    return result;
}

// Address range: 0x1d94d4 - 0x1d94d5
int64_t function_1d94d4(void) {
    // 0x1d94d4
    int64_t result; // 0x1d94d4
    return result;
}

// Address range: 0x1d94d9 - 0x1d94dc
int64_t function_1d94d9(int64_t a1) {
    // 0x1d94d9
    int64_t result; // 0x1d94d9
    return result;
}

// Address range: 0x1d94de - 0x1d950c
int64_t function_1d94de(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d94de
    int64_t v1; // 0x1d94de
    int64_t v2 = v1;
    int64_t v3 = unknown_ffffffff91d7a9e6(); // 0x1d94e0
    *(char *)v2 = (char)v2 | 24;
    char v4 = v3; // 0x1d94e8
    int64_t v5; // 0x1d94de
    char v6 = *(char *)&v5; // 0x1d94e8
    int64_t v7 = v3; // 0x1d94ea
    if (((v4 - v6 ^ v4) & (v6 ^ v4)) < 0) {
        v7 = function_1d94d4();
    }
    int32_t * v8 = (int32_t *)(a2 - 0x17b197b1); // 0x1d94ec
    *v8 = *v8 + (int32_t)v1;
    char v9 = *(char *)(v7 + 0x7a180002); // 0x1d94f9
    int64_t v10 = unknown_ffffffffc3f35905(); // 0x1d94ff
    unsigned char v11 = *(char *)(a3 & -256 | (int64_t)(v9 | (char)a3)); // 0x1d9504
    int16_t v12 = v10; // 0x1d9504
    int16_t v13 = v11; // 0x1d9504
    return v10 & -0x10000 | (int64_t)(v12 / v13 % 256) | (int64_t)(256 * (v12 % v13));
}

// Address range: 0x1d950c - 0x1d9519
int64_t function_1d950c(int64_t a1) {
    // 0x1d950c
    return function_205c4b3(a1);
}

// Address range: 0x1d9540 - 0x1d9542
int64_t function_1d9540(void) {
    // 0x1d9540
    int64_t result; // 0x1d9540
    return result;
}

// Address range: 0x1d955d - 0x1d9560
int64_t function_1d955d(void) {
    // 0x1d955d
    int64_t result; // 0x1d955d
    return result;
}

// Address range: 0x1d957b - 0x1d957e
int64_t function_1d957b(int64_t a1) {
    // 0x1d957b
    int64_t result; // 0x1d957b
    return result;
}

// Address range: 0x1d9595 - 0x1d9596
int64_t function_1d9595(void) {
    // 0x1d9595
    int64_t result; // 0x1d9595
    return result;
}

// Address range: 0x1d95e3 - 0x1d95e8
int64_t function_1d95e3(int64_t a1) {
    // 0x1d95e3
    int64_t result; // 0x1d95e3
    bool v1; // 0x1d95e3
    if (!v1) {
        result = function_1d9595();
    }
    // 0x1d95e5
    return result;
}

// Address range: 0x1d963c - 0x1d965a
int64_t function_1d963c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_3aabae3e(); // 0x1d963c
    *(char *)a4 = (char)(a4 / 256);
    return v1 & -256 | (int64_t)*(char *)0x1e80e6309e800;
}

// Address range: 0x1d965d - 0x1d965e
int64_t function_1d965d(void) {
    // 0x1d965d
    int64_t result; // 0x1d965d
    return result;
}

// Address range: 0x1d969b - 0x1d96c4
int64_t function_1d969b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a2 + 0x292f3a02); // 0x1d969b
    unknown_3a2cd6a7();
    *(int32_t *)0x1be2aeb6 = *(int32_t *)0x1be2aeb6 + (int32_t)a1;
    int64_t v2; // 0x1d969b
    int32_t * v3 = (int32_t *)(v2 - 0x63f57781); // 0x1d96bc
    int32_t v4 = *v3; // 0x1d96bc
    *v3 = v4 + (int32_t)(a4 & 0xffffff00 | (int64_t)(v1 & (char)a4));
    return function_1d965d();
}

// Address range: 0x1d96c4 - 0x1d96f0
int64_t function_1d96c4(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 0x2c67bbab); // 0x1d96c7
    int64_t v2; // 0x1d96c4
    *v1 = *v1 + (int32_t)v2;
    *(int32_t *)a1 = (int32_t)unknown_3a2126d9();
    bool v3; // 0x1d96c4
    int64_t v4 = v3 ? -4 : 4; // 0x1d96d8
    int64_t v5 = 76; // bp-8, 0x1d96d9
    int64_t v6 = (int64_t)&v5 & a3;
    int64_t v7; // 0x1d96c4
    __asm_outsd((int16_t)v6, *(int32_t *)&v7);
    unknown_3a2dbee4();
    return function_1d96f5(v4 + a1, a2, v6 & 0xfffffff8, v2, v2, (int64_t)&g7);
}

// Address range: 0x1d96f0 - 0x1d96f5
int64_t function_1d96f0(void) {
    // 0x1d96f0
    int64_t result; // 0x1d96f0
    return result;
}

// Address range: 0x1d96f5 - 0x1d9712
int64_t function_1d96f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1d96f5
    int64_t v1; // 0x1d96f5
    *(int32_t *)a3 = 2 * (int32_t)v1;
    int32_t * v2 = (int32_t *)(a2 - 24); // 0x1d96fd
    *v2 = *v2 ^ 0x7d1c4801;
    return __asm_wait();
}

// Address range: 0x1d974d - 0x1d975f
int64_t function_1d974d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)a3; // 0x1d974d
    int64_t v2; // 0x1d974d
    *v1 = (int32_t)v2 + (int32_t)a1;
    int64_t v3; // 0x1d974d
    *v1 = *(int32_t *)&v3 + (int32_t)v2;
    return function_9d977c();
}

// Address range: 0x1d97c9 - 0x1d97ca
int64_t function_1d97c9(int64_t a1) {
    // 0x1d97c9
    int64_t result; // 0x1d97c9
    return result;
}

// Address range: 0x1d97cb - 0x1d97d1
int64_t function_1d97cb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d97cb
    int64_t result; // 0x1d97cb
    return result;
}

// Address range: 0x1d983b - 0x1d983c
int64_t function_1d983b(int64_t a1) {
    // 0x1d983b
    int64_t result; // 0x1d983b
    return result;
}

// Address range: 0x1d984c - 0x1d984e
int64_t function_1d984c(void) {
    // 0x1d984c
    int64_t result; // 0x1d984c
    return result;
}

// Address range: 0x1d9851 - 0x1d9855
int64_t function_1d9851(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1d9851
    int64_t result; // 0x1d9851
    int64_t v1 = result;
    char * v2 = (char *)(v1 - 78 + 4 * v1); // 0x1d9851
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x241418 - 0x241431
int64_t function_241418(void) {
    // 0x241418
    int64_t v1; // 0x241418
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2;
    unknown_517e70be();
    return unknown_322e9c25() & -256 | (int64_t)*(char *)0x2201e8b84cc88e75;
}

// Address range: 0x241457 - 0x241458
int64_t function_241457(int64_t a1) {
    // 0x241457
    int64_t result; // 0x241457
    return result;
}

// Address range: 0x241486 - 0x24148b
int64_t function_241486(void) {
    // 0x241486
    return unknown_5e19ad8c();
}

// Address range: 0x2414a6 - 0x2414ac
int64_t function_2414a6(void) {
    // 0x2414a6
    int64_t result; // 0x2414a6
    return result;
}

// Address range: 0x2414ad - 0x2414af
int64_t function_2414ad(void) {
    // 0x2414ad
    return function_2414a6();
}

// Address range: 0x241568 - 0x241597
int64_t function_241568(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x241568
    int64_t v1; // 0x241568
    int64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = v1 & -256 | (int64_t)*(char *)0x6f2f090f00b3efc7; // 0x241568
    *(char *)-0x74e38387 = *(char *)-0x74e38387 + (char)(v3 / 256);
    char v5 = *(char *)(v4 + 2); // 0x241578
    char * v6 = (char *)((a3 & 0xffffff00 | (int64_t)(v5 + (char)a3)) + 38); // 0x24157c
    *v6 = *v6 | (char)a4;
    __asm_iretd();
    uint32_t v7 = (int32_t)a4 % 32; // 0x241591
    if (v7 != 0) {
        uint32_t v8 = (int32_t)v4; // 0x24157b
        int64_t v9; // 0x241568
        uint32_t v10 = *(int32_t *)&v9 + v8; // 0x241582
        uint32_t v11 = *(int32_t *)0x841ecb1a; // 0x241591
        bool v12 = (int32_t)v2 < (int32_t)v3 ? v10 + (int32_t)((int32_t)v2 < (int32_t)v3) <= v8 : v10 < v8; // 0x241582
        *(int32_t *)0x841ecb1a = v11 >> v7 | (int32_t)((int64_t)v11 << (int64_t)(33 - v7)) | (int32_t)v12 << 32 - v7;
    }
    bool v13; // 0x241568
    int64_t v14 = (v13 ? -4 : 4) + a1; // 0x241593
    *(char *)v14 = *(char *)a5;
    int64_t v15 = v13 ? -1 : 1; // 0x241594
    return function_2415cd(v14 + v15, v15 + a5);
}

// Address range: 0x2415c7 - 0x2415cd
int64_t function_2415c7(void) {
    // 0x2415c7
    return unknown_ffffffff90a62ace();
}

// Address range: 0x2415cd - 0x2415d2
int64_t function_2415cd(int64_t a1, int64_t a2) {
    // 0x2415cd
    int64_t result; // 0x2415cd
    *(char *)a2 = (char)(result | result);
    return result;
}

// Address range: 0x24162b - 0x241634
int64_t function_24162b(void) {
    // 0x24162b
    return unknown_ffffffff89dda031();
}

// Address range: 0x241634 - 0x241658
int64_t function_241634(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x241634
    *(int32_t *)a3 = (int32_t)a4 + (int32_t)a3;
    int64_t v1; // 0x241634
    int64_t result = v1 + 0x7fc514c6 & 0xffffff00; // 0x241649
    char * v2 = (char *)result; // 0x241654
    *v2 = *v2 + 94;
    return result;
}

// Address range: 0x24166f - 0x241674
int64_t function_24166f(void) {
    // 0x24166f
    int64_t result; // 0x24166f
    int64_t v1 = result;
    *(char *)v1 = (char)v1 + 1;
    return result;
}

// Address range: 0x2416e3 - 0x2416e6
int64_t function_2416e3(void) {
    // 0x2416e3
    int64_t result; // 0x2416e3
    return result;
}

// Address range: 0x2416fd - 0x2416fe
int64_t function_2416fd(int64_t a1) {
    // 0x2416fd
    int64_t result; // 0x2416fd
    return result;
}

// Address range: 0x241716 - 0x24171b
int64_t function_241716(void) {
    // 0x241716
    int64_t v1; // 0x241716
    return v1 & -0xff01 | (int64_t)&g5;
}

// Address range: 0x24178a - 0x2417bb
int64_t function_24178a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24178a
    *(char *)-0x4cbc396e = *(char *)-0x4cbc396e + (char)a1;
    int64_t v1; // 0x24178a
    *(char *)a1 = (char)v1;
    bool v2; // 0x24178a
    int64_t v3 = v2 ? -1 : 1; // 0x241791
    int64_t v4 = v3 + a1; // 0x241791
    unknown_ffffffffc400739c(v4);
    int64_t v5 = v4 + v3; // 0x241797
    int64_t v6 = v3 + a2; // 0x241797
    unknown_ffffffffa040c99f(v5, v6);
    int64_t result = unknown_ffffffffe85b4eaa(); // 0x2417a4
    *(int32_t *)-0x27d4f050 = *(int32_t *)-0x27d4f050 + (int32_t)v5;
    int32_t * v7 = (int32_t *)v6; // 0x2417b6
    *v7 = *v7 + (int32_t)v1;
    return result;
}

// Address range: 0x2417e1 - 0x2417e4
int64_t function_2417e1(int64_t a1) {
    // 0x2417e1
    int64_t result; // 0x2417e1
    return result;
}

// Address range: 0x241806 - 0x241809
int64_t function_241806(int64_t a1) {
    // 0x241806
    int64_t result; // 0x241806
    return result;
}

// Address range: 0x2b2b75 - 0x2b2b88
int64_t function_2b2b75(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2b2b75
    int64_t v1; // 0x2b2b75
    bool v2; // 0x2b2b75
    uint64_t v3 = v1 - a4 / 256 + (int64_t)v2; // 0x2b2b75
    int64_t result = v3 % 256 | v1 & -256; // 0x2b2b75
    int32_t * v4 = (int32_t *)(v1 + 104 + v1); // 0x2b2b77
    *v4 = *v4 + (int32_t)a3;
    char * v5 = (char *)result; // 0x2b2b7b
    *v5 = *v5 + (char)v3;
    return result;
}

// Address range: 0x2b2be0 - 0x2b2be1
int64_t function_2b2be0(void) {
    // 0x2b2be0
    int64_t result; // 0x2b2be0
    return result;
}

// Address range: 0x2b2c08 - 0x2b2c09
int64_t function_2b2c08(void) {
    // 0x2b2c08
    int64_t result; // 0x2b2c08
    return result;
}

// Address range: 0x2b2c0c - 0x2b2c0d
int64_t function_2b2c0c(void) {
    // 0x2b2c0c
    int64_t result; // 0x2b2c0c
    return result;
}

// Address range: 0x2b2c17 - 0x2b2c31
int64_t function_2b2c17(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2b2c17
    int64_t v1; // 0x2b2c17
    int64_t v2 = v1;
    uint64_t v3 = a3 / 256; // 0x2b2c17
    char v4 = v3; // 0x2b2c17
    int64_t result = __asm_sti(); // 0x2b2c20
    if (((v4 - (char)v2 ^ v4) & (char)(v2 ^ v3)) < 0) {
        result = function_2b2c08();
    }
    // 0x2b2c22
    float80_t v5; // 0x2b2c17
    *(int16_t *)result = (int16_t)v5;
    return result;
}

// Address range: 0x2b2c31 - 0x2b2cb2
int64_t function_2b2c31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b2c35
    return function_2b2c0c();
    uint32_t v1 = __asm_in(48); // 0x2b2cad
    bool v2; // 0x2b2c31
    return ((int64_t)v1 - (v2 ? 47 : 46)) % 256 | (int64_t)(v1 & -256);
}

// Address range: 0x2b2cc9 - 0x2b2cca
int64_t function_2b2cc9(int64_t a1) {
    // 0x2b2cc9
    int64_t result; // 0x2b2cc9
    return result;
}

// Address range: 0x2b2d8f - 0x2b2e01
int64_t function_2b2d8f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3 & 0xffffffff ^ 22; // 0x2b2d90
    int64_t v2 = v1; // 0x2b2d90
    int64_t v3; // 0x2b2d8f
    *(char *)0x226c1599 = *(char *)0x226c1599 + (char)(v3 / 256);
    int32_t * v4 = (int32_t *)(a2 - 0x6087af02);
    uint32_t v5 = *v4; // 0x2b2d98
    uint32_t v6 = (int32_t)a4 % 32; // 0x2b2d98
    v2 = v1;
    if (v6 != 0) {
        *v4 = v5 >> v6 | v5 << 32 - v6;
    }
    int64_t v7 = v2 + 0x125a9430; // 0x2b2d9e
    char * v8 = (char *)(a2 - 48 + (v7 & 0xffffffff)); // 0x2b2da5
    *v8 = *v8 + (char)(a4 / 256);
    uint16_t v9 = (int16_t)v7; // 0x2b2dae
    uint16_t v10 = (int16_t)*(char *)(2 * a1 - 0x17fc0c8d); // 0x2b2dae
    int32_t * v11 = (int32_t *)(v3 - 115); // 0x2b2db5
    int32_t v12 = *v11; // 0x2b2db5
    *v11 = v12 + (int32_t)(v7 & 0xffff0000 | (int64_t)(v9 / v10 % 256) | (int64_t)(256 * (v9 % v10)));
    int64_t v13 = (int64_t)(*(int32_t *)(a2 - 122) ^ (int32_t)v3); // 0x2b2db8
    __asm_iretd();
    *(int32_t *)a2 = (int32_t)a2 - (int32_t)a1;
    uint32_t v14 = *(int32_t *)0x13d90d400ab58da; // 0x2b2dbf
    int64_t v15 = v14; // 0x2b2dbf
    *(int64_t *)(v13 - 8) = v15;
    char v16 = *(char *)&v2; // 0x2b2dcf
    *(char *)(v3 & 0xffffffff) = -112;
    v2 = v15 & 0xffffff00 | (int64_t)((v14 + 226) % 256);
    *(int64_t *)(v13 - 16) = -0x66110000;
    int64_t v17 = v2;
    if ((*(int32_t *)(a5 + 0x7e375006) ^ -0x80000000) < 0) {
        // 0x2b2df4
        return (v17 - ((int32_t)v17 < 0x9edf9701 ? 216 : 215)) % 256 | v17 & -256;
    }
    int64_t result = v17 | 1; // 0x2b2dee
    char * v18 = (char *)result; // 0x2b2df0
    *v18 = *v18 + v16;
    __asm_outsb((int16_t)v3, *(char *)-0x66110000);
    return result;
}

// Address range: 0x2b2e18 - 0x2b2e19
int64_t function_2b2e18(void) {
    // 0x2b2e18
    int64_t result; // 0x2b2e18
    return result;
}

// Address range: 0x2b2e24 - 0x2b2e26
int64_t function_2b2e24(void) {
    // 0x2b2e24
    int64_t v1; // 0x2b2e24
    bool v2; // 0x2b2e24
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2b2e6c - 0x2b2e6d
int64_t function_2b2e6c(int64_t a1) {
    // 0x2b2e6c
    int64_t result; // 0x2b2e6c
    return result;
}

// Address range: 0x2b2e81 - 0x2b2e97
int64_t function_2b2e81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_iretd(); // 0x2b2e90
    uint32_t v1 = (int32_t)a4 % 32; // 0x2b2e91
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)result; // 0x2b2e91
        uint32_t v3 = *v2; // 0x2b2e91
        *v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return result;
}

// Address range: 0x2b2e9e - 0x2b2e9f
int64_t function_2b2e9e(void) {
    // 0x2b2e9e
    int64_t result; // 0x2b2e9e
    return result;
}

// Address range: 0x2b2eaa - 0x2b2f72
int64_t function_2b2eaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b2eaa
    int64_t v1; // 0x2b2eaa
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    unsigned char v3 = (char)v1 + (char)a3; // 0x2b2eb5
    int64_t v4; // 0x2b2eaa
    if (llvm_ctpop_i8(v3) % 2 != 0) {
        v4 = function_2b2e9e();
    }
    int64_t v5 = 256 * v2 & 0xff00 | a4; // 0x2b2eaa
    int64_t v6 = a3 & -256 | (int64_t)v3; // 0x2b2eb5
    int64_t v7 = v4 & 175 | 80; // 0x2b2ebb
    int64_t v8 = v4 & 0xc686ff00; // 0x2b2ebb
    __asm_out((int16_t)v6, (char)v7);
    int64_t v9 = v8 | v7 + 93 & 151 | 0x39790068; // 0x2b2ec2
    int64_t result = v8 | v9 + 90 & 223 | 0x39790000; // 0x2b2ecd
    int64_t v10 = v5 - 1; // 0x2b2ecf
    if (v10 == 0) {
        char * v11 = (char *)(v5 - 127); // 0x2b2ed1
        *v11 = *v11 + (char)((char)v9 > 165);
        return result;
    }
    int64_t v12 = result + 0x101080ed; // 0x2b2f41
    char * v13 = (char *)(v6 + 0x7581240a); // 0x2b2f47
    char v14 = *v13; // 0x2b2f47
    char v15 = v12; // 0x2b2f47
    char v16 = v14 + v15; // 0x2b2f47
    *v13 = v16;
    if (((v16 ^ v14) & (v16 ^ v15)) >= 0) {
        // 0x2b2fa6
        return v12 & 0xdf9fffff;
    }
    int64_t v17 = result + 0xb111bded & 0xff9fffff; // 0x2b2f54
    *(char *)(v6 + 0x1172a8800) = (char)v10;
    int32_t * v18 = (int32_t *)(v17 - 46); // 0x2b2f64
    *v18 = *v18 + 0x476f6db6;
    return v17 ^ 227;
}

// Address range: 0x2b3175 - 0x2b319d
int64_t function_2b3175(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x2b3175
    uint32_t v2 = (int32_t)a3 + v1; // 0x2b3175
    int64_t result; // 0x2b3175
    *(char *)a2 = (v2 < v1 ? -105 : -106) + (char)result;
    int32_t * v3 = (int32_t *)((int64_t)v2 + 110 + 8 * result); // 0x2b317f
    *v3 = *v3 << 31;
    *(char *)0x930f91 = *(char *)0x930f91 + (char)(result / 256);
    return result;
}

// Address range: 0x2b319f - 0x2b31ba
int64_t function_2b319f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 109); // 0x2b319f
    int32_t v2 = a2; // 0x2b319f
    bool v3; // 0x2b319f
    *v1 = *v1 + v2 + (int32_t)v3;
    int64_t v4; // 0x2b319f
    *(int32_t *)0x532c6ea8 = *(int32_t *)0x532c6ea8 | (int32_t)v4;
    *(char *)(a2 - 0x17ef2cc8) = (char)v4;
    int32_t * v5 = (int32_t *)(v4 - 79); // 0x2b31b3
    *v5 = *v5 + v2;
    int64_t v6; // 0x2b319f
    __asm_outsd((int16_t)a3, *(int32_t *)&v6);
    return v4 & 0x89c5dcf4 | 0x763a230b;
}

// Address range: 0x2b31bb - 0x2b31c7
int64_t function_2b31bb(void) {
    // 0x2b31bb
    return function_ffffffff9b3fd1b6();
}

// Address range: 0x2b31d5 - 0x2b31e9
int64_t function_2b31d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b31d5
    int64_t v1; // 0x2b31d5
    *(int32_t *)v1 = 0;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x2b31d5
    if (a4 == 0) {
        result = function_2b31d5(a1, a2, a3, 0);
    }
    // 0x2b31df
    *(char *)0x2b5003c817374df4 = (char)result;
    return result;
}

// Address range: 0x2b320c - 0x2b320d
int64_t function_2b320c(int64_t a1) {
    // 0x2b320c
    int64_t result; // 0x2b320c
    return result;
}

// Address range: 0x2b321a - 0x2b321f
int64_t function_2b321a(int64_t a1, int64_t a2) {
    int64_t result = __asm_int1(a1, a2); // 0x2b321a
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x2b325f - 0x2b3273
int64_t function_2b325f(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x300f498f; // 0x2b326a
    int64_t v2; // 0x2b325f
    *(char *)-0x300f498f = v1 + (char)((uint64_t)v2 / 256);
    return v2 & 0xffffff62 ^ 0x342dfa32;
}

// Address range: 0x2b3280 - 0x2b3286
int64_t function_2b3280(int64_t a1) {
    // 0x2b3280
    int64_t result; // 0x2b3280
    return result;
}

// Address range: 0x2b3286 - 0x2b3294
int64_t function_2b3286(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b3286
    int64_t v1; // 0x2b3286
    char * v2 = (char *)(v1 + 0x3d000002); // 0x2b328b
    *v2 = *v2 + (char)a4;
    int64_t result; // 0x2b3286
    int64_t v3 = result;
    *(int32_t *)v3 = *(int32_t *)&result + (int32_t)v3;
    return result;
}

// Address range: 0x2b32da - 0x2b32de
int64_t function_2b32da(int64_t a1) {
    // 0x2b32da
    int64_t v1; // 0x2b32da
    bool v2; // 0x2b32da
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}
