/*
 * Targeted RetDec C for native executable gap queue batch 257.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x18d085-0x18d285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x255ac2-0x255cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x255cc2-0x255ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a4f75-0x2a5175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a5175-0x2a5375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a5375-0x2a5575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a5575-0x2a5775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a5775-0x2a5975 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
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

int64_t function_18d085(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18d08a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18d0ca(void);
int64_t function_18d164(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18d198(void);
int64_t function_18d222(void);
int64_t function_18d228(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_18d266(int64_t a1);
int64_t function_18d27d(void);
int64_t function_2125961();
int64_t function_255ac2(int64_t a1, int64_t a2);
int64_t function_255ae8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_255c3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_255dc3(int64_t a1);
int64_t function_255ddc(int64_t a1);
int64_t function_255e11(void);
int64_t function_255e15(void);
int64_t function_255e36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2a4f6a();
int64_t function_2a4f75(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2a4fbc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a4fe6(void);
int64_t function_2a4fe9(void);
int64_t function_2a4ff3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a5051(void);
int64_t function_2a5062(void);
int64_t function_2a507d(int64_t a1);
int64_t function_2a5089(int64_t a1);
int64_t function_2a508a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a50ce(void);
int64_t function_2a50d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a5102(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a511b(int64_t a1);
int64_t function_2a5120(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a5146(void);
int64_t function_2a514d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a5186(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a51e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a5214(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a528a(void);
int64_t function_2a52e8(int64_t a1);
int64_t function_2a5303(void);
int64_t function_2a5354(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2a53dd(void);
int64_t function_2a5471(void);
int64_t function_2a54f5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a551b(void);
int64_t function_2a551e(void);
int64_t function_2a5530(void);
int64_t function_2a5535(void);
int64_t function_2a556c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a55c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a55f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a5665(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a5684(void);
int64_t function_2a5696(void);
int64_t function_2a56b4(void);
int64_t function_2a56b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a56cd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2a5721(void);
int64_t function_2a5732(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a5742(int64_t a1);
int64_t function_2a575e(void);
int64_t function_2a5773(void);
int64_t function_2a57aa(void);
int64_t function_2a5819(int64_t a1);
int64_t function_2a581c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a5869(int64_t a1, int64_t a2);
int64_t function_2a58a5(void);
int64_t function_2a5912(int64_t a1);
int64_t function_2a592f(int64_t a1);
int64_t function_732ad6c2();
int64_t function_73d27082();
int64_t function_c57b8();
int64_t function_ffffffff835f7744();
int64_t function_ffffffff9d6126de();
int64_t function_ffffffffa5e370a0();
int64_t function_ffffffffb8a8a574();
int64_t function_ffffffffc56090bf();
int64_t function_ffffffffd7fecd22();
int64_t unknown_360aecc6();
int64_t unknown_391db02c();
int64_t unknown_3a353091();
int64_t unknown_402c3c3b();
int64_t unknown_44836416();
int64_t unknown_644d8a5d();
int64_t unknown_79e2f690();
int64_t unknown_ffffffff818f4e74();
int64_t unknown_ffffffff88aa1084();
int64_t unknown_ffffffff90df9c85();
int64_t unknown_ffffffffabdfb1d5();
int64_t unknown_ffffffffe10f3ec7();
int64_t unknown_ffffffffe82b8d08();
int64_t unknown_ffffffffe87e269b();
int64_t unknown_fffffffff8e77ee1();
int64_t unknown_fffffffffffffff0();

// Address range: 0x18d085 - 0x18d089
int64_t function_18d085(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18d085
    return a4 & 0xffffffff;
}

// Address range: 0x18d08a - 0x18d09a
int64_t function_18d08a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18d08a
    return a4 & 0xffffffff;
}

// Address range: 0x18d0ca - 0x18d126
int64_t function_18d0ca(void) {
    // 0x18d0ca
    return __asm_iretd();
}

// Address range: 0x18d164 - 0x18d18c
int64_t function_18d164(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x4c92ae0f); // 0x18d166
    int64_t v2; // 0x18d164
    *v1 = *v1 + (int32_t)(v2 ^ v2);
    int64_t v3; // 0x18d164
    *(int32_t *)a3 = *(int32_t *)&v3 | (int32_t)a1;
    int64_t v4 = unknown_ffffffff818f4e74(); // 0x18d16e
    int64_t v5; // 0x18d164
    __asm_outsb((int16_t)a3, *(char *)&v5);
    uint32_t v6 = 0x10000 * (int32_t)v4 >> 16; // 0x18d175
    int64_t v7 = v6; // 0x18d175
    char * v8 = (char *)v7; // 0x18d17d
    *v8 = *v8 + 70;
    int64_t v9; // 0x18d164
    return (int64_t)(*(int32_t *)v7 + v6 ^ *(int32_t *)&v9);
}

// Address range: 0x18d198 - 0x18d1a0
int64_t function_18d198(void) {
    // 0x18d198
    int64_t result; // 0x18d198
    return result;
}

// Address range: 0x18d222 - 0x18d224
int64_t function_18d222(void) {
    // 0x18d222
    int64_t result; // 0x18d222
    return result;
}

// Address range: 0x18d228 - 0x18d237
int64_t function_18d228(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a1 - 0x5226f94a); // 0x18d228
    *v1 = *v1 - 1;
    int64_t v2; // 0x18d228
    *(char *)a2 = *(char *)&v2 + (char)(a4 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x18d266 - 0x18d26b
int64_t function_18d266(int64_t a1) {
    int32_t v1 = __asm_in_133((char)a1); // 0x18d266
    return (int64_t)((v1 + 3) % 256) | (int64_t)(v1 & -256);
}

// Address range: 0x18d27d - 0x18d27e
int64_t function_18d27d(void) {
    // 0x18d27d
    int64_t result; // 0x18d27d
    return result;
}

// Address range: 0x255ac2 - 0x255ae8
int64_t function_255ac2(int64_t a1, int64_t a2) {
    // 0x255ac2
    int64_t v1; // 0x255ac2
    return function_c57b8(a1, v1, v1, v1, v1);
}

// Address range: 0x255ae8 - 0x255c3f
int64_t function_255ae8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x255ae8
    int64_t v1; // 0x255ae8
    return function_c57b8(a1, 0x34a00fa, a3, a4, v1);
}

// Address range: 0x255c3f - 0x255dad
int64_t function_255c3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x255c3f
    int64_t v1; // bp-40, 0x255c3f
    int64_t v2 = (int64_t)&v1; // 0x255d54
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x255d5d
    *v3 = 310;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a1;
    *v3 = v2 + 16;
    int64_t v4 = v1; // 0x255d81
    *(int64_t *)(v2 - 16) = v4;
    int64_t v5 = v2 + 8; // 0x255d89
    v1 = *(int64_t *)v5;
    *v3 = v5;
    return function_c57b8(v4, a2, a3, a4, a5);
}

// Address range: 0x255dc3 - 0x255dc7
int64_t function_255dc3(int64_t a1) {
    // 0x255dc3
    int64_t result; // 0x255dc3
    return result;
}

// Address range: 0x255ddc - 0x255ddd
int64_t function_255ddc(int64_t a1) {
    // 0x255ddc
    int64_t result; // 0x255ddc
    return result;
}

// Address range: 0x255e11 - 0x255e14
int64_t function_255e11(void) {
    // 0x255e11
    int64_t result; // 0x255e11
    return result;
}

// Address range: 0x255e15 - 0x255e18
int64_t function_255e15(void) {
    // 0x255e15
    int64_t result; // 0x255e15
    return result;
}

// Address range: 0x255e36 - 0x255ebd
int64_t function_255e36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a4 - 127); // 0x255e36
    *v1 = *v1 | (char)a4;
    int64_t v2; // bp-16, 0x255e36
    return (int64_t)&v2;
}

// Address range: 0x2a4f75 - 0x2a4fa1
int64_t function_2a4f75(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result = a2 & 0xffffffff; // 0x2a4f75
    char * v1 = (char *)(a1 - 0x57f69f4a); // 0x2a4f76
    int64_t v2; // 0x2a4f75
    char v3 = *v1 + (char)v2; // 0x2a4f76
    *v1 = v3;
    if (v3 != 0) {
        // 0x2a4ff0
        return result;
    }
    char * v4 = (char *)((v2 & 0xffffffff) + 0x709a9f06); // 0x2a4f82
    *v4 = (char)(a3 / 256);
    int64_t v5 = __asm_wait(); // 0x2a4f88
    unsigned char v6 = *(char *)&result; // 0x2a4f89
    bool v7; // 0x2a4f75
    int64_t v8 = v7 ? 0xffffffff : 1; // 0x2a4f89
    *(char *)-0x7494876e = *(char *)-0x7494876e + (char)(result / 256);
    __asm_wait();
    if ((int32_t)(v8 + v2) < (int32_t)(v5 & 0xffffff00 || (int64_t)v6)) {
        function_2a4f6a();
    }
    int64_t v9 = 256 * (int64_t)*v4 | a3 & -0xff01; // 0x2a4f82
    int32_t result2 = __asm_in((int16_t)v9); // 0x2a4f9c
    int32_t * v10 = (int32_t *)v9; // 0x2a4f9f
    *v10 = *v10 ^ (int32_t)v9;
    return result2;
}

// Address range: 0x2a4fbc - 0x2a4fd1
int64_t function_2a4fbc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a4fbc
    int64_t v1; // 0x2a4fbc
    *(int32_t *)a1 = (int32_t)v1;
    *(int32_t *)-0x51db14374b686df7 = (int32_t)v1;
    return v1 & -256 | (int64_t)__asm_in_134((int16_t)a3);
}

// Address range: 0x2a4fe6 - 0x2a4fe9
int64_t function_2a4fe6(void) {
    // 0x2a4fe6
    int64_t result; // 0x2a4fe6
    return result;
}

// Address range: 0x2a4fe9 - 0x2a4ff0
int64_t function_2a4fe9(void) {
    // 0x2a4fe9
    int64_t result; // 0x2a4fe9
    return result;
}

// Address range: 0x2a4ff3 - 0x2a500e
int64_t function_2a4ff3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a4ff3
    return unknown_ffffffffe82b8d08();
}

// Address range: 0x2a5051 - 0x2a5052
int64_t function_2a5051(void) {
    // 0x2a5051
    int64_t result; // 0x2a5051
    return result;
}

// Address range: 0x2a5062 - 0x2a5064
int64_t function_2a5062(void) {
    // 0x2a5062
    return function_ffffffff835f7744();
}

// Address range: 0x2a507d - 0x2a5089
int64_t function_2a507d(int64_t a1) {
    // 0x2a507d
    return unknown_ffffffff90df9c85(a1);
}

// Address range: 0x2a5089 - 0x2a508a
int64_t function_2a5089(int64_t a1) {
    // 0x2a5089
    int64_t result; // 0x2a5089
    return result;
}

// Address range: 0x2a508a - 0x2a50b2
int64_t function_2a508a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)unknown_79e2f690(); // 0x2a508f
    int64_t v3; // 0x2a508a
    char v4 = *v2 + (char)v3; // 0x2a508f
    *v2 = v4;
    if (a4 != 1 && v4 != 0) {
        function_2a5051();
    }
    // 0x2a5093
    *(int32_t *)a1 = *(int32_t *)&v1;
    bool v5; // 0x2a508a
    int64_t v6 = v5 ? -4 : 4; // 0x2a5093
    int64_t v7 = v6 + a1 + (v5 ? -1 : 1); // 0x2a5094
    uint32_t v8 = (int32_t)unknown_ffffffffe87e269b(v7, v1 + v6) - 0xf5e1af8; // 0x2a509a
    int64_t v9 = a4 - 2; // 0x2a509f
    int64_t result = v8; // 0x2a509f
    if (v9 != 0 == v8 == 0) {
        result = function_2a5089((int64_t)&g6);
    }
    int32_t * v10 = (int32_t *)(v7 - 0x6651ff09); // 0x2a50a1
    *v10 = *v10 + (int32_t)v7;
    char * v11 = (char *)(a3 + 0x1e8b44f); // 0x2a50a7
    *v11 = *v11 + (char)v9;
    return result;
}

// Address range: 0x2a50ce - 0x2a50d3
int64_t function_2a50ce(void) {
    // 0x2a50ce
    return function_ffffffff835f7744();
}

// Address range: 0x2a50d3 - 0x2a5101
int64_t function_2a50d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 & -0xff01; // 0x2a50d9
    int64_t v2 = unknown_fffffffff8e77ee1() & 0xffffffff; // 0x2a50e1
    int64_t v3 = 0x10000 * (int32_t)a1 >> 16 & 0x3e3a08bb; // 0x2a50e9
    if (a4 == 0) {
        v3 = function_2a50d3(v2, a2, v1 | (int64_t)&g1, 0);
    }
    int32_t * v4 = (int32_t *)(v2 - 115); // 0x2a50eb
    *v4 = *v4 + (int32_t)a2;
    unsigned char v5 = *(char *)-0x27b18f18e0ac8303; // 0x2a50ee
    *(char *)v2 = v5;
    int64_t result = unknown_391db02c(v3 & 0xffffff00 | (int64_t)v5, a2, v1 | (int64_t)&g1 & -0xff01 | (int64_t)&g5); // 0x2a50ff
    return result;
}

// Address range: 0x2a5102 - 0x2a5108
int64_t function_2a5102(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a5102
    int64_t v1; // 0x2a5102
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_ffffffff9d6126de();
}

// Address range: 0x2a511b - 0x2a511c
int64_t function_2a511b(int64_t a1) {
    // 0x2a511b
    int64_t result; // 0x2a511b
    return result;
}

// Address range: 0x2a5120 - 0x2a512e
int64_t function_2a5120(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_391db02c(a1, a2, a3); // 0x2a5126
    char * v1 = (char *)(a2 - 108); // 0x2a512b
    int64_t v2; // 0x2a5120
    *v1 = *v1 + (char)v2;
    return result;
}

// Address range: 0x2a5146 - 0x2a514b
int64_t function_2a5146(void) {
    // 0x2a5146
    return function_732ad6c2();
}

// Address range: 0x2a514d - 0x2a5154
int64_t function_2a514d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a514d
    int64_t v1; // 0x2a514d
    int64_t result = v1 & 0xffffffff; // 0x2a514d
    unsigned char v2 = (char)v1;
    *(char *)result = v2 / 128 | 2 * v2;
    return result;
}

// Address range: 0x2a5186 - 0x2a51d5
int64_t function_2a5186(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a5186
    int64_t result; // 0x2a5186
    bool v1; // 0x2a5186
    if (v1 || v1) {
        // 0x2a5188
        *(char *)(result + 0xcc01e896 & 0xffffffff) = (char)!v1;
        return result;
    }
    if (v1) {
        // 0x2a51b4
        *(int32_t *)a3 = (int32_t)a3 + (int32_t)a2;
        __asm_rcl(*(int32_t *)(2 * result & 0xffffffff));
        return function_2a5214(a1, a2, a3, a4, (int64_t)&g6);
    }
    // 0x2a51d2
    return __asm_in((int16_t)a3);
}

// Address range: 0x2a51e3 - 0x2a51f3
int64_t function_2a51e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a51e3
    int64_t v1; // 0x2a51e3
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x2a51e3
    if (v3 != 0) {
        *(int32_t *)0x16758f0 = *(int32_t *)0x16758f0 << v3;
    }
    unsigned char v4 = *(char *)((v2 % 256 ^ 45) + v1); // 0x2a51ed
    return (v2 & 0xff00) + a3 & 0xff00 | v2 & -0x10000 | (int64_t)v4;
}

// Address range: 0x2a5214 - 0x2a524d
int64_t function_2a5214(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a5214
    int64_t v1; // 0x2a5214
    int32_t * v2 = (int32_t *)(v1 + 34); // 0x2a521a
    *v2 = *v2 + (int32_t)a5;
    uint64_t v3 = 2 * v1 & 0x7600;
    int64_t v4; // 0x2a5214
    char * v5 = (char *)((v3 | v1 & 0xbb8e0000 | (int64_t)*(char *)&v4) - 77); // 0x2a522e
    *v5 = *v5 + (char)(v3 / 256);
    bool v6; // 0x2a5214
    int64_t result = __asm_sti(0x3d0055bf, (v6 ? -1 : 1) + a2); // 0x2a523a
    uint64_t v7 = a4 & a3;
    if ((char)v7 == 0) {
        // 0x2a524b
        return result & -256 | v7 % 256;
    }
    // 0x2a523f
    *(int32_t *)0x3d19da003a00a74b = (int32_t)result;
    return result;
}

// Address range: 0x2a528a - 0x2a528d
int64_t function_2a528a(void) {
    // 0x2a528a
    int64_t result; // 0x2a528a
    return result;
}

// Address range: 0x2a52e8 - 0x2a52f0
int64_t function_2a52e8(int64_t a1) {
    // 0x2a52e8
    int64_t result; // 0x2a52e8
    return result;
}

// Address range: 0x2a5303 - 0x2a5308
int64_t function_2a5303(void) {
    // 0x2a5303
    return function_73d27082();
}

// Address range: 0x2a5354 - 0x2a53db
int64_t function_2a5354(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    char * v2 = (char *)(a3 - 99); // 0x2a5354
    int64_t v3; // 0x2a5354
    *v2 = *v2 + (char)(v3 / 256);
    unknown_644d8a5d();
    uint32_t v4 = *(int32_t *)-0x1af25451670ffaa0; // 0x2a535c
    int64_t v5 = a4 / 256 % 256 & (int64_t)v4 | (int64_t)(v4 & -256); // 0x2a5365
    *(int32_t *)-0x205b6303 = *(int32_t *)-0x205b6303 + (int32_t)a1;
    bool v6; // 0x2a5354
    int64_t v7 = v6 ? -4 : 4; // 0x2a536d
    int64_t v8 = v7 + a1; // 0x2a536d
    int64_t v9 = v7 + a2; // 0x2a536d
    *(int32_t *)v5 = (int32_t)v5;
    char * v10 = (char *)(v5 + 86); // 0x2a5370
    *v10 = *v10 | (char)a3;
    unknown_402c3c3b(v8, v9);
    float80_t v11; // 0x2a5354
    *(float32_t *)v8 = (float32_t)v11;
    int64_t v12 = __asm_hlt(); // 0x2a537f
    char * v13 = (char *)v12; // 0x2a5380
    *v13 = *v13 - (char)v12;
    *(int32_t *)v8 = *(int32_t *)v9;
    uint32_t result = (int32_t)(v12 & 0x62110c00 | (int64_t)__asm_in_135(-24)) & 0x62110c38; // 0x2a5387
    if (result == 0) {
        // 0x2a53da
        *(int32_t *)(v8 + v7) = result;
        return result;
    }
    int64_t result2 = unknown_360aecc6(); // 0x2a53c0
    if (a4 == 1) {
        // 0x2a539e
        return result2;
    }
    // 0x2a53c7
    *(char *)v1 = *(char *)&v1 | (char)((uint64_t)v3 / 256);
    __asm_hlt();
    __asm_in((int16_t)v1);
    int64_t result3 = unknown_ffffffffabdfb1d5(); // 0x2a53cf
    int32_t * v14 = (int32_t *)(a4 - 100); // 0x2a53d4
    *v14 = 0x20000 * *v14;
    return result3;
}

// Address range: 0x2a53dd - 0x2a53de
int64_t function_2a53dd(void) {
    // 0x2a53dd
    int64_t result; // 0x2a53dd
    return result;
}

// Address range: 0x2a5471 - 0x2a547a
int64_t function_2a5471(void) {
    // 0x2a5471
    int64_t result; // 0x2a5471
    return result;
}

// Address range: 0x2a54f5 - 0x2a551a
int64_t function_2a54f5(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = __asm_in_133(-50); // 0x2a54f5
    int32_t v2 = *(int32_t *)(int64_t)v1; // 0x2a54ff
    int64_t v3; // 0x2a54f5
    *(int32_t *)a2 = 2 * (int32_t)v3 + v2 + (int32_t)(v1 < 0xbbe4de01);
    *(char *)-0xa3743ea = *(char *)-0xa3743ea + (char)(v3 / 256);
    int64_t v4; // 0x2a54f5
    uint32_t result = *(int32_t *)&v4; // 0x2a5515
    __asm_out((int16_t)a3, result);
    return result;
}

// Address range: 0x2a551b - 0x2a551c
int64_t function_2a551b(void) {
    // 0x2a551b
    int64_t result; // 0x2a551b
    return result;
}

// Address range: 0x2a551e - 0x2a5520
int64_t function_2a551e(void) {
    // 0x2a551e
    return function_2a551b();
}

// Address range: 0x2a5530 - 0x2a5531
int64_t function_2a5530(void) {
    // 0x2a5530
    int64_t result; // 0x2a5530
    return result;
}

// Address range: 0x2a5535 - 0x2a553a
int64_t function_2a5535(void) {
    // 0x2a5535
    return function_ffffffffb8a8a574();
}

// Address range: 0x2a556c - 0x2a55ac
int64_t function_2a556c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 55); // 0x2a556c
    *v1 = *v1 - 0x28fec300;
    int64_t v2; // 0x2a556c
    int64_t v3 = v2 & -256; // 0x2a5576
    char * v4 = (char *)(v3 - 0x23e0e8e6); // 0x2a5578
    *v4 = (char)((v2 & 256) != 0) - (char)a4 + *v4;
    uint32_t v5 = *(int32_t *)(a1 + (int64_t)&g3) | (int32_t)a2; // 0x2a557e
    uint32_t v6 = (int32_t)v2; // 0x2a5584
    uint32_t v7 = v6 < 0x8ec1d701 ? -0x60d3d1ed : -0x60d3d1ee; // 0x2a5589
    int32_t v8 = v6 - v7; // 0x2a5589
    __asm_out_136(26, (char)v8);
    int32_t * v9 = (int32_t *)(a4 - 0x706b60e9); // 0x2a5590
    *v9 = (int32_t)(v6 < 0x8ec1d701 | v7 > v6) - v5 + *v9;
    uint32_t v10 = v8 >> 31; // 0x2a5596
    *(int32_t *)0x1b48829722a0013d = (v8 & 0xff00) + v10 & 0xff00 | v8 & -0xff01;
    bool v11; // 0x2a556c
    int64_t v12 = (a1 - v3 & 0xffffffff) + (v11 ? -4 : 4); // 0x2a55a6
    unknown_fffffffffffffff0(v12);
    int64_t result = function_2a55f4(v12, (int64_t)v5, (int64_t)v10, a4, (int64_t)&g6); // 0x2a55aa
    return result;
}

// Address range: 0x2a55c0 - 0x2a55c6
int64_t function_2a55c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 71); // 0x2a55c0
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x2a55c0
    return result;
}

// Address range: 0x2a55f4 - 0x2a5615
int64_t function_2a55f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a55f4
    int64_t v1; // 0x2a55f4
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    int32_t * v3 = (int32_t *)(8 * v1 + a4); // 0x2a560d
    int64_t v4; // 0x2a55f4
    *v3 = *v3 + (int32_t)(int64_t)&v4;
    return unknown_44836416(((v1 & (int64_t)&g2) == 0 ? 4 : -4) + a1);
}

// Address range: 0x2a5665 - 0x2a566b
int64_t function_2a5665(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a5665
    int64_t result; // 0x2a5665
    return result;
}

// Address range: 0x2a5684 - 0x2a5685
int64_t function_2a5684(void) {
    // 0x2a5684
    int64_t result; // 0x2a5684
    return result;
}

// Address range: 0x2a5696 - 0x2a569b
int64_t function_2a5696(void) {
    // 0x2a5696
    return function_ffffffffa5e370a0();
}

// Address range: 0x2a56b4 - 0x2a56b9
int64_t function_2a56b4(void) {
    // 0x2a56b4
    return function_ffffffffc56090bf();
}

// Address range: 0x2a56b9 - 0x2a56cd
int64_t function_2a56b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x2a56b9
    *(char *)v2 = 0;
    uint32_t v3 = (int32_t)v2; // 0x2a56bb
    int32_t v4 = v3 - 0x76866d0a; // 0x2a56bb
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x2a56bb
    *(int32_t *)a1 = v3;
    bool v6; // 0x2a56b9
    int64_t v7 = v6 ? -4 : 4; // 0x2a56c0
    int64_t result = unknown_ffffffffe10f3ec7(v7 + a1) & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v3 < 0x76866d0a) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v3 % 16 > 25) | 4 * (int64_t)(v5 % 2 == 0)) | 512; // 0x2a56c7
    if ((0x76866d09 - v3 & v3) < 0) {
        result = function_2a5684();
    }
    // 0x2a56ca
    *(char *)v1 = *(char *)&v1 + (char)a4;
    return result;
}

// Address range: 0x2a56cd - 0x2a56e8
int64_t function_2a56cd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2a56cd
    int64_t v1; // 0x2a56cd
    int64_t v2 = v1;
    int64_t v3 = 256 * v1 + v2 & 0xff00 | v2 & -0xff01; // 0x2a56cd
    int32_t * v4 = (int32_t *)(v3 - 8); // 0x2a56d1
    *v4 = *v4 + (int32_t)v3;
    int64_t v5 = a1 + 0x4a973392 + 8 * a3; // 0x2a56d6
    __writegsbyte(v5, __readgsbyte(v5) - (char)(a4 / 256));
    char * v6 = (char *)a5; // 0x2a56e4
    *v6 = *v6 & (char)a5;
    return a5 & 0xffffffff;
}

// Address range: 0x2a5721 - 0x2a5722
int64_t function_2a5721(void) {
    // 0x2a5721
    int64_t result; // 0x2a5721
    return result;
}

// Address range: 0x2a5732 - 0x2a5742
int64_t function_2a5732(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a5732
    int64_t v1; // 0x2a5732
    *(char *)(a3 - 0x17f4dae8) = (char)v1 ^ -80;
    int64_t v2; // 0x2a5732
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)a3;
    return function_ffffffffd7fecd22();
}

// Address range: 0x2a5742 - 0x2a5747
int64_t function_2a5742(int64_t a1) {
    // 0x2a5742
    int64_t v1; // 0x2a5742
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x2a575e - 0x2a5761
int64_t function_2a575e(void) {
    // 0x2a575e
    int64_t result; // 0x2a575e
    return result;
}

// Address range: 0x2a5773 - 0x2a5779
int64_t function_2a5773(void) {
    // 0x2a5773
    return function_2125961();
}

// Address range: 0x2a57aa - 0x2a57ab
int64_t function_2a57aa(void) {
    // 0x2a57aa
    int64_t result; // 0x2a57aa
    return result;
}

// Address range: 0x2a5819 - 0x2a581c
int64_t function_2a5819(int64_t a1) {
    // 0x2a5819
    int64_t result; // 0x2a5819
    return result;
}

// Address range: 0x2a581c - 0x2a585c
int64_t function_2a581c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a581c
    int64_t v1; // 0x2a581c
    int32_t * v2 = (int32_t *)(v1 + 97); // 0x2a581e
    uint32_t v3 = *v2; // 0x2a581e
    uint32_t v4 = v3 + (int32_t)v1; // 0x2a581e
    *v2 = v4;
    return (2 * v1 | v1) & 0xffffffff | (int64_t)(v4 < v3);
}

// Address range: 0x2a5869 - 0x2a5892
int64_t function_2a5869(int64_t a1, int64_t a2) {
    // 0x2a5869
    int64_t v1; // 0x2a5869
    int32_t * v2 = (int32_t *)(v1 - 0x1df8b014); // 0x2a5869
    *v2 = *v2 + (int32_t)a2;
    int64_t v3 = v1 & -256; // 0x2a586f
    int32_t v4 = *(int32_t *)(v3 - 24); // 0x2a5871
    *(int32_t *)0x3f32689e = *(int32_t *)0x3f32689e + (v4 & (int32_t)v1);
    char * v5 = (char *)(v3 - 126); // 0x2a587a
    *v5 = *v5 ^ (char)(v1 / 256);
    bool v6; // 0x2a5869
    int64_t v7 = v6 ? -4 : 4; // 0x2a587d
    unknown_ffffffff88aa1084(v7 + a1, v7 + a2);
    return unknown_3a353091();
}

// Address range: 0x2a58a5 - 0x2a58ab
int64_t function_2a58a5(void) {
    // 0x2a58a5
    int64_t result; // 0x2a58a5
    char * v1 = (char *)result; // 0x2a58a7
    *v1 = *v1 + 60;
    return result;
}

// Address range: 0x2a5912 - 0x2a5915
int64_t function_2a5912(int64_t a1) {
    // 0x2a5912
    int64_t result; // 0x2a5912
    return result;
}

// Address range: 0x2a592f - 0x2a5930
int64_t function_2a592f(int64_t a1) {
    // 0x2a592f
    int64_t result; // 0x2a592f
    return result;
}
