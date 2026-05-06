/*
 * Targeted RetDec C for native executable gap queue batch 523.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3aaa15-0x3aac15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3aac15-0x3aae15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3aae15-0x3ab015 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fead1-0x3fecd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fecd1-0x3feed1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3feed1-0x3ff0d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ff0d1-0x3ff2d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ff2d1-0x3ff4d1 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
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

int64_t function_3aa9de();
int64_t function_3aaa15(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_3aaa77(void);
int64_t function_3aaa7d(void);
int64_t function_3aaaa3(int64_t a1);
int64_t function_3aaaf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aaafc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aac10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3aac86(void);
int64_t function_3aac89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3aacd7(void);
int64_t function_3aacd9(int64_t a1);
int64_t function_3aace0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3aad12(int64_t a1);
int64_t function_3aad37(void);
int64_t function_3aad5e(void);
int64_t function_3aad62(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3aad82(void);
int64_t function_3aadca(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3aade5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3aaded(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3aae80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3aaeb5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3aafc0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3aafeb(int64_t a1);
int64_t function_3fea96();
int64_t function_3fead1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fead8(void);
int64_t function_3feae1(void);
int64_t function_3feb35(void);
int64_t function_3feb83(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3fecd4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3fedc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fee91(void);
int64_t function_3feeac(void);
int64_t function_3feec2(int64_t a1);
int64_t function_3feed4(void);
int64_t function_3fef07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fef19(int64_t a1);
int64_t function_3fef5d(int64_t a1);
int64_t function_3fefa5(int64_t a1);
int64_t function_3ff01b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ff02c(void);
int64_t function_3ff044(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ff04a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ff135(int64_t a1);
int64_t function_3ff15b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ff164(int64_t a1);
int64_t function_3ff176(void);
int64_t function_3ff28c(void);
int64_t function_3ff293(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ff32c(int64_t a1);
int64_t function_3ff33c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ff34b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ff3a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ff3b3(int64_t a1);
int64_t function_3ff3c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ff3dc(void);
int64_t function_3ff479(int64_t a1);
int64_t function_3ff487(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ff496(int64_t a1);
int64_t function_3ff4b8(int64_t a1);
int64_t function_42c139b4();
int64_t function_4775094e();
int64_t function_6a3173db();
int64_t function_ffffffff8249fcdf();
int64_t function_ffffffff882a56d8();
int64_t function_ffffffffb106c8f4();
int64_t function_ffffffffbd8b7357();
int64_t unknown_2c3f6819();
int64_t unknown_3b0026bc();
int64_t unknown_ffffffffcb3c0c43();
int64_t unknown_fffffffff5b49d2d();

// Address range: 0x3aaa15 - 0x3aaa4e
int64_t function_3aaa15(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x3aaa15
    int64_t v1; // 0x3aaa15
    char * v2 = (char *)(8 * a1 - 0x27fe170a + v1); // 0x3aaa15
    *v2 = *v2 + (char)v1;
    char v3 = __asm_insb((int16_t)a3); // 0x3aaa20
    bool v4; // 0x3aaa15
    char * v5 = (char *)((v4 ? -1 : 1) + a1); // 0x3aaa20
    *v5 = v3;
    int64_t v6; // 0x3aaa15
    char v7 = *(char *)&v6; // 0x3aaa27
    char v8 = (char)(-1 - (int32_t)v1 < (int32_t)(v1 & 0xffffff00 | (a4 / 256 + 187) % 256)) - (char)(a3 / 256) + v7; // 0x3aaa27
    *(char *)v6 = v8;
    if (v8 != 0) {
        function_3aa9de();
    }
    int32_t * v9 = (int32_t *)(a2 - 0x7fffc53e); // 0x3aaa32
    *v9 = *v9 + (int32_t)a2;
    uint32_t result = 0x10000 * (int32_t)unknown_ffffffffcb3c0c43() >> 16 ^ -0x13fdff8a; // 0x3aaa45
    *v5 = (char)result;
    return result;
}

// Address range: 0x3aaa77 - 0x3aaa7a
int64_t function_3aaa77(void) {
    // 0x3aaa77
    int64_t result; // 0x3aaa77
    return result;
}

// Address range: 0x3aaa7d - 0x3aaa80
int64_t function_3aaa7d(void) {
    // 0x3aaa7d
    int64_t v1; // 0x3aaa7d
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x3aaaa3 - 0x3aaaa6
int64_t function_3aaaa3(int64_t a1) {
    // 0x3aaaa3
    int64_t result; // 0x3aaaa3
    return result;
}

// Address range: 0x3aaaf4 - 0x3aaafc
int64_t function_3aaaf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 14); // 0x3aaaf4
    int64_t v2; // 0x3aaaf4
    *v1 = *v1 + (int32_t)v2;
    return function_6a3173db();
}

// Address range: 0x3aaafc - 0x3aab0b
int64_t function_3aaafc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 0x17f7e2ef); // 0x3aaafd
    int64_t v2; // 0x3aaafc
    *v1 = *v1 + (char)v2;
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) - 14); // 0x3aab03
    *v3 = *v3 + (int32_t)a2;
    return function_ffffffff882a56d8();
}

// Address range: 0x3aac10 - 0x3aac2d
int64_t function_3aac10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3aac10
    if (a4 != 1) {
        // 0x3aac87
        int64_t result; // 0x3aac10
        return result;
    }
    // 0x3aac13
    bool v1; // 0x3aac10
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x3aac10
    unknown_2c3f6819(v2);
    uint32_t v3 = *(int32_t *)0x3e01e8a32dc40570; // 0x3aac18
    char * v4 = (char *)(int64_t)v3; // 0x3aac23
    unsigned char v5 = *v4; // 0x3aac23
    unsigned char v6 = v5 + (char)(v3 / 256); // 0x3aac23
    *v4 = v6;
    int32_t * v7 = (int32_t *)(int64_t)(v3 / 0x80000000); // 0x3aac25
    *v7 = *v7 + (int32_t)v2 + (int32_t)(v6 < v5);
    return unknown_fffffffff5b49d2d();
}

// Address range: 0x3aac86 - 0x3aac87
int64_t function_3aac86(void) {
    // 0x3aac86
    int64_t v1; // 0x3aac86
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x3aac89 - 0x3aac98
int64_t function_3aac89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4 | a1;
    int64_t result; // 0x3aac89
    *(int32_t *)a6 = 2 * (int32_t)result;
    uint32_t v2 = (int32_t)result; // 0x3aac8e
    uint32_t v3 = *(int32_t *)(a2 - 72) + v2; // 0x3aac8e
    unsigned char v4 = (char)v1 % 32; // 0x3aac91
    if (v4 != 0) {
        char * v5 = (char *)((v1 & 0xffffffff) - 24); // 0x3aac91
        unsigned char v6 = *v5; // 0x3aac91
        *v5 = v6 << v4 | (char)((int16_t)v6 >> (int16_t)(9 - v4)) | (char)(v3 < v2) << v4 - 1;
    }
    int32_t * v7 = (int32_t *)((int64_t)v3 - 73); // 0x3aac94
    *v7 = *v7 + (int32_t)v1;
    return result;
}

// Address range: 0x3aacd7 - 0x3aacd9
int64_t function_3aacd7(void) {
    // 0x3aacd7
    int64_t v1; // 0x3aacd7
    return function_3aace0(v1, v1, v1, v1);
}

// Address range: 0x3aacd9 - 0x3aace0
int64_t function_3aacd9(int64_t a1) {
    // 0x3aacd9
    int64_t v1; // 0x3aacd9
    uint64_t result = v1;
    char * v2 = (char *)(a1 + 0x1e846fe); // 0x3aacda
    *v2 = *v2 | (char)(result / 256);
    return result;
}

// Address range: 0x3aace0 - 0x3aace5
int64_t function_3aace0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3aace0
    int64_t v1; // 0x3aace0
    return v1 | 106;
}

// Address range: 0x3aad12 - 0x3aad17
int64_t function_3aad12(int64_t a1) {
    // 0x3aad12
    int64_t result; // 0x3aad12
    return result;
}

// Address range: 0x3aad37 - 0x3aad3a
int64_t function_3aad37(void) {
    // 0x3aad37
    int64_t result; // 0x3aad37
    return result;
}

// Address range: 0x3aad5e - 0x3aad60
int64_t function_3aad5e(void) {
    // 0x3aad5e
    int64_t result; // 0x3aad5e
    return result;
}

// Address range: 0x3aad62 - 0x3aad6d
int64_t function_3aad62(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3aad62
    int64_t v1; // 0x3aad62
    char * v2 = (char *)(v1 + 0x3a164680); // 0x3aad67
    *v2 = *v2 + (char)a3;
    bool v3; // 0x3aad62
    return v1 - (v3 ? 0x2b2b013e : 0x2b2b013d) & 0xffffffff;
}

// Address range: 0x3aad82 - 0x3aad85
int64_t function_3aad82(void) {
    // 0x3aad82
    int64_t result; // 0x3aad82
    return result;
}

// Address range: 0x3aadca - 0x3aadd1
int64_t function_3aadca(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3aadca
    return function_ffffffffbd8b7357();
}

// Address range: 0x3aade5 - 0x3aaded
int64_t function_3aade5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3aade5
    *(char *)a4 = (char)(a3 / 256);
    int64_t result; // 0x3aade5
    return result;
}

// Address range: 0x3aaded - 0x3aae2c
int64_t function_3aaded(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3aaded
    int64_t v1; // 0x3aaded
    bool v2; // 0x3aaded
    uint32_t v3 = (int32_t)v1 - (v2 ? 0x248013e : 0x248013d); // 0x3aadf2
    int64_t result = v3; // 0x3aadf2
    *(char *)a3 = (char)a4;
    int64_t v4 = -116; // bp-8, 0x3aadf9
    if (v3 == 0) {
        // 0x3aadfd
        *(char *)-0x2842e936fe17305d = (char)v3;
        return result;
    }
    int32_t * v5 = (int32_t *)(v1 + 59); // 0x3aae26
    *v5 = *v5 + (int32_t)(int64_t)&v4;
    return result;
}

// Address range: 0x3aae80 - 0x3aae91
int64_t function_3aae80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3aae80
    int64_t v1; // 0x3aae80
    int64_t result = v1 + 0xe8787670 & 0xffffffff; // 0x3aae86
    int32_t * v2 = (int32_t *)(result + (4 * (v1 + a4) & 0x3fffffffc)); // 0x3aae8b
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x3aaeb5 - 0x3aaed1
int64_t function_3aaeb5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_3b0026bc(); // 0x3aaeb6
    char * v2 = (char *)(v1 + 0x24dff00); // 0x3aaebb
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x3aaec3
    uint32_t v4 = *v3; // 0x3aaec3
    int64_t v5; // bp-8, 0x3aaeb5
    uint32_t v6 = v4 + (int32_t)(int64_t)&v5; // 0x3aaec3
    *v3 = v6;
    uint64_t v7 = v1 + a4 / 256 + (int64_t)(v6 < v4); // 0x3aaec6
    int64_t v8; // 0x3aaeb5
    unsigned char v9 = *(char *)&v8; // 0x3aaec8
    char v10 = v7; // 0x3aaec8
    unsigned char v11 = v9 + v10; // 0x3aaec8
    *(char *)a3 = v11;
    char * v12 = (char *)(a3 - 0x36c4e7ae); // 0x3aaeca
    *v12 = *v12 + v10 + (char)(v11 < v9);
    return v7 % 256 | v1 & -256;
}

// Address range: 0x3aafc0 - 0x3aafc6
int64_t function_3aafc0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3aafc0
    int64_t v1; // 0x3aafc0
    int64_t result = v1;
    *(char *)result = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x3aafeb - 0x3aafec
int64_t function_3aafeb(int64_t a1) {
    // 0x3aafeb
    int64_t result; // 0x3aafeb
    return result;
}

// Address range: 0x3fead1 - 0x3fead6
int64_t function_3fead1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fead1
    int64_t result; // 0x3fead1
    bool v1; // 0x3fead1
    if (a4 != 1 == v1) {
        result = function_3fea96();
    }
    // 0x3fead3
    return result;
}

// Address range: 0x3fead8 - 0x3feadc
int64_t function_3fead8(void) {
    // 0x3fead8
    int64_t result; // 0x3fead8
    return result;
}

// Address range: 0x3feae1 - 0x3feae9
int64_t function_3feae1(void) {
    // 0x3feae1
    int64_t v1; // 0x3feae1
    float80_t v2; // 0x3feae1
    *(float80_t *)v1 = __asm_fbstp(v2);
    return __asm_in(-94);
}

// Address range: 0x3feb35 - 0x3feb37
int64_t function_3feb35(void) {
    // 0x3feb35
    int64_t result; // 0x3feb35
    return result;
}

// Address range: 0x3feb83 - 0x3fecca
int64_t function_3feb83(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3feb83
    int64_t v1; // 0x3feb83
    int64_t v2 = v1;
    int64_t v3 = v1 | a2;
    *(int32_t *)0x1b1b0493249125fc = (int32_t)v3;
    __asm_int(93);
    int64_t v4 = v3 & 0xffffff00 | (int64_t)*(char *)(v2 + 205); // 0x3feb92
    int64_t v5 = (v1 + v2) % 256 | v2 & -256; // 0x3feb93
    char * v6 = (char *)(v4 - 0x3ab86eeb); // 0x3feb9b
    *v6 = *v6 ^ (char)(a3 / 256);
    *(int32_t *)0x4c75770cfbd20d18 = (int32_t)a4;
    int32_t v7 = *(int32_t *)(v5 + a2) ^ (int32_t)v4; // 0x3febaa
    if (v7 == 0) {
        int32_t * v8 = (int32_t *)(v1 + 79); // 0x3fec1f
        *v8 = *v8 + 0x1c7ecb;
        return a4 & 0xffffffff;
    }
    unsigned char v9 = *(char *)(v5 + 48) | (char)a3; // 0x3febb7
    uint32_t v10 = v7 - 1; // 0x3febc7
    if (v10 != 0 != (v9 == 0)) {
        // 0x3febca
        return v1 & 0xffffffff;
    }
    int64_t v11 = 0x173a2504 * v1 & 0xfffffffc; // 0x3febaf
    int32_t * v12 = (int32_t *)v11; // 0x3fec33
    *v12 = *v12 | (int32_t)a1;
    char v13 = v10 / 256; // 0x3fec3a
    char v14 = *(char *)v11; // 0x3fec3a
    char v15 = v14 + v13; // 0x3fec3a
    __asm_out(-6, (char)a4);
    if (v15 == 0 || v15 < 0 != ((v15 ^ v13) & (v15 ^ v14)) < 0) {
        int32_t * v16 = (int32_t *)((a3 & -256 | (int64_t)v9) + 54); // 0x3febe7
        *v16 = *v16 | (int32_t)v5;
        return v5 & 0xffffffff;
    }
    // 0x3fec41
    return (int64_t)(0x5bd9b641 * *(int32_t *)(v1 + 0x4e1c4323));
}

// Address range: 0x3fecd4 - 0x3fed1b
int64_t function_3fecd4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3fecd4
    int64_t result; // 0x3fecd4
    char * v1 = (char *)(result + 0x298a7369); // 0x3fed14
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x3fedc6 - 0x3fee43
int64_t function_3fedc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    bool v3; // 0x3fedc6
    if (v3) {
        // 0x3fedcb
        return (int64_t)&v2;
    }
    // 0x3fee36
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t result = __asm_iretd(); // 0x3fee3a
    int64_t v4; // 0x3fedc6
    char * v5 = (char *)(v4 + 45); // 0x3fee3b
    unsigned char v6 = *v5; // 0x3fee3b
    char v7 = v6 + 114; // 0x3fee3b
    *v5 = v7;
    unsigned char v8 = (char)a4 % 32; // 0x3fee40
    bool v9 = (v7 & (v6 ^ -128)) < 0; // 0x3fee40
    bool v10 = v6 > 141; // 0x3fee40
    if (v8 != 0) {
        unsigned char v11 = *(char *)&v1; // 0x3fee40
        unsigned char v12 = v11 >> 8 - v8 | v11 << v8; // 0x3fee40
        *(char *)v1 = v12;
        unsigned char v13 = v12 % 2; // 0x3fee40
        v9 = v8 == 1 ? v12 / 128 != v13 : (v7 & (v6 ^ -128)) < 0;
        v10 = v13 != 0;
    }
    unsigned char v14 = llvm_ctpop_i8(v7); // 0x3fee3b
    *(int64_t *)((v4 & 0xffffffff) - 8) = 0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 16 * (int64_t)((v6 & 14) == 14) | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 4 * (int64_t)(v14 % 2 == 0) | (int64_t)v10 | 2048 * (int64_t)v9 | 2;
    return result;
}

// Address range: 0x3fee91 - 0x3fee92
int64_t function_3fee91(void) {
    // 0x3fee91
    int64_t result; // 0x3fee91
    return result;
}

// Address range: 0x3feeac - 0x3feead
int64_t function_3feeac(void) {
    // 0x3feeac
    int64_t result; // 0x3feeac
    return result;
}

// Address range: 0x3feec2 - 0x3feec5
int64_t function_3feec2(int64_t a1) {
    // 0x3feec2
    int64_t result; // 0x3feec2
    return result;
}

// Address range: 0x3feed4 - 0x3feed6
int64_t function_3feed4(void) {
    // 0x3feed4
    int64_t v1; // 0x3feed4
    return function_3fef19(v1);
}

// Address range: 0x3fef07 - 0x3fef0d
int64_t function_3fef07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fef07
    int64_t result; // 0x3fef07
    return result;
}

// Address range: 0x3fef19 - 0x3fef24
int64_t function_3fef19(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x7d8be123); // 0x3fef1d
    uint32_t v2 = *v1; // 0x3fef1d
    bool v3; // 0x3fef19
    *v1 = v2 / 0x4000000 | 128 * v2 | 64 * (int32_t)v3;
    int64_t v4; // 0x3fef19
    return v4 & 0xffffffff;
}

// Address range: 0x3fef5d - 0x3fef60
int64_t function_3fef5d(int64_t a1) {
    // 0x3fef5d
    int64_t result; // 0x3fef5d
    return result;
}

// Address range: 0x3fefa5 - 0x3fefa8
int64_t function_3fefa5(int64_t a1) {
    // 0x3fefa5
    int64_t result; // 0x3fefa5
    return result;
}

// Address range: 0x3ff01b - 0x3ff027
int64_t function_3ff01b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0xfe91cd0); // 0x3ff01b
    int64_t result; // 0x3ff01b
    *v1 = *v1 & (int32_t)result;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x3ff02c - 0x3ff02d
int64_t function_3ff02c(void) {
    // 0x3ff02c
    int64_t result; // 0x3ff02c
    return result;
}

// Address range: 0x3ff044 - 0x3ff04a
int64_t function_3ff044(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ff044
    int64_t v1; // 0x3ff044
    int64_t v2 = v1;
    uint32_t v3 = *(int32_t *)(v1 - 16); // 0x3ff044
    return (v2 - (v3 < (int32_t)a4 ? 153 : 152)) % 256 | v2 & -256;
}

// Address range: 0x3ff04a - 0x3ff117
int64_t function_3ff04a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ff04a
    float80_t v1; // 0x3ff04a
    *(float64_t *)a1 = (float64_t)v1;
    int64_t v2; // 0x3ff04a
    int64_t v3 = v2 & -256; // 0x3ff04c
    int64_t result = v3 | 235; // 0x3ff04c
    bool v4; // 0x3ff04a
    if (!v4 && !v4) {
        // 0x3ff050
        return result;
    }
    int32_t * v5 = (int32_t *)(result - 0x34ff98b0); // 0x3ff08c
    uint32_t v6 = *v5; // 0x3ff08c
    int32_t v7 = v4; // 0x3ff08c
    uint32_t v8 = v7 + (int32_t)a2; // 0x3ff08c
    int32_t v9 = v6 - v8; // 0x3ff08c
    *v5 = v9;
    if (v9 != 0) {
        char * v10 = (char *)result; // 0x3ff0ce
        *v10 = *v10 + (v4 ? v8 != -1 | v6 < v9 - v7 : v6 < v8 ? -20 : -21);
        return result;
    }
    int64_t result2 = result; // 0x3ff095
    if (a4 == 0) {
        // 0x3ff108
        *(char *)-0x7791c820 = -21;
        result2 = v3 | (int64_t)*(char *)-0x7791c820;
    }
    // 0x3ff050
    return result2;
}

// Address range: 0x3ff135 - 0x3ff136
int64_t function_3ff135(int64_t a1) {
    // 0x3ff135
    int64_t result; // 0x3ff135
    return result;
}

// Address range: 0x3ff15b - 0x3ff15f
int64_t function_3ff15b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ff15b
    int64_t result; // 0x3ff15b
    return result;
}

// Address range: 0x3ff164 - 0x3ff169
int64_t function_3ff164(int64_t a1) {
    // 0x3ff164
    return __asm_wait(a1);
}

// Address range: 0x3ff176 - 0x3ff17e
int64_t function_3ff176(void) {
    // 0x3ff176
    return function_4775094e();
}

// Address range: 0x3ff28c - 0x3ff28d
int64_t function_3ff28c(void) {
    // 0x3ff28c
    int64_t result; // 0x3ff28c
    return result;
}

// Address range: 0x3ff293 - 0x3ff327
int64_t function_3ff293(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 15); // 0x3ff293
    int64_t v2; // 0x3ff293
    bool v3; // 0x3ff293
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    int64_t v4 = a2; // bp-8, 0x3ff296
    char * v5 = (char *)(a2 - 0x7623ba28); // 0x3ff298
    unsigned char v6 = *v5; // 0x3ff298
    unsigned char v7 = (char)v2; // 0x3ff298
    char v8 = v6 - v7; // 0x3ff298
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x3ff298
    *v5 = v8;
    *(int32_t *)0x3b6b623bebd62a4a = (int32_t)v2;
    int16_t v10 = v2; // 0x3ff2a7
    int16_t v11 = (int16_t)*(char *)(a2 - 113); // 0x3ff2a7
    int64_t result = v2 & -0x10000 | (int64_t)(v10 / v11 % 256) | (int64_t)(256 * (v10 % v11)); // 0x3ff2a7
    *(int32_t *)a1 = (int32_t)result;
    if (v6 < v7 || v8 == 0) {
        while (v9 % 2 != 0) {
            // continue -> 0x3ff2af
        }
        int32_t * v12 = (int32_t *)(2 * a3 + 84 + result); // 0x3ff2b1
        uint32_t v13 = *v12; // 0x3ff2b1
        int32_t v14 = v6 < v7; // 0x3ff2b1
        uint32_t v15 = v14 + (int32_t)v2; // 0x3ff2b1
        int32_t v16 = v13 - v15; // 0x3ff2b1
        *v12 = v16;
        if (v16 < 0) {
            // 0x3ff301
            return result;
        }
        int32_t v17 = a3; // 0x3ff2b7
        int32_t v18 = *(int32_t *)(v2 + 117); // 0x3ff2b7
        int32_t v19 = v6 < v7 ? v15 != -1 | v13 < v16 - v14 : v13 < v15; // 0x3ff2b7
        int32_t v20 = v19 + v17 + v18; // 0x3ff2b7
        int32_t v21 = v20 + v19; // 0x3ff2b7
        if (v20 < 0 == ((v21 ^ v17) & (v21 ^ v18)) < 0) {
            // 0x3ff2eb
            return v2 & 0xffffffff;
        }
        // 0x3ff2bc
        return function_42c139b4();
    }
    int64_t result2 = result; // 0x3ff2f7
    if (v9 % 2 == 0) {
        result2 = function_3ff28c();
    }
    // 0x3ff2f9
    if (*(int32_t *)result2 < (int32_t)(int64_t)&v4) {
        // 0x3ff31f
        return result2 & -164;
    }
    // 0x3ff301
    return result2;
}

// Address range: 0x3ff32c - 0x3ff32d
int64_t function_3ff32c(int64_t a1) {
    // 0x3ff32c
    int64_t result; // 0x3ff32c
    return result;
}

// Address range: 0x3ff33c - 0x3ff347
int64_t function_3ff33c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ff33c
    int64_t result; // 0x3ff33c
    return result;
}

// Address range: 0x3ff34b - 0x3ff377
int64_t function_3ff34b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 256 * a4 & 0xff00 | a3; // 0x3ff34b
    __asm_in(-41);
    uint32_t result = 0x4dd20e43 * *(int32_t *)(v1 + 0x67b01c8d + 2 * v1); // 0x3ff34f
    __asm_out_133((int16_t)v1, result);
    return result;
}

// Address range: 0x3ff3a7 - 0x3ff3b0
int64_t function_3ff3a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a4 - 38); // 0x3ff3a7
    int64_t result; // 0x3ff3a7
    __asm_outsd((int16_t)(a3 & 0xff00 | (int64_t)(v1 ^ (char)a3)), (int32_t)result);
    return result;
}

// Address range: 0x3ff3b3 - 0x3ff3ba
int64_t function_3ff3b3(int64_t a1) {
    // 0x3ff3b3
    return function_ffffffff8249fcdf();
}

// Address range: 0x3ff3c6 - 0x3ff3db
int64_t function_3ff3c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 13); // 0x3ff3c6
    int64_t v2; // 0x3ff3c6
    int32_t v3 = v2; // 0x3ff3c6
    *v1 = *v1 - v3;
    *(int32_t *)a1 = v3;
    uint32_t v4 = *(int32_t *)(v2 - 0x1fe6ad58); // 0x3ff3cf
    return v2 + 0x24feac28 + (v4 < (int32_t)v2 ? 0xd131e810 : 0xd131e811) & 0xffffffff;
}

// Address range: 0x3ff3dc - 0x3ff3e3
int64_t function_3ff3dc(void) {
    // 0x3ff3dc
    int64_t result; // 0x3ff3dc
    return result;
}

// Address range: 0x3ff479 - 0x3ff487
int64_t function_3ff479(int64_t a1) {
    // 0x3ff479
    return function_ffffffffb106c8f4();
}

// Address range: 0x3ff487 - 0x3ff496
int64_t function_3ff487(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ff487
    int64_t v1; // 0x3ff487
    int64_t v2 = v1;
    __asm_out_133((int16_t)a3, (int32_t)v2);
    float80_t v3; // 0x3ff487
    *(float32_t *)(v1 + 57) = (float32_t)v3;
    return (v2 + 18) % 256 | v2 & -256;
}

// Address range: 0x3ff496 - 0x3ff49d
int64_t function_3ff496(int64_t a1) {
    uint32_t v1 = (int32_t)a1; // 0x3ff496
    int64_t v2; // 0x3ff496
    uint32_t v3 = *(int32_t *)(v2 - 78); // 0x3ff496
    int32_t v4 = v3 + v1; // 0x3ff496
    return v2 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v1) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v3 % 16 + v1 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v4) % 2 == 0)) | 512;
}

// Address range: 0x3ff4b8 - 0x3ff4ba
int64_t function_3ff4b8(int64_t a1) {
    // 0x3ff4b8
    int64_t result; // 0x3ff4b8
    return result;
}
