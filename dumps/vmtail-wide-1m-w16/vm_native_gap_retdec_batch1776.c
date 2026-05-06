/*
 * Targeted RetDec C for native executable gap queue batch 1776.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2d4e6-0x2d6e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d6e6-0x2d8e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d8e6-0x2d980 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37459-0x37659 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37659-0x37859 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37859-0x37930 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d1ed-0x4d3ed rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d3ed-0x4d5ed rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d5ed-0x4d688 rank=- name=- kind=- bytes=- uncovered=-
 *   0x77502-0x77702 rank=- name=- kind=- bytes=- uncovered=-
 *   0x77702-0x77902 rank=- name=- kind=- bytes=- uncovered=-
 *   0x77902-0x779bd rank=- name=- kind=- bytes=- uncovered=-
 *   0x13150e-0x13158d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ae71e-0x1ae91e rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ae91e-0x1aeb1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x1aeb1e-0x1aebf9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x213547-0x213747 rank=- name=- kind=- bytes=- uncovered=-
 *   0x213747-0x213947 rank=- name=- kind=- bytes=- uncovered=-
 *   0x213947-0x2139db rank=- name=- kind=- bytes=- uncovered=-
 *   0x29104c-0x29124c rank=- name=- kind=- bytes=- uncovered=-
 *   0x29124c-0x29144c rank=- name=- kind=- bytes=- uncovered=-
 *   0x29144c-0x2914ea rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cc479-0x3cc679 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cc679-0x3cc879 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cc879-0x3cc938 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4060d1-0x4062d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4062d1-0x4064d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4064d1-0x4065ad rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c2b91-0x4c2d91 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c2d91-0x4c2f91 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c2f91-0x4c3060 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4df479-0x4df4f9 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g7;
extern int g9;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_12881c();
int64_t function_13150e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13153e(void);
int64_t function_13155e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_131563(void);
int64_t function_131569(void);
int64_t function_131582(void);
int64_t function_1ae71e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1ae777(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5);
int64_t function_1ae85a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ae8d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ae90b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1ae957(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ae973(void);
int64_t function_1ae9f3(void);
int64_t function_1ae9fb(void);
int64_t function_1ae9fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aea47(int64_t a1);
int64_t function_1aea70(void);
int64_t function_1aea7f(int64_t a1);
int64_t function_1aeb08(void);
int64_t function_1aeb56(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aeb7d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5);
int64_t function_1aebf1(void);
int64_t function_1b107c24();
int64_t function_1eaffd();
int64_t function_1ebf7a();
int64_t function_1ec2e0c7();
int64_t function_213547(int64_t a1);
int64_t function_21363f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_213783(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21391c(void);
int64_t function_21391d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_213961(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21aa03fa();
int64_t function_230621d6();
int64_t function_24dff();
int64_t function_24e1e();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_254fe();
int64_t function_27e1a();
int64_t function_29104c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_291107(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_29127d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29c3a();
int64_t function_2b888f16();
int64_t function_2c9f977c();
int64_t function_2d4e6(int64_t a1, int64_t a2);
int64_t function_2d520(int64_t a1);
int64_t function_2d57a(void);
int64_t function_2d599(void);
int64_t function_2d59c(int64_t a1);
int64_t function_2d5e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d612(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d72c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d768(int64_t a1, int64_t a2);
int64_t function_32260();
int64_t function_327a0();
int64_t function_3601c();
int64_t function_36732c();
int64_t function_36966();
int64_t function_37459(int64_t a1, int64_t a2);
int64_t function_374ce(void);
int64_t function_375a0(void);
int64_t function_375d9(void);
int64_t function_375e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37614(void);
int64_t function_37619(void);
int64_t function_3761c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3763b(void);
int64_t function_37666(void);
int64_t function_3767b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37683(void);
int64_t function_3768e(void);
int64_t function_376bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37730(void);
int64_t function_3775d(void);
int64_t function_37760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7);
int64_t function_377aa(int64_t a1);
int64_t function_377e7(void);
int64_t function_377f1(void);
int64_t function_377f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37819(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_378ba(uint64_t a1, uint64_t a2);
int64_t function_3cc479(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cc4b4(void);
int64_t function_3cc4d8(void);
int64_t function_3cc4e1(int64_t a1, int64_t a2);
int64_t function_3cc508(int64_t a1);
int64_t function_3cc567(int64_t a1);
int64_t function_3cc595(void);
int64_t function_3cc599(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3cc6d3(void);
int64_t function_3cc6dd(void);
int64_t function_3cc72a(void);
int64_t function_3cc73a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cc765(void);
int64_t function_3cc7cd(void);
int64_t function_3cc7d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cc7ff(void);
int64_t function_3cc858(int64_t a1);
int64_t function_3cc898(int64_t a1);
int64_t function_40609d();
int64_t function_4060c0();
int64_t function_4060d1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_40615e(void);
int64_t function_406170(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4061a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4061ef(void);
int64_t function_406210(void);
int64_t function_40622a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40639c(int64_t a1);
int64_t function_4063b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4063cc(void);
int64_t function_4063ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_406421(void);
int64_t function_406483(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4064d4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4064fe(void);
int64_t function_406519(void);
int64_t function_406531(void);
int64_t function_40655e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40658d(void);
int64_t function_4065a4(void);
int64_t function_48e347();
int64_t function_48e641();
int64_t function_4ae54();
int64_t function_4c1d60();
int64_t function_4c1df0();
int64_t function_4c1e10();
int64_t function_4c1e70();
int64_t function_4c1ea0();
int64_t function_4c28f0();
int64_t function_4c2a20();
int64_t function_4c2b30();
int64_t function_4c2b91(int64_t a1);
int64_t function_4c2ce0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c2cf0(void);
int64_t function_4c2d00(int64_t a1, int64_t a2);
int64_t function_4c2d10(void);
int64_t function_4c2d20(void);
int64_t function_4c2d30(void);
int64_t function_4c2d40(int64_t a1);
int64_t function_4c2d60(void);
int64_t function_4c2d90(void);
int64_t function_4c2da0(void);
int64_t function_4c2db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c2dc0(void);
int64_t function_4c2dd0(int64_t a1, int64_t a2);
int64_t function_4c2de0(void);
int64_t function_4c2df0(void);
int64_t function_4c2e00(void);
int64_t function_4c2e10(int64_t a1);
int64_t function_4c2e30(void);
int64_t function_4c2e60(void);
int64_t function_4c2e70(void);
int64_t function_4c2e80(void);
int64_t function_4c2e90(void);
int64_t function_4c2ea0(int64_t a1);
int64_t function_4c2ec0(void);
int64_t function_4c2ef0(void);
int64_t function_4c2f00(void);
int64_t function_4c2f10(void);
int64_t function_4c2f20(void);
int64_t function_4c2f30(void);
int64_t function_4c2f40(int64_t a1);
int64_t function_4c2f60(void);
int64_t function_4c2f90(void);
int64_t function_4c2fa0(void);
int64_t function_4c2fb0(void);
int64_t function_4c2fc0(void);
int64_t function_4c2fd0(void);
int64_t function_4c2fe0(int64_t a1);
int64_t function_4c3000(void);
int64_t function_4c3030(void);
int64_t function_4c3040(void);
int64_t function_4c3050(void);
int64_t function_4c6890();
int64_t function_4c6920();
int64_t function_4c69a0();
int64_t function_4c7e4();
int64_t function_4c8320();
int64_t function_4c8450();
int64_t function_4c858();
int64_t function_4c87e();
int64_t function_4cb410();
int64_t function_4cb4a0();
int64_t function_4cb520();
int64_t function_4cbdc();
int64_t function_4cc7d0();
int64_t function_4cc900();
int64_t function_4ccc30();
int64_t function_4cccc0();
int64_t function_4ccd50();
int64_t function_4ccde0();
int64_t function_4cd00();
int64_t function_4cd7d0();
int64_t function_4cd900();
int64_t function_4cdaa0();
int64_t function_4cdd20();
int64_t function_4cddb0();
int64_t function_4cdde0();
int64_t function_4cdef0();
int64_t function_4ce440();
int64_t function_4ce580();
int64_t function_4ce8f0();
int64_t function_4cee6();
int64_t function_4cf86();
int64_t function_4d1ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d3c8(int64_t a1);
int64_t function_4d5b6(int64_t a1);
int64_t function_4d5d0(int64_t a1);
int64_t function_4d5f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4d673(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4d974();
int64_t function_4df479(void);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_542590();
int64_t function_60927771();
int64_t function_6b4f2c4b();
int64_t function_77502(int64_t a1);
int64_t function_77520(int64_t a1);
int64_t function_77530(int64_t a1);
int64_t function_77540(void);
int64_t function_77590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_776d9(void);
int64_t function_776e1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_77742(void);
int64_t function_7774b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_777e7(void);
int64_t function_777fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_7782c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_77895(void);
int64_t function_778d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_778f2(void);
int64_t function_77910(void);
int64_t function_7791e(void);
int64_t function_77928(void);
int64_t function_7796b(int64_t a1);
int64_t function_7798d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_77991(void);
int64_t function_c823b();
int64_t function_cc59c();
int64_t function_ffffffffb53067ab();
int64_t function_ffffffffc8a1b117();
int64_t function_ffffffffcedfd999();
int64_t function_ffffffffd886d89f();
int64_t function_ffffffffedfe5c43();
int64_t unknown_110c49d3();
int64_t unknown_1aa5c052();
int64_t unknown_1b793c89();
int64_t unknown_1fedb86f();
int64_t unknown_37a56aa();
int64_t unknown_3a90175d();
int64_t unknown_3ab6a096();
int64_t unknown_4ba87603();
int64_t unknown_6d91ecd3();
int64_t unknown_7b42005e();
int64_t unknown_801504ef();
int64_t unknown_ffffffff818b1431();
int64_t unknown_ffffffff89f1e73e();
int64_t unknown_ffffffff9ce06e9f();
int64_t unknown_ffffffffaf10617f();
int64_t unknown_ffffffffd12a7668();
int64_t unknown_ffffffffd690d518();
int64_t unknown_ffffffffdb5f85c4();
int64_t unknown_ffffffffe9035d83();
int64_t unknown_fffffffff5314b25();

// Address range: 0x2d4e6 - 0x2d513
int64_t function_2d4e6(int64_t a1, int64_t a2) {
    // 0x2d4e6
    function_327a0(a2);
    return 0;
}

// Address range: 0x2d520 - 0x2d54d
int64_t function_2d520(int64_t a1) {
    // 0x2d520
    __readfsqword(40);
    return function_12881c();
}

// Address range: 0x2d57a - 0x2d57d
int64_t function_2d57a(void) {
    // 0x2d57a
    int64_t result; // 0x2d57a
    return result;
}

// Address range: 0x2d599 - 0x2d59b
int64_t function_2d599(void) {
    // 0x2d599
    int64_t v1; // 0x2d599
    return function_2d5e0(v1, v1, v1, (int64_t)&g14);
}

// Address range: 0x2d59c - 0x2d59d
int64_t function_2d59c(int64_t a1) {
    // 0x2d59c
    int64_t result; // 0x2d59c
    return result;
}

// Address range: 0x2d5e0 - 0x2d612
int64_t function_2d5e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = 0; // 0x2d602
    int64_t v1; // 0x2d5e0
    if (v1 != __readfsqword(40)) {
        // 0x2d604
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x2d609
    return result;
}

// Address range: 0x2d612 - 0x2d72b
int64_t function_2d612(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x2d626
    int64_t name; // bp-72, 0x2d612
    int64_t v2 = (int64_t)&name; // 0x2d642
    *(int64_t *)a1 = (int64_t)&g11;
    name = -0x4fbc6aed1534bfeb;
    int64_t v3 = 0x63319f25; // 0x2d66c
    for (int64_t i = 0; i < 13; i += 4) {
        int64_t v4 = v3;
        uint32_t v5 = (int32_t)(0x2000 * v4 ^ v4); // 0x2d67d
        int32_t * v6 = (int32_t *)(i + v2); // 0x2d67f
        int32_t v7 = v5 / 0x20000 ^ v5; // 0x2d685
        uint32_t v8 = 32 * v7 ^ -1 - v7; // 0x2d68e
        *v6 = v8 ^ *v6;
        v3 = v8;
    }
    char * env_val = getenv((char *)&name); // 0x2d6a9
    if (env_val != NULL) {
        // 0x2d6b3
        int64_t v9; // bp-104, 0x2d612
        int64_t v10; // bp-105, 0x2d612
        function_250b0(&v9, (int64_t)env_val, &v10);
        int64_t v11; // bp-96, 0x2d612
        function_48e347(&v11, &v9);
        function_36966(a1, &v11);
        function_29c3a(&v11);
        function_2508e(&v9);
        function_48e641(a1);
    }
    // 0x2d6fb
    function_24dff(&name, 16);
    int64_t result = a1; // 0x2d719
    if (v1 != __readfsqword(40)) {
        // 0x2d71b
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x2d720
    return result;
}

// Address range: 0x2d72c - 0x2d767
int64_t function_2d72c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d72c
    return 0;
}

// Address range: 0x2d768 - 0x2d973
int64_t function_2d768(int64_t a1, int64_t a2) {
    // 0x2d768
    int128_t v1; // 0x2d768
    int128_t v2 = v1;
    int128_t v3 = __asm_xorps(v2, v2); // 0x2d777
    int64_t v4 = __readfsqword(40); // 0x2d786
    __asm_movups(v1, v3);
    __asm_movups(0x8000000000000000 * v1 >> 64, v3);
    int128_t tp; // bp-608, 0x2d768
    if (gettimeofday((struct timeval *)&tp, NULL) == 0) {
        int64_t v5 = __asm_rdtsc(); // 0x2d7b0
        int64_t v6; // bp-576, 0x2d768
        uint64_t v7 = (int64_t)&v6; // 0x2d7b4
        int128_t v8; // bp-592, 0x2d768
        uint64_t v9 = (int64_t)&v8; // 0x2d7bd
        int64_t v10 = 16; // bp-616, 0x2d7c8
        v8 = 0x100000000 * v5;
        int32_t time_val = time(NULL); // 0x2d7ff
        v6 = 0x78240d66f94eac44;
        int64_t v11 = -0x23d3d1dd * (int32_t)(v7 / 4) ^ -0x7fde57f7 ^ -0x23d3d1dd * (int32_t)(v9 / 4) ^ -0x23d3d1dd * (int32_t)((int64_t)&v10 / 4) ^ time_val; // 0x2d873
        int64_t v12; // bp-540, 0x2d768
        int64_t v13 = (int64_t)&v12; // 0x2d87a
        int64_t v14 = v11; // 0x2d885
        int64_t v15 = 0; // 0x2d885
        if (v10 != 0) {
            int64_t v16 = 0;
            unsigned char v17 = *(char *)(v16 + v9); // 0x2d895
            uint32_t v18 = (int32_t)v11; // 0x2d890
            int64_t v19 = 0x97ae8207 * (v11 ^ (int64_t)(v18 >> v18 / 0x10000000 + 8)) + 0xb82a0033; // 0x2d8ab
            uint32_t v20 = (int32_t)(0x2000 * v19 ^ v19); // 0x2d8b7
            int32_t v21 = v20 / 128 ^ v20; // 0x2d8bc
            uint32_t v22 = -0x5e000ed * (0x20000 * v21 ^ v21) - 0x8675ebb; // 0x2d8d5
            uint32_t v23 = v22 / 0x2000 | 0x80000 * v22; // 0x2d8da
            *(char *)(v16 + v13) = v17 ^ (char)(v23 >> (8 * (int32_t)v16 & 24));
            int64_t v24 = (int64_t)v23 ^ (int64_t)v17; // 0x2d8f0
            int64_t v25 = v16 + 1; // 0x2d8f3
            int64_t v26 = v24; // 0x2d885
            v14 = v24;
            v15 = v25;
            while (v10 != v25 && v25 != 0x7fdc) {
                // 0x2d890
                v16 = v25;
                v17 = *(char *)(v16 + v9);
                v18 = (int32_t)v26;
                v19 = 0x97ae8207 * (v26 ^ (int64_t)(v18 >> v18 / 0x10000000 + 8)) + 0xb82a0033;
                v20 = (int32_t)(0x2000 * v19 ^ v19);
                v21 = v20 / 128 ^ v20;
                v22 = -0x5e000ed * (0x20000 * v21 ^ v21) - 0x8675ebb;
                v23 = v22 / 0x2000 | 0x80000 * v22;
                *(char *)(v16 + v13) = v17 ^ (char)(v23 >> (8 * (int32_t)v16 & 24));
                v24 = (int64_t)v23 ^ (int64_t)v17;
                v25 = v16 + 1;
                v26 = v24;
                v14 = v24;
                v15 = v25;
            }
        }
        int64_t v27 = v15 + 36; // 0x2d881
        int64_t v28 = v15 + 99 & -64; // 0x2d902
        int64_t v29 = v27; // 0x2d909
        if (v28 > v27) {
            int64_t v30 = 0x6ebab32b * v14 + 0x2003bc1f; // 0x2d911
            uint32_t v31 = (int32_t)v30; // 0x2d916
            *(char *)(v27 + v7) = (char)(v31 >> v31 / 0x10000000 + 5);
            int64_t v32 = v27 + 1; // 0x2d927
            int64_t v33 = v32; // 0x2d909
            int64_t v34 = v30 & 0xffffffff; // 0x2d909
            v29 = v28;
            while (v32 != v28) {
                // 0x2d90b
                v30 = 0x6ebab32b * v34 + 0x2003bc1f;
                v31 = (int32_t)v30;
                *(char *)(v33 + v7) = (char)(v31 >> v31 / 0x10000000 + 5);
                v32 = v33 + 1;
                v33 = v32;
                v34 = v30 & 0xffffffff;
                v29 = v28;
            }
        }
        // 0x2d92c
        function_32260(a1, 0x160e9b57, &v6, 64, v29);
    }
    int64_t result = 0; // 0x2d95a
    if (v4 != __readfsqword(40)) {
        // 0x2d95c
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x2d961
    return result;
}

// Address range: 0x37459 - 0x37492
int64_t function_37459(int64_t a1, int64_t a2) {
    // 0x37459
    __readfsqword(40);
    return function_1eaffd();
}

// Address range: 0x374ce - 0x374d1
int64_t function_374ce(void) {
    // 0x374ce
    int64_t result; // 0x374ce
    return result;
}

// Address range: 0x375a0 - 0x375a1
int64_t function_375a0(void) {
    // 0x375a0
    int64_t result; // 0x375a0
    return result;
}

// Address range: 0x375d9 - 0x375dc
int64_t function_375d9(void) {
    // 0x375d9
    int64_t result; // 0x375d9
    return result;
}

// Address range: 0x375e3 - 0x37602
int64_t function_375e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)a1; // 0x375e3
    int64_t v2; // 0x375e3
    *v1 = (int32_t)(v2 & v2);
    *v1 = __asm_insd((int16_t)a3);
    uint32_t v3 = (int32_t)a4 % 32; // 0x375f0
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)((a3 & -256 | 162) - 0x598feda8); // 0x375f0
        *v4 = *v4 >> v3;
    }
    return (int64_t)*(int32_t *)0x1c7c3f0fa2d2b466;
}

// Address range: 0x37614 - 0x37619
int64_t function_37614(void) {
    // 0x37614
    return function_1ec2e0c7();
}

// Address range: 0x37619 - 0x3761a
int64_t function_37619(void) {
    // 0x37619
    int64_t result; // 0x37619
    return result;
}

// Address range: 0x3761c - 0x37621
int64_t function_3761c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3761c
    int64_t v1; // 0x3761c
    bool v2; // 0x3761c
    if (a4 != 1 == v2) {
        v1 = function_375a0();
    }
    // 0x3761e
    return v1 & -256 | 143;
}

// Address range: 0x3763b - 0x3763c
int64_t function_3763b(void) {
    // 0x3763b
    int64_t result; // 0x3763b
    return result;
}

// Address range: 0x37666 - 0x37669
int64_t function_37666(void) {
    // 0x37666
    int64_t result; // 0x37666
    return result;
}

// Address range: 0x3767b - 0x37680
int64_t function_3767b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3767b
    int64_t v1; // 0x3767b
    __asm_int1(a1, a2, (uint64_t)v1 % 256 | a3 & -256);
    return function_37619();
}

// Address range: 0x37683 - 0x37684
int64_t function_37683(void) {
    // 0x37683
    int64_t result; // 0x37683
    return result;
}

// Address range: 0x3768e - 0x37695
int64_t function_3768e(void) {
    // 0x3768e
    return function_60927771();
}

// Address range: 0x376bb - 0x376ed
int64_t function_376bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x376bb
    bool v1; // 0x376bb
    int64_t v2 = (v1 ? -4 : 4) + a2; // 0x376bb
    uint32_t v3 = *(int32_t *)-0x69c53e28045dda66; // 0x376bc
    int64_t v4 = v3; // 0x376bc
    int64_t v5; // 0x376bb
    char * v6 = (char *)(v5 + 0x7cf398a8 + v4); // 0x376c5
    *v6 = *v6 + (char)(v3 / 256);
    int32_t * v7 = (int32_t *)(v2 + 81); // 0x376d1
    int32_t v8 = *v7; // 0x376d1
    int32_t v9 = v5; // 0x376d1
    int32_t v10 = v8 + v9; // 0x376d1
    *v7 = v10;
    int64_t v11 = v4; // 0x376d4
    if (((v10 ^ v8) & (v10 ^ v9)) < 0) {
        v11 = function_37683();
    }
    char * v12 = (char *)v2; // 0x376d6
    *v12 = *v12 + (char)a3;
    char * v13 = (char *)(8 * v5 + 0x4692002a + ((v11 / 256 + a4) % 256 | a4 & -256)); // 0x376e0
    *v13 = *v13 + (char)v5;
    return v11 + 0xeb27584 & 0xffffffff;
}

// Address range: 0x37730 - 0x37735
int64_t function_37730(void) {
    // 0x37730
    return function_ffffffffc8a1b117();
}

// Address range: 0x3775d - 0x37760
int64_t function_3775d(void) {
    // 0x3775d
    int64_t result; // 0x3775d
    return result;
}

// Address range: 0x37760 - 0x377aa
int64_t function_37760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x37760
    bool v1; // 0x37760
    int32_t v2 = *(int32_t *)((v1 ? -1 : 1) + a2); // 0x37763
    __asm_outsd((int16_t)a3 % 256 | (int16_t)&g12, v2);
    int64_t * v3 = (int64_t *)(a5 - 55 + 4 * a6); // 0x37765
    int64_t v4; // 0x37760
    *v3 = *v3 ^ v4;
    int64_t result = v4 & 0xffffffff; // 0x37799
    if (v4 != __readfsqword(40)) {
        // 0x3779b
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x377a0
    return result;
}

// Address range: 0x377aa - 0x377e5
int64_t function_377aa(int64_t a1) {
    // 0x377aa
    __readfsqword(40);
    int64_t v1; // bp-40, 0x377aa
    function_3601c(&v1);
    return function_1ebf7a();
}

// Address range: 0x377e7 - 0x377e8
int64_t function_377e7(void) {
    // 0x377e7
    int64_t result; // 0x377e7
    return result;
}

// Address range: 0x377f1 - 0x377f2
int64_t function_377f1(void) {
    // 0x377f1
    int64_t result; // 0x377f1
    return result;
}

// Address range: 0x377f6 - 0x37808
int64_t function_377f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x377f6
    if (a4 == 0) {
        v2 = function_377e7();
    }
    uint64_t v3 = v2;
    uint32_t v4 = (int32_t)a4 % 32; // 0x377fb
    char v5 = a2; // 0x377fb
    if (v4 != 0) {
        int32_t * v6 = (int32_t *)(a4 - 123); // 0x377fb
        *v6 = *v6 << v4;
        v5 = *(char *)&v1;
    }
    // 0x377fa
    *(char *)a1 = v5;
    __asm_out(-18, (char)v3);
    return v3 % 256 * (int64_t)*(char *)(a4 + 10) | v3 & -0x10000;
}

// Address range: 0x37819 - 0x378ba
int64_t function_37819(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37819
    int64_t v1; // 0x37819
    bool v2; // 0x37819
    if (!v2) {
        v1 = function_377f1();
    }
    // 0x3781b
    *(int32_t *)0x3b85da0bd14291c0 = (int32_t)v1;
    int32_t v3 = __asm_in_134(124); // 0x37824
    int64_t result = v3; // 0x37824
    int64_t v4 = a4 - 1; // 0x37830
    if (v4 != 0 && !v2) {
        // 0x3786e
        return result;
    }
    if (true == !v2) {
        if (v3 >= 0 == (v3 != 0)) {
            // 0x3786e
            return result;
        }
        // 0x378af
        int64_t v5; // 0x37819
        return function_4eeb50(v5);
    }
    int32_t * v6 = (int32_t *)result; // 0x37834
    *v6 = *v6 + v3;
    *(char *)0x2c85689f = *(char *)0x2c85689f + (char)v3;
    char * v7 = (char *)(a4 + 4); // 0x3783e
    *v7 = *v7 + (char)v4;
    return result;
}

// Address range: 0x378ba - 0x37930
int64_t function_378ba(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x378c8
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x378ca
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x378dc
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x378de
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x378e9
    int64_t v6 = v3; // 0x378f3
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g13); // 0x37906
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x3791e
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x4d1ed - 0x4d3c8
int64_t function_4d1ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x4d200
    int32_t v2 = a2; // 0x4d210
    int32_t * v3; // bp-72, 0x4d1ed
    if (v2 != 1) {
        // 0x4d242
        v3 = NULL;
        function_4cee6((int64_t *)&v3, 12);
        function_27e1a((int64_t *)&v3, 128 - (int64_t)v3);
        int64_t v4 = (int64_t)v3; // 0x4d287
        *v3 = 17;
        *(int32_t *)(v4 + 8) = 1;
        *(int32_t *)(v4 + 4) = v2 == 0 ? 6 : 9;
        function_4d974((int64_t *)&v3, 0, a4, a4 + 2);
        int64_t * v5 = (int64_t *)(a4 + 8); // 0x4d2c1
        int64_t v6 = (int64_t)&v3; // 0x4d2ca
        int16_t v7; // bp-74, 0x4d1ed
        int64_t v8 = (int64_t)&v7; // 0x4d2cd
        v7 = (int16_t)*(int64_t *)(*v5 - 24);
        function_4d974((int64_t *)&v3, 0, v8, v6);
        int64_t v9 = *v5; // 0x4d2e6
        function_4d974((int64_t *)&v3, 0, v9, v9 + (int64_t)v7);
        int64_t * v10 = (int64_t *)(a4 + 16); // 0x4d2fa
        v7 = (int16_t)*(int64_t *)(*v10 - 24);
        function_4d974((int64_t *)&v3, 0, v8, v6);
        int64_t v11 = *v10; // 0x4d31f
        function_4d974((int64_t *)&v3, 0, v11, v11 + (int64_t)v7);
        int64_t * v12 = (int64_t *)(a4 + 32); // 0x4d333
        v7 = (int16_t)*(int64_t *)(*v12 - 24);
        function_4d974((int64_t *)&v3, 0, v8, v6);
        int64_t v13 = *v12; // 0x4d358
        function_4d974((int64_t *)&v3, 0, v13, v13 + (int64_t)v7);
        function_4d974((int64_t *)&v3, 0, a4 + 24, a4 + 28);
        int32_t * v14 = v3; // 0x4d381
        function_4cbdc(a1, (int64_t *)v14, -(int64_t)v14);
        function_4c7e4(a1);
        function_254fe((int64_t *)&v3);
    } else {
        // 0x4d21a
        v3 = (int32_t *)0x800000011;
        function_4cbdc(a1, (int64_t *)&v3, 10);
    }
    int64_t result = 0; // 0x4d3b4
    if (v1 != __readfsqword(40)) {
        // 0x4d3b6
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x4d3bb
    return result;
}

// Address range: 0x4d3c8 - 0x4d5b6
int64_t function_4d3c8(int64_t a1) {
    int64_t v1 = 0; // bp-96, 0x4d3eb
    int64_t v2 = __readfsqword(40); // 0x4d3fd
    int64_t v3 = 0; // bp-72, 0x4d419
    function_4cee6(&v1, 12);
    int64_t * v4 = (int64_t *)(a1 + 296); // 0x4d443
    function_27e1a(&v1, 128 * *v4 - v1);
    *(int64_t *)v1 = 0x600000011;
    int64_t v5 = *(int64_t *)(a1 + 288); // 0x4d46f
    *(int32_t *)(v1 + 8) = (int32_t)*v4;
    if (v5 != 0) {
        int64_t v6 = (int64_t)&v1;
        int16_t v7; // bp-98, 0x4d3c8
        int64_t v8 = (int64_t)&v7;
        int64_t v9 = v5;
        function_4d974(&v1, 0, v9 + 16, v9 + 18);
        int64_t * v10 = (int64_t *)(v9 + 24); // 0x4d49f
        v7 = (int16_t)*(int64_t *)(*v10 - 24);
        function_4d974(&v1, 0, v8, v6);
        int64_t v11 = *v10; // 0x4d4c4
        function_4d974(&v1, 0, v11, v11 + (int64_t)v7);
        int64_t * v12 = (int64_t *)(v9 + 32); // 0x4d4d8
        v7 = (int16_t)*(int64_t *)(*v12 - 24);
        function_4d974(&v1, 0, v8, v6);
        int64_t v13 = *v12; // 0x4d4fd
        function_4d974(&v1, 0, v13, v13 + (int64_t)v7);
        int64_t * v14 = (int64_t *)(v9 + 48); // 0x4d511
        v7 = (int16_t)*(int64_t *)(*v14 - 24);
        function_4d974(&v1, 0, v8, v6);
        int64_t v15 = *v14; // 0x4d536
        function_4d974(&v1, 0, v15, v15 + (int64_t)v7);
        function_4d974(&v1, 0, v9 + 40, v9 + 44);
        int64_t v16 = *(int64_t *)v9; // 0x4d55f
        while (v16 != 0) {
            // 0x4d488
            v9 = v16;
            function_4d974(&v1, 0, v9 + 16, v9 + 18);
            v10 = (int64_t *)(v9 + 24);
            v7 = (int16_t)*(int64_t *)(*v10 - 24);
            function_4d974(&v1, 0, v8, v6);
            v11 = *v10;
            function_4d974(&v1, 0, v11, v11 + (int64_t)v7);
            v12 = (int64_t *)(v9 + 32);
            v7 = (int16_t)*(int64_t *)(*v12 - 24);
            function_4d974(&v1, 0, v8, v6);
            v13 = *v12;
            function_4d974(&v1, 0, v13, v13 + (int64_t)v7);
            v14 = (int64_t *)(v9 + 48);
            v7 = (int16_t)*(int64_t *)(*v14 - 24);
            function_4d974(&v1, 0, v8, v6);
            v15 = *v14;
            function_4d974(&v1, 0, v15, v15 + (int64_t)v7);
            function_4d974(&v1, 0, v9 + 40, v9 + 44);
            v16 = *(int64_t *)v9;
        }
    }
    int64_t v17 = v1; // 0x4d567
    function_4cbdc(a1, (int64_t *)v17, -v17);
    function_4c7e4(a1);
    function_254fe(&v3);
    function_254fe(&v1);
    int64_t result = 0; // 0x4d5a2
    if (v2 != __readfsqword(40)) {
        // 0x4d5a4
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x4d5a9
    return result;
}

// Address range: 0x4d5b6 - 0x4d5d0
int64_t function_4d5b6(int64_t a1) {
    // 0x4d5b6
    function_4cd00();
    function_4cf86(a1);
    return function_4d3c8(a1);
}

// Address range: 0x4d5d0 - 0x4d5f3
int64_t function_4d5d0(int64_t a1) {
    // 0x4d5d0
    *(int64_t *)(a1 + 216) = function_24e1e();
    __asm_mfence(a1);
    return function_4d5b6(a1);
}

// Address range: 0x4d5f4 - 0x4d673
int64_t function_4d5f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a2; // 0x4d5f4
    if (v1 == 1) {
        // 0x4d626
        return function_4c858();
    }
    int64_t result = a3 & 0xffffffff; // 0x4d5fc
    if (v1 <= 1) {
        // 0x4d600
        if (v1 != 0) {
            // 0x4d604
            return result;
        }
        // 0x4d61f
        if ((int32_t)a3 == 4) {
            // 0x4d624
            return function_4d5d0(a1);
        }
        // 0x4d604
        return result;
    }
    if (v1 != 2) {
        // 0x4d615
        if (v1 == 3 == (int32_t)a3 == 0) {
            // 0x4d65b
            return function_4ae54(a1, 0);
        }
        // 0x4d604
        return result;
    }
    int32_t v2 = a3; // 0x4d638
    if (v2 == 0) {
        // 0x4d65b
        return function_4ae54(a1, 1);
    }
    // 0x4d643
    if (v2 == -1 || a4 == 0 || (int32_t)a5 == 0) {
        // 0x4d65b
        return function_4ae54(a1, 0);
    }
    int64_t result2 = function_4c87e(a1, a4, a5 & 0xffffffff, a4 & -256); // 0x4d667
    if ((char)result2 == 0) {
        // 0x4d65b
        return function_4ae54(a1, 0);
    }
    // 0x4d604
    return result2;
}

// Address range: 0x4d673 - 0x4d687
int64_t function_4d673(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4d673
    return function_4d5f4(a5, a1 & 0xffffffff, a2 & 0xffffffff, a3, a4 & 0xffffffff);
}

// Address range: 0x77502 - 0x7751d
int64_t function_77502(int64_t a1) {
    // 0x77502
    return (int64_t)&g3;
}

// Address range: 0x77520 - 0x7752d
int64_t function_77520(int64_t a1) {
    // 0x77520
    return (int64_t)&g4;
}

// Address range: 0x77530 - 0x7753d
int64_t function_77530(int64_t a1) {
    // 0x77530
    return (int64_t)&g5;
}

// Address range: 0x77540 - 0x77567
int64_t function_77540(void) {
    // 0x77540
    __readfsqword(40);
    return function_36732c();
}

// Address range: 0x77590 - 0x77674
int64_t function_77590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x77590
    bool v1; // 0x77590
    bool v2 = v1;
    int64_t v3 = a6;
    int64_t v4 = a5;
    int64_t v5 = a3;
    int64_t v6; // 0x77590
    unsigned char v7 = (char)v6; // 0x77595
    unsigned char v8 = v2 ? -13 : -14; // 0x77595
    char v9 = v7 - v8; // 0x77595
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x77595
    unsigned char v11 = *(char *)-0x6c23c4848692dea8; // 0x77597
    int64_t v12 = v6 & -0x10000 | (int64_t)v11 | 256 * (64 * (int64_t)(v9 == 0) | (int64_t)(v2 | v8 > v7) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v7 % 16 + (char)v2 - v8 % 4 > 15) | 4 * (int64_t)(v10 % 2 == 0)); // 0x77597
    int64_t result = v12 | 512; // 0x775a2
    int64_t v13 = a3; // 0x775a5
    int64_t v14 = result; // 0x775a5
    int64_t v15 = a4; // 0x775a5
    if (v8 > v7) {
        int64_t v16 = v6 & -0xff01 | (int64_t)&g2; // 0x775a0
        int32_t * v17 = (int32_t *)(a2 - 31); // 0x775a7
        uint32_t v18 = *v17; // 0x775a7
        uint32_t v19 = (int32_t)a3; // 0x775a7
        *v17 = v18 - v19;
        __asm_out(-68, v11);
        uint32_t v20 = (int32_t)*(int64_t *)0xc78ae775; // 0x775ac
        uint32_t v21 = *(int32_t *)&v5 + v20; // 0x775ac
        bool v22 = v18 < v19 ? v21 + (int32_t)(v18 < v19) <= v20 : v21 < v20; // 0x775ac
        int32_t * v23 = (int32_t *)(v16 + 0x6c9ae0a1); // 0x775ae
        uint32_t v24 = *v23; // 0x775ae
        *v23 = v24 / 0x2000 | 0x100000 * v24 | 0x80000 * (int32_t)v22;
        char v25 = *(char *)&v3 - (char)v5; // 0x775b5
        *(char *)v3 = v25;
        v15 = a4 - 1;
        if (v15 != 0 == v25 == 0) {
            // 0x77639
            return result;
        }
        // 0x775d2
        *(char *)v4 = *(char *)&v4 + v11;
        v13 = (int32_t)(v12 & v16) >> 31;
        v5 = v13;
        v14 = 0x2dd42128;
    }
    int64_t v26 = v15 - 1; // 0x775ea
    if ((v14 & 246) == 0 || v26 == 0) {
        // 0x775ec
        *(char *)a1 = (char)v14;
        *(char *)(v15 - 29) = (char)v26;
        return v14 & -0xff01 | 0xc000;
    }
    // 0x77660
    *(int64_t *)0xc78ae77d = v14;
    return v13 & 0xffffffff;
}

// Address range: 0x776d9 - 0x776dc
int64_t function_776d9(void) {
    // 0x776d9
    int64_t result; // 0x776d9
    return result;
}

// Address range: 0x776e1 - 0x776f9
int64_t function_776e1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 0x5f00cf49); // 0x776e1
    bool v2; // 0x776e1
    *v1 = (char)v2 - (char)(a4 / 256) + *v1;
    __asm_sti();
    return (int64_t)*(int32_t *)0x2245400b;
}

// Address range: 0x77742 - 0x77743
int64_t function_77742(void) {
    // 0x77742
    int64_t result; // 0x77742
    return result;
}

// Address range: 0x7774b - 0x777e5
int64_t function_7774b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    // 0x7774d
    *(int32_t *)a2 = *(int32_t *)0x27483829aa50b5b8;
    char v2 = a1; // 0x77759
    *(char *)-0xe4643be9e060f95 = v2;
    *(char *)v1 = *(char *)&v1 + v2;
    return a1 & 0xffffffff;
}

// Address range: 0x777e7 - 0x777ec
int64_t function_777e7(void) {
    // 0x777e7
    return function_6b4f2c4b();
}

// Address range: 0x777fa - 0x777ff
int64_t function_777fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x777fa
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a4 - 22); // 0x777fa
        *v2 = *v2 << v1;
    }
    int64_t result; // 0x777fa
    return result;
}

// Address range: 0x7782c - 0x77851
int64_t function_7782c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 & -256 | 17; // 0x7782c
    int64_t v2; // 0x7782c
    *(char *)a1 = (char)v2;
    int32_t * v3 = (int32_t *)((v2 & 0x49ffbda6 | 0xb6004259) + 0x2dbec785); // 0x77835
    int32_t v4 = *v3; // 0x77835
    uint32_t v5 = (int32_t)v2; // 0x77835
    *v3 = v4 + v5;
    int32_t * v6 = (int32_t *)(v2 - 0x3e08894b); // 0x7783b
    *v6 = *v6 + (int32_t)v1 + (int32_t)(-1 - v4 < v5);
    bool v7; // 0x7782c
    __asm_int1((v7 ? -1 : 1) + a1, a2, v1);
    int32_t v8 = __asm_in_133((int16_t)v1); // 0x77849
    return (int64_t)(v8 & -0xff01) | (int64_t)&g9;
}

// Address range: 0x77895 - 0x77896
int64_t function_77895(void) {
    // 0x77895
    int64_t result; // 0x77895
    return result;
}

// Address range: 0x778d5 - 0x778de
int64_t function_778d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x778d5
    int64_t v1; // 0x778d5
    *(char *)a3 = (char)(v1 / 256) + (char)v1;
    return function_21aa03fa();
}

// Address range: 0x778f2 - 0x778f3
int64_t function_778f2(void) {
    // 0x778f2
    int64_t result; // 0x778f2
    return result;
}

// Address range: 0x77910 - 0x77915
int64_t function_77910(void) {
    // 0x77910
    return function_2b888f16();
}

// Address range: 0x7791e - 0x77923
int64_t function_7791e(void) {
    // 0x7791e
    return function_ffffffffcedfd999();
}

// Address range: 0x77928 - 0x77929
int64_t function_77928(void) {
    // 0x77928
    int64_t result; // 0x77928
    return result;
}

// Address range: 0x7796b - 0x7797b
int64_t function_7796b(int64_t a1) {
    // 0x7796b
    bool v1; // 0x7796b
    if (v1 || v1) {
        function_778f2();
    }
    // 0x7796e
    return function_ffffffffedfe5c43((v1 ? -4 : 4) + a1);
}

// Address range: 0x7798d - 0x77990
int64_t function_7798d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x7798d
    int64_t v1; // 0x7798d
    int64_t v2 = v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x77991 - 0x77993
int64_t function_77991(void) {
    // 0x77991
    int64_t result; // 0x77991
    return result;
}

// Address range: 0x13150e - 0x131514
int64_t function_13150e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13150e
    int64_t v1; // 0x13150e
    int64_t v2 = v1;
    *(int32_t *)(v2 + 56) = (int32_t)a3;
    return (v2 + 117 + (int64_t)((v2 & 256) != 0)) % 256 | v2 & -256;
}

// Address range: 0x13153e - 0x13153f
int64_t function_13153e(void) {
    // 0x13153e
    int64_t result; // 0x13153e
    return result;
}

// Address range: 0x13155e - 0x131561
int64_t function_13155e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13155e
    int64_t result; // 0x13155e
    *(int32_t *)a4 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x131563 - 0x131568
int64_t function_131563(void) {
    // 0x131563
    return function_ffffffffb53067ab();
}

// Address range: 0x131569 - 0x13156b
int64_t function_131569(void) {
    // 0x131569
    return function_13153e();
}

// Address range: 0x131582 - 0x131585
int64_t function_131582(void) {
    // 0x131582
    int64_t result; // 0x131582
    return result;
}

// Address range: 0x1ae71e - 0x1ae775
int64_t function_1ae71e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t v1 = a2; // 0x1ae71e
    uint32_t v2 = *(int32_t *)(a2 - 0x72b73d46) ^ v1; // 0x1ae723
    int64_t v3; // 0x1ae71e
    int64_t v4 = v3 & 0xfe176d12 | 0x1e892ed; // 0x1ae72b
    int64_t v5 = v2; // 0x1ae730
    *(int32_t *)v4 = (int32_t)v4;
    int64_t v6 = unknown_ffffffff89f1e73e(); // 0x1ae734
    *(char *)(v5 - 0x7a37fe18) = (char)v3;
    int128_t v7; // 0x1ae71e
    __asm_movups(*(int128_t *)v6, v7);
    char * v8 = (char *)(a3 & -256 | 239); // 0x1ae742
    *v8 = *v8 + (char)(a3 / 256);
    __asm_in(-113);
    __asm_wait();
    int64_t v9 = unknown_1aa5c052(); // 0x1ae74c
    int32_t * v10 = (int32_t *)(a4 + 0x47bdebf4); // 0x1ae75a
    *v10 = *v10 + (int32_t)v3;
    int64_t v11; // 0x1ae71e
    *(int32_t *)a4 = *(int32_t *)&v11 + (v2 | (int32_t)v3 + v1);
    unsigned char v12 = *(char *)(v5 + 62); // 0x1ae762
    uint32_t v13 = (int32_t)a1; // 0x1ae769
    int32_t v14 = *(int32_t *)(int64_t)(v2 - v13 + (int32_t)(-1 - (int32_t)(a4 & 0xffffff00 | (int64_t)v12) < v13)); // 0x1ae771
    *(int32_t *)a1 = v14;
    return 0x10000 * (int32_t)v9 >> 16 & -256 | 126;
}

// Address range: 0x1ae777 - 0x1ae840
int64_t function_1ae777(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    bool v1; // 0x1ae777
    if (v1) {
        // 0x1ae82b
        *(char *)a3 = (char)(a5 / 256);
        int64_t v2; // 0x1ae777
        int64_t v3 = (v2 ^ a2) & 0xffffffff; // 0x1ae82e
        *(int32_t *)a1 = *(int32_t *)v3;
        return (int64_t)*(int32_t *)((v1 ? -4 : 4) + v3);
    }
    // 0x1ae7ce
    return a4 & 0xffffffff;
    uint32_t v4 = (int32_t)a4;
    int64_t v5 = unknown_ffffffffaf10617f(); // 0x1ae779
    uint32_t v6 = v4 + (int32_t)a2; // 0x1ae787
    *(int32_t *)a4 = v6;
    uint32_t v7 = v4 % 32; // 0x1ae78a
    bool v8 = v6 >= v4; // 0x1ae78a
    if (v7 != 0) {
        uint32_t v9 = *(int32_t *)0xe17c17c; // 0x1ae78a
        int32_t v10 = v9 << 32 - v7 | v9 >> v7; // 0x1ae78a
        *(int32_t *)0xe17c17c = v10;
        v8 = v10 < 0;
    }
    int64_t v11 = (v5 + a4 / 256) % 256 | v5 & -256; // 0x1ae785
    int32_t v12 = *(int32_t *)v11; // 0x1ae790
    return v12 + (int32_t)v11 + (int32_t)v8;
}

// Address range: 0x1ae85a - 0x1ae8b7
int64_t function_1ae85a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ae85a
    int64_t v1; // 0x1ae85a
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 - 0x200860ca;
    __asm_sti();
    int64_t v3 = __asm_fnstenv(); // 0x1ae868
    *(int224_t *)a1 = (int224_t)v3;
    *(int32_t *)-0x2d65fe17a91fe4fb = (int32_t)v3;
    int64_t v4 = v1 & -256; // 0x1ae876
    unknown_ffffffffe9035d83();
    *(int32_t *)0x3160c389 = *(int32_t *)0x3160c389 + (int32_t)a1;
    *(int64_t *)((v3 & 0xffffffff) - 8) = v4;
    unknown_3ab6a096();
    unknown_ffffffff9ce06e9f();
    int64_t result = unknown_37a56aa(); // 0x1ae8a4
    int32_t * v5 = (int32_t *)(a4 - 1); // 0x1ae8b2
    *v5 = *v5 + (int32_t)v4;
    return result;
}

// Address range: 0x1ae8d7 - 0x1ae8e0
int64_t function_1ae8d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ae8d7
    int64_t result; // 0x1ae8d7
    return result;
}

// Address range: 0x1ae90b - 0x1ae934
int64_t function_1ae90b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1ae90b
    __asm_in_136((int16_t)a3);
    int64_t result = unknown_ffffffffd690d518(); // 0x1ae912
    char * v1 = (char *)(a3 + 0x4050882); // 0x1ae917
    char v2 = *v1 | (char)(a3 / 256); // 0x1ae917
    *v1 = v2;
    uint64_t v3 = a4 - 1; // 0x1ae91d
    if (v3 != 0 == v2 == 0) {
        // 0x1ae98f
        return result;
    }
    int64_t v4 = unknown_fffffffff5314b25(); // 0x1ae91f
    int64_t v5; // 0x1ae90b
    *(char *)(v5 + 0x5d4001e8) = (char)(v3 / 256);
    int64_t result2 = (int64_t)((int32_t)v4 - *(int32_t *)v4); // 0x1ae92e
    char * v6 = (char *)result2; // 0x1ae930
    *v6 = *v6 + 60;
    return result2;
}

// Address range: 0x1ae957 - 0x1ae973
int64_t function_1ae957(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ae957
    __asm_sti();
    unknown_7b42005e();
    int64_t v1 = __asm_sti(); // 0x1ae95e
    char * v2 = (char *)v1; // 0x1ae962
    unsigned char v3 = *v2; // 0x1ae962
    *v2 = v3 / 128 | 2 * v3;
    int64_t v4; // bp-16, 0x1ae957
    int32_t * v5 = (int32_t *)((int64_t)&v4 + 26 + v1); // 0x1ae968
    *v5 = *v5 + (int32_t)a2;
    return function_ffffffffd886d89f(a4);
}

// Address range: 0x1ae973 - 0x1ae97a
int64_t function_1ae973(void) {
    // 0x1ae973
    int64_t result; // 0x1ae973
    return result;
}

// Address range: 0x1ae9f3 - 0x1ae9f4
int64_t function_1ae9f3(void) {
    // 0x1ae9f3
    int64_t result; // 0x1ae9f3
    return result;
}

// Address range: 0x1ae9fb - 0x1ae9fd
int64_t function_1ae9fb(void) {
    // 0x1ae9fb
    int64_t result; // 0x1ae9fb
    return result;
}

// Address range: 0x1ae9fd - 0x1aea0e
int64_t function_1ae9fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ae9fd
    unknown_4ba87603();
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1 = __asm_iretd(a1); // 0x1aea06
    int64_t v2; // 0x1ae9fd
    char v3 = *(char *)&v2 | (char)v1; // 0x1aea07
    *(char *)a4 = v3;
    int64_t result = v1; // 0x1aea09
    if (v3 != 0) {
        result = function_1ae9f3();
    }
    int32_t * v4 = (int32_t *)(result - 51); // 0x1aea0b
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x1aea47 - 0x1aea4a
int64_t function_1aea47(int64_t a1) {
    // 0x1aea47
    int64_t result; // 0x1aea47
    return result;
}

// Address range: 0x1aea70 - 0x1aea71
int64_t function_1aea70(void) {
    // 0x1aea70
    int64_t result; // 0x1aea70
    return result;
}

// Address range: 0x1aea7f - 0x1aea80
int64_t function_1aea7f(int64_t a1) {
    // 0x1aea7f
    int64_t result; // 0x1aea7f
    return result;
}

// Address range: 0x1aeb08 - 0x1aeb0b
int64_t function_1aeb08(void) {
    // 0x1aeb08
    int64_t result; // 0x1aeb08
    return result;
}

// Address range: 0x1aeb56 - 0x1aeb7d
int64_t function_1aeb56(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aeb56
    unknown_3a90175d();
    int64_t v1; // 0x1aeb56
    *(char *)a2 = (char)v1 ^ 87;
    unknown_ffffffffd12a7668();
    int32_t v2 = __asm_in_133((int16_t)a3); // 0x1aeb67
    *(char *)-0x5ae32c3e = *(char *)-0x5ae32c3e + 25;
    int64_t v3; // 0x1aeb56
    return (int64_t)(*(char *)&v3 + 28) | (int64_t)(v2 & -256);
}

// Address range: 0x1aeb7d - 0x1aebf0
int64_t function_1aeb7d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x1aeb7d
    int64_t v3 = v2 >> 63; // 0x1aeb7d
    int64_t v4 = unknown_1b793c89(); // 0x1aeb83
    char * v5 = (char *)(v4 - 0x54ff6f00); // 0x1aeb88
    *v5 = *v5 + (char)v4;
    char * v6 = (char *)(a1 + 110); // 0x1aeb92
    *v6 = *v6 + (char)a4;
    int32_t v7 = *(int32_t *)(v3 + 0xb1cce04); // 0x1aeb97
    int32_t * v8 = (int32_t *)(v2 - 0x64f1a455); // 0x1aeba2
    int32_t v9 = 2 * *v8; // 0x1aeba2
    *v8 = v9;
    if (v9 < 0) {
        // 0x1aebe9
        return unknown_801504ef();
    }
    int64_t v10 = (v4 + a4 / 256) % 256 | v4 & -256; // 0x1aeb8e
    uint64_t v11 = v2 + a4; // 0x1aeb9f
    int64_t v12 = v11 & 0xffffffff; // 0x1aeb9f
    *(char *)a1 = *(char *)&v1;
    bool v13; // 0x1aeb7d
    int64_t v14 = v13 ? -1 : 1; // 0x1aebaa
    int64_t v15 = v14 + a1; // 0x1aebaa
    int64_t v16 = v1 + v14; // 0x1aebaa
    *(int32_t *)v15 = ((int32_t)v10 & -0xff01 | 0xf100) - v7;
    int64_t v17 = v15 + (v13 ? -4 : 4); // 0x1aebab
    char * v18 = (char *)(8 * v12 - 24 + v16); // 0x1aebac
    *v18 = *v18 + (char)(v11 / 256);
    int32_t * v19 = (int32_t *)(v3 + 0x476eb539); // 0x1aebb0
    uint32_t v20 = *v19; // 0x1aebb0
    int64_t v21; // 0x1aeb7d
    uint32_t v22 = v20 + (int32_t)(v10 + (int64_t)&v21); // 0x1aebb0
    *v19 = v22;
    uint32_t v23 = (int32_t)v16; // 0x1aebb6
    int32_t v24 = v22 < v20; // 0x1aebb6
    uint32_t v25 = *(int32_t *)(v3 + 0x89d9ab) + v24; // 0x1aebb6
    uint32_t v26 = v23 - v25; // 0x1aebb6
    bool v27 = v22 < v20 ? v25 != -1 | v26 - v24 > v23 : v25 > v23; // 0x1aebb6
    *(int32_t *)v17 = __asm_insd((int16_t)v3);
    int64_t v28 = unknown_ffffffffdb5f85c4(); // 0x1aebbe
    char v29 = *(char *)(int64_t)v26; // 0x1aebc9
    *(char *)v17 = (char)v28;
    int64_t result = (int64_t)(*(int32_t *)v12 & (int32_t)unknown_6d91ecd3(v17 + v14)); // 0x1aebd8
    char * v30 = (char *)(result + 0x2b701e8); // 0x1aebda
    *v30 = v29 + (char)(a5 / 256) + *v30 + (char)!v27;
    return result;
}

// Address range: 0x1aebf1 - 0x1aebf3
int64_t function_1aebf1(void) {
    // 0x1aebf1
    int64_t result; // 0x1aebf1
    return result;
}

// Address range: 0x213547 - 0x21363f
int64_t function_213547(int64_t a1) {
    // 0x213547
    int64_t v1; // bp-8, 0x213547
    v1 = (int64_t)&v1;
    int64_t v2; // 0x213547
    return function_c823b(v2, v2, v2, v2);
}

// Address range: 0x21363f - 0x213783
int64_t function_21363f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21363f
    int64_t v1; // 0x21363f
    return function_c823b(a1, a2, a3, v1);
}

// Address range: 0x213783 - 0x2138f4
int64_t function_213783(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x213783
    return function_c823b(a1, 0x5c9b8d9, a3, a4);
}

// Address range: 0x21391c - 0x21391d
int64_t function_21391c(void) {
    // 0x21391c
    int64_t result; // 0x21391c
    return result;
}

// Address range: 0x21391d - 0x213921
int64_t function_21391d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21391d
    int64_t result; // 0x21391d
    char * v1 = (char *)(result - 127); // 0x21391d
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x213961 - 0x2139da
int64_t function_213961(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 127); // 0x213961
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x213961
    return result;
}

// Address range: 0x29104c - 0x291107
int64_t function_29104c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x29104c
    return function_cc59c(a1);
}

// Address range: 0x291107 - 0x29127d
int64_t function_291107(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x291107
    int64_t v1; // bp-40, 0x291107
    int64_t v2 = (int64_t)&v1; // 0x291171
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x291186
    int64_t v4 = v2 - 16; // 0x29118e
    int64_t * v5 = (int64_t *)v4; // 0x2911a2
    *v5 = v4;
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x2911b2
    *v3 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x2911b9
    *v7 = v6;
    int64_t v8 = *(int64_t *)(v2 + 16); // 0x2911cb
    *v3 = v8;
    *v5 = v8;
    *v7 = v6;
    v1 = *v5;
    *(int64_t *)(v2 + 24) = v8;
    *v5 = a1;
    *v7 = v2;
    int64_t v9 = *v5; // 0x29126c
    *(int64_t *)(v2 - 32) = v9;
    return function_cc59c(v9);
}

// Address range: 0x29127d - 0x2913c0
int64_t function_29127d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x22dddbfd; // bp-32, 0x2912de
    int64_t v2 = (int64_t)&v1; // 0x29132d
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x291335
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x291335
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x291339
    *v5 = v3;
    *v4 = 0x192e1b5e;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x291358
    *v6 = a5;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = a3;
    *v6 = v3;
    *(int64_t *)(v2 + 24) = *v5;
    *v4 = v1;
    *v5 = v2;
    *v4 = v1;
    *v5 = v1;
    return function_cc59c(a1);
}

// Address range: 0x3cc479 - 0x3cc491
int64_t function_3cc479(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cc479
    int64_t result; // 0x3cc479
    bool v1; // 0x3cc479
    if (v1) {
        // 0x3cc47c
        return result;
    }
    char v2 = *(char *)-0x1704a47b; // 0x3cc47e
    *(char *)-0x1704a47b = v2 + (char)((uint64_t)result / 256);
    uint32_t v3 = (int32_t)result - *(int32_t *)0x9c8767f; // 0x3cc484
    int64_t v4 = v3; // 0x3cc484
    char * v5 = (char *)(v4 + 10); // 0x3cc48c
    *v5 = (char)(v3 / 256);
    return v4 & 0xffff00ff | 256 * (int64_t)*v5;
}

// Address range: 0x3cc4b4 - 0x3cc4b5
int64_t function_3cc4b4(void) {
    // 0x3cc4b4
    int64_t result; // 0x3cc4b4
    return result;
}

// Address range: 0x3cc4d8 - 0x3cc4d9
int64_t function_3cc4d8(void) {
    // 0x3cc4d8
    int64_t result; // 0x3cc4d8
    return result;
}

// Address range: 0x3cc4e1 - 0x3cc4e4
int64_t function_3cc4e1(int64_t a1, int64_t a2) {
    // 0x3cc4e1
    int64_t result; // 0x3cc4e1
    *(char *)a2 = 2 * (char)result;
    return result;
}

// Address range: 0x3cc508 - 0x3cc54f
int64_t function_3cc508(int64_t a1) {
    // 0x3cc508
    int64_t v1; // 0x3cc508
    char * v2 = (char *)(v1 + 21); // 0x3cc50a
    char v3 = *v2 | (char)a1; // 0x3cc50a
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x3cc50a
    *v2 = v3;
    if (v4 % 2 == 0) {
        // 0x3cc548
        return (a1 & 0xffffffff) + 0x3713aad8;
    }
    // 0x3cc50f
    return function_3cc4d8();
}

// Address range: 0x3cc567 - 0x3cc56f
int64_t function_3cc567(int64_t a1) {
    // 0x3cc567
    return unknown_1fedb86f(a1);
}

// Address range: 0x3cc595 - 0x3cc599
int64_t function_3cc595(void) {
    // 0x3cc595
    int64_t result; // 0x3cc595
    return result;
}

// Address range: 0x3cc599 - 0x3cc6c2
int64_t function_3cc599(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3cc599
    int64_t v1; // 0x3cc599
    uint64_t v2 = v1;
    *(char *)v2 = (char)(v1 / 256 ^ v2);
    *(char *)a3 = (char)a4;
    char * v3 = (char *)(a4 + 60 + 4 * v1); // 0x3cc626
    *v3 = *v3 | (char)(v2 / 256);
    unknown_ffffffff818b1431();
    abort();
    // UNREACHABLE
}

// Address range: 0x3cc6d3 - 0x3cc6d4
int64_t function_3cc6d3(void) {
    // 0x3cc6d3
    int64_t result; // 0x3cc6d3
    return result;
}

// Address range: 0x3cc6dd - 0x3cc6de
int64_t function_3cc6dd(void) {
    // 0x3cc6dd
    int64_t result; // 0x3cc6dd
    return result;
}

// Address range: 0x3cc72a - 0x3cc72c
int64_t function_3cc72a(void) {
    // 0x3cc72a
    return function_3cc6dd();
}

// Address range: 0x3cc73a - 0x3cc757
int64_t function_3cc73a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3cc73a
    int64_t v1; // 0x3cc73a
    char * v2 = (char *)(v1 + (8 * v1 | 1)); // 0x3cc73c
    unsigned char v3 = *v2; // 0x3cc73c
    unsigned char v4 = v3 + (char)a4; // 0x3cc73c
    bool v5; // 0x3cc73a
    unsigned char v6 = v4 + (char)v5; // 0x3cc73c
    bool v7 = v5 ? v6 <= v3 : v4 < v3; // 0x3cc73c
    *v2 = v6;
    uint32_t v8 = (int32_t)v1; // 0x3cc740
    int32_t v9 = v7; // 0x3cc740
    uint32_t v10 = v9 + (int32_t)a1; // 0x3cc740
    uint32_t v11 = v8 - v10; // 0x3cc740
    int64_t v12 = v11; // 0x3cc742
    if (v11 == 0 || (v7 ? v10 != -1 || v11 - v9 > v8 : v10 > v8)) {
        v12 = function_3cc6d3();
    }
    // 0x3cc744
    __asm_sti();
    int64_t result = __asm_hlt(); // 0x3cc74b
    int32_t * v13 = (int32_t *)(a2 + 0x6ba49a04); // 0x3cc74e
    *v13 = *v13 + (int32_t)v12;
    return result;
}

// Address range: 0x3cc765 - 0x3cc766
int64_t function_3cc765(void) {
    // 0x3cc765
    int64_t result; // 0x3cc765
    return result;
}

// Address range: 0x3cc7cd - 0x3cc7d4
int64_t function_3cc7cd(void) {
    // 0x3cc7cd
    unknown_110c49d3();
    return function_3cc765();
}

// Address range: 0x3cc7d6 - 0x3cc7ed
int64_t function_3cc7d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 43); // 0x3cc7d6
    int64_t v2; // 0x3cc7d6
    bool v3; // 0x3cc7d6
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    *(char *)(v2 & 0x8684282) = 61;
    int64_t v4; // 0x3cc7d6
    *(int32_t *)a1 = *(int32_t *)&v4 + (int32_t)a3;
    int64_t v5; // 0x3cc7d6
    *(char *)a1 = *(char *)&v5;
    return v2 & 0xffffffff;
}

// Address range: 0x3cc7ff - 0x3cc801
int64_t function_3cc7ff(void) {
    // 0x3cc7ff
    int64_t result; // 0x3cc7ff
    return result;
}

// Address range: 0x3cc858 - 0x3cc85a
int64_t function_3cc858(int64_t a1) {
    // 0x3cc858
    int64_t v1; // 0x3cc858
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x3cc898 - 0x3cc899
int64_t function_3cc898(int64_t a1) {
    // 0x3cc898
    int64_t result; // 0x3cc898
    return result;
}

// Address range: 0x4060d1 - 0x406147
int64_t function_4060d1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x4060d1
    int64_t v1; // 0x4060d1
    int64_t v2 = v1;
    bool v3; // 0x4060d1
    char * v4 = (char *)(2 * (int64_t)(0x10000 * (int32_t)((v2 + 53 + (int64_t)v3) % 256 | v2 & 0xff00) >> 16) + 85); // 0x4060d6
    *v4 = *v4 ^ (char)(a3 / 256);
    int32_t v5 = __readgsdword(v1 + 0x32121b3); // 0x4060df
    int64_t v6; // 0x4060d1
    if (*(int32_t *)&v6 >= 0x503c843) {
        function_4060c0();
    }
    int64_t v7 = __asm_hlt(); // 0x4060f2
    v6 = v7;
    *(int32_t *)0x4e0b7813beb3e968 = (int32_t)v7;
    int32_t v8 = v1; // 0x406103
    uint32_t v9 = *(int32_t *)(v7 - 0x58a23538); // 0x406103
    int64_t result = v7; // 0x406109
    if (-0x174b8029 * v5 != 1 && v9 != -v8) {
        result = function_40609d();
        v6 = result;
    }
    // 0x40610b
    if (v9 > -1 - v8) {
        // 0x406144
        return result;
    }
    char * v10 = (char *)((v1 & 0xffffffff) - 45 + result); // 0x40610d
    *v10 = *v10 - (char)result;
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x40615e - 0x406163
int64_t function_40615e(void) {
    // 0x40615e
    return function_230621d6();
}

// Address range: 0x406170 - 0x406194
int64_t function_406170(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x406170
    int64_t v1; // 0x406170
    int64_t v2 = v1;
    *(int32_t *)0x1491ec504 = *(int32_t *)0x1491ec504 / 2 | -0x80000000;
    int64_t v3; // 0x406170
    int32_t v4 = *(int32_t *)(a4 - 122) & (int32_t)(int64_t)&v3; // 0x40617f
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x40617f
    bool v6; // 0x406170
    *(int64_t *)((int64_t)v4 - 8) = 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 64 * (int64_t)(v4 == 0) | 128 * (int64_t)(v4 < 0) | 4 * (int64_t)(v5 % 2 == 0) | 2;
    char v7 = *(char *)(a1 - 0x45f5e38c); // 0x406185
    unsigned char v8 = v7 + (char)(-1 - (char)v2 < (char)a4); // 0x406185
    bool v9 = -1 - (char)v2 < (char)a4 ? v8 != -1 | (char)(-1 - (char)v2 < (char)a4) - 15 - v8 > 241 : v8 > 241; // 0x406185
    return ((v2 + a4) % 256 | v2 & 0xffffff00) + 0x852a38a + (int64_t)v9 & 0xffffffff;
}

// Address range: 0x4061a8 - 0x4061bd
int64_t function_4061a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 - 0x40bf57e2); // 0x4061af
    int64_t result; // 0x4061a8
    *v1 = *v1 ^ result;
    return result;
}

// Address range: 0x4061ef - 0x4061f0
int64_t function_4061ef(void) {
    // 0x4061ef
    int64_t result; // 0x4061ef
    return result;
}

// Address range: 0x406210 - 0x406213
int64_t function_406210(void) {
    // 0x406210
    int64_t result; // 0x406210
    return result;
}

// Address range: 0x40622a - 0x40639b
int64_t function_40622a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 2); // 0x40622a
    unsigned char v2 = *v1; // 0x40622a
    int64_t v3; // 0x40622a
    *v1 = (char)v3;
    int64_t v4 = __asm_iretd(a1); // 0x40622e
    int64_t result = v4 & -191; // 0x40622f
    int32_t * v5 = (int32_t *)(8 * a2 - 56 + result); // 0x406236
    *v5 = *v5 + (int32_t)a4;
    if ((int32_t)result > 0x77800661) {
        // 0x40627f
        return result;
    }
    uint32_t v6 = (int32_t)v3; // 0x406231
    uint32_t v7 = v6 + (int32_t)v3; // 0x406231
    int64_t v8 = v4 & 0x970b2901 | 0x68f4d65a; // 0x406243
    int32_t v9 = (int32_t)(v8 - ((int64_t)(v7 < v6) + a2 + (v3 & 0xff00 | (int64_t)v2) & 0xff00) & 0xff00 | v8 & 0xffff005b) - 0x17714c61; // 0x40624f
    int64_t result2 = v9; // 0x406254
    if (v9 < 0) {
        result2 = function_4061ef();
    }
    // 0x406256
    if (llvm_ctpop_i8((char)v9) % 2 != 0) {
        // 0x40627f
        return result2;
    }
    // 0x406258
    bool v10; // 0x40622a
    int64_t v11 = (v10 ? -1 : 1) + a1; // 0x40624a
    *(int32_t *)-0x9bf1e6d29c87b47 = (int32_t)result2;
    *(int64_t *)(int64_t)v7 = v11;
    *(char *)v11 = (char)result2;
    char * v12 = (char *)(2 * result2); // 0x406270
    *v12 = *v12 | 56;
    __readgsdword(a4 + 65);
    return result2;
}

// Address range: 0x40639c - 0x4063a5
int64_t function_40639c(int64_t a1) {
    // 0x40639c
    return __asm_in_134((char)a1);
}

// Address range: 0x4063b1 - 0x4063b7
int64_t function_4063b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4063b1
    int64_t result; // 0x4063b1
    return result;
}

// Address range: 0x4063cc - 0x4063cd
int64_t function_4063cc(void) {
    // 0x4063cc
    int64_t result; // 0x4063cc
    return result;
}

// Address range: 0x4063ea - 0x4063ee
int64_t function_4063ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4063ea
    int64_t result; // 0x4063ea
    return result;
}

// Address range: 0x406421 - 0x40642b
int64_t function_406421(void) {
    // 0x406421
    int64_t v1; // 0x406421
    bool v2; // 0x406421
    return v1 + 0x96d6d417 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x406483 - 0x4064c7
int64_t function_406483(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x406483
    int64_t v1; // 0x406483
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t v3 = v1 ^ 219; // 0x406484
    *(char *)a3 = (char)(v3 | v1);
    *(int64_t *)v2 = v2 | a3;
    int64_t v4 = v3 + 0x3c2d5d9a; // 0x40648c
    *(char *)(v1 + 4 * v1) = (char)v1;
    unsigned char v5 = *(char *)(v1 + 41) | (char)(a4 / 256); // 0x406495
    int64_t v6 = 256 * (int64_t)v5 | a4 & -0xff01; // 0x406495
    int64_t v7 = 256 * (int64_t)*(char *)(a2 + 125) | v4 & 0xffff0000; // 0x40649a
    char * v8 = (char *)(v6 + 0x6853f9d2); // 0x4064a3
    *v8 = *v8 ^ (char)a5;
    char v9 = v5 ^ (char)v4; // 0x4064a9
    int64_t v10 = v9; // 0x4064a9
    if (v9 < 0) {
        // 0x4064df
        return v7 | v10;
    }
    uint32_t v11 = *(int32_t *)((v7 | (int64_t)*(char *)(v10 + a5)) + 11); // 0x4064ae
    char v12 = *(char *)(v6 + 0x4dc0b75d); // 0x4064b1
    *(int32_t *)-0x3a54aa70440fefc9 = v11 % 256 ^ (int32_t)(v12 ^ v5) | v11 & -256;
    return function_1b107c24();
}

// Address range: 0x4064d4 - 0x4064df
int64_t function_4064d4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4064d4
    int64_t result; // 0x4064d4
    bool v1; // 0x4064d4
    if (v1) {
        result = function_4064fe();
    }
    // 0x4064d6
    int64_t v2; // 0x4064d4
    char * v3 = (char *)(4 * v2 - 115 + result); // 0x4064d7
    *v3 = (char)v1 + (char)a3 + *v3;
    return result;
}

// Address range: 0x4064fe - 0x406500
int64_t function_4064fe(void) {
    // 0x4064fe
    int64_t v1; // 0x4064fe
    return v1 | 64;
}

// Address range: 0x406519 - 0x40651a
int64_t function_406519(void) {
    // 0x406519
    int64_t result; // 0x406519
    return result;
}

// Address range: 0x406531 - 0x406533
int64_t function_406531(void) {
    // 0x406531
    int64_t result; // 0x406531
    return result;
}

// Address range: 0x40655e - 0x406585
int64_t function_40655e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40655e
    int64_t v1; // 0x40655e
    int32_t v2 = v1;
    *(int32_t *)v1 = v2 - 0x3f6c2c13;
    __asm_out_137((int16_t)a3, v2);
    int64_t v3; // 0x40655e
    int64_t v4; // 0x40655e
    *(char *)a1 = *(char *)&v4 - (char)v3;
    *(char *)v3 = 2 * *(char *)&v3;
    char v5 = (char)v1 ^ 105; // 0x40656d
    int64_t v6 = v1 & -256 | (int64_t)v5; // 0x40656f
    if (v5 < 0) {
        v6 = function_406519();
    }
    // 0x406571
    *(int32_t *)0x732520c5387849a4 = (int32_t)v6;
    char * v7 = (char *)(v1 + 4); // 0x40657d
    *v7 = *v7 - (char)a4;
    return function_2c9f977c();
}

// Address range: 0x40658d - 0x406590
int64_t function_40658d(void) {
    // 0x40658d
    int64_t result; // 0x40658d
    return result;
}

// Address range: 0x4065a4 - 0x4065a7
int64_t function_4065a4(void) {
    // 0x4065a4
    int64_t result; // 0x4065a4
    return result;
}

// Address range: 0x4c2b91 - 0x4c2cd3
// Used cryptographic patterns:
//  - openbsd_hw_c_do_digest_md5zero (8-bit)
int64_t function_4c2b91(int64_t a1) {
    int64_t v1 = 1; // 0x4c2be5
    int64_t v2 = 0; // 0x4c2be5
    if ((int32_t)a1 != 0) {
        goto lab_0x4c2c30;
    } else {
        goto lab_0x4c2be7;
    }
  lab_0x4c2c30:;
    int64_t v3 = 0x100000000 * v2;
    printf("  MD5 test #%d: ", v1);
    int32_t v4 = *(int32_t *)((v3 >> 30) + (int64_t)&g6); // 0x4c2c48
    int64_t str; // bp-72, 0x4c2b91
    function_4c2b30(9 * ((v3 >> 32) + (v3 >> 29)) + (int64_t)&g7, v4, &str);
    int32_t memcmp_rc = memcmp(&str, (int64_t *)((v3 >> 28) + (int64_t)"\xd4\x1d\x8c\xd9\x8f\x00\xb2\x04\xe9\x80\t\x98\xec\xf8\x42~"), 16); // 0x4c2c6b
    if (memcmp_rc != 0) {
        // 0x4c2cc0
        puts("failed");
        // 0x4c2c91
        return 1;
    }
    // 0x4c2c74
    puts("passed");
    int64_t v5 = v1; // 0x4c2c83
    if (v1 == 7) {
        // 0x4c2c85
        putchar(10);
        // 0x4c2c91
        return 0;
    }
    goto lab_0x4c2c25;
  lab_0x4c2be7:;
    int64_t v6 = 0;
    int32_t v7 = *(int32_t *)((v6 >> 30) + (int64_t)&g6); // 0x4c2bf1
    function_4c2b30(81 * (v6 >> 32) + (int64_t)&g7, v7, &str);
    int32_t memcmp_rc2 = memcmp(&str, (int64_t *)((v6 >> 28) + (int64_t)"\xd4\x1d\x8c\xd9\x8f\x00\xb2\x04\xe9\x80\t\x98\xec\xf8\x42~"), 16); // 0x4c2c0f
    if (memcmp_rc2 != 0) {
        // 0x4c2c91
        return 1;
    }
    int64_t v8 = 1;
    v5 = v8;
    if (v8 == 7) {
        // 0x4c2c91
        return 0;
    }
    goto lab_0x4c2c25;
  lab_0x4c2c25:
    // 0x4c2c25
    v1 = v5 + 1 & 0xffffffff;
    v2 = v5 & 0xffffffff;
    if ((int32_t)a1 == 0) {
        goto lab_0x4c2be7;
    } else {
        goto lab_0x4c2c30;
    }
}

// Address range: 0x4c2ce0 - 0x4c2ce7
int64_t function_4c2ce0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c2ce0
    return function_4ce8f0();
}

// Address range: 0x4c2cf0 - 0x4c2cfa
int64_t function_4c2cf0(void) {
    // 0x4c2cf0
    return function_4ce8f0();
}

// Address range: 0x4c2d00 - 0x4c2d07
int64_t function_4c2d00(int64_t a1, int64_t a2) {
    // 0x4c2d00
    return function_4cdde0();
}

// Address range: 0x4c2d10 - 0x4c2d1a
int64_t function_4c2d10(void) {
    // 0x4c2d10
    return function_4cdde0();
}

// Address range: 0x4c2d20 - 0x4c2d25
int64_t function_4c2d20(void) {
    // 0x4c2d20
    return function_4cdef0();
}

// Address range: 0x4c2d30 - 0x4c2d35
int64_t function_4c2d30(void) {
    // 0x4c2d30
    int64_t result; // 0x4c2d30
    return result;
}

// Address range: 0x4c2d40 - 0x4c2d52
int64_t function_4c2d40(int64_t a1) {
    // 0x4c2d40
    function_4cddb0();
    free((int64_t *)a1);
    return (int64_t)&g14;
}

// Address range: 0x4c2d60 - 0x4c2d85
int64_t function_4c2d60(void) {
    int64_t * mem = calloc(1, 216); // 0x4c2d6b
    int64_t result = (int64_t)mem; // 0x4c2d6b
    if (mem != NULL) {
        // 0x4c2d78
        function_4cdd20(result);
    }
    // 0x4c2d80
    return result;
}

// Address range: 0x4c2d90 - 0x4c2d95
int64_t function_4c2d90(void) {
    // 0x4c2d90
    return function_4ce580();
}

// Address range: 0x4c2da0 - 0x4c2da5
int64_t function_4c2da0(void) {
    // 0x4c2da0
    return function_4ce440();
}

// Address range: 0x4c2db0 - 0x4c2db7
int64_t function_4c2db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c2db0
    return function_4cdaa0();
}

// Address range: 0x4c2dc0 - 0x4c2dca
int64_t function_4c2dc0(void) {
    // 0x4c2dc0
    return function_4cdaa0();
}

// Address range: 0x4c2dd0 - 0x4c2dd7
int64_t function_4c2dd0(int64_t a1, int64_t a2) {
    // 0x4c2dd0
    return function_4ccd50();
}

// Address range: 0x4c2de0 - 0x4c2dea
int64_t function_4c2de0(void) {
    // 0x4c2de0
    return function_4ccd50();
}

// Address range: 0x4c2df0 - 0x4c2df5
int64_t function_4c2df0(void) {
    // 0x4c2df0
    return function_4ccde0();
}

// Address range: 0x4c2e00 - 0x4c2e05
int64_t function_4c2e00(void) {
    // 0x4c2e00
    int64_t result; // 0x4c2e00
    return result;
}

// Address range: 0x4c2e10 - 0x4c2e22
int64_t function_4c2e10(int64_t a1) {
    // 0x4c2e10
    function_4cccc0();
    free((int64_t *)a1);
    return (int64_t)&g14;
}

// Address range: 0x4c2e30 - 0x4c2e55
int64_t function_4c2e30(void) {
    int64_t * mem = calloc(1, 108); // 0x4c2e3b
    int64_t result = (int64_t)mem; // 0x4c2e3b
    if (mem != NULL) {
        // 0x4c2e48
        function_4ccc30(result);
    }
    // 0x4c2e50
    return result;
}

// Address range: 0x4c2e60 - 0x4c2e65
int64_t function_4c2e60(void) {
    // 0x4c2e60
    return function_4cd900();
}

// Address range: 0x4c2e70 - 0x4c2e75
int64_t function_4c2e70(void) {
    // 0x4c2e70
    return function_4cd7d0();
}

// Address range: 0x4c2e80 - 0x4c2e85
int64_t function_4c2e80(void) {
    // 0x4c2e80
    int64_t result; // 0x4c2e80
    return result;
}

// Address range: 0x4c2e90 - 0x4c2e95
int64_t function_4c2e90(void) {
    // 0x4c2e90
    int64_t result; // 0x4c2e90
    return result;
}

// Address range: 0x4c2ea0 - 0x4c2eb2
int64_t function_4c2ea0(int64_t a1) {
    // 0x4c2ea0
    function_4cb4a0();
    free((int64_t *)a1);
    return (int64_t)&g14;
}

// Address range: 0x4c2ec0 - 0x4c2ee5
int64_t function_4c2ec0(void) {
    int64_t * mem = calloc(1, 92); // 0x4c2ecb
    int64_t result = (int64_t)mem; // 0x4c2ecb
    if (mem != NULL) {
        // 0x4c2ed8
        function_4cb410(result);
    }
    // 0x4c2ee0
    return result;
}

// Address range: 0x4c2ef0 - 0x4c2ef5
int64_t function_4c2ef0(void) {
    // 0x4c2ef0
    return function_4cc900();
}

// Address range: 0x4c2f00 - 0x4c2f05
int64_t function_4c2f00(void) {
    // 0x4c2f00
    return function_4cc7d0();
}

// Address range: 0x4c2f10 - 0x4c2f15
int64_t function_4c2f10(void) {
    // 0x4c2f10
    return function_4cb520();
}

// Address range: 0x4c2f20 - 0x4c2f25
int64_t function_4c2f20(void) {
    // 0x4c2f20
    int64_t result; // 0x4c2f20
    return result;
}

// Address range: 0x4c2f30 - 0x4c2f35
int64_t function_4c2f30(void) {
    // 0x4c2f30
    int64_t result; // 0x4c2f30
    return result;
}

// Address range: 0x4c2f40 - 0x4c2f52
int64_t function_4c2f40(int64_t a1) {
    // 0x4c2f40
    function_4c6920();
    free((int64_t *)a1);
    return (int64_t)&g14;
}

// Address range: 0x4c2f60 - 0x4c2f85
int64_t function_4c2f60(void) {
    int64_t * mem = calloc(1, 92); // 0x4c2f6b
    int64_t result = (int64_t)mem; // 0x4c2f6b
    if (mem != NULL) {
        // 0x4c2f78
        function_4c6890(result);
    }
    // 0x4c2f80
    return result;
}

// Address range: 0x4c2f90 - 0x4c2f95
int64_t function_4c2f90(void) {
    // 0x4c2f90
    return function_4c8450();
}

// Address range: 0x4c2fa0 - 0x4c2fa5
int64_t function_4c2fa0(void) {
    // 0x4c2fa0
    return function_4c8320();
}

// Address range: 0x4c2fb0 - 0x4c2fb5
int64_t function_4c2fb0(void) {
    // 0x4c2fb0
    return function_4c69a0();
}

// Address range: 0x4c2fc0 - 0x4c2fc5
int64_t function_4c2fc0(void) {
    // 0x4c2fc0
    return function_4c1ea0();
}

// Address range: 0x4c2fd0 - 0x4c2fd5
int64_t function_4c2fd0(void) {
    // 0x4c2fd0
    return function_4c1e10();
}

// Address range: 0x4c2fe0 - 0x4c2ff2
int64_t function_4c2fe0(int64_t a1) {
    // 0x4c2fe0
    function_4c1df0();
    free((int64_t *)a1);
    return (int64_t)&g14;
}

// Address range: 0x4c3000 - 0x4c3025
int64_t function_4c3000(void) {
    int64_t * mem = calloc(1, 88); // 0x4c300b
    int64_t result = (int64_t)mem; // 0x4c300b
    if (mem != NULL) {
        // 0x4c3018
        function_4c1d60(result);
    }
    // 0x4c3020
    return result;
}

// Address range: 0x4c3030 - 0x4c3035
int64_t function_4c3030(void) {
    // 0x4c3030
    return function_4c2a20();
}

// Address range: 0x4c3040 - 0x4c3045
int64_t function_4c3040(void) {
    // 0x4c3040
    return function_4c28f0();
}

// Address range: 0x4c3050 - 0x4c3055
int64_t function_4c3050(void) {
    // 0x4c3050
    return function_4c1e70();
}

// Address range: 0x4df479 - 0x4df4f6
int64_t function_4df479(void) {
    // 0x4df479
    int256_t v1; // 0x4df479
    int256_t v2 = __asm_vpxord(v1, v1); // 0x4df47a
    int256_t v3 = __asm_vpxord(v1, v1); // 0x4df480
    int256_t v4 = __asm_vpxord(v1, v1); // 0x4df486
    int256_t v5 = __asm_vprord(v1, 16); // 0x4df48c
    int256_t v6 = __asm_vprord(v2, 16); // 0x4df493
    int256_t v7 = __asm_vprord(v3, 16); // 0x4df49a
    int256_t v8 = __asm_vprord(v4, 16); // 0x4df4a1
    int256_t v9 = __asm_vpaddd(v1, v5); // 0x4df4a8
    int256_t v10 = __asm_vpaddd(v1, v6); // 0x4df4ad
    int256_t v11 = __asm_vpaddd(v1, v7); // 0x4df4b2
    int256_t v12 = __asm_vpaddd(v1, v8); // 0x4df4b7
    int256_t v13 = __asm_vpxord(v1, v9); // 0x4df4bc
    int256_t v14 = __asm_vpxord(v1, v10); // 0x4df4c2
    int256_t v15 = __asm_vpxord(v1, v11); // 0x4df4c8
    int256_t v16 = __asm_vpxord(v1, v12); // 0x4df4ce
    __asm_vprord(v13, 12);
    __asm_vprord(v14, 12);
    __asm_vprord(v15, 12);
    __asm_vprord(v16, 12);
    __asm_vpaddd(v1, v1);
    int64_t result; // 0x4df479
    return result;
}
