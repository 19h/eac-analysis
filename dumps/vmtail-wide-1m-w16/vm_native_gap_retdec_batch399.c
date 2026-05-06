/*
 * Targeted RetDec C for native executable gap queue batch 399.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x14f913-0x14fb13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14fb13-0x14fd13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14fd13-0x14ff13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14ff13-0x150113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x150113-0x150313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ea0e8-0x1ea2e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ea2e8-0x1ea4e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ea4e8-0x1ea6e8 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14f8d9();
int64_t function_14f90e();
int64_t function_14f913(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14f9f1(void);
int64_t function_14fa5f(void);
int64_t function_14fa6f(int64_t a1, int64_t a2);
int64_t function_14fa8f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14faf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14fb64(void);
int64_t function_14fb76(void);
int64_t function_14fbd4(void);
int64_t function_14fbe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14fc02(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14fc1a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14fcbe(void);
int64_t function_14fd29(void);
int64_t function_14fd5f(int64_t a1);
int64_t function_14fdd6(int64_t a1, int64_t a2);
int64_t function_14fe6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14ff4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_14ff83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14ff98(int64_t a1);
int64_t function_15002a(void);
int64_t function_150034(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1500b1(int64_t a1, int64_t a2);
int64_t function_1500f6(void);
int64_t function_15011e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_150131(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1501c1(void);
int64_t function_1501f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_150261(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1502a1(int64_t a1);
int64_t function_1502e5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ea0e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1ea261(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ea388(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ea4f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1ea651(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1ea699(void);
int64_t function_1ea6d8(void);
int64_t function_1ea6d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47e2e82b();
int64_t function_7b95e8de();
int64_t function_c4258();
int64_t function_ffffffff805d01c5();
int64_t function_ffffffff844afd05();
int64_t function_ffffffff896b0cd6();
int64_t function_ffffffffd004d4d5();
int64_t function_ffffffffef24ffba();
int64_t unknown_34aced7c();
int64_t unknown_3a1c89f7();
int64_t unknown_4e822c89();
int64_t unknown_60cca57a();
int64_t unknown_624309b7();
int64_t unknown_ffffffff880f8e6a();
int64_t unknown_ffffffff890016df();
int64_t unknown_ffffffffd29e39fe();
int64_t unknown_ffffffffd2a3b72f();
int64_t unknown_ffffffffd45cb64f();

// Address range: 0x14f913 - 0x14f99e
int64_t function_14f913(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 76); // 0x14f913
    int64_t v2; // 0x14f913
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = (int64_t)(*(int32_t *)(a3 - 64) & (int32_t)a2); // 0x14f918
    int32_t * v4 = (int32_t *)(v3 - 0x523ce882); // 0x14f920
    uint32_t v5 = *v4; // 0x14f920
    uint32_t v6 = v5 + (int32_t)a4; // 0x14f920
    *v4 = v6;
    int32_t * v7 = (int32_t *)(a3 + 0x1e876b8); // 0x14f926
    int32_t v8 = *v7; // 0x14f926
    *v7 = 0x80000000 * (int32_t)(v6 < v5) | v8 / 2;
    int64_t v9; // 0x14f913
    int64_t v10 = v9;
    __asm_outsb((int16_t)a3, *(char *)v3);
    int64_t v11 = __asm_wait(a1); // 0x14f92e
    if (v8 < 0 == v6 < v5) {
        v11 = function_14f90e();
    }
    int64_t v12 = v11;
    int64_t v13 = v10 - 8; // 0x14f930
    *(int64_t *)v13 = 13;
    while (v6 == 0 || v6 < 0 != v8 < 0 != v6 < v5) {
        // 0x14f92c
        v10 = v13;
        __asm_outsb((int16_t)a3, *(char *)v3);
        v11 = __asm_wait(a1);
        if (v8 < 0 == v6 < v5) {
            v11 = function_14f90e();
        }
        // 0x14f930
        v12 = v11;
        v13 = v10 - 8;
        *(int64_t *)v13 = 13;
    }
    // 0x14f934
    float80_t v14; // 0x14f913
    __pseudo_get_significand(v14);
    __pseudo_get_exponent(v14);
    int64_t v15 = a4 - 1; // 0x14f93a
    if (v15 == 0) {
        // 0x14f93c
        return v12 & 0xe87052ba;
    }
    // 0x14f944
    *(int64_t *)(v10 - 16) = v13;
    if ((int32_t)v2 != -(int32_t)v12) {
        function_14f8d9();
    }
    if (v15 != 1 == (int32_t)v2 == -(int32_t)v12) {
        // 0x14f98e
        return unknown_ffffffff890016df();
    }
    // 0x14f949
    return unknown_ffffffffd45cb64f();
}

// Address range: 0x14f9f1 - 0x14f9fb
int64_t function_14f9f1(void) {
    // 0x14f9f1
    return unknown_3a1c89f7();
}

// Address range: 0x14fa5f - 0x14fa60
int64_t function_14fa5f(void) {
    // 0x14fa5f
    int64_t result; // 0x14fa5f
    return result;
}

// Address range: 0x14fa6f - 0x14fa7a
int64_t function_14fa6f(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x44ffe885); // 0x14fa6f
    *v1 = *v1 + (int32_t)a2;
    return function_ffffffffef24ffba();
}

// Address range: 0x14fa8f - 0x14fab0
int64_t function_14fa8f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14fa8f
    int64_t v1; // 0x14fa8f
    *(char *)v1 = (char)v1;
    *(char *)0x13aee1a3 = *(char *)0x13aee1a3 + (char)(v1 / 256);
    char * v2 = (char *)((a3 & 0xffffffff) + 0x2ea8b620); // 0x14faa2
    *v2 = *v2 - (char)a3;
    return v1 & 0xffffffff;
}

// Address range: 0x14faf1 - 0x14faf9
int64_t function_14faf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14faf1
    return a4 & 0xffffffff;
}

// Address range: 0x14fb64 - 0x14fb65
int64_t function_14fb64(void) {
    // 0x14fb64
    int64_t result; // 0x14fb64
    return result;
}

// Address range: 0x14fb76 - 0x14fb8a
int64_t function_14fb76(void) {
    // 0x14fb76
    unknown_34aced7c();
    unknown_4e822c89();
    int64_t v1; // 0x14fb76
    return function_14fbe5(v1, v1, v1, v1);
}

// Address range: 0x14fbd4 - 0x14fbe2
int64_t function_14fbd4(void) {
    // 0x14fbd4
    return function_ffffffff844afd05();
}

// Address range: 0x14fbe5 - 0x14fbfd
int64_t function_14fbe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14fbe5
    bool v1; // 0x14fbe5
    if (true == !v1) {
        function_47e2e82b();
    }
    int32_t * v2 = (int32_t *)(8 * a4 + 0x366ab938 + *(int64_t *)0x1401e8aa); // 0x14fbf1
    *v2 = *v2 + (int32_t)a3;
    return unknown_ffffffffd29e39fe();
}

// Address range: 0x14fc02 - 0x14fc04
int64_t function_14fc02(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14fc02
    int64_t result; // 0x14fc02
    return result;
}

// Address range: 0x14fc1a - 0x14fc21
int64_t function_14fc1a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14fc1a
    int64_t result; // 0x14fc1a
    return result;
}

// Address range: 0x14fcbe - 0x14fcc3
int64_t function_14fcbe(void) {
    // 0x14fcbe
    return function_ffffffff805d01c5();
}

// Address range: 0x14fd29 - 0x14fd2c
int64_t function_14fd29(void) {
    // 0x14fd29
    int64_t result; // 0x14fd29
    return result;
}

// Address range: 0x14fd5f - 0x14fd60
int64_t function_14fd5f(int64_t a1) {
    // 0x14fd5f
    int64_t result; // 0x14fd5f
    return result;
}

// Address range: 0x14fdd6 - 0x14fe69
int64_t function_14fdd6(int64_t a1, int64_t a2) {
    // 0x14fdd6
    int64_t v1; // 0x14fdd6
    uint64_t v2 = v1;
    int64_t v3; // 0x14fdd6
    bool v4; // 0x14fdd6
    if (v4) {
        char * v5 = (char *)(a2 + 43); // 0x14fdd8
        *v5 = *v5 + (char)(v2 / 256);
        *(int32_t *)v3 = *(int32_t *)&v3 + 0x3a1ab86;
        int32_t * v6 = (int32_t *)(v2 + 0x612ba295); // 0x14fde1
        *v6 = *v6 - (int32_t)v3;
        return 0x10000 * (int32_t)v3 >> 16;
    }
    // 0x14fe40
    __asm_hlt();
    int64_t v7 = v2 & -256; // 0x14fe41
    __asm_int3();
    char v8 = v2 / 256; // 0x14fe47
    *(char *)0x780e454e = *(char *)0x780e454e + v8;
    int16_t v9; // 0x14fdd6
    v3 = (int64_t)v9 | 0xc63a2ca3;
    char * v10 = (char *)(v7 - 0x40f06a7e); // 0x14fe56
    *v10 = *v10 + v8;
    int32_t * v11 = (int32_t *)(v7 + (int64_t)&g1); // 0x14fe5c
    *v11 = *v11 + (int32_t)v3;
    return __asm_in(38);
}

// Address range: 0x14fe6a - 0x14fea1
int64_t function_14fe6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14fe6a
    int64_t v1; // 0x14fe6a
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    *(char *)a2 = (char)v2 + (char)a2;
    *(int32_t *)a1 = (int32_t)a4;
    char * v5 = (char *)(v2 + 0x13d002c); // 0x14fe78
    char v6 = v2 / 256; // 0x14fe78
    char v7 = *v5 + v6; // 0x14fe78
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x14fe78
    *v5 = v7;
    if (v8 % 2 == 0) {
        function_ffffffffd004d4d5();
    }
    // 0x14fe84
    *(int32_t *)v3 = *(int32_t *)&v3 | 0x68f0f300;
    int64_t v9 = __asm_wait(0x68f0f300); // 0x14fe89
    *(char *)-0x56ac6467 = *(char *)-0x56ac6467 + v6;
    *(int32_t *)0x68f0f300 = *(int32_t *)&v4;
    return v9 + 0x8cd92e99 & 0xe05c6b00 | v9 + 4 & 134 | 0x1fa39479;
}

// Address range: 0x14ff4b - 0x14ff78
int64_t function_14ff4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x14ff4b
    *(int64_t *)0xe2ee84b5 = -0x1ffffec3;
    int64_t v1; // 0x14ff4b
    *(char *)(a2 + 68) = (char)((uint64_t)v1 / 256);
    int32_t v2 = __asm_in(-30); // 0x14ff68
    int32_t * v3 = (int32_t *)(a3 - 24); // 0x14ff6f
    *v3 = *v3 + (int32_t)(257 * a4 & 0xff00 | a4 & 0xffff00ff);
    return v2 ^ 0x3d1a5e00;
}

// Address range: 0x14ff83 - 0x14ff95
int64_t function_14ff83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14ff83
    int64_t result; // 0x14ff83
    int32_t v1 = result;
    *(int32_t *)result = v1;
    char v2 = *(char *)-0x70489274; // 0x14ff85
    *(char *)-0x70489274 = v2 + (char)((uint64_t)result / 256);
    *(char *)a1 = (char)result;
    int64_t v3; // 0x14ff83
    *(char *)a4 = *(char *)&v3 + (char)(v1 >> 31);
    int64_t v4; // 0x14ff83
    bool v5; // 0x14ff83
    *(char *)((v5 ? -1 : 1) + a1) = *(char *)&v4;
    return result;
}

// Address range: 0x14ff98 - 0x14ff9b
int64_t function_14ff98(int64_t a1) {
    // 0x14ff98
    int64_t result; // 0x14ff98
    return result;
}

// Address range: 0x15002a - 0x15002b
int64_t function_15002a(void) {
    // 0x15002a
    int64_t result; // 0x15002a
    return result;
}

// Address range: 0x150034 - 0x150077
int64_t function_150034(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150034
    bool v1; // 0x150034
    if (v1) {
        // 0x15004a
        int64_t v2; // 0x150034
        int64_t v3 = v2 + 0xe893d4bc; // 0x15004a
        int32_t * v4 = (int32_t *)(v3 & 0xffffffff); // 0x15004f
        *v4 = *v4 + (int32_t)a3;
        return v3 & 0xffffffc5 | 58;
    }
    // 0x150062
    return unknown_ffffffff880f8e6a();
}

// Address range: 0x1500b1 - 0x1500c2
int64_t function_1500b1(int64_t a1, int64_t a2) {
    // 0x1500b1
    unknown_624309b7();
    int64_t v1; // 0x1500b1
    while (*(char *)(a2 + 0x1e83959) <= (char)v1) {
        // continue -> 0x1500bc
    }
    // 0x1500be
    int64_t v2; // 0x1500b1
    return (int64_t)&v2;
}

// Address range: 0x1500f6 - 0x1500f9
int64_t function_1500f6(void) {
    // 0x1500f6
    int64_t result; // 0x1500f6
    return result;
}

// Address range: 0x15011e - 0x150131
int64_t function_15011e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x15011e
    int64_t v1; // 0x15011e
    __asm_out((int16_t)a3, (int32_t)v1);
    return unknown_ffffffffd2a3b72f();
}

// Address range: 0x150131 - 0x150179
int64_t function_150131(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x150131
    int64_t v1; // 0x150131
    int64_t v2 = v1;
    int64_t v3 = a4;
    int32_t * v4 = (int32_t *)(v2 - 58 + 8 * v2); // 0x150139
    *v4 = *v4 + (int32_t)a3;
    uint32_t v5 = (int32_t)v1 + 0x5600d0d8 | -0x546fffc8; // 0x15013f
    char v6 = v5; // 0x15013f
    if (llvm_ctpop_i8(v6) % 2 != 0) {
        int64_t result = v5; // 0x15013f
        int32_t * v7 = (int32_t *)(2 * v1 + 19); // 0x150148
        *v7 = *v7 + (int32_t)v3;
        char * v8 = (char *)(8 * result + v1); // 0x15014c
        *v8 = *v8 + v6;
        return result;
    }
    // 0x150166
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v2;
    int32_t v9 = *(int32_t *)0x1e67730 | (int32_t)v1; // 0x150168
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x150168
    *(int32_t *)0x1e67730 = v9;
    if (v10 % 2 == 0) {
        function_1500f6();
    }
    // 0x150171
    return unknown_60cca57a();
}

// Address range: 0x1501c1 - 0x1501c4
int64_t function_1501c1(void) {
    // 0x1501c1
    int64_t result; // 0x1501c1
    return result;
}

// Address range: 0x1501f6 - 0x150206
int64_t function_1501f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x13d0024); // 0x1501f6
    int64_t result; // 0x1501f6
    *v1 = *v1 + (char)result;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x150261 - 0x150287
int64_t function_150261(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x150261
    int64_t v1; // 0x150261
    int64_t result = v1 + 0x50502fde & 0xffffffff; // 0x150264
    char * v2 = (char *)(a3 - 27); // 0x150269
    char v3 = *v2 ^ (char)a4; // 0x150269
    *v2 = v3;
    if (a4 < 3 || v3 == 0) {
        // 0x150271
        return result;
    }
    // 0x150281
    *(char *)(result + 0x5a01e865) = (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x1502a1 - 0x1502a2
int64_t function_1502a1(int64_t a1) {
    // 0x1502a1
    int64_t result; // 0x1502a1
    return result;
}

// Address range: 0x1502e5 - 0x1502ed
int64_t function_1502e5(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x3c1dd5f8); // 0x1502e5
    int64_t result; // 0x1502e5
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1ea0e8 - 0x1ea261
int64_t function_1ea0e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1ea0e8
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x1ea0e8
    return function_c4258(a1, 169, a3, a4, a5, v1, a6);
}

// Address range: 0x1ea261 - 0x1ea388
int64_t function_1ea261(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ea261
    int64_t v1; // 0x1ea261
    bool v2; // 0x1ea261
    return function_c4258(a1, a2, a3, a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x1ea388 - 0x1ea4f0
int64_t function_1ea388(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ea388
    int64_t v1; // bp-32, 0x1ea388
    int64_t v2 = (int64_t)&v1; // 0x1ea470
    int64_t v3 = v2 - 8; // 0x1ea478
    int64_t * v4 = (int64_t *)v3; // 0x1ea478
    *(int64_t *)(v2 - 16) = v3;
    *v4 = a5;
    int64_t * v5 = (int64_t *)(v2 + 16); // 0x1ea48f
    *v5 = v1;
    *v4 = v3;
    v1 = 169;
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x1ea4b2
    *(int64_t *)(v2 + 40) = *v6;
    *v6 = a5;
    v1 = v2 + 24;
    *v4 = *v6;
    int64_t v7 = *v5; // 0x1ea4dc
    *v6 = v7;
    v1 = v7;
    int64_t v8; // 0x1ea388
    return function_c4258(a1, a2, 0x6a5018c7, a4, v8, v8, 0x1e7235);
}

// Address range: 0x1ea4f0 - 0x1ea639
int64_t function_1ea4f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1ea4f0
    bool v1; // 0x1ea4f0
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x1ea4f0
    int64_t v3 = v2; // bp-48, 0x1ea576
    int64_t v4 = (int64_t)&v3; // 0x1ea5be
    int64_t * v5 = (int64_t *)(v4 - 16); // 0x1ea5cb
    *v5 = v2;
    int64_t * v6 = (int64_t *)(v4 + 8); // 0x1ea5e0
    *v6 = v2;
    int64_t v7 = v4 - 8; // 0x1ea5e0
    int64_t * v8 = (int64_t *)v7; // 0x1ea5e4
    *v8 = a6;
    *v5 = v7;
    *v8 = 0x1323a0a2;
    *(int64_t *)(v4 + 24) = 0x1323a0a2;
    *v8 = v3;
    *v5 = v3;
    int64_t v9 = *v6; // 0x1ea61b
    v3 = v9;
    *v8 = v9;
    return function_c4258(a1, a2, *v8, a4, a5, *v8, 0x584ec36);
}

// Address range: 0x1ea651 - 0x1ea65d
int64_t function_1ea651(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1ea651
    int64_t v1; // 0x1ea651
    int64_t v2 = v1 & -87; // 0x1ea651
    char * v3 = (char *)v2; // 0x1ea653
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(v2 - 69); // 0x1ea655
    *v4 = *v4 + (char)(a4 / 256);
    return function_ffffffff896b0cd6();
}

// Address range: 0x1ea699 - 0x1ea69e
int64_t function_1ea699(void) {
    // 0x1ea699
    return function_7b95e8de();
}

// Address range: 0x1ea6d8 - 0x1ea6d9
int64_t function_1ea6d8(void) {
    // 0x1ea6d8
    int64_t result; // 0x1ea6d8
    return result;
}

// Address range: 0x1ea6d9 - 0x1ea6dd
int64_t function_1ea6d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x1ea6d9
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x1ea6d9
    return result;
}
