/*
 * Targeted RetDec C for native executable gap queue batch 225.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x184685-0x184885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x184a85-0x184c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x184c85-0x184e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x184e85-0x185085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ec01e-0x2ec21e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ec41e-0x2ec61e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ec61e-0x2ec81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ec81e-0x2eca1e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_184685(int64_t a1, int64_t a2, int64_t a3);
int64_t function_184693(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18470a(int64_t a1);
int64_t function_18470f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_184812(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_184825(void);
int64_t function_184841(void);
int64_t function_18485a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_184a7a();
int64_t function_184a85(void);
int64_t function_184a97(void);
int64_t function_184ac5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_184b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_184c9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_184d2e(void);
int64_t function_184dcd(void);
int64_t function_184de3(void);
int64_t function_184def(void);
int64_t function_184e15(int64_t a1, int64_t a2, int64_t a3);
int64_t function_184e48(int64_t a1);
int64_t function_184e50(int64_t a1, int64_t a2);
int64_t function_184e71(void);
int64_t function_184e90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_184fc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_185008(void);
int64_t function_18505d(void);
int64_t function_185082(int64_t a1);
int64_t function_2185505e();
int64_t function_2230b06b();
int64_t function_2ec01e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ec06a(int64_t a1);
int64_t function_2ec087(int64_t a1);
int64_t function_2ec09c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ec0d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ec0d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ec131(void);
int64_t function_2ec145(int64_t a1);
int64_t function_2ec153(void);
int64_t function_2ec173(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ec19c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2ec21b(int64_t a1);
int64_t function_2ec41e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ec45e(void);
int64_t function_2ec472(int64_t a1);
int64_t function_2ec497(void);
int64_t function_2ec4eb(int64_t a1);
int64_t function_2ec503(void);
int64_t function_2ec54a(int64_t a1);
int64_t function_2ec57a(int64_t a1);
int64_t function_2ec5df(void);
int64_t function_2ec64f(void);
int64_t function_2ec663(int64_t a1);
int64_t function_2ec6b7(void);
int64_t function_2ec6f3(int64_t a1);
int64_t function_2ec6f7(int64_t a1);
int64_t function_2ec711(void);
int64_t function_2ec717(void);
int64_t function_2ec724(void);
int64_t function_2ec726(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ec798(void);
int64_t function_2ec79e(int64_t a1, int64_t a2);
int64_t function_2ec7c7(void);
int64_t function_2ec7cc(int64_t a1);
int64_t function_2ec7d1(void);
int64_t function_2ec7d9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ec809(void);
int64_t function_2ec80c(void);
int64_t function_2ec814(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ec816(int64_t a1, int64_t a2);
int64_t function_2ec820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ec8aa(void);
int64_t function_2ec96a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ec999(void);
int64_t function_2ec9ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ec9f7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f3d5bae();
int64_t function_81a368b();
int64_t function_b30b1e2();
int64_t function_ffffffff8f4df4e9();
int64_t function_ffffffffca243433();
int64_t function_ffffffffcc57f33e();
int64_t function_ffffffffe74acba3();
int64_t unknown_134aaca5();
int64_t unknown_1a310c53();
int64_t unknown_1ee7b1a9();
int64_t unknown_257ca5eb();
int64_t unknown_2620042d();
int64_t unknown_30dbc7b6();
int64_t unknown_3d30a838();
int64_t unknown_3d30af42();
int64_t unknown_40229f39();
int64_t unknown_5e20e52a();
int64_t unknown_823bde2();
int64_t unknown_ffffffff829f1911();
int64_t unknown_ffffffffac18efd3();
int64_t unknown_ffffffffd2d03f69();
int64_t unknown_ffffffffd41ef370();
int64_t unknown_ffffffffd672e880();
int64_t unknown_ffffffffedd154b1();
int64_t unknown_fffffffff9f0fe48();
int64_t unknown_fffffffffb1a4b22();
int64_t unknown_fffffffffb96e9e6();
int64_t unknown_fffffffffc634a78();

// Address range: 0x184685 - 0x184691
int64_t function_184685(int64_t a1, int64_t a2, int64_t a3) {
    // 0x184685
    int64_t v1; // 0x184685
    return v1 + 0xab1a8e95 & 0xffffffff;
}

// Address range: 0x184693 - 0x18469e
int64_t function_184693(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 81); // 0x184693
    int64_t result; // 0x184693
    *v1 = *v1 + (int32_t)result;
    int64_t v2; // 0x184693
    unsigned char v3 = *(char *)&v2; // 0x184696
    *(char *)a2 = v3 / 64 | 4 * v3;
    return result;
}

// Address range: 0x18470a - 0x18470e
int64_t function_18470a(int64_t a1) {
    // 0x18470a
    int64_t result; // 0x18470a
    int32_t * v1 = (int32_t *)(result - 44); // 0x18470a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x18470f - 0x18472d
int64_t function_18470f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18470f
    int64_t v1; // 0x18470f
    return __asm_hlt(v1 & 0xffffffff);
}

// Address range: 0x184812 - 0x184818
int64_t function_184812(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(2 * a1 + a4); // 0x184812
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x184812
    return result;
}

// Address range: 0x184825 - 0x18482d
int64_t function_184825(void) {
    // 0x184825
    return unknown_2620042d();
}

// Address range: 0x184841 - 0x184843
int64_t function_184841(void) {
    // 0x184841
    int64_t result; // 0x184841
    return result;
}

// Address range: 0x18485a - 0x184863
int64_t function_18485a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18485a
    int64_t result; // 0x18485a
    return result;
}

// Address range: 0x184a85 - 0x184a90
int64_t function_184a85(void) {
    // 0x184a85
    int64_t v1; // 0x184a85
    int64_t result = v1 & -24; // 0x184a86
    char * v2 = (char *)(8 * v1 + 0x23256301 + result); // 0x184a88
    *v2 = *v2 + (char)(v1 / 256);
    return result;
}

// Address range: 0x184a97 - 0x184a9c
int64_t function_184a97(void) {
    // 0x184a97
    return function_ffffffff8f4df4e9();
}

// Address range: 0x184ac5 - 0x184b5b
int64_t function_184ac5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a1;
    int64_t v3; // 0x184ac5
    bool v4; // 0x184ac5
    *(char *)v3 = (char)v4;
    int64_t result; // 0x184ac5
    *(char *)result = *(char *)&result + 64;
    unknown_ffffffffac18efd3();
    char * v5 = (char *)(a3 - 0x39fddc51); // 0x184ad2
    *v5 = *v5 + (char)(a3 / 256);
    char * v6 = (char *)(v3 - 14); // 0x184ad8
    unsigned char v7 = *v6; // 0x184ad8
    *v6 = v7 / 128 | 2 * v7;
    *(char *)a4 = (char)a4;
    __asm_in_133(10);
    int64_t v8 = unknown_fffffffffb96e9e6(); // 0x184ae0
    char * v9 = (char *)(a1 - 103); // 0x184ae5
    char v10 = *v9 + (char)v3; // 0x184ae5
    *v9 = v10;
    int64_t v11 = v8 | 255; // 0x184ae8
    result = v11;
    char * v12 = (char *)v11; // 0x184aea
    unsigned char v13 = *v12; // 0x184aea
    *v12 = v13 / 128 | 2 * v13;
    if (v10 == 0) {
        result = function_184a7a();
    }
    int32_t * v14 = (int32_t *)(v1 + 2 * v3); // 0x184af0
    *v14 = *v14 + (int32_t)v1;
    uint64_t v15 = result / 2; // 0x184afa
    uint32_t v16 = (int32_t)a3; // 0x184afd
    *(int32_t *)v1 = *(int32_t *)&v1 + v16;
    int64_t v17; // 0x184ac5
    *(int32_t *)v17 = *(int32_t *)&v17 + (int32_t)v3;
    char * v18 = (char *)(a2 + 0x1bf5c15f); // 0x184b03
    *v18 = -1 - *v18;
    char * v19 = (char *)v15; // 0x184b09
    char v20 = *v19 - (char)v15; // 0x184b09
    *v19 = v20;
    int64_t v21 = unknown_ffffffff829f1911(); // 0x184b0b
    result = v21;
    if (v20 != 0) {
        // 0x184b59
        *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)v21;
        return result;
    }
    int16_t v22 = a3; // 0x184b13
    int64_t result2 = __asm_in_134(v22); // 0x184b13
    result = result2;
    if (v1 != 1) {
        // 0x184b3c
        return result2;
    }
    int64_t v23 = unknown_fffffffffb1a4b22(); // 0x184b1c
    *(char *)v2 = __asm_insb(v22);
    result = v23 & -256 | (int64_t)*(char *)0x1e8d7f1279f054f;
    char * v24 = (char *)(v2 - 0x67298768); // 0x184b30
    *v24 = *v24 + (char)(v16 / 2);
    return result;
}

// Address range: 0x184b9f - 0x184bda
int64_t function_184b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x184b9f
    int64_t v1; // 0x184b9f
    int64_t v2 = v1 + 0xfaf901e8 & 0xffffffff; // 0x184b9f
    __asm_iretd(0x4021d019, v2);
    unknown_30dbc7b6();
    int32_t * v3 = (int32_t *)(a4 + 30); // 0x184bb7
    *v3 = *v3 + 0x4021d019;
    int32_t v4 = __asm_in_133(-69); // 0x184bbc
    int32_t v5 = *(int32_t *)(a4 + 0x4021d001) + 0x4021d019; // 0x184bbe
    *(int32_t *)-0x17b9df35 = *(int32_t *)-0x17b9df35 + v5;
    int32_t * v6 = (int32_t *)(int64_t)(v4 + (int32_t)v1); // 0x184bca
    uint32_t v7 = *v6; // 0x184bca
    uint32_t v8 = v7 + v5; // 0x184bca
    *v6 = v8;
    char v9 = *(char *)0x3da0b6ea; // 0x184bcc
    *(char *)0x3da0b6ea = v9 + (char)a4 + (char)(v8 < v7);
    __asm_outsd((int16_t)a3, *(int32_t *)v2);
    return __asm_int1();
}

// Address range: 0x184c9f - 0x184cbd
int64_t function_184c9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x184c9f
    int64_t v1; // 0x184c9f
    int64_t v2 = v1;
    int64_t result = unknown_134aaca5(); // 0x184c9f
    *(char *)v2 = (char)result + (char)v2;
    int32_t * v3 = (int32_t *)(a3 + 0x3856a4da); // 0x184ca9
    *v3 = *v3 + (int32_t)a1;
    int64_t v4; // 0x184c9f
    *(char *)a2 = *(char *)&v4 + (char)a4;
    return result;
}

// Address range: 0x184d2e - 0x184d31
int64_t function_184d2e(void) {
    // 0x184d2e
    int64_t result; // 0x184d2e
    return result;
}

// Address range: 0x184dcd - 0x184dce
int64_t function_184dcd(void) {
    // 0x184dcd
    int64_t result; // 0x184dcd
    return result;
}

// Address range: 0x184de3 - 0x184de5
int64_t function_184de3(void) {
    // 0x184de3
    return function_184dcd();
}

// Address range: 0x184def - 0x184df6
int64_t function_184def(void) {
    // 0x184def
    return function_81a368b();
}

// Address range: 0x184e15 - 0x184e1e
int64_t function_184e15(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x2f808534); // 0x184e16
    int64_t v2; // 0x184e15
    *v1 = *v1 + (int32_t)v2;
    return function_184e90(a1, a2, v2, v2, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x184e48 - 0x184e4f
int64_t function_184e48(int64_t a1) {
    // 0x184e48
    int64_t v1; // 0x184e48
    uint64_t v2 = v1;
    unsigned char v3 = (char)(v2 / 256); // 0x184e48
    unsigned char v4 = *(char *)(v2 - 125); // 0x184e48
    char v5 = v3 - v4; // 0x184e48
    return v2 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v4 > v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 - v4 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v5) % 2 == 0)) | 512;
}

// Address range: 0x184e50 - 0x184e5e
int64_t function_184e50(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)0x3a1f6859; // 0x184e52
    uint32_t v2 = v1 + (int32_t)a1; // 0x184e52
    *(int32_t *)0x3a1f6859 = v2;
    int64_t v3; // 0x184e50
    return v3 + 0x8828537c + v3 + (int64_t)(v2 < v1) & 0xffffffff;
}

// Address range: 0x184e71 - 0x184e74
int64_t function_184e71(void) {
    // 0x184e71
    int64_t result; // 0x184e71
    return result;
}

// Address range: 0x184e90 - 0x184ed6
int64_t function_184e90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3; // 0x184e90
    int64_t v2 = a1; // 0x184e90
    bool v3; // 0x184e90
    if (!v3 && true) {
        // 0x184e92
        __asm_in_135((int16_t)a3);
        char v4 = *(char *)(a1 - 24); // 0x184e95
        v1 = 256 * (int64_t)(v4 | (char)(a3 / 256)) | a3 & -0xff01;
        int64_t v5; // 0x184e90
        int32_t * v6 = (int32_t *)(v5 + 65); // 0x184e98
        *v6 = *v6 + (int32_t)v1;
        char * v7 = (char *)(v5 + 99); // 0x184e9b
        *v7 = *v7 | (char)a3;
        int64_t v8 = (int64_t)(*(int32_t *)v1 & (int32_t)a1); // 0x184e9e
        int32_t * v9 = (int32_t *)(v5 - 24); // 0x184ea0
        *v9 = *v9 - 1;
        int3_t v10; // 0x184e90
        __frontend_reg_store_fpr(v10 - 1, (float80_t)*(int32_t *)(v8 - 91));
        v2 = (v3 ? -1 : 1) + v8;
    }
    // 0x184eab
    unknown_ffffffffedd154b1();
    int32_t * v11 = (int32_t *)(v1 + 0x78c2f9d0); // 0x184eb0
    *v11 = *v11 + 24;
    int32_t * v12 = (int32_t *)(2 * v2 - 0x63c56efd); // 0x184eb7
    *v12 = *v12 + (int32_t)v2;
    return v2 + a4 & 0xffffffff;
}

// Address range: 0x184fc5 - 0x184fcd
int64_t function_184fc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x184fc5
    return function_2185505e();
}

// Address range: 0x185008 - 0x18500b
int64_t function_185008(void) {
    // 0x185008
    int64_t result; // 0x185008
    return result;
}

// Address range: 0x18505d - 0x18506b
int64_t function_18505d(void) {
    // 0x18505d
    float80_t v1; // 0x18505d
    *(int32_t *)-0x1e597330 = (int32_t)v1;
    int64_t result; // 0x18505d
    return result;
}

// Address range: 0x185082 - 0x185085
int64_t function_185082(int64_t a1) {
    // 0x185082
    int64_t result; // 0x185082
    return result;
}

// Address range: 0x2ec01e - 0x2ec045
int64_t function_2ec01e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ec01e
    int64_t v1; // 0x2ec01e
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    int64_t v2; // 0x2ec01e
    *(char *)a3 = *(char *)&v2 & (char)a2;
    int64_t result = unknown_3d30a838(); // 0x2ec032
    int32_t * v3 = (int32_t *)((v1 & 0xffffffff) - 0x25fe1719); // 0x2ec037
    *v3 = *v3 + (int32_t)v1;
    __asm_rcl(*(char *)result);
    return result;
}

// Address range: 0x2ec06a - 0x2ec06b
int64_t function_2ec06a(int64_t a1) {
    // 0x2ec06a
    int64_t result; // 0x2ec06a
    return result;
}

// Address range: 0x2ec087 - 0x2ec088
int64_t function_2ec087(int64_t a1) {
    // 0x2ec087
    int64_t result; // 0x2ec087
    return result;
}

// Address range: 0x2ec09c - 0x2ec0ab
int64_t function_2ec09c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)-0x819185d; // 0x2ec09c
    int64_t result; // 0x2ec09c
    unsigned char v2 = v1 + (char)(result / 256); // 0x2ec09c
    *(char *)-0x819185d = v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x2ec0a2
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(result - 0x8b64de2); // 0x2ec0a2
        uint32_t v5 = *v4; // 0x2ec0a2
        *v4 = (int32_t)(v2 < v1) << 32 - v3 | v5 >> v3 | (int32_t)((int64_t)v5 << (int64_t)(33 - v3));
    }
    return result;
}

// Address range: 0x2ec0d2 - 0x2ec0d7
int64_t function_2ec0d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ec0d2
    int64_t result; // 0x2ec0d2
    return result;
}

// Address range: 0x2ec0d7 - 0x2ec0de
int64_t function_2ec0d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ec0d7
    int64_t result; // 0x2ec0d7
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x2ec131 - 0x2ec134
int64_t function_2ec131(void) {
    // 0x2ec131
    int64_t v1; // 0x2ec131
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x2ec145 - 0x2ec146
int64_t function_2ec145(int64_t a1) {
    // 0x2ec145
    int64_t result; // 0x2ec145
    return result;
}

// Address range: 0x2ec153 - 0x2ec154
int64_t function_2ec153(void) {
    // 0x2ec153
    int64_t result; // 0x2ec153
    return result;
}

// Address range: 0x2ec173 - 0x2ec18c
int64_t function_2ec173(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x2ec173
    char v3 = v2; // 0x2ec173
    char v4 = v3 + 1; // 0x2ec173
    int64_t result = v2 & -256 | (int64_t)v4; // 0x2ec173
    if (v4 >= 0) {
        // 0x2ec188
        return result;
    }
    char * v5 = (char *)result; // 0x2ec17c
    *v5 = (char)(v3 != -1) + (char)a4 + *v5;
    uint32_t v6 = *(int32_t *)&v1; // 0x2ec184
    uint32_t v7 = v6 + (int32_t)v1; // 0x2ec184
    *(int32_t *)v1 = v7;
    int64_t result2 = result & 0xe83b1868; // 0x2ec186
    if (v7 < v6 || v7 == 0) {
        result2 = function_2ec153();
    }
    // 0x2ec188
    return result2;
}

// Address range: 0x2ec19c - 0x2ec1c2
int64_t function_2ec19c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2ec19c
    int64_t v1; // 0x2ec19c
    int32_t * v2 = (int32_t *)(v1 - 111); // 0x2ec19c
    *v2 = *v2 + (int32_t)a3;
    int64_t v3 = v1 & 225 | 30; // 0x2ec19f
    int64_t v4 = v3 | v1 & -256; // 0x2ec19f
    char * v5 = (char *)(v4 + 0x60b3c00); // 0x2ec1ab
    *v5 = *v5 + (char)v3;
    char * v6 = (char *)(v1 - 0x46fe1800); // 0x2ec1b1
    *v6 = *v6 + (*(char *)(a2 + a1 & 0xffffffff) | (char)(a4 / 256));
    char * v7 = (char *)(v1 - 0x65f8c559); // 0x2ec1b7
    *v7 = *v7 + (char)v1;
    return v4 & 0xffffffe1 ^ 0x15087101;
}

// Address range: 0x2ec21b - 0x2ec21c
int64_t function_2ec21b(int64_t a1) {
    // 0x2ec21b
    int64_t result; // 0x2ec21b
    return result;
}

// Address range: 0x2ec41e - 0x2ec433
int64_t function_2ec41e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)0x4d2ac22d; // 0x2ec426
    int64_t v2; // 0x2ec41e
    bool v3; // 0x2ec41e
    *(char *)0x4d2ac22d = v1 + (char)((v2 + a4 + (int64_t)v3) / 256);
    *(char *)a1 = (char)v2 ^ -31;
    return (int64_t)__asm_in(123) | 0x4c54e100;
}

// Address range: 0x2ec45e - 0x2ec463
int64_t function_2ec45e(void) {
    // 0x2ec45e
    return function_ffffffffca243433();
}

// Address range: 0x2ec472 - 0x2ec475
int64_t function_2ec472(int64_t a1) {
    // 0x2ec472
    int64_t result; // 0x2ec472
    return result;
}

// Address range: 0x2ec497 - 0x2ec49a
int64_t function_2ec497(void) {
    // 0x2ec497
    int64_t result; // 0x2ec497
    return result;
}

// Address range: 0x2ec4eb - 0x2ec4ee
int64_t function_2ec4eb(int64_t a1) {
    // 0x2ec4eb
    int64_t result; // 0x2ec4eb
    return result;
}

// Address range: 0x2ec503 - 0x2ec508
int64_t function_2ec503(void) {
    // 0x2ec503
    int64_t result; // 0x2ec503
    return result;
}

// Address range: 0x2ec54a - 0x2ec54b
int64_t function_2ec54a(int64_t a1) {
    // 0x2ec54a
    int64_t result; // 0x2ec54a
    return result;
}

// Address range: 0x2ec57a - 0x2ec582
int64_t function_2ec57a(int64_t a1) {
    // 0x2ec57a
    return unknown_ffffffffd672e880(a1);
}

// Address range: 0x2ec5df - 0x2ec5e0
int64_t function_2ec5df(void) {
    // 0x2ec5df
    int64_t result; // 0x2ec5df
    return result;
}

// Address range: 0x2ec64f - 0x2ec656
int64_t function_2ec64f(void) {
    // 0x2ec64f
    int64_t v1; // 0x2ec64f
    unsigned char v2 = (char)v1;
    char v3 = v2 / 128; // 0x2ec64f
    *(char *)v1 = v3 | 2 * v2;
    int64_t result; // 0x2ec64f
    bool v4; // 0x2ec64f
    if (v4 != v2 / 64 % 2 != v3) {
        result = function_2ec5df();
    }
    // 0x2ec653
    return result;
}

// Address range: 0x2ec663 - 0x2ec67b
int64_t function_2ec663(int64_t a1) {
    // 0x2ec663
    unknown_ffffffffd2d03f69();
    char * v1 = (char *)(a1 + 36); // 0x2ec668
    int64_t v2; // 0x2ec663
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return unknown_fffffffffc634a78();
}

// Address range: 0x2ec6b7 - 0x2ec6ba
int64_t function_2ec6b7(void) {
    // 0x2ec6b7
    int64_t result; // 0x2ec6b7
    return result;
}

// Address range: 0x2ec6f3 - 0x2ec6f4
int64_t function_2ec6f3(int64_t a1) {
    // 0x2ec6f3
    int64_t result; // 0x2ec6f3
    return result;
}

// Address range: 0x2ec6f7 - 0x2ec6fc
int64_t function_2ec6f7(int64_t a1) {
    // 0x2ec6f7
    int64_t result; // 0x2ec6f7
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2ec711 - 0x2ec712
int64_t function_2ec711(void) {
    // 0x2ec711
    int64_t result; // 0x2ec711
    return result;
}

// Address range: 0x2ec717 - 0x2ec719
int64_t function_2ec717(void) {
    // 0x2ec717
    int64_t v1; // 0x2ec717
    return function_2ec726(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x2ec724 - 0x2ec726
int64_t function_2ec724(void) {
    // 0x2ec724
    int64_t v1; // 0x2ec724
    int64_t v2 = v1;
    return (v2 + 179) % 256 | v2 & -256;
}

// Address range: 0x2ec726 - 0x2ec794
int64_t function_2ec726(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ec726
    int64_t v1; // 0x2ec726
    int32_t v2 = v1; // 0x2ec726
    __asm_out_136(-102, v2);
    bool v3; // 0x2ec726
    if (v3) {
        uint32_t result = v2 + 0x14a4bc3c; // 0x2ec787
        if (a4 != 1 == result == 0) {
            // 0x2ec776
            return __asm_int3() + a1 & 0xffffffff;
        }
        int32_t * v4 = (int32_t *)(a3 - 0x23b4e58c); // 0x2ec78e
        *v4 = *v4 + (int32_t)v1;
        return result;
    }
    // 0x2ec72f
    __asm_out_137((int16_t)a3, v2 + 0x1b01e857);
    *(char *)a4 = (char)v1;
    int64_t v5 = __asm_int1(); // 0x2ec73a
    int64_t v6 = unknown_3d30af42(); // 0x2ec73c
    int32_t * v7 = (int32_t *)v6; // 0x2ec741
    *v7 = *v7 + (int32_t)v6;
    __asm_outsd((int16_t)v5, *(int32_t *)0x75b3f9e6);
    __asm_fbld(*(float80_t *)(v1 + 79));
    int64_t result2 = unknown_1a310c53(); // 0x2ec753
    if (a4 != 1) {
        result2 = function_2ec711();
    }
    // 0x2ec755
    return result2;
}

// Address range: 0x2ec798 - 0x2ec79d
int64_t function_2ec798(void) {
    // 0x2ec798
    return function_2230b06b();
}

// Address range: 0x2ec79e - 0x2ec7b7
int64_t function_2ec79e(int64_t a1, int64_t a2) {
    // 0x2ec79e
    int64_t v1; // 0x2ec79e
    *(int32_t *)a2 = (int32_t)v1 + 54;
    unknown_1ee7b1a9();
    return 0xbe6a01e8;
}

// Address range: 0x2ec7c7 - 0x2ec7c8
int64_t function_2ec7c7(void) {
    // 0x2ec7c7
    int64_t result; // 0x2ec7c7
    return result;
}

// Address range: 0x2ec7cc - 0x2ec7cd
int64_t function_2ec7cc(int64_t a1) {
    // 0x2ec7cc
    int64_t result; // 0x2ec7cc
    return result;
}

// Address range: 0x2ec7d1 - 0x2ec7d6
int64_t function_2ec7d1(void) {
    // 0x2ec7d1
    return function_ffffffffcc57f33e();
}

// Address range: 0x2ec7d9 - 0x2ec7f2
int64_t function_2ec7d9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ec7d9
    unknown_823bde2();
    *(int32_t *)a1 = (int32_t)a2;
    bool v1; // 0x2ec7d9
    int64_t v2 = v1 ? -4 : 4; // 0x2ec7e3
    return unknown_257ca5eb(v2 + a1 + (v1 ? -1 : 1), v2 + a2) & 0xff7fffd0 | 0x80002f;
}

// Address range: 0x2ec809 - 0x2ec80a
int64_t function_2ec809(void) {
    // 0x2ec809
    int64_t result; // 0x2ec809
    return result;
}

// Address range: 0x2ec80c - 0x2ec813
int64_t function_2ec80c(void) {
    // 0x2ec80c
    int64_t v1; // 0x2ec80c
    return function_2ec816(v1, v1);
}

// Address range: 0x2ec814 - 0x2ec816
int64_t function_2ec814(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ec814
    int64_t result; // 0x2ec814
    return result;
}

// Address range: 0x2ec816 - 0x2ec81f
int64_t function_2ec816(int64_t a1, int64_t a2) {
    // 0x2ec816
    int64_t result; // 0x2ec816
    return result;
}

// Address range: 0x2ec820 - 0x2ec8a6
int64_t function_2ec820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ec820
    bool v1; // 0x2ec820
    if (v1) {
        function_2ec809();
    }
    // 0x2ec824
    unknown_5e20e52a();
    uint32_t v2 = *(int32_t *)(a4 + 82); // 0x2ec82a
    int64_t v3; // 0x2ec820
    int64_t v4 = (v3 & 0xffffffff | 0x100000000 * a3) % (int64_t)v2 & 0xffffffff; // 0x2ec82a
    int64_t v5 = (int64_t)(*(int32_t *)(v4 + 79) ^ (int32_t)a1); // 0x2ec82f
    *(int32_t *)v5 = (int32_t)a2;
    int64_t v6 = v1 ? -4 : 4; // 0x2ec832
    unknown_40229f39(v6 + v5, v6 + a2, v4);
    unknown_fffffffff9f0fe48(0xf376867d);
    int64_t result = __asm_int1(); // 0x2ec84b
    int32_t * v7 = (int32_t *)(result + 0x6d68700a); // 0x2ec852
    int64_t v8; // bp-16, 0x2ec820
    *v7 = *v7 + (int32_t)(int64_t)&v8;
    return result;
}

// Address range: 0x2ec8aa - 0x2ec8af
int64_t function_2ec8aa(void) {
    // 0x2ec8aa
    int64_t result; // 0x2ec8aa
    return result;
}

// Address range: 0x2ec96a - 0x2ec999
int64_t function_2ec96a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffd41ef370(); // 0x2ec96a
    int64_t v3; // 0x2ec96a
    *(int32_t *)a2 = (int32_t)v3 + (int32_t)a2;
    bool v4; // 0x2ec96a
    int64_t v5 = v2 + (v4 ? 0x6705953b : 0x6705953a) & 0xffffff8b; // 0x2ec979
    int64_t v6; // 0x2ec96a
    *(char *)v6 = *(char *)&v6 + (char)v5;
    unsigned char v7 = *(char *)-0x17a4ebb6; // 0x2ec97d
    *(char *)-0x17a4ebb6 = v7 / 128 | 2 * v7;
    *(char *)v1 = *(char *)&v1 | (char)(a4 / 256);
    uint32_t v8 = (int32_t)a4; // 0x2ec986
    uint32_t v9 = v8 % 32; // 0x2ec986
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)v5; // 0x2ec986
        uint32_t v11 = *v10; // 0x2ec986
        *v10 = v11 >> 32 - v9 | v11 << v9;
    }
    char * v12 = (char *)(v3 + 98); // 0x2ec988
    *v12 = *v12 | -24;
    int32_t * v13 = (int32_t *)(v6 + 2 * a4); // 0x2ec98c
    *v13 = *v13 + v8;
    return function_b30b1e2();
}

// Address range: 0x2ec999 - 0x2ec99a
int64_t function_2ec999(void) {
    // 0x2ec999
    int64_t result; // 0x2ec999
    return result;
}

// Address range: 0x2ec9ab - 0x2ec9bb
int64_t function_2ec9ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ec9ab
    return function_ffffffffe74acba3();
}

// Address range: 0x2ec9f7 - 0x2eca16
int64_t function_2ec9f7(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x54e94bb1); // 0x2ec9fa
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x2ec9f7
    int64_t v3; // 0x2ec9f7
    *(char *)v2 = *(char *)&v2 + (char)(v3 / 256);
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)v3;
    int64_t v4; // 0x2ec9f7
    *(int32_t *)a3 = *(int32_t *)&v4 - 0x1e81255;
    return function_2f3d5bae();
}
