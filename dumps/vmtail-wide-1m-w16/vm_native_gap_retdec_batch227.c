/*
 * Targeted RetDec C for native executable gap queue batch 227.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x185a85-0x185c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x185c85-0x185e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x185e85-0x186085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x186085-0x186285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x186285-0x186485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ed41e-0x2ed61e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ed61e-0x2ed81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ed81e-0x2eda1e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_185a85(void);
int64_t function_185a86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_185ac5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_185c0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_185d5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_185edd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_18600b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18612c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_186313(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2ed41e(void);
int64_t function_2ed436(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ed483(void);
int64_t function_2ed49f(void);
int64_t function_2ed4b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ed532(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ed533(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ed5fb(int64_t a1);
int64_t function_2ed60f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ed66e(void);
int64_t function_2ed671(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2ed691(int64_t a1);
int64_t function_2ed6ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ed74e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ed76e(int64_t a1, int64_t a2);
int64_t function_2ed791(void);
int64_t function_2ed7aa(int64_t a1, int64_t a2);
int64_t function_2ed805(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ed810(int64_t a1);
int64_t function_2ed813(int64_t a1);
int64_t function_2ed831(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2ed8ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ed8ce(int64_t a1, int32_t a2, int64_t a3);
int64_t function_2ed8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ed912(int64_t a1);
int64_t function_2ed91f(void);
int64_t function_2ed92e(void);
int64_t function_2ed959(void);
int64_t function_2ed97b(int64_t a1, int64_t a2);
int64_t function_2ed982(void);
int64_t function_2ed98e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ed99f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eda01(int64_t a1, int64_t a2, int64_t a3);
int64_t function_cdc60();
int64_t function_ffffffffab3c1657();
int64_t function_ffffffffd33ed472();
int64_t unknown_2cfd5d6e();
int64_t unknown_3d80eeaa();
int64_t unknown_6cc19d45();
int64_t unknown_6e24c13a();
int64_t unknown_ffffffff9529cd33();
int64_t unknown_ffffffffad74a9ac();
int64_t unknown_ffffffffb46cc07d();
int64_t unknown_ffffffffc3251d24();
int64_t unknown_ffffffffc51ae891();
int64_t unknown_ffffffffe8a8783f();
int64_t unknown_ffffffffec2da815();

// Address range: 0x185a85 - 0x185a86
int64_t function_185a85(void) {
    // 0x185a85
    int64_t result; // 0x185a85
    return result;
}

// Address range: 0x185a86 - 0x185ac5
int64_t function_185a86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x185a86
    int64_t v1; // 0x185a86
    char * v2 = (char *)(v1 + 84); // 0x185a86
    *v2 = *v2 | (char)a3;
    return function_cdc60(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x185ac5 - 0x185c0d
int64_t function_185ac5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x185ac5
    int64_t v1; // bp-40, 0x185ac5
    v1 = (int64_t)&v1;
    int64_t v2; // 0x185ac5
    return function_cdc60(a1, -0x7aea5ae1 * (0x100000000 * v2 >> 32) & 0xffffffff, a3, a4, a5, v2);
}

// Address range: 0x185c0d - 0x185d5e
int64_t function_185c0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x185c0d
    int64_t v1; // 0x185c0d
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x185c0d
    int64_t v3 = -0x7aea5ae1 * v2 != -0x7aea5ae100000000 * v2 >> 32; // 0x185c13
    bool v4; // 0x185c0d
    int64_t v5 = 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | v3 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 2048 * v3 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | 4 * (int64_t)v4 | 2; // 0x185c13
    int64_t v6 = v5; // bp-48, 0x185cb2
    int64_t v7 = (int64_t)&v6; // 0x185cf0
    int64_t * v8 = (int64_t *)(v7 - 8); // 0x185cf8
    int64_t * v9 = (int64_t *)(v7 - 16); // 0x185cfd
    *v9 = a2;
    *v8 = v5;
    int64_t v10 = v7 + 8; // 0x185d07
    int64_t * v11 = (int64_t *)v10; // 0x185d07
    *v11 = v5;
    *v8 = 0x7cafe4a0;
    *v9 = 0x9e9ada;
    *(int64_t *)(v7 + 24) = *v8;
    *v8 = v6;
    *v9 = v6;
    v6 = *v11;
    *v8 = v10;
    return function_cdc60(a1, *v9, a3, a4, a5, a6);
}

// Address range: 0x185d5e - 0x185edd
int64_t function_185d5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x185d5e
    int64_t v1; // 0x185d5e
    return function_cdc60(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x185edd - 0x18600b
int64_t function_185edd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x185edd
    return function_cdc60(a1, a2, a3, 0x7084d426, a5, a6);
}

// Address range: 0x18600b - 0x18612c
int64_t function_18600b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)a5; // 0x18608c
    int64_t v2; // 0x18600b
    *v1 = 0x6d81be5b * (0x100000000 * v2 >> 32) & 0xffffffff;
    int64_t * v3 = (int64_t *)(a5 - 8); // 0x186090
    *v3 = 0x1ee8e0f2;
    int64_t * v4 = (int64_t *)(a5 - 16); // 0x186095
    *v4 = 0x7d4b2600;
    int64_t * v5 = (int64_t *)(a5 - 24); // 0x1860a5
    int64_t v6 = *(int64_t *)(a5 + 24); // 0x1860ab
    *v4 = v6;
    *v5 = v6;
    int64_t v7 = *(int64_t *)(a5 + 8); // 0x1860be
    *v4 = v7;
    *(int64_t *)(a5 - 32) = v7;
    *v5 = v6;
    *v1 = *v4;
    *v5 = v7;
    *(int64_t *)(a5 + 16) = *v4;
    int64_t v8 = *v3; // 0x1860fb
    *v4 = v8;
    *v5 = v8;
    int64_t v9 = *v1; // 0x186111
    *v3 = v9;
    *v4 = v9;
    return function_cdc60(a1, a2, a3, a4, a5, v2);
}

// Address range: 0x18612c - 0x186313
int64_t function_18612c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3; // bp-40, 0x186212
    int64_t v2 = (int64_t)&v1; // 0x18621e
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x18625f
    *v3 = a7;
    *(int64_t *)(v2 + 16) = v1;
    v1 = a5;
    *v3 = *(int64_t *)(v2 - 16);
    int64_t v4 = v1; // 0x186293
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x186298
    *(int64_t *)(v2 + 40) = a3;
    *v5 = a7;
    v1 = a4;
    *v5 = v2 + 24;
    return function_cdc60(a1, 169, a3, v1, v4, a6);
}

// Address range: 0x186313 - 0x186481
int64_t function_186313(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-32, 0x1863c4
    int64_t v2 = (int64_t)&v1; // 0x1863f8
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x18640f
    *v3 = 0x2d6d0763;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x186414
    *v4 = a7;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x186428
    *v5 = *v3;
    *v3 = 0x8ee0e01;
    *(int64_t *)(v2 - 24) = 169;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v4 = v2;
    int64_t v6 = *v5; // 0x186463
    v1 = v6;
    *v3 = v6;
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2ed41e - 0x2ed434
int64_t function_2ed41e(void) {
    // 0x2ed41e
    unknown_ffffffffc3251d24();
    return unknown_ffffffff9529cd33() & -256 | (int64_t)__asm_in(75);
}

// Address range: 0x2ed436 - 0x2ed44e
int64_t function_2ed436(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ed436
    int64_t v1; // 0x2ed436
    return v1 + 0xc26b02ba & 0xffffffff;
}

// Address range: 0x2ed483 - 0x2ed484
int64_t function_2ed483(void) {
    // 0x2ed483
    int64_t result; // 0x2ed483
    return result;
}

// Address range: 0x2ed49f - 0x2ed4a0
int64_t function_2ed49f(void) {
    // 0x2ed49f
    int64_t result; // 0x2ed49f
    return result;
}

// Address range: 0x2ed4b1 - 0x2ed4c9
int64_t function_2ed4b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x2ed4b3
    int64_t v2; // 0x2ed4b1
    if (v1 != 0) {
        v2 = function_2ed483();
    }
    // 0x2ed4b5
    int64_t v3; // 0x2ed4b1
    int32_t v4 = v3; // 0x2ed4b1
    int32_t v5 = v3; // 0x2ed4b1
    int32_t v6 = v4 + v5; // 0x2ed4b1
    int64_t v7 = v2; // 0x2ed4b5
    if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
        v7 = function_2ed49f();
    }
    int64_t v8 = v7 + a2; // 0x2ed4b7
    int32_t * v9 = (int32_t *)((v8 & 0xffffffff) + 0x28be1074); // 0x2ed4bf
    *v9 = *v9 + v5;
    return function_2ed533(a1, (int32_t)(v8 | v3), a3, v1, v3, v3);
}

// Address range: 0x2ed532 - 0x2ed533
int64_t function_2ed532(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ed532
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x2ed532
    return result;
}

// Address range: 0x2ed533 - 0x2ed598
int64_t function_2ed533(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2ed533
    int64_t v1; // 0x2ed533
    int64_t v2 = v1;
    unsigned char v3 = (char)v1; // 0x2ed533
    bool v4; // 0x2ed533
    unsigned char v5 = v3 + 6 + (char)v4; // 0x2ed533
    bool v6 = v4 ? v5 <= v3 : v3 > 249; // 0x2ed533
    int64_t v7 = a2 - __readgsdword(a3) + (int32_t)v6; // 0x2ed535
    char v8 = *(char *)(v2 + a6); // 0x2ed538
    *(char *)a1 = v5;
    int64_t v9 = (v4 ? -1 : 1) + a1; // 0x2ed53e
    uint32_t v10 = (int32_t)v1 >> 31; // 0x2ed53f
    int64_t v11 = v10; // 0x2ed53f
    *(char *)-0x12b85bb7 = *(char *)-0x12b85bb7 + (char)v9;
    int32_t * v12 = (int32_t *)(v1 + 36); // 0x2ed54a
    int32_t v13 = v9; // 0x2ed54a
    *v12 = *v12 | v13;
    int64_t v14 = (v2 & -256 | (int64_t)(v8 ^ (char)v2)) - 8; // 0x2ed54f
    *(int64_t *)v14 = 0x144cd9eb;
    *(char *)0x3ff17a5d = *(char *)0x3ff17a5d + (char)(v1 / 256);
    int32_t * v15 = (int32_t *)v11; // 0x2ed565
    *v15 = *v15 + (int32_t)v1;
    *(char *)(v11 + 0x3306fc82) = (char)(v10 / 256);
    *(int32_t *)-0x4acf4287 = *(int32_t *)-0x4acf4287 + v13;
    *(int32_t *)v9 = *(int32_t *)v7;
    int64_t v16 = v4 ? -4 : 4; // 0x2ed578
    int64_t v17 = v9 + v16; // 0x2ed578
    int32_t * v18 = (int32_t *)(v17 + 71); // 0x2ed583
    *v18 = *v18 + (int32_t)v14;
    unknown_ffffffffc51ae891(v17, v16 + v7, v10, a4 & -256 | 232);
    return v1 & 0xffffffff;
}

// Address range: 0x2ed5fb - 0x2ed5fe
int64_t function_2ed5fb(int64_t a1) {
    // 0x2ed5fb
    int64_t result; // 0x2ed5fb
    return result;
}

// Address range: 0x2ed60f - 0x2ed66d
int64_t function_2ed60f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = unknown_ffffffffec2da815(); // 0x2ed60f
    bool v3; // 0x2ed60f
    if (v3) {
        // 0x2ed650
        *(char *)((int64_t)*(int32_t *)-0x77fe17617b4df708 - 0x37317a60) = 0;
        return unknown_2cfd5d6e();
    }
    char * v4 = (char *)(v2 + 0x2508e00); // 0x2ed621
    *v4 = *v4 + (char)v2;
    char * v5 = (char *)((a4 + 0xf201e800 & 0xffffffff) + 0x3301e800); // 0x2ed627
    *v5 = *v5 + (char)(a4 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a1;
    __asm_wait();
    int64_t v6 = unknown_ffffffffe8a8783f((v3 ? -4 : 4) + a1); // 0x2ed639
    return (v6 + 124) % 256 | v6 & -256;
}

// Address range: 0x2ed66e - 0x2ed671
int64_t function_2ed66e(void) {
    // 0x2ed66e
    int64_t result; // 0x2ed66e
    return result;
}

// Address range: 0x2ed671 - 0x2ed68e
int64_t function_2ed671(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 105); // 0x2ed674
    *v1 = *v1 - (char)a4;
    int64_t v2 = unknown_ffffffffb46cc07d(); // 0x2ed677
    int64_t v3; // 0x2ed671
    char * v4 = (char *)(v3 + 0x7ab28147); // 0x2ed67c
    *v4 = *v4 - 85;
    *(int32_t *)(a2 - 54) = (int32_t)a3;
    return a4 % 256 | v2 & 0xfe176800 | 0x1e89700;
}

// Address range: 0x2ed691 - 0x2ed692
int64_t function_2ed691(int64_t a1) {
    // 0x2ed691
    int64_t result; // 0x2ed691
    return result;
}

// Address range: 0x2ed6ea - 0x2ed6f3
int64_t function_2ed6ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ed6ea
    *(int32_t *)a4 = -0x1fe17c6;
    int64_t result; // 0x2ed6ea
    return result;
}

// Address range: 0x2ed74e - 0x2ed756
int64_t function_2ed74e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ed74e
    int64_t v1; // 0x2ed74e
    *(char *)-0x2ff4281f = *(char *)-0x2ff4281f + (char)v1;
    return a4 & 0xffffffff;
}

// Address range: 0x2ed76e - 0x2ed776
int64_t function_2ed76e(int64_t a1, int64_t a2) {
    // 0x2ed76e
    int64_t v1; // 0x2ed76e
    int64_t v2 = v1;
    bool v3; // 0x2ed76e
    *(char *)a2 = 128 * (char)v3 | (char)v1 / 2;
    return (v2 + 217) % 256 | v2 & -256;
}

// Address range: 0x2ed791 - 0x2ed792
int64_t function_2ed791(void) {
    // 0x2ed791
    int64_t result; // 0x2ed791
    return result;
}

// Address range: 0x2ed7aa - 0x2ed7ba
int64_t function_2ed7aa(int64_t a1, int64_t a2) {
    // 0x2ed7aa
    int64_t v1; // 0x2ed7aa
    int32_t * v2 = (int32_t *)(a2 + 22 + 8 * v1); // 0x2ed7ac
    *v2 = *v2 ^ (int32_t)v1;
    return function_2ed791();
}

// Address range: 0x2ed805 - 0x2ed80f
int64_t function_2ed805(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ed805
    int64_t result; // 0x2ed805
    return result;
}

// Address range: 0x2ed810 - 0x2ed813
int64_t function_2ed810(int64_t a1) {
    // 0x2ed810
    int64_t result; // 0x2ed810
    return result;
}

// Address range: 0x2ed813 - 0x2ed817
int64_t function_2ed813(int64_t a1) {
    // 0x2ed813
    return a1 & 0xffffffff;
}

// Address range: 0x2ed831 - 0x2ed85e
int64_t function_2ed831(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2ed831
    bool v1; // 0x2ed831
    bool v2 = v1;
    unknown_6e24c13a();
    unknown_6cc19d45();
    int64_t v3; // 0x2ed831
    unsigned char v4 = (char)v3; // 0x2ed845
    unsigned char v5 = (char)!v2 + (char)(a4 / 256); // 0x2ed845
    bool v6 = !v2 ? v5 != -1 | (char)!v2 + v4 - v5 > v4 : v5 > v4; // 0x2ed845
    return function_2ed8ce(a5, (int32_t)a2 - (int32_t)v3 + (int32_t)v6, a3);
}

// Address range: 0x2ed8ba - 0x2ed8c2
int64_t function_2ed8ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)(a2 - 53 + 8 * a2); // 0x2ed8ba
    *(char *)(a4 & -256 | (int64_t)v1) = v1;
    int64_t result; // 0x2ed8ba
    return result;
}

// Address range: 0x2ed8ce - 0x2ed8e7
int64_t function_2ed8ce(int64_t a1, int32_t a2, int64_t a3) {
    // 0x2ed8ce
    int64_t v1; // 0x2ed8ce
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x2ed8e9 - 0x2ed8fa
int64_t function_2ed8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ed8e9
    int64_t result; // 0x2ed8e9
    int64_t v1 = result;
    *(char *)v1 = (char)(result / 256) + (char)v1;
    int32_t * v2 = (int32_t *)(a1 - 0x177bd189); // 0x2ed8eb
    *v2 = *v2 | (int32_t)a4;
    int32_t * v3 = (int32_t *)(result + 0x594da803); // 0x2ed8f1
    *v3 = *v3 + (int32_t)a3;
    return result;
}

// Address range: 0x2ed912 - 0x2ed913
int64_t function_2ed912(int64_t a1) {
    // 0x2ed912
    int64_t result; // 0x2ed912
    return result;
}

// Address range: 0x2ed91f - 0x2ed920
int64_t function_2ed91f(void) {
    // 0x2ed91f
    int64_t result; // 0x2ed91f
    return result;
}

// Address range: 0x2ed92e - 0x2ed933
int64_t function_2ed92e(void) {
    // 0x2ed92e
    return function_ffffffffd33ed472();
}

// Address range: 0x2ed959 - 0x2ed95e
int64_t function_2ed959(void) {
    // 0x2ed959
    return function_ffffffffab3c1657();
}

// Address range: 0x2ed97b - 0x2ed97d
int64_t function_2ed97b(int64_t a1, int64_t a2) {
    // 0x2ed97b
    return a1 & 0xffffffff;
}

// Address range: 0x2ed982 - 0x2ed984
int64_t function_2ed982(void) {
    // 0x2ed982
    int64_t v1; // 0x2ed982
    return function_2ed99f(v1, v1, v1, v1);
}

// Address range: 0x2ed98e - 0x2ed99f
int64_t function_2ed98e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ed98e
    int64_t result; // 0x2ed98e
    unsigned char v1 = (char)result;
    *(char *)a3 = v1 / 2 | 128 * v1;
    *(char *)-0x5504fb397b55fe18 = (char)result;
    return result;
}

// Address range: 0x2ed99f - 0x2ed9bf
int64_t function_2ed99f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3d80eeaa(); // 0x2ed9a4
    int32_t * v2 = (int32_t *)(a3 - 47); // 0x2ed9ad
    uint32_t v3 = *v2; // 0x2ed9ad
    uint32_t v4 = v3 + (int32_t)a4; // 0x2ed9ad
    *v2 = v4;
    int64_t v5; // 0x2ed99f
    char * v6 = (char *)((2 * (2 * v5 + v1) & 0x1fffffffe) + 0x3cd09742); // 0x2ed9b0
    *v6 = *v6 + (char)a4 + (char)(v4 < v3);
    int64_t v7; // 0x2ed99f
    return unknown_ffffffffad74a9ac() & -256 | (int64_t)*(char *)&v7;
}

// Address range: 0x2eda01 - 0x2eda17
int64_t function_2eda01(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2eda01
    int64_t result; // 0x2eda01
    int32_t * v1 = (int32_t *)(result - 0x2b075427); // 0x2eda01
    *v1 = *v1 + 37;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}
