/*
 * Targeted RetDec C for native executable gap queue batch 315.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x222066-0x222266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x222466-0x222666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2aad75-0x2aaf75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ab175-0x2ab375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x438267-0x438467 rank=- name=- kind=- bytes=- uncovered=-
 *   0x438467-0x438667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x438667-0x438867 rank=- name=- kind=- bytes=- uncovered=-
 *   0x438867-0x438a67 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
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

int64_t function_12319265();
int64_t function_222066(void);
int64_t function_222067(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2220f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_222233(void);
int64_t function_222248(void);
int64_t function_22224a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_222466(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2224ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2aad75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aadd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aae43(int64_t a1);
int64_t function_2aae58(void);
int64_t function_2aaebc(void);
int64_t function_2aaf3d(int64_t a1);
int64_t function_2aaf4c(int64_t a1);
int64_t function_2ab175(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ab1c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ab1d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ab297(int64_t a1);
int64_t function_2ab347(int64_t a1);
int64_t function_2ab35d(int64_t a1, int64_t a2);
int64_t function_438267(void);
int64_t function_4382f6(void);
int64_t function_438316(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_43839d(int64_t a1);
int64_t function_4383c4(void);
int64_t function_4383fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_43840a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43840c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_438587(void);
int64_t function_4385e9(void);
int64_t function_43865a(void);
int64_t function_438674(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_43868b(int64_t a1);
int64_t function_438691(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4386fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_438715(void);
int64_t function_438720(void);
int64_t function_438725(void);
int64_t function_438744(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43875e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4387d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4387ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_438836(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_438909(int64_t a1);
int64_t function_43895c(void);
int64_t function_438999(int64_t a1);
int64_t function_4389b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4389f6(void);
int64_t function_438a05(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_438a27(int64_t a1, int64_t a2, int64_t a3);
int64_t function_438a3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_438a5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_438a7b();
int64_t function_c6a22d4();
int64_t function_cdc60();
int64_t function_ffffffffa2675a63();
int64_t function_ffffffffa9a0d504();
int64_t function_ffffffffe8a8e1c6();
int64_t unknown_167b363();
int64_t unknown_ffffffff902f1eeb();

// Address range: 0x222066 - 0x222067
int64_t function_222066(void) {
    // 0x222066
    int64_t result; // 0x222066
    return result;
}

// Address range: 0x222067 - 0x2220f7
int64_t function_222067(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t v2; // 0x222067
    if ((char)(v2 / 256) != 0) {
        // 0x22206b
        return v2 ^ 36;
    }
    int64_t v3 = (int64_t)&v1; // 0x2220bd
    int64_t v4 = v3 + 8; // 0x2220c1
    v1 = v4;
    int64_t v5 = *(int64_t *)(v3 + 24); // 0x2220d9
    *(int64_t *)(v3 + 16) = v5;
    *(int64_t *)v4 = v5;
    return function_cdc60(v2, v2, v2, v2, v2, v2);
}

// Address range: 0x2220f7 - 0x222230
int64_t function_2220f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x775622c2; // bp-32, 0x22213b
    int64_t v2 = (int64_t)&v1; // 0x2221a5
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2221c6
    *v3 = a6;
    int64_t * v4 = (int64_t *)(v2 + 16); // 0x2221cf
    *v4 = v1;
    *v3 = 169;
    *(int64_t *)(v2 + 32) = 169;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x2221fc
    int64_t v6 = *v5; // 0x2221fc
    v1 = v6;
    *v3 = v6;
    int64_t v7 = *v4; // 0x222215
    *v5 = v7;
    v1 = v7;
    int64_t v8; // 0x2220f7
    return function_cdc60(a1, a2, a3, a4, a5, v8);
}

// Address range: 0x222233 - 0x222236
int64_t function_222233(void) {
    // 0x222233
    int64_t v1; // 0x222233
    return function_22224a(v1, v1, v1, v1);
}

// Address range: 0x222248 - 0x22224a
int64_t function_222248(void) {
    // 0x222248
    int64_t v1; // 0x222248
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x22224a - 0x222261
int64_t function_22224a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22224a
    int64_t v1; // 0x22224a
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x22224a
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    char * v4 = (char *)(result - 119); // 0x22224e
    char v5 = *v4 + (char)a4; // 0x22224e
    *v4 = v5;
    if (v5 == 0) {
        // 0x222277
        return result;
    }
    char * v6 = (char *)(a2 + 104); // 0x222253
    *v6 = *v6 | (char)v1;
    int64_t v7 = result;
    return (v7 + 36) % 256 | v7 & -256;
}

// Address range: 0x222466 - 0x2224ae
int64_t function_222466(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x222466
    int64_t v1; // bp-16, 0x222466
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x222466
    return function_cdc60(a1, a2, a3, a4, v2, v2);
}

// Address range: 0x2224ae - 0x22261b
int64_t function_2224ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x419c8f54; // bp-40, 0x22253e
    int64_t v2 = (int64_t)&v1; // 0x2225ee
    int64_t v3 = v2 - 8; // 0x2225f6
    *(int64_t *)(v2 - 16) = v3;
    *(int64_t *)v3 = v2 + 8;
    return function_cdc60(a1, 0x21f65a, a3, a4, a5, a6);
}

// Address range: 0x2aad75 - 0x2aadd1
int64_t function_2aad75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aad75
    int64_t v1; // 0x2aad75
    char * v2 = (char *)(v1 + 0x1e84305); // 0x2aad77
    *v2 = *v2 + (char)v1;
    bool v3; // 0x2aad75
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x2aad7d
    int64_t v5 = __asm_wait(v4); // 0x2aad7e
    unsigned char v6 = (char)v5; // 0x2aad7f
    unsigned char v7 = v6 - 56; // 0x2aad7f
    int64_t result = v5 & -256 | (int64_t)v7; // 0x2aad7f
    if (v6 < 56 || v7 == 0) {
        uint64_t v8 = result & 0xffffffff ^ 0x3801e82a; // 0x2aadbd
        char * v9 = (char *)(v8 + 0x1e88800); // 0x2aadc4
        unsigned char v10 = *v9; // 0x2aadc4
        unsigned char v11 = (char)(v8 / 256); // 0x2aadc4
        char v12 = v10 + v11; // 0x2aadc4
        unsigned char v13 = llvm_ctpop_i8(v12); // 0x2aadc4
        *v9 = v12;
        return v8 & 0xffff00ff | 256 * (64 * (int64_t)(v12 == 0) | (int64_t)(v12 < v10) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v10 % 16 + v11 % 16 > 15) | 4 * (int64_t)(v13 % 2 == 0)) | 512;
    }
    char * v14 = (char *)(a2 - 0x4a45fe18 + result); // 0x2aad85
    *v14 = *v14 + (char)a4;
    *(int32_t *)v4 = (int32_t)result;
    return result;
}

// Address range: 0x2aadd7 - 0x2aade0
int64_t function_2aadd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x80002c); // 0x2aadd7
    int64_t result; // 0x2aadd7
    bool v2; // 0x2aadd7
    *v1 = *v1 + (int32_t)result + (int32_t)v2;
    return result;
}

// Address range: 0x2aae43 - 0x2aae44
int64_t function_2aae43(int64_t a1) {
    // 0x2aae43
    int64_t result; // 0x2aae43
    return result;
}

// Address range: 0x2aae58 - 0x2aae59
int64_t function_2aae58(void) {
    // 0x2aae58
    int64_t result; // 0x2aae58
    return result;
}

// Address range: 0x2aaebc - 0x2aaebf
int64_t function_2aaebc(void) {
    // 0x2aaebc
    int64_t result; // 0x2aaebc
    return result;
}

// Address range: 0x2aaf3d - 0x2aaf48
int64_t function_2aaf3d(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x3a97d589); // 0x2aaf3d
    *v1 = *v1 + (int32_t)a1;
    return function_c6a22d4();
}

// Address range: 0x2aaf4c - 0x2aaf4d
int64_t function_2aaf4c(int64_t a1) {
    // 0x2aaf4c
    int64_t result; // 0x2aaf4c
    return result;
}

// Address range: 0x2ab175 - 0x2ab1c0
int64_t function_2ab175(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ab175
    bool v1; // 0x2ab175
    if (v1) {
        // 0x2ab1b2
        return a2 & 0xffffffff;
    }
    // 0x2ab178
    int64_t result; // 0x2ab175
    return result;
}

// Address range: 0x2ab1c2 - 0x2ab1cb
int64_t function_2ab1c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char v1 = *(char *)0x213242a; // 0x2ab1c2
    bool v2; // 0x2ab1c2
    *(char *)0x213242a = (char)v2 - (char)(a4 / 256) + v1;
    return a1 & 0xffffffff;
}

// Address range: 0x2ab1d7 - 0x2ab26e
int64_t function_2ab1d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x179b43ac; // 0x2ab1d7
    char v2 = v1 / 128; // 0x2ab1d7
    *(char *)-0x179b43ac = v2 | 2 * v1;
    unsigned char v3 = (char)a4; // 0x2ab1e0
    unsigned char v4 = *(char *)(2 * a1 - 85) + v3; // 0x2ab1e0
    uint64_t v5 = unknown_ffffffff902f1eeb(); // 0x2ab1e5
    if (v4 == 0) {
        // 0x2ab1ec
        return function_ffffffffe8a8e1c6();
    }
    // 0x2ab24c
    int64_t v6; // 0x2ab1d7
    unsigned char v7 = *(char *)(v5 % 256 + v6); // 0x2ab24c
    int64_t v8 = v5 & -256; // 0x2ab24c
    char v9 = *(char *)(v8 | (int64_t)v7); // 0x2ab24d
    int64_t v10 = v8 | (int64_t)(v7 + (char)(v4 >= v3) + v9); // 0x2ab24d
    unsigned char v11 = *(char *)(v10 + 0x5c562ddf) + v4; // 0x2ab24f
    int64_t v12 = a4 & -256 | (int64_t)v11; // 0x2ab24f
    char * v13 = (char *)(v12 - 24); // 0x2ab255
    *v13 = *v13 + v11 + (char)(v11 < v4);
    int32_t * v14 = (int32_t *)(a1 - 0x41857a6f); // 0x2ab258
    *v14 = *v14 + (int32_t)v6;
    int64_t v15 = 8 * v6 + 0xe8085289 + v10 & 0xffffffff; // 0x2ab25e
    int32_t * v16 = (int32_t *)(v12 - 14); // 0x2ab265
    *v16 = *v16 + (int32_t)(2 * v6 + (int64_t)(v2 != 0));
    int32_t * v17 = (int32_t *)(a1 - 50); // 0x2ab268
    *v17 = *v17 & 79;
    bool v18; // 0x2ab1d7
    __asm_outsb((int16_t)a3, *(char *)(v15 + (v18 ? -4 : 4)));
    return (int64_t)*(int32_t *)v15;
}

// Address range: 0x2ab297 - 0x2ab298
int64_t function_2ab297(int64_t a1) {
    // 0x2ab297
    int64_t result; // 0x2ab297
    return result;
}

// Address range: 0x2ab347 - 0x2ab34f
int64_t function_2ab347(int64_t a1) {
    // 0x2ab347
    int64_t result; // 0x2ab347
    *(int32_t *)a1 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x2ab35d - 0x2ab370
int64_t function_2ab35d(int64_t a1, int64_t a2) {
    // 0x2ab35d
    return unknown_167b363() & -256 | (int64_t)*(char *)-0x542e2d0119ec6461;
}

// Address range: 0x438267 - 0x43826e
int64_t function_438267(void) {
    // 0x438267
    int64_t result; // 0x438267
    return result;
}

// Address range: 0x4382f6 - 0x4382f9
int64_t function_4382f6(void) {
    // 0x4382f6
    int64_t result; // 0x4382f6
    return result;
}

// Address range: 0x438316 - 0x438395
int64_t function_438316(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    bool v2; // 0x438316
    if (!v2) {
        int32_t * v3 = (int32_t *)(a1 + 76); // 0x43831d
        *v3 = 0x40000 * *v3;
        return function_ffffffffa2675a63();
    }
    char v4 = __asm_in(-39); // 0x438341
    int64_t v5; // 0x438316
    if (a4 != 1) {
        int64_t v6 = v4; // 0x438341
        return (v5 | v6) & -256 | (v6 + 83) % 256;
    }
    uint64_t v7 = v5 + a4 / 256 + (int64_t)((char)v5 < 126); // 0x43833c
    int32_t * v8 = (int32_t *)(a1 - 69); // 0x438354
    *v8 = -*v8;
    *(int32_t *)(v1 + 23) = (int32_t)a2;
    if ((*(char *)&v1 & (char)v7) == 0) {
        // 0x4383a5
        return 0x5b360350;
    }
    int32_t * v9 = (int32_t *)(v7 % 256 | v5 & -256); // 0x438367
    *v9 = *v9 - (int32_t)v5 + (int32_t)(*(char *)&v1 > 107);
    return 0xa600463d;
}

// Address range: 0x43839d - 0x4383a5
int64_t function_43839d(int64_t a1) {
    // 0x43839d
    int64_t result; // 0x43839d
    bool v1; // 0x43839d
    if (!v1) {
        int64_t v2; // 0x43839d
        result = function_43840c(v2, v2, v2);
    }
    // 0x4383a4
    return result;
}

// Address range: 0x4383c4 - 0x4383c8
int64_t function_4383c4(void) {
    // 0x4383c4
    int64_t v1; // 0x4383c4
    return function_43840a(v1, v1, v1, v1);
}

// Address range: 0x4383fc - 0x43840a
int64_t function_4383fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a2 + 10); // 0x4383fc
    int64_t result; // 0x4383fc
    *v1 = *v1 & (char)result;
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x43840a - 0x43840c
int64_t function_43840a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43840a
    int64_t result; // 0x43840a
    return result;
}

// Address range: 0x43840c - 0x438413
int64_t function_43840c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43840c
    int64_t v1; // 0x43840c
    return v1 & -256 | (int64_t)__asm_in(58);
}

// Address range: 0x438587 - 0x43858c
int64_t function_438587(void) {
    // 0x438587
    int64_t result; // 0x438587
    return result;
}

// Address range: 0x4385e9 - 0x4385ee
int64_t function_4385e9(void) {
    // 0x4385e9
    return function_ffffffffa9a0d504();
}

// Address range: 0x43865a - 0x43865b
int64_t function_43865a(void) {
    // 0x43865a
    int64_t result; // 0x43865a
    return result;
}

// Address range: 0x438674 - 0x43868b
int64_t function_438674(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x438674
    int64_t v1; // 0x438674
    int64_t result = v1 & -256 | (int64_t)*(char *)0x7f7e68cb9f33bdf0; // 0x438674
    int64_t * v2 = (int64_t *)(a6 + 72); // 0x43867f
    *v2 = *v2 & v1;
    return result;
}

// Address range: 0x43868b - 0x438691
int64_t function_43868b(int64_t a1) {
    // 0x43868b
    int64_t v1; // 0x43868b
    int32_t v2 = *(int32_t *)(v1 - 20); // 0x43868b
    bool v3; // 0x43868b
    return v2 + (int32_t)v1 + (int32_t)v3;
}

// Address range: 0x438691 - 0x4386b4
int64_t function_438691(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x438691
    int64_t v1; // 0x438691
    uint64_t v2 = v1;
    int32_t v3 = *(int32_t *)(a2 + 15); // 0x438691
    int64_t v4; // 0x438691
    if (v2 >= (int64_t)v3) {
        v4 = function_43865a();
    }
    int32_t v5 = v2; // 0x438691
    int64_t result = v4; // 0x438697
    if (((v3 - v5 ^ v3) & (v3 ^ v5)) < 0) {
        result = function_4386fc(a1, a2, a3, a4, a5, v1);
    }
    // 0x438699
    *(char *)(a5 + 0x2e243261) = -72;
    char v6 = *(char *)(a3 + 0x15338a2c); // 0x4386a3
    int64_t v7 = 256 * (int64_t)(v6 + (char)(v2 / 256)) | v2 & -0xff01; // 0x4386a3
    *(char *)-0x4de3b0b9f2d0afe5 = (char)result;
    int32_t * v8 = (int32_t *)v7; // 0x4386b2
    *v8 = *v8 ^ (int32_t)v7;
    return result;
}

// Address range: 0x4386fc - 0x438710
int64_t function_4386fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4386fc
    int64_t v1; // 0x4386fc
    int64_t v2 = v1;
    int64_t result = a2 & 0xffffffff; // 0x4386fc
    __asm_out((int16_t)a3, (int32_t)a2);
    if ((char)(v1 ^ a4) < 0) {
        // 0x438786
        return result;
    }
    // 0x438708
    *(char *)v2 = (char)(v2 & a6);
    char * v3 = (char *)(a1 - 61); // 0x43870b
    *v3 = *v3 - (char)v1;
    return result;
}

// Address range: 0x438715 - 0x438717
int64_t function_438715(void) {
    // 0x438715
    int64_t v1; // 0x438715
    return function_43875e(v1, v1, v1, v1);
}

// Address range: 0x438720 - 0x438721
int64_t function_438720(void) {
    // 0x438720
    int64_t result; // 0x438720
    return result;
}

// Address range: 0x438725 - 0x438728
int64_t function_438725(void) {
    // 0x438725
    int64_t result; // 0x438725
    return result;
}

// Address range: 0x438744 - 0x438756
int64_t function_438744(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x76082598); // 0x43874b
    int64_t v2; // 0x438744
    *v1 = *v1 - (char)((uint64_t)v2 / 256);
    return function_12319265();
}

// Address range: 0x43875e - 0x438785
int64_t function_43875e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43875e
    __asm_hlt();
    int64_t v1; // 0x43875e
    return v1 & 0xb05137 | 0xff4faec8;
}

// Address range: 0x4387d9 - 0x4387de
int64_t function_4387d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4387d9
    return function_438836(a1, a2, a3, a4, a3);
}

// Address range: 0x4387ee - 0x43882a
int64_t function_4387ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4387ee
    int64_t result; // 0x4387ee
    return result;
}

// Address range: 0x438836 - 0x438891
int64_t function_438836(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x438836
    int64_t result; // 0x438836
    bool v1; // 0x438836
    if ((int16_t)result < 0 != v1) {
        // 0x438844
        return result;
    }
    int64_t v2 = a5 % 0x10000 | a1 & -0x10000; // 0x43885d
    int32_t v3 = __asm_in_133(88); // 0x438865
    unsigned char v4 = *(char *)(result + 0x2969e4d3) & (char)v3; // 0x438877
    char * v5 = (char *)(v2 - 0x783579f1); // 0x43887d
    *v5 = *v5 / 2;
    *(char *)v2 = __asm_insb((int16_t)a3);
    *(char *)(((int64_t)v4 | (int64_t)(v3 & -256)) + 58) = v4;
    int64_t v6; // 0x438836
    uint32_t v7 = *(int32_t *)(0xa81c0dd8 * (int64_t)&v6 & 0xffffffc0); // 0x43888d
    unsigned char v8 = *(char *)(result + (int64_t)(v7 % 256)); // 0x43888e
    return (int64_t)(v7 & -256) | (int64_t)v8;
}

// Address range: 0x438909 - 0x43890c
int64_t function_438909(int64_t a1) {
    // 0x438909
    int64_t result; // 0x438909
    return result;
}

// Address range: 0x43895c - 0x43895f
int64_t function_43895c(void) {
    // 0x43895c
    int64_t result; // 0x43895c
    return result;
}

// Address range: 0x438999 - 0x43899a
int64_t function_438999(int64_t a1) {
    // 0x438999
    int64_t result; // 0x438999
    return result;
}

// Address range: 0x4389b9 - 0x4389c3
int64_t function_4389b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4389b9
    int64_t result; // 0x4389b9
    return result;
}

// Address range: 0x4389f6 - 0x4389f7
int64_t function_4389f6(void) {
    // 0x4389f6
    int64_t result; // 0x4389f6
    return result;
}

// Address range: 0x438a05 - 0x438a27
int64_t function_438a05(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    char * v2 = (char *)(a1 + 0x76073060); // 0x438a05
    bool v3; // 0x438a05
    *v2 = (char)v3 - (char)a3 + *v2;
    int64_t v4; // 0x438a05
    __asm_outsb((int16_t)a3, *(char *)&v4);
    int64_t v5; // 0x438a05
    unsigned char v6 = (char)v5; // 0x438a0c
    unsigned char v7 = *(char *)(a1 - 0x66ac7fdc + v5); // 0x438a0c
    int64_t v8 = v7 > v6 ? 0x79910322 : 0x79910321; // 0x438a13
    int64_t result = (v5 & 0xffffff00 | (int64_t)(v6 - v7)) - v8 & 0xffffffff; // 0x438a13
    int32_t v9 = *(int32_t *)(v5 + 41); // 0x438a18
    if (llvm_ctpop_i8((char)(v9 & (int32_t)a4)) % 2 != 0) {
        // 0x438a7a
        return result;
    }
    // 0x438a1d
    *(char *)v1 = *(char *)&v1 + (char)(v5 / 256);
    *(char *)v1 = (char)v5;
    return result;
}

// Address range: 0x438a27 - 0x438a3a
int64_t function_438a27(int64_t a1, int64_t a2, int64_t a3) {
    // 0x438a27
    int64_t result; // 0x438a27
    bool v1; // 0x438a27
    if (v1) {
        // 0x438a65
        return result;
    }
    int32_t v2 = (int32_t)result - 0x55a70c0e; // 0x438a29
    int64_t v3 = v2; // 0x438a2e
    if (v2 >= 0) {
        v3 = function_438a7b();
    }
    uint64_t v4 = v3;
    float80_t v5; // 0x438a27
    *(int16_t *)(a2 + 53) = (int16_t)v5;
    return 256 * (2 * v4 / 256 | (int64_t)((v4 & 256) != 0)) & 0xff00 | v4 & -0xff01;
}

// Address range: 0x438a3a - 0x438a48
int64_t function_438a3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x438a3a
    return a4 + 0xffffffff & 0xffffff00 | (uint64_t)(a4 + 64) % 256;
}

// Address range: 0x438a5e - 0x438a65
int64_t function_438a5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a4 & 0xffffffff; // 0x438a5f
    // 0x438a61
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}
