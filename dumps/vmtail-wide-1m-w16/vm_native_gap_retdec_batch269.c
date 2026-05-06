/*
 * Targeted RetDec C for native executable gap queue batch 269.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x21dc66-0x21de66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21e066-0x21e266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21e266-0x21e466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a6575-0x2a6775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a6775-0x2a6975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a6975-0x2a6b75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a6b75-0x2a6d75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a6d75-0x2a6f75 rank=- name=- kind=- bytes=- uncovered=-
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
uint32_t __readfsdword(int64_t offset);
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
int864_t __asm_fnsave(void);
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

int64_t function_2130ca1();
int64_t function_21dc66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21dd86(int64_t a1);
int64_t function_21dd99(void);
int64_t function_21ddb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21e066(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21e076(void);
int64_t function_21e086(void);
int64_t function_21e0ed(int64_t a1);
int64_t function_21e0f1(void);
int64_t function_21e164(void);
int64_t function_21e1fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21e26b(void);
int64_t function_21e274(void);
int64_t function_21e287(void);
int64_t function_21e2e8(void);
int64_t function_21e31d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21e377(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21e3c9(void);
int64_t function_21e41b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a6575(void);
int64_t function_2a65a1(int64_t a1);
int64_t function_2a6622(int64_t a1);
int64_t function_2a6671(void);
int64_t function_2a66ea(void);
int64_t function_2a66fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a6767(void);
int64_t function_2a678d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a67c0(void);
int64_t function_2a67cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a68e9(int64_t a1);
int64_t function_2a6929(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2a695e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a6960(void);
int64_t function_2a6998(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2a699d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a6ad1(void);
int64_t function_2a6b0d(void);
int64_t function_2a6b4c(int64_t a1);
int64_t function_2a6b7a(void);
int64_t function_2a6ba5(int64_t a1);
int64_t function_2a6bd6(int64_t a1);
int64_t function_2a6c06(void);
int64_t function_2a6c31(int64_t a1);
int64_t function_2a6c82(int64_t a1);
int64_t function_2a6cb6(void);
int64_t function_2a6d0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a6d9f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a6db1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a6de7(void);
int64_t function_2a6e18(int64_t a1);
int64_t function_2a6e20(int64_t a1, int64_t a2);
int64_t function_2a6e44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a6e67(void);
int64_t function_2a6e88(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2a6eb3(void);
int64_t function_2a6ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a6f46(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d2a75e3();
int64_t function_af9df7b();
int64_t function_ffffffff8e2cd786();
int64_t function_ffffffffb23fcd65();
int64_t function_ffffffffb47f9378();
int64_t function_ffffffffb87ef66f();
int64_t function_ffffffffe85cc37f();
int64_t unknown_102f5559();
int64_t unknown_23309877();
int64_t unknown_2d1a13fc();
int64_t unknown_3a2dc568();
int64_t unknown_3ab792f5();
int64_t unknown_5998f910();
int64_t unknown_5e3f9870();
int64_t unknown_72d2d295();
int64_t unknown_7611151e();
int64_t unknown_767002b7();
int64_t unknown_ffffffff84f7ddae();
int64_t unknown_ffffffff8c1c29ab();
int64_t unknown_ffffffff9d86fd56();
int64_t unknown_ffffffffa82dfd86();
int64_t unknown_ffffffffbdb9e862();
int64_t unknown_ffffffffc8457551();
int64_t unknown_ffffffffd4a7135a();
int64_t unknown_ffffffffd7cd0d8e();
int64_t unknown_ffffffffe4c48038();

// Address range: 0x21dc66 - 0x21dd4f
int64_t function_21dc66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x21dc66
    *(int32_t *)-0x4f69bffec2ff660c = (int32_t)v2;
    int64_t result = v2 & 0x83b50e4c; // 0x21dc6f
    int32_t * v3 = (int32_t *)result; // 0x21dc7c
    int32_t v4 = *v3 + 1; // 0x21dc7c
    *v3 = v4;
    if (v4 >= 0) {
        // 0x21dcbe
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)result;
        return result;
    }
    int32_t * v5 = (int32_t *)(result - 12); // 0x21dc81
    int32_t v6 = *v5; // 0x21dc81
    int32_t v7 = v2; // 0x21dc81
    int32_t v8 = v6 + v7; // 0x21dc81
    *v5 = v8;
    if (((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x21dc86
        *(char *)a1 = (char)result;
        return result;
    }
    int32_t * v9 = (int32_t *)(2 * a2 - 0x9cfcf2c + v2); // 0x21dcea
    *v9 = *v9 + (int32_t)result;
    int64_t v10 = __asm_sti(a1, a2, a3); // 0x21dcf1
    v1 = 0x4e5109e7;
    int64_t v11 = 9; // 0x21dcfb
    bool v12; // 0x21dc66
    int64_t v13 = unknown_2d1a13fc((v12 ? -4 : 4) + a1); // 0x21dcfb
    int64_t v14 = a2; // 0x21dcfb
    if ((int32_t)a1 == (int32_t)v10) {
        unsigned char v15 = *(char *)0x9752f201; // 0x21dcfd
        int64_t v16 = (231 - a3 + (int64_t)(v15 > (char)((int64_t)&g2 >> 8))) % 256 | 0x4e510900; // 0x21dd04
        v1 = v16;
        int64_t v17 = unknown_5998f910(); // 0x21dd0a
        char * v18 = (char *)v16; // 0x21dd3c
        *v18 = (char)v17 & -44 & *v18;
        v11 = v1 / 256 % 256;
        v13 = v17 & -128;
        v14 = v2 & 0xffffffff;
    }
    int64_t v19 = v13 & -256 | v11; // 0x21dd42
    int32_t * v20 = (int32_t *)(v19 - 0x7fffdde7); // 0x21dd44
    *v20 = *v20 + (int32_t)a3;
    char * v21 = (char *)(v14 - 116); // 0x21dd4a
    *v21 = *v21 + (char)a3;
    return (int64_t)(*(int32_t *)v19 + (int32_t)v19);
}

// Address range: 0x21dd86 - 0x21dd93
int64_t function_21dd86(int64_t a1) {
    // 0x21dd86
    int64_t v1; // 0x21dd86
    *(char *)a1 = (char)v1;
    __asm_in((char)a1);
    return function_af9df7b();
}

// Address range: 0x21dd99 - 0x21dd9a
int64_t function_21dd99(void) {
    // 0x21dd99
    int64_t result; // 0x21dd99
    return result;
}

// Address range: 0x21ddb6 - 0x21ddd9
int64_t function_21ddb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21ddb6
    int64_t v1; // 0x21ddb6
    int32_t * v2 = (int32_t *)(v1 + 0x5f8a3a13); // 0x21ddbd
    uint32_t v3 = *v2; // 0x21ddbd
    uint32_t v4 = v3 + (int32_t)a3; // 0x21ddbd
    *v2 = v4;
    uint32_t v5 = *(int32_t *)-0x25be1a22; // 0x21ddcd
    *(int32_t *)-0x25be1a22 = v5 / 32 | 0x10000000 * v5 | 0x8000000 * (int32_t)(v4 < v3);
    *(int32_t *)a2 = -119 * *(int32_t *)(a2 - 16);
    return v1 & -256 | (int64_t)*(char *)0x1e81ad569c26a31;
}

// Address range: 0x21e066 - 0x21e073
int64_t function_21e066(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 86 + 2 * a4); // 0x21e066
    int64_t v2; // 0x21e066
    *v1 = *v1 + (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x21e076 - 0x21e077
int64_t function_21e076(void) {
    // 0x21e076
    int64_t result; // 0x21e076
    return result;
}

// Address range: 0x21e086 - 0x21e089
int64_t function_21e086(void) {
    // 0x21e086
    int64_t result; // 0x21e086
    return result;
}

// Address range: 0x21e0ed - 0x21e0ee
int64_t function_21e0ed(int64_t a1) {
    // 0x21e0ed
    int64_t result; // 0x21e0ed
    return result;
}

// Address range: 0x21e0f1 - 0x21e0f5
int64_t function_21e0f1(void) {
    // 0x21e0f1
    int64_t result; // 0x21e0f1
    return result;
}

// Address range: 0x21e164 - 0x21e167
int64_t function_21e164(void) {
    // 0x21e164
    int64_t result; // 0x21e164
    return result;
}

// Address range: 0x21e1fe - 0x21e202
int64_t function_21e1fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21e1fe
    int64_t result; // 0x21e1fe
    return result;
}

// Address range: 0x21e26b - 0x21e26c
int64_t function_21e26b(void) {
    // 0x21e26b
    int64_t result; // 0x21e26b
    return result;
}

// Address range: 0x21e274 - 0x21e275
int64_t function_21e274(void) {
    // 0x21e274
    int64_t result; // 0x21e274
    return result;
}

// Address range: 0x21e287 - 0x21e28a
int64_t function_21e287(void) {
    // 0x21e287
    return function_21e26b();
}

// Address range: 0x21e2e8 - 0x21e2ec
int64_t function_21e2e8(void) {
    // 0x21e2e8
    int64_t v1; // 0x21e2e8
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x21e31d - 0x21e337
int64_t function_21e31d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21e31d
    int64_t v1; // 0x21e31d
    uint64_t v2 = v1;
    char v3 = *(char *)(a3 - 73); // 0x21e320
    int64_t result = (256 * (int64_t)(v3 & (char)(v2 / 256)) | v2 & 0xffff00ff) ^ 0xab013d05; // 0x21e323
    char * v4 = (char *)result; // 0x21e328
    char v5 = result; // 0x21e328
    *v4 = *v4 + v5;
    char * v6 = (char *)(v1 + 13); // 0x21e32a
    *v6 = *v6 + (char)(v1 / 256);
    *v4 = *v4 + v5;
    return result;
}

// Address range: 0x21e377 - 0x21e3af
int64_t function_21e377(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21e377
    int64_t v1; // 0x21e377
    int32_t * v2 = (int32_t *)(v1 + 0x73a67608); // 0x21e37e
    *v2 = *v2 | (int32_t)a3;
    float80_t v3; // 0x21e377
    *(int16_t *)(a3 - 0x72d169c1) = (int16_t)v3;
    __asm_out_133((int16_t)a3, (char)v1);
    int64_t v4 = __asm_hlt(); // 0x21e38f
    int64_t v5; // 0x21e377
    *(char *)a4 = *(char *)&v5 ^ -74;
    return v4 & 0xffffff00 ^ 0x62410000;
}

// Address range: 0x21e3c9 - 0x21e3ce
int64_t function_21e3c9(void) {
    // 0x21e3c9
    return function_ffffffffb87ef66f();
}

// Address range: 0x21e41b - 0x21e44b
int64_t function_21e41b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21e41b
    int64_t v1; // 0x21e41b
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    uint32_t v3 = *(int32_t *)-0x47b1fa645cb015d4; // 0x21e41d
    int64_t result = v3; // 0x21e41d
    if (a4 == 0) {
        // 0x21e478
        return result;
    }
    uint32_t v4 = *(int32_t *)result & v3; // 0x21e42c
    int64_t result2 = v4; // 0x21e42c
    int32_t v5 = *(int32_t *)-0x540fc2c3 + (int32_t)a5; // 0x21e436
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x21e436
    *(int32_t *)-0x540fc2c3 = v5;
    if (v6 % 2 != 0) {
        // 0x21e478
        return result2;
    }
    // 0x21e43e
    if (a4 == 1 || v5 == 0) {
        // 0x21e440
        __asm_out_134((int16_t)a3, v4);
        return result2;
    }
    // 0x21e478
    return result2;
}

// Address range: 0x2a6575 - 0x2a6579
int64_t function_2a6575(void) {
    // 0x2a6575
    int64_t v1; // 0x2a6575
    int64_t v2 = v1;
    return (v2 + 110) % 256 | v2 & -256;
}

// Address range: 0x2a65a1 - 0x2a65a4
int64_t function_2a65a1(int64_t a1) {
    // 0x2a65a1
    int64_t result; // 0x2a65a1
    return result;
}

// Address range: 0x2a6622 - 0x2a6625
int64_t function_2a6622(int64_t a1) {
    // 0x2a6622
    int64_t result; // 0x2a6622
    return result;
}

// Address range: 0x2a6671 - 0x2a6672
int64_t function_2a6671(void) {
    // 0x2a6671
    int64_t result; // 0x2a6671
    return result;
}

// Address range: 0x2a66ea - 0x2a66fa
int64_t function_2a66ea(void) {
    // 0x2a66ea
    bool v1; // 0x2a66ea
    if (v1) {
        function_2a6671();
    }
    // 0x2a66ec
    __asm_wait();
    unknown_3ab792f5();
    return function_ffffffff8e2cd786();
}

// Address range: 0x2a66fa - 0x2a670a
int64_t function_2a66fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a66fa
    int64_t result; // 0x2a66fa
    return result;
}

// Address range: 0x2a6767 - 0x2a676c
int64_t function_2a6767(void) {
    // 0x2a6767
    return function_ffffffffb23fcd65();
}

// Address range: 0x2a678d - 0x2a67ae
int64_t function_2a678d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a678d
    int64_t v1; // 0x2a678d
    uint64_t v2 = v1 + 0xbb63ebff; // 0x2a678d
    *(char *)0x5983679e = (char)((uint64_t)v1 / 256);
    char v3 = *(char *)((v2 & 0xffffffff) - 0x7d371868); // 0x2a67a5
    return 256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & 0xffff00ff;
}

// Address range: 0x2a67c0 - 0x2a67c7
int64_t function_2a67c0(void) {
    // 0x2a67c0
    return function_3d2a75e3();
}

// Address range: 0x2a67cd - 0x2a67ee
int64_t function_2a67cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a67cd
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x2a67cd
    int64_t v1 = result;
    *(char *)v1 = *(char *)&result + (char)v1;
    return result;
}

// Address range: 0x2a68e9 - 0x2a68ea
int64_t function_2a68e9(int64_t a1) {
    // 0x2a68e9
    int64_t result; // 0x2a68e9
    return result;
}

// Address range: 0x2a6929 - 0x2a695d
int64_t function_2a6929(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2a6929
    int64_t v1; // 0x2a6929
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t v2 = unknown_ffffffffe4c48038(); // 0x2a6932
    int64_t v3 = a4 & -0xff01 | (int64_t)"many_avx512"; // 0x2a6938
    int64_t v4 = (v3 - v1) % 256 | v3 & -256; // 0x2a693a
    int16_t v5 = v2; // 0x2a693c
    int16_t v6 = (int16_t)*(char *)v2; // 0x2a693c
    uint64_t v7 = (int64_t)(v5 / v6) + ((int64_t)"many_avx512" >> 8); // 0x2a693e
    int32_t * v8 = (int32_t *)(v4 - 10); // 0x2a6940
    *v8 = *v8 + (int32_t)v4;
    *(int64_t *)(256 * v1 & 0xff00 | v1) = a6;
    *(char *)-0x5dead149ffeca2cc = (char)v7;
    __asm_out_135(23, (int32_t)(v2 & 0xffff0000 | (int64_t)(256 * (v5 % v6)) | v7 % 256));
    int32_t * v9 = (int32_t *)(unknown_ffffffff9d86fd56() + 0x33363a0d); // 0x2a6955
    int64_t v10; // bp+16, 0x2a6929
    *v9 = *v9 + (int32_t)(int64_t)&v10;
    return function_2a6960();
}

// Address range: 0x2a695e - 0x2a6960
int64_t function_2a695e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a695e
    int64_t result; // 0x2a695e
    return result;
}

// Address range: 0x2a6960 - 0x2a6963
int64_t function_2a6960(void) {
    // 0x2a6960
    int64_t result; // 0x2a6960
    return result;
}

// Address range: 0x2a6998 - 0x2a699a
int64_t function_2a6998(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x2a6998
    int64_t result; // 0x2a6998
    *(char *)a3 = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x2a699d - 0x2a69b4
int64_t function_2a699d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a699d
    unknown_767002b7();
    int64_t result = unknown_ffffffff84f7ddae(); // 0x2a69a8
    int64_t v1; // 0x2a699d
    int32_t * v2 = (int32_t *)(v1 - 0x32411608); // 0x2a69ad
    *v2 = (int32_t)((int32_t)v1 < 0x61f888b4) - (int32_t)a2 + *v2;
    return result;
}

// Address range: 0x2a6ad1 - 0x2a6ad4
int64_t function_2a6ad1(void) {
    // 0x2a6ad1
    int64_t result; // 0x2a6ad1
    return result;
}

// Address range: 0x2a6b0d - 0x2a6b13
int64_t function_2a6b0d(void) {
    // 0x2a6b0d
    return function_2130ca1();
}

// Address range: 0x2a6b4c - 0x2a6b66
int64_t function_2a6b4c(int64_t a1) {
    // 0x2a6b4c
    int64_t v1; // 0x2a6b4c
    *(int32_t *)0x1be8d09efacb01e8 = (int32_t)v1;
    return unknown_ffffffffbdb9e862();
}

// Address range: 0x2a6b7a - 0x2a6b7f
int64_t function_2a6b7a(void) {
    // 0x2a6b7a
    return function_ffffffffb47f9378();
}

// Address range: 0x2a6ba5 - 0x2a6bab
int64_t function_2a6ba5(int64_t a1) {
    // 0x2a6ba5
    return unknown_ffffffff8c1c29ab(a1);
}

// Address range: 0x2a6bd6 - 0x2a6bd7
int64_t function_2a6bd6(int64_t a1) {
    // 0x2a6bd6
    int64_t result; // 0x2a6bd6
    return result;
}

// Address range: 0x2a6c06 - 0x2a6c09
int64_t function_2a6c06(void) {
    // 0x2a6c06
    int64_t result; // 0x2a6c06
    return result;
}

// Address range: 0x2a6c31 - 0x2a6c36
int64_t function_2a6c31(int64_t a1) {
    // 0x2a6c31
    int64_t v1; // 0x2a6c31
    return v1 ^ 186;
}

// Address range: 0x2a6c82 - 0x2a6c85
int64_t function_2a6c82(int64_t a1) {
    // 0x2a6c82
    int64_t result; // 0x2a6c82
    return result;
}

// Address range: 0x2a6cb6 - 0x2a6cb7
int64_t function_2a6cb6(void) {
    // 0x2a6cb6
    int64_t result; // 0x2a6cb6
    return result;
}

// Address range: 0x2a6d0e - 0x2a6d96
int64_t function_2a6d0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a1;
    int64_t v3; // 0x2a6d0e
    *(int32_t *)a3 = (int32_t)v3 + (int32_t)a3;
    int32_t v4 = a2; // 0x2a6d10
    int32_t v5 = v4 & 0x4f0b707; // 0x2a6d10
    bool v6; // 0x2a6d0e
    int64_t v7 = 64 * (int64_t)(v5 == 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v5) % 2 == 0) | 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 2; // bp-8, 0x2a6d17
    int32_t * v8 = (int32_t *)unknown_7611151e(); // 0x2a6d1f
    int32_t v9 = *v8 | 24; // 0x2a6d1f
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x2a6d1f
    *v8 = v9;
    if (v10 % 2 != 0) {
        function_2a6cb6();
    }
    int32_t v11 = *(int32_t *)&v1 | (int32_t)(int64_t)&v7; // 0x2a6d1d
    int64_t v12 = function_2a6d0e(v2, a2, a3, v1); // 0x2a6d24
    int64_t v13; // 0x2a6d0e
    int32_t * v14 = (int32_t *)(v13 - 0x7fffd372); // 0x2a6d26
    *v14 = *v14 + (int32_t)v12;
    char * v15 = (char *)(a2 - 0x17fffdb0); // 0x2a6d2c
    *v15 = *v15 + (char)v1;
    int32_t * v16 = (int32_t *)(a3 + 1); // 0x2a6d32
    *v16 = *v16 + v11;
    *(char *)v2 = *(char *)&v2 + (char)v12;
    uint64_t v17 = __asm_iretd(); // 0x2a6d38
    uint32_t v18 = (int32_t)v17 >> 31; // 0x2a6d39
    char * v19 = (char *)(8 * v2 + v1); // 0x2a6d3a
    *v19 = *v19 + (char)(v17 / 256);
    *(int32_t *)v13 = *(int32_t *)&v13 + v4;
    char * v20 = (char *)(int64_t)v18; // 0x2a6d3f
    unsigned char v21 = *v20; // 0x2a6d3f
    *v20 = v21 / 2 | 128 * v21;
    __readfsdword(v2 - 24);
    int32_t * v22 = (int32_t *)(a2 - 0x3958b63f); // 0x2a6d45
    *v22 = *v22 + v4;
    *(int32_t *)v2 = __asm_insd((int16_t)v18);
    unsigned char v23 = (char)v1;
    unsigned char v24 = v23 % 32; // 0x2a6d4c
    if (v24 != 0) {
        *(char *)v1 = v23 >> v24;
    }
    unknown_102f5559();
    char * v25 = (char *)(4 * v13 - 0x65cab807); // 0x2a6d5b
    char v26 = v17; // 0x2a6d5b
    *v25 = *v25 + v26;
    char * v27 = (char *)(unknown_3a2dc568() & -256 | (int64_t)__asm_in(126)); // 0x2a6d69
    *v27 = *v27 + 16;
    unknown_23309877();
    int32_t * v28 = (int32_t *)(v2 - 54); // 0x2a6d76
    *v28 = v11 + 8 + *v28;
    unsigned char v29 = *(char *)(a2 + 0x5e013886) & v26; // 0x2a6d79
    int64_t v30 = v17 & 0xffffff00; // 0x2a6d79
    unknown_ffffffffa82dfd86();
    int32_t v31 = *(int32_t *)((v30 | (int64_t)v29) - 42); // 0x2a6d85
    char v32 = *(char *)((int64_t)(-0x340e9544 * v31) + 77); // 0x2a6d8c
    int64_t result = unknown_72d2d295(); // 0x2a6d8f
    __asm_out_134((int16_t)(v30 | (int64_t)(v32 + v29)), (int32_t)result);
    return result;
}

// Address range: 0x2a6d9f - 0x2a6da9
int64_t function_2a6d9f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a6d9f
    int64_t result; // 0x2a6d9f
    return result;
}

// Address range: 0x2a6db1 - 0x2a6dbc
int64_t function_2a6db1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a6db1
    int64_t v1; // 0x2a6db1
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = 2 * v2; // 0x2a6db1
    bool v4; // 0x2a6db1
    uint32_t v5 = v3 | (int32_t)v4; // 0x2a6db1
    int64_t result = v5; // 0x2a6db1
    char * v6 = (char *)(result - 0x181e39e6); // 0x2a6db3
    *v6 = *v6 - (char)a4 + (char)(v4 ? v5 <= v2 : v3 < v2);
    return result;
}

// Address range: 0x2a6de7 - 0x2a6de8
int64_t function_2a6de7(void) {
    // 0x2a6de7
    int64_t result; // 0x2a6de7
    return result;
}

// Address range: 0x2a6e18 - 0x2a6e19
int64_t function_2a6e18(int64_t a1) {
    // 0x2a6e18
    int64_t result; // 0x2a6e18
    return result;
}

// Address range: 0x2a6e20 - 0x2a6e25
int64_t function_2a6e20(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 - 114); // 0x2a6e21
    int64_t result; // 0x2a6e20
    *v1 = *v1 | (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2a6e44 - 0x2a6e65
int64_t function_2a6e44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a6e44
    int64_t v1; // 0x2a6e44
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x2a6e4a
    int64_t result; // 0x2a6e44
    if (v3 != 0) {
        result = function_2a6de7();
    }
    int32_t * v4 = (int32_t *)(result + 78); // 0x2a6e4e
    *v4 = *v4 + (int32_t)v3;
    int32_t v5 = *(int32_t *)-0x1ce75767; // 0x2a6e58
    *(int32_t *)-0x1ce75767 = 2 * v5 | (int32_t)(v5 < 0);
    int32_t * v6 = (int32_t *)(a4 + 46); // 0x2a6e5f
    *v6 = *(int32_t *)(v2 + 0x1315bd82) + (int32_t)v2 + *v6;
    return result;
}

// Address range: 0x2a6e67 - 0x2a6e6a
int64_t function_2a6e67(void) {
    // 0x2a6e67
    int64_t result; // 0x2a6e67
    return result;
}

// Address range: 0x2a6e88 - 0x2a6ea8
int64_t function_2a6e88(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)unknown_ffffffffd7cd0d8e(); // 0x2a6e8d
    int64_t v2; // 0x2a6e88
    return __asm_sti(a1, a2, a3 - v2 + (int64_t)(v1 < (char)(a4 / 256)) & 0xffffffff) + 0xef7fd0c6 & 0xffffffff;
}

// Address range: 0x2a6eb3 - 0x2a6eb4
int64_t function_2a6eb3(void) {
    // 0x2a6eb3
    int64_t result; // 0x2a6eb3
    return result;
}

// Address range: 0x2a6ed6 - 0x2a6f00
int64_t function_2a6ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a6ed6
    int64_t v1; // 0x2a6ed6
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 - 0x6620b9c); // 0x2a6ed7
    *v3 = *v3 - (int32_t)v2;
    *(char *)-0x2fa8f01a = *(char *)-0x2fa8f01a + (char)(v2 / 256);
    return function_2a6eb3();
}

// Address range: 0x2a6f46 - 0x2a6f72
int64_t function_2a6f46(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    bool v2; // 0x2a6f46
    if (!v2) {
        // 0x2a6f67
        return unknown_5e3f9870();
    }
    // 0x2a6f48
    unknown_ffffffffc8457551();
    int64_t v3; // 0x2a6f46
    *(int32_t *)a3 = (int32_t)v3;
    unknown_ffffffffd4a7135a();
    *(char *)a1 = *(char *)&v1;
    int64_t v4 = v2 ? -1 : 1; // 0x2a6f59
    __asm_sti(v4 + a1, v1 + v4, a3);
    return function_ffffffffe85cc37f();
}
