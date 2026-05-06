/*
 * Targeted RetDec C for native executable gap queue batch 259.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x146b13-0x146d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x146d13-0x146f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x147313-0x147513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18d285-0x18d485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18d485-0x18d685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18d685-0x18d885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18d885-0x18da85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18da85-0x18dc85 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
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

int64_t function_146b13(int64_t a1, int64_t a2, int64_t a3);
int64_t function_146b8f(int64_t a1);
int64_t function_146b9b(int64_t a1);
int64_t function_146bed(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_146d28(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_146e31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_146ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_146ee8(void);
int64_t function_146ef7(void);
int64_t function_147313(int64_t a1, int64_t a2);
int64_t function_1473f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_147451(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18d21c();
int64_t function_18d285(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18d2ef(void);
int64_t function_18d351(void);
int64_t function_18d353(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_18d433(void);
int64_t function_18d46b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18d483(int64_t a1);
int64_t function_18d519(void);
int64_t function_18d523(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18d52c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18d57a(int64_t a1, int64_t a2);
int64_t function_18d589(void);
int64_t function_18d5a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18d5e2(void);
int64_t function_18d5f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18d60a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18d64b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_18d714(void);
int64_t function_18d72e(void);
int64_t function_18d73a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_18d7c4(int64_t a1);
int64_t function_18d7c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18d7d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18d7f7(void);
int64_t function_18d832(int64_t a1);
int64_t function_18d83f(void);
int64_t function_18d85d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18d88f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18d8dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18d910(void);
int64_t function_18d938(void);
int64_t function_18d967(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18da26(void);
int64_t function_18da86(void);
int64_t function_18daa4(int64_t a1);
int64_t function_18dacc(void);
int64_t function_18dad8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_18db1d(int64_t a1);
int64_t function_18dc0f(int64_t a1);
int64_t function_18dc61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ffffffff9f21a485();
int64_t function_ffffffffdf74d7b0();
int64_t function_fffffffff553b44f();
int64_t unknown_19cdd386();
int64_t unknown_2c0e6c6a();
int64_t unknown_301c661b();
int64_t unknown_3d1ac1a4();
int64_t unknown_4aa43003();
int64_t unknown_4c1f0ec7();
int64_t unknown_4e19d7fb();
int64_t unknown_52c5f43c();
int64_t unknown_63c7ddc1();
int64_t unknown_68a81070();
int64_t unknown_795e1d53();
int64_t unknown_7a0e91cf();
int64_t unknown_9f9fdb4();
int64_t unknown_d064e0();
int64_t unknown_e1d599e();
int64_t unknown_f932781();
int64_t unknown_ffffffff90097c57();
int64_t unknown_ffffffff9391f1fa();
int64_t unknown_ffffffff9547ffab();
int64_t unknown_ffffffffb1de1cb6();
int64_t unknown_ffffffffb3577e60();
int64_t unknown_ffffffffba608126();
int64_t unknown_ffffffffbafa26d5();
int64_t unknown_ffffffffd337815e();
int64_t unknown_ffffffffe10b3c23();

// Address range: 0x146b13 - 0x146b19
int64_t function_146b13(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 0x21abd762); // 0x146b13
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x146b13
    return result;
}

// Address range: 0x146b8f - 0x146b90
int64_t function_146b8f(int64_t a1) {
    // 0x146b8f
    int64_t result; // 0x146b8f
    return result;
}

// Address range: 0x146b9b - 0x146b9c
int64_t function_146b9b(int64_t a1) {
    // 0x146b9b
    int64_t result; // 0x146b9b
    return result;
}

// Address range: 0x146bed - 0x146c94
int64_t function_146bed(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    __asm_in((int16_t)a3);
    char v2 = *(char *)(2 * a1 + 73); // 0x146c74
    int64_t v3 = 256 * (int64_t)((char)(a3 / 256) - v2) | a3 & -0xff01; // 0x146c74
    int64_t v4 = unknown_f932781(); // 0x146c7b
    char * v5 = (char *)(v3 - 0x27f671cd); // 0x146c80
    char v6 = a3; // 0x146c80
    *v5 = *v5 + v6;
    int32_t * v7 = (int32_t *)(v4 - 0x5e6fe18); // 0x146c86
    int32_t v8 = *v7 | (int32_t)(a4 + a1); // 0x146c86
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x146c86
    *v7 = v8;
    if (v9 % 2 != 0) {
        // 0x146c67
        return (int64_t)(*(int32_t *)v4 + (int32_t)v4);
    }
    char * v10 = (char *)(v3 + 69); // 0x146c8f
    *v10 = *v10 + v6;
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x146d28 - 0x146e30
int64_t function_146d28(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x146d28
    int64_t v1; // 0x146d28
    *(char *)-0x6f5ba4d1 = *(char *)-0x6f5ba4d1 + (char)(v1 / 256);
    int32_t v2 = v1; // 0x146d2e
    int32_t v3 = *(int32_t *)(a3 - 43); // 0x146d2e
    int32_t result = v3 + v2; // 0x146d2e
    if (result < 0 != ((result ^ v2) & (result ^ v3)) < 0) {
        // 0x146d33
        return result;
    }
    int16_t v4 = a3; // 0x146d47
    *(int32_t *)a1 = __asm_insd(v4);
    int64_t v5; // 0x146d28
    __asm_out(v4, *(int32_t *)&v5 & (result & -256 | 239));
    int32_t * v6 = (int32_t *)(a1 + 0x4307f0ee); // 0x146d4b
    *v6 = 2 * *v6;
    unsigned char v7 = *(char *)(2 * a4 - 0x35fec300 + v5); // 0x146d51
    int64_t v8 = __asm_hlt(a1, a2, a3, a4, v1); // 0x146d58
    int64_t v9 = a4 - 1; // 0x146d59
    if (v9 == 0) {
        // 0x146d5b
        *(int32_t *)0x2123448bd05ab07a = (int32_t)v8;
        char * v10 = (char *)v8; // 0x146d71
        *v10 = *v10 + 2 * (char)v8;
        return unknown_19cdd386();
    }
    unsigned char v11 = (char)(a3 / 256); // 0x146d51
    int32_t v12 = a2;
    __asm_outsd(v4, v12);
    int64_t result2 = a2 & 0xffffffff; // 0x146db6
    if (v7 >= v11) {
        // 0x146e2e
        return result2;
    }
    int64_t v13 = v9 & 0xffffffff; // 0x146db5
    bool v14; // 0x146d28
    int64_t v15 = (v14 ? -4 : 4) + a2; // 0x146db6
    if (v7 >= v11) {
        char * v16 = (char *)(result2 + 49); // 0x146dc5
        unsigned char v17 = *v16; // 0x146dc5
        unsigned char v18 = (char)a3; // 0x146dc5
        char v19 = v17 + v18; // 0x146dc5
        unsigned char v20 = llvm_ctpop_i8(v19); // 0x146dc5
        *v16 = v19;
        __asm_out_133(v4, (char)a2);
        *(int32_t *)v13 = *(int32_t *)v15;
        return a2 & 0xffff00ff | 256 * (64 * (int64_t)(v19 == 0) | (int64_t)(v19 < v17) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v17 % 16 + v18 % 16 > 15) | 4 * (int64_t)(v20 % 2 == 0)) | 512;
    }
    int64_t v21 = v8 & 0xffffffff; // 0x146db3
    if (v12 >= 0x9f5f4b6) {
        int32_t * v22 = (int32_t *)(2 * v13 + 0x703c0ad8 + v21); // 0x146e0b
        *v22 = *v22 + (int32_t)v8;
        unknown_ffffffffba608126(v13, v15, (int32_t)a3 & -0x1f9a6852, v8 & 0xffffff00 | -v8 % 256);
        return v15 & 0xffffffff;
    }
    // 0x146df3
    unknown_ffffffff9391f1fa(v13, v15);
    int32_t * v23 = (int32_t *)(v21 - 2); // 0x146df9
    *v23 = *v23 - (int32_t)v15;
    uint32_t v24 = (int32_t)__asm_sti((int64_t)&g5); // 0x146dfd
    uint32_t v25 = (int32_t)v1 % 32; // 0x146dfd
    return ((v24 >> v25) % 2 ^ 1) << v25 | (-1 << v25) - 1 & v24;
}

// Address range: 0x146e31 - 0x146e72
int64_t function_146e31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x146e31
    int64_t v1; // 0x146e31
    __asm_out_134(-46, (int32_t)v1);
    *(int32_t *)a1 = *(int32_t *)a5;
    bool v2; // 0x146e31
    int64_t v3 = v2 ? -4 : 4; // 0x146e34
    int64_t v4 = v3 + a1 + (v2 ? -1 : 1); // 0x146e35
    int64_t v5 = unknown_52c5f43c(v4, v3 + a5); // 0x146e36
    __asm_out_134(31, (int32_t)v5);
    int32_t * v6 = (int32_t *)((v5 & 0xffffffff) - 0x76e691b3); // 0x146e5a
    *v6 = *v6 + (int32_t)v4;
    int64_t result = __asm_wait(); // 0x146e6b
    int32_t * v7 = (int32_t *)(v4 + 118); // 0x146e6e
    int64_t v8; // 0x146e31
    *v7 = *v7 + (int32_t)(int64_t)&v8;
    return result;
}

// Address range: 0x146ec0 - 0x146edf
int64_t function_146ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_4c1f0ec7(); // 0x146ec0
    *(int32_t *)a4 = (int32_t)a4 + (int32_t)a3;
    int64_t v2 = v1 + 0xc9009378; // 0x146ed2
    int64_t result = v2 & 0xffffffff; // 0x146ed2
    char * v3 = (char *)result; // 0x146ed7
    *v3 = *v3 - (char)v2;
    return result;
}

// Address range: 0x146ee8 - 0x146eea
int64_t function_146ee8(void) {
    // 0x146ee8
    int64_t result; // 0x146ee8
    return result;
}

// Address range: 0x146ef7 - 0x146ef9
int64_t function_146ef7(void) {
    // 0x146ef7
    int64_t result; // 0x146ef7
    return result;
}

// Address range: 0x147313 - 0x147393
int64_t function_147313(int64_t a1, int64_t a2) {
    // 0x147313
    bool v1; // 0x147313
    if (v1 || v1) {
        // 0x147392
        return a2 & 0xffffffff;
    }
    // 0x147315
    int64_t result; // 0x147313
    return result;
}

// Address range: 0x1473f4 - 0x14744f
int64_t function_1473f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1473f4
    int64_t v1; // 0x1473f4
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = v1 & 0xffffffff; // 0x1473f4
    uint64_t result = unknown_4aa43003(v4); // 0x1473f5
    char v5 = result / 256; // 0x1473fa
    int32_t v6 = a3;
    bool v7; // 0x1473f4
    if ((v5 & 64) != 0 || v5 < 0 != v7) {
        char v8 = v2 / 256 | a3; // 0x147443
        *(char *)-0x3af304b4 = *(char *)-0x3af304b4 + v8;
        *(int32_t *)a3 = v6;
        *(char *)v3 = *(char *)&v3 & v8;
        return result;
    }
    int32_t * v9 = (int32_t *)(v4 - 0x6407bbb6); // 0x14740a
    *v9 = *v9 + v6;
    int64_t result2 = result & -256 | 211; // 0x147410
    *(int32_t *)0x7015b11c = *(int32_t *)0x7015b11c + (int32_t)result2;
    int32_t * v10 = (int32_t *)v3; // 0x14741c
    *v10 = *v10 - (int32_t)v2;
    return result2;
}

// Address range: 0x147451 - 0x147465
int64_t function_147451(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffffb3577e60(); // 0x147457
    char v1 = *(char *)-0x6ee8a39d; // 0x14745c
    int64_t v2; // 0x147451
    *(char *)-0x6ee8a39d = v1 + (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x18d285 - 0x18d2e1
int64_t function_18d285(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v3; // 0x18d285
    bool v4; // 0x18d285
    if (v4) {
        v3 = function_18d21c();
    }
    int32_t * v5 = (int32_t *)(v3 + 0x3e10a80a); // 0x18d290
    int64_t v6; // 0x18d285
    *v5 = *v5 + (int32_t)v6;
    *(int32_t *)-0x36fe176939f69479 = (int32_t)unknown_e1d599e();
    int64_t v7 = unknown_ffffffffb1de1cb6(); // 0x18d2b0
    int64_t v8 = v2;
    *(int32_t *)v8 = *(int32_t *)&v2 + (int32_t)v8;
    char v9 = *(char *)((v6 & -256) - 0x3f11e702); // 0x18d2bc
    int64_t v10 = v1;
    *(int32_t *)v10 = *(int32_t *)&v1 + (int32_t)v10;
    unknown_ffffffffbafa26d5();
    unsigned char v11 = (char)(v7 + a4) % 32; // 0x18d2d6
    if (v11 != 0) {
        char * v12 = (char *)(a3 & -256 | (int64_t)((char)a3 - v9)); // 0x18d2d6
        unsigned char v13 = *v12; // 0x18d2d6
        *v12 = v13 >> 8 - v11 | v13 << v11;
    }
    return unknown_d064e0();
}

// Address range: 0x18d2ef - 0x18d2f1
int64_t function_18d2ef(void) {
    // 0x18d2ef
    int64_t v1; // 0x18d2ef
    return function_18d353(v1, v1, v1, v1);
}

// Address range: 0x18d351 - 0x18d352
int64_t function_18d351(void) {
    // 0x18d351
    int64_t result; // 0x18d351
    return result;
}

// Address range: 0x18d353 - 0x18d402
int64_t function_18d353(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x18d353
    int64_t v1; // 0x18d353
    int64_t v2 = v1;
    int64_t v3 = v1 + a2; // 0x18d356
    int64_t v4 = v3 & 0xffffffff; // 0x18d356
    char * v5 = (char *)(a4 + 31); // 0x18d358
    char v6 = a3 / 256; // 0x18d358
    *v5 = *v5 | v6;
    uint64_t v7 = a4 + 0xaa00;
    int64_t v8 = v7 & 0xff00 | a4 & -0xff01; // 0x18d35b
    int64_t v9 = __asm_iretd(); // 0x18d35e
    int64_t v10; // 0x18d353
    int64_t v11 = 256 * (int64_t)(v6 - *(char *)&v10) | a3 & -0xff01; // 0x18d35f
    *(int64_t *)v2 = v2 + 8;
    *(int32_t *)v9 = (int32_t)v9;
    int64_t v12 = unknown_2c0e6c6a(); // 0x18d364
    *(char *)(v12 + 0x3ef2add9) = (char)v10;
    int32_t * v13 = (int32_t *)(v4 - 0x17edb276 + 4 * v12); // 0x18d36f
    int32_t v14 = v12; // 0x18d36f
    *v13 = *v13 - v14;
    int32_t * v15 = (int32_t *)(4 * v11 + v2); // 0x18d376
    int32_t v16 = *v15 + (int32_t)v10; // 0x18d376
    unsigned char v17 = llvm_ctpop_i8((char)v16); // 0x18d376
    *v15 = v16;
    if (v17 % 2 == 0) {
        int32_t * v18 = (int32_t *)(a1 - 20); // 0x18d37b
        int32_t v19 = v8; // 0x18d37b
        *v18 = *v18 - v19;
        int64_t v20 = v10; // 0x18d37e
        int64_t result = (v20 - v7 / 256 + (int64_t)(-1 - (char)a3 < (char)v20)) % 256 | v20 & 0xffffff00; // 0x18d383
        int32_t * v21 = (int32_t *)(result + 58); // 0x18d385
        *v21 = *v21 + v19;
        return result;
    }
    char * v22 = (char *)((v8 & 0xffffffff) - 90); // 0x18d3f2
    unsigned char v23 = (char)v12; // 0x18d3f2
    *v22 = *v22 + v23;
    int64_t v24 = __asm_hlt(a1, v4, v11, v12 & 0xffffffff, v1); // 0x18d3f5
    unsigned char v25 = v23 % 32; // 0x18d3f6
    if (v25 != 0) {
        char * v26 = (char *)v24; // 0x18d3f6
        unsigned char v27 = *v26; // 0x18d3f6
        *v26 = v27 >> v25 | v27 << 8 - v25;
    }
    int32_t * v28 = (int32_t *)(v11 - 24); // 0x18d3f8
    *v28 = *v28 + v14;
    return v24 + v3 & 0xffffffff;
}

// Address range: 0x18d433 - 0x18d436
int64_t function_18d433(void) {
    // 0x18d433
    int64_t result; // 0x18d433
    return result;
}

// Address range: 0x18d46b - 0x18d473
int64_t function_18d46b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18d46b
    __asm_int1(a1, a2, a3);
    return function_ffffffff9f21a485();
}

// Address range: 0x18d483 - 0x18d484
int64_t function_18d483(int64_t a1) {
    // 0x18d483
    int64_t result; // 0x18d483
    return result;
}

// Address range: 0x18d519 - 0x18d51a
int64_t function_18d519(void) {
    // 0x18d519
    int64_t result; // 0x18d519
    return result;
}

// Address range: 0x18d523 - 0x18d526
int64_t function_18d523(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18d523
    int64_t result; // 0x18d523
    return result;
}

// Address range: 0x18d52c - 0x18d579
int64_t function_18d52c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18d52c
    int64_t v1; // 0x18d52c
    *(char *)a1 = (char)v1;
    bool v2; // 0x18d52c
    int64_t v3 = v2 ? -1 : 1; // 0x18d52e
    int64_t v4 = v3 + a1; // 0x18d52e
    int32_t * v5 = (int32_t *)(v1 + 0x6f01e899); // 0x18d53b
    int32_t v6 = v1; // 0x18d53b
    *v5 = *v5 + v6;
    char v7 = __asm_insb((int16_t)a3 % 256 | (int16_t)&g4); // 0x18d541
    *(char *)v4 = v7;
    *(int32_t *)v4 = v6;
    uint32_t v8 = (int32_t)(v3 + a2) + (int32_t)v1; // 0x18d548
    int64_t v9 = v8; // 0x18d548
    __asm_in_135(-5);
    unknown_795e1d53();
    if (v8 != 0) {
        // 0x18d56d
        return *(int64_t *)v9;
    }
    int64_t result = unknown_ffffffffd337815e(); // 0x18d558
    char * v10 = (char *)(v4 + (v2 ? 6 : 14)); // 0x18d55d
    *v10 = *v10 + (char)(v1 / 256);
    int32_t * v11 = (int32_t *)(result + 26); // 0x18d564
    *v11 = *v11 + (int32_t)v1;
    *(int64_t *)v9 = 0x919430;
    return result;
}

// Address range: 0x18d57a - 0x18d589
int64_t function_18d57a(int64_t a1, int64_t a2) {
    // 0x18d57a
    int64_t result; // 0x18d57a
    bool v1; // 0x18d57a
    if (v1) {
        int64_t v2; // 0x18d57a
        result = function_18d52c(a1, a2, v2);
    }
    // 0x18d57c
    return result;
}

// Address range: 0x18d589 - 0x18d58b
int64_t function_18d589(void) {
    // 0x18d589
    return function_18d519();
}

// Address range: 0x18d5a5 - 0x18d5c8
int64_t function_18d5a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18d5a5
    unknown_ffffffff9547ffab();
    int64_t v1 = a4 & -0xff01 | (int64_t)&g1; // 0x18d5ac
    unknown_9f9fdb4();
    int64_t v2; // 0x18d5a5
    __asm_outsd((int16_t)a3, (int32_t)v2);
    uint32_t v3 = (int32_t)v1 % 32; // 0x18d5b5
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)v1; // 0x18d5b5
        *v4 = *v4 << v3;
    }
    unknown_63c7ddc1();
    return function_ffffffffdf74d7b0();
}

// Address range: 0x18d5e2 - 0x18d5e5
int64_t function_18d5e2(void) {
    // 0x18d5e2
    int64_t result; // 0x18d5e2
    return result;
}

// Address range: 0x18d5f5 - 0x18d60a
int64_t function_18d5f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_4e19d7fb(); // 0x18d5f5
    int64_t v1; // 0x18d5f5
    uint32_t v2 = (int32_t)v1;
    *(int32_t *)a4 = v2 / 256 | 0x1000000 * v2;
    char * v3 = (char *)(result + 0x1e82444); // 0x18d602
    *v3 = *v3 | (char)a3;
    return result;
}

// Address range: 0x18d60a - 0x18d62b
int64_t function_18d60a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18d60a
    return unknown_301c661b();
}

// Address range: 0x18d64b - 0x18d6e6
int64_t function_18d64b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x18d64b
    int64_t v1; // 0x18d64b
    int64_t v2 = v1;
    int64_t v3 = a4;
    uint64_t v4 = unknown_ffffffff90097c57() / 256; // 0x18d656
    int64_t v5 = a6 & -0xff01; // 0x18d656
    int32_t v6 = a2;
    *(int32_t *)a2 = v6 - 0x176f2aa3;
    uint32_t v7 = (int32_t)(256 * (a6 / 256 + (int64_t)((char)v2 < 190) + v4) & 0xff00 | v5) + (int32_t)a1; // 0x18d661
    int64_t v8 = v7; // 0x18d661
    if (v7 == 0) {
        int32_t * v9 = (int32_t *)((v5 | 0x8600) + 0x9647dc8); // 0x18d667
        uint32_t v10 = *v9; // 0x18d667
        uint32_t v11 = v10 + (int32_t)v1; // 0x18d667
        *v9 = v11;
        return __asm_hlt(v8, a2, 0xac01e85f, v3, 2 * a5 & 0xfffffffe | (int64_t)(v11 < v10));
    }
    int32_t * v12 = (int32_t *)(v8 - 102); // 0x18d6bf
    int32_t v13 = (v2 + 66) % 256 | v2 & 0xffffff00; // 0x18d6bf
    *v12 = *v12 + v13;
    *(char *)v3 = *(char *)&v3 + (char)v4;
    uint64_t v14 = unknown_7a0e91cf(); // 0x18d6c9
    char * v15 = (char *)(a2 + 0x8a4348b); // 0x18d6ce
    *v15 = *v15 + (char)(v14 / 256);
    int32_t * v16 = (int32_t *)(v14 - 24); // 0x18d6d4
    *v16 = *v16 + v6;
    int32_t * v17 = (int32_t *)(v14 - 57); // 0x18d6d7
    *v17 = *v17 + v13;
    int16_t v18 = 256 * (int16_t)v14 >> 8; // 0x18d6dd
    int16_t v19 = v18 * v18; // 0x18d6dd
    return v14 & -0x10000 | (int64_t)(v19 & 0x7f00) | (int64_t)((v19 + 231) % 256);
}

// Address range: 0x18d714 - 0x18d715
int64_t function_18d714(void) {
    // 0x18d714
    int64_t result; // 0x18d714
    return result;
}

// Address range: 0x18d72e - 0x18d733
int64_t function_18d72e(void) {
    // 0x18d72e
    return function_fffffffff553b44f();
}

// Address range: 0x18d73a - 0x18d791
int64_t function_18d73a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x18d73a
    char * v4 = (char *)(a2 - 0x28c57011 + 8 * v3); // 0x18d73a
    *v4 = *v4 + (char)v3;
    int32_t v5 = v3; // 0x18d741
    *(int32_t *)0x629896049bcf0068 = v5;
    char * v6 = (char *)(v3 - 44); // 0x18d74a
    *v6 = 2 * *v6;
    *(int32_t *)v3 = 2 * v5;
    *(char *)a2 = *(char *)&v2 ^ (char)(a4 / 256);
    *(char *)0xb4093d90 = *(char *)0xb4093d90 + (char)(v3 / 256);
    bool v7; // 0x18d73a
    int64_t v8 = (v7 ? -4 : 4) + a1; // 0x18d773
    uint64_t v9 = v1;
    *(char *)v9 = *(char *)&v1 ^ (char)(v9 / 256);
    int32_t * v10 = (int32_t *)(v8 + 70); // 0x18d777
    *v10 = *v10 | 53;
    char v11 = __asm_insb((int16_t)(*(int32_t *)(a4 + 78) + (int32_t)a3)); // 0x18d78d
    *(char *)v8 = v11;
    return (v3 ^ v3) & 0xffffffff;
}

// Address range: 0x18d7c4 - 0x18d7c5
int64_t function_18d7c4(int64_t a1) {
    // 0x18d7c4
    int64_t result; // 0x18d7c4
    return result;
}

// Address range: 0x18d7c9 - 0x18d7d5
int64_t function_18d7c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18d7c9
    int64_t result; // 0x18d7c9
    *(char *)-0x77bdff97ed339802 = (char)result;
    return result;
}

// Address range: 0x18d7d9 - 0x18d7e0
int64_t function_18d7d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18d7d9
    int64_t result; // 0x18d7d9
    return result;
}

// Address range: 0x18d7f7 - 0x18d7f8
int64_t function_18d7f7(void) {
    // 0x18d7f7
    int64_t result; // 0x18d7f7
    return result;
}

// Address range: 0x18d832 - 0x18d83e
int64_t function_18d832(int64_t a1) {
    // 0x18d832
    *(char *)a1 = -8;
    return __asm_sti(a1);
}

// Address range: 0x18d83f - 0x18d841
int64_t function_18d83f(void) {
    // 0x18d83f
    return function_18d7f7();
}

// Address range: 0x18d85d - 0x18d880
int64_t function_18d85d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18d85d
    int64_t v1; // 0x18d85d
    *(int32_t *)-0x1aace56cff971b45 = (int32_t)v1;
    int64_t result = unknown_68a81070(); // 0x18d86a
    char * v2 = (char *)(v1 + (2 * a2 & 0xfffffffe)); // 0x18d86f
    *v2 = *v2 + (char)a3;
    *(char *)a3 = (char)result;
    int64_t v3; // 0x18d85d
    *(char *)v3 = *(char *)&v3 + (char)a1;
    return result;
}

// Address range: 0x18d88f - 0x18d893
int64_t function_18d88f(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 55); // 0x18d88f
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x18d88f
    return result;
}

// Address range: 0x18d8dc - 0x18d903
int64_t function_18d8dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18d8dc
    int64_t v1; // 0x18d8dc
    int64_t v2 = v1;
    bool v3; // 0x18d8dc
    int64_t v4 = v3 ? -4 : 4; // 0x18d8e9
    *(int32_t *)v2 = (int32_t)v2 - 1;
    return __asm_hlt(v4 + a1, v4 + a2, a3 & 0xff00 & 256 * v1 | a3 & -0xff01, v1, v1);
}

// Address range: 0x18d910 - 0x18d912
int64_t function_18d910(void) {
    // 0x18d910
    int64_t v1; // 0x18d910
    return function_18d967(v1, v1, v1, v1);
}

// Address range: 0x18d938 - 0x18d939
int64_t function_18d938(void) {
    // 0x18d938
    int64_t result; // 0x18d938
    return result;
}

// Address range: 0x18d967 - 0x18d9ac
int64_t function_18d967(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18d967
    bool v1; // 0x18d967
    uint32_t v2 = (int32_t)v1; // 0x18d967
    int32_t * v3 = (int32_t *)(a2 - 0x49d0ffd2); // 0x18d978
    *v3 = *v3 + 0x567d890;
    int32_t v4 = v2 + 8; // 0x18d97e
    char * v5 = (char *)(a4 + 0x13d0067); // 0x18d98d
    *v5 = 2 * *v5;
    char * v6 = (char *)(a1 + 37); // 0x18d998
    unsigned char v7 = *v6; // 0x18d998
    unsigned char v8 = (char)v4; // 0x18d998
    char v9 = v7 + v8; // 0x18d998
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x18d998
    *v6 = v9;
    int64_t v11 = 0x4000 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | (int64_t)(v9 < v7) | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v7 % 16 + v8 % 16 > 15) | 4 * (int64_t)(v10 % 2 == 0) | 2048 * (int64_t)(((v9 ^ v7) & (v9 ^ v8)) < 0) | 2; // 0x18d99b
    *(int64_t *)((int64_t)*(int32_t *)-0x6d052c1e52e8e389 - 8) = v11;
    *(int32_t *)a1 = v4;
    int64_t result = unknown_3d1ac1a4((v1 ? -4 : 4) + a1, *(int64_t *)(int64_t)v2, v11); // 0x18d99e
    int32_t * v12 = (int32_t *)(a4 - 49); // 0x18d9a3
    int64_t v13; // 0x18d967
    *v12 = *v12 + (int32_t)v13;
    return result;
}

// Address range: 0x18da26 - 0x18da29
int64_t function_18da26(void) {
    // 0x18da26
    int64_t result; // 0x18da26
    return result;
}

// Address range: 0x18da86 - 0x18da87
int64_t function_18da86(void) {
    // 0x18da86
    int64_t result; // 0x18da86
    return result;
}

// Address range: 0x18daa4 - 0x18daa5
int64_t function_18daa4(int64_t a1) {
    // 0x18daa4
    int64_t result; // 0x18daa4
    return result;
}

// Address range: 0x18dacc - 0x18dacd
int64_t function_18dacc(void) {
    // 0x18dacc
    int64_t result; // 0x18dacc
    return result;
}

// Address range: 0x18dad8 - 0x18db19
int64_t function_18dad8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x18dad8
    int64_t v1; // 0x18dad8
    int64_t v2; // 0x18dad8
    if ((int32_t)v2 != (int32_t)v2) {
        v1 = function_18da86();
    }
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(v2 - 82); // 0x18dae4
    int32_t v5 = a2; // 0x18dae4
    *v4 = *v4 + v5;
    int64_t v6; // 0x18dad8
    int32_t * v7 = (int32_t *)(v6 + 0x2f03443c); // 0x18dae8
    *v7 = *v7 + (int32_t)v2;
    char v8 = *(char *)&v6; // 0x18daf5
    int32_t * v9 = (int32_t *)(2 * v6); // 0x18db06
    *v9 = *v9 | v5;
    int64_t result = a4 & 0xffffffff; // 0x18db09
    char * v10 = (char *)(result + 35); // 0x18db0a
    *v10 = *v10 + (char)(v6 / 256);
    int32_t * v11 = (int32_t *)((v3 & 0xffffff00 | (int64_t)(v8 | (char)v3 | -74)) - 0x334e70b); // 0x18db0f
    *v11 = *v11 + (int32_t)v6;
    return result;
}

// Address range: 0x18db1d - 0x18db23
int64_t function_18db1d(int64_t a1) {
    // 0x18db1d
    return unknown_ffffffffe10b3c23(a1);
}

// Address range: 0x18dc0f - 0x18dc12
int64_t function_18dc0f(int64_t a1) {
    // 0x18dc0f
    int64_t result; // 0x18dc0f
    return result;
}

// Address range: 0x18dc61 - 0x18dc6c
int64_t function_18dc61(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18dc61
    int64_t result; // 0x18dc61
    return result;
}
