/*
 * Targeted RetDec C for native executable gap queue batch 224.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x183c85-0x183e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x183e85-0x184085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x184285-0x184485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x184485-0x184685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eb61e-0x2eb81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eb81e-0x2eba1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ebe1e-0x2ec01e rank=- name=- kind=- bytes=- uncovered=-
 *   0x141f13-0x142113 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_141ef4();
int64_t function_141f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_141f4b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_141f76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_183c43();
int64_t function_183c85(void);
int64_t function_183c86(int64_t a1, int64_t a2);
int64_t function_183ccd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_183d24(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_183d26(void);
int64_t function_183d2f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_183d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_183dc4(void);
int64_t function_183e4c(void);
int64_t function_183e61(int64_t a1, int64_t a2);
int64_t function_183e68(int64_t a1, int64_t a2, int64_t a3);
int64_t function_183ee2(void);
int64_t function_183eea(int64_t a1, int64_t a2, int64_t a3);
int64_t function_183f4c(void);
int64_t function_183f6d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_183f7b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_183f80(int64_t a1, int64_t a2);
int64_t function_183fa2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_183fc1(int32_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_183fd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_184272();
int64_t function_184285(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1842e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1843fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18440c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_184474(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_184494(void);
int64_t function_1844a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1844d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1844f9(void);
int64_t function_184527(void);
int64_t function_184529(void);
int64_t function_18452a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_184538(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18453d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18454a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_184571(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_184610(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18462a(void);
int64_t function_184632(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_184653(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_216e87a();
int64_t function_2eb61e(int64_t a1, int64_t a2);
int64_t function_2eb67c(void);
int64_t function_2eb6d7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2eb6df(void);
int64_t function_2eb6f3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2eb706(void);
int64_t function_2eb735(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2eb85a(void);
int64_t function_2eb85f(void);
int64_t function_2eb862(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2eb875(void);
int64_t function_2eb878(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eb901(void);
int64_t function_2eb92d(void);
int64_t function_2eb935(void);
int64_t function_2eb984(void);
int64_t function_2eb988(void);
int64_t function_2eb989(void);
int64_t function_2eb9b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eba00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ebe1e(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2ebeb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ebf02(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ebf57(int64_t a1);
int64_t function_2ebf65(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ebf77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ebfee(void);
int64_t function_2ebfff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_59a541();
int64_t function_6336bc73();
int64_t function_ffffffffb69757e9();
int64_t function_ffffffffb930a753();
int64_t function_ffffffffbe32c9a3();
int64_t function_fffffffff55fc14a();
int64_t unknown_1022e293();
int64_t unknown_1618d46a();
int64_t unknown_23b01601();
int64_t unknown_2926fa75();
int64_t unknown_2b07fe88();
int64_t unknown_3a1f8001();
int64_t unknown_3a33aa1a();
int64_t unknown_3ad941d0();
int64_t unknown_3b7ed297();
int64_t unknown_51f8c7d();
int64_t unknown_568f409d();
int64_t unknown_6ca0f12c();
int64_t unknown_7aad6919();
int64_t unknown_7b6c32bd();
int64_t unknown_b53aebc();
int64_t unknown_ffffffff82204d3d();
int64_t unknown_ffffffff8b1bfb47();
int64_t unknown_ffffffff912cebaa();
int64_t unknown_ffffffffa10e7649();
int64_t unknown_ffffffffa230504b();
int64_t unknown_ffffffffa6db83dd();
int64_t unknown_ffffffffabf0b383();
int64_t unknown_ffffffffafb683ec();
int64_t unknown_ffffffffb44c8f07();
int64_t unknown_ffffffffbb197c0c();
int64_t unknown_ffffffffbcfb3a17();
int64_t unknown_ffffffffbfc1ee73();
int64_t unknown_ffffffffd271996a();
int64_t unknown_ffffffffd8c61d69();
int64_t unknown_ffffffffdf785a94();
int64_t unknown_ffffffffe38cd160();
int64_t unknown_ffffffffe85c1936();
int64_t unknown_ffffffffe8ab5f32();
int64_t unknown_ffffffffe8e229f8();
int64_t unknown_ffffffffe8f6dbdd();
int64_t unknown_ffffffffff245909();

// Address range: 0x141f13 - 0x141f1b
int64_t function_141f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x141f13
    int64_t v1; // 0x141f13
    return 2 * v1 & 0xfffffffe;
}

// Address range: 0x141f4b - 0x141f51
int64_t function_141f4b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x141f4b
    int64_t v1; // 0x141f4b
    __asm_out_133((int16_t)a3, (int32_t)v1);
    return function_141ef4();
}

// Address range: 0x141f76 - 0x141f7b
int64_t function_141f76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x141f76
    int64_t result; // 0x141f76
    return result;
}

// Address range: 0x183c85 - 0x183c86
int64_t function_183c85(void) {
    // 0x183c85
    int64_t result; // 0x183c85
    return result;
}

// Address range: 0x183c86 - 0x183c97
int64_t function_183c86(int64_t a1, int64_t a2) {
    // 0x183c86
    int64_t v1; // 0x183c86
    char * v2 = (char *)(v1 - 0x17e94da6); // 0x183c86
    *v2 = 2 * *v2;
    int64_t v3; // 0x183c86
    int32_t v4 = *(int32_t *)&v3; // 0x183c8d
    int64_t v5 = a2 & 0xffffffff; // 0x183c90
    v3 = v5;
    int64_t result = v5; // 0x183c91
    if (v4 != (int32_t)a1) {
        result = function_183c43();
        v3 = result;
    }
    // 0x183c94
    return result;
}

// Address range: 0x183ccd - 0x183cd8
int64_t function_183ccd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x183ccd
    int64_t v1; // 0x183ccd
    *(char *)(a2 + 0x800018) = (char)v1;
    return unknown_6ca0f12c();
}

// Address range: 0x183d24 - 0x183d26
int64_t function_183d24(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x183d24
    int64_t result; // 0x183d24
    return result;
}

// Address range: 0x183d26 - 0x183d2d
int64_t function_183d26(void) {
    // 0x183d26
    return unknown_6ca0f12c();
}

// Address range: 0x183d2f - 0x183d43
int64_t function_183d2f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x183d2f
    int64_t v1; // 0x183d2f
    __asm_out_133((int16_t)a3, (int32_t)v1);
    int64_t v2 = __asm_hlt(); // 0x183d33
    __asm_hlt();
    int64_t v3 = unknown_ffffffff82204d3d(); // 0x183d37
    int64_t v4 = (char)v2 < (char)(a3 / 256) ? 96 : 95; // 0x183d3c
    return (v3 - v4) % 256 | v3 & -256;
}

// Address range: 0x183d60 - 0x183d97
int64_t function_183d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x183d60
    __asm_int(92);
    unknown_ffffffffd271996a();
    __asm_iretd(a1, a2);
    uint32_t result = *(int32_t *)0x1e8713c39b22a58; // 0x183d6a
    bool v1; // 0x183d60
    if (v1) {
        // 0x183de4
        return result;
    }
    // 0x183d75
    *(char *)a2 = (char)result & (char)a2;
    int64_t v2; // 0x183d60
    uint32_t v3 = *(int32_t *)(a4 + a3) ^ (int32_t)v2; // 0x183d79
    *(int32_t *)a1 = -0x6ac1be75;
    unknown_2b07fe88();
    int32_t v4; // 0x183d60
    *(int32_t *)((int64_t)v3 + 0x93974d) = (int32_t)(int64_t)&v4;
    char * v5 = (char *)((a4 & 0xffffffff) + 18); // 0x183d8e
    *v5 = *v5 + (char)(v3 / 256);
    return unknown_3b7ed297();
}

// Address range: 0x183dc4 - 0x183dc7
int64_t function_183dc4(void) {
    // 0x183dc4
    int64_t result; // 0x183dc4
    return result;
}

// Address range: 0x183e4c - 0x183e50
int64_t function_183e4c(void) {
    // 0x183e4c
    int64_t result; // 0x183e4c
    return result;
}

// Address range: 0x183e61 - 0x183e68
int64_t function_183e61(int64_t a1, int64_t a2) {
    // 0x183e61
    return function_ffffffffbe32c9a3();
}

// Address range: 0x183e68 - 0x183e6b
int64_t function_183e68(int64_t a1, int64_t a2, int64_t a3) {
    // 0x183e68
    int64_t result; // 0x183e68
    return result;
}

// Address range: 0x183ee2 - 0x183ee5
int64_t function_183ee2(void) {
    // 0x183ee2
    int64_t result; // 0x183ee2
    return result;
}

// Address range: 0x183eea - 0x183f1f
int64_t function_183eea(int64_t a1, int64_t a2, int64_t a3) {
    // 0x183eea
    int64_t v1; // 0x183eea
    uint64_t v2 = v1;
    *(char *)-0x4c4c620e = *(char *)-0x4c4c620e + (char)(v2 / 256);
    *(char *)v2 = (char)v2 + 65;
    char * v3 = (char *)(unknown_ffffffffbb197c0c((int32_t)(v1 | a1)) - 0x4d12fffd); // 0x183f0b
    *v3 = -1 - *v3;
    return unknown_7aad6919();
}

// Address range: 0x183f4c - 0x183f4d
int64_t function_183f4c(void) {
    // 0x183f4c
    int64_t result; // 0x183f4c
    return result;
}

// Address range: 0x183f6d - 0x183f7a
int64_t function_183f6d(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = unknown_ffffffffbfc1ee73(a1, a2, a3); // 0x183f6d
    int64_t v2; // 0x183f6d
    return v1 % 256 * ((uint64_t)v2 % 256) | v1 & -0x10000;
}

// Address range: 0x183f7b - 0x183f7f
int64_t function_183f7b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x183f7b
    int64_t v1; // 0x183f7b
    return (int64_t)(*(int32_t *)(a2 - 126) | (int32_t)v1);
}

// Address range: 0x183f80 - 0x183fa0
int64_t function_183f80(int64_t a1, int64_t a2) {
    // 0x183f80
    int64_t v1; // 0x183f80
    int64_t v2 = v1 & 0xe8f78200;
    int32_t * v3 = (int32_t *)(a2 - 0x6fb36636); // 0x183f8f
    *v3 = *v3 + (int32_t)v1;
    *(int32_t *)v2 = (int32_t)v2;
    unknown_568f409d();
    int64_t v4; // 0x183f80
    return function_183fc1(*(int32_t *)&v4 & (int32_t)a1, a2, v1, v1);
}

// Address range: 0x183fa2 - 0x183fc1
int64_t function_183fa2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    bool v2; // 0x183fa2
    if (true == !v2) {
        function_183f4c();
    }
    int64_t v3 = unknown_ffffffff912cebaa(); // 0x183fa4
    int32_t * v4 = (int32_t *)(a4 + 0x1e85a7b); // 0x183fa9
    int64_t v5; // 0x183fa2
    *v4 = *v4 | (int32_t)v5;
    *(int32_t *)a1 = (int32_t)v3;
    int64_t result = (v3 + a4 / 256) % 256 | v3 & -256; // 0x183fbc
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)result;
    return result;
}

// Address range: 0x183fc1 - 0x183fc9
int64_t function_183fc1(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x86c763a); // 0x183fc1
    *v1 = *v1 & (int32_t)a3;
    int64_t v2; // 0x183fc1
    return v2 & -256 | 55;
}

// Address range: 0x183fd4 - 0x184085
int64_t function_183fd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int32_t v2 = (int32_t)a4 + (int32_t)a3; // 0x183fdc
    char v3 = llvm_ctpop_i8((char)v2); // 0x183fdc
    *(int32_t *)a4 = v2;
    char v4 = __asm_in(-99); // 0x183fdf
    int64_t v5; // 0x183fd4
    int64_t v6 = v5 & 0xffffff00 | (int64_t)v4; // 0x183fdf
    char * v7 = (char *)(v6 - 87); // 0x183fe1
    char v8 = *v7; // 0x183fe1
    unsigned char v9 = (char)a4; // 0x183fe1
    unsigned char v10 = v9 % 32; // 0x183fe1
    char v11 = v3; // 0x183fe1
    char v12 = 0; // 0x183fe1
    if (v10 != 0) {
        char v13 = v8 >> v10; // 0x183fe1
        v11 = llvm_ctpop_i8(v13);
        *v7 = v13;
        v12 = (v8 & 1 << v10 - 1) != 0;
    }
    if (v11 % 2 != 0) {
        int32_t * v14 = (int32_t *)(a3 + 0x32e957f); // 0x183fed
        *v14 = *v14 + (int32_t)v5;
        unknown_3a1f8001();
        return (a5 + a4) % 256 | a5 & -256;
    }
    // 0x18405b
    *(char *)a3 = v9;
    if (a4 == 1) {
        int64_t result = unknown_1618d46a(); // 0x184064
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)result;
        return result;
    }
    // 0x18406d
    *(char *)v1 = *(char *)&v1 + (char)a3;
    int64_t result2 = v6 & 0xd26fe800 | (int64_t)(v4 + 113 + v12) | 0x2d9017b0; // 0x184076
    if (llvm_ctpop_i8(*(char *)(int64_t)((int32_t)v6 >> 31) & 70) % 2 != 0) {
        // 0x18408d
        return result2;
    }
    // 0x184080
    return result2 & 0xffffff00 | (int64_t)((char)result2 - *(char *)(v1 - 24));
}

// Address range: 0x184285 - 0x1842a5
int64_t function_184285(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x184285
    bool v1; // 0x184285
    int64_t v2 = v1 ? -4 : 4; // 0x184285
    int64_t v3 = v2 + a2; // 0x184285
    int64_t v4 = unknown_1022e293(v2 + a1, v3); // 0x18428d
    int64_t v5; // 0x184285
    int32_t * v6 = (int32_t *)(v5 + a6); // 0x184294
    *v6 = *v6 + (int32_t)v5;
    int32_t * v7 = (int32_t *)(4 * v5 - 88 + v3); // 0x18429e
    uint32_t v8 = *v7; // 0x18429e
    int32_t v9 = 2 * v8; // 0x18429e
    *v7 = v9;
    int64_t result = v4 & -0xff01 | (int64_t)&g1; // 0x1842a2
    if (v9 < 0 == (v8 / 0x40000000 % 2 != (int32_t)(v8 < 0)) == (v9 != 0)) {
        result = function_184272();
    }
    // 0x1842a4
    return result;
}

// Address range: 0x1842e0 - 0x18436f
int64_t function_1842e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1842e0
    int64_t v1; // 0x1842e0
    int64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a3;
    *(char *)0x1e89c3ed5f2e6f3 = (char)v1;
    bool v5; // 0x1842e0
    if (v5) {
        // 0x184368
        return v1 ^ 0xff00;
    }
    // 0x1842eb
    *(char *)v3 = (char)(v1 | v3);
    uint64_t v6 = v1 + 230; // 0x1842ed
    uint64_t v7 = v1 & 0xffffff00; // 0x1842ed
    int64_t v8 = v6 % 256 | v7; // 0x1842ed
    char * v9 = (char *)(v2 - 0x1752cd4e + 4 * v2); // 0x1842f0
    char v10 = v7 / 256; // 0x1842f0
    *v9 = *v9 + v10;
    uint32_t v11 = (int32_t)v3; // 0x1842f7
    uint32_t v12 = v11 + (int32_t)a2; // 0x1842f7
    if (v12 < v11) {
        int64_t v13 = a1; // bp-8, 0x184300
        int64_t v14 = v5 ? 0x1fffffffffffffff : 1; // 0x184301
        int32_t * v15 = (int32_t *)v8; // 0x184304
        *v15 = *v15 + (int32_t)v4;
        __asm_in_134(26);
        int32_t v16 = *(int32_t *)(v8 - 0x4e9bc5dd); // 0x18430a
        unknown_3a33aa1a();
        int32_t * v17 = (int32_t *)((int64_t)(v16 & (int32_t)v4) + 0xed079e4); // 0x18431a
        *v17 = *v17 | 0x4401e8d0;
        char * v18 = (char *)(8 * (v14 + a1) + 0x10800b3 + (int64_t)&v13); // 0x184328
        *v18 = *v18 + (char)v6;
        return unknown_ffffffffe85c1936();
    }
    uint32_t v19 = *(int32_t *)0x21a2b67; // 0x184337
    uint32_t v20 = v19 + (int32_t)a4; // 0x184337
    *(int32_t *)0x21a2b67 = v20;
    unsigned char v21 = *(char *)(a4 % 256 + (int64_t)v12); // 0x18433d
    char * v22 = (char *)((a4 & 0xffffff00 | (int64_t)v21) + v8); // 0x18433e
    *v22 = (char)(v20 < v19) + v10 + *v22;
    int64_t v23 = unknown_ffffffff8b1bfb47(); // 0x184341
    int32_t * v24 = (int32_t *)(a1 - 0x17e818aa); // 0x184348
    *v24 = *v24 + (int32_t)(v23 | v2);
    int64_t v25 = v4; // 0x184350
    *(int64_t *)v2 = 0x3d832000;
    *(int32_t *)(v25 & 0xffffffff) = *(int32_t *)&v4 + (int32_t)v25;
    float80_t v26; // 0x1842e0
    *(float64_t *)(a2 - 31) = (float64_t)v26;
    return 0xc2a70901;
}

// Address range: 0x1843fa - 0x18440b
int64_t function_1843fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x4ef09d03); // 0x1843fc
    int64_t result; // 0x1843fa
    *v1 = *v1 + (int32_t)result;
    char * v2 = (char *)((result + 1 & 0xffffffff) - 24); // 0x184404
    *v2 = (char)a3;
    int32_t * v3 = (int32_t *)((a3 & -256 | (int64_t)*v2) + 14); // 0x184407
    *v3 = *v3 + (int32_t)a2;
    return result;
}

// Address range: 0x18440c - 0x184471
int64_t function_18440c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a2;
    int64_t v3; // 0x18440c
    unsigned char v4 = (char)v3; // 0x18440c
    *(char *)a2 = v2 - v4;
    unknown_ffffffffbcfb3a17();
    if (v3 < 0x100000000000000 * a2 >> 56) {
        int32_t v5 = *(int32_t *)(a1 - 0x17112ec6); // 0x184422
        int32_t * v6 = (int32_t *)((a3 & 0xffffffff) - 0x75c4edf6); // 0x184428
        *v6 = (int32_t)((char)a3 < 116) + (int32_t)a4 - v5 + *v6;
        *(int32_t *)a1 = 0x24a4b743 * (int32_t)v3;
        bool v7; // 0x18440c
        function_59a541((v7 ? -4 : 4) + a1);
        __asm_outsb(488 * (int16_t)v3, *(char *)&v1);
        return function_ffffffffb69757e9();
    }
    char * v8 = (char *)((int64_t)((int32_t)a3 >> 31) + 1); // 0x184456
    *v8 = *v8 - (v2 < v4 ? 65 : 64);
    int64_t v9 = a3 & 0xe8a11baf; // 0x18445a
    char * v10 = (char *)(v9 + 0x2514000); // 0x184463
    *v10 = *v10 + (char)v9;
    int32_t * v11 = (int32_t *)(v3 + 0x6e010200); // 0x18446b
    *v11 = *v11 + (int32_t)v3;
    return (a4 / 256 + v9) % 256 | a3 & 0xe8a11b00;
}

// Address range: 0x184474 - 0x18448a
int64_t function_184474(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_51f8c7d(); // 0x184474
    char * v2 = (char *)(v1 + 107); // 0x18447a
    *v2 = *v2 + (char)((int32_t)v1 >> 31);
    int64_t result = unknown_ffffffffabf0b383(); // 0x18447d
    char * v3 = (char *)(result + 0x7204ad0a); // 0x184482
    *v3 = *v3 + (char)a4;
    return result;
}

// Address range: 0x184494 - 0x184495
int64_t function_184494(void) {
    // 0x184494
    int64_t result; // 0x184494
    return result;
}

// Address range: 0x1844a4 - 0x1844b4
int64_t function_1844a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1844a4
    int64_t v1; // 0x1844a4
    bool v2; // 0x1844a4
    *(char *)a5 = (char)v1 + (char)a4 + (char)v2;
    return function_184494();
}

// Address range: 0x1844d0 - 0x1844f1
int64_t function_1844d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1844d0
    int64_t v1; // 0x1844d0
    char v2 = v1;
    bool v3; // 0x1844d0
    char v4 = v3; // 0x1844d5
    char v5 = 2 * v2 | v4; // 0x1844d5
    *(char *)v1 = v5;
    int64_t result = unknown_ffffffffa6db83dd(); // 0x1844d7
    if (v5 < 0 == (v5 + v4 ^ v2) < 0) {
        // 0x184549
        return result;
    }
    int32_t * v6 = (int32_t *)result; // 0x1844de
    *v6 = *v6 | (int32_t)a1;
    char * v7 = (char *)(result - 0x135397f7); // 0x1844e0
    *v7 = *v7 + (char)a4;
    return unknown_ffffffffafb683ec();
}

// Address range: 0x1844f9 - 0x1844fb
int64_t function_1844f9(void) {
    // 0x1844f9
    int64_t v1; // 0x1844f9
    return function_184571(v1, v1, v1, v1);
}

// Address range: 0x184527 - 0x184528
int64_t function_184527(void) {
    // 0x184527
    int64_t result; // 0x184527
    return result;
}

// Address range: 0x184529 - 0x18452a
int64_t function_184529(void) {
    // 0x184529
    int64_t result; // 0x184529
    return result;
}

// Address range: 0x18452a - 0x184538
int64_t function_18452a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18452a
    return function_184529();
}

// Address range: 0x184538 - 0x18453d
int64_t function_184538(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x184538
    int64_t result; // 0x184538
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x18453d - 0x184549
int64_t function_18453d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18453d
    int64_t v1; // 0x18453d
    bool v2; // 0x18453d
    if (true == !v2) {
        v1 = function_184527();
    }
    uint64_t v3 = v1;
    int32_t * v4 = (int32_t *)(v3 + 0x7912dbf5); // 0x18453f
    *v4 = *v4 + (int32_t)a4;
    return (v3 / 256 + v3) % 256 | v3 & -256;
}

// Address range: 0x18454a - 0x18455a
int64_t function_18454a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x18454a
    int64_t v1; // 0x18454a
    int64_t v2 = v1;
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a3;
    return ((v2 + a4 / 256) % 256 | v2 & 0xffffff00) ^ 0x4e7d2ae5;
}

// Address range: 0x184571 - 0x18460e
int64_t function_184571(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x184571
    int64_t v1; // 0x184571
    float80_t v2; // 0x184571
    *(float32_t *)(v1 + 0x6419c1) = (float32_t)v2;
    uint64_t v3 = a1 + 0xc3a51b4c; // 0x184582
    char * v4 = (char *)((v3 & 0xffffffff) - 120); // 0x184587
    *v4 = *v4 + (char)(v3 / 256);
    int64_t result = (a4 / 256 + v3 + (int64_t)((char)v1 < (char)a3)) % 256 | v3 & 0xffffff00; // 0x18458d
    int32_t * v5 = (int32_t *)result; // 0x184595
    uint32_t v6 = (int32_t)result; // 0x184595
    *v5 = *v5 - v6;
    if (v6 >= 0xb59f9702) {
        // 0x18459f
        return result;
    }
    int32_t v7 = v1; // 0x1845ea
    if ((v7 & 0x4000000) == 0) {
        int64_t result2 = result ^ 0x3a01e8af; // 0x1845e5
        int32_t * v8 = (int32_t *)result2; // 0x1845c6
        *v8 = *v8 + (int32_t)result2;
        return result2;
    }
    int64_t v9 = v1 & 0xb600f0f7; // 0x184571
    int32_t v10 = (int32_t)v3 >> 31; // 0x1845ef
    int64_t v11 = unknown_ffffffffe8e229f8(v9, (int32_t)(a3 + a2), (int64_t)(v10 & -0xff01 | 0xcc00)); // 0x1845f2
    *(int32_t *)0x6d01a5fe = *(int32_t *)0x6d01a5fe + (int32_t)v9;
    *(char *)(8 * v1 - 0x17c9d5f0) = (char)v10;
    int32_t * v12 = (int32_t *)(v11 - 74); // 0x184604
    *v12 = *v12 + (v7 >> 27);
    return v11 - 0x721d4dc6;
}

// Address range: 0x184610 - 0x184611
int64_t function_184610(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x184610
    return a4 & 0xffffffff;
}

// Address range: 0x18462a - 0x18462b
int64_t function_18462a(void) {
    // 0x18462a
    int64_t result; // 0x18462a
    return result;
}

// Address range: 0x184632 - 0x184651
int64_t function_184632(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x184632
    int64_t v1; // 0x184632
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 - 115); // 0x184632
    char v4 = __asm_in(19); // 0x184635
    *(char *)a2 = (char)(v1 & a4);
    int32_t * v5 = (int32_t *)(v1 + 8 * v1); // 0x18463b
    int32_t v6 = *v5; // 0x18463b
    *v5 = v6 + (int32_t)(256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & 0xffff00ff);
    int32_t v7 = *(int32_t *)((v1 & -256 | (int64_t)v4) - 0x2f1bccf) + (int32_t)a3; // 0x18463f
    int64_t v8 = unknown_ffffffffa230504b(); // 0x184645
    __asm_out_133((int16_t)v7, (int32_t)v8);
    int64_t result = v8; // 0x18464d
    if (v7 == 0) {
        result = function_18462a();
    }
    // 0x18464f
    return result;
}

// Address range: 0x184653 - 0x18465a
int64_t function_184653(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x184653
    return function_6336bc73();
}

// Address range: 0x2eb61e - 0x2eb63b
int64_t function_2eb61e(int64_t a1, int64_t a2) {
    // 0x2eb61e
    int64_t v1; // 0x2eb61e
    int32_t v2 = v1 | a1; // 0x2eb62c
    int64_t result = unknown_ffffffffe8ab5f32(v2, *(int32_t *)(v1 - 0x1dff5f0a) ^ (int32_t)a2); // 0x2eb62c
    *(int32_t *)0x9c66938 = *(int32_t *)0x9c66938 + v2;
    return result;
}

// Address range: 0x2eb67c - 0x2eb67f
int64_t function_2eb67c(void) {
    // 0x2eb67c
    int64_t result; // 0x2eb67c
    return result;
}

// Address range: 0x2eb6d7 - 0x2eb6dc
int64_t function_2eb6d7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2eb6d7
    int64_t result; // 0x2eb6d7
    char * v1 = (char *)(result + 1 + 8 * result); // 0x2eb6d7
    *v1 = *v1 - (char)(a4 / 256);
    return result;
}

// Address range: 0x2eb6df - 0x2eb6e3
int64_t function_2eb6df(void) {
    // 0x2eb6df
    int64_t v1; // 0x2eb6df
    int64_t result = v1;
    *(char *)result = (char)result + 60;
    return result;
}

// Address range: 0x2eb6f3 - 0x2eb6fc
int64_t function_2eb6f3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2eb6f3
    int64_t v1; // 0x2eb6f3
    int64_t v2 = v1;
    char * v3 = (char *)(v2 - 33); // 0x2eb6f3
    char v4 = v2; // 0x2eb6f3
    bool v5; // 0x2eb6f3
    *v3 = (char)v5 - v4 + *v3;
    return v2 & -256 | (int64_t)(*(char *)(v2 - 24) | v4);
}

// Address range: 0x2eb706 - 0x2eb707
int64_t function_2eb706(void) {
    // 0x2eb706
    int64_t result; // 0x2eb706
    return result;
}

// Address range: 0x2eb735 - 0x2eb81c
int64_t function_2eb735(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2eb735
    int64_t v1; // 0x2eb735
    if ((char)(a4 / 256) != (char)a3) {
        // 0x2eb780
        __asm_out_133((int16_t)a3, (int32_t)v1);
        return unknown_ffffffffdf785a94();
    }
    uint64_t v2 = unknown_ffffffffa10e7649(); // 0x2eb743
    *(int32_t *)a1 = (int32_t)a2;
    bool v3; // 0x2eb735
    int64_t v4 = v3 ? -4 : 4; // 0x2eb748
    int64_t v5 = v4 + a1; // 0x2eb748
    int64_t v6 = v4 + a2; // 0x2eb748
    int64_t v7 = a4 - 1; // 0x2eb749
    int32_t * v8 = (int32_t *)v2; // 0x2eb753
    int32_t v9 = *v8; // 0x2eb753
    int32_t v10 = v5; // 0x2eb753
    int32_t v11 = v9 + v10; // 0x2eb753
    *v8 = v11;
    if (v11 < 0 == ((v11 ^ v9) & (v11 ^ v10)) < 0 != v11 != 0) {
        int64_t v12 = 256 * (int64_t)*(char *)(v1 + 0x3b5e25f2) | a3 & -0xff01; // 0x2eb73d
        int32_t * v13 = (int32_t *)(v12 + 81); // 0x2eb757
        *v13 = 2 * *v13;
        return function_216e87a(v5, v6, v12 & -256 | (a3 - v2 / 256) % 256, v7);
    }
    // 0x2eb7b5
    *(int64_t *)v2 = a6;
    int64_t v14 = __asm_iretd(v5, v6); // 0x2eb7b8
    int64_t v15 = v14 & 0xffffffff; // 0x2eb7be
    char * v16 = (char *)(v15 - 0x6251bbf5); // 0x2eb7c4
    *v16 = *v16 + (char)v1;
    unknown_3ad941d0();
    __asm_iretd(v5, (int64_t)*(int32_t *)(a4 - 0x2c56d1ab + v1));
    int64_t v17 = unknown_ffffffffe8f6dbdd(); // 0x2eb7d7
    *(int32_t *)-0x17a37b1d = *(int32_t *)-0x17a37b1d + v10;
    int32_t * v18 = (int32_t *)(v17 + 56); // 0x2eb7e2
    uint32_t v19 = *v18; // 0x2eb7e2
    uint32_t v20 = (int32_t)v7; // 0x2eb7e2
    uint32_t v21 = v19 + v20; // 0x2eb7e2
    *v18 = v21;
    char * v22 = (char *)v7; // 0x2eb7e5
    *v22 = *v22 + (char)(v1 / 256) + (char)(v21 < v19);
    uint32_t v23 = v20 % 32; // 0x2eb7ee
    int64_t v24 = v23 == 0 ? v15 : (int64_t)((int32_t)v14 >> v23);
    int32_t result = __asm_in_135((int16_t)v24); // 0x2eb7fa
    int32_t * v25 = (int32_t *)(v24 + 38); // 0x2eb7fc
    uint32_t v26 = *v25; // 0x2eb7fc
    *v25 = v26 / 0x2000 | 0x80000 * v26;
    return result;
}

// Address range: 0x2eb85a - 0x2eb85f
int64_t function_2eb85a(void) {
    // 0x2eb85a
    return unknown_ffffffffe38cd160();
}

// Address range: 0x2eb85f - 0x2eb861
int64_t function_2eb85f(void) {
    // 0x2eb85f
    int64_t result; // 0x2eb85f
    return result;
}

// Address range: 0x2eb862 - 0x2eb874
int64_t function_2eb862(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffd8c61d69(); // 0x2eb863
    int64_t v2; // 0x2eb862
    *(int32_t *)a1 = (int32_t)v2;
    return v1 & 0xfe177b9e | 0x1e88461;
}

// Address range: 0x2eb875 - 0x2eb878
int64_t function_2eb875(void) {
    // 0x2eb875
    int64_t result; // 0x2eb875
    return result;
}

// Address range: 0x2eb878 - 0x2eb8f4
int64_t function_2eb878(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2eb878
    int64_t v1; // 0x2eb878
    uint64_t v2 = v1 + 24; // 0x2eb878
    int32_t * v3 = (int32_t *)(a4 - 0x2f90db1d); // 0x2eb87a
    uint32_t v4 = *v3; // 0x2eb87a
    uint32_t v5 = v4 + (int32_t)a4; // 0x2eb87a
    *v3 = v5;
    bool v6 = v5 < v4; // 0x2eb881
    bool v7 = v5 == 0; // 0x2eb881
    int64_t result = v2 % 256 | v1 & -256; // 0x2eb881
    int64_t v8 = a1; // 0x2eb881
    if (v5 >= 0) {
        unsigned char v9 = (char)v2; // 0x2eb8e3
        int64_t v10; // 0x2eb878
        unsigned char v11 = *(char *)&v10 + v9; // 0x2eb8e3
        v6 = v11 < v9;
        v7 = v11 == 0;
        result = a2 & 0xffffffff;
        v8 = 0x26807607;
    }
    // 0x2eb8eb
    if (v6 || v7) {
        // 0x2eb89f
        return result;
    }
    // 0x2eb8ee
    *(int32_t *)v8 = (int32_t)result;
    return result & 0xfe17dfc2 | 0x1e8203d;
}

// Address range: 0x2eb901 - 0x2eb908
int64_t function_2eb901(void) {
    // 0x2eb901
    return unknown_ffffffffb44c8f07();
}

// Address range: 0x2eb92d - 0x2eb92e
int64_t function_2eb92d(void) {
    // 0x2eb92d
    int64_t result; // 0x2eb92d
    return result;
}

// Address range: 0x2eb935 - 0x2eb939
int64_t function_2eb935(void) {
    // 0x2eb935
    bool v1; // 0x2eb935
    if (!v1) {
        function_2eb92d();
    }
    // 0x2eb937
    int64_t v2; // 0x2eb935
    return function_2eb9b7(v2, v2, v2, v2);
}

// Address range: 0x2eb984 - 0x2eb986
int64_t function_2eb984(void) {
    // 0x2eb984
    return __asm_hlt();
}

// Address range: 0x2eb988 - 0x2eb989
int64_t function_2eb988(void) {
    // 0x2eb988
    int64_t result; // 0x2eb988
    return result;
}

// Address range: 0x2eb989 - 0x2eb98a
int64_t function_2eb989(void) {
    // 0x2eb989
    return __asm_hlt();
}

// Address range: 0x2eb9b7 - 0x2eb9ff
int64_t function_2eb9b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2eb9b7
    int64_t v1; // 0x2eb9b7
    int64_t result = v1;
    bool v2; // 0x2eb9b7
    if (v2) {
        // 0x2eb9f2
        *(int32_t *)result = 2 * (int32_t)result;
        return result;
    }
    // 0x2eb9ba
    __asm_out(-13, (char)result);
    int32_t * v3 = (int32_t *)(v1 - 0x11ff4c46); // 0x2eb9c5
    *v3 = *v3 + (int32_t)v1;
    return result;
}

// Address range: 0x2eba00 - 0x2eba06
int64_t function_2eba00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2eba00
    int64_t result; // 0x2eba00
    return result;
}

// Address range: 0x2ebe1e - 0x2ebeb5
int64_t function_2ebe1e(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2ebe1e
    int64_t v1; // 0x2ebe1e
    bool v2; // 0x2ebe1e
    if (v2 || false) {
        unsigned char v3 = (char)v1; // 0x2ebe9c
        unsigned char v4 = v3 + (char)a3; // 0x2ebe9c
        int32_t v5 = *(int32_t *)((v1 & 0xffffff00 | (int64_t)v4) - 0x2c10cfc6); // 0x2ebea5
        int32_t v6 = (int32_t)(v4 < v3) + (int32_t)a3 + v5; // 0x2ebea5
        int64_t v7; // bp+5985, 0x2ebe1e
        char * v8 = (char *)(v1 - 24 + (int64_t)&v7); // 0x2ebeab
        *v8 = *v8 + (char)v6;
        int64_t v9 = (a4 & 0xffffff00 | a2 % 256) + a1; // 0x2ebeaf
        __asm_out(-111, (char)v9);
        return v9 + (int64_t)(v6 & 0xff00) & 0xff00 | v9 & 0xffff00ff;
    }
    char * v10 = (char *)(v1 - 10); // 0x2ebe21
    *v10 = (char)v2 - (char)(a4 / 256) + *v10;
    int64_t result = v1 & -256 | (int64_t)*(char *)-0x4c000b328ab4412b; // 0x2ebe2f
    char * v11 = (char *)result; // 0x2ebe38
    *v11 = *v11 + (char)v1;
    return result;
}

// Address range: 0x2ebeb7 - 0x2ebf00
int64_t function_2ebeb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result = unknown_7b6c32bd(); // 0x2ebeb7
    bool v2; // 0x2ebeb7
    if (v2) {
        int32_t * v3 = (int32_t *)(result + 0x64e07f0a); // 0x2ebef1
        *v3 = *v3 + (int32_t)a4;
        __asm_outsd((int16_t)a3, *(int32_t *)&v1);
        int64_t v4 = v2 ? -1 : 1; // 0x2ebef8
        return unknown_23b01601(v4 + a1, v1 + v4);
    }
    // 0x2ebebe
    return result;
}

// Address range: 0x2ebf02 - 0x2ebf12
int64_t function_2ebf02(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x2ebf0b
    __asm_in_136(v1);
    bool v2; // 0x2ebf02
    __asm_outsb(v1, *(char *)((v2 ? -1 : 1) + a2));
    return function_ffffffffb930a753();
}

// Address range: 0x2ebf57 - 0x2ebf62
int64_t function_2ebf57(int64_t a1) {
    // 0x2ebf57
    unknown_b53aebc(a1);
    return function_fffffffff55fc14a();
}

// Address range: 0x2ebf65 - 0x2ebf77
int64_t function_2ebf65(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_2926fa75(); // 0x2ebf6f
    return v1 + 256 * a3 & 0xff00 | v1 & -0xff01;
}

// Address range: 0x2ebf77 - 0x2ebf85
int64_t function_2ebf77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2ebf77
    int64_t v1; // 0x2ebf77
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    __asm_in_136((int16_t)a3);
    return 2 * a4 & 0xfffffffe;
}

// Address range: 0x2ebfee - 0x2ebfef
int64_t function_2ebfee(void) {
    // 0x2ebfee
    int64_t result; // 0x2ebfee
    return result;
}

// Address range: 0x2ebfff - 0x2ec011
int64_t function_2ebfff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2ebfff
    int64_t v1; // 0x2ebfff
    int64_t v2 = v1;
    if (llvm_ctpop_i8((char)(v2 ^ a4 / 256)) % 2 != 0) {
        function_2ebfee();
    }
    int64_t v3 = unknown_ffffffffff245909(); // 0x2ec003
    char v4 = __asm_in(-29); // 0x2ec009
    *(char *)v2 = (char)v2 - 38;
    return v3 & -256 | (int64_t)v4;
}
