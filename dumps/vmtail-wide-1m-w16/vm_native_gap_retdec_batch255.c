/*
 * Targeted RetDec C for native executable gap queue batch 255.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x146113-0x146313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x146313-0x146513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x146513-0x146713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x146713-0x146913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x146913-0x146b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f1c1e-0x2f1e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f1e1e-0x2f201e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f201e-0x2f221e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_146113(void);
int64_t function_14611d(int64_t a1);
int64_t function_146152(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_146210(void);
int64_t function_14621d(void);
int64_t function_146246(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_146345(void);
int64_t function_14635d(void);
int64_t function_146374(void);
int64_t function_146396(int64_t a1);
int64_t function_14639d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1463d2(void);
int64_t function_1463ea(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1463fb(int64_t a1);
int64_t function_1463ff(void);
int64_t function_146431(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_146441(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1464c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_146555(int64_t a1);
int64_t function_146564(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_146638(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1466bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1466d9(void);
int64_t function_1466dc(void);
int64_t function_146736(void);
int64_t function_14673a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1467bf(void);
int64_t function_1467fa(void);
int64_t function_146853(int64_t a1, int64_t a2, int64_t a3);
int64_t function_146860(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_146894(void);
int64_t function_1468bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_146918(int64_t a1);
int64_t function_14699f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_146a19(int64_t a1, int64_t a2, int64_t a3);
int64_t function_146a56(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_146ae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_146b09(int64_t a1);
int64_t function_2f1c1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f1cdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f1dfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f1f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f2080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ba46f50();
int64_t function_7cec4b();
int64_t function_c4258();
int64_t function_ffffffffab21a9df();
int64_t unknown_1fc6772();
int64_t unknown_2c0f5f40();
int64_t unknown_2e1703a5();
int64_t unknown_3306c7b8();
int64_t unknown_3d793c7a();
int64_t unknown_44a3aa55();
int64_t unknown_517464c8();
int64_t unknown_6ac0f296();
int64_t unknown_6eba377f();
int64_t unknown_701a4ec9();
int64_t unknown_7a04c6f0();
int64_t unknown_ffffffff88c53fa0();
int64_t unknown_ffffffff8bda8b58();
int64_t unknown_ffffffff91c65156();

// Address range: 0x146113 - 0x146114
int64_t function_146113(void) {
    // 0x146113
    int64_t result; // 0x146113
    return result;
}

// Address range: 0x14611d - 0x14611e
int64_t function_14611d(int64_t a1) {
    // 0x14611d
    int64_t result; // 0x14611d
    return result;
}

// Address range: 0x146152 - 0x14619c
int64_t function_146152(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff8bda8b58(); // 0x146152
    int64_t v2; // 0x146152
    int64_t v3 = (int64_t)&v2; // bp-8, 0x14615c
    *(char *)(a2 - 0x2efe1795 + 4 * a1) = (char)a4;
    char * v4 = (char *)v1; // 0x146167
    *v4 = *v4 - (char)v1;
    int16_t v5 = a3; // 0x146169
    int32_t v6 = __asm_in(v5); // 0x146169
    char v7 = __asm_in_133(v5); // 0x14616a
    int64_t v8; // 0x146152
    int64_t v9 = v8 + (int64_t)&v3 & 0xffffffff; // 0x14616c
    uint32_t v10 = (int32_t)a4; // 0x146172
    int64_t v11; // 0x146152
    __asm_outsb(v5, *(char *)&v11);
    char * v12 = (char *)(a3 + 35); // 0x146177
    *v12 = (char)(v10 >= (int32_t)a1) - (char)a3 + *v12;
    *(int32_t *)-0x1616a283 = *(int32_t *)-0x1616a283 + v10;
    int32_t * v13 = (int32_t *)(v9 + 0x47151c3d); // 0x146180
    *v13 = *v13 + v10;
    int32_t * v14 = (int32_t *)(v9 - 0x8906556); // 0x146186
    *v14 = *v14 + (int32_t)a3;
    uint32_t v15 = (int32_t)v8; // 0x14618c
    uint32_t v16 = (int32_t)v8; // 0x14618c
    int32_t v17 = v15 + v16; // 0x14618c
    unsigned char v18 = llvm_ctpop_i8((char)v17); // 0x14618c
    bool v19; // 0x146152
    *(int64_t *)((int64_t)(v6 & -256 | (int32_t)v7) - 8) = 64 * (int64_t)(v17 == 0) | (int64_t)(v17 < v15) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v15 % 16 + v16 % 16 > 15) | 2048 * (int64_t)(((v17 ^ v15) & (v17 ^ v16)) < 0) | 4 * (int64_t)(v18 % 2 == 0) | 0x4000 * (int64_t)v19 | 1024 * (int64_t)v19 | 256 * (int64_t)v19 | 2;
    unknown_6ac0f296();
    uint64_t v20 = __asm_wait(); // 0x146195
    __asm_out(v5, (int32_t)v20);
    return v20 & -256 | (int64_t)*(char *)(v20 % 256 + 0x1e83a71);
}

// Address range: 0x146210 - 0x146211
int64_t function_146210(void) {
    // 0x146210
    int64_t result; // 0x146210
    return result;
}

// Address range: 0x14621d - 0x14621e
int64_t function_14621d(void) {
    // 0x14621d
    int64_t result; // 0x14621d
    return result;
}

// Address range: 0x146246 - 0x1462ef
int64_t function_146246(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a3 + 1); // 0x146246
    int32_t v2 = *v1; // 0x146246
    int64_t v3; // 0x146246
    int32_t v4 = v3; // 0x146246
    int32_t v5 = v2 + v4; // 0x146246
    *v1 = v5;
    if (v5 < 0 == ((v5 ^ v2) & (v5 ^ v4)) < 0 == (v5 != 0)) {
        function_146210();
    }
    int64_t v6 = a4 & -256 | 28;
    int64_t v7; // 0x146246
    int64_t v8 = *(int64_t *)v7; // 0x14624d
    int64_t v9 = v6 - 1; // 0x14624e
    while (v9 != 0 == v5 == 0) {
        // 0x14624d
        v6 = v9;
        v8 = *(int64_t *)v8;
        v9 = v6 - 1;
    }
    int64_t v10 = unknown_ffffffff91c65156(); // 0x146250
    char * v11 = (char *)v10; // 0x146255
    char v12 = *v11 + (char)v10; // 0x146255
    *v11 = v12;
    int64_t v13 = v6 - 2; // 0x146257
    if (v13 != 0 && v12 != 0) {
        function_14621d();
    }
    int32_t v14 = a1; // 0x146260
    *(int32_t *)0x73d24b67 = *(int32_t *)0x73d24b67 + v14;
    char v15 = *(char *)(a5 - 77 + a6); // 0x146266
    int64_t v16 = a2 & -256 | (int64_t)(v15 + (char)a2); // 0x146266
    char * v17 = (char *)(v8 + 0x281701e8 + v16); // 0x14626b
    *v17 = *v17 + (char)v13;
    int64_t v18 = v8 & 0xffffffff; // 0x146277
    *(int64_t *)(v18 - 8) = unknown_6eba377f();
    int64_t v19 = v13 & -256 | 190; // 0x14627f
    __asm_in_134(-24);
    int32_t * v20 = (int32_t *)(v19 - 0x52ba0122); // 0x146283
    *v20 = *v20 + v14;
    __asm_int(97);
    *(int64_t *)(v18 - 16) = *(int64_t *)(a3 - 0x2c3d0ffb);
    int64_t v21 = unknown_ffffffff88c53fa0() & -256 | 137; // 0x1462a1
    *(int32_t *)0x7081d4045a01e84f = (int32_t)v21;
    int32_t * v22 = (int32_t *)v16; // 0x1462b1
    int32_t v23 = v3; // 0x1462b1
    *v22 = *v22 + v23;
    int32_t * v24 = (int32_t *)(v19 - 110); // 0x1462ba
    *v24 = *v24 + v23;
    return v21 + 0xe8d3bf1c & 0xffffffa5;
}

// Address range: 0x146345 - 0x146348
int64_t function_146345(void) {
    // 0x146345
    int64_t v1; // 0x146345
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x14635d - 0x14635e
int64_t function_14635d(void) {
    // 0x14635d
    int64_t result; // 0x14635d
    return result;
}

// Address range: 0x146374 - 0x146377
int64_t function_146374(void) {
    // 0x146374
    int64_t result; // 0x146374
    return result;
}

// Address range: 0x146396 - 0x146397
int64_t function_146396(int64_t a1) {
    // 0x146396
    int64_t result; // 0x146396
    return result;
}

// Address range: 0x14639d - 0x1463c3
int64_t function_14639d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14639d
    int64_t v1; // 0x14639d
    __asm_outsb((int16_t)a3, (char)v1);
    bool v2; // 0x14639d
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x14639e
    unknown_2e1703a5(v3);
    int64_t v4; // 0x14639d
    int64_t result = (int64_t)&v4; // 0x1463a6
    int32_t * v5 = (int32_t *)(v3 - 0x415af3d6); // 0x1463af
    *v5 = *v5 + (int32_t)result;
    *(char *)(a4 - 48 + 4 * v1) = (char)result;
    return result;
}

// Address range: 0x1463d2 - 0x1463d4
int64_t function_1463d2(void) {
    // 0x1463d2
    return function_14635d();
}

// Address range: 0x1463ea - 0x1463f5
int64_t function_1463ea(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_7a04c6f0(); // 0x1463ea
    return (v1 + a4 / 256) % 256 | v1 & -256;
}

// Address range: 0x1463fb - 0x1463fc
int64_t function_1463fb(int64_t a1) {
    // 0x1463fb
    int64_t result; // 0x1463fb
    return result;
}

// Address range: 0x1463ff - 0x146400
int64_t function_1463ff(void) {
    // 0x1463ff
    int64_t result; // 0x1463ff
    return result;
}

// Address range: 0x146431 - 0x146434
int64_t function_146431(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x146431
    return __asm_in((int16_t)a3);
}

// Address range: 0x146441 - 0x14646c
int64_t function_146441(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0x4f38ffd2); // 0x146441
    uint32_t v2 = *v1; // 0x146441
    uint32_t v3 = v2 + (int32_t)a3; // 0x146441
    *v1 = v3;
    unknown_44a3aa55();
    int64_t v4; // 0x146441
    char v5 = *(char *)&v4; // 0x14644c
    int64_t v6; // 0x146441
    *(char *)a3 = (char)(v3 < v2) + (char)v6 + v5;
    int32_t v7 = *(int32_t *)(a4 + 0x65593ee5) & (int32_t)a4; // 0x14645d
    unsigned char v8 = (char)v7 + (char)a3; // 0x146464
    int16_t v9 = 256 * (int16_t)v6 >> 8; // 0x146466
    int64_t result = v6 & 0xffff0000 | (int64_t)(v9 * v9); // 0x146469
    if (v8 != 0 && ((int64_t)v8 || (int64_t)(v7 & -256)) != 1) {
        result = function_1463ff();
    }
    // 0x14646b
    return result;
}

// Address range: 0x1464c7 - 0x146532
int64_t function_1464c7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1464c7
    int64_t v1; // 0x1464c7
    uint64_t v2 = v1;
    *(char *)a1 = 0;
    int64_t result = (int64_t)*(int32_t *)-0x185fbdfdffa0edfd; // 0x1464ca
    char * v3 = (char *)(a1 - 0x42fec300 + 4 * a3); // 0x1464d3
    char v4 = *v3 - (char)v2; // 0x1464d3
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x1464d3
    *v3 = v4;
    if (v5 % 2 != 0) {
        // 0x1464dc
        return result;
    }
    // 0x14652a
    *(char *)0x3ab67733 = *(char *)0x3ab67733 + (char)(v2 / 256);
    return result;
}

// Address range: 0x146555 - 0x146563
int64_t function_146555(int64_t a1) {
    // 0x146555
    int64_t v1; // 0x146555
    return v1 & 0xfec2ff53 | 0x13d00ac;
}

// Address range: 0x146564 - 0x146584
int64_t function_146564(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_3d793c7a(); // 0x146574
    int64_t v1; // 0x146564
    *(int32_t *)-0x4c0e32c6 = *(int32_t *)-0x4c0e32c6 + (int32_t)v1;
    return result;
}

// Address range: 0x146638 - 0x1466bc
int64_t function_146638(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x146638
    bool v1; // 0x146638
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x146639
    int64_t v3 = unknown_2c0f5f40(v2); // 0x14663a
    uint64_t v4 = a4 - 1; // 0x146640
    if (v4 == 0) {
        // 0x146642
        return a3 & 0xffffffff;
    }
    int64_t v5 = v3 & 0xffffffff; // 0x14663f
    char * v6 = (char *)(2 * v2 - 109 + v5); // 0x1466aa
    *v6 = *v6 + (char)(v4 / 256);
    int32_t * v7 = (int32_t *)v5; // 0x1466b0
    int64_t v8; // 0x146638
    *v7 = *v7 - (int32_t)v8;
    unknown_3306c7b8();
    return 0x13d10f47;
}

// Address range: 0x1466bd - 0x1466d9
int64_t function_1466bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1466bd
    int64_t v1; // 0x1466bd
    int64_t v2 = v1;
    unknown_701a4ec9();
    __asm_wait();
    *(int32_t *)a1 = ((int32_t)(a4 - 256 * v2 & 0xff00 | a4 & 0xffff0000) | 206) + (int32_t)v2;
    int64_t v3; // bp-8, 0x1466bd
    return (int64_t)&v3;
}

// Address range: 0x1466d9 - 0x1466dc
int64_t function_1466d9(void) {
    // 0x1466d9
    int64_t result; // 0x1466d9
    return result;
}

// Address range: 0x1466dc - 0x1466e6
int64_t function_1466dc(void) {
    // 0x1466dc
    unknown_1fc6772();
    return function_ffffffffab21a9df();
}

// Address range: 0x146736 - 0x146737
int64_t function_146736(void) {
    // 0x146736
    int64_t result; // 0x146736
    return result;
}

// Address range: 0x14673a - 0x1467a9
int64_t function_14673a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14673a
    int64_t v1; // 0x14673a
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)v1; // 0x14673e
    uint32_t v4 = (int32_t)v1 - 0x47013d09 + v3 + (int32_t)(v3 < 0x47013d09); // 0x146744
    int64_t result = v4; // 0x146744
    char v5 = v4; // 0x14674b
    char v6 = (char)v1 - v5; // 0x14674b
    __asm_out_135(83, v5);
    if (a4 != 1 == v6 == 0) {
        // 0x14679c
        *(char *)(v2 & 0xffffffff) = (char)(v2 / 256) + (char)v2;
        return result;
    }
    int64_t result2 = result; // 0x146752
    if (v6 < 0) {
        result2 = function_146736();
    }
    // 0x146754
    return result2;
}

// Address range: 0x1467bf - 0x1467c0
int64_t function_1467bf(void) {
    // 0x1467bf
    int64_t result; // 0x1467bf
    return result;
}

// Address range: 0x1467fa - 0x1467fd
int64_t function_1467fa(void) {
    // 0x1467fa
    return function_1467bf();
}

// Address range: 0x146853 - 0x146860
int64_t function_146853(int64_t a1, int64_t a2, int64_t a3) {
    // 0x146853
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_3ba46f50();
}

// Address range: 0x146860 - 0x146876
int64_t function_146860(int64_t a1, int64_t a2, uint64_t a3) {
    unsigned char v1 = *(char *)-0x3cf12891; // 0x146868
    int64_t v2; // 0x146860
    unsigned char v3 = v1 + (char)((*(int32_t *)(a3 - 0x3b98c543) + (int32_t)v2) / 256); // 0x146868
    *(char *)-0x3cf12891 = v3;
    char * v4 = (char *)(a2 + 123); // 0x14686e
    *v4 = *v4 + (char)(a3 / 256) + (char)(v3 < v1);
    return function_7cec4b();
}

// Address range: 0x146894 - 0x146897
int64_t function_146894(void) {
    // 0x146894
    int64_t result; // 0x146894
    return result;
}

// Address range: 0x1468bc - 0x1468dc
int64_t function_1468bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1468bc
    int64_t v1; // 0x1468bc
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)(unknown_517464c8() / 256);
    int32_t result = __asm_in_134(-106); // 0x1468ce
    *(int32_t *)a2 = (int32_t)a4;
    return result;
}

// Address range: 0x146918 - 0x14691e
int64_t function_146918(int64_t a1) {
    // 0x146918
    int64_t v1; // 0x146918
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    return v1 & 0xffffffff;
}

// Address range: 0x14699f - 0x146a17
int64_t function_14699f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14699f
    int64_t v1; // 0x14699f
    float80_t v2; // 0x14699f
    *(int32_t *)(v1 + 8 * v1) = (int32_t)v2;
    int64_t v3; // 0x14699f
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    if ((int32_t)v3 == 0x3ac03c01) {
        int32_t * v5 = (int32_t *)(a3 + 0x2b60e407); // 0x1469b6
        *v5 = 2 * *v5;
        *(int64_t *)a2 = a4;
        uint32_t result = *(int32_t *)-0x457ce4e5082a8bde; // 0x1469c3
        __asm_out_136(-21, result);
        return result;
    }
    int64_t v6 = v3 & -195; // 0x1469f0
    int32_t * v7 = (int32_t *)v6; // 0x1469f2
    *v7 = *v7 + (int32_t)v6;
    int64_t v8 = v3 & 0x201d1201 | 0x10420060; // 0x146a00
    unsigned char v9 = *(char *)0x507bd110; // 0x146a09
    unsigned char v10 = v9 + (char)(v1 / 256); // 0x146a09
    *(char *)0x507bd110 = v10;
    *(int32_t *)0xbe42979b = __asm_insd((int16_t)a3);
    return v8 & 0x61200 | v8 + 1 + (int64_t)(v10 < v9) & 67 | 0x7bd90db4;
}

// Address range: 0x146a19 - 0x146a29
int64_t function_146a19(int64_t a1, int64_t a2, int64_t a3) {
    // 0x146a19
    int64_t v1; // 0x146a19
    uint64_t v2 = v1;
    char * v3 = (char *)(a3 + 58); // 0x146a19
    *v3 = *v3 & (char)v2;
    char v4 = *(char *)(a3 + 0x50013d00); // 0x146a1c
    return 256 * (int64_t)(v4 | (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x146a56 - 0x146aab
int64_t function_146a56(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x146a56
    int64_t result; // 0x146a56
    char * v1 = (char *)(a5 + 0x22c03a9e + 8 * result); // 0x146a56
    char v2 = *v1 + 118; // 0x146a56
    *v1 = v2;
    if (v2 >= 0) {
        // 0x146a62
        return result;
    }
    // 0x146aa0
    *(int32_t *)-0x7f9c6ca7 = *(int32_t *)-0x7f9c6ca7 + (int32_t)a3;
    return result + 0xa33cb643 & 0xffffffff;
}

// Address range: 0x146ae9 - 0x146aef
int64_t function_146ae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x146ae9
    int64_t result; // 0x146ae9
    return result;
}

// Address range: 0x146b09 - 0x146b0a
int64_t function_146b09(int64_t a1) {
    // 0x146b09
    int64_t result; // 0x146b09
    return result;
}

// Address range: 0x2f1c1e - 0x2f1cdc
int64_t function_2f1c1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f1c1e
    int64_t v1; // 0x2f1c1e
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x2f1c1e
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = v3; // bp+24, 0x2f1c5d
    int64_t v6 = (int64_t)&v5; // 0x2f1ca2
    *(int64_t *)(v6 - 8) = v6 + 8;
    return function_c4258(a1, a2, a4, v1, v1, v1, v5);
}

// Address range: 0x2f1cdc - 0x2f1dfd
int64_t function_2f1cdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f1cdc
    int64_t v1; // bp-64, 0x2f1cdc
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2f1cdc
    bool v3; // 0x2f1cdc
    return function_c4258(a1, a2, a3, a4, a5, v2, 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2);
}

// Address range: 0x2f1dfd - 0x2f1f40
int64_t function_2f1dfd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x102d50c4; // bp-32, 0x2f1e6c
    int64_t v2 = (int64_t)&v1; // 0x2f1ea4
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x2f1eac
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2f1eac
    *(int64_t *)(v2 - 24) = v3;
    int64_t v5 = v2 + 8; // 0x2f1ed7
    *(int64_t *)v5 = a5;
    *v4 = 0xc111d0a;
    *(int64_t *)(v2 - 16) = v3;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = a4;
    *v4 = v5;
    int64_t v6; // 0x2f1dfd
    return function_c4258(a1, a2, a3, *v4, v6, v6, v1);
}

// Address range: 0x2f1f40 - 0x2f2080
int64_t function_2f1f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f1f40
    int64_t v1; // bp-48, 0x2f1f40
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2f1f40
    return function_c4258(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x2f2080 - 0x2f220d
int64_t function_2f2080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6; // bp-24, 0x2f20f4
    int64_t * v2 = (int64_t *)a6; // 0x2f211d
    int64_t v3 = a6 - 16; // 0x2f2126
    int64_t * v4 = (int64_t *)v3; // 0x2f2126
    *v4 = a4;
    int64_t * v5 = (int64_t *)(a6 - 24); // 0x2f212c
    *v5 = a2;
    int64_t v6 = *(int64_t *)(a6 + 24); // 0x2f2147
    *v4 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(a6 - 32); // 0x2f2161
    *v7 = v3;
    int64_t v8 = *v2; // 0x2f216a
    *v7 = v8;
    *(int64_t *)(a6 - 40) = v8;
    *v5 = v6;
    *v2 = *v4;
    *v4 = 0x37860c00;
    *v7 = v8;
    *(int64_t *)(a6 + 16) = *v4;
    *v5 = a2;
    *v4 = a6;
    return function_c4258(a1, *v5, a3, *v4, a5, a6, (int64_t)&v1);
}
