/*
 * Targeted RetDec C for native executable gap queue batch 596.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x120346-0x120546 rank=- name=- kind=- bytes=- uncovered=-
 *   0x120546-0x120746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x120b46-0x120d46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f619e-0x3f639e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f639e-0x3f659e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f659e-0x3f679e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f679e-0x3f699e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f699e-0x3f6b9e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
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

int64_t function_1202e8();
int64_t function_120327();
int64_t function_120346(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1203aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12048a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_120496(void);
int64_t function_120532(void);
int64_t function_1205a3(void);
int64_t function_1205f4(void);
int64_t function_1206d4(void);
int64_t function_12073f(void);
int64_t function_120ae7();
int64_t function_120b46(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_120c00(void);
int64_t function_120c1b(int64_t a1);
int64_t function_120cbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_120ce5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_120d00(void);
int64_t function_120d3b(void);
int64_t function_1949b283();
int64_t function_31428dcf();
int64_t function_3f6177();
int64_t function_3f619e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f62bd(int64_t a1);
int64_t function_3f637a(void);
int64_t function_3f6382(int64_t a1);
int64_t function_3f6386(int64_t a1);
int64_t function_3f63c0(void);
int64_t function_3f63cf(void);
int64_t function_3f63ea(void);
int64_t function_3f6401(void);
int64_t function_3f641f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f64d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3f6531(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f6567(int64_t a1, int64_t a2);
int64_t function_3f656f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f65b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f65e2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3f65fd(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t function_3f6605(void);
int64_t function_3f6607(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f662a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f6630(int64_t a1);
int64_t function_3f6641(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f66ce(void);
int64_t function_3f673b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f6761(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f6763(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f67c0(void);
int64_t function_3f67e9(void);
int64_t function_3f6802(void);
int64_t function_3f687e(void);
int64_t function_3f6927(void);
int64_t function_3f6935(void);
int64_t function_3f6948(int64_t a1, int64_t a2);
int64_t function_3f695c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f6a81(void);
int64_t function_3f6ac7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f6afc(void);
int64_t function_3f6b28(int64_t a1);
int64_t function_3f6b49(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5a8b039e();
int64_t function_ffffffff8b826589();
int64_t function_ffffffffb58095e5();
int64_t function_ffffffffc552e1b9();
int64_t function_ffffffffd40d65b2();
int64_t function_ffffffffd775c8d1();
int64_t unknown_266f1ada();
int64_t unknown_3d13eb7c();
int64_t unknown_64516006();
int64_t unknown_ce3b406();
int64_t unknown_ffffffff88afda62();
int64_t unknown_ffffffffcdeee3cd();
int64_t unknown_ffffffffe3ddb2f2();
int64_t unknown_ffffffffeeafcef9();
int64_t unknown_fffffffff9f8008b();
int64_t unknown_fffffffffd73361c();

// Address range: 0x120346 - 0x120395
int64_t function_120346(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x120346
    int64_t v1; // 0x120346
    uint32_t v2 = (int32_t)v1; // 0x120346
    int64_t v3; // 0x120346
    if (v2 >= 0xd19ef702) {
        v3 = function_1202e8();
    }
    int64_t v4 = v3;
    if ((a4 - v1 & 0xffffffff) == 1) {
        // 0x120355
        *(char *)v4 = 2 * (char)v4;
        return a3 + a1 + (int64_t)(v2 < 0xd19ef701) & 0xffffffff;
    }
    int64_t v5 = v4; // 0x120373
    if ((int32_t)a4 >= (int32_t)v1) {
        v5 = function_120327();
    }
    // 0x120375
    __asm_out((int16_t)a3, (char)v5);
    unknown_3d13eb7c();
    return unknown_fffffffff9f8008b();
}

// Address range: 0x1203aa - 0x120472
int64_t function_1203aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1203aa
    int64_t v1; // 0x1203aa
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = v2 % 256 ^ a4; // 0x1203b3
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t * v5 = (int32_t *)v4; // 0x1203bf
    int32_t v6 = v4;
    int32_t * v7 = (int32_t *)(v4 - 0x65fb0f84); // 0x1203c1
    char * v8 = (char *)(4 * v2 + a2); // 0x1203b6
    int64_t v9 = v1 & -256 | (int64_t)*(char *)0x1e801074244de0a; // 0x1203b5
    *v8 = *v8 + (char)(v2 ^ a4);
    uint32_t v10 = *v5; // 0x1203bf
    uint32_t v11 = v10 + v6; // 0x1203bf
    *v5 = v11;
    uint32_t v12 = *v7; // 0x1203c1
    uint32_t v13 = (int32_t)(v11 < v10) + (int32_t)v9; // 0x1203c1
    int32_t v14 = v12 - v13; // 0x1203c1
    *v7 = v14;
    v9 = unknown_ffffffffcdeee3cd();
    while (v12 < v13) {
        // 0x1203b6
        *v8 = *v8 + (char)(v2 ^ a4);
        v10 = *v5;
        v11 = v10 + v6;
        *v5 = v11;
        v12 = *v7;
        v13 = (int32_t)(v11 < v10) + (int32_t)v9;
        v14 = v12 - v13;
        *v7 = v14;
        v9 = unknown_ffffffffcdeee3cd();
    }
    unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x1203c1
    int64_t v16 = unknown_266f1ada(); // 0x1203d4
    if (v15 % 2 != 0) {
        int32_t * v17 = (int32_t *)(v16 - 0x60fd00f7); // 0x1203e0
        *v17 = *v17 + v6;
        *(char *)v3 = (char)v16;
        bool v18; // 0x1203aa
        int64_t v19 = v3 + (v18 ? -1 : 1); // 0x1203e8
        int32_t * v20 = (int32_t *)(a2 - 0xffed57d); // 0x1203eb
        int32_t v21 = a2; // 0x1203eb
        *v20 = *v20 + v21;
        unknown_ffffffffeeafcef9(v19);
        __asm_hlt();
        unknown_ce3b406();
        int32_t * v22 = (int32_t *)(v19 - 98); // 0x120410
        *v22 = *v22 | v21;
        return (int64_t)*(int32_t *)-0x6ffe1730a623faf8;
    }
    int64_t result = unknown_fffffffffd73361c(); // 0x120416
    unsigned char v23 = (char)result; // 0x12041b
    char v24 = *(char *)&v3; // 0x12041b
    char v25 = v23 - v24; // 0x12041b
    if (((v25 ^ v23) & (v24 ^ v23)) < 0 || llvm_ctpop_i8(v25) % 2 != 0) {
        // 0x120420
        return result;
    }
    char * v26 = (char *)result; // 0x120466
    unsigned char v27 = *v26; // 0x120466
    char v28 = v27 - v23; // 0x120466
    *v26 = v28;
    if (v27 < v23 || v28 == 0) {
        // 0x12046a
        return (result + 4) % 256 | result & (256 * a3 | -0x10000);
    }
    // 0x120420
    return result;
}

// Address range: 0x12048a - 0x120494
int64_t function_12048a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12048a
    int64_t result; // 0x12048a
    int32_t * v1 = (int32_t *)(result - 0x345705 + result); // 0x12048a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x120496 - 0x120497
int64_t function_120496(void) {
    // 0x120496
    int64_t result; // 0x120496
    return result;
}

// Address range: 0x120532 - 0x120533
int64_t function_120532(void) {
    // 0x120532
    int64_t result; // 0x120532
    return result;
}

// Address range: 0x1205a3 - 0x1205a8
int64_t function_1205a3(void) {
    // 0x1205a3
    return function_ffffffffd40d65b2();
}

// Address range: 0x1205f4 - 0x1205f5
int64_t function_1205f4(void) {
    // 0x1205f4
    int64_t result; // 0x1205f4
    return result;
}

// Address range: 0x1206d4 - 0x1206d5
int64_t function_1206d4(void) {
    // 0x1206d4
    int64_t result; // 0x1206d4
    return result;
}

// Address range: 0x12073f - 0x120740
int64_t function_12073f(void) {
    // 0x12073f
    int64_t result; // 0x12073f
    return result;
}

// Address range: 0x120b46 - 0x120b78
int64_t function_120b46(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    uint64_t v2 = a4 - 1; // 0x120b46
    int64_t v3; // 0x120b46
    bool v4; // 0x120b46
    if (v2 != 0 && !v4) {
        v3 = function_120ae7();
    }
    int64_t v5 = v3 & -0xff01 | 256 * (64 * (int64_t)v4 | 128 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4); // 0x120b48
    *(char *)(a2 + 0x1e8a285) = 0;
    int64_t v6 = -44; // bp-8, 0x120b50
    uint16_t v7 = (int16_t)v5 | 512; // 0x120b52
    uint16_t v8 = (int16_t)*(char *)&v1; // 0x120b52
    unsigned char v9 = (char)(v7 / v8); // 0x120b54
    int64_t v10 = v9 > 203 ? 0x54caaa8b : 0x54caaa8a; // 0x120b56
    *(int32_t *)(unknown_ffffffff88afda62() & 0xffffffff) = (int32_t)a1;
    int64_t result = a1 & 0xffffffff ^ 123; // 0x120b66
    int32_t * v11 = (int32_t *)(a4 - 0x4563fb19 + 8 * v2); // 0x120b6a
    *v11 = *v11 + (int32_t)(int64_t)&v6;
    char * v12 = (char *)result; // 0x120b71
    int64_t v13; // 0x120b46
    *v12 = *v12 | (char)((uint64_t)v13 / 256);
    *(char *)v1 = *(char *)&v1 + (char)(v2 / 256);
    int32_t v14 = *(int32_t *)((v5 & 0xffff0000 | (int64_t)(256 * (v7 % v8)) | (int64_t)(v9 + 52)) - v10 & 0xffffffff); // 0x120b75
    __asm_outsd((int16_t)v1, v14);
    return result;
}

// Address range: 0x120c00 - 0x120c01
int64_t function_120c00(void) {
    // 0x120c00
    int64_t result; // 0x120c00
    return result;
}

// Address range: 0x120c1b - 0x120c24
int64_t function_120c1b(int64_t a1) {
    // 0x120c1b
    int64_t result; // 0x120c1b
    return result;
}

// Address range: 0x120cbf - 0x120cca
int64_t function_120cbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x120cbf
    int64_t v1; // 0x120cbf
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x120cbf
    *v2 = *v2 + (int32_t)a4;
    int32_t v3; // 0x120cbf
    *(int32_t *)(v1 - 0x1b8d5910) = (int32_t)(int64_t)&v3;
    return function_120d3b();
}

// Address range: 0x120ce5 - 0x120cf7
int64_t function_120ce5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x120ce5
    unknown_ffffffffe3ddb2f2(a1, a2, a3);
    return function_ffffffff8b826589();
}

// Address range: 0x120d00 - 0x120d08
int64_t function_120d00(void) {
    // 0x120d00
    return unknown_64516006();
}

// Address range: 0x120d3b - 0x120d3e
int64_t function_120d3b(void) {
    // 0x120d3b
    int64_t result; // 0x120d3b
    return result;
}

// Address range: 0x3f619e - 0x3f62a5
int64_t function_3f619e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f619e
    int64_t result; // 0x3f619e
    bool v1; // 0x3f619e
    if (v1 || v1) {
        // 0x3f61e1
        return result;
    }
    int64_t v2; // 0x3f619e
    // 0x3f61d6
    *(char *)a1 = (char)a2;
    char v3 = *(char *)(a1 + 0x6d7e405 + (v1 ? -1 : 1)); // 0x3f61d9
    if (llvm_ctpop_i8((char)v2 - v3) % 2 == 0) {
        result = function_3f6177();
    }
    // 0x3f61e1
    return result;
}

// Address range: 0x3f62bd - 0x3f62be
int64_t function_3f62bd(int64_t a1) {
    // 0x3f62bd
    int64_t result; // 0x3f62bd
    return result;
}

// Address range: 0x3f637a - 0x3f637f
int64_t function_3f637a(void) {
    // 0x3f637a
    return function_ffffffffd775c8d1();
}

// Address range: 0x3f6382 - 0x3f6385
int64_t function_3f6382(int64_t a1) {
    // 0x3f6382
    int64_t result; // 0x3f6382
    return result;
}

// Address range: 0x3f6386 - 0x3f6389
int64_t function_3f6386(int64_t a1) {
    // 0x3f6386
    int64_t result; // 0x3f6386
    return result;
}

// Address range: 0x3f63c0 - 0x3f63c3
int64_t function_3f63c0(void) {
    // 0x3f63c0
    int64_t result; // 0x3f63c0
    return result;
}

// Address range: 0x3f63cf - 0x3f63d0
int64_t function_3f63cf(void) {
    // 0x3f63cf
    int64_t result; // 0x3f63cf
    return result;
}

// Address range: 0x3f63ea - 0x3f63eb
int64_t function_3f63ea(void) {
    // 0x3f63ea
    int64_t result; // 0x3f63ea
    return result;
}

// Address range: 0x3f6401 - 0x3f6402
int64_t function_3f6401(void) {
    // 0x3f6401
    int64_t result; // 0x3f6401
    return result;
}

// Address range: 0x3f641f - 0x3f64b0
int64_t function_3f641f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f641f
    int64_t result; // 0x3f641f
    bool v1; // 0x3f641f
    if (!v1) {
        // 0x3f642c
        return result;
    }
    int64_t v2 = function_3f63cf(); // 0x3f641f
    if (!v1) {
        int16_t v3 = a3; // 0x3f64a6
        __asm_outsb(v3, (char)result);
        *(int32_t *)a1 = __asm_insd(v3);
        return v2 & 0x7500f622;
    }
    int64_t v4 = v2; // 0x3f6433
    if (!v1) {
        v4 = function_3f63ea();
    }
    if (!v1) {
        int64_t v5 = __asm_int1(a1); // 0x3f643c
        *(char *)a3 = 123;
        return v5 + a4 & 94 | v5 & -256;
    }
    // 0x3f646d
    while (!v1) {
        // continue -> 0x3f646d
    }
    // 0x3f646f
    return v4 + 0x97b9ccb3 & 0xffffffff;
}

// Address range: 0x3f64d4 - 0x3f6501
int64_t function_3f64d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3f64d4
    int64_t v1; // 0x3f64d4
    if (a4 == 1) {
        // 0x3f64da
        return v1 & 0xffffffff;
    }
    // 0x3f64fb
    return v1 & 0xffffffad | 82;
}

// Address range: 0x3f6531 - 0x3f6546
int64_t function_3f6531(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f6531
    int64_t result; // 0x3f6531
    int32_t * v1 = (int32_t *)(result + 116); // 0x3f6533
    uint32_t v2 = *v1; // 0x3f6533
    uint32_t v3 = (int32_t)result; // 0x3f6533
    int32_t v4 = v2 - v3; // 0x3f6533
    *v1 = v4;
    if (v2 < v3 || v4 == 0) {
        // 0x3f6538
        *(int32_t *)((a2 | a1) & 0xffffffff) = __asm_insd((int16_t)a3);
        return function_31428dcf();
    }
    // 0x3f6569
    return result;
}

// Address range: 0x3f6567 - 0x3f6569
int64_t function_3f6567(int64_t a1, int64_t a2) {
    // 0x3f6567
    int64_t result; // 0x3f6567
    *(char *)a2 = (char)(result / 256 | result);
    return result;
}

// Address range: 0x3f656f - 0x3f6593
int64_t function_3f656f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f656f
    int64_t v1; // 0x3f656f
    int64_t v2 = (v1 | 0x5078ceb3) + 0xe4091720 & 0xff8ff3cf ^ 0x287ab328; // 0x3f6580
    int32_t * v3 = (int32_t *)((v1 & -0xff01 | (int64_t)&g3) + 55); // 0x3f658d
    *v3 = *v3 - 1;
    return (v2 - ((int64_t)&g2 >> 8)) % 256 | v2 & 0xfffff300;
}

// Address range: 0x3f65b8 - 0x3f65c0
int64_t function_3f65b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f65b8
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x3f65b8
    return result;
}

// Address range: 0x3f65e2 - 0x3f65e7
int64_t function_3f65e2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3f65e2
    int64_t v1; // 0x3f65e2
    int64_t v2 = v1;
    bool v3; // 0x3f65e2
    *(char *)v2 = (char)v2 + (char)(a4 / 256) + (char)v3;
    return function_3f6605();
}

// Address range: 0x3f65fd - 0x3f6605
int64_t function_3f65fd(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x3f65fd
    if (v1 != 0) {
        function_3f6630(a1);
    }
    // 0x3f65ff
    return 256 * v1 & 0xff00 | v1 & 0xffffffff;
}

// Address range: 0x3f6605 - 0x3f6606
int64_t function_3f6605(void) {
    // 0x3f6605
    int64_t result; // 0x3f6605
    return result;
}

// Address range: 0x3f6607 - 0x3f6611
int64_t function_3f6607(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 119); // 0x3f6607
    int64_t v2; // 0x3f6607
    *v1 = *v1 & (char)v2;
    return function_5a8b039e();
}

// Address range: 0x3f662a - 0x3f662f
int64_t function_3f662a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f662a
    int64_t v1; // 0x3f662a
    return function_3f65fd(a1, a2, *(int32_t *)(a3 - 63) | (int32_t)a3, v1);
}

// Address range: 0x3f6630 - 0x3f6641
int64_t function_3f6630(int64_t a1) {
    // 0x3f6630
    int64_t v1; // 0x3f6630
    uint64_t v2 = v1 + 84; // 0x3f6639
    *(char *)0xe442b523 = (char)v2;
    return v2 % 256 | v1 & -256;
}

// Address range: 0x3f6641 - 0x3f664b
int64_t function_3f6641(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f6641
    int64_t v1; // 0x3f6641
    __asm_out_134(-15, (int32_t)v1);
    return v1 + 0x6292f5ce & 0xffffffff;
}

// Address range: 0x3f66ce - 0x3f66d1
int64_t function_3f66ce(void) {
    // 0x3f66ce
    int64_t result; // 0x3f66ce
    return result;
}

// Address range: 0x3f673b - 0x3f6747
int64_t function_3f673b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x3f673d
    if (v1 != 0) {
        char * v2 = (char *)(a1 - 0x70696e9c); // 0x3f673d
        unsigned char v3 = *v2; // 0x3f673d
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    return function_3f6763(a1, a2, a3, a4);
}

// Address range: 0x3f6761 - 0x3f6763
int64_t function_3f6761(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f6761
    int64_t result; // 0x3f6761
    return result;
}

// Address range: 0x3f6763 - 0x3f6777
int64_t function_3f6763(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f6763
    int64_t v1; // 0x3f6763
    bool v2; // 0x3f6763
    uint32_t v3 = 2 * (int32_t)v1 + (int32_t)v2; // 0x3f6763
    *(char *)(v1 + 119) = -1;
    int32_t * v4 = (int32_t *)(int64_t)v3; // 0x3f6769
    *v4 = *v4 & (int32_t)a3;
    int64_t v5; // 0x3f6763
    *(char *)a1 = *(char *)&v5;
    return (int64_t)(0x10000 * v3 / 0x10000);
}

// Address range: 0x3f67c0 - 0x3f67c5
int64_t function_3f67c0(void) {
    // 0x3f67c0
    return function_ffffffffc552e1b9();
}

// Address range: 0x3f67e9 - 0x3f67ec
int64_t function_3f67e9(void) {
    // 0x3f67e9
    int64_t result; // 0x3f67e9
    return result;
}

// Address range: 0x3f6802 - 0x3f6803
int64_t function_3f6802(void) {
    // 0x3f6802
    int64_t result; // 0x3f6802
    return result;
}

// Address range: 0x3f687e - 0x3f6883
int64_t function_3f687e(void) {
    // 0x3f687e
    return function_1949b283();
}

// Address range: 0x3f6927 - 0x3f6928
int64_t function_3f6927(void) {
    // 0x3f6927
    int64_t result; // 0x3f6927
    return result;
}

// Address range: 0x3f6935 - 0x3f6936
int64_t function_3f6935(void) {
    // 0x3f6935
    int64_t result; // 0x3f6935
    return result;
}

// Address range: 0x3f6948 - 0x3f694f
int64_t function_3f6948(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 24); // 0x3f6948
    int64_t result; // 0x3f6948
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x3f695c - 0x3f6a80
int64_t function_3f695c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    bool v2; // 0x3f695c
    if (!v2) {
        // 0x3f6960
        return function_3f6927();
    }
    uint64_t v3 = a4 + 140 + (int64_t)v2; // 0x3f698d
    int64_t v4 = a4 & 0xffffff00; // 0x3f698d
    char * v5 = (char *)((v3 % 256 | v4) - 0x33a09cfc); // 0x3f698f
    int64_t v6; // 0x3f695c
    *v5 = *v5 + (char)v6;
    int32_t v7 = *(int32_t *)&v1; // 0x3f6996
    int64_t v8; // 0x3f695c
    *(int32_t *)v1 = v7 ^ (int32_t)(int64_t)&v8;
    float80_t v9; // 0x3f695c
    *(int16_t *)a2 = (int16_t)v9;
    char v10 = v3; // 0x3f699f
    unsigned char v11 = v10 - 65; // 0x3f699f
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x3f699f
    int64_t v13 = v4 | (int64_t)v11; // 0x3f699f
    if (v12 % 2 != 0) {
        int64_t result = v13; // 0x3f69a4
        if ((64 - v10 & v10) >= 0) {
            result = function_3f6935();
        }
        // 0x3f69a7
        return result;
    }
    unsigned char v14 = *(char *)(a3 - 0x4f4648e4); // 0x3f69ed
    int64_t v15 = v13 + 0xf24c43c2 + (int64_t)(v14 < (char)v6); // 0x3f69f3
    unsigned char v16 = (char)a5; // 0x3f69f9
    unsigned char v17 = *(char *)(a2 - 76); // 0x3f69f9
    char v18 = v17 + v16; // 0x3f69f9
    unsigned char v19 = llvm_ctpop_i8(v18); // 0x3f69f9
    if (v19 % 2 == 0) {
        // 0x3f6a02
        return v15 & 0xffff0000 | 256 * (64 * (int64_t)(v18 == 0) | (int64_t)(v18 < v16) | 128 * (int64_t)(v18 < 0) | 16 * (int64_t)(v17 % 16 + v16 % 16 > 15) | 4 * (int64_t)(v19 % 2 == 0)) | (int64_t)__asm_in(72) & -0xff01 | 512;
    }
    // 0x3f6a7f
    __asm_outsd((int16_t)a3, (int32_t)a2);
    return v15 & 0xffffffff;
}

// Address range: 0x3f6a81 - 0x3f6a82
int64_t function_3f6a81(void) {
    // 0x3f6a81
    int64_t result; // 0x3f6a81
    return result;
}

// Address range: 0x3f6ac7 - 0x3f6ada
int64_t function_3f6ac7(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(8 * a1 + 78 + a3); // 0x3f6ac7
    bool v2; // 0x3f6ac7
    *v1 = (char)v2 - (char)a3 + *v1;
    int64_t v3; // 0x3f6ac7
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    int64_t result; // 0x3f6ac7
    __asm_out_133(29, (char)result);
    return result;
}

// Address range: 0x3f6afc - 0x3f6afd
int64_t function_3f6afc(void) {
    // 0x3f6afc
    int64_t result; // 0x3f6afc
    return result;
}

// Address range: 0x3f6b28 - 0x3f6b29
int64_t function_3f6b28(int64_t a1) {
    // 0x3f6b28
    int64_t result; // 0x3f6b28
    return result;
}

// Address range: 0x3f6b49 - 0x3f6b9e
int64_t function_3f6b49(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f6b49
    bool v1; // 0x3f6b49
    if (true == !v1) {
        // 0x3f6b9a
        return (a2 / 256 + a2) % 256 | a2 & 0xffffff00;
    }
    // 0x3f6b4c
    return function_ffffffffb58095e5();
}
