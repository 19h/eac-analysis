/*
 * Targeted RetDec C for native executable gap queue batch 502.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x19a285-0x19a485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d825a-0x1d845a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d845a-0x1d865a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d865a-0x1d885a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d885a-0x1d8a5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d8a5a-0x1d8c5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4740ee-0x4742ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4742ee-0x4744ee rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_138(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writefsbyte(int64_t offset, uint8_t value);
void __writegsbyte(int64_t offset, uint8_t value);
void __writegsdword(int64_t offset, uint32_t value);
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
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
int128_t __asm_maxps(int128_t left, int128_t right);
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

int64_t function_19a285(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_19a2ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19a2c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19a2d1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_19a2f0(int64_t a1);
int64_t function_19a2f4(int64_t a1);
int64_t function_19a2f9(int64_t a1);
int64_t function_19a322(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_19a409(void);
int64_t function_19a439(void);
int64_t function_19a480(int64_t a1);
int64_t function_1d825a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1d82a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1d83e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d8529(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d8663(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d87a1(void);
int64_t function_1d87f3(void);
int64_t function_1d880a(int64_t a1);
int64_t function_1d8837(void);
int64_t function_1d8864(int64_t a1, int64_t a2);
int64_t function_1d8889(void);
int64_t function_1d8913(void);
int64_t function_1d8940(void);
int64_t function_1d896d(void);
int64_t function_1d898c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d89b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d8a55(int64_t a1);
int64_t function_1d8a84(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d8b0b(void);
int64_t function_1d8b21(void);
int64_t function_1d8b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d8b50(void);
int64_t function_1d8b8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d8bb5(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_1d8bbb(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_1d8ed9();
int64_t function_4740d4();
int64_t function_4740ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_474138(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_474198(int64_t a1);
int64_t function_4741ce(int64_t a1);
int64_t function_474200(void);
int64_t function_474233(int32_t a1);
int64_t function_47424a(void);
int64_t function_47425e(int64_t a1, int64_t a2);
int64_t function_4742a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4742ae(void);
int64_t function_4742c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4742e2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_474340(int64_t a1);
int64_t function_4743ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47441d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_474467(int64_t a1);
int64_t function_47446b(void);
int64_t function_4744a2(int64_t a1);
int64_t function_4a9a775a();
int64_t function_c4258();
int64_t function_ffffffffe8ad8f34();
int64_t unknown_149795fb();
int64_t unknown_18843c06();
int64_t unknown_29fc75b();
int64_t unknown_30670094();
int64_t unknown_3829ebd8();
int64_t unknown_3a25a398();
int64_t unknown_3d1b8b8e();
int64_t unknown_402373e5();
int64_t unknown_482e927f();
int64_t unknown_486e56ed();
int64_t unknown_49068cd();
int64_t unknown_50858bca();
int64_t unknown_5ac5c4f0();
int64_t unknown_78abc1a3();
int64_t unknown_ffffffff895afdbc();
int64_t unknown_ffffffff999aff4d();
int64_t unknown_ffffffffa6108e40();
int64_t unknown_ffffffffd4322bd7();

// Address range: 0x19a285 - 0x19a29b
int64_t function_19a285(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x19a285
    int64_t v1; // 0x19a285
    int64_t v2 = v1;
    char v3 = v2;
    *(char *)0x1a34bc01e876a2 = v3;
    *(char *)v2 = v3 + 64;
    int64_t v4; // 0x19a285
    *(int32_t *)a1 = *(int32_t *)&v4;
    int64_t result = (2 * v2 + a4 / 256) % 256 | v2 & -256; // 0x19a295
    int32_t * v5 = (int32_t *)(a4 + 4 + result); // 0x19a297
    *v5 = *v5 + (int32_t)a3;
    return result;
}

// Address range: 0x19a2ae - 0x19a2c7
int64_t function_19a2ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x19a2ae
    char * v3 = (char *)(v2 - 0x65893cd0); // 0x19a2b0
    *v3 = *v3 + 1;
    uint64_t v4 = unknown_ffffffff895afdbc(); // 0x19a2b6
    char * v5 = (char *)(v4 - 122); // 0x19a2bb
    *v5 = *v5 + (char)a3;
    *(char *)v1 = *(char *)&v1 + (char)(v4 / 256);
    return a3 & 0xffffffff;
}

// Address range: 0x19a2c9 - 0x19a2d1
int64_t function_19a2c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19a2c9
    int64_t result; // 0x19a2c9
    return result;
}

// Address range: 0x19a2d1 - 0x19a2df
int64_t function_19a2d1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x19a2d1
    int64_t v1; // 0x19a2d1
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 - 12); // 0x19a2d3
    *v3 = *v3 + (int32_t)a2;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return (v2 + a4 / 256) % 256 | v2 & -0x10000 | (v2 | 256 * a3) & 0xff00;
}

// Address range: 0x19a2f0 - 0x19a2f3
int64_t function_19a2f0(int64_t a1) {
    // 0x19a2f0
    int64_t result; // 0x19a2f0
    return result;
}

// Address range: 0x19a2f4 - 0x19a2f7
int64_t function_19a2f4(int64_t a1) {
    // 0x19a2f4
    int64_t result; // 0x19a2f4
    return result;
}

// Address range: 0x19a2f9 - 0x19a2fa
int64_t function_19a2f9(int64_t a1) {
    // 0x19a2f9
    int64_t result; // 0x19a2f9
    return result;
}

// Address range: 0x19a322 - 0x19a394
int64_t function_19a322(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x19a322
    int64_t v1; // 0x19a322
    uint64_t v2 = v1;
    int64_t v3 = a4;
    int64_t result = __asm_hlt(); // 0x19a322
    bool v4; // 0x19a322
    if (!v4) {
        // 0x19a325
        return result;
    }
    uint32_t v5 = (int32_t)a4 % 32; // 0x19a363
    if (v5 != 0) {
        uint32_t v6 = (int32_t)result;
        *(int32_t *)result = v6 >> 32 - v5 | v6 << v5;
    }
    // 0x19a377
    *(char *)(v2 - 0x38c2bb77) = 40;
    unknown_482e927f();
    int64_t result2 = unknown_3d1b8b8e((v4 ? -1 : 1) + a1, (int32_t)(v2 | a2)); // 0x19a388
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)(v2 % 256 ^ a3);
    return result2;
}

// Address range: 0x19a409 - 0x19a40a
int64_t function_19a409(void) {
    // 0x19a409
    int64_t result; // 0x19a409
    return result;
}

// Address range: 0x19a439 - 0x19a442
int64_t function_19a439(void) {
    int64_t result = unknown_ffffffffa6108e40(); // 0x19a43f
    bool v1; // 0x19a439
    if (v1 || false) {
        result = function_19a409();
    }
    // 0x19a441
    return result;
}

// Address range: 0x19a480 - 0x19a481
int64_t function_19a480(int64_t a1) {
    // 0x19a480
    int64_t result; // 0x19a480
    return result;
}

// Address range: 0x1d825a - 0x1d82a8
int64_t function_1d825a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1d825a
    int64_t v1; // 0x1d825a
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x1d825a
    return function_c4258(a1, a2, a3, a4, a6, v2, a5);
}

// Address range: 0x1d82a8 - 0x1d83e5
int64_t function_1d82a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1d82a8
    int64_t v1; // 0x1d82a8
    return function_c4258(a1, a2, a3, v1, a5, a6, 0x227219ae);
}

// Address range: 0x1d83e5 - 0x1d8529
int64_t function_1d83e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1d83e5
    int64_t v1; // bp-32, 0x1d83e5
    int64_t v2 = (int64_t)&v1; // 0x1d8431
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x1d8446
    int64_t * v4 = (int64_t *)v3; // 0x1d8447
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x1d8452
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x1d8461
    int64_t v7 = v2 - 16; // 0x1d8461
    int64_t * v8 = (int64_t *)v7; // 0x1d8461
    *v8 = v6;
    *v5 = v3;
    int64_t v9 = v2 + 8; // 0x1d848a
    int64_t * v10 = (int64_t *)v9; // 0x1d848a
    int64_t v11 = *v10; // 0x1d848a
    int64_t * v12 = (int64_t *)(v2 - 32); // 0x1d8491
    *v12 = v11;
    *v8 = a4;
    *v5 = v7;
    int64_t v13 = *v8; // 0x1d84b0
    *v12 = v13;
    *v8 = v6;
    *v10 = *v4;
    *v8 = a2;
    *v5 = v13;
    *(int64_t *)(v2 + 32) = v11;
    *v4 = v1;
    *v8 = v1;
    v1 = *v10;
    *v8 = v9;
    *v5 = *v4;
    return function_c4258(a1, *v8, a3, v13, a5, a6, 0x1d5896);
}

// Address range: 0x1d8529 - 0x1d8663
int64_t function_1d8529(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x2053af80; // bp-40, 0x1d859c
    int64_t v2 = (int64_t)&v1; // 0x1d85d6
    int64_t v3 = v2 - 8; // 0x1d85de
    int64_t * v4 = (int64_t *)v3; // 0x1d85de
    *v4 = 0x2df801c1;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x1d85e3
    *v5 = 0x1712f8ba;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x1d85e9
    bool v7; // 0x1d8529
    *v6 = 0x4000 * (int64_t)(bool)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    int64_t v8 = v2 + 8; // 0x1d85ef
    int64_t * v9 = (int64_t *)v8; // 0x1d85ef
    *v9 = *v4;
    *v4 = a6;
    *v5 = v3;
    *v4 = v3;
    v1 = 0x1d5ac0;
    *(int64_t *)(v2 + 32) = 0x1d5ac0;
    int64_t v10 = *v9; // 0x1d8617
    v1 = v10;
    *v4 = a1;
    *v5 = v8;
    int64_t v11 = *v4; // 0x1d862e
    *v6 = v11;
    v1 = v10;
    *v4 = v2 + 16;
    *v5 = v1;
    return function_c4258(v11, 310, a3, a4, a5, *v4, v1);
}

// Address range: 0x1d8663 - 0x1d87a1
int64_t function_1d8663(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1d8663
    int64_t v1; // bp-56, 0x1d8663
    int64_t v2; // 0x1d8663
    return function_c4258(a1, a2, a3, v2, a5, v2, (int64_t)&v1 + 16);
}

// Address range: 0x1d87a1 - 0x1d87a6
int64_t function_1d87a1(void) {
    // 0x1d87a1
    return function_1d8ed9();
}

// Address range: 0x1d87f3 - 0x1d87f4
int64_t function_1d87f3(void) {
    // 0x1d87f3
    int64_t result; // 0x1d87f3
    return result;
}

// Address range: 0x1d880a - 0x1d8814
int64_t function_1d880a(int64_t a1) {
    // 0x1d880a
    return (int64_t)*(int32_t *)-0xf385ec59cbbc567;
}

// Address range: 0x1d8837 - 0x1d8839
int64_t function_1d8837(void) {
    // 0x1d8837
    return function_1d87f3();
}

// Address range: 0x1d8864 - 0x1d886e
int64_t function_1d8864(int64_t a1, int64_t a2) {
    // 0x1d8864
    int64_t v1; // 0x1d8864
    uint16_t v2 = (int16_t)v1; // 0x1d8864
    uint16_t v3 = (int16_t)*(char *)(a1 - 0x4dea7b8b + 4 * v1); // 0x1d8864
    return v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3));
}

// Address range: 0x1d8889 - 0x1d888c
int64_t function_1d8889(void) {
    // 0x1d8889
    int64_t result; // 0x1d8889
    return result;
}

// Address range: 0x1d8913 - 0x1d8918
int64_t function_1d8913(void) {
    // 0x1d8913
    int64_t result; // 0x1d8913
    return result;
}

// Address range: 0x1d8940 - 0x1d894d
int64_t function_1d8940(void) {
    // 0x1d8940
    return unknown_ffffffff999aff4d();
}

// Address range: 0x1d896d - 0x1d896e
int64_t function_1d896d(void) {
    // 0x1d896d
    int64_t result; // 0x1d896d
    return result;
}

// Address range: 0x1d898c - 0x1d89b4
int64_t function_1d898c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d898c
    int64_t v1; // 0x1d898c
    int32_t * v2 = (int32_t *)(v1 + 0x77013d00); // 0x1d898f
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(v1 + 95); // 0x1d8995
    *v3 = *v3 - 128;
    *(int32_t *)a1 = 0x10000 * (int32_t)v1 >> 16;
    bool v4; // 0x1d898c
    __asm_int3((v4 ? -4 : 4) + a1);
    int32_t * v5 = (int32_t *)(a2 + 0x440a728d); // 0x1d89a9
    *v5 = *v5 + (int32_t)a2;
    return function_ffffffffe8ad8f34();
}

// Address range: 0x1d89b4 - 0x1d89ee
int64_t function_1d89b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d89b4
    int64_t v1; // 0x1d89b4
    int32_t * v2 = (int32_t *)(v1 - 0x4c21bba2); // 0x1d89b4
    *v2 = *v2 + (int32_t)a3;
    if ((char)a3 != -(char)v1) {
        function_1d896d();
    }
    uint64_t v3 = unknown_50858bca(); // 0x1d89c4
    int32_t * v4 = (int32_t *)(v1 + 0x3a6605c0); // 0x1d89ca
    *v4 = *v4 / 64;
    unknown_ffffffffd4322bd7();
    char * v5 = (char *)(v1 + 108); // 0x1d89e4
    *v5 = *v5 + (char)(v3 / 256);
    return unknown_486e56ed();
}

// Address range: 0x1d8a55 - 0x1d8a5b
int64_t function_1d8a55(int64_t a1) {
    // 0x1d8a55
    return unknown_29fc75b(a1);
}

// Address range: 0x1d8a84 - 0x1d8a9b
int64_t function_1d8a84(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d8a84
    float80_t v1; // 0x1d8a84
    *(int16_t *)(a4 + 0x1e83726) = (int16_t)v1;
    int64_t v2; // 0x1d8a84
    char * v3 = (char *)(v2 - 70); // 0x1d8a8b
    *v3 = -1 - *v3;
    bool v4; // 0x1d8a84
    int64_t result = v2 - (v4 ? 0xcc0122ea : 0xcc0122e9) & 0xffffffff; // 0x1d8a8e
    int32_t * v5 = (int32_t *)result; // 0x1d8a93
    *v5 = *v5 + (int32_t)a1;
    return result;
}

// Address range: 0x1d8b0b - 0x1d8b0e
int64_t function_1d8b0b(void) {
    // 0x1d8b0b
    int64_t result; // 0x1d8b0b
    return result;
}

// Address range: 0x1d8b21 - 0x1d8b24
int64_t function_1d8b21(void) {
    // 0x1d8b21
    int64_t result; // 0x1d8b21
    return result;
}

// Address range: 0x1d8b40 - 0x1d8b48
int64_t function_1d8b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d8b40
    return function_1d8bb5(a1, a2, a3, (int32_t)a4 - *(int32_t *)(a4 - 0x495cf6c6));
}

// Address range: 0x1d8b50 - 0x1d8b51
int64_t function_1d8b50(void) {
    // 0x1d8b50
    int64_t result; // 0x1d8b50
    return result;
}

// Address range: 0x1d8b8d - 0x1d8bb5
int64_t function_1d8b8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d8b8d
    int64_t v1; // 0x1d8b8d
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x1d8b8d
    int64_t v3 = v2 ? -4 : 4; // 0x1d8b8f
    int64_t v4 = v3 + a1; // 0x1d8b8f
    unknown_3a25a398(v4, v3 + a2);
    int32_t * v5 = (int32_t *)v4; // 0x1d8b97
    *v5 = *v5 + 0x5504412d;
    uint64_t v6 = unknown_78abc1a3(); // 0x1d8b9d
    int64_t v7 = v6 + v1 + (int64_t)((char)v6 < (char)(v6 / 256)); // 0x1d8ba7
    int64_t result = v7 & 0xffffffff; // 0x1d8ba7
    int32_t * v8 = (int32_t *)(4 * v1 + 0x53417b25 + result); // 0x1d8ba9
    *v8 = *v8 + (int32_t)a4;
    int32_t * v9 = (int32_t *)((a4 - 256 * v7 & 0xff00 | a4 & -0xff01) + 4 * v1); // 0x1d8bb2
    *v9 = *v9 + (int32_t)v7;
    return result;
}

// Address range: 0x1d8bb5 - 0x1d8bba
int64_t function_1d8bb5(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x1d8bb5
    int64_t result; // 0x1d8bb5
    *(char *)result = 0;
    return result;
}

// Address range: 0x1d8bbb - 0x1d8c53
int64_t function_1d8bbb(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a1 + 75); // 0x1d8bbd
    int64_t v3; // 0x1d8bbb
    *v2 = *v2 + (int32_t)v3;
    __asm_in(-96);
    *(char *)a3 = *(char *)&v1 + (char)(a3 / 256);
    unknown_49068cd();
    __asm_hlt();
    if (a4 == 0) {
        function_1d8b50();
    }
    int64_t v4 = 256 * (int64_t)*(char *)(a3 + 68); // 0x1d8bc0
    int64_t v5 = v3 & -0xff01; // 0x1d8bc0
    uint64_t v6 = unknown_3829ebd8(); // 0x1d8bd2
    char * v7 = (char *)(v6 - 90); // 0x1d8bd7
    *v7 = *v7 + (char)(v6 / 256);
    int64_t v8; // 0x1d8bbb
    int64_t v9 = v8;
    int3_t v10; // 0x1d8bbb
    float80_t v11 = __frontend_reg_load_fpr(v10); // 0x1d8bda
    __frontend_reg_store_fpr(v10, v11 + (float80_t)*(float32_t *)(v4 | v5));
    int3_t v12 = v10 + 1; // 0x1d8bda
    int64_t v13; // 0x1d8bbb
    int64_t v14 = v13 - 8; // 0x1d8bdc
    *(int64_t *)v14 = 18;
    int64_t v15 = unknown_402373e5(); // 0x1d8bde
    uint32_t v16 = *(int32_t *)((v9 & 0xffffffff) - 28) & (int32_t)v9; // 0x1d8be5
    int64_t result = unknown_5ac5c4f0(); // 0x1d8bea
    while (v16 < 0) {
        // 0x1d8bda
        v9 = v15 & 0xffffffff;
        v11 = __frontend_reg_load_fpr(v12);
        __frontend_reg_store_fpr(v12, v11 + (float80_t)*(float32_t *)(v4 | v5));
        v12++;
        v14 -= 8;
        *(int64_t *)v14 = 18;
        v15 = unknown_402373e5();
        v16 = *(int32_t *)((v9 & 0xffffffff) - 28) & (int32_t)v9;
        result = unknown_5ac5c4f0();
    }
    if (v16 == 0) {
        // 0x1d8c64
        return result;
    }
    // 0x1d8bf5
    unknown_149795fb();
    int64_t v17 = (256 * v1 & v4 | v5) + unknown_18843c06(); // 0x1d8c0c
    int64_t v18 = (v17 + 255) % 256 | v17 & 0xffffff00; // 0x1d8c13
    int32_t * v19 = (int32_t *)(a1 + 85 + 8 * v3); // 0x1d8c16
    *v19 = *v19 + (int32_t)((char)v17 == 0) + (int32_t)v18;
    int64_t v20 = v18 & 0xffff00ff | (int64_t)&g2; // 0x1d8c1a
    __frontend_reg_load_fpr(v12);
    int32_t * v21 = (int32_t *)a4; // 0x1d8c2b
    *v21 = *v21 + (int32_t)a2;
    return (v20 + 2 * a4 / 256) % 256 | v20 & -256;
}

// Address range: 0x4740ee - 0x474115
int64_t function_4740ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4740ee
    int64_t v1; // 0x4740ee
    int64_t v2 = v1;
    char v3 = *(char *)(2 * v1 + a3); // 0x4740ee
    uint32_t v4 = 2 * (int32_t)v1; // 0x4740f1
    int32_t v5 = *(int32_t *)((int64_t)v4 - 0x488a2eab); // 0x4740f3
    uint32_t v6 = v5 | (int32_t)(v2 & 0xffff0000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3)); // 0x4740f3
    int32_t v7 = *(int32_t *)((int64_t)v6 - 0x3aeac289); // 0x4740fb
    int32_t v8 = v4 + 0x55aec2e7; // 0x474101
    unsigned char v9 = (char)v8; // 0x474106
    unsigned char v10 = v9 + 87 + (char)(v4 < 0xaa513d19); // 0x474106
    int64_t v11 = (int64_t)v10 | (int64_t)(v8 & -256); // 0x474108
    if (v4 < 0xaa513d19 ? v10 <= v9 : v9 > 168) {
        v11 = function_4740d4();
    }
    // 0x47410a
    *(int64_t *)((int64_t)((int32_t)v1 - v7 + (int32_t)((v6 & 256) != 0)) - 8) = a2;
    return v11 & 0xaff937b;
}

// Address range: 0x474138 - 0x47414a
int64_t function_474138(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x474138
    int64_t v1; // 0x474138
    uint64_t v2 = (v1 & 0xffffffff) * (int64_t)*(int32_t *)(a1 + 124); // 0x474138
    int64_t result = v2 & 0xffffffff; // 0x474138
    char * v3 = (char *)(result - 0xe04c50); // 0x47413b
    *v3 = *v3 + (char)a4 + (char)(v2 > 0xffffffff);
    return result;
}

// Address range: 0x474198 - 0x47419a
int64_t function_474198(int64_t a1) {
    // 0x474198
    int64_t result; // 0x474198
    return result;
}

// Address range: 0x4741ce - 0x4741cf
int64_t function_4741ce(int64_t a1) {
    // 0x4741ce
    int64_t result; // 0x4741ce
    return result;
}

// Address range: 0x474200 - 0x474201
int64_t function_474200(void) {
    // 0x474200
    int64_t result; // 0x474200
    return result;
}

// Address range: 0x474233 - 0x474235
int64_t function_474233(int32_t a1) {
    // 0x474233
    int64_t result; // 0x474233
    return result;
}

// Address range: 0x47424a - 0x47424b
int64_t function_47424a(void) {
    // 0x47424a
    int64_t result; // 0x47424a
    return result;
}

// Address range: 0x47425e - 0x474276
int64_t function_47425e(int64_t a1, int64_t a2) {
    // 0x47425e
    int64_t v1; // 0x47425e
    __asm_out(54, (char)v1);
    __asm_in_133((int16_t)a1);
    if ((v1 & 232) == 0) {
        function_474200();
    }
    // 0x47426b
    return function_4a9a775a();
}

// Address range: 0x4742a0 - 0x4742a9
int64_t function_4742a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4742a0
    int64_t result; // 0x4742a0
    return result;
}

// Address range: 0x4742ae - 0x4742b0
int64_t function_4742ae(void) {
    // 0x4742ae
    int64_t result; // 0x4742ae
    return result;
}

// Address range: 0x4742c7 - 0x4742cd
int64_t function_4742c7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4742c7
    bool v1; // 0x4742c7
    if (!v1) {
        function_47424a();
    }
    // 0x4742c9
    return a2 & 0xffffffff;
}

// Address range: 0x4742e2 - 0x4742e7
int64_t function_4742e2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4742e2
    int64_t result; // 0x4742e2
    *(char *)a3 = (char)result | 69;
    return result;
}

// Address range: 0x474340 - 0x474343
int64_t function_474340(int64_t a1) {
    // 0x474340
    int64_t result; // 0x474340
    return result;
}

// Address range: 0x4743ad - 0x47441c
int64_t function_4743ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x4743ad
    if (v1 != 0) {
        char * v2 = (char *)(a3 - 0x5521c090); // 0x4743ad
        unsigned char v3 = *v2; // 0x4743ad
        *v2 = v3 >> v1 | v3 << 8 - v1;
    }
    // 0x4743b5
    int64_t v4; // 0x4743ad
    int64_t v5 = (v4 | a2) & 0xffffffff; // 0x4743bd
    *(char *)0xc4f571c9 = __asm_insb((int16_t)a3);
    *(int64_t *)(v5 + -16 - (int64_t)&g1) = v5 - 8;
    return unknown_30670094();
}

// Address range: 0x47441d - 0x47442b
int64_t function_47441d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x3b8b2be2 + a2); // 0x47441d
    int64_t v2; // 0x47441d
    bool v3; // 0x47441d
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    return function_47446b();
}

// Address range: 0x474467 - 0x47446b
int64_t function_474467(int64_t a1) {
    // 0x474467
    int64_t result; // 0x474467
    int32_t * v1 = (int32_t *)(4 * a1 - 86 + result); // 0x474467
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x47446b - 0x47446c
int64_t function_47446b(void) {
    // 0x47446b
    int64_t result; // 0x47446b
    return result;
}

// Address range: 0x4744a2 - 0x4744a3
int64_t function_4744a2(int64_t a1) {
    // 0x4744a2
    int64_t result; // 0x4744a2
    return result;
}
