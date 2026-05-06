/*
 * Targeted RetDec C for native executable gap queue batch 226.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x185085-0x185285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x185285-0x185485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x185485-0x185685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x185685-0x185885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x185885-0x185a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ecc1e-0x2ece1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ed01e-0x2ed21e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ed21e-0x2ed41e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_10421593();
int64_t function_185085(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18510a(void);
int64_t function_18517b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18525e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1852a3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1852c5(int64_t a1, int64_t a2);
int64_t function_1852db(void);
int64_t function_1852ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_185325(void);
int64_t function_185326(int64_t a1, int64_t a2);
int64_t function_185358(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1853e1(void);
int64_t function_18543e(void);
int64_t function_185445(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_185458(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_185538(void);
int64_t function_185559(void);
int64_t function_185560(int64_t a1, int64_t a2, int64_t a3);
int64_t function_185565(void);
int64_t function_185573(int64_t a1);
int64_t function_185576(int64_t a1, int64_t a2);
int64_t function_1855b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1855e0(int64_t a1);
int64_t function_185646(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1856bf(void);
int64_t function_1856ea(int64_t a1);
int64_t function_185706(int64_t a1);
int64_t function_185733(int64_t a1);
int64_t function_185769(void);
int64_t function_185799(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1857e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_185852(int64_t a1);
int64_t function_18589b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1858c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18590b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d80d152();
int64_t function_1e05a8();
int64_t function_1f54d42a();
int64_t function_200f596();
int64_t function_2ecc1e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ecc79(int64_t a1);
int64_t function_2eccb4(void);
int64_t function_2eccbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ecccc(int64_t a1);
int64_t function_2eccef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ecd07(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2ecd4f(int64_t a1);
int64_t function_2ecfc7();
int64_t function_2ed01e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ed062(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ed07a(void);
int64_t function_2ed08e(void);
int64_t function_2ed0af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ed0c3(int64_t a1);
int64_t function_2ed0d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ed10b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ed125(void);
int64_t function_2ed137(void);
int64_t function_2ed13d(void);
int64_t function_2ed14d(void);
int64_t function_2ed159(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ed1fb(int64_t a1);
int64_t function_2ed235(void);
int64_t function_2ed23d(void);
int64_t function_2ed263(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ed27a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ed33d(void);
int64_t function_2ed34d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ed38f(int64_t a1);
int64_t function_2ed414(void);
int64_t function_68699180();
int64_t function_7ea46f42();
int64_t function_ffffffffa4d3c793();
int64_t function_ffffffffb1f487b2();
int64_t function_ffffffffcc08f780();
int64_t function_ffffffffe819538f();
int64_t function_ffffffffe8cfa3b5();
int64_t unknown_1a481f80();
int64_t unknown_1eaa0380();
int64_t unknown_2995c078();
int64_t unknown_2a5f46a5();
int64_t unknown_2eeb0b73();
int64_t unknown_3a1e7181();
int64_t unknown_3a39962d();
int64_t unknown_3abf806b();
int64_t unknown_3d17d605();
int64_t unknown_3d976fe6();
int64_t unknown_3db742ef();
int64_t unknown_447c21be();
int64_t unknown_49066c58();
int64_t unknown_4c1ceb1d();
int64_t unknown_7287789();
int64_t unknown_e0b36b6();
int64_t unknown_ed8cb3();
int64_t unknown_ffffffff86559114();
int64_t unknown_ffffffff943115d1();
int64_t unknown_ffffffffa4f25635();
int64_t unknown_ffffffffb830ca0e();
int64_t unknown_ffffffffc02067ef();
int64_t unknown_ffffffffc51ffae8();
int64_t unknown_ffffffffcbdc474d();
int64_t unknown_ffffffffcd322c90();
int64_t unknown_ffffffffdb4e996b();
int64_t unknown_ffffffffdcbfb816();
int64_t unknown_ffffffffe8198d99();
int64_t unknown_ffffffffe8199038();
int64_t unknown_fffffffff9e90df9();

// Address range: 0x185085 - 0x1850e0
int64_t function_185085(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x185085
    int64_t v1; // 0x185085
    *(int32_t *)a1 = (int32_t)v1;
    unsigned char v2 = *(char *)(a4 - 24); // 0x185086
    int32_t * v3 = (int32_t *)(2 * (256 * (int64_t)v2 | a3 & 0x7fffffffffff00ff) + 0x686b9ba3); // 0x185089
    *v3 = *v3 + (int32_t)v1;
    bool v4; // 0x185085
    uint64_t v5 = unknown_ffffffffe8198d99((v4 ? -4 : 4) + a1); // 0x185093
    int64_t v6; // 0x185085
    *(int32_t *)a2 = *(int32_t *)&v6 + (int32_t)a4;
    *(char *)(v5 + 0x472c670a) = (char)(v5 / 256);
    function_1e05a8();
    unsigned char v7 = *(char *)(unknown_ed8cb3() + 0x48068528); // 0x1850b2
    uint64_t v8 = unknown_447c21be(); // 0x1850b8
    int64_t v9 = (v8 - (v7 > -1 - (char)a3 ? 146 : 145)) % 256 | v8 & -256; // 0x1850bd
    char * v10 = (char *)(v9 + 0x1e85c00); // 0x1850bf
    *v10 = *v10 + (char)(v8 / 256);
    unknown_ffffffff943115d1();
    int64_t v11 = v9 & 0xffff00ff | 2 * v8 & 0xfe00; // 0x1850cc
    int64_t v12 = v11 + 0x1a2fc092; // 0x1850dc
    char * v13 = (char *)(v12 & 0xffffffff); // 0x1850de
    *v13 = *v13 + (char)v12 + (char)((int32_t)v11 > 0xe5d03f6d);
    int64_t v14; // bp-399371648, 0x185085
    return (int64_t)&v14;
}

// Address range: 0x18510a - 0x18510b
int64_t function_18510a(void) {
    // 0x18510a
    int64_t result; // 0x18510a
    return result;
}

// Address range: 0x18517b - 0x1851a1
int64_t function_18517b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    unknown_3a1e7181();
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2 = unknown_ffffffffcd322c90(); // 0x18518a
    int64_t v3; // 0x18517b
    char * v4 = (char *)(v3 - 111); // 0x18518f
    unsigned char v5 = *v4; // 0x18518f
    bool v6; // 0x18517b
    *v4 = 4 * v5 | 2 * (char)v6 | v5 / 128;
    *(int32_t *)v1 = *(int32_t *)&v1 - 1;
    return v2 & -256 | 124;
}

// Address range: 0x18525e - 0x185274
int64_t function_18525e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x18525e
    *(char *)0x3d18526a = *(char *)0x3d18526a + (char)(a4 / 256);
    int64_t v1; // 0x18525e
    int64_t v2; // 0x18525e
    *(int32_t *)a3 = (int32_t)(int64_t)&v1 + (int32_t)v2;
    return v2 | 7;
}

// Address range: 0x1852a3 - 0x1852ab
int64_t function_1852a3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x79e08807); // 0x1852a3
    int64_t v2; // 0x1852a3
    *v1 = *v1 + (int32_t)v2;
    return function_1852db();
}

// Address range: 0x1852c5 - 0x1852db
int64_t function_1852c5(int64_t a1, int64_t a2) {
    // 0x1852c5
    int64_t v1; // 0x1852c5
    int64_t v2 = v1;
    int64_t v3 = v1 | v1;
    *(int32_t *)v2 = (int32_t)v3 + (int32_t)v2;
    uint32_t result = -0x56e6400 * *(int32_t *)(a2 + 0x68fa4bd9); // 0x1852c9
    char * v4 = (char *)((v3 & 0xffffffff) + 53); // 0x1852d3
    *v4 = *v4 + (char)(result / 256);
    return result;
}

// Address range: 0x1852db - 0x1852df
int64_t function_1852db(void) {
    // 0x1852db
    int64_t v1; // 0x1852db
    return function_185326(v1, v1);
}

// Address range: 0x1852ef - 0x1852fc
int64_t function_1852ef(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(a2 + 0x600b3a3b); // 0x1852f1
    int64_t result; // 0x1852ef
    *(char *)a3 = (char)(-1 - (int32_t)result < (int32_t)result) + (char)result + (char)(v1 / 256);
    return result;
}

// Address range: 0x185325 - 0x185326
int64_t function_185325(void) {
    // 0x185325
    int64_t result; // 0x185325
    return result;
}

// Address range: 0x185326 - 0x18533e
int64_t function_185326(int64_t a1, int64_t a2) {
    // 0x185326
    __asm_rcl(*(int32_t *)(unknown_3a39962d() + 0x4e84dba6));
    unknown_ffffffffe8199038();
    int64_t v1; // 0x185326
    return v1 & 0xffffff00 | (uint64_t)v1 % 256;
}

// Address range: 0x185358 - 0x185383
int64_t function_185358(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 65); // 0x185358
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x185358
    unsigned char v3 = (char)v2 & 41; // 0x18535b
    int64_t v4 = v2 & -256 | (int64_t)v3; // 0x185361
    if (v3 == 0) {
        v4 = function_185325();
    }
    int32_t * v5 = (int32_t *)(v2 - 43); // 0x185365
    *v5 = *v5 + (int32_t)v4;
    *(char *)a1 = (char)a4;
    __asm_int(-94);
    unknown_2eeb0b73();
    unknown_1eaa0380();
    return a2 & 0xffffffff;
}

// Address range: 0x1853e1 - 0x1853e2
int64_t function_1853e1(void) {
    // 0x1853e1
    int64_t result; // 0x1853e1
    return result;
}

// Address range: 0x18543e - 0x18543f
int64_t function_18543e(void) {
    // 0x18543e
    int64_t result; // 0x18543e
    return result;
}

// Address range: 0x185445 - 0x185458
int64_t function_185445(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x185445
    bool v1; // 0x185445
    if (v1) {
        function_1853e1();
    }
    int64_t v2 = unknown_ffffffffcbdc474d(); // 0x185447
    char * v3 = (char *)(a4 - 0x7fb45063); // 0x18544c
    *v3 = *v3 + (char)v2;
    return function_200f596();
}

// Address range: 0x185458 - 0x1854b6
int64_t function_185458(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint32_t v2 = 0x86081bb * (int32_t)a2; // 0x185458
    int64_t v3 = v2; // 0x185458
    __asm_int3();
    __asm_int3();
    unknown_ffffffffdb4e996b();
    int64_t v4; // 0x185458
    __asm_pmaxsw(v4, v4);
    __asm_hlt();
    __asm_wait(a1, a2);
    char * v5 = (char *)(v3 + 62); // 0x18546f
    char v6 = *v5 | (char)(v2 / 256); // 0x18546f
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x18546f
    *v5 = v6;
    int64_t v8 = unknown_2995c078(); // 0x185477
    if (v7 % 2 != 0) {
        v8 = function_18543e();
    }
    int32_t v9 = *(int32_t *)(a3 - 0xb6a362c); // 0x18547b
    uint32_t v10 = v9 + (int32_t)a3 + (int32_t)(-1 - (char)(v8 / 256) < (char)((uint64_t)v4 / 256)); // 0x18547b
    int64_t v11 = unknown_7287789(); // 0x185483
    int32_t * v12 = (int32_t *)(a1 + 47); // 0x185488
    *v12 = *v12 + (int32_t)v1;
    char * v13 = (char *)(v1 - 0x1756767f); // 0x18548d
    *v13 = *v13 ^ (char)v2;
    int32_t * v14 = (int32_t *)(int64_t)v10; // 0x185493
    *v14 = *v14 + (int32_t)a1;
    *(int32_t *)a1 = (int32_t)v11;
    *(int64_t *)0xb5fe03a3 = v3 & 0xffff00ff | 0xe000;
    __asm_outsd((int16_t)v10, *(int32_t *)&v1);
    unknown_2a5f46a5();
    *(char *)v1 = -32;
    return unknown_e0b36b6();
}

// Address range: 0x185538 - 0x185539
int64_t function_185538(void) {
    // 0x185538
    int64_t result; // 0x185538
    return result;
}

// Address range: 0x185559 - 0x185560
int64_t function_185559(void) {
    // 0x185559
    int64_t v1; // 0x185559
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_ffffffffe819538f();
}

// Address range: 0x185560 - 0x185564
int64_t function_185560(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 71); // 0x185560
    int64_t result; // 0x185560
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x185565 - 0x18556f
int64_t function_185565(void) {
    // 0x185565
    unknown_3abf806b();
    return function_10421593();
}

// Address range: 0x185573 - 0x185576
int64_t function_185573(int64_t a1) {
    // 0x185573
    int64_t result; // 0x185573
    return result;
}

// Address range: 0x185576 - 0x1855ac
int64_t function_185576(int64_t a1, int64_t a2) {
    // 0x185576
    int64_t v1; // 0x185576
    int32_t * v2 = (int32_t *)(v1 - 0x43280812); // 0x185576
    *v2 = *v2 + (int32_t)a2;
    __asm_iretd();
    char v3 = *(char *)-0x103ed359; // 0x1855a0
    char v4 = v3 + (char)(((int64_t)&g3 & -256) >> 8); // 0x1855a0
    *(char *)-0x103ed359 = v4;
    int64_t result = v1 & 0xffffffff; // 0x1855a7
    if (v4 < 0 != ((v4 ^ v3) & (v4 ^ (char)(((int64_t)&g3 & -256) >> 8))) < 0) {
        result = function_185538();
    }
    // 0x1855a9
    return result;
}

// Address range: 0x1855b4 - 0x1855ce
int64_t function_1855b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1855b4
    int64_t v1; // 0x1855b4
    *(char *)a3 = 2 * (char)v1;
    return function_185646(a1, a2, a3);
}

// Address range: 0x1855e0 - 0x1855e3
int64_t function_1855e0(int64_t a1) {
    // 0x1855e0
    int64_t result; // 0x1855e0
    return result;
}

// Address range: 0x185646 - 0x185650
int64_t function_185646(int64_t a1, int64_t a2, int64_t a3) {
    // 0x185646
    int64_t v1; // 0x185646
    int32_t * v2 = (int32_t *)(v1 + a3); // 0x185646
    *v2 = *v2 + (int32_t)a2;
    int64_t v3; // 0x185646
    int32_t v4 = *(int32_t *)&v3 & (int32_t)v1; // 0x185649
    return (v4 + 135) % 256 | v4 & -256;
}

// Address range: 0x1856bf - 0x1856c2
int64_t function_1856bf(void) {
    // 0x1856bf
    int64_t result; // 0x1856bf
    return result;
}

// Address range: 0x1856ea - 0x1856eb
int64_t function_1856ea(int64_t a1) {
    // 0x1856ea
    int64_t result; // 0x1856ea
    return result;
}

// Address range: 0x185706 - 0x185707
int64_t function_185706(int64_t a1) {
    // 0x185706
    int64_t result; // 0x185706
    return result;
}

// Address range: 0x185733 - 0x185734
int64_t function_185733(int64_t a1) {
    // 0x185733
    int64_t result; // 0x185733
    return result;
}

// Address range: 0x185769 - 0x185772
int64_t function_185769(void) {
    // 0x185769
    int64_t v1; // 0x185769
    return (int64_t)&v1;
}

// Address range: 0x185799 - 0x1857c8
int64_t function_185799(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x185799
    bool v1; // 0x185799
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x18579b
    int64_t v3 = a4 & 0xffffffff; // 0x18579c
    int64_t v4; // 0x185799
    *(char *)v3 = (char)v4 + (char)a4;
    *(char *)-0x37748653 = *(char *)-0x37748653 + (char)(v4 / 256);
    *(int64_t *)(v2 - 0x27438005) = 1;
    uint64_t result = __asm_wait(v2, a3 & 0xffffffff); // 0x1857ba
    *(int32_t *)(2 * result) = (int32_t)result;
    *(char *)(v3 + 61) = (char)(result / 256);
    int32_t * v5 = (int32_t *)(result - 0x4e7642d4); // 0x1857c1
    *v5 = *v5 + (int32_t)v4;
    return result;
}

// Address range: 0x1857e9 - 0x185814
int64_t function_1857e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc02067ef(); // 0x1857e9
    bool v2; // 0x1857e9
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x1857ef
    *(int32_t *)v3 = (int32_t)v1;
    int64_t v4; // 0x1857e9
    int32_t v5 = *(int32_t *)&v4; // 0x1857f5
    *(int32_t *)a3 = v5 + (int32_t)(v3 + (v2 ? 0xfffffffc : 4));
    *(int32_t *)0xa887c4201e8ff91 = __asm_in((int16_t)a3);
    int64_t v6; // 0x1857e9
    char * v7 = (char *)(4 * a3 + 91 + v6); // 0x185803
    *v7 = *v7 | -14;
    return unknown_ffffffffb830ca0e() | 141;
}

// Address range: 0x185852 - 0x185855
int64_t function_185852(int64_t a1) {
    // 0x185852
    int64_t result; // 0x185852
    return result;
}

// Address range: 0x18589b - 0x1858c4
int64_t function_18589b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = __asm_in(-0x4472); // 0x1858a6
    int32_t * v2 = (int32_t *)(int64_t)v1; // 0x1858a8
    uint32_t v3 = *v2; // 0x1858a8
    *v2 = v1;
    int64_t v4; // 0x18589b
    char * v5 = (char *)(v4 - 0x17768800); // 0x1858b4
    *v5 = *v5 | -69;
    *(int32_t *)0x44c1e3c3 = *(int32_t *)0x44c1e3c3 + (int32_t)a1;
    return (int64_t)(0x10000 * ((v3 % 256 | (int32_t)&g1) + (int32_t)v4) / 0x10000);
}

// Address range: 0x1858c4 - 0x18590b
int64_t function_1858c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 52); // 0x1858c4
    *v1 = 1024 * *v1;
    int64_t v2 = a3 & -256 | 232; // 0x1858c8
    int64_t v3 = a4 | 255; // 0x1858cd
    int32_t * v4 = (int32_t *)(v2 + 0x7a5da152); // 0x1858d4
    int64_t v5; // 0x1858c4
    *v4 = *v4 + (int32_t)v5;
    bool v6; // 0x1858c4
    int64_t v7 = v6 ? -1 : 1; // 0x1858e6
    int64_t v8 = v7 + (v2 + a2 & 0xffffffff); // 0x1858e6
    int64_t v9 = unknown_3db742ef(v7 + a1, v8, v2, v3); // 0x1858e9
    unsigned char v10 = *(char *)(v8 & 0xffffffff); // 0x1858ee
    *(int32_t *)(v9 & 0xffffff00 | (int64_t)v10) = __asm_insd((int16_t)v2);
    int32_t * v11 = (int32_t *)(v3 + 72); // 0x185900
    *v11 = *v11 + (int32_t)v2;
    return function_ffffffffe8cfa3b5();
}

// Address range: 0x18590b - 0x185921
int64_t function_18590b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18590b
    int64_t v1; // 0x18590b
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
    unknown_4c1ceb1d(0xda9cffc8);
    return function_ffffffffa4d3c793();
}

// Address range: 0x2ecc1e - 0x2ecc20
int64_t function_2ecc1e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2ecc1e
    *(char *)a4 = (char)(a4 / 256);
    int64_t result; // 0x2ecc1e
    return result;
}

// Address range: 0x2ecc79 - 0x2ecc7c
int64_t function_2ecc79(int64_t a1) {
    // 0x2ecc79
    int64_t result; // 0x2ecc79
    return result;
}

// Address range: 0x2eccb4 - 0x2eccb9
int64_t function_2eccb4(void) {
    // 0x2eccb4
    return function_ffffffffb1f487b2();
}

// Address range: 0x2eccbd - 0x2ecccc
int64_t function_2eccbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2eccbd
    float80_t v1; // 0x2eccbd
    *(int16_t *)(a4 + 0x1e8b9d4) = (int16_t)v1;
    int64_t result; // 0x2eccbd
    return result;
}

// Address range: 0x2ecccc - 0x2ecccf
int64_t function_2ecccc(int64_t a1) {
    // 0x2ecccc
    int64_t result; // 0x2ecccc
    return result;
}

// Address range: 0x2eccef - 0x2ecd07
int64_t function_2eccef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2eccef
    int64_t v1; // 0x2eccef
    *(char *)a1 = (char)v1;
    bool v2; // 0x2eccef
    return unknown_3d17d605((v2 ? -1 : 1) + a1);
}

// Address range: 0x2ecd07 - 0x2ecd28
int64_t function_2ecd07(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = a4;
    unknown_ffffffff86559114();
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v2 = (char *)(a1 - 45); // 0x2ecd14
    *v2 = *v2 | (char)(a4 / 256);
    *(char *)0x829cf09 = *(char *)0x829cf09 + (char)(a3 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 >> 15;
    return __asm_hlt();
}

// Address range: 0x2ecd4f - 0x2ecd52
int64_t function_2ecd4f(int64_t a1) {
    // 0x2ecd4f
    int64_t result; // 0x2ecd4f
    return result;
}

// Address range: 0x2ed01e - 0x2ed05e
int64_t function_2ed01e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2ed01e
    int64_t v1; // 0x2ed01e
    int64_t v2 = v1 & -256 | (uint64_t)v1 % 256; // 0x2ed01e
    bool v3; // 0x2ed01e
    if (v3) {
        int32_t * v4 = (int32_t *)(a3 - 127); // 0x2ed050
        *v4 = *v4 + (int32_t)a3;
        char * v5 = (char *)(v2 | a4 / 256 % 256); // 0x2ed058
        *v5 = *v5 - 1;
        *(int32_t *)a1 = *(int32_t *)((v3 ? -1 : 1) + a2);
        return a4 & 0xffffffff;
    }
    int64_t result = v2; // 0x2ed026
    if (v3) {
        result = function_2ecfc7();
    }
    // 0x2ed028
    return result;
}

// Address range: 0x2ed062 - 0x2ed076
int64_t function_2ed062(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)((a4 & 0xffffffff) - 77); // 0x2ed069
    int64_t v2; // 0x2ed062
    *v1 = *v1 + (char)v2;
    return function_68699180();
}

// Address range: 0x2ed07a - 0x2ed07f
int64_t function_2ed07a(void) {
    // 0x2ed07a
    return function_1d80d152();
}

// Address range: 0x2ed08e - 0x2ed08f
int64_t function_2ed08e(void) {
    // 0x2ed08e
    int64_t result; // 0x2ed08e
    return result;
}

// Address range: 0x2ed0af - 0x2ed0c2
int64_t function_2ed0af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a1; // 0x2ed0af
    uint32_t v2 = 2 * v1; // 0x2ed0af
    int64_t v3 = __asm_sti(v2); // 0x2ed0b1
    uint32_t v4 = (int32_t)a4 % 32; // 0x2ed0b2
    int64_t v5 = v3; // 0x2ed0b2
    if (v4 != 0) {
        v5 = (int32_t)v3 >> v4 | (int32_t)(v2 < v1) << 32 - v4 | (int32_t)((v3 & 0xffffffff) << (int64_t)(33 - v4));
    }
    int64_t v6 = v2; // 0x2ed0af
    *(char *)v6 = (char)v5;
    char * v7 = (char *)(v5 - 0x8ff3c2c); // 0x2ed0b6
    *v7 = *v7 >> 1;
    bool v8; // 0x2ed0af
    return function_7ea46f42((v8 ? -1 : 1) + v6);
}

// Address range: 0x2ed0c3 - 0x2ed0cc
int64_t function_2ed0c3(int64_t a1) {
    char v1 = *(char *)0x5f6597ca; // 0x2ed0c3
    int64_t result; // 0x2ed0c3
    *(char *)0x5f6597ca = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2ed0d0 - 0x2ed0ee
int64_t function_2ed0d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ed0d0
    int64_t result; // 0x2ed0d0
    int64_t v1 = result;
    if (a4 != 1 == (int32_t)result == -(int32_t)result) {
        // 0x2ed145
        return result;
    }
    unsigned char v2 = *(char *)-0x17a13cd8; // 0x2ed0d9
    *(char *)-0x17a13cd8 = v2 / 128 | 2 * v2;
    unknown_3d976fe6();
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)result;
    return function_ffffffffcc08f780();
}

// Address range: 0x2ed10b - 0x2ed117
int64_t function_2ed10b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ed10b
    return unknown_ffffffffdcbfb816();
}

// Address range: 0x2ed125 - 0x2ed137
int64_t function_2ed125(void) {
    // 0x2ed125
    int64_t v1; // 0x2ed125
    int32_t * v2 = (int32_t *)(v1 + 126); // 0x2ed125
    *v2 = *v2 + (int32_t)v1 | -0x5695e156;
    return unknown_ffffffffa4f25635();
}

// Address range: 0x2ed137 - 0x2ed138
int64_t function_2ed137(void) {
    // 0x2ed137
    int64_t result; // 0x2ed137
    return result;
}

// Address range: 0x2ed13d - 0x2ed145
int64_t function_2ed13d(void) {
    // 0x2ed13d
    int64_t result; // 0x2ed13d
    int32_t * v1 = (int32_t *)(result + 112); // 0x2ed13d
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2ed14d - 0x2ed158
int64_t function_2ed14d(void) {
    // 0x2ed14d
    return unknown_49066c58();
}

// Address range: 0x2ed159 - 0x2ed1fa
int64_t function_2ed159(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2ed159
    int64_t v1; // 0x2ed159
    bool v2; // 0x2ed159
    if (!v2) {
        // 0x2ed16b
        return v1 & -256 | (int64_t)*(char *)0x1e8022b9cf1ff10;
    }
    // 0x2ed1e2
    unknown_ffffffffc51ffae8();
    int32_t * v3 = (int32_t *)(a1 - 0x6f0a236c); // 0x2ed1ed
    int32_t v4 = *v3 + (int32_t)v1; // 0x2ed1ed
    *v3 = v4;
    int64_t result = unknown_fffffffff9e90df9(); // 0x2ed1f3
    if (v4 != 0) {
        // 0x2ed1cd
        return v1 & 0xffffffff;
    }
    // 0x2ed1fa
    return result;
}

// Address range: 0x2ed1fb - 0x2ed1fc
int64_t function_2ed1fb(int64_t a1) {
    // 0x2ed1fb
    int64_t result; // 0x2ed1fb
    return result;
}

// Address range: 0x2ed235 - 0x2ed237
int64_t function_2ed235(void) {
    // 0x2ed235
    int64_t result; // 0x2ed235
    return result;
}

// Address range: 0x2ed23d - 0x2ed242
int64_t function_2ed23d(void) {
    // 0x2ed23d
    return function_1f54d42a();
}

// Address range: 0x2ed263 - 0x2ed267
int64_t function_2ed263(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ed263
    int64_t result; // 0x2ed263
    return result;
}

// Address range: 0x2ed27a - 0x2ed283
int64_t function_2ed27a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ed27a
    return unknown_1a481f80(a1, a2, a3, a4, a5);
}

// Address range: 0x2ed33d - 0x2ed33e
int64_t function_2ed33d(void) {
    // 0x2ed33d
    int64_t result; // 0x2ed33d
    return result;
}

// Address range: 0x2ed34d - 0x2ed35d
int64_t function_2ed34d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ed34d
    int64_t v1; // 0x2ed34d
    *(char *)a1 = (char)v1;
    return function_2ed33d();
}

// Address range: 0x2ed38f - 0x2ed392
int64_t function_2ed38f(int64_t a1) {
    // 0x2ed38f
    int64_t result; // 0x2ed38f
    return result;
}

// Address range: 0x2ed414 - 0x2ed415
int64_t function_2ed414(void) {
    // 0x2ed414
    int64_t result; // 0x2ed414
    return result;
}
