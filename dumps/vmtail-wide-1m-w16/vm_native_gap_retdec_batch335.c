/*
 * Targeted RetDec C for native executable gap queue batch 335.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x14d713-0x14d913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14d913-0x14db13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14db13-0x14dd13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14dd13-0x14df13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14df13-0x14e113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f921e-0x2f941e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f941e-0x2f961e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f961e-0x2f981e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
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
int64_t __asm_sldt(void);
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

int64_t function_14d6c6();
int64_t function_14d700();
int64_t function_14d713(int64_t a1, int64_t a2);
int64_t function_14d722(void);
int64_t function_14d740(void);
int64_t function_14d779(void);
int64_t function_14d77b(int64_t a1);
int64_t function_14d78d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_14d7bf(void);
int64_t function_14d7c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14d7f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14d851(int64_t a1);
int64_t function_14d871(void);
int64_t function_14d89d(void);
int64_t function_14d8d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_14d979(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14d9b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14d9e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_14dab2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_14dba7(void);
int64_t function_14dbcd(void);
int64_t function_14dbf6(void);
int64_t function_14dc26(int64_t a1);
int64_t function_14dc2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14dc48(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_14dcff(void);
int64_t function_14dd55(void);
int64_t function_14dd66(int64_t a1);
int64_t function_14ddb6(void);
int64_t function_14ddc4(void);
int64_t function_14de7e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_14de9a(void);
int64_t function_14deec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14dfc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14dff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14e00c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14e022(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14e092(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14e0f7(int64_t a1);
int64_t function_1fd62bd();
int64_t function_1fd6725();
int64_t function_2f921e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f92c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f9411(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f9551(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f96c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_35f5bc();
int64_t function_3d41d30a();
int64_t function_3dc6964a();
int64_t function_caf2a();
int64_t unknown_217d186f();
int64_t unknown_33f2d3f4();
int64_t unknown_3428d964();
int64_t unknown_3ab825fb();
int64_t unknown_767dc617();
int64_t unknown_ffffffffbd15ec57();
int64_t unknown_fffffffffc0978f8();

// Address range: 0x14d713 - 0x14d721
int64_t function_14d713(int64_t a1, int64_t a2) {
    // 0x14d713
    int64_t v1; // 0x14d713
    bool v2; // 0x14d713
    if (v2) {
        v1 = function_14d6c6();
    }
    int64_t v3 = v1; // 0x14d715
    if (!v2) {
        v3 = function_14d700();
    }
    int64_t v4 = v3;
    int32_t * v5 = (int32_t *)(a2 + 0x68f93f8c); // 0x14d718
    int64_t v6; // 0x14d713
    *v5 = *v5 + (int32_t)v6;
    return (v4 + v6) % 256 | v4 & -256;
}

// Address range: 0x14d722 - 0x14d726
int64_t function_14d722(void) {
    // 0x14d722
    int64_t result; // 0x14d722
    return result;
}

// Address range: 0x14d740 - 0x14d741
int64_t function_14d740(void) {
    // 0x14d740
    int64_t result; // 0x14d740
    return result;
}

// Address range: 0x14d779 - 0x14d77b
int64_t function_14d779(void) {
    // 0x14d779
    return function_14d740();
}

// Address range: 0x14d77b - 0x14d78c
int64_t function_14d77b(int64_t a1) {
    // 0x14d77b
    __asm_in((char)a1);
    int64_t v1; // 0x14d77b
    int32_t * v2 = (int32_t *)(v1 + 0x13d00dc); // 0x14d77d
    bool v3; // 0x14d77b
    *v2 = *v2 + (v3 ? 89 : 88);
    int64_t v4; // 0x14d77b
    *(int32_t *)a1 = *(int32_t *)&v4 - (int32_t)v1;
    return function_1fd6725();
}

// Address range: 0x14d78d - 0x14d7bf
int64_t function_14d78d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)(0x13d0000 * *(int32_t *)(a2 + 0x6816d4d9)); // 0x14d792
    uint32_t v2 = 0x68084f * *(int32_t *)(a2 - 54 + v1); // 0x14d79c
    __asm_hlt(v1);
    bool v3; // 0x14d78d
    *(int32_t *)v1 = *(int32_t *)((v3 ? -4 : 4) + a2);
    int64_t v4 = (a3 / 256 + (int64_t)v2) % 256 | (int64_t)(v2 & -256); // 0x14d7aa
    unsigned char v5 = *(char *)-0x4e26a948; // 0x14d7b1
    unsigned char v6 = v5 + (char)(v2 / 256); // 0x14d7b1
    *(char *)-0x4e26a948 = v6;
    int32_t result = __asm_in(-90); // 0x14d7b8
    int32_t * v7 = (int32_t *)v4; // 0x14d7ba
    *v7 = (int32_t)(v6 < v5) - (int32_t)v4 + *v7;
    return result;
}

// Address range: 0x14d7bf - 0x14d7c1
int64_t function_14d7bf(void) {
    // 0x14d7bf
    int64_t result; // 0x14d7bf
    return result;
}

// Address range: 0x14d7c1 - 0x14d7c6
int64_t function_14d7c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14d7c1
    int64_t result; // 0x14d7c1
    return result;
}

// Address range: 0x14d7f8 - 0x14d80c
int64_t function_14d7f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14d7f8
    int64_t v1; // 0x14d7f8
    int32_t * v2 = (int32_t *)(v1 + 0x1b06e9c2); // 0x14d7f8
    uint32_t v3 = *v2; // 0x14d7f8
    uint32_t v4 = v3 + (int32_t)v1; // 0x14d7f8
    *v2 = v4;
    int32_t * v5 = (int32_t *)(a4 + 0x3c682486); // 0x14d7fe
    uint32_t v6 = *v5; // 0x14d7fe
    uint32_t v7 = v4 < v3 ? -32 : -33; // 0x14d7fe
    int32_t v8 = v6 - v7; // 0x14d7fe
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x14d7fe
    *v5 = v8;
    return 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v4 < v3 | v6 < v7) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v6 % 16 + (int32_t)(v4 < v3) - v7 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0)) | (int64_t)(0x10000 * (int32_t)v1 >> 16 & -0xff01 | 512);
}

// Address range: 0x14d851 - 0x14d85e
int64_t function_14d851(int64_t a1) {
    // 0x14d851
    int64_t v1; // 0x14d851
    uint64_t v2 = (int64_t)&v1 & -256 | (int64_t)__asm_in_133(15); // 0x14d852
    char v3 = *(char *)(a1 + 0x22f90001); // 0x14d856
    bool v4; // 0x14d851
    return 256 * (int64_t)((char)v4 - v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x14d871 - 0x14d874
int64_t function_14d871(void) {
    // 0x14d871
    int64_t result; // 0x14d871
    *(int16_t *)result = (int16_t)result;
    return result;
}

// Address range: 0x14d89d - 0x14d89e
int64_t function_14d89d(void) {
    // 0x14d89d
    int64_t result; // 0x14d89d
    return result;
}

// Address range: 0x14d8d8 - 0x14d916
int64_t function_14d8d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x14d8d8
    int64_t v1; // 0x14d8d8
    *(char *)a2 = (char)v1 - 36;
    char v2 = v1 / 256; // 0x14d8dd
    int64_t v3; // 0x14d8d8
    *(int32_t *)a1 = *(int32_t *)&v3;
    bool v4; // 0x14d8d8
    int64_t v5 = v4 ? -4 : 4; // 0x14d8e1
    v3 = v5 + a2;
    uint64_t v6 = a4 - 1; // 0x14d8e5
    int64_t result = v1 & -256 | 213; // 0x14d8e5
    if (v6 != 0 == v2 == (char)v1) {
        result = function_14d89d();
    }
    char v7 = *(char *)0x19fbecef + v2; // 0x14d8e8
    *(char *)0x19fbecef = v7;
    if (v7 == 0) {
        // 0x14d913
        return result;
    }
    int64_t v8 = v5 + a1; // 0x14d8e1
    char * v9 = (char *)(v8 - 89); // 0x14d8f0
    *v9 = *v9 + (char)v6;
    int16_t v10 = (int16_t)a3 & -256 | 53; // 0x14d8f4
    __asm_outsb(v10, *(char *)v3);
    int64_t v11 = unknown_3ab825fb(); // 0x14d8f7
    char * v12 = (char *)(v1 - 0x4efffec3); // 0x14d8fc
    *v12 = *v12 + (char)(v6 / 256);
    __asm_out(v10, (char)v11);
    int64_t result2 = v11 & 0x12318b72; // 0x14d90a
    *(char *)v8 = (char)result2;
    return result2;
}

// Address range: 0x14d979 - 0x14d97d
int64_t function_14d979(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14d979
    int64_t v1; // 0x14d979
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    int64_t v2; // 0x14d979
    __asm_outsb((int16_t)a3, *(char *)&v2);
    return result;
}

// Address range: 0x14d9b4 - 0x14d9d0
int64_t function_14d9b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14d9b4
    __asm_in(-77);
    char v1 = a4; // 0x14d9b6
    int64_t v2; // 0x14d9b4
    *(char *)a1 = (char)v2 + v1;
    int32_t * v3 = (int32_t *)(a3 + 0x1b13c664); // 0x14d9bb
    *v3 = *v3 | (int32_t)v2;
    int64_t result = __asm_hlt(a1); // 0x14d9c7
    *(char *)0x1fdd23b = *(char *)0x1fdd23b | v1;
    return result;
}

// Address range: 0x14d9e2 - 0x14da6d
int64_t function_14d9e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x14d9e2
    float80_t v1; // 0x14d9e2
    float80_t v2 = v1;
    float80_t v3 = v1;
    int64_t result; // 0x14d9e2
    int32_t * v4 = (int32_t *)(2 * result); // 0x14d9eb
    *v4 = *v4 - (v3 > v2 ? 0x4ae327 : v3 != v2 ? 0x4ae328 : 0x4ae327);
    int32_t * v5 = (int32_t *)(result + 61); // 0x14d9f2
    *v5 = *v5 + (int32_t)a2;
    int32_t * v6 = (int32_t *)(a1 + 0x5a651d03); // 0x14d9f5
    *v6 = *v6 + (int32_t)a4;
    *(int32_t *)a1 = (int32_t)result;
    bool v7; // 0x14d9e2
    if (*(char *)((v7 ? -4 : 4) + a1) < (char)result) {
        // 0x14da00
        return result;
    }
    // 0x14da68
    return function_3dc6964a();
}

// Address range: 0x14dab2 - 0x14db3c
int64_t function_14dab2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x14dab2
    char v3 = v2; // 0x14dab2
    char v4 = v2 / 256; // 0x14dab2
    char v5 = v3 + v4; // 0x14dab2
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0 != v5 != 0) {
        int64_t v6 = v2 & -256 | (int64_t)v5; // 0x14dab2
        int32_t * v7 = (int32_t *)(v2 + 92); // 0x14dab6
        *v7 = *v7 + (int32_t)v2;
        char * v8 = (char *)(v2 - 0x20cda7d1); // 0x14dac0
        *v8 = *v8 + (char)(a4 / 256);
        int32_t * v9 = (int32_t *)v6; // 0x14dacb
        int32_t v10 = v6; // 0x14dacb
        *v9 = *v9 + v10;
        *(int32_t *)a1 = v10;
        *(int64_t *)((v6 & 0xffffffff) - 8) = -0x51621400;
        __asm_outsd((int16_t)a3 & -256 | 172, *(int32_t *)&v1);
        *(int64_t *)v2 = 0x190a00;
        int64_t v11; // bp-16, 0x14dab2
        return (int64_t)&v11;
    }
    // 0x14daf3
    *(char *)-0x70c8b5fc = *(char *)-0x70c8b5fc + v4;
    int32_t v12 = v2; // 0x14db05
    int32_t v13 = *(int32_t *)(8 * (256 * v2 & 0xff00 | a3 & 0x1fffffffffff00ff) + a2); // 0x14db05
    int32_t v14 = v13 + v12; // 0x14db05
    if (v14 < 0 == ((v14 ^ v12) & (v14 ^ v13)) < 0) {
        int64_t result = unknown_767dc617(); // 0x14db11
        uint32_t v15 = *(int32_t *)0xcc7969c; // 0x14db16
        *(int32_t *)0xcc7969c = v15 / 2 | 0x80000000 * (int32_t)((int32_t)v2 > (int32_t)a4);
        return result;
    }
    int32_t * v16 = (int32_t *)(a1 - 0x3678fbcf); // 0x14db1e
    *v16 = *v16 ^ (int32_t)a4;
    *(int64_t *)v2 = 21;
    *(char *)0x3e9d1e38 = *(char *)0x3e9d1e38 + v4;
    return v2 & 0xffffff00 ^ 0xcf001090;
}

// Address range: 0x14dba7 - 0x14dba8
int64_t function_14dba7(void) {
    // 0x14dba7
    int64_t result; // 0x14dba7
    return result;
}

// Address range: 0x14dbcd - 0x14dbce
int64_t function_14dbcd(void) {
    // 0x14dbcd
    int64_t result; // 0x14dbcd
    return result;
}

// Address range: 0x14dbf6 - 0x14dbf8
int64_t function_14dbf6(void) {
    // 0x14dbf6
    return function_14dba7();
}

// Address range: 0x14dc26 - 0x14dc29
int64_t function_14dc26(int64_t a1) {
    // 0x14dc26
    int64_t result; // 0x14dc26
    return result;
}

// Address range: 0x14dc2a - 0x14dc47
int64_t function_14dc2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14dc2a
    int64_t v1; // 0x14dc2a
    char * v2 = (char *)(v1 + 0x50807e93); // 0x14dc3a
    *v2 = *v2 + (char)(v1 / 256);
    char v3 = *(char *)0x2299dc45; // 0x14dc3e
    char v4 = v1 / 256; // 0x14dc3e
    char v5 = v3 + v4; // 0x14dc3e
    *(char *)0x2299dc45 = v5;
    int64_t result; // 0x14dc2a
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        result = function_14dbcd();
    }
    // 0x14dc46
    return result;
}

// Address range: 0x14dc48 - 0x14dcc3
int64_t function_14dc48(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x14dc48
    *(char *)a3 = (char)(a4 ^ a3);
    int64_t v1 = unknown_ffffffffbd15ec57(); // 0x14dc51
    char * v2 = (char *)v1; // 0x14dc56
    *v2 = *v2 - (char)v1;
    *(char *)(v1 + 107) = (char)a3;
    *(int64_t *)-0x4a3e0c5d192828b6 = v1;
    int64_t v3; // 0x14dc48
    int32_t * v4 = (int32_t *)(v3 + 0xf3fb30); // 0x14dc6c
    *v4 = (int32_t)v3;
    int64_t result = (v1 + 226) % 256 | v1 & -256; // 0x14dc77
    char * v5 = (char *)(a1 + 0x695000b3 + (int64_t)*v4); // 0x14dc7c
    *v5 = *v5 + (char)(a3 / 256);
    int64_t v6 = (v3 ^ a1) & 0xffffffff; // 0x14dc8e
    char * v7 = (char *)(v6 + 0x59cf890a); // 0x14dc90
    char v8 = *v7; // 0x14dc90
    char v9 = v8 + (char)((int64_t)&g2 >> 8); // 0x14dc90
    *v7 = v9;
    if (((v9 ^ v8) & (v9 ^ (char)((int64_t)&g2 >> 8))) >= 0) {
        int32_t * v10 = (int32_t *)(v6 - 103); // 0x14dcbc
        *v10 = *v10 + (int32_t)a2;
        return result;
    }
    // 0x14dc98
    __asm_in_133(-46);
    __asm_hlt(result & 0xffffffff);
    __asm_in(1);
    return function_35f5bc();
}

// Address range: 0x14dcff - 0x14dd04
int64_t function_14dcff(void) {
    // 0x14dcff
    return function_3d41d30a();
}

// Address range: 0x14dd55 - 0x14dd58
int64_t function_14dd55(void) {
    // 0x14dd55
    int64_t result; // 0x14dd55
    return result;
}

// Address range: 0x14dd66 - 0x14dd69
int64_t function_14dd66(int64_t a1) {
    // 0x14dd66
    int64_t result; // 0x14dd66
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x14ddb6 - 0x14ddb7
int64_t function_14ddb6(void) {
    // 0x14ddb6
    int64_t result; // 0x14ddb6
    return result;
}

// Address range: 0x14ddc4 - 0x14ddcb
int64_t function_14ddc4(void) {
    // 0x14ddc4
    return function_14ddb6();
}

// Address range: 0x14de7e - 0x14de99
int64_t function_14de7e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    unsigned char v1 = *(char *)-0x7bad98ca; // 0x14de83
    unsigned char v2 = v1 + (char)(a4 / 256); // 0x14de83
    *(char *)-0x7bad98ca = v2;
    int64_t result; // 0x14de7e
    *(int32_t *)0x29187c5eb034d61e = (int32_t)result;
    char * v3 = (char *)(a5 + 123); // 0x14de92
    *v3 = *v3 + (char)result + (char)(v2 < v1);
    return result;
}

// Address range: 0x14de9a - 0x14de9b
int64_t function_14de9a(void) {
    // 0x14de9a
    int64_t result; // 0x14de9a
    return result;
}

// Address range: 0x14deec - 0x14df82
int64_t function_14deec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14deec
    bool v1; // 0x14deec
    if (v1) {
        int64_t v2 = unknown_33f2d3f4(); // 0x14deee
        *(int32_t *)a1 = (int32_t)v2;
        int64_t v3 = v2; // 0x14def4
        v3 = function_14de9a();
        int64_t v4 = v3;
        return v4 + 256 * ((int64_t)v1 + a3) & 0xff00 | v4 & -0xff01;
    }
    // 0x14df56
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v5 = unknown_3428d964(); // 0x14df5e
    unknown_217d186f();
    while ((int32_t)v5 > 0x4f7cd2f2) {
        // continue -> 0x14df71
    }
    int64_t result = (int64_t)*(int32_t *)0xab01e800800015; // 0x14df73
    *(int32_t *)result = 0x533a4ed7;
    return result;
}

// Address range: 0x14dfc6 - 0x14dff9
int64_t function_14dfc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14dfc6
    int64_t v1; // 0x14dfc6
    int32_t * v2 = (int32_t *)(v1 + 0x1efc2c5a); // 0x14dfc8
    *v2 = *v2 + (int32_t)v1;
    float80_t v3; // 0x14dfc6
    *(float80_t *)(v1 - 106) = __asm_fbstp(v3);
    int32_t * v4 = (int32_t *)(a3 - 0x34156084); // 0x14dfd5
    *v4 = *v4 + (int32_t)a4;
    int64_t v5; // 0x14dfc6
    unsigned char v6 = *(char *)&v5; // 0x14dfdb
    unsigned char v7 = v6 + (char)(v1 / 256); // 0x14dfdb
    *(char *)a2 = v7;
    unknown_fffffffffc0978f8();
    return function_14e00c(a1, v1 + 0xfa1901e8 & 0xffffffff, ((int64_t)(v7 < v6) + a3) % 256 | a3 & -256, a4);
}

// Address range: 0x14dff9 - 0x14e00a
int64_t function_14dff9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14dff9
    int64_t result; // 0x14dff9
    char * v1 = (char *)(result + 0x714b1a90); // 0x14dff9
    *v1 = *v1 + (char)(result / 256);
    __asm_int(72);
    __asm_fbld(*(float80_t *)(result - 24));
    int32_t * v2 = (int32_t *)(2 * result + a4); // 0x14e004
    *v2 = *v2 + (int32_t)a2;
    return result;
}

// Address range: 0x14e00c - 0x14e015
int64_t function_14e00c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x8f401e8); // 0x14e00e
    *v1 = *v1 + (int32_t)a2;
    return __asm_hlt(a1);
}

// Address range: 0x14e022 - 0x14e02b
int64_t function_14e022(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14e022
    int64_t result; // 0x14e022
    int32_t * v1 = (int32_t *)(result + 18); // 0x14e022
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x14e092 - 0x14e09f
int64_t function_14e092(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14e092
    int64_t v1; // 0x14e092
    *(char *)a3 = 2 * (char)v1;
    return function_1fd62bd();
}

// Address range: 0x14e0f7 - 0x14e0fa
int64_t function_14e0f7(int64_t a1) {
    // 0x14e0f7
    int64_t result; // 0x14e0f7
    return result;
}

// Address range: 0x2f921e - 0x2f92c8
int64_t function_2f921e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f921e
    int64_t v1; // 0x2f921e
    return function_caf2a(a1, a2, v1, v1, v1, v1, a3);
}

// Address range: 0x2f92c8 - 0x2f9411
int64_t function_2f92c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f92c8
    return function_caf2a(a1, a2, a3, a4, a5, a6, a5);
}

// Address range: 0x2f9411 - 0x2f9551
int64_t function_2f9411(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f9411
    int64_t v1; // bp-48, 0x2f9411
    v1 = (int64_t)&v1 + 16;
    bool v2; // 0x2f9411
    return function_caf2a(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x2f9551 - 0x2f96c0
int64_t function_2f9551(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f9551
    int64_t v1; // bp-48, 0x2f9551
    int64_t v2 = (int64_t)&v1; // 0x2f9648
    v1 = a5;
    int64_t v3 = v2 + 16; // 0x2f9654
    *(int64_t *)v3 = a5;
    *(int64_t *)(v2 - 16) = 310;
    *(int64_t *)(v2 + 32) = v1;
    *(int64_t *)(v2 - 8) = *(int64_t *)(v2 + 8);
    v1 = v3;
    int64_t v4; // 0x2f9551
    return function_caf2a(a1, a2, a3, a4, v4, v4, v4);
}

// Address range: 0x2f96c0 - 0x2f97f5
int64_t function_2f96c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f96c0
    int64_t v1; // 0x2f96c0
    return function_caf2a(a1, a2, a3, a4, 169, v1, 0x2f3e6a);
}
