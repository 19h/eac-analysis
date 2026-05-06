/*
 * Targeted RetDec C for native executable gap queue batch 1051.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x28f04c-0x28f24c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28f24c-0x28f44c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28f44c-0x28f64c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28f64c-0x28f84c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28f84c-0x28fa4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28fa4c-0x28fc4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28fc4c-0x28fe4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x28fe4c-0x29004c rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d5b69-0x2d5c69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d5c69-0x2d5e69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d5e69-0x2d6069 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6069-0x2d6269 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6269-0x2d6469 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6469-0x2d6669 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6669-0x2d6869 rank=- name=- kind=- bytes=- uncovered=-
 *   0x445867-0x445a67 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_clts(void);
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
int64_t __asm_fnstenv();
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
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
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
int128_t __asm_pmulhw(int128_t left, int128_t right);
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

int64_t function_28effe();
int64_t function_28f04c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28f060(int64_t a1, int64_t a2);
int64_t function_28f07a(void);
int64_t function_28f0de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28f129(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28f171(void);
int64_t function_28f186(void);
int64_t function_28f19d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28f237(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28f281(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28f2ce(int64_t a1);
int64_t function_28f2f8(void);
int64_t function_28f395(int64_t a1);
int64_t function_28f3e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28f4fa(void);
int64_t function_28f555(int64_t a1);
int64_t function_28f55d(int64_t a1);
int64_t function_28f56d(int64_t a1);
int64_t function_28f577(void);
int64_t function_28f58d(void);
int64_t function_28f5a8(void);
int64_t function_28f6a5(void);
int64_t function_28f6a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28f6aa(int64_t a1, int64_t a2);
int64_t function_28f7c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28f94b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28fa76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28fbdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28fd2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28fe79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_290033(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d5b69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d5c01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d5d4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d5e73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d5fa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d60cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d6200(int64_t a1, int64_t a2);
int64_t function_2d6331(int64_t a1);
int64_t function_2d646d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d65be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d66ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d685b(int64_t a1);
int64_t function_445867(void);
int64_t function_44586c(void);
int64_t function_445889(int64_t a1);
int64_t function_4458b4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_445901(void);
int64_t function_44592f(int64_t a1);
int64_t function_44593a(void);
int64_t function_44594e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4459b7(int64_t a1);
int64_t function_4459c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_6d69bf45();
int64_t function_c57b8();
int64_t function_cc59c();
int64_t function_cdc93ac();
int64_t function_ffffffffa3dcf0e7();
int64_t function_ffffffffc49810ea();
int64_t function_ffffffffd02c9ffb();
int64_t unknown_441d8d1a();
int64_t unknown_a9eb1cf();
int64_t unknown_b34dab();
int64_t unknown_ffffffff872c18dc();
int64_t unknown_ffffffffb3ace5fc();

// Address range: 0x28f04c - 0x28f05e
int64_t function_28f04c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28f04c
    int64_t v1; // 0x28f04c
    uint64_t v2 = v1;
    char v3 = (char)v1 + (char)(v2 / 256); // 0x28f04c
    *(char *)a3 = v3;
    int64_t v4; // 0x28f04c
    if (a4 != 1 == v3 == 0) {
        v4 = function_28effe();
    }
    int64_t v5 = v4;
    char v6 = *(char *)(v2 + 0x12006803); // 0x28f058
    return v5 & -256 | (int64_t)(v6 & (char)v5);
}

// Address range: 0x28f060 - 0x28f065
int64_t function_28f060(int64_t a1, int64_t a2) {
    // 0x28f060
    int64_t result; // 0x28f060
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x28f07a - 0x28f07f
int64_t function_28f07a(void) {
    // 0x28f07a
    return function_ffffffffa3dcf0e7();
}

// Address range: 0x28f0de - 0x28f0ed
int64_t function_28f0de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28f0de
    int64_t v1; // 0x28f0de
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(2 * v2 + 0x3ccf96ca); // 0x28f0e0
    *v3 = *v3 + (char)a4;
    return unknown_ffffffff872c18dc(a1, a2, a3, a4, a5);
}

// Address range: 0x28f129 - 0x28f151
int64_t function_28f129(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28f129
    int64_t v1; // 0x28f129
    int64_t v2 = v1 & -256; // 0x28f129
    *(char *)0x61fa6845 = *(char *)0x61fa6845 | (char)a4;
    int32_t * v3 = (int32_t *)v2; // 0x28f134
    *v3 = *v3 | (int32_t)v1;
    __asm_int(-87);
    int64_t v4; // 0x28f129
    uint32_t v5 = -0x615fec3 * *(int32_t *)&v4; // 0x28f139
    *(int32_t *)a1 = v5;
    char * v6 = (char *)(int64_t)v5; // 0x28f140
    char v7 = v5; // 0x28f140
    *v6 = *v6 + v7;
    char * v8 = (char *)v2; // 0x28f142
    *v8 = *v8 + (char)a3;
    *v6 = *v6 + v7;
    char * v9 = (char *)((v1 & 0xffffffff) + 0x28283a95); // 0x28f147
    *v9 = *v9 + (char)v1;
    bool v10; // 0x28f129
    return function_28f129((v10 ? -4 : 4) + a1, a2, a3, a5, (int64_t)&g1);
}

// Address range: 0x28f171 - 0x28f172
int64_t function_28f171(void) {
    // 0x28f171
    int64_t result; // 0x28f171
    return result;
}

// Address range: 0x28f186 - 0x28f189
int64_t function_28f186(void) {
    // 0x28f186
    int64_t v1; // 0x28f186
    int64_t v2 = v1;
    bool v3; // 0x28f186
    return (v2 - (v3 ? 221 : 220)) % 256 | v2 & -256;
}

// Address range: 0x28f19d - 0x28f233
int64_t function_28f19d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x28f19d
    char * v3 = (char *)(v2 + 53); // 0x28f19d
    *v3 = *v3 - (char)(v2 / 256);
    bool v4; // 0x28f19d
    int64_t v5 = unknown_b34dab((v4 ? -4 : 4) + a1); // 0x28f1a5
    int64_t v6 = v5; // 0x28f1af
    if ((int32_t)v5 == 0x48fb6201) {
        v6 = function_28f171();
    }
    int64_t v7 = (v2 | v2) & 0xffffffff; // 0x28f1a0
    int64_t v8; // 0x28f19d
    int64_t v9 = 2 * v2 / 256 | (int64_t)(*(int32_t *)&v8 > (int32_t)v2); // 0x28f1a3
    int64_t v10 = 256 * v9 & 0xff00 | v2 & -0xff01; // 0x28f1a3
    char v11 = __asm_in(-69); // 0x28f1b1
    int64_t * v12 = (int64_t *)(v7 - 8); // 0x28f1b4
    *v12 = 0x50b88e00;
    *(char *)v1 = *(char *)&v1 ^ -128;
    *(char *)-0x7d0e8d3a = *(char *)-0x7d0e8d3a + (char)v9;
    unsigned char v13 = *(char *)(v10 + (int64_t)v11) + 58; // 0x28f1cb
    int64_t result = (v6 | (int64_t)v11) & -256 | (int64_t)v13; // 0x28f1cb
    if (*(char *)(result + 4 * v2) < (char)(v1 / 256)) {
        // 0x28f21f
        *(char *)0xa5013de7b70a = v13;
        char * v14 = (char *)result; // 0x28f229
        *v14 = v13 + (char)v2 + *v14;
        return result;
    }
    // 0x28f1d4
    *(int64_t *)(v7 - 16) = 0x13d005b;
    *v12 = v10;
    int32_t * v15 = (int32_t *)(result + 98); // 0x28f1dc
    *v15 = *v15 + (int32_t)v10;
    *(char *)0x13d0043 = *(char *)0x13d0043 >> 1;
    int32_t * v16 = (int32_t *)(*v12 - 86); // 0x28f1e2
    *v16 = *v16 + (int32_t)a2;
    return result;
}

// Address range: 0x28f237 - 0x28f23a
int64_t function_28f237(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28f237
    int64_t result; // 0x28f237
    return result;
}

// Address range: 0x28f281 - 0x28f28a
int64_t function_28f281(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28f281
    int64_t v1; // 0x28f281
    __asm_out(104, (int32_t)v1);
    return function_cdc93ac();
}

// Address range: 0x28f2ce - 0x28f2d0
int64_t function_28f2ce(int64_t a1) {
    // 0x28f2ce
    int64_t result; // 0x28f2ce
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x28f2f8 - 0x28f2fb
int64_t function_28f2f8(void) {
    // 0x28f2f8
    int64_t result; // 0x28f2f8
    return result;
}

// Address range: 0x28f395 - 0x28f3a2
int64_t function_28f395(int64_t a1) {
    // 0x28f395
    return (int64_t)(*(int32_t *)-0x17c08d22cb192608 + (int32_t)a1);
}

// Address range: 0x28f3e8 - 0x28f419
int64_t function_28f3e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28f3e8
    int64_t v1; // 0x28f3e8
    *(int32_t *)a3 = 2 * (int32_t)v1;
    char v2 = v1; // 0x28f3f1
    __asm_out_133(11, v2);
    int64_t v3 = unknown_ffffffffb3ace5fc(); // 0x28f3f6
    int64_t v4; // 0x28f3e8
    if (v2 - *(char *)&v4 >= 0) {
        // 0x28f414
        return unknown_441d8d1a();
    }
    int64_t v5 = 2 * v3 & 254; // 0x28f3fd
    int64_t v6 = v3 & -256; // 0x28f3fd
    *(int32_t *)-0x173269d605e473c6 = (int32_t)(v5 | v6);
    int32_t * v7 = (int32_t *)(a2 - 126); // 0x28f408
    *v7 = *v7 + (int32_t)a2;
    return v6 | (int64_t)*(char *)(v4 + v5);
}

// Address range: 0x28f4fa - 0x28f4fb
int64_t function_28f4fa(void) {
    // 0x28f4fa
    int64_t result; // 0x28f4fa
    return result;
}

// Address range: 0x28f555 - 0x28f557
int64_t function_28f555(int64_t a1) {
    // 0x28f555
    return __asm_wait(a1);
}

// Address range: 0x28f55d - 0x28f56d
int64_t function_28f55d(int64_t a1) {
    // 0x28f55d
    __asm_int(-16);
    int64_t v1; // 0x28f55d
    int64_t v2 = v1 & -256; // 0x28f55f
    uint16_t v3 = (int16_t)(v2 | (int64_t)*(char *)0x42d17ca101e84e00); // 0x28f568
    uint16_t v4 = (int16_t)v1 % 256; // 0x28f568
    return (v2 | (int64_t)(v3 / v4)) & -0xff01 | (int64_t)(256 * (v3 % v4));
}

// Address range: 0x28f56d - 0x28f570
int64_t function_28f56d(int64_t a1) {
    // 0x28f56d
    int64_t result; // 0x28f56d
    return result;
}

// Address range: 0x28f577 - 0x28f578
int64_t function_28f577(void) {
    // 0x28f577
    int64_t result; // 0x28f577
    return result;
}

// Address range: 0x28f58d - 0x28f58f
int64_t function_28f58d(void) {
    // 0x28f58d
    return function_28f577();
}

// Address range: 0x28f5a8 - 0x28f5a9
int64_t function_28f5a8(void) {
    // 0x28f5a8
    int64_t result; // 0x28f5a8
    return result;
}

// Address range: 0x28f6a5 - 0x28f6a7
int64_t function_28f6a5(void) {
    // 0x28f6a5
    int64_t v1; // 0x28f6a5
    return function_28f6aa(v1, v1);
}

// Address range: 0x28f6a8 - 0x28f6aa
int64_t function_28f6a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28f6a8
    int64_t result; // 0x28f6a8
    return result;
}

// Address range: 0x28f6aa - 0x28f6bf
int64_t function_28f6aa(int64_t a1, int64_t a2) {
    int64_t v1 = __asm_wait((int64_t)&g1) & 0x7bfe1700; // 0x28f6ae
    int64_t v2; // 0x28f6aa
    uint64_t v3 = v2 & 47 | v1 | 0x8401e8d0; // 0x28f6b3
    __asm_int(36);
    int64_t result = v1 | (v3 + 77) % 128 | 0x8401e800; // 0x28f6bb
    char * v4 = (char *)result; // 0x28f6bd
    *v4 = *v4 + (char)(v3 / 256);
    return result;
}

// Address range: 0x28f7c8 - 0x28f94b
int64_t function_28f7c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28f7c8
    __asm_wait((int64_t)&g1);
    unknown_a9eb1cf();
    abort();
    // UNREACHABLE
}

// Address range: 0x28f94b - 0x28fa76
int64_t function_28f94b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28f94b
    bool v1; // 0x28f94b
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x28f94b
    int64_t v3; // bp-56, 0x28f94b
    int64_t v4 = (int64_t)&v3; // 0x28f9e8
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x28fa0d
    v3 = a4;
    *v5 = v2;
    int64_t v6 = v3; // 0x28fa1e
    int64_t v7 = v4 + 24; // 0x28fa1f
    int64_t * v8 = (int64_t *)v7; // 0x28fa1f
    *v8 = v2;
    *v5 = 0x2f678834;
    *(int64_t *)(v4 - 8) = 0x28e2c5;
    v3 = 0x28e2c5;
    *(int64_t *)(v4 + 40) = *v5;
    int64_t * v9 = (int64_t *)(v4 + 16); // 0x28fa3b
    int64_t v10 = *v9; // 0x28fa3b
    *v5 = v10;
    v3 = v10;
    *v9 = *v8;
    *v5 = v7;
    int64_t v11; // 0x28f94b
    return function_c57b8(0x28e2c5, a2, (int32_t)a3, v6, v11, v11, 0x46191138);
}

// Address range: 0x28fa76 - 0x28fbdf
int64_t function_28fa76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6; // bp-40, 0x28fb17
    int64_t v2 = (int64_t)&v1; // 0x28fb4d
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x28fb64
    *v3 = 0x21bd031a;
    *(int64_t *)(v2 - 24) = a6;
    *(int64_t *)(v2 + 8) = *v3;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x28fb83
    *v4 = a4;
    *v3 = 0x28e4ef;
    *(int64_t *)(v2 + 24) = 0x28e4ef;
    *v3 = v2;
    v1 = v2 + 16;
    int64_t v5; // 0x28fa76
    return function_c57b8(a1, a2, (int32_t)a3, *v4, a5, v5, 0x31c6a6bf);
}

// Address range: 0x28fbdf - 0x28fd2e
int64_t function_28fbdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28fbdf
    bool v1; // 0x28fbdf
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x28fbdf
    int64_t v3 = v2; // bp-48, 0x28fc6c
    int64_t v4 = (int64_t)&v3; // 0x28fca7
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x28fcb3
    *v5 = a5;
    int64_t * v6 = (int64_t *)(v4 - 16); // 0x28fcba
    int64_t * v7 = (int64_t *)(v4 - 24); // 0x28fcbc
    *(int64_t *)(v4 - 32) = a2;
    int64_t v8 = v4 + 16; // 0x28fcc9
    *(int64_t *)v8 = v2;
    *v5 = 0x30d32bd2;
    *v6 = 0x7aa590c8;
    *(int64_t *)(v4 + 24) = *v5;
    *v5 = v3;
    *v6 = v3;
    v3 = v8;
    int64_t v9; // 0x28fbdf
    return function_c57b8(a1, a2, (int32_t)a3, a4, *v5, v9, 0x6bb6dde1);
}

// Address range: 0x28fd2e - 0x28fe79
int64_t function_28fd2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x28ebf6; // bp-48, 0x28fe5b
    int64_t v2; // 0x28fd2e
    int64_t result = function_c57b8(a1, a2, (int32_t)a3, a4, a5, v2, (int64_t)&v1 + 16); // 0x28fe74
    return result;
}

// Address range: 0x28fe79 - 0x28fff8
int64_t function_28fe79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x28fe79
    int64_t v1; // bp-24, 0x28fe79
    v1 = (int64_t)&v1;
    int64_t v2; // bp-48, 0x28fe79
    int64_t v3 = (int64_t)&v2; // 0x28ff86
    int64_t * v4 = (int64_t *)(v3 + 16); // 0x28ff92
    *v4 = a7;
    int64_t * v5 = (int64_t *)(v3 + 8); // 0x28ffb6
    *(int64_t *)(v3 + 40) = *v5;
    *v5 = v3 + 24;
    int64_t v6 = *v4; // 0x28ffe1
    *v5 = v6;
    v2 = v6;
    bool v7; // 0x28fe79
    return function_c57b8(a1, a2, (int32_t)a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2);
}

// Address range: 0x290033 - 0x29004c
int64_t function_290033(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x290033
    int64_t v1; // 0x290033
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 57); // 0x290035
    *v3 = *v3 + (char)a4;
    return (v2 + 36) % 256 | v2 & -256;
}

// Address range: 0x2d5b69 - 0x2d5c01
int64_t function_2d5b69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d5b69
    return function_cc59c(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x2d5c01 - 0x2d5d4b
int64_t function_2d5c01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x35f286ca; // bp-32, 0x2d5c70
    int64_t v2 = (int64_t)&v1; // 0x2d5c91
    int64_t v3 = v2 + 16; // 0x2d5ca8
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2d5ca8
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2d5cac
    *v4 = 0x2c7539fb;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x2d5cca
    *v6 = a4;
    *v5 = a7;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = a3;
    *v5 = a6;
    *(int64_t *)(v2 + 32) = *(int64_t *)v3;
    *v4 = v3;
    *v5 = v1;
    return function_cc59c(a1, a2, *v4, *v6, a5, a6, v1);
}

// Address range: 0x2d5d4b - 0x2d5e73
int64_t function_2d5d4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x1a4db93c; // bp-32, 0x2d5dab
    int64_t v2 = (int64_t)&v1; // 0x2d5dde
    int64_t v3 = v2 + 16; // 0x2d5de6
    int64_t * v4 = (int64_t *)v3; // 0x2d5de6
    int64_t v5 = *v4; // 0x2d5de6
    int64_t * v6 = (int64_t *)(v2 - 8); // 0x2d5de6
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x2d5dea
    *v7 = v5;
    *(int64_t *)(v2 - 24) = v5;
    *v6 = a4;
    *v4 = v1;
    *v6 = 0x5f76b1b3;
    *v7 = v5;
    *(int64_t *)(v2 + 32) = v1;
    *v6 = v2;
    v1 = v3;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x2d5e55
    v1 = v8;
    *v6 = v8;
    int64_t v9; // 0x2d5d4b
    return function_cc59c(a1, a2, v9, v9, v9, v9, v1);
}

// Address range: 0x2d5e73 - 0x2d5fa8
int64_t function_2d5e73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d5e73
    int64_t v1; // 0x2d5e73
    return function_cc59c(0x2d3a9c, a2, a3, a4, 0x50a930ff, v1, 0x2d433c54);
}

// Address range: 0x2d5fa8 - 0x2d60cf
int64_t function_2d5fa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d5fa8
    return function_cc59c(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x2d60cf - 0x2d6200
int64_t function_2d60cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d60cf
    return function_cc59c(a1, a2, a3, a4, a5, a6, 0x30852602);
}

// Address range: 0x2d6200 - 0x2d6331
int64_t function_2d6200(int64_t a1, int64_t a2) {
    // 0x2d6200
    int64_t v1; // bp-40, 0x2d6200
    int64_t v2 = (int64_t)&v1; // 0x2d6274
    int64_t * v3 = (int64_t *)(v2 + 32); // 0x2d6297
    int64_t v4 = *v3; // 0x2d6297
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x2d6297
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x2d629b
    *v6 = v4;
    *(int64_t *)(v2 - 24) = v4;
    int64_t v7 = v2 + 16; // 0x2d62aa
    int64_t * v8 = (int64_t *)v7; // 0x2d62aa
    int64_t v9 = *v8; // 0x2d62aa
    *v6 = v9;
    v1 = v4;
    *v8 = v4;
    *v5 = v9;
    *v3 = v1;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x2d62f4
    int64_t v11 = *v10; // 0x2d62f4
    v1 = v11;
    *v5 = v11;
    *v10 = *v8;
    v1 = v7;
    int64_t v12; // 0x2d6200
    return function_cc59c(a1, a2, v12, v12, v12, v12, 0x3dbcfd24);
}

// Address range: 0x2d6331 - 0x2d646d
int64_t function_2d6331(int64_t a1) {
    // 0x2d6331
    int64_t v1; // bp-48, 0x2d6331
    int64_t v2 = (int64_t)&v1; // 0x2d6431
    int64_t v3 = v2 + 8; // 0x2d6435
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 24); // 0x2d644f
    *(int64_t *)(v2 + 16) = v4;
    *(int64_t *)v3 = v4;
    int64_t v5; // 0x2d6331
    return function_cc59c(a1, v5, v5, v5, v5, v5, v5);
}

// Address range: 0x2d646d - 0x2d65be
int64_t function_2d646d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d646d
    int64_t v1; // 0x2d646d
    return function_cc59c(a1, a2, a3, a4, v1, v1, 310);
}

// Address range: 0x2d65be - 0x2d66ee
int64_t function_2d65be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x645b8f7c; // bp-32, 0x2d662b
    int64_t v2 = (int64_t)&v1; // 0x2d6672
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2d667a
    *v3 = 0x66f973bc;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x2d667f
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x2d6684
    *v5 = a3;
    *v4 = a4;
    int64_t v6 = v2 + 8; // 0x2d6691
    int64_t * v7 = (int64_t *)v6; // 0x2d6691
    *v7 = *v3;
    *v3 = 0x703b3972;
    *(int64_t *)(v2 + 32) = *v5;
    *v4 = *v3;
    *v3 = v1;
    *v4 = v1;
    v1 = *v7;
    *v3 = v6;
    int64_t v8; // 0x2d65be
    return function_cc59c(a1, a2, a3, v8, v8, v8, v1);
}

// Address range: 0x2d66ee - 0x2d682a
int64_t function_2d66ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d66ee
    int64_t v1; // 0x2d66ee
    return function_cc59c(a1, a2, a3, a4, a5, v1, 0x2d4b70);
}

// Address range: 0x2d685b - 0x2d685e
int64_t function_2d685b(int64_t a1) {
    // 0x2d685b
    int64_t result; // 0x2d685b
    return result;
}

// Address range: 0x445867 - 0x445868
int64_t function_445867(void) {
    // 0x445867
    int64_t result; // 0x445867
    return result;
}

// Address range: 0x44586c - 0x44586f
int64_t function_44586c(void) {
    // 0x44586c
    int64_t result; // 0x44586c
    return result;
}

// Address range: 0x445889 - 0x44588c
int64_t function_445889(int64_t a1) {
    // 0x445889
    int64_t result; // 0x445889
    return result;
}

// Address range: 0x4458b4 - 0x4458c3
int64_t function_4458b4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4458b4
    int64_t v1; // 0x4458b4
    __asm_outsd((int16_t)a3, (int32_t)v1);
    char * v2 = (char *)(a3 - 0x3976890d); // 0x4458b7
    *v2 = *v2 + (char)v1;
    return function_ffffffffc49810ea();
}

// Address range: 0x445901 - 0x445902
int64_t function_445901(void) {
    // 0x445901
    int64_t result; // 0x445901
    return result;
}

// Address range: 0x44592f - 0x445935
int64_t function_44592f(int64_t a1) {
    // 0x44592f
    return function_6d69bf45();
}

// Address range: 0x44593a - 0x44593c
int64_t function_44593a(void) {
    // 0x44593a
    int64_t v1; // 0x44593a
    return function_4459b7(v1);
}

// Address range: 0x44594e - 0x4459b6
int64_t function_44594e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44594e
    int64_t v1; // 0x44594e
    char v2 = v1; // 0x44594e
    bool v3; // 0x44594e
    char v4 = v3; // 0x44594e
    char v5 = v2 + 122 + v4; // 0x44594e
    *(char *)a1 = (char)v1;
    if (v5 < 0 == (v5 + v4 & (v2 ^ -128)) < 0) {
        // 0x4459a4
        return v1 & -256 | (int64_t)*(char *)-0x4dbfd5f05685675a;
    }
    // 0x445954
    __asm_in_134((int16_t)a3);
    return function_ffffffffd02c9ffb();
}

// Address range: 0x4459b7 - 0x4459c0
int64_t function_4459b7(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x2caa7524); // 0x4459b7
    int64_t result; // 0x4459b7
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x4459c9 - 0x445a60
int64_t function_4459c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a1 + 85); // 0x4459ca
    *v1 = *v1 - 1;
    int64_t v2; // 0x4459c9
    return v2 & -256 | (uint64_t)v2 % 256;
}
