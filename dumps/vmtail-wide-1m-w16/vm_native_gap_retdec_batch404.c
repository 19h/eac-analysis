/*
 * Targeted RetDec C for native executable gap queue batch 404.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd47c7-0xd49c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd49c7-0xd4bc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd4bc7-0xd4dc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x10e3bf-0x10e5bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10e7bf-0x10e9bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fc034-0x1fc234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fc234-0x1fc434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fc634-0x1fc834 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10e3bf(void);
int64_t function_10e3e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_10e55a(int64_t a1);
int64_t function_10e5ae(int64_t a1);
int64_t function_10e7bf(void);
int64_t function_10e86b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10e8dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10e970(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10e991(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fc005();
int64_t function_1fc034(void);
int64_t function_1fc038(void);
int64_t function_1fc044(void);
int64_t function_1fc06a(void);
int64_t function_1fc076(int64_t a1);
int64_t function_1fc115(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fc19e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fc228(void);
int64_t function_1fc231(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fc264(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fc2c5(void);
int64_t function_1fc2ce(void);
int64_t function_1fc2e7(void);
int64_t function_1fc2f2(void);
int64_t function_1fc300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fc3ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fc3fd(void);
int64_t function_1fc427(void);
int64_t function_1fc634(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fc644(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fc704(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fc729(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fc7d6(int64_t a1);
int64_t function_1fc7e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_caf2a();
int64_t function_d47c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d482e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d48a1(int64_t a1, int64_t a2);
int64_t function_d48b1(int64_t a1, int64_t a2);
int64_t function_d48e2(void);
int64_t function_d48f1(void);
int64_t function_d495c(void);
int64_t function_d49e9(void);
int64_t function_d4a04(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d4a2f(void);
int64_t function_d4a38(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d4aef(int64_t a1);
int64_t function_d4b4c(void);
int64_t function_d4b4d(void);
int64_t function_d4ba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d4bb2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_d4be8(int64_t a1);
int64_t function_d4c1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d4c6a(int64_t a1);
int64_t function_d4cb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffffa1184bf0();
int64_t function_ffffffffb44b1bef();
int64_t function_ffffffffc003657a();
int64_t unknown_105ea654();
int64_t unknown_108afa43();
int64_t unknown_1a7390c();
int64_t unknown_235721e8();
int64_t unknown_3a3d70d2();
int64_t unknown_3a9828ac();
int64_t unknown_5e1158c5();
int64_t unknown_ffffffff95be6d06();
int64_t unknown_ffffffffae560279();
int64_t unknown_ffffffffd520ff3d();
int64_t unknown_fffffffff3155adf();

// Address range: 0xd47c7 - 0xd47ee
int64_t function_d47c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = __asm_in(112); // 0xd47d5
    int64_t v2; // 0xd47c7
    *(char *)a1 = (char)v2;
    int32_t v3 = v1 - 0x1e801e8; // 0xd47db
    __asm_out(106, v3);
    __asm_out_133(100, (char)v3);
    return v3 ^ (int32_t)v2;
}

// Address range: 0xd482e - 0xd4870
int64_t function_d482e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 0x4d282700); // 0xd482e
    int32_t v2 = *v1; // 0xd482e
    int64_t v3; // 0xd482e
    int32_t v4 = v3; // 0xd482e
    int32_t v5 = v2 + v4; // 0xd482e
    *v1 = v5;
    int64_t result; // 0xd482e
    if (((v5 ^ v2) & (v5 ^ v4)) < 0) {
        uint64_t v6 = v3 & 0x17965f14 | 0xe869a0eb; // 0xd4836
        int32_t * v7 = (int32_t *)(a4 + 0x57c41e7f); // 0xd483b
        *v7 = *v7 + (int32_t)v3;
        char * v8 = (char *)(8 * v3 - 0x1486f2ff + v6); // 0xd4841
        *v8 = *v8 | (char)(v6 / 256);
        unknown_105ea654();
        char * v9 = (char *)(a2 - 0x242893aa); // 0xd4853
        *v9 = *v9 | (char)a4;
        bool v10; // 0xd482e
        int64_t v11 = v10 ? -1 : 1; // 0xd4859
        result = __asm_int1(v11 + a1, ((int32_t)a4 & -256 | 232) + (int32_t)a2);
    }
    // 0xd486d
    return result;
}

// Address range: 0xd48a1 - 0xd48b1
int64_t function_d48a1(int64_t a1, int64_t a2) {
    // 0xd48a1
    return unknown_3a9828ac(a1, a2);
}

// Address range: 0xd48b1 - 0xd48b6
int64_t function_d48b1(int64_t a1, int64_t a2) {
    // 0xd48b1
    int64_t v1; // 0xd48b1
    uint64_t v2 = v1;
    return v2 & 0xffffff00 | (int64_t)*(char *)(v1 + v2 % 256);
}

// Address range: 0xd48e2 - 0xd48ea
int64_t function_d48e2(void) {
    // 0xd48e2
    return unknown_235721e8();
}

// Address range: 0xd48f1 - 0xd48f6
int64_t function_d48f1(void) {
    // 0xd48f1
    return function_ffffffffb44b1bef();
}

// Address range: 0xd495c - 0xd4961
int64_t function_d495c(void) {
    // 0xd495c
    return function_ffffffffc003657a();
}

// Address range: 0xd49e9 - 0xd49ee
int64_t function_d49e9(void) {
    // 0xd49e9
    int64_t v1; // 0xd49e9
    return function_d4a38(v1, v1, (int64_t)&g1);
}

// Address range: 0xd4a04 - 0xd4a11
int64_t function_d4a04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd4a04
    int64_t v1; // 0xd4a04
    unsigned char v2 = (char)v1;
    unsigned char v3 = v2 + (char)a4; // 0xd4a04
    *(char *)v1 = v3;
    return unknown_1a7390c(a1, a2, a3, a4) - (v3 < v2 ? 0x97a094fb : 0x97a094fa) & 0xffffffff;
}

// Address range: 0xd4a2f - 0xd4a31
int64_t function_d4a2f(void) {
    // 0xd4a2f
    int64_t result; // 0xd4a2f
    return result;
}

// Address range: 0xd4a38 - 0xd4a46
int64_t function_d4a38(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd4a38
    int64_t result; // 0xd4a38
    int32_t * v1 = (int32_t *)(result + 0x7f6ca608); // 0xd4a40
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xd4aef - 0xd4af0
int64_t function_d4aef(int64_t a1) {
    // 0xd4aef
    int64_t result; // 0xd4aef
    return result;
}

// Address range: 0xd4b4c - 0xd4b4d
int64_t function_d4b4c(void) {
    // 0xd4b4c
    int64_t result; // 0xd4b4c
    return result;
}

// Address range: 0xd4b4d - 0xd4b50
int64_t function_d4b4d(void) {
    // 0xd4b4d
    int64_t result; // 0xd4b4d
    return result;
}

// Address range: 0xd4ba5 - 0xd4bb0
int64_t function_d4ba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd4ba5
    return a4 & 0xffffffff;
}

// Address range: 0xd4bb2 - 0xd4bdd
int64_t function_d4bb2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xd4bb2
    int64_t v1; // 0xd4bb2
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = v2 - ((int32_t)v2 < 0x7a2c4951 ? 0x34f900b2 : 0x34f900b1); // 0xd4bb7
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint64_t v5 = a4 % 64; // 0xd4bc2
    bool v6 = (int32_t)v4 < -0x296408ff; // 0xd4bc2
    if (v5 != 0) {
        int64_t v7 = a3 >> v5; // 0xd4bc2
        *(int64_t *)a3 = v7;
        v6 = v7 < 0;
    }
    int64_t v8 = v4 & 0xffffffff; // 0xd4bc5
    if (!v6) {
        v8 = function_d4b4c();
    }
    unsigned char v9 = *(char *)&v3; // 0xd4bcb
    int32_t v10 = *(int32_t *)-0x24e8bc84; // 0xd4bd2
    *(int32_t *)-0x24e8bc84 = v10 + (int32_t)(v8 & 0xffffff00 | (int64_t)v9);
    return function_ffffffffa1184bf0();
}

// Address range: 0xd4be8 - 0xd4be9
int64_t function_d4be8(int64_t a1) {
    // 0xd4be8
    int64_t result; // 0xd4be8
    return result;
}

// Address range: 0xd4c1a - 0xd4c22
int64_t function_d4c1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd4c1a
    int64_t v1; // 0xd4c1a
    return (uint64_t)v1 / 2 % 0x80000000;
}

// Address range: 0xd4c6a - 0xd4c6d
int64_t function_d4c6a(int64_t a1) {
    // 0xd4c6a
    int64_t result; // 0xd4c6a
    return result;
}

// Address range: 0xd4cb1 - 0xd4d16
int64_t function_d4cb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t result; // 0xd4cb1
    bool v2; // 0xd4cb1
    if (!v2) {
        char v3 = __asm_in_134(-19); // 0xd4cf6
        char * v4 = (char *)((result & -256 | (int64_t)v3) + 0x1e8200a); // 0xd4cff
        *v4 = *v4 - v3;
        // 0xd4d05
        *(char *)v1 = *(char *)&v1 | -24;
        int64_t v5; // 0xd4cb1
        return v5 & 0xffffffff;
    }
    char * v6 = (char *)(a1 - 0x17ff6634); // 0xd4ccf
    *v6 = *v6 + (char)result;
    int32_t * v7 = (int32_t *)(8 * a1 - 92 + result); // 0xd4cd5
    uint32_t v8 = *v7; // 0xd4cd5
    uint32_t v9 = v8 + (int32_t)a2; // 0xd4cd5
    *v7 = v9;
    int32_t v10 = *(int32_t *)(result - 0x5ae59600); // 0xd4cd9
    uint32_t v11 = (int32_t)result - v10 + (int32_t)(v9 < v8); // 0xd4cd9
    if (llvm_ctpop_i8((char)v11) % 2 != 0) {
        // 0xd4ce1
        return result;
    }
    // 0xd4d05
    *(char *)v1 = *(char *)&v1 | -24;
    return (int64_t)v11 & 0xffffffff;
}

// Address range: 0x10e3bf - 0x10e3e6
int64_t function_10e3bf(void) {
    // 0x10e3bf
    return function_caf2a();
}

// Address range: 0x10e3e6 - 0x10e519
int64_t function_10e3e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x10e3e6
    return function_caf2a();
}

// Address range: 0x10e55a - 0x10e55d
int64_t function_10e55a(int64_t a1) {
    // 0x10e55a
    int64_t result; // 0x10e55a
    return result;
}

// Address range: 0x10e5ae - 0x10e5b1
int64_t function_10e5ae(int64_t a1) {
    // 0x10e5ae
    int64_t result; // 0x10e5ae
    return result;
}

// Address range: 0x10e7bf - 0x10e7c7
int64_t function_10e7bf(void) {
    // 0x10e7bf
    int64_t v1; // 0x10e7bf
    int64_t v2 = v1;
    unknown_5e1158c5();
    uint64_t result = __asm_iretd(); // 0x10e7c4
    *(char *)v2 = (char)(result / 256 & v2);
    return result;
}

// Address range: 0x10e86b - 0x10e891
int64_t function_10e86b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    *(int32_t *)v1 = *(int32_t *)&v1;
    int64_t result; // 0x10e86b
    return result;
}

// Address range: 0x10e8dc - 0x10e8f0
int64_t function_10e8dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10e8dc
    int64_t v1; // 0x10e8dc
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x13d002c); // 0x10e8e2
    unsigned char v4 = *v3; // 0x10e8e2
    unsigned char v5 = v4 + (char)(v2 / 256); // 0x10e8e2
    *v3 = v5;
    return v1 - (v5 < v4 ? 0xb68671e0 : 0xb68671df) & 0xffffffff;
}

// Address range: 0x10e970 - 0x10e991
int64_t function_10e970(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffae560279(); // 0x10e973
    int64_t v2; // 0x10e970
    *(int32_t *)a3 = (int32_t)v2 + (int32_t)a3;
    int64_t v3 = 0x100000000 * v1 - 0x17311ab800000000 >> 32; // 0x10e988
    uint64_t v4 = v3 * v3; // 0x10e988
    int32_t * v5 = (int32_t *)(v2 + 0x56689a30); // 0x10e98a
    *v5 = *v5 + (int32_t)(v4 / 0x100000000);
    return v4 & 0xffffffff;
}

// Address range: 0x10e991 - 0x10e99d
int64_t function_10e991(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x71fe17a2); // 0x10e991
    int64_t result; // 0x10e991
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)(result - 127); // 0x10e997
    *v2 = *v2 | (int32_t)a4;
    return result;
}

// Address range: 0x1fc034 - 0x1fc038
int64_t function_1fc034(void) {
    // 0x1fc034
    int64_t result; // 0x1fc034
    return result;
}

// Address range: 0x1fc038 - 0x1fc03f
int64_t function_1fc038(void) {
    // 0x1fc038
    int64_t result; // 0x1fc038
    return result;
}

// Address range: 0x1fc044 - 0x1fc047
int64_t function_1fc044(void) {
    // 0x1fc044
    int64_t result; // 0x1fc044
    return result;
}

// Address range: 0x1fc06a - 0x1fc06d
int64_t function_1fc06a(void) {
    // 0x1fc06a
    return function_1fc005();
}

// Address range: 0x1fc076 - 0x1fc079
int64_t function_1fc076(int64_t a1) {
    // 0x1fc076
    int64_t result; // 0x1fc076
    return result;
}

// Address range: 0x1fc115 - 0x1fc11d
int64_t function_1fc115(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fc115
    int64_t v1; // 0x1fc115
    return v1 & -0xff01 | (int64_t)"addrinfo";
}

// Address range: 0x1fc19e - 0x1fc1e6
int64_t function_1fc19e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1fc19e
    int64_t v1; // 0x1fc19e
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(a4 - 10); // 0x1fc19e
    *v4 = *v4 + (int32_t)a4;
    unsigned char v5 = *(char *)(v3 - 0x32e03373) & (char)(a3 / 256); // 0x1fc1a1
    int64_t v6 = a4 - 1; // 0x1fc1a7
    if (v6 != 0 != (v5 == 0)) {
        // 0x1fc1a9
        return __asm_hlt();
    }
    // 0x1fc1c4
    *(int32_t *)v2 = (int32_t)(v2 | a3 & 0xffff00ff | 256 * (int64_t)v5);
    char * v7 = (char *)(((v3 - v2 / 256) % 256 | v3 & 0xffffff00) + 19); // 0x1fc1c9
    *v7 = *v7 + (char)v6;
    unknown_3a3d70d2();
    __asm_wait();
    uint32_t v8 = (int32_t)a2; // 0x1fc1d4
    uint32_t v9 = *(int32_t *)(a2 - 66); // 0x1fc1d4
    int32_t v10 = v8 - v9; // 0x1fc1d4
    unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x1fc1d4
    int64_t v12 = unknown_fffffffff3155adf(); // 0x1fc1d9
    uint64_t v13 = v12 + 201; // 0x1fc1df
    int64_t v14 = v12 & -0x10000 | v13 % 256 | 256 * (64 * (int64_t)(v10 == 0) | (int64_t)(v9 > v8) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v8 % 16 - v9 % 16 > 15) | 4 * (int64_t)(v11 % 2 == 0)) | 512; // 0x1fc1df
    char * v15 = (char *)(2 * v14); // 0x1fc1e2
    *v15 = *v15 | (char)v13;
    return 0x10000 * (int32_t)v14 >> 16;
}

// Address range: 0x1fc228 - 0x1fc22a
int64_t function_1fc228(void) {
    // 0x1fc228
    int64_t result; // 0x1fc228
    return result;
}

// Address range: 0x1fc231 - 0x1fc247
int64_t function_1fc231(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fc231
    unknown_ffffffffd520ff3d();
    int64_t result = unknown_108afa43(); // 0x1fc23d
    __asm_out_135((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x1fc264 - 0x1fc268
int64_t function_1fc264(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fc264
    int64_t result; // 0x1fc264
    return result;
}

// Address range: 0x1fc2c5 - 0x1fc2c8
int64_t function_1fc2c5(void) {
    // 0x1fc2c5
    int64_t result; // 0x1fc2c5
    return result;
}

// Address range: 0x1fc2ce - 0x1fc2cf
int64_t function_1fc2ce(void) {
    // 0x1fc2ce
    int64_t result; // 0x1fc2ce
    return result;
}

// Address range: 0x1fc2e7 - 0x1fc2ea
int64_t function_1fc2e7(void) {
    // 0x1fc2e7
    int64_t result; // 0x1fc2e7
    return result;
}

// Address range: 0x1fc2f2 - 0x1fc2f8
int64_t function_1fc2f2(void) {
    // 0x1fc2f2
    int64_t result; // 0x1fc2f2
    return result;
}

// Address range: 0x1fc300 - 0x1fc310
int64_t function_1fc300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff95be6d06(); // 0x1fc300
    int64_t v2; // 0x1fc300
    *(char *)a1 = (char)v2;
    bool v3; // 0x1fc300
    int32_t * v4 = (int32_t *)(a1 + 58 + (v3 ? -1 : 1)); // 0x1fc30a
    *v4 = *v4 + (int32_t)a4;
    return v1 + v2 & 0xffffffff;
}

// Address range: 0x1fc3ec - 0x1fc3ef
int64_t function_1fc3ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fc3ec
    int64_t result; // 0x1fc3ec
    return result;
}

// Address range: 0x1fc3fd - 0x1fc40c
int64_t function_1fc3fd(void) {
    // 0x1fc3fd
    int64_t v1; // 0x1fc3fd
    uint16_t v2 = (int16_t)v1; // 0x1fc402
    uint16_t v3 = (int16_t)*(char *)(v1 - 0x48c4a958); // 0x1fc402
    int64_t v4 = v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3)); // 0x1fc402
    bool v5; // 0x1fc3fd
    return (int64_t)(*(int32_t *)v4 + (int32_t)v5 + (int32_t)v4);
}

// Address range: 0x1fc427 - 0x1fc429
int64_t function_1fc427(void) {
    // 0x1fc427
    int64_t result; // 0x1fc427
    return result;
}

// Address range: 0x1fc634 - 0x1fc643
int64_t function_1fc634(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fc634
    int64_t v1; // 0x1fc634
    int64_t v2 = 2 * v1; // 0x1fc634
    int32_t * v3 = (int32_t *)(a3 - 0x39f9dfcf); // 0x1fc636
    uint32_t v4 = *v3; // 0x1fc636
    uint32_t v5 = v4 + (int32_t)a2; // 0x1fc636
    *v3 = v5;
    uint64_t v6 = v2 - (v5 < v4 ? 2 : 1); // 0x1fc63e
    int64_t v7 = v2 & 0xffffff00; // 0x1fc63e
    *(int32_t *)a1 = (int32_t)(v6 % 256 | v7);
    return (v6 + 175) % 256 | v7;
}

// Address range: 0x1fc644 - 0x1fc6c4
int64_t function_1fc644(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fc644
    int64_t v1; // 0x1fc644
    int64_t v2 = v1;
    int64_t v3 = (int64_t)(0x1cc83c23 * *(int32_t *)(v1 - 101 + 4 * v1)); // 0x1fc64b
    int32_t * v4 = (int32_t *)(a4 + 53); // 0x1fc656
    uint32_t v5 = *v4; // 0x1fc656
    uint32_t v6 = v5 + (int32_t)v2; // 0x1fc656
    *v4 = v6;
    uint64_t v7 = a4 - 1; // 0x1fc659
    if (v7 != 0 != (v6 == 0)) {
        // 0x1fc68e
        bool v8; // 0x1fc644
        int64_t v9 = v8 ? -4 : 4; // 0x1fc649
        int64_t v10 = v9 + a2; // 0x1fc649
        *(int32_t *)v3 = *(int32_t *)v10;
        __asm_outsb((int16_t)a3, *(char *)(v10 + v9));
        return (v2 + v7 / 256) % 256 | v2 & 0xffffff00;
    }
    unsigned char v11 = (char)v2; // 0x1fc6b4
    unsigned char v12 = v6 < v5 ? 90 : 89; // 0x1fc6b4
    int32_t * v13 = (int32_t *)(v3 - 0x17d6df96); // 0x1fc6b7
    *v13 = *v13 / 2 | 0x80000000 * (int32_t)(v6 < v5 | v12 > v11);
    char * v14 = (char *)(8 * v3 + a3); // 0x1fc6bf
    *v14 = *v14 | 119;
    return v2 & 0xffffff00 | (int64_t)(v11 - v12);
}

// Address range: 0x1fc704 - 0x1fc723
int64_t function_1fc704(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fc704
    int64_t result; // 0x1fc704
    bool v1; // 0x1fc704
    if (!v1) {
        // 0x1fc722
        return result;
    }
    int32_t * v2 = (int32_t *)(a4 - 14); // 0x1fc708
    *v2 = *v2 + (int32_t)a2;
    return result;
}

// Address range: 0x1fc729 - 0x1fc7b0
int64_t function_1fc729(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t result; // 0x1fc729
    bool v2; // 0x1fc729
    if (a4 == 1 || v2) {
        // 0x1fc72d
        return result;
    }
    // 0x1fc7ac
    *(int32_t *)a1 = 2 * (int32_t)a1;
    *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)a2;
    return result;
}

// Address range: 0x1fc7d6 - 0x1fc7d9
int64_t function_1fc7d6(int64_t a1) {
    // 0x1fc7d6
    int64_t result; // 0x1fc7d6
    return result;
}

// Address range: 0x1fc7e9 - 0x1fc7ed
int64_t function_1fc7e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fc7e9
    int64_t result; // 0x1fc7e9
    return result;
}
