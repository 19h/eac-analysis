/*
 * Targeted RetDec C for native executable gap queue batch 239.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe6d9c-0xe6f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe6f9c-0xe719c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe719c-0xe739c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe739c-0xe759c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe759c-0xe779c rank=- name=- kind=- bytes=- uncovered=-
 *   0x18a085-0x18a285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18a485-0x18a685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18a685-0x18a885 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_18a085(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18a08a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18a181(void);
int64_t function_18a21d(int64_t a1);
int64_t function_18a238(void);
int64_t function_18a26b(void);
int64_t function_18a275(void);
int64_t function_18a485(void);
int64_t function_18a4cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18a501(int64_t a1);
int64_t function_18a506(void);
int64_t function_18a53b(void);
int64_t function_18a586(int64_t a1);
int64_t function_18a592(void);
int64_t function_18a5e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18a618(int64_t a1);
int64_t function_18a63c(void);
int64_t function_18a69c(int64_t a1, int64_t a2);
int64_t function_18a6a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18a6d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18a739(int64_t a1);
int64_t function_18a740(void);
int64_t function_18a779(void);
int64_t function_18a782(void);
int64_t function_18a7b7(void);
int64_t function_18a7bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18a851(void);
int64_t function_18a854(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18a87d(void);
int64_t function_1f6f02e();
int64_t function_73496c76();
int64_t function_e6d9c(void);
int64_t function_e6dda(void);
int64_t function_e6dea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e6e02(void);
int64_t function_e6e58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e6eed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e6f8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e6fb8(void);
int64_t function_e6fda(void);
int64_t function_e701b(int64_t a1);
int64_t function_e70ad(int64_t a1);
int64_t function_e714a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e724f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e727a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e72fd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e7355(void);
int64_t function_e735e(void);
int64_t function_e73da(void);
int64_t function_e73f0(void);
int64_t function_e746b(void);
int64_t function_e747f(void);
int64_t function_e74b3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e74bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e74ff(void);
int64_t function_e7532(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e75cf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_e7658(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e7666(void);
int64_t function_e76a7(void);
int64_t function_e76e6(void);
int64_t function_e7766(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e7787(int64_t a1, int64_t a2);
int64_t function_e778c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ffffffffcd172351();
int64_t function_ffffffffdaa17a01();
int64_t function_ffffffffe7c66f4a();
int64_t function_ffffffffe81a2294();
int64_t function_fffffffff11275c1();
int64_t function_fffffffff20f4771();
int64_t unknown_1009ab33();
int64_t unknown_35c094d4();
int64_t unknown_3d105dae();
int64_t unknown_51ce7d17();
int64_t unknown_52371020();
int64_t unknown_579018e8();
int64_t unknown_6dd80b3f();
int64_t unknown_ffffffff848e5336();
int64_t unknown_ffffffff87f3c8af();
int64_t unknown_ffffffff8e349a78();
int64_t unknown_ffffffff920cfdd5();
int64_t unknown_ffffffff9d81f9eb();
int64_t unknown_ffffffffba0857f7();
int64_t unknown_ffffffffcc0fca67();
int64_t unknown_ffffffffd054945e();
int64_t unknown_ffffffffe49216a2();
int64_t unknown_ffffffffe58fb057();

// Address range: 0xe6d9c - 0xe6dc1
int64_t function_e6d9c(void) {
    char v1 = *(char *)0x556fd9a3; // 0xe6d9c
    int64_t v2; // 0xe6d9c
    *(char *)0x556fd9a3 = v1 + (char)((uint64_t)v2 / 256);
    return function_73496c76();
}

// Address range: 0xe6dda - 0xe6ddb
int64_t function_e6dda(void) {
    // 0xe6dda
    int64_t result; // 0xe6dda
    return result;
}

// Address range: 0xe6dea - 0xe6df8
int64_t function_e6dea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe6dea
    int64_t result; // 0xe6dea
    if (*(char *)(a1 - 0x460df679) >= (char)a3) {
        result = function_e6dda();
    }
    int32_t * v1 = (int32_t *)(result - 78); // 0xe6df2
    int64_t v2; // 0xe6dea
    *v1 = *v1 + (int32_t)v2;
    return result;
}

// Address range: 0xe6e02 - 0xe6e03
int64_t function_e6e02(void) {
    // 0xe6e02
    int64_t result; // 0xe6e02
    return result;
}

// Address range: 0xe6e58 - 0xe6ee3
int64_t function_e6e58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2 = unknown_ffffffffd054945e(); // 0xe6e58
    int64_t v3; // 0xe6e58
    uint32_t v4 = (int32_t)a3 - (int32_t)v3; // 0xe6e5d
    int64_t v5 = v4; // 0xe6e5d
    uint64_t v6 = a4 - v3; // 0xe6e60
    int64_t v7 = v6 % 256 | a4 & -256; // 0xe6e60
    char * v8 = (char *)(a2 - 24 + v3); // 0xe6e62
    *v8 = *v8 + (char)(v4 / 256);
    *(int32_t *)0x21056db = *(int32_t *)0x21056db + (int32_t)v3;
    int32_t * v9 = (int32_t *)(4 * v2 + v7); // 0xe6e73
    *v9 = *v9 | 0x474ce45e;
    unsigned char v10 = *(char *)-0x1713cd61; // 0xe6e76
    *(char *)-0x1713cd61 = v10 / 128 | 2 * v10;
    int64_t v11 = function_e6e02() + 0x5001e81a; // 0xe6e82
    int64_t result = v11 & 0xffffffff; // 0xe6e82
    char * v12 = (char *)(v5 - 99); // 0xe6eda
    *v12 = *v12 + (char)v6;
    int32_t v13 = *(int32_t *)&v1; // 0xe6edd
    bool v14; // 0xe6e58
    v1 += (v14 ? -4 : 4);
    int32_t v15 = v11; // 0xe6ede
    *(int32_t *)result = v15;
    uint64_t v16 = v7 - 1; // 0xe6ee0
    if (v16 == 0) {
        // 0xe6ee3
        return result;
    }
    int64_t v17 = v3 & -256 | 46; // 0xe6e7d
    int64_t v18 = v2 & 0xffffffff; // 0xe6e7f
    __asm_outsd((int16_t)v4, *(int32_t *)v18);
    int64_t v19 = unknown_ffffffffe49216a2(); // 0xe6e9c
    int32_t v20; // 0xe6e58
    int64_t v21; // 0xe6e58
    int64_t v22; // 0xe6e58
    if (v13 < v15) {
        // 0xe6e99
        v20 = v17;
        v21 = v19;
        v22 = v5;
    } else {
        int64_t v23 = v3 + a2; // 0xe6e66
        int32_t * v24 = (int32_t *)(v18 - 24); // 0xe6ea3
        int32_t v25 = v17;
        *v24 = *v24 + v25;
        int32_t * v26 = (int32_t *)((v23 & 0xffffffff) + 0xee9547f); // 0xe6ea6
        *v26 = *v26 + (int32_t)v1;
        char * v27 = (char *)(v19 + 0x243c600); // 0xe6eac
        *v27 = *v27 + (char)v19;
        int32_t * v28 = (int32_t *)(v17 - 0x58ff3500); // 0xe6eb4
        *v28 = *v28 + (int32_t)v23;
        v20 = v25;
        v21 = v5;
        v22 = (v19 + v16 / 256) % 256 | v19 & 0xffffff00;
    }
    uint64_t v29 = v22;
    int64_t result2 = v21 & 0x176e3ddb ^ 0xf995de76; // 0xe6ec2
    int32_t * v30 = (int32_t *)(8 * v3 - 0x13a4aca2 + v1); // 0xe6ec7
    *v30 = *v30 + v20;
    __asm_out((int16_t)((v29 / 256 + v29) % 256 | v29 & 0xff00), (int32_t)result2);
    return result2;
}

// Address range: 0xe6eed - 0xe6f37
int64_t function_e6eed(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe6eed
    __asm_in((int16_t)a3);
    unknown_ffffffffba0857f7();
    *(int32_t *)0x10f96bd06 = *(int32_t *)0x10f96bd06 - 0x7834a17d;
    int64_t v1; // 0xe6eed
    *(char *)a1 = 2 * (char)v1;
    bool v2; // 0xe6eed
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0xe6f04
    unknown_51ce7d17(v3, (v2 ? -4 : 4) + a2);
    *(char *)v3 = (char)unknown_ffffffff87f3c8af();
    unknown_1009ab33(v3 + 1);
    return function_ffffffffe7c66f4a();
}

// Address range: 0xe6f8a - 0xe6f96
int64_t function_e6f8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe6f8a
    int64_t v1; // 0xe6f8a
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0xe6fb8 - 0xe6fb9
int64_t function_e6fb8(void) {
    // 0xe6fb8
    int64_t result; // 0xe6fb8
    return result;
}

// Address range: 0xe6fda - 0xe6fe1
int64_t function_e6fda(void) {
    // 0xe6fda
    bool v1; // 0xe6fda
    if (v1) {
        function_e6fb8();
    }
    // 0xe6fdc
    return function_ffffffffdaa17a01();
}

// Address range: 0xe701b - 0xe701f
int64_t function_e701b(int64_t a1) {
    // 0xe701b
    int64_t result; // 0xe701b
    return result;
}

// Address range: 0xe70ad - 0xe70b0
int64_t function_e70ad(int64_t a1) {
    // 0xe70ad
    int64_t result; // 0xe70ad
    return result;
}

// Address range: 0xe714a - 0xe71e5
int64_t function_e714a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x4c383800; // bp-8, 0xe715b
    int64_t result; // 0xe714a
    if ((int32_t)result >= 0x470a9701) {
        int64_t v2 = result & -0xff01 | (int64_t)&g1; // 0xe7164
        return (0x100000000 * ((v2 + a3) % 256 | a3 & 0xffffff00) | v2 & 0xffffffff) / (a1 & 0xffffffff) & 0xffffffff;
    }
    int32_t * v3 = (int32_t *)(2 * a3 + (int64_t)&v1); // 0xe71e1
    *v3 = *v3 & (int32_t)a2;
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0xe724f - 0xe7265
int64_t function_e724f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe724f
    int64_t v1; // 0xe724f
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    int64_t v2; // 0xe724f
    *(char *)a3 = *(char *)&v2 + (char)((uint64_t)v1 / 256);
    return (int64_t)(0x7b582f66 * *(int32_t *)0x318718b0);
}

// Address range: 0xe727a - 0xe72f9
int64_t function_e727a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe727a
    int64_t v1; // 0xe727a
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int32_t * v4 = (int32_t *)(v1 - 0x1cf85088); // 0xe727a
    int32_t v5 = *v4; // 0xe727a
    int32_t v6 = v1; // 0xe727a
    int32_t v7 = v5 + v6; // 0xe727a
    *v4 = v7;
    if (v7 < 0 != ((v7 ^ v5) & (v7 ^ v6)) < 0) {
        int64_t result = unknown_579018e8(); // 0xe72e1
        *(char *)0x31c361f4 = *(char *)0x31c361f4 + (char)(v2 / 256);
        char v8 = *(char *)(a2 + 104 + 4 * v2); // 0xe72f3
        *(char *)v2 = (v8 & (char)a4) + (char)v2;
        return result;
    }
    // 0xe728c
    *(char *)v3 = *(char *)&v3 + (char)a4;
    *(char *)-0x7f723169 = *(char *)-0x7f723169 + (char)(v2 / 256);
    int64_t result2 = __asm_int1(); // 0xe7296
    __asm_out((int16_t)v3, (int32_t)result2);
    __asm_out_133(88, (char)result2);
    return result2;
}

// Address range: 0xe72fd - 0xe7317
int64_t function_e72fd(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe72fd
    int64_t v1; // 0xe72fd
    *(int32_t *)(v1 + 0x74798a95 & 0xffffffff) = (int32_t)a3;
    unsigned char v2 = *(char *)-0x6fe700f2; // 0xe7307
    unsigned char v3 = v2 + (char)((uint64_t)v1 / 256); // 0xe7307
    *(char *)-0x6fe700f2 = v3;
    return v1 + 0xcaa77f47 + (int64_t)(v3 < v2) & 0xffffffff;
}

// Address range: 0xe7355 - 0xe7358
int64_t function_e7355(void) {
    // 0xe7355
    int64_t result; // 0xe7355
    return result;
}

// Address range: 0xe735e - 0xe7361
int64_t function_e735e(void) {
    // 0xe735e
    int64_t result; // 0xe735e
    return result;
}

// Address range: 0xe73da - 0xe73db
int64_t function_e73da(void) {
    // 0xe73da
    int64_t result; // 0xe73da
    return result;
}

// Address range: 0xe73f0 - 0xe73f2
int64_t function_e73f0(void) {
    // 0xe73f0
    return function_e73da();
}

// Address range: 0xe746b - 0xe746c
int64_t function_e746b(void) {
    // 0xe746b
    int64_t result; // 0xe746b
    return result;
}

// Address range: 0xe747f - 0xe7481
int64_t function_e747f(void) {
    // 0xe747f
    int64_t v1; // 0xe747f
    return function_e74bb(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0xe74b3 - 0xe74bb
int64_t function_e74b3(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + a2); // 0xe74b8
    *v1 = -*v1;
    return 0xaf928ff8;
}

// Address range: 0xe74bb - 0xe74e7
int64_t function_e74bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe74bb
    int64_t v1; // 0xe74bb
    *(char *)-0xa5d03fc4cd80d29 = (char)(v1 + 0xa63ac9ff);
    int64_t v2 = unknown_35c094d4(); // 0xe74d3
    if ((int32_t)v1 < 0x59c53601) {
        v2 = function_e746b();
    }
    // 0xe74d5
    *(char *)a4 = (char)a4;
    int32_t * v3 = (int32_t *)(v2 + 11); // 0xe74de
    *v3 = *v3 + (int32_t)a1;
    return v2 & 0x43775ac3 | 0xbc88a53c;
}

// Address range: 0xe74ff - 0xe7506
int64_t function_e74ff(void) {
    // 0xe74ff
    __asm_hlt();
    return function_fffffffff11275c1();
}

// Address range: 0xe7532 - 0xe75c9
int64_t function_e7532(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe7532
    int64_t v1; // 0xe7532
    int64_t result = unknown_6dd80b3f(); // 0xe7539
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2 = v1;
    *(int32_t *)v2 = *(int32_t *)&v1 | (int32_t)v2;
    return result;
    int16_t v3 = a3; // 0xe75a1
    __asm_in(v3);
    int64_t v4 = unknown_3d105dae(); // 0xe75a8
    int32_t * v5 = (int32_t *)(a3 + 0x362bc079); // 0xe75ad
    *v5 = *v5 + (int32_t)v4;
    int64_t v6 = v1 & -256; // 0xe75b5
    *(char *)a1 = __asm_insb(v3);
    int64_t v7; // bp-8, 0xe7532
    *(int64_t *)0x8def01e0 = (int64_t)&v7;
    *(int64_t *)0x8deecf8f = v6;
    int32_t * v8 = (int32_t *)(a4 + 119); // 0xe75c5
    *v8 = *v8 + (int32_t)v6;
    return ((v4 + 214) % 256 | v4 & 0xffffff00) + 0xfdfffe18 & 0xffffffff ^ 232;
}

// Address range: 0xe75cf - 0xe7658
int64_t function_e75cf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    uint64_t v2 = unknown_ffffffff920cfdd5(); // 0xe75cf
    int64_t v3; // 0xe75cf
    char * v4 = (char *)(v3 + 23); // 0xe75d4
    *v4 = *v4 + (char)(v2 / 256);
    int32_t * v5 = (int32_t *)(a3 - 8 + 2 * v3); // 0xe75d9
    int32_t v6 = a3; // 0xe75d9
    *v5 = *v5 + v6;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v7 = unknown_ffffffff9d81f9eb(); // 0xe75e5
    int32_t * v8 = (int32_t *)v7; // 0xe75ea
    int32_t v9 = a4; // 0xe75ea
    *v8 = *v8 + v9;
    int32_t * v10 = (int32_t *)(2 * a1 + 28 + v3); // 0xe75f1
    *v10 = *v10 + v9;
    int32_t * v11 = (int32_t *)(v7 + 0xe8d8dd88 & 0xffffffff); // 0xe75f5
    *v11 = *v11 + v9;
    int64_t v12 = v7 + 0xd1ad1f04; // 0xe75f7
    int32_t * v13 = (int32_t *)(v12 & 0xffffffff); // 0xe75fc
    *v13 = *v13 + v9;
    int32_t * v14 = (int32_t *)(a2 - 0xf00c453); // 0xe7605
    *v14 = *v14 + (int32_t)v12;
    char v15 = __asm_in_135(-92); // 0xe760b
    char * v16 = (char *)(a3 + 0x7d2501e8); // 0xe760d
    *v16 = *v16 & (char)(v3 / 256);
    int64_t v17; // 0xe75cf
    *(char *)a3 = *(char *)&v17 + (char)(a4 / 256);
    *(char *)0x92bb9d64 = v15;
    bool v18; // 0xe75cf
    int64_t v19 = v18 ? 0x92bb9d63 : 0x92bb9d65; // 0xe7616
    unknown_52371020(v19);
    v1 = a2;
    int32_t * v20 = (int32_t *)(v19 + 0x197cba46); // 0xe7628
    *v20 = *v20 + v6;
    *(char *)(a3 & 0xffffffff) = *(char *)&v17 - (char)a3;
    int64_t v21 = unknown_ffffffff848e5336(); // 0xe7630
    int32_t * v22 = (int32_t *)((int64_t)&v1 - 0x1741e940 + 4 * v21); // 0xe7635
    *v22 = *v22 + v9;
    uint32_t v23 = (int32_t)v21; // 0xe763c
    uint32_t v24 = v23 + (int32_t)v3; // 0xe763c
    char * v25 = (char *)((int64_t)v24 + 0x1e81400); // 0xe7642
    *v25 = (char)(v24 < v23) - (char)(v24 / 256) + *v25;
    unknown_ffffffffe58fb057();
    return function_e7666();
}

// Address range: 0xe7658 - 0xe7666
int64_t function_e7658(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe7658
    int64_t v1; // 0xe7658
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x23d5800); // 0xe7658
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(a3 + 1); // 0xe765e
    *v4 = *v4 + (char)(v2 / 256);
    return unknown_ffffffffcc0fca67(a1, a2, a3);
}

// Address range: 0xe7666 - 0xe767a
int64_t function_e7666(void) {
    // 0xe7666
    return unknown_ffffffff8e349a78();
}

// Address range: 0xe76a7 - 0xe76ac
int64_t function_e76a7(void) {
    // 0xe76a7
    return function_fffffffff20f4771();
}

// Address range: 0xe76e6 - 0xe76ec
int64_t function_e76e6(void) {
    // 0xe76e6
    return function_1f6f02e();
}

// Address range: 0xe7766 - 0xe7774
int64_t function_e7766(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe7766
    int64_t v1; // 0xe7766
    int64_t v2 = v1;
    unsigned char v3 = (char)v2;
    unsigned char v4 = 2 * v3; // 0xe7766
    *(char *)v2 = v4;
    unsigned char v5 = (char)a4 % 32; // 0xe7770
    if (v5 != 0) {
        char * v6 = (char *)(a3 + 94); // 0xe7770
        *v6 = *v6 << v5;
    }
    return (2 * v2 & 254 | v2 & 0xffffff00 | (int64_t)(v4 < v3)) + 0xae55e33a & 0xffffffff;
}

// Address range: 0xe7787 - 0xe778c
int64_t function_e7787(int64_t a1, int64_t a2) {
    // 0xe7787
    int64_t result; // 0xe7787
    return result;
}

// Address range: 0xe778c - 0xe7792
int64_t function_e778c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe778c
    int64_t result; // 0xe778c
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x18a085 - 0x18a08a
int64_t function_18a085(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18a085
    int64_t v1; // 0x18a085
    int16_t v2 = 256 * (int16_t)v1 >> 8; // 0x18a085
    return v1 & -0x10000 | (int64_t)(v2 * v2);
}

// Address range: 0x18a08a - 0x18a0a3
int64_t function_18a08a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18a08a
    int64_t v1; // 0x18a08a
    int32_t * v2 = (int32_t *)(v1 - 0x17302552); // 0x18a08c
    int32_t v3 = a1; // 0x18a08c
    *v2 = *v2 & v3;
    int32_t * v4 = (int32_t *)((v1 & -150) + 0x58e9c903); // 0x18a092
    *v4 = *v4 + (int32_t)a3;
    int32_t * v5 = (int32_t *)(a3 + 0x65b27b2f); // 0x18a09b
    *v5 = *v5 + v3;
    return v1 & -254 | 232;
}

// Address range: 0x18a181 - 0x18a182
int64_t function_18a181(void) {
    // 0x18a181
    int64_t result; // 0x18a181
    return result;
}

// Address range: 0x18a21d - 0x18a21e
int64_t function_18a21d(int64_t a1) {
    // 0x18a21d
    int64_t result; // 0x18a21d
    return result;
}

// Address range: 0x18a238 - 0x18a243
int64_t function_18a238(void) {
    // 0x18a238
    int64_t v1; // 0x18a238
    __asm_out_133(-95, (char)v1);
    int64_t v2; // 0x18a238
    return (int64_t)&v2;
}

// Address range: 0x18a26b - 0x18a26c
int64_t function_18a26b(void) {
    // 0x18a26b
    int64_t result; // 0x18a26b
    return result;
}

// Address range: 0x18a275 - 0x18a277
int64_t function_18a275(void) {
    // 0x18a275
    return function_18a26b();
}

// Address range: 0x18a485 - 0x18a48b
int64_t function_18a485(void) {
    // 0x18a485
    int64_t result; // 0x18a485
    return result;
}

// Address range: 0x18a4cb - 0x18a4ce
int64_t function_18a4cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18a4cb
    int64_t result; // 0x18a4cb
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x18a501 - 0x18a504
int64_t function_18a501(int64_t a1) {
    // 0x18a501
    int64_t result; // 0x18a501
    return result;
}

// Address range: 0x18a506 - 0x18a50b
int64_t function_18a506(void) {
    // 0x18a506
    return function_ffffffffe81a2294();
}

// Address range: 0x18a53b - 0x18a540
int64_t function_18a53b(void) {
    // 0x18a53b
    return function_ffffffffcd172351();
}

// Address range: 0x18a586 - 0x18a589
int64_t function_18a586(int64_t a1) {
    // 0x18a586
    int64_t result; // 0x18a586
    return result;
}

// Address range: 0x18a592 - 0x18a593
int64_t function_18a592(void) {
    // 0x18a592
    int64_t result; // 0x18a592
    return result;
}

// Address range: 0x18a5e0 - 0x18a5ec
int64_t function_18a5e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18a5e0
    float80_t v1; // 0x18a5e0
    *(int16_t *)(3 * a3) = (int16_t)v1;
    int64_t result; // 0x18a5e0
    return result;
}

// Address range: 0x18a618 - 0x18a61b
int64_t function_18a618(int64_t a1) {
    // 0x18a618
    int64_t result; // 0x18a618
    return result;
}

// Address range: 0x18a63c - 0x18a646
int64_t function_18a63c(void) {
    // 0x18a63c
    int64_t v1; // 0x18a63c
    return function_18a6a6(v1, v1, v1, v1);
}

// Address range: 0x18a69c - 0x18a6a3
int64_t function_18a69c(int64_t a1, int64_t a2) {
    // 0x18a69c
    return a1 & 0xffffffff;
}

// Address range: 0x18a6a6 - 0x18a6b9
int64_t function_18a6a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    uint32_t v2 = (int32_t)a4 % 32; // 0x18a6aa
    int64_t v3; // 0x18a6a6
    int32_t v4; // 0x18a6a6
    int64_t v5; // 0x18a6a6
    if (v2 == 0) {
        // 0x18a6a6
        v3 = a1;
        v4 = a1;
    } else {
        uint32_t v6 = (int32_t)v5;
        *(int32_t *)v5 = v6 >> 32 - v2 | v6 << v2;
        v3 = v1;
        v4 = *(int32_t *)&v1;
    }
    int64_t result = __asm_sti(); // 0x18a6b6
    *(int32_t *)v3 = v4 + (int32_t)v5;
    return result;
}

// Address range: 0x18a6d2 - 0x18a6fb
int64_t function_18a6d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a5 - 0x6a7e53f8); // 0x18a6d7
    int64_t result; // 0x18a6d2
    *v1 = *v1 | (char)result;
    bool v2; // 0x18a6d2
    char * v3 = (char *)(a1 + 0x4900c6b7 + (v2 ? -4 : 4)); // 0x18a6de
    *v3 = *v3 + (char)a4;
    return result;
}

// Address range: 0x18a739 - 0x18a73b
int64_t function_18a739(int64_t a1) {
    // 0x18a739
    int64_t result; // 0x18a739
    return result;
}

// Address range: 0x18a740 - 0x18a745
int64_t function_18a740(void) {
    // 0x18a740
    int64_t result; // 0x18a740
    return result;
}

// Address range: 0x18a779 - 0x18a77a
int64_t function_18a779(void) {
    // 0x18a779
    int64_t result; // 0x18a779
    return result;
}

// Address range: 0x18a782 - 0x18a783
int64_t function_18a782(void) {
    // 0x18a782
    int64_t result; // 0x18a782
    return result;
}

// Address range: 0x18a7b7 - 0x18a7b8
int64_t function_18a7b7(void) {
    // 0x18a7b7
    int64_t result; // 0x18a7b7
    return result;
}

// Address range: 0x18a7bc - 0x18a7ce
int64_t function_18a7bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18a7bc
    int64_t v1; // 0x18a7bc
    char v2 = v1;
    char v3 = v1; // 0x18a7bc
    bool v4; // 0x18a7bc
    char v5 = v4; // 0x18a7bc
    char v6 = v3 + v2 + v5; // 0x18a7bc
    char v7 = v6 + v5; // 0x18a7bc
    *(char *)a2 = v6;
    int64_t v8; // 0x18a7bc
    if (((v7 ^ v2) & (v7 ^ v3)) < 0) {
        v8 = function_18a779();
    }
    int64_t result = v8 + 0xcba18c1a & 0xffffffff; // 0x18a7ca
    if (a4 != 1) {
        result = function_18a782();
    }
    // 0x18a7cc
    return result;
}

// Address range: 0x18a851 - 0x18a852
int64_t function_18a851(void) {
    // 0x18a851
    int64_t result; // 0x18a851
    return result;
}

// Address range: 0x18a854 - 0x18a86c
int64_t function_18a854(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18a854
    int64_t v1; // 0x18a854
    char * v2 = (char *)(v1 - 128); // 0x18a854
    *v2 = *v2 + (char)a3;
    int64_t result; // 0x18a854
    uint64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)(v3 / 256);
    return result;
}

// Address range: 0x18a87d - 0x18a880
int64_t function_18a87d(void) {
    // 0x18a87d
    int64_t result; // 0x18a87d
    return result;
}
