/*
 * Targeted RetDec C for native executable gap queue batch 689.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x176caa-0x176eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x176faa-0x1770aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1770aa-0x1772aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1772aa-0x1774aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x301e1e-0x30201e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30201e-0x30221e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30241e-0x30261e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30261e-0x30281e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_176caa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_176d35(int64_t a1, int64_t a2, int64_t a3);
int64_t function_176d55(int64_t a1, int64_t a2, int64_t a3);
int64_t function_176d78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_176e23(void);
int64_t function_176e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_176f96();
int64_t function_176faa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_176fc9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_177063(void);
int64_t function_17708d(int64_t a1);
int64_t function_177098(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1770d2(int64_t a1);
int64_t function_177155(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17716c(void);
int64_t function_17716f(int64_t a1);
int64_t function_177175(void);
int64_t function_17717c(void);
int64_t function_1771a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1772a0(void);
int64_t function_1772d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_177358(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17744f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_177467(int64_t a1, int64_t a2, int64_t a3);
int64_t function_177481(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1ff977f();
int64_t function_200338d();
int64_t function_2d4ce8ef();
int64_t function_301e1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_301e6e(int64_t a1);
int64_t function_301ed8(int64_t a1, int64_t a2);
int64_t function_301f62(void);
int64_t function_301f71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_301fb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_301ff8(void);
int64_t function_301ffb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_301ffd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result);
int64_t function_30204b(void);
int64_t function_30204d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30204e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_302084(void);
int64_t function_3020d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30219a(int64_t a1);
int64_t function_30241e(void);
int64_t function_30241f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3024e5(int64_t a1, int64_t a2);
int64_t function_3024ec(int64_t a1);
int64_t function_30250c(void);
int64_t function_302544(void);
int64_t function_3025bb(void);
int64_t function_3025ed(void);
int64_t function_302619(int64_t a1, int64_t a2);
int64_t function_30272a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3027d6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3027dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3027ec(void);
int64_t function_302807(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5ff7060();
int64_t function_ffffffffad5c87c5();
int64_t unknown_28b2fd90();
int64_t unknown_30c07c11();
int64_t unknown_3abaffe6();
int64_t unknown_3b1d59c0();
int64_t unknown_46c77b91();
int64_t unknown_481970c1();
int64_t unknown_5665e9a0();
int64_t unknown_6676d970();
int64_t unknown_7395723c();
int64_t unknown_73f5eb79();
int64_t unknown_7402623();
int64_t unknown_78497e74();
int64_t unknown_bc44224();
int64_t unknown_c1d866f();
int64_t unknown_ffffffff820dec93();
int64_t unknown_ffffffff93965bf5();
int64_t unknown_ffffffffa1be967b();
int64_t unknown_ffffffffa22670c4();
int64_t unknown_ffffffffb48ce12f();
int64_t unknown_ffffffffc388af51();
int64_t unknown_ffffffffd3770df6();
int64_t unknown_ffffffffd7bdeb63();
int64_t unknown_ffffffffe83af73c();
int64_t unknown_fffffffff179549b();
int64_t unknown_ffffffffffaa13d7();

// Address range: 0x176caa - 0x176d33
int64_t function_176caa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x17fe17f8); // 0x176cb0
    int64_t v2; // 0x176caa
    *v1 = *v1 + (char)v2;
    if (a4 != 0) {
        // 0x176cbf
        return v2 + 0xb8f53e88 & 0xffffffff;
    }
    int64_t v3 = __asm_hlt(a1, a2, (int32_t)a3 ^ -0x5407a03e); // 0x176cce
    int64_t v4 = unknown_ffffffffffaa13d7(); // 0x176cd1
    if ((v3 & 0x4100) != 0) {
        int64_t result = unknown_ffffffffb48ce12f(); // 0x176d29
        *(char *)a1 = (char)a2;
        return result;
    }
    int32_t * v5 = (int32_t *)(v4 + 0x1dad9207); // 0x176cda
    *v5 = *v5 + (int32_t)v2;
    unknown_3abaffe6();
    __asm_int(-103);
    return unknown_ffffffff93965bf5();
}

// Address range: 0x176d35 - 0x176d4b
int64_t function_176d35(int64_t a1, int64_t a2, int64_t a3) {
    // 0x176d35
    int64_t v1; // 0x176d35
    int32_t v2 = *(int32_t *)(v1 + 0x1e80558); // 0x176d36
    bool v3; // 0x176d35
    int64_t v4 = v3 ? -1 : 1; // 0x176d44
    __asm_hlt(v4 + 0x90772d9e, v4 + a2, (int32_t)((0x100000000 * a3 >> 32) * (int64_t)v2 / 0x100000000));
    return function_200338d();
}

// Address range: 0x176d55 - 0x176d64
int64_t function_176d55(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a3 - 0x2dfe1735); // 0x176d55
    int64_t v2; // 0x176d55
    unsigned char v3 = *(char *)(v2 % 256 + (int64_t)((int32_t)v2 - v1)); // 0x176d61
    return v2 & -256 | (int64_t)v3;
}

// Address range: 0x176d78 - 0x176d7d
int64_t function_176d78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x176d78
    int64_t result; // 0x176d78
    return result;
}

// Address range: 0x176e23 - 0x176e29
int64_t function_176e23(void) {
    // 0x176e23
    return function_1ff977f();
}

// Address range: 0x176e60 - 0x176e78
int64_t function_176e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)((a4 & -256 | 12) - 0x70fe1712); // 0x176e64
    *v1 = *v1 ^ (int32_t)a3;
    return function_5ff7060();
}

// Address range: 0x176faa - 0x176fc8
int64_t function_176faa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffffffff; // 0x176faa
    int64_t v2; // 0x176faa
    unsigned char v3 = (char)v2 - *(char *)(a1 - 104 + 8 * v1); // 0x176fab
    int64_t v4 = v1; // 0x176faf
    if (v3 != 0 && (v2 & 0xffffff00 || (int64_t)v3) != 1) {
        v4 = function_176f96();
    }
    char * v5 = (char *)(v4 - 26); // 0x176fb1
    *v5 = *v5 + (char)(a3 / 256);
    return v2 & 0xffffffff;
}

// Address range: 0x176fc9 - 0x177000
int64_t function_176fc9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x176fc9
    int64_t v1; // 0x176fc9
    unsigned char v2 = *(char *)(v1 + 106); // 0x176fd1
    uint32_t v3 = *(int32_t *)(a4 - 8); // 0x176fd4
    int32_t * v4 = (int32_t *)(((a3 / 256 + a3) % 256 | a3 & -256) - 0x46e7555b); // 0x176fd7
    *v4 = *v4 >> 1;
    char * v5 = (char *)(a4 - 0x11054f3); // 0x176fe9
    *v5 = *v5 + (char)a4;
    uint32_t v6 = (int32_t)a4 % 32; // 0x176fef
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)((v1 & -256 | (int64_t)v2) - 0x3e70288d); // 0x176fef
        uint32_t v8 = *v7; // 0x176fef
        *v7 = v8 >> 32 - v6 | v8 << v6;
    }
    *(char *)0x18de2afc = *(char *)0x18de2afc + (char)(v3 / 256);
    bool v9; // 0x176fc9
    return function_2d4ce8ef((v9 ? -2 : 2) + (v1 + a1 & 0xffffffff));
}

// Address range: 0x177063 - 0x177068
int64_t function_177063(void) {
    // 0x177063
    return function_ffffffffad5c87c5();
}

// Address range: 0x17708d - 0x177095
int64_t function_17708d(int64_t a1) {
    // 0x17708d
    return unknown_ffffffff820dec93(a1);
}

// Address range: 0x177098 - 0x1770c3
int64_t function_177098(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x177098
    unknown_5665e9a0();
    *(char *)-0x13e6a6cb = *(char *)-0x13e6a6cb - 82;
    int32_t v1 = *(int32_t *)0x10c4dc5da; // 0x1770b1
    *(int32_t *)0x10c4dc5da = (int32_t)a3 - (int32_t)a4 + v1;
    return unknown_481970c1();
}

// Address range: 0x1770d2 - 0x1770db
int64_t function_1770d2(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x2a28b164); // 0x1770d2
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x1770d2
    return result;
}

// Address range: 0x177155 - 0x17715d
int64_t function_177155(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x7b01f08d); // 0x177155
    *v1 = *v1 / 2048;
    int64_t result; // 0x177155
    return result;
}

// Address range: 0x17716c - 0x17716d
int64_t function_17716c(void) {
    // 0x17716c
    int64_t result; // 0x17716c
    return result;
}

// Address range: 0x17716f - 0x177172
int64_t function_17716f(int64_t a1) {
    // 0x17716f
    int64_t result; // 0x17716f
    return result;
}

// Address range: 0x177175 - 0x177176
int64_t function_177175(void) {
    // 0x177175
    int64_t result; // 0x177175
    return result;
}

// Address range: 0x17717c - 0x17717d
int64_t function_17717c(void) {
    // 0x17717c
    int64_t result; // 0x17717c
    return result;
}

// Address range: 0x1771a3 - 0x1771f8
int64_t function_1771a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1771a3
    int64_t v1; // 0x1771a3
    bool v2; // 0x1771a3
    uint32_t v3 = (int32_t)v1 - 0x1d6e07c6 + (int32_t)v2; // 0x1771a3
    int64_t v4 = a4 - 1; // 0x1771a8
    int64_t v5 = v3; // 0x1771a8
    if (v4 != 0 && v3 != 0) {
        v5 = function_17717c();
    }
    // 0x1771aa
    unknown_3b1d59c0();
    if (v3 == 0) {
        function_177175();
    }
    // 0x1771c1
    *(char *)a1 = *(char *)a5;
    int64_t v6 = v2 ? -1 : 1; // 0x1771c1
    __asm_in(-86);
    int64_t v7 = v1 / 256 % 256 | (int64_t)(109 * *(int32_t *)(a4 + 0x4ecf21ff) & -256); // 0x1771c4
    int32_t * v8 = (int32_t *)(a1 + 0x520079f8 + v6); // 0x1771ca
    *v8 = *v8 + (int32_t)v7;
    *(int64_t *)(v5 & 0xffffffff) = v4;
    *(int32_t *)(a5 - 0x4c26a8b3 + v6) = (int32_t)v1;
    char * v9 = (char *)(v7 + 42); // 0x1771e1
    *v9 = *v9 + (char)v1;
    if (v4 != 1) {
        function_17716c();
    }
    // 0x1771eb
    return unknown_ffffffffd3770df6();
}

// Address range: 0x1772a0 - 0x1772a1
int64_t function_1772a0(void) {
    // 0x1772a0
    int64_t result; // 0x1772a0
    return result;
}

// Address range: 0x1772d5 - 0x1772e0
int64_t function_1772d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1772d5
    int64_t result; // 0x1772d5
    int32_t * v1 = (int32_t *)(256 * result & 0xff00 ^ a4); // 0x1772d7
    *v1 = *v1 - 0x2475a2be;
    return result;
}

// Address range: 0x177358 - 0x17742b
int64_t function_177358(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = 256 * a3 & 0xff00 | a3; // 0x17737d
    uint32_t v3 = *(int32_t *)0x2ff0d7013d00f8dc; // 0x17737f
    int64_t result = v3; // 0x17737f
    int64_t v4; // 0x177358
    int64_t v5 = (int64_t)(-125 * *(int32_t *)(v4 - 0x73fb17d9)); // 0x17738c
    *(int64_t *)v5 = -47;
    int32_t * v6 = (int32_t *)result; // 0x177395
    int32_t v7 = *v6 + v3; // 0x177395
    *v6 = v7;
    int16_t v8 = v2; // 0x177397
    *(int32_t *)v5 = __asm_insd(v8);
    if (v7 == 0) {
        // 0x1773d7
        return result;
    }
    int32_t * v9 = (int32_t *)(result + 0xdf1083c); // 0x17739a
    *v9 = *v9 + (int32_t)(int64_t)&v1;
    char * v10 = (char *)(v5 - 0x1bcccbaa); // 0x1773a1
    unsigned char v11 = *v10; // 0x1773a1
    unsigned char v12 = v11 + (char)v4; // 0x1773a1
    *v10 = v12;
    int64_t result2 = v4 & 0xffffff00 | (int64_t)__asm_in_133(v8); // 0x1773a7
    if (v12 < v11 || v12 == 0) {
        // 0x177425
        return result2 & 0xffffffff ^ 0x551001e8;
    }
    uint32_t v13 = (int32_t)v1 % 32; // 0x1773b3
    if (v13 != 0) {
        int32_t * v14 = (int32_t *)(v2 - 24); // 0x1773b3
        *v14 = *v14 >> v13;
    }
    // 0x1773d7
    return result2;
}

// Address range: 0x17744f - 0x177459
int64_t function_17744f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17744f
    int64_t v1; // 0x17744f
    return (v1 & 0xffffff00 | (int64_t)__asm_in_134(-24)) + v1 & 0xffffffff;
}

// Address range: 0x177467 - 0x177472
int64_t function_177467(int64_t a1, int64_t a2, int64_t a3) {
    // 0x177467
    bool v1; // 0x177467
    int64_t v2 = v1 ? -1 : 1; // 0x177468
    int64_t v3 = v2 + a1; // 0x177468
    int64_t v4; // 0x177467
    unknown_c1d866f(v3, v2 + a2, v4 & 0xffffffff);
    return v3 & 0xffffffff;
}

// Address range: 0x177481 - 0x1774a6
int64_t function_177481(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x177481
    *(int32_t *)a4 = (int32_t)a4 + 0x25f8f7fe;
    int64_t v1; // 0x177481
    unsigned char v2 = *(char *)&v1; // 0x177487
    int64_t v3; // 0x177481
    unsigned char v4 = *(char *)&v3; // 0x177487
    bool v5; // 0x177481
    int64_t v6 = v5 ? -1 : 1; // 0x177487
    int64_t v7 = v6 + a1; // 0x177487
    int64_t v8 = v6 + a2; // 0x177487
    v3 = v7;
    v1 = v8;
    int64_t result; // 0x177481
    if (v2 <= v4) {
        // 0x1774d6
        return result;
    }
    // 0x17748a
    unknown_28b2fd90(v7, v8);
    char * v9 = (char *)(result + 8); // 0x17748f
    *v9 = *v9 + (char)(a4 / 256);
    int64_t v10 = unknown_fffffffff179549b(); // 0x177495
    unsigned char v11 = *(char *)v1; // 0x1774a0
    *(char *)v3 = v11;
    return v10 & -256 | (int64_t)v11;
}

// Address range: 0x301e1e - 0x301e42
int64_t function_301e1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_bc44224(); // 0x301e1e
    unsigned char v2 = *(char *)(a1 - 48); // 0x301e23
    int64_t v3; // 0x301e1e
    char * v4 = (char *)((v3 & -256) - 0x17297bde); // 0x301e28
    unsigned char v5 = *v4; // 0x301e28
    *v4 = v5 / 2 | 128 * v5;
    int32_t * v6 = (int32_t *)(a1 - 0x17fec2ad); // 0x301e2e
    *v6 = *v6 + (int32_t)a4;
    int32_t * v7 = (int32_t *)(v1 % 256 * (int64_t)v2 | v1 & -0x10000); // 0x301e34
    *v7 = *v7 + (int32_t)a3;
    return __asm_hlt(a1, a2, (int32_t)unknown_7395723c());
}

// Address range: 0x301e6e - 0x301e6f
int64_t function_301e6e(int64_t a1) {
    // 0x301e6e
    int64_t result; // 0x301e6e
    return result;
}

// Address range: 0x301ed8 - 0x301ee0
int64_t function_301ed8(int64_t a1, int64_t a2) {
    // 0x301ed8
    int64_t result; // 0x301ed8
    return result;
}

// Address range: 0x301f62 - 0x301f63
int64_t function_301f62(void) {
    // 0x301f62
    int64_t result; // 0x301f62
    return result;
}

// Address range: 0x301f71 - 0x301f85
int64_t function_301f71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_73f5eb79(); // 0x301f73
    uint64_t v2 = v1 + 216; // 0x301f78
    int64_t v3 = v2 % 256 | v1 & -256; // 0x301f78
    char * v4 = (char *)(a3 - 99); // 0x301f7a
    int64_t v5; // 0x301f71
    *v4 = *v4 + (char)((uint64_t)v5 / 256);
    char * v6 = (char *)v3; // 0x301f7e
    char v7 = *v6; // 0x301f7e
    *v6 = v7 - (char)v2;
    int64_t result = v3; // 0x301f80
    if (v3 > (int64_t)v7) {
        result = function_301f62();
    }
    // 0x301f82
    return result;
}

// Address range: 0x301fb2 - 0x301fc6
int64_t function_301fb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x301fb2
    return unknown_ffffffffa22670c4();
}

// Address range: 0x301ff8 - 0x301ffa
int64_t function_301ff8(void) {
    // 0x301ff8
    int64_t v1; // 0x301ff8
    return function_301ffd(v1, v1, v1, v1, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x301ffb - 0x301ffd
int64_t function_301ffb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x301ffb
    int64_t result; // 0x301ffb
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x301ffd - 0x302012
int64_t function_301ffd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result) {
    // 0x301ffd
    int64_t v1; // 0x301ffd
    uint64_t v2 = v1;
    char * v3 = (char *)(a2 - 0x2f54d344); // 0x302001
    *v3 = *v3 + (char)(v2 / 256);
    char * v4 = (char *)((a4 & 0xffffffff) - 81); // 0x302007
    *v4 = *v4 + (char)v2;
    unknown_30c07c11();
    __asm_int3();
    return result;
}

// Address range: 0x30204b - 0x30204d
int64_t function_30204b(void) {
    // 0x30204b
    int64_t v1; // 0x30204b
    return function_30204e(v1, v1, v1);
}

// Address range: 0x30204d - 0x30204e
int64_t function_30204d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30204d
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x30204d
    return result;
}

// Address range: 0x30204e - 0x302079
int64_t function_30204e(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)0x13d2d47db00b374; // 0x302050
    int64_t v2; // 0x30204e
    int64_t v3 = v2 & -0x10000 | (int64_t)v1 | 0x8000; // 0x302050
    *(int32_t *)a1 = (int32_t)v2;
    bool v4; // 0x30204e
    int64_t v5 = v4 ? -4 : 4; // 0x302059
    int64_t v6 = v5 + a1; // 0x302059
    int64_t v7 = v5 + a2; // 0x302059
    char * v8 = (char *)v3; // 0x30205a
    *v8 = *v8 + v1;
    char * v9 = (char *)(v6 + 0x13d0000 + v3); // 0x30205c
    *v9 = *v9 ^ -128;
    char * v10 = (char *)(3 * v7); // 0x302065
    *v10 = *v10 + (char)a3;
    return unknown_78497e74(v6, v7);
}

// Address range: 0x302084 - 0x302085
int64_t function_302084(void) {
    // 0x302084
    int64_t result; // 0x302084
    return result;
}

// Address range: 0x3020d5 - 0x302190
int64_t function_3020d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 121); // 0x3020d5
    int64_t v2; // 0x3020d5
    *v1 = *v1 ^ (char)(v2 / 256);
    char v3 = (char)(v2 / 256) | 5; // 0x3020d9
    if (v3 < 0) {
        function_302084();
    }
    int64_t v4 = (__asm_int1() & 0xffffffff | 0x100000000 * a3) % (v2 & 0xffffffff); // 0x3020e2
    int32_t v5 = v4; // 0x30212e
    int32_t v6 = a1;
    int32_t v7 = v2;
    uint32_t v8 = (int32_t)a4 >> 22; // 0x302125
    int64_t v9 = v8; // 0x302125
    *(char *)(a1 + 91) = -24;
    int32_t * v10 = (int32_t *)((256 * (int64_t)v3 | v2 & -0xff01) + v9); // 0x30212e
    int32_t v11 = *v10 + v5; // 0x30212e
    unsigned char v12 = llvm_ctpop_i8((char)v11); // 0x30212e
    *v10 = v11;
    while (v12 % 2 != 0) {
        int64_t v13 = unknown_ffffffffe83af73c(); // 0x302136
        *(int32_t *)-0x16efa7be = *(int32_t *)-0x16efa7be + v6;
        int64_t v14 = v13 + 0x6867546c; // 0x302141
        __asm_out_135(-122, (int32_t)v14);
        int32_t * v15 = (int32_t *)((v14 & 0xffffffff) - 0x5bc443fd); // 0x30214a
        *v15 = *v15 + v5;
        int64_t v16 = v14 & 0xffffffec; // 0x302150
        int32_t * v17 = (int32_t *)(v16 + 0x450c3a0a); // 0x302155
        int32_t v18 = *v17; // 0x302155
        int32_t v19 = v18 + v7; // 0x302155
        *v17 = v19;
        uint32_t v20 = v8 % 32; // 0x30215b
        bool v21 = ((v19 ^ v18) & (v19 ^ v7)) < 0; // 0x30215b
        if (v20 != 0) {
            int32_t * v22 = (int32_t *)v16; // 0x30215b
            uint32_t v23 = *v22; // 0x30215b
            int32_t v24 = v23 >> 32 - v20 | v23 << v20; // 0x30215b
            *v22 = v24;
            v21 = v20 == 1 ? v24 % 2 != (int32_t)(v24 < 0) : ((v19 ^ v18) & (v19 ^ v7)) < 0;
        }
        int64_t result = unknown_ffffffffd7bdeb63(); // 0x30215d
        if (v19 < 0 == v21) {
            if (v8 == 0) {
                // 0x30218b
                return unknown_46c77b91();
            }
            int32_t * v25 = (int32_t *)((v4 & 0xffffffff) - 0x47d41aa3); // 0x302169
            *v25 = *v25 + v6;
            return result;
        }
        v8 = (int32_t)v9 >> 22;
        v9 = v8;
        *(char *)(a1 + 91) = -24;
        v10 = (int32_t *)((256 * (int64_t)v3 | v2 & -0xff01) + v9);
        v11 = *v10 + v5;
        v12 = llvm_ctpop_i8((char)v11);
        *v10 = v11;
    }
    // 0x302170
    unknown_ffffffffa1be967b();
    int64_t v26; // 0x3020d5
    return (int64_t)&v26;
}

// Address range: 0x30219a - 0x30219b
int64_t function_30219a(int64_t a1) {
    // 0x30219a
    int64_t result; // 0x30219a
    return result;
}

// Address range: 0x30241e - 0x30241f
int64_t function_30241e(void) {
    // 0x30241e
    int64_t result; // 0x30241e
    return result;
}

// Address range: 0x30241f - 0x3024e4
int64_t function_30241f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x30241f
    int64_t v1; // 0x30241f
    int64_t v2 = v1;
    int64_t v3 = a2;
    uint16_t v4 = (int16_t)a1; // 0x30242b
    uint16_t v5 = (int16_t)(a3 / 256) % 256; // 0x30242b
    int64_t v6 = a1 & 0xffff0000 | (int64_t)(v4 / v5 % 256) | (int64_t)(256 * (v4 % v5)); // 0x30242b
    int64_t v7 = 257 * v2 & 0xff00 | v2 & -0xff01; // 0x30242d
    int32_t * v8 = (int32_t *)v6; // 0x302431
    *v8 = *v8 + (int32_t)v1;
    int64_t v9; // 0x30241f
    int32_t v10 = *(int32_t *)&v9; // 0x302435
    *(int32_t *)(v1 & 0xffffffff) = v10 | (int32_t)v6 | -0x43fe1756;
    *(char *)(v7 + 0x1e8c5ad) = (char)a3;
    int32_t * v11 = (int32_t *)(v7 - 20); // 0x302482
    bool v12; // 0x30241f
    *v11 = *v11 + (int32_t)(v3 + (v12 ? 0xfffffffc : 4));
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x3024e5 - 0x3024ec
int64_t function_3024e5(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 0x570e1d7a); // 0x3024e5
    int64_t v2; // 0x3024e5
    bool v3; // 0x3024e5
    return v1 + (int32_t)v2 + (int32_t)v3;
}

// Address range: 0x3024ec - 0x3024ef
int64_t function_3024ec(int64_t a1) {
    // 0x3024ec
    int64_t result; // 0x3024ec
    return result;
}

// Address range: 0x30250c - 0x302512
int64_t function_30250c(void) {
    // 0x30250c
    int64_t v1; // 0x30250c
    return v1 & 0x13536c9d;
}

// Address range: 0x302544 - 0x302545
int64_t function_302544(void) {
    // 0x302544
    int64_t result; // 0x302544
    return result;
}

// Address range: 0x3025bb - 0x3025bc
int64_t function_3025bb(void) {
    // 0x3025bb
    int64_t result; // 0x3025bb
    return result;
}

// Address range: 0x3025ed - 0x3025ee
int64_t function_3025ed(void) {
    // 0x3025ed
    int64_t result; // 0x3025ed
    return result;
}

// Address range: 0x302619 - 0x3026fe
int64_t function_302619(int64_t a1, int64_t a2) {
    // 0x302619
    bool v1; // 0x302619
    if (!v1) {
        function_3025bb();
    }
    int64_t v2 = unknown_7402623(); // 0x30261b
    int32_t * v3 = (int32_t *)(a2 + 58 + 8 * a2); // 0x30262b
    *v3 = *v3 + (int32_t)a1;
    int64_t v4 = a2; // 0x30262f
    unsigned char v5 = *(char *)v4; // 0x302633
    int64_t v6 = v2 & -256 & -256 | (int64_t)v5; // 0x302633
    v4 += (v1 ? -1 : 1);
    int64_t v7; // 0x302619
    unsigned char v8 = v5 | (char)(v7 / 256); // 0x302634
    int32_t * v9 = (int32_t *)v6; // 0x302636
    *v9 = *v9 + (int32_t)v4;
    int64_t v10; // 0x302619
    unsigned char v11 = v8 + (char)v10; // 0x30263a
    int64_t v12 = v6; // 0x30263c
    if (v11 != 0) {
        v12 = function_3025ed();
    }
    int64_t v13 = 256 * (int64_t)v8 | v7 & -0xff01; // 0x302634
    int64_t v14 = v10 & -256 | (int64_t)v11; // 0x30263a
    *(char *)0x4f53a8c21501e808 = (char)v12;
    __asm_outsd((int16_t)v14, *(int32_t *)v4);
    int64_t v15 = unknown_ffffffffc388af51(); // 0x30264b
    *(char *)a1 = (char)v15;
    int64_t v16 = v14 | a1 + (v1 ? 0xffffffff : 1);
    int32_t v17 = v15; // 0x302655
    int32_t v18 = v13; // 0x302655
    int32_t v19 = v17 + v18; // 0x302655
    int64_t v20 = v16 & 0xffffffff; // 0x302657
    while (v19 < 0 == ((v19 ^ v17) & (v19 ^ v18)) < 0 == (v19 != 0)) {
        // 0x302631
        v5 = *(char *)v4;
        v6 = (int64_t)v19 & -256 | (int64_t)v5;
        v4 += (v1 ? -1 : 1);
        v8 = v5 | (char)(v13 / 256);
        v9 = (int32_t *)v6;
        *v9 = *v9 + (int32_t)v4;
        v11 = v8 + (char)v14;
        v12 = v6;
        if (v11 != 0) {
            v12 = function_3025ed();
        }
        // 0x30263e
        v13 = 256 * (int64_t)v8 | v13 & -0xff01;
        v14 = v14 & -256 | (int64_t)v11;
        *(char *)0x4f53a8c21501e808 = (char)v12;
        __asm_outsd((int16_t)v14, *(int32_t *)v4);
        v15 = unknown_ffffffffc388af51();
        *(char *)v20 = (char)v15;
        v16 = v14 | v20 + (v1 ? 0xffffffff : 1);
        v17 = v15;
        v18 = v13;
        v19 = v17 + v18;
        v20 = v16 & 0xffffffff;
    }
    unsigned char v21 = (char)v19 ^ -2; // 0x302666
    int64_t result = unknown_6676d970((int32_t)v16); // 0x30266a
    *(char *)0x2501e89bae216b7f = (char)result;
    if (v21 > 246 || (v21 > 246 ? -126 : -127) >= v21 + 9) {
        // 0x30267a
        return (result + 211) % 256 | result & -256;
    }
    // 0x3026f6
    int64_t v22; // 0x302619
    *(int32_t *)0xe8c8582a = *(int32_t *)0xe8c8582a + (int32_t)v22;
    return result;
}

// Address range: 0x30272a - 0x302792
int64_t function_30272a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30272a
    *(char *)a4 = (char)a5 + (char)a4;
    int64_t v1; // 0x30272a
    return v1 & 0x5c6d584f | 0xa392a7b0;
}

// Address range: 0x3027d6 - 0x3027dd
int64_t function_3027d6(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 79); // 0x3027d6
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x3027d6
    *(char *)v2 = *(char *)&v2 + (char)a3;
    return function_3027ec();
}

// Address range: 0x3027dd - 0x3027ec
int64_t function_3027dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3027dd
    int64_t v1; // 0x3027dd
    bool v2; // 0x3027dd
    *(int64_t *)a5 = v1 + a5 + (int64_t)v2;
    int64_t result = a2 & 0xffffffff; // 0x3027e0
    *(int32_t *)a1 = (int32_t)a2;
    char * v3 = (char *)(result + 26); // 0x3027e5
    *v3 = *v3 + (char)v1;
    return result;
}

// Address range: 0x3027ec - 0x3027f5
int64_t function_3027ec(void) {
    // 0x3027ec
    int64_t v1; // 0x3027ec
    int64_t v2 = v1;
    return (v2 + 198) % 256 | v2 & -256;
}

// Address range: 0x302807 - 0x30280a
int64_t function_302807(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x302807
    int64_t result; // 0x302807
    return result;
}
