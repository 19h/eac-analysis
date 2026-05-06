/*
 * Targeted RetDec C for native executable gap queue batch 260.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1676aa-0x1678aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1678aa-0x167aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x167aaa-0x167caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x167caa-0x167eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x255ec2-0x2560c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2560c2-0x2562c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2562c2-0x2564c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2566c2-0x2568c2 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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

int64_t function_146a6532();
int64_t function_1676aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_167707(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16772e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_167732(int64_t a1);
int64_t function_167733(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_167747(int64_t a1);
int64_t function_16774c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_167813(void);
int64_t function_167873(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_167877(void);
int64_t function_1678a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1678c3(void);
int64_t function_1678c6(int64_t a1);
int64_t function_1678d0(void);
int64_t function_1678f5(int64_t a1);
int64_t function_16791c(void);
int64_t function_167926(void);
int64_t function_16795d(void);
int64_t function_1679a7(void);
int64_t function_1679d0(int64_t a1);
int64_t function_167a27(void);
int64_t function_167a36(int64_t a1);
int64_t function_167a59(int64_t a1);
int64_t function_167a72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_167ab6(int64_t a1);
int64_t function_167aea(void);
int64_t function_167af2(void);
int64_t function_167b11(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_167b50(int64_t a1);
int64_t function_167b51(int64_t a1);
int64_t function_167b52(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_167b94(int64_t a1);
int64_t function_167bb8(void);
int64_t function_167bfb(void);
int64_t function_167c27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_167c70(void);
int64_t function_167c9d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_167cb9(int64_t a1);
int64_t function_167cc8(int64_t a1);
int64_t function_167d0c(void);
int64_t function_167d1a(void);
int64_t function_167d3c(void);
int64_t function_167d51(void);
int64_t function_167d8b(int64_t a1, int64_t a2);
int64_t function_167d97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_167dfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_167e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_167e94(void);
int64_t function_255ec2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_255f4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2560c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_25621f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_256382(void);
int64_t function_25639c(int64_t a1);
int64_t function_2563c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25642b(void);
int64_t function_256432(void);
int64_t function_256472(int64_t a1);
int64_t function_256478(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2566c2(int64_t a1, int64_t result);
int64_t function_2566e2(void);
int64_t function_25672f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_256756(int64_t a1);
int64_t function_25675c(void);
int64_t function_256786(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25678e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2567b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25905f();
int64_t function_3a1f7513();
int64_t function_3d016537();
int64_t function_c57b8();
int64_t function_ffffffff887202c6();
int64_t function_ffffffff9b327ab5();
int64_t function_ffffffffd87e6ac9();
int64_t unknown_1819fd38();
int64_t unknown_25aa1072();
int64_t unknown_67d84a6();
int64_t unknown_802061ab();
int64_t unknown_ffffffff9e9c8ce1();
int64_t unknown_ffffffffa38ee3bf();
int64_t unknown_ffffffffaa3050d8();
int64_t unknown_ffffffffae0bd00d();
int64_t unknown_ffffffffc43d659d();
int64_t unknown_ffffffffc54811bc();
int64_t unknown_ffffffffd099749e();
int64_t unknown_ffffffffd97f8232();
int64_t unknown_ffffffffd9d337a4();

// Address range: 0x1676aa - 0x167705
int64_t function_1676aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a2 + 2); // 0x1676ac
    int64_t v3; // 0x1676aa
    *v2 = *v2 + (int32_t)v3;
    if ((int32_t)v3 <= -0x2d8e0000) {
        char * v4 = (char *)(a3 - 0x751a3481); // 0x1676b6
        *v4 = *v4 ^ (char)a4;
        *(int32_t *)v1 = __asm_insd((int16_t)a3);
        return v3 & -256 | (int64_t)__asm_in(-72);
    }
    int64_t v5 = (v3 & 0xffffffff | 0x100000000 * a3) / (int64_t)*(int32_t *)&v1; // 0x1676f5
    int64_t v6 = v5 & 0xffffffff; // 0x1676f5
    int32_t * v7 = (int32_t *)v6; // 0x1676f7
    *v7 = *v7 - (int32_t)v5;
    bool v8; // 0x1676aa
    int64_t v9 = v8 ? -4 : 4; // 0x167700
    return __asm_int3(v1 + v9, v9 + a2, v6);
}

// Address range: 0x167707 - 0x16770f
int64_t function_167707(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 0x5a7172e8); // 0x167707
    int64_t v2; // 0x167707
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return __asm_sti(a1, a2, a3);
}

// Address range: 0x16772e - 0x167732
int64_t function_16772e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16772e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x16772e
    return result;
}

// Address range: 0x167732 - 0x167733
int64_t function_167732(int64_t a1) {
    // 0x167732
    int64_t result; // 0x167732
    return result;
}

// Address range: 0x167733 - 0x167745
int64_t function_167733(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x167733
    int64_t v1; // 0x167733
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)v1 + (int32_t)((char)v1 < (char)v1);
    return a4 & 0xffffff4b | 180;
}

// Address range: 0x167747 - 0x167748
int64_t function_167747(int64_t a1) {
    // 0x167747
    int64_t result; // 0x167747
    return result;
}

// Address range: 0x16774c - 0x16774e
int64_t function_16774c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16774c
    return __asm_sti(a1, a2, a3);
}

// Address range: 0x167813 - 0x16781d
int64_t function_167813(void) {
    // 0x167813
    return function_ffffffff9b327ab5();
}

// Address range: 0x167873 - 0x167875
int64_t function_167873(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x167873
    return a3 & 0xffffffff;
}

// Address range: 0x167877 - 0x16787a
int64_t function_167877(void) {
    // 0x167877
    return 0;
}

// Address range: 0x1678a9 - 0x1678ae
int64_t function_1678a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1678a9
    int64_t result; // 0x1678a9
    *(char *)a4 = 2 * (char)result;
    return result;
}

// Address range: 0x1678c3 - 0x1678c4
int64_t function_1678c3(void) {
    // 0x1678c3
    int64_t result; // 0x1678c3
    return result;
}

// Address range: 0x1678c6 - 0x1678cf
int64_t function_1678c6(int64_t a1) {
    // 0x1678c6
    int64_t result; // 0x1678c6
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1678d0 - 0x1678da
int64_t function_1678d0(void) {
    // 0x1678d0
    return function_1678c3();
}

// Address range: 0x1678f5 - 0x1678f8
int64_t function_1678f5(int64_t a1) {
    // 0x1678f5
    int64_t result; // 0x1678f5
    return result;
}

// Address range: 0x16791c - 0x167921
int64_t function_16791c(void) {
    // 0x16791c
    return function_ffffffffd87e6ac9();
}

// Address range: 0x167926 - 0x167929
int64_t function_167926(void) {
    // 0x167926
    int64_t result; // 0x167926
    return result;
}

// Address range: 0x16795d - 0x16795f
int64_t function_16795d(void) {
    // 0x16795d
    int64_t result; // 0x16795d
    return result;
}

// Address range: 0x1679a7 - 0x1679a8
int64_t function_1679a7(void) {
    // 0x1679a7
    int64_t result; // 0x1679a7
    return result;
}

// Address range: 0x1679d0 - 0x1679d4
int64_t function_1679d0(int64_t a1) {
    // 0x1679d0
    return function_1679a7();
}

// Address range: 0x167a27 - 0x167a31
int64_t function_167a27(void) {
    // 0x167a27
    int64_t result; // 0x167a27
    *(char *)-0x668b7577fd60fec3 = (char)result;
    return result;
}

// Address range: 0x167a36 - 0x167a3f
int64_t function_167a36(int64_t a1) {
    // 0x167a36
    int64_t result; // 0x167a36
    return result;
}

// Address range: 0x167a59 - 0x167a5c
int64_t function_167a59(int64_t a1) {
    // 0x167a59
    int64_t result; // 0x167a59
    return result;
}

// Address range: 0x167a72 - 0x167aab
int64_t function_167a72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x68925e89); // 0x167a72
    int64_t v2; // 0x167a72
    int32_t v3 = v2; // 0x167a72
    *v1 = *v1 + v3;
    int64_t v4; // 0x167a72
    *(int32_t *)v4 = *(int32_t *)&v4 | v3;
    *(int32_t *)a1 = (int32_t)v4;
    bool v5; // 0x167a72
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x167a7d
    int32_t * v7 = (int32_t *)(a2 - 108); // 0x167a7e
    *v7 = *v7 | 0x406e0;
    uint64_t v8 = v4;
    v4 = (v8 + 16 + (int64_t)((int32_t)v8 < 0x711e8401)) % 256 | v8 & -256;
    char * v9 = (char *)(v2 + 0x1b386e25); // 0x167a8c
    *v9 = *v9 | (char)(v8 / 256);
    int64_t v10; // 0x167a72
    *(char *)v6 = *(char *)&v10;
    int64_t v11 = v5 ? -1 : 1; // 0x167a94
    v10 = v11 + a2;
    int32_t * v12 = (int32_t *)v4; // 0x167aa0
    *v12 = *v12 + (int32_t)a3;
    return function_167b11(v6 + v11, v10, a3);
}

// Address range: 0x167ab6 - 0x167ac6
int64_t function_167ab6(int64_t a1) {
    // 0x167ab6
    int64_t v1; // 0x167ab6
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    int32_t * v2 = (int32_t *)(3 * result); // 0x167ab8
    uint32_t v3 = *v2; // 0x167ab8
    *v2 = v3 - 0x184c2a6d;
    int32_t * v4 = (int32_t *)(a1 - 0x5c45f81b); // 0x167abf
    *v4 = (int32_t)(v3 < 0x184c2a6d) - (int32_t)v1 + *v4;
    return result;
}

// Address range: 0x167aea - 0x167aeb
int64_t function_167aea(void) {
    // 0x167aea
    int64_t result; // 0x167aea
    return result;
}

// Address range: 0x167af2 - 0x167af3
int64_t function_167af2(void) {
    // 0x167af2
    int64_t result; // 0x167af2
    return result;
}

// Address range: 0x167b11 - 0x167b2b
int64_t function_167b11(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x167b11
    int64_t v1; // 0x167b11
    char * v2 = (char *)(v1 - 64); // 0x167b11
    *v2 = *v2 + (char)v1;
    *(char *)0x7f443b = (char)(a3 / 256);
    __asm_out(-17, (int32_t)v1);
    *(char *)(v1 + 0x1e8e1a3) = (char)a3;
    char v3 = __asm_insb((int16_t)(256 * (int64_t)*(char *)0x7f443b | a3 % 256)); // 0x167b28
    *(char *)a1 = v3;
    return __asm_wait();
}

// Address range: 0x167b50 - 0x167b51
int64_t function_167b50(int64_t a1) {
    // 0x167b50
    int64_t result; // 0x167b50
    return result;
}

// Address range: 0x167b51 - 0x167b52
int64_t function_167b51(int64_t a1) {
    // 0x167b51
    int64_t result; // 0x167b51
    return result;
}

// Address range: 0x167b52 - 0x167b94
int64_t function_167b52(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffff00ff | a1; // 0x167b55
    int64_t v2; // 0x167b52
    if ((int32_t)v1 >= 0) {
        v2 = function_167aea();
    }
    int64_t v3 = v2 & 0xffffffff ^ 0x13d0089; // 0x167b5b
    int64_t v4 = v1 & 0xffffffff; // 0x167b63
    if (llvm_ctpop_i8((char)v3 - (char)a1) % 2 == 0) {
        v4 = function_167af2();
    }
    unsigned char v5 = (char)(a3 / 256); // 0x167b65
    unsigned char v6 = (char)v4; // 0x167b65
    unsigned char v7 = v6 + v5; // 0x167b65
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x167b65
    int16_t v9 = 256 * (int64_t)v7 | a3 % 256; // 0x167b6e
    int64_t v10 = 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | (int64_t)(__asm_in_134(v9) & -0xff01 | 512); // 0x167b6f
    int64_t v11 = 0x3d0050f1; // bp-16, 0x167b70
    int32_t * v12 = (int32_t *)(v3 + 0x1d942758); // 0x167b75
    *v12 = *v12 + (int32_t)(int64_t)&v11;
    uint32_t v13 = *(int32_t *)v10 & (int32_t)v10; // 0x167b7b
    int64_t v14 = v13; // 0x167b7b
    int64_t v15; // 0x167b52
    __asm_outsb(v9, *(char *)&v15);
    char v16 = *(char *)(v3 + v14); // 0x167b83
    int64_t result = 256 * (int64_t)(v16 | (char)(v13 / 256)) | v14 & 0xffff00ff; // 0x167b83
    uint32_t v17 = *(int32_t *)(int64_t)((v13 & 48 | 0x6a0390cf) + 16); // 0x167b86
    int32_t * v18 = (int32_t *)(int64_t)v17; // 0x167b89
    *v18 = *v18 ^ (int32_t)result;
    *(char *)-0x63edf96e = *(char *)-0x63edf96e + (char)(v17 / 256);
    return result;
}

// Address range: 0x167b94 - 0x167b9e
int64_t function_167b94(int64_t a1) {
    // 0x167b94
    unknown_ffffffffc43d659d(a1);
    return a1 & 0xffffffff;
}

// Address range: 0x167bb8 - 0x167bb9
int64_t function_167bb8(void) {
    // 0x167bb8
    int64_t result; // 0x167bb8
    return result;
}

// Address range: 0x167bfb - 0x167bff
int64_t function_167bfb(void) {
    // 0x167bfb
    int64_t result; // 0x167bfb
    return result;
}

// Address range: 0x167c27 - 0x167c32
int64_t function_167c27(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x167c27
    int64_t v1; // 0x167c27
    *(char *)v1 = 0;
    if (a4 == 0) {
        function_167bb8();
    }
    // 0x167c2b
    return unknown_ffffffffd97f8232();
}

// Address range: 0x167c70 - 0x167c71
int64_t function_167c70(void) {
    // 0x167c70
    int64_t result; // 0x167c70
    return result;
}

// Address range: 0x167c9d - 0x167cb9
int64_t function_167c9d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x167c9d
    int64_t v1; // 0x167c9d
    int64_t v2 = v1;
    unknown_67d84a6();
    __asm_outsb((int16_t)a3, (char)v1);
    char v3 = *(char *)(v1 + 0x732f01e8); // 0x167ca8
    int32_t v4 = *(int32_t *)0x4715b4d8; // 0x167cb3
    *(int32_t *)0x4715b4d8 = v4 + (int32_t)(v2 & 0xffffff00 | (int64_t)(v3 + (char)v2));
    return __asm_iretd();
}

// Address range: 0x167cb9 - 0x167cc3
int64_t function_167cb9(int64_t a1) {
    int64_t result = unknown_ffffffffa38ee3bf(a1); // 0x167cb9
    int32_t * v1 = (int32_t *)result; // 0x167cbe
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x167cc8 - 0x167ccb
int64_t function_167cc8(int64_t a1) {
    // 0x167cc8
    int64_t result; // 0x167cc8
    return result;
}

// Address range: 0x167d0c - 0x167d11
int64_t function_167d0c(void) {
    // 0x167d0c
    return function_3a1f7513();
}

// Address range: 0x167d1a - 0x167d1b
int64_t function_167d1a(void) {
    // 0x167d1a
    int64_t result; // 0x167d1a
    return result;
}

// Address range: 0x167d3c - 0x167d3d
int64_t function_167d3c(void) {
    // 0x167d3c
    int64_t result; // 0x167d3c
    return result;
}

// Address range: 0x167d51 - 0x167d52
int64_t function_167d51(void) {
    // 0x167d51
    int64_t result; // 0x167d51
    return result;
}

// Address range: 0x167d8b - 0x167d97
int64_t function_167d8b(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x1e5af995); // 0x167d8b
    int64_t v2; // 0x167d8b
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x167d8b
    int64_t v4 = v3 ? -1 : 1; // 0x167d91
    return function_ffffffff887202c6(v4 + a1, v4 + a2);
}

// Address range: 0x167d97 - 0x167df9
int64_t function_167d97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x167d97
    int64_t v1; // 0x167d97
    uint64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a2;
    uint64_t v5 = v2 / 256; // 0x167d97
    *(char *)a3 = (char)(v5 | a3);
    int64_t v6; // 0x167d97
    if (v5 > v1 / 256) {
        v6 = function_167d3c();
    }
    // 0x167d9d
    *(char *)v2 = (char)v5 + (char)v2;
    bool v7; // 0x167d97
    int64_t v8 = v7 ? -1 : 1; // 0x167d9f
    int64_t v9 = v8 + a1; // 0x167d9f
    uint32_t v10 = (int32_t)v6; // 0x167da5
    uint32_t v11 = v10 - 0xf09725; // 0x167da5
    int64_t v12 = v11; // 0x167da5
    char * v13; // 0x167d97
    char v14; // 0x167d97
    int64_t v15; // 0x167d97
    char v16; // 0x167d97
    if (v10 < 0xf09725 || v11 == 0) {
        // 0x167de3
        __asm_outsd((int16_t)a3, *(int32_t *)&v4);
        *(int32_t *)a3 = (int32_t)v9;
        *(int32_t *)v9 = *(int32_t *)&v4;
        char * v17 = (char *)v12;
        char v18 = *v17 + (char)v11; // 0x167dec
        *v17 = v18;
        v16 = -19;
        v13 = v17;
        v14 = v18;
        v15 = v12;
    } else {
        int32_t v19 = v1; // bp-8, 0x167dac
        *(int32_t *)v9 = (int32_t)(int64_t)&v19;
        if ((0xf09724 - v10 & v10) >= 0) {
            function_167d51();
        }
        uint32_t v20 = -0x655fec3 * v19; // 0x167db8
        int64_t result = v20; // 0x167db8
        v4 += v8;
        int32_t * v21 = (int32_t *)(v12 + 3); // 0x167dbf
        int32_t v22 = *v21 - (*(int32_t *)&v3 & (int32_t)v2); // 0x167dbf
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0x167dbf
        *v21 = v22;
        if (v23 % 2 != 0) {
            // 0x167dcb
            *(char *)v3 = *(char *)&v3 + (char)v20;
            __asm_int(61);
            int32_t * v24 = (int32_t *)result; // 0x167dd2
            *v24 = *v24 + v20;
            return result;
        }
        char * v25 = (char *)result;
        v16 = 0;
        v13 = v25;
        v14 = *v25;
        v15 = result;
    }
    int64_t v26 = v15;
    char v27 = v14 + v16; // 0x167dee
    *v13 = v27;
    *(char *)-0x310e6007 = *(char *)-0x310e6007 + v16;
    return v26 & 0xffffff00 | (int64_t)(v27 + (char)v26);
}

// Address range: 0x167dfa - 0x167e22
int64_t function_167dfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x167dfa
    int64_t v1; // 0x167dfa
    uint64_t v2 = v1;
    __asm_int(38);
    int32_t * v3 = (int32_t *)(a4 + 0x6af9b27e); // 0x167e01
    *v3 = *v3 | (int32_t)a3;
    int32_t v4 = v2; // 0x167e07
    int64_t v5; // 0x167dfa
    *(int32_t *)v5 = *(int32_t *)&v5 ^ v4;
    *(char *)-0x5dc2e0ec = *(char *)-0x5dc2e0ec + (char)(v2 / 256);
    int32_t * v6 = (int32_t *)(a2 - 95); // 0x167e15
    *v6 = *v6 + v4;
    return v5 + 0xa656ef70 & 0xffffffff;
}

// Address range: 0x167e22 - 0x167e37
int64_t function_167e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x58b0a52c; // 0x167e25
    int64_t result; // 0x167e22
    unsigned char v2 = v1 + (char)((uint64_t)result / 256) - (char)result; // 0x167e25
    *(char *)0x58b0a52c = v2;
    int32_t * v3 = (int32_t *)(a4 + 88); // 0x167e2b
    *v3 = *v3 - (int32_t)a1 + (int32_t)(v2 < v1);
    int64_t v4; // 0x167e22
    int32_t v5 = *(int32_t *)&v4; // 0x167e31
    *(int32_t *)a2 = 2 * v5 | (int32_t)(v5 < 0);
    return result;
}

// Address range: 0x167e94 - 0x167e9a
int64_t function_167e94(void) {
    // 0x167e94
    int64_t result; // 0x167e94
    return result;
}

// Address range: 0x255ec2 - 0x255f4e
int64_t function_255ec2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x255ec2
    int64_t v1; // 0x255ec2
    char * v2 = (char *)(v1 - 125); // 0x255ec2
    char v3 = a4; // 0x255ec2
    *v2 = *v2 + v3;
    char * v4 = (char *)((v1 & -256 | (int64_t)__asm_in_133((int16_t)a3)) - 119); // 0x255ec6
    *v4 = *v4 | v3;
    int64_t v5 = a6; // bp+32, 0x255ed8
    int64_t v6 = (int64_t)&v5; // bp+16, 0x255f41
    return function_c57b8(a1, a2, a3, a4, v1, v1, (int64_t)&v6 + 16);
}

// Address range: 0x255f4e - 0x2560c9
int64_t function_255f4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x255f4e
    int64_t v1; // 0x255f4e
    return function_c57b8(a1, a2, a3, a4, a5, v1, a4);
}

// Address range: 0x2560c9 - 0x25621f
int64_t function_2560c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2560c9
    int64_t v1; // 0x2560c9
    bool v2; // 0x2560c9
    return function_c57b8(a1, a2, a3, 0x3e704bd1, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x25621f - 0x256382
int64_t function_25621f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25621f
    int64_t v1; // 0x25621f
    return function_c57b8(a4, a2, a3, a4, v1, v1, v1);
}

// Address range: 0x256382 - 0x256387
int64_t function_256382(void) {
    // 0x256382
    return function_25905f();
}

// Address range: 0x25639c - 0x2563be
int64_t function_25639c(int64_t a1) {
    // 0x25639c
    bool v1; // 0x25639c
    bool v2 = v1;
    unknown_ffffffffd9d337a4();
    while (v2) {
        // 0x25639d
        v2 = true;
        unknown_ffffffffd9d337a4();
    }
    while (true) {
        // continue -> 0x2563a5
    }
}

// Address range: 0x2563c6 - 0x2563cf
int64_t function_2563c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 10); // 0x2563ca
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x2563c6
    return result;
}

// Address range: 0x25642b - 0x256430
int64_t function_25642b(void) {
    // 0x25642b
    return function_3d016537();
}

// Address range: 0x256432 - 0x256438
int64_t function_256432(void) {
    // 0x256432
    return unknown_1819fd38();
}

// Address range: 0x256472 - 0x256475
int64_t function_256472(int64_t a1) {
    // 0x256472
    int64_t result; // 0x256472
    return result;
}

// Address range: 0x256478 - 0x25647f
int64_t function_256478(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x256478
    int64_t v1; // 0x256478
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)a4;
    return function_146a6532();
}

// Address range: 0x2566c2 - 0x2566c4
int64_t function_2566c2(int64_t a1, int64_t result) {
    // 0x2566c2
    return result;
}

// Address range: 0x2566e2 - 0x2566e3
int64_t function_2566e2(void) {
    // 0x2566e2
    int64_t result; // 0x2566e2
    return result;
}

// Address range: 0x25672f - 0x256745
int64_t function_25672f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2 & 0xffffffff; // 0x25672f
    char * v2 = (char *)(v1 - 97); // 0x256730
    *v2 = 2 * *v2;
    int64_t result = v1; // 0x25673b
    if (a4 == 0) {
        result = function_2566e2();
    }
    // 0x25673d
    return result;
}

// Address range: 0x256756 - 0x256759
int64_t function_256756(int64_t a1) {
    // 0x256756
    int64_t result; // 0x256756
    return result;
}

// Address range: 0x25675c - 0x25675d
int64_t function_25675c(void) {
    // 0x25675c
    int64_t result; // 0x25675c
    return result;
}

// Address range: 0x256786 - 0x25678e
int64_t function_256786(int64_t a1, int64_t a2, int64_t a3) {
    // 0x256786
    int64_t v1; // 0x256786
    int32_t * v2 = (int32_t *)(v1 - 0x77f8259e); // 0x256786
    bool v3; // 0x256786
    *v2 = (int32_t)v3 - (int32_t)a3 + *v2;
    return function_2567b9(a1, a2, a3, v1, (int64_t)&g1);
}

// Address range: 0x25678e - 0x2567b9
int64_t function_25678e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x25678e
    bool v3; // 0x25678e
    uint64_t v4 = v2 - (v3 ? 0x13d00b4 : 0x13d00b3); // 0x25678e
    int64_t v5 = v4 & 0xffffffff; // 0x25678e
    int32_t v6; // 0x25678e
    *(int32_t *)a4 = (int32_t)(int64_t)&v6;
    int32_t * v7 = (int32_t *)(a4 - 0x63b0ff6d); // 0x256795
    *v7 = *v7 - 1;
    char * v8 = (char *)(v5 + 5); // 0x25679e
    char v9 = *v8; // 0x25679e
    char v10 = v4 / 256; // 0x25679e
    char v11 = v9 + v10; // 0x25679e
    *v8 = v11;
    int64_t result = v5; // 0x2567a1
    if (v11 < 0 != ((v11 ^ v9) & (v11 ^ v10)) < 0) {
        result = function_25675c();
    }
    // 0x2567a3
    *(char *)-0x170bb745 = *(char *)-0x170bb745 | (char)result;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
    return result;
}

// Address range: 0x2567b9 - 0x2568c0
int64_t function_2567b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2567b9
    int64_t v1; // 0x2567b9
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t v4 = v1; // 0x2567c0
    __asm_out(-24, v4);
    *(int32_t *)-0x4bd8b037 = *(int32_t *)-0x4bd8b037 + (int32_t)a1;
    unknown_ffffffffaa3050d8();
    int64_t v5 = unknown_ffffffff9e9c8ce1(); // 0x2567db
    uint32_t v6 = -24 * *(int32_t *)(a1 - 0x15999578); // 0x2567e2
    int32_t * v7 = (int32_t *)(v5 - 86); // 0x2567e9
    *v7 = *v7 + v6;
    uint32_t v8 = *(int32_t *)&v3; // 0x2567f6
    uint32_t v9 = v8 + (int32_t)v3; // 0x2567ff
    int64_t v10 = v9; // 0x2567ff
    bool v11; // 0x2567b9
    if (v9 >= v8 && v9 != 0) {
        // 0x256803
        unknown_ffffffffae0bd00d();
        int32_t * v12 = (int32_t *)(v10 + 54); // 0x25680e
        *v12 = *v12 / 2;
        return (int64_t)*(int32_t *)(v3 + (v11 ? -4 : 4));
    }
    uint32_t v13 = *(int32_t *)(a4 - 0x3f55eef + v2) | (int32_t)v2; // 0x2567b9
    int64_t v14 = v13; // 0x2567b9
    int32_t * v15 = (int32_t *)(v3 - 0x5473a730); // 0x256855
    *v15 = *v15 + v13;
    char * v16 = (char *)(int64_t)v6; // 0x25685b
    *v16 = *v16 + (char)(v6 / 256);
    uint32_t v17 = v6 + 0x1e82e46;
    __asm_int1();
    int64_t v18 = v14 - 8; // 0x256866
    *(int64_t *)v18 = *(int64_t *)((int64_t)(v4 >> 31) + 0x433a5f7b);
    int64_t v19 = unknown_25aa1072(); // 0x25686c
    char * v20 = (char *)(v19 - 0x17ff4d00); // 0x256871
    *v20 = *v20 + (char)v19;
    int32_t * v21 = (int32_t *)((int64_t)v17 - 0x66ff4300); // 0x256877
    int32_t v22 = v18; // 0x256877
    *v21 = *v21 + v22;
    int64_t result = (v19 & 0xff00) + v10 & 0xff00 | v19 & -0xff01; // 0x25687d
    if (v9 == 0) {
        // 0x25683c
        return result;
    }
    int32_t * v23 = (int32_t *)(v10 + 78); // 0x25688a
    *v23 = *v23 + v22;
    *(int32_t *)(a1 - 0x1b9f868) = v17;
    unknown_ffffffffd099749e();
    int32_t v24 = *(int32_t *)0xd25f246; // 0x25689d
    *(int32_t *)0xd25f246 = v24 + ((int32_t)result + 0x1c740099 >> 31);
    unknown_802061ab();
    uint32_t v25 = (int32_t)v1; // 0x2568aa
    int32_t v26 = v25 + 0x7a02cb70; // 0x2568ab
    unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x2568ab
    *(int64_t *)(v14 - 16) = 64 * (int64_t)(v26 == 0) | (int64_t)(v25 < 0x85fd3490) | 128 * (int64_t)(v26 < 0) | 2048 * (int64_t)(((v26 ^ v25) & (v25 ^ -0x80000000)) < 0) | 0x4000 * (int64_t)v11 | 4 * (int64_t)(v27 % 2 == 0) | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 2;
    int64_t result2 = unknown_ffffffffc54811bc(); // 0x2568b6
    *(int64_t *)(v14 - 24) = v3 + (v11 ? -1 : 1);
    char * v28 = (char *)result2; // 0x2568bc
    *v28 = *v28 + (char)v9;
    return result2;
}
