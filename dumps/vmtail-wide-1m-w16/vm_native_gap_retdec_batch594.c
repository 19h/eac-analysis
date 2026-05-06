/*
 * Targeted RetDec C for native executable gap queue batch 594.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x42ee93-0x42f093 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42f093-0x42f293 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42f293-0x42f493 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42f493-0x42f693 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42f693-0x42f893 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51bbc0-0x51bdc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51bdc0-0x51bfc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51bfc0-0x51c1c0 rank=- name=- kind=- bytes=- uncovered=-
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
typedef struct { uint8_t bytes[32]; } int256_t;
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
extern int g3;
extern int g4;
extern int g5;
extern int g6;
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
int64_t unknown_b6ccb9(void);
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
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

int64_t function_42ee93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42eeb0(int64_t a1, int64_t a2);
int64_t function_42eeb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42eec9(void);
int64_t function_42eed6(void);
int64_t function_42ef02(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_42ef15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42ef39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42f001(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42f0b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42f301(void);
int64_t function_42f308(void);
int64_t function_42f31c(void);
int64_t function_42f340(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42f388(int64_t a1);
int64_t function_42f3b8(void);
int64_t function_42f3f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_42f465(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_42f4cf(void);
int64_t function_42f4d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42f4f1(void);
int64_t function_42f51f(void);
int64_t function_42f525(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42f5f9(int64_t a1, int64_t a2);
int64_t function_42f614(void);
int64_t function_42f625(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_42f64c(void);
int64_t function_42f657(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42f6c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42f6fc(void);
int64_t function_42f6ff(void);
int64_t function_42f704(void);
int64_t function_42f71b(void);
int64_t function_42f71d(void);
int64_t function_42f722(int64_t a1);
int64_t function_42f72e(int64_t a1, int64_t a2);
int64_t function_42f748(void);
int64_t function_42f76e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42f7a6(void);
int64_t function_42f88d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_519050();
int64_t function_51bbc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_565970();
int64_t function_566390();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_5681f0();
int64_t function_568460();
int64_t function_7b4339f2();
int64_t function_ffffffffceb50c77();
int64_t function_ffffffffd979c11b();
int64_t unknown_7b98fe30();

// Address range: 0x42ee93 - 0x42eea7
int64_t function_42ee93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42ee93
    int64_t v1; // 0x42ee93
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    *(char *)v2 = (char)(v2 | a1);
    int32_t * v3 = (int32_t *)((a5 & 0xffffffff) - 0x51ca7cc); // 0x42eea1
    int32_t v4 = *v3; // 0x42eea1
    *v3 = 2 * v4 | (int32_t)(v4 < 0);
    return a4 & 0xffffffff;
}

// Address range: 0x42eeb0 - 0x42eeb4
int64_t function_42eeb0(int64_t a1, int64_t a2) {
    // 0x42eeb0
    int64_t v1; // 0x42eeb0
    return function_42ef02(a1, a2, v1, v1);
}

// Address range: 0x42eeb5 - 0x42eec9
int64_t function_42eeb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42eeb5
    int64_t v1; // 0x42eeb5
    uint64_t v2 = v1;
    int64_t v3 = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x42eeb5
    int32_t * v4 = (int32_t *)v3; // 0x42eeb6
    uint32_t v5 = (int32_t)v3; // 0x42eeb6
    bool v6; // 0x42eeb5
    *v4 = *v4 + (int32_t)v6 + v5;
    int64_t v7; // 0x42eeb5
    *(char *)a4 = *(char *)&v7 & (char)a3;
    int32_t * v8 = (int32_t *)(a1 + 26); // 0x42eec2
    uint32_t v9 = *v8; // 0x42eec2
    *v8 = v9 / 512 | 0x1000000 * v9 | 0x800000 * (int32_t)(v5 < 0xf122cbe0);
    return v3 + 0xedd3420 & 0xffffffff;
}

// Address range: 0x42eec9 - 0x42eece
int64_t function_42eec9(void) {
    // 0x42eec9
    return function_7b4339f2();
}

// Address range: 0x42eed6 - 0x42eed8
int64_t function_42eed6(void) {
    // 0x42eed6
    int64_t v1; // 0x42eed6
    return function_42ef39(v1, v1, v1, v1, (int64_t)&g6);
}

// Address range: 0x42ef02 - 0x42ef14
int64_t function_42ef02(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 12 + 8 * a3); // 0x42ef03
    int64_t v2; // 0x42ef02
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = (char)(a4 / 256) < (char)a4 ? 0x17bd12cd : 0x17bd12cc; // 0x42ef09
    *(char *)a1 = __asm_insb(-0x28ff);
    return v2 + v3 & 0xffffffff;
}

// Address range: 0x42ef15 - 0x42ef34
int64_t function_42ef15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42ef15
    *(int32_t *)0x4362e3069d68616d = (int32_t)unknown_7b98fe30();
    int64_t result = __asm_hlt(); // 0x42ef2e
    int64_t v1; // 0x42ef15
    *(char *)a4 = (char)(result ^ v1);
    return result;
}

// Address range: 0x42ef39 - 0x42ef96
int64_t function_42ef39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42ef39
    int64_t v1; // 0x42ef39
    unsigned char v2 = llvm_ctpop_i8(*(char *)(a3 + 114) ^ (char)v1); // 0x42ef39
    int64_t result = __asm_in((int16_t)a3); // 0x42ef3c
    if (v2 % 2 != 0) {
        char * v3 = (char *)(a1 - 35); // 0x42ef92
        *v3 = *v3 & 42;
        return result;
    }
    int32_t * v4 = (int32_t *)(a2 - 3); // 0x42ef42
    *v4 = *v4 + (int32_t)v1;
    return 256 * v1 + result & 0xff00 | result & -0xff01;
}

// Address range: 0x42f001 - 0x42f031
int64_t function_42f001(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42f001
    int64_t v1; // 0x42f001
    unsigned char v2 = (char)v1 ^ 57; // 0x42f001
    int64_t v3 = a4 - 1; // 0x42f005
    int64_t v4 = v1 & -256 | (int64_t)v2; // 0x42f005
    if (v3 != 0 == v2 == 0) {
        v4 = function_42f001(a1, a2, a3, v3, (int64_t)&g6);
    }
    int64_t v5 = v4;
    int64_t result = (v5 + 159) % 256 | v5 & -256; // 0x42f008
    if ((char)v5 >= 97) {
        // 0x42f00c
        float80_t v6; // 0x42f001
        *(int64_t *)(a2 - 8) = (int64_t)v6;
        return result;
    }
    int64_t v7 = result - 0x767b94ef; // 0x42f027
    *(char *)a1 = (char)v7;
    return v7 & 0xffffffff;
}

// Address range: 0x42f0b7 - 0x42f1da
int64_t function_42f0b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // 0x42f0b7
    if (a4 != 1 == (char)((v2 ^ v2) / 256) == 0) {
        // 0x42f0fd
        return __asm_in_133(39);
    }
    // 0x42f0c0
    return (int64_t)&v1;
}

// Address range: 0x42f301 - 0x42f303
int64_t function_42f301(void) {
    // 0x42f301
    int64_t v1; // 0x42f301
    return function_42f340(v1, v1, v1);
}

// Address range: 0x42f308 - 0x42f30c
int64_t function_42f308(void) {
    // 0x42f308
    int64_t v1; // 0x42f308
    return function_42f388(v1);
}

// Address range: 0x42f31c - 0x42f31f
int64_t function_42f31c(void) {
    // 0x42f31c
    int64_t result; // 0x42f31c
    return result;
}

// Address range: 0x42f340 - 0x42f35b
int64_t function_42f340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42f340
    int64_t v1; // 0x42f340
    int32_t * v2 = (int32_t *)(v1 - 75); // 0x42f34b
    *v2 = *v2 ^ (int32_t)a3;
    int64_t v3; // 0x42f340
    *(char *)v3 = *(char *)&v3 + (char)v1;
    int64_t v4 = v3;
    return v4 + 0x3830a26c + (int64_t)((int32_t)v4 < 0x76854fa2) & 0xffffffff;
}

// Address range: 0x42f388 - 0x42f38a
int64_t function_42f388(int64_t a1) {
    // 0x42f388
    int64_t result; // 0x42f388
    return result;
}

// Address range: 0x42f3b8 - 0x42f3be
int64_t function_42f3b8(void) {
    // 0x42f3b8
    int64_t result; // 0x42f3b8
    return result;
}

// Address range: 0x42f3f8 - 0x42f40e
int64_t function_42f3f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a4 - 0x428fccad); // 0x42f3f8
    *v1 = *v1 + (char)(a4 / 256);
    return function_ffffffffceb50c77();
}

// Address range: 0x42f465 - 0x42f46f
int64_t function_42f465(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 51); // 0x42f465
    unsigned char v2 = *v1; // 0x42f465
    *v1 = v2 / 128 | 2 * v2;
    int64_t v3; // 0x42f465
    *(char *)v3 = *(char *)&v3 + (char)(a3 / 256);
    int64_t result; // 0x42f465
    return result;
}

// Address range: 0x42f4cf - 0x42f4d5
int64_t function_42f4cf(void) {
    // 0x42f4cf
    int64_t result; // 0x42f4cf
    return result;
}

// Address range: 0x42f4d5 - 0x42f4db
int64_t function_42f4d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42f4d5
    int64_t result; // 0x42f4d5
    return result;
}

// Address range: 0x42f4f1 - 0x42f4f2
int64_t function_42f4f1(void) {
    // 0x42f4f1
    int64_t result; // 0x42f4f1
    return result;
}

// Address range: 0x42f51f - 0x42f520
int64_t function_42f51f(void) {
    // 0x42f51f
    int64_t result; // 0x42f51f
    return result;
}

// Address range: 0x42f525 - 0x42f5c7
int64_t function_42f525(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 + 97); // 0x42f525
    int64_t v3; // 0x42f525
    *v2 = (char)v3;
    bool v4; // 0x42f525
    if (true != (v4 || v4)) {
        // 0x42f52c
        int64_t result; // 0x42f525
        return result;
    }
    int32_t * v5 = (int32_t *)(v3 + a3); // 0x42f577
    int32_t v6 = *v5; // 0x42f577
    int32_t v7 = v4; // 0x42f577
    int32_t v8 = (int32_t)(v3 & 0xffffff00 | (int64_t)*v2) + v7; // 0x42f577
    int32_t v9 = v6 - v8; // 0x42f577
    *v5 = v9;
    __asm_out(-88, (char)v3);
    int64_t result2 = v3 & -256 | (int64_t)*(char *)&v1; // 0x42f57f
    if (((v9 - v7 ^ v6) & (v6 ^ v8)) >= 0) {
        result2 = function_42f51f();
    }
    char * v10 = (char *)(result2 - 13); // 0x42f583
    char v11 = *v10; // 0x42f583
    *v10 = v11 - (char)a4;
    if ((int64_t)v11 > a4) {
        // 0x42f52c
        return result2;
    }
    // 0x42f5be
    __asm_int(28);
    return result2;
}

// Address range: 0x42f5f9 - 0x42f614
int64_t function_42f5f9(int64_t a1, int64_t a2) {
    // 0x42f5f9
    return __asm_int1() + 0x1cc1ca9d & 0xffffffff;
}

// Address range: 0x42f614 - 0x42f61a
int64_t function_42f614(void) {
    // 0x42f614
    int64_t result; // 0x42f614
    return result;
}

// Address range: 0x42f625 - 0x42f636
int64_t function_42f625(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a3 + 0x17cbb27e); // 0x42f625
    *v1 = *v1 & (char)(a3 / 256);
    int64_t v2; // 0x42f625
    return v2 + 0xc4d119eb & 0xffffffff;
}

// Address range: 0x42f64c - 0x42f653
int64_t function_42f64c(void) {
    // 0x42f64c
    int64_t v1; // 0x42f64c
    int64_t v2 = v1;
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (256 * (int16_t)v1 >> 8));
}

// Address range: 0x42f657 - 0x42f69f
int64_t function_42f657(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x42f657
    int64_t v1; // 0x42f657
    uint64_t result = v1;
    bool v2; // 0x42f657
    if (!v2) {
        int32_t * v3 = (int32_t *)(a3 - 65); // 0x42f65b
        *v3 = *v3 - (int32_t)v1;
        return result;
    }
    unsigned char v4 = (char)a4 % 32; // 0x42f698
    if (v4 != 0) {
        char * v5 = (char *)(v1 + 0x1139170a); // 0x42f698
        unsigned char v6 = *v5; // 0x42f698
        uint32_t v7 = *(int32_t *)(a4 + 98); // 0x42f695
        *v5 = v6 >> v4 | (char)((int16_t)v6 << (int16_t)(9 - v4)) | (char)(v7 > (int32_t)a2) << 8 - v4;
    }
    return result & -256 | (int64_t)*(char *)(result % 256 + v1);
}

// Address range: 0x42f6c5 - 0x42f6e8
int64_t function_42f6c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42f6c5
    bool v1; // 0x42f6c5
    if (!v1) {
        function_42f72e(a1, a2);
    }
    // 0x42f6c9
    int64_t v2; // 0x42f6c5
    int64_t v3 = (int64_t)&v2; // 0x42f6c9
    char * v4 = (char *)(a4 + 0x29c96a62); // 0x42f6ca
    unsigned char v5 = *v4; // 0x42f6ca
    int64_t v6; // 0x42f6c5
    unsigned char v7 = v5 + (char)v6; // 0x42f6ca
    *v4 = v7;
    uint32_t v8 = v7 < v5 ? 51 : 50; // 0x42f6d5
    uint32_t v9 = (int32_t)v6; // 0x42f6d8
    uint32_t v10 = (int32_t)(v7 < v5 | v8 > (int32_t)a3) + (int32_t)a4; // 0x42f6d8
    float80_t v11; // 0x42f6c5
    *(int64_t *)((int64_t)(v9 - v10) + a4) = (int64_t)v11;
    int64_t result = v3 & -256 | (int64_t)*(char *)((v3 & 248) + v6); // 0x42f6e6
    if (v10 >= v9) {
        result = function_42f71d();
    }
    // 0x42f6e8
    return result;
}

// Address range: 0x42f6fc - 0x42f6fd
int64_t function_42f6fc(void) {
    // 0x42f6fc
    int64_t result; // 0x42f6fc
    return result;
}

// Address range: 0x42f6ff - 0x42f704
int64_t function_42f6ff(void) {
    // 0x42f6ff
    int64_t result; // 0x42f6ff
    return result;
}

// Address range: 0x42f704 - 0x42f705
int64_t function_42f704(void) {
    // 0x42f704
    int64_t result; // 0x42f704
    return result;
}

// Address range: 0x42f71b - 0x42f71c
int64_t function_42f71b(void) {
    // 0x42f71b
    int64_t result; // 0x42f71b
    return result;
}

// Address range: 0x42f71d - 0x42f71e
int64_t function_42f71d(void) {
    // 0x42f71d
    int64_t result; // 0x42f71d
    return result;
}

// Address range: 0x42f722 - 0x42f72d
int64_t function_42f722(int64_t a1) {
    // 0x42f722
    int64_t result; // 0x42f722
    return result;
}

// Address range: 0x42f72e - 0x42f735
int64_t function_42f72e(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 106); // 0x42f732
    *v1 = *v1 + 1;
    int64_t v2; // 0x42f72e
    return v2 | 11;
}

// Address range: 0x42f748 - 0x42f74b
int64_t function_42f748(void) {
    // 0x42f748
    int64_t result; // 0x42f748
    return result;
}

// Address range: 0x42f76e - 0x42f785
int64_t function_42f76e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42f76e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1 = 0x397f67b3; // bp-8, 0x42f776
    int64_t v2; // 0x42f76e
    if (!((a4 == 1 | *(int32_t *)(v2 - 0x6612e516) == (int32_t)a3))) {
        function_42f71b();
    }
    // 0x42f77e
    *(int32_t *)(a2 + 99) = (int32_t)(int64_t)&v1;
    return v2 & 0xffffffff;
}

// Address range: 0x42f7a6 - 0x42f7ab
int64_t function_42f7a6(void) {
    // 0x42f7a6
    return function_ffffffffd979c11b();
}

// Address range: 0x42f88d - 0x42f891
int64_t function_42f88d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42f88d
    int64_t result; // 0x42f88d
    return result;
}

// Address range: 0x51bbc0 - 0x51c1c0
int64_t function_51bbc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x51bbc0
    int64_t v1; // 0x51bbc0
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3 = a3; // 0x51bbd7
    int64_t str = a2; // 0x51bbd7
    if (*(int64_t *)(a2 + 40) == g5) {
        // 0x51bbd9
        str = *(int64_t *)(*(int64_t *)(a2 + 16) + 40);
        *(int64_t *)a1 = a1 + 16;
        int64_t v4 = -1; // 0x51bbf2
        if (str != 0) {
            // 0x51bbf4
            v4 = str + (int64_t)strlen((char *)str);
        }
        // 0x51bc01
        v3 = v4;
        function_519050(v1, str, v3);
    }
    // 0x51bc0c
    int64_t v5; // 0x51bbc0
    if (v5 == __readfsqword(40)) {
        // 0x51bc1f
        int64_t result; // 0x51bbc0
        return result;
    }
    int64_t result2 = a1;
    __stack_chk_fail();
    int64_t v6 = __readfsqword(40); // 0x51bc49
    int64_t v7 = v3; // 0x51bc67
    int64_t str2 = str; // 0x51bc67
    if (*(int64_t *)(*(int64_t *)str + 48) == g4) {
        // 0x51bc69
        str2 = *(int64_t *)(*(int64_t *)(str + 16) + 56);
        *(int64_t *)result2 = result2 + 16;
        int64_t v8 = -1; // 0x51bc82
        if (str2 != 0) {
            // 0x51bc84
            v8 = str2 + (int64_t)strlen((char *)str2);
        }
        // 0x51bc91
        v7 = v8;
        function_519050(result2, str2, v7);
    }
    // 0x51bc9c
    if (v6 == __readfsqword(40)) {
        // 0x51bc1f
        return result2;
    }
    // 0x51bcc4
    __stack_chk_fail();
    *(int64_t *)(result2 + 16) = 0;
    int64_t v9 = __readfsqword(40); // 0x51bce6
    *(int32_t *)(result2 + 8) = (int32_t)(v7 != 0);
    int64_t * v10 = (int64_t *)result2; // 0x51bd0e
    *v10 = (int64_t)&g2;
    function_5681f0(result2, 0);
    *v10 = (int64_t)&g3;
    bool v11; // 0x51bbc0
    int64_t v12 = v11 ? -1 : 1;
    int64_t v13 = (int64_t)&g1; // 0x51bbc0
    int64_t v14 = str2; // 0x51bd33
    int64_t v15 = 2; // 0x51bd33
    unsigned char v16 = *(char *)v14; // 0x51bd33
    char v17 = *(char *)v13; // 0x51bd33
    v14 += v12;
    char v18 = v17; // 0x51bd33
    bool v19 = false; // 0x51bd33
    while (v16 == v17) {
        v15--;
        v13 += v12;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v12;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    uint64_t v21 = (int64_t)!((v16 < v20 | v19)) - (int64_t)(v16 < v20); // 0x51bd38
    int64_t v22 = (int64_t)"POSIX"; // 0x51bd3c
    int64_t v23 = str2; // 0x51bd3c
    int64_t v24 = 6; // 0x51bd3c
    int64_t v25 = v7; // 0x51bd3c
    int64_t v26 = v14; // 0x51bd3c
    if ((char)v21 != 0) {
        unsigned char v27 = *(char *)v23; // 0x51bd4d
        char v28 = *(char *)v22; // 0x51bd4d
        v23 += v12;
        v24--;
        char v29 = v28; // 0x51bd4d
        bool v30 = false; // 0x51bd4d
        while (v27 == v28) {
            // 0x51bd3e
            v22 += v12;
            v29 = v27;
            v30 = true;
            if (v24 == 0) {
                // break -> 
                break;
            }
            v27 = *(char *)v23;
            v28 = *(char *)v22;
            v23 += v12;
            v24--;
            v29 = v28;
            v30 = false;
        }
        unsigned char v31 = v29;
        v25 = v7;
        v26 = v23;
        if ((v27 >= v31 && !v30) != v27 < v31) {
            // 0x51bd78
            int32_t v32; // bp-80, 0x51bbc0
            function_5679b0((int64_t *)&v32, str2, 0, v24);
            function_5681f0(result2, v32);
            function_5679e0((int64_t *)&v32);
            v25 = 0;
            v26 = v32;
        }
    }
    int64_t result3 = __readfsqword(40) ^ v9; // 0x51bd5d
    if (result3 == 0) {
        // 0x51bc1f
        return result3;
    }
    // 0x51bd9e
    __stack_chk_fail();
    function_568460(result2);
    _Unwind_Resume((struct _Unwind_Exception *)&g6);
    function_565970(result2);
    _Unwind_Resume((struct _Unwind_Exception *)&g6);
    int64_t v33 = *(int64_t *)v26; // 0x51bddb
    *(int64_t *)((int64_t)&g6 + 16) = 0;
    int64_t v34 = __readfsqword(40); // 0x51bde6
    *(int32_t *)((int64_t)&g6 + 8) = (int32_t)(v25 != 0);
    *(int64_t *)&g6 = (int64_t)&g2;
    function_5681f0((int64_t)&g6, 0);
    *(int64_t *)&g6 = (int64_t)&g3;
    int64_t v35 = (int64_t)&g1; // 0x51bbc0
    int64_t v36 = v33; // 0x51be33
    int64_t v37 = 2; // 0x51be33
    unsigned char v38 = *(char *)v36; // 0x51be33
    char v39 = *(char *)v35; // 0x51be33
    v36 += v12;
    v37--;
    char v40 = v39; // 0x51be33
    bool v41 = false; // 0x51be33
    while (v38 == v39) {
        v35 += v12;
        v40 = v38;
        v41 = true;
        if (v37 == 0) {
            // break -> 
            break;
        }
        v38 = *(char *)v36;
        v39 = *(char *)v35;
        v36 += v12;
        v37--;
        v40 = v39;
        v41 = false;
    }
    unsigned char v42 = v40;
    uint64_t v43 = (int64_t)!((v38 < v42 | v41)) - (int64_t)(v38 < v42); // 0x51be38
    int64_t v44 = (int64_t)"POSIX"; // 0x51be3c
    int64_t v45 = v33; // 0x51be3c
    int64_t v46 = 6; // 0x51be3c
    int64_t v47 = v37; // 0x51be3c
    int64_t v48 = v25; // 0x51be3c
    int64_t v49 = v36; // 0x51be3c
    if ((char)v43 != 0) {
        unsigned char v50 = *(char *)v45; // 0x51be4d
        char v51 = *(char *)v44; // 0x51be4d
        v45 += v12;
        v46--;
        char v52 = v51; // 0x51be4d
        bool v53 = false; // 0x51be4d
        while (v50 == v51) {
            // 0x51be3e
            v44 += v12;
            v52 = v50;
            v53 = true;
            if (v46 == 0) {
                // break -> 
                break;
            }
            v50 = *(char *)v45;
            v51 = *(char *)v44;
            v45 += v12;
            v46--;
            v52 = v51;
            v53 = false;
        }
        unsigned char v54 = v52;
        v47 = v46;
        v48 = v25;
        v49 = v45;
        if ((v50 >= v54 && !v53) != v50 < v54) {
            // 0x51be78
            int32_t v55; // bp-120, 0x51bbc0
            function_5679b0((int64_t *)&v55, v33, 0, v46);
            function_5681f0((int64_t)&g6, v55);
            function_5679e0((int64_t *)&v55);
            v47 = v46;
            v48 = 0;
            v49 = v55;
        }
    }
    int64_t result4 = __readfsqword(40) ^ v34; // 0x51be5d
    if (result4 == 0) {
        // 0x51bc1f
        return result4;
    }
    // 0x51be9e
    __stack_chk_fail();
    function_568460((int64_t)&g6);
    _Unwind_Resume((struct _Unwind_Exception *)&g6);
    function_565970((int64_t)&g6);
    _Unwind_Resume((struct _Unwind_Exception *)&g6);
    __readfsqword(40);
    int64_t result5 = *(int64_t *)(*(int64_t *)(a6 + 208) + 24) + 8 * function_566390(); // 0x51bf50
    int64_t v56 = *(int64_t *)result5; // 0x51bf54
    if (v56 == 0) {
        // 0x51bc1f
        return result5;
    }
    int32_t v57 = *(int32_t *)(a6 + 24) & 74; // 0x51bf70
    int64_t result6 = result5; // 0x51bf76
    if (v57 != 64) {
        // 0x51bf78
        result6 = v57 != 8 ? 10 : 16;
    }
    // 0x51bf8c
    if (v49 == 0 || (int32_t)v48 == -1) {
        // 0x51bc1f
        return result6;
    }
    // 0x51bf9f
    if (v47 != 0) {
        // 0x51bc1f
        return 0;
    }
    unsigned char v58 = *(char *)(v56 + 110); // 0x51bfd4
    int64_t result7 = v58; // 0x51bfd4
    char v59 = v48; // 0x51bfde
    if (v58 != v59) {
        // 0x51bfe7
        if (*(char *)(v56 + 111) != v59) {
            // 0x51bc1f
            return result7;
        }
    }
    // 0x51bff1
    if (*(char *)(v56 + 32) != 0 || *(char *)(v56 + 72) == v59) {
        // 0x51bc1f
        return result7;
    }
    int64_t * v60 = (int64_t *)(v49 + 16); // 0x51c00d
    int64_t result8 = *v60; // 0x51c00d
    if (result8 >= *(int64_t *)(v49 + 24)) {
        // 0x51bc1f
        return result8;
    }
    int64_t result9 = result8 + 1; // 0x51c01e
    *v60 = result9;
    return result9;
}
