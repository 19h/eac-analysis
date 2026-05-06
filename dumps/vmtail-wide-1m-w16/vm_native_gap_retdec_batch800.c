/*
 * Targeted RetDec C for native executable gap queue batch 800.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x203634-0x203834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x203a34-0x203c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x203c34-0x203e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x203e34-0x204034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3232bb-0x3234bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3234bb-0x3236bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3238bb-0x323abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x323abb-0x323cbb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_203634(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_203691(void);
int64_t function_2036a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_203728(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_203767(void);
int64_t function_20377f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_20380d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_203a34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_203a73(void);
int64_t function_203a74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_203ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_203b85(int64_t a1, int64_t a2);
int64_t function_203ba3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_203bbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_203d1c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_203e3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3232bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3232e7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_323328(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_323358(void);
int64_t function_32335c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3233a5(int64_t a1, int64_t a2);
int64_t function_3233f8(void);
int64_t function_32344e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_323499(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3234ed(void);
int64_t function_323503(void);
int64_t function_323539(void);
int64_t function_32354a(int64_t a1);
int64_t function_323556(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3235fb(void);
int64_t function_323610(void);
int64_t function_323636(int64_t a1, int64_t a2, int64_t a3);
int64_t function_323658(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_32386d();
int64_t function_32387a();
int64_t function_3238bb(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3238e4(int64_t a1);
int64_t function_3238f3(void);
int64_t function_32391e(int64_t a1);
int64_t function_323923(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_323a55(int64_t a1);
int64_t function_323a7c(void);
int64_t function_323ad1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_323b91(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_323bc3(void);
int64_t function_323bc4(int64_t a1, int64_t a2);
int64_t function_323bea(int64_t a1);
int64_t function_323c1e(void);
int64_t function_323c4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_323c8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_323ca7(void);
int64_t function_73b570cd();
int64_t function_caf2a();
int64_t function_ffffffffe8cf8d36();
int64_t function_ffffffffe9104046();
int64_t unknown_158de02f();
int64_t unknown_2474c945();
int64_t unknown_31336434();
int64_t unknown_39e71054();
int64_t unknown_3dacce81();
int64_t unknown_400754d9();
int64_t unknown_459bde05();
int64_t unknown_4fa238ed();
int64_t unknown_521a0719();
int64_t unknown_53a74d7c();
int64_t unknown_576a58b0();
int64_t unknown_60b3297f();
int64_t unknown_66399c36();
int64_t unknown_6dfd33f0();
int64_t unknown_713cc788();
int64_t unknown_7f29124();
int64_t unknown_a9908cc();
int64_t unknown_ba70db6();
int64_t unknown_ffffffff86881dd5();
int64_t unknown_ffffffff90401c3a();
int64_t unknown_ffffffff91dff874();
int64_t unknown_ffffffff9e01df83();
int64_t unknown_ffffffff9e2d672e();
int64_t unknown_ffffffffbe2d1d24();
int64_t unknown_ffffffffc2ff299d();
int64_t unknown_ffffffffca520b3c();
int64_t unknown_ffffffffcfa9bcc0();
int64_t unknown_ffffffffd0217801();
int64_t unknown_ffffffffdf8ab792();
int64_t unknown_ffffffffe0141bdf();
int64_t unknown_ffffffffe43fed72();
int64_t unknown_ffffffffe914ea13();
int64_t unknown_fffffffffaac39a9();
int64_t unknown_fffffffffabcf598();
int64_t unknown_fffffffffb23159f();

// Address range: 0x203634 - 0x203646
int64_t function_203634(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x203634
    int64_t v1; // 0x203634
    return (0x10000 * (int32_t)v1 >> 16) - 0x3f52766;
}

// Address range: 0x203691 - 0x203692
int64_t function_203691(void) {
    // 0x203691
    int64_t result; // 0x203691
    return result;
}

// Address range: 0x2036a7 - 0x2036dd
int64_t function_2036a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int32_t v1 = a5;
    char * v2 = (char *)(a1 - 0x7bfec24b); // 0x2036ab
    char v3 = *v2 + (char)a4; // 0x2036ab
    *v2 = v3;
    uint64_t v4 = a4 - 1; // 0x2036b1
    if (v4 != 0 != (v3 == 0)) {
        int64_t v5 = a3 & 0xffff00ff | (int64_t)(int32_t)&g1; // 0x2036b6
        *(int32_t *)(a2 + 57) = (int32_t)(int64_t)&v1;
        int64_t v6 = unknown_ffffffffcfa9bcc0(v5); // 0x2036ba
        uint64_t v7 = v6 + 118 + (int64_t)(v1 % 2 != 0); // 0x2036c0
        int64_t v8 = v7 % 256 | v6 & -256; // 0x2036c0
        *(int32_t *)-0x94b5dfec2ffc5f3 = (int32_t)v8;
        unsigned char v9 = *(char *)(v8 + 96); // 0x2036cb
        int64_t v10; // 0x2036a7
        char v11 = *(char *)&v10; // 0x2036ce
        int64_t v12; // 0x2036a7
        *(char *)v10 = v11 + (char)v12 + (char)(v9 < (char)(v4 / 256));
        *(char *)v5 = (char)v7;
        int3_t v13; // 0x2036a7
        __frontend_reg_load_fpr(v13);
    }
    // 0x2036db
    return function_203691();
}

// Address range: 0x203728 - 0x20375a
int64_t function_203728(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff9e2d672e(); // 0x203728
    int16_t v2 = a3; // 0x20372d
    int64_t v3; // 0x203728
    __asm_outsb(v2, (char)v3);
    *(int32_t *)0x12b41d1a4 = *(int32_t *)0x12b41d1a4 + (int32_t)a3;
    int32_t * v4 = (int32_t *)(a4 + 56 + 2 * v3); // 0x20374c
    *v4 = *v4 + (int32_t)a4;
    char v5 = __asm_in(v2); // 0x203750
    return (v1 | (int64_t)v5) & -256 | (int64_t)*(char *)-0x67770a46fe17f800;
}

// Address range: 0x203767 - 0x20376a
int64_t function_203767(void) {
    // 0x203767
    int64_t result; // 0x203767
    return result;
}

// Address range: 0x20377f - 0x2037ec
int64_t function_20377f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t result; // 0x20377f
    bool v2; // 0x20377f
    if (v2) {
        char * v3 = (char *)(result + 0x5101e800); // 0x2037da
        *v3 = *v3 + (char)(a4 / 256);
        int32_t * v4 = (int32_t *)(result - 103); // 0x2037e0
        *v4 = *v4 + (int32_t)a2;
        char * v5 = (char *)(result + 5); // 0x2037e4
        *v5 = *v5 + (char)(result / 256);
        return result;
    }
    int64_t v6 = unknown_713cc788(); // 0x203782
    int32_t * v7 = (int32_t *)(result - 0x5854b7b1); // 0x203787
    *v7 = *v7 & -0x72dffe18;
    int32_t v8 = *(int32_t *)((v6 & -0xff01 | (int64_t)&g2) + 72); // 0x203795
    int64_t v9 = result + 0xffffff98; // 0x20379e
    unknown_fffffffffaac39a9();
    *(char *)v1 = *(char *)&v1 ^ (char)v9;
    char * v10 = (char *)((int64_t)(-0x422efe18 * v8) - 125); // 0x2037b1
    *v10 = *v10 | (char)(v9 + a1);
    return a3 & 0xffffffff;
}

// Address range: 0x20380d - 0x203817
int64_t function_20380d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20380d
    int64_t result; // 0x20380d
    int32_t * v1 = (int32_t *)(result - 47); // 0x20380d
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x203a34 - 0x203a3e
int64_t function_203a34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x203a34
    int64_t v1; // 0x203a34
    int64_t v2 = v1 & 0xffffffff; // 0x203a35
    int64_t result = unknown_ffffffffca520b3c(v2, a5); // 0x203a36
    char * v3 = (char *)(v2 + 25); // 0x203a3b
    *v3 = *v3 & (char)a4;
    return result;
}

// Address range: 0x203a73 - 0x203a74
int64_t function_203a73(void) {
    // 0x203a73
    int64_t result; // 0x203a73
    return result;
}

// Address range: 0x203a74 - 0x203a7d
int64_t function_203a74(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x203a74
    int64_t result; // 0x203a74
    return result;
}

// Address range: 0x203ab8 - 0x203b56
int64_t function_203ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x203ab8
    int64_t v4 = v3 & 0xffffffff; // 0x203ab8
    int32_t v5 = (int32_t)a4 + 0x17ffb765;
    int32_t v6 = a2; // 0x203abe
    int32_t v7 = v5 + v6; // 0x203abe
    *(int32_t *)v4 = v7;
    int64_t v8 = v4 - 1; // 0x203ac0
    if (v8 != 0 == v7 == 0) {
        function_203a73();
    }
    int64_t v9; // 0x203ab8
    if (((v7 ^ v5) & (v7 ^ v6)) < 0) {
        // 0x203af2
        __asm_hlt((int64_t)&g3);
        int32_t * v10 = (int32_t *)(v1 + 0x7bb36f35b); // 0x203acb
        *v10 = *v10 + (int32_t)v3;
        char * v11 = (char *)(v3 + 0xd3a26c); // 0x203ad3
        char v12 = v8; // 0x203ad3
        *v11 = *v11 | v12;
        int32_t * v13 = (int32_t *)unknown_ffffffffe0141bdf(); // 0x203ade
        *v13 = *v13 | -0x53fa9f31;
        unknown_6dfd33f0();
        char v14 = *(char *)&v1; // 0x203aef
        char v15 = *(char *)&v2; // 0x203aef
        bool v16; // 0x203ab8
        int64_t v17 = v16 ? -1 : 1; // 0x203aef
        v2 += v17;
        v1 += v17;
        *(char *)a3 = v12;
        v9 = v3 | v3;
        if (((v14 - v15 ^ v14) & (v15 ^ v14)) < 0) {
            // 0x203b32
            unknown_ffffffff90401c3a();
            unknown_2474c945();
            return function_ffffffffe9104046();
        }
    }
    uint64_t v18 = unknown_ffffffffd0217801(); // 0x203afb
    char * v19 = (char *)(v18 - 0x66effaf6); // 0x203b05
    *v19 = *v19 + (char)(v18 / 256);
    unknown_ffffffffe914ea13();
    int32_t v20 = v2;
    *(int32_t *)0x44b72619 = *(int32_t *)0x44b72619 + v20;
    int32_t v21 = *(int32_t *)(v9 - 0x515a2400 & -256); // 0x203b18
    unknown_7f29124();
    uint32_t v22 = *(int32_t *)(v3 - 18 + v3) - 0x332dfe18; // 0x203b25
    int32_t * v23 = (int32_t *)(v4 - 46 + (int64_t)(v21 & (int32_t)v1)); // 0x203b2c
    *v23 = *v23 + v20;
    char * v24 = (char *)(int64_t)v22; // 0x203b30
    *v24 = *v24 + (char)(v22 / 256);
    // 0x203b32
    unknown_ffffffff90401c3a();
    unknown_2474c945();
    return function_ffffffffe9104046();
}

// Address range: 0x203b85 - 0x203b97
int64_t function_203b85(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x50ca8876); // 0x203b86
    bool v2; // 0x203b85
    *v1 = *v1 - (v2 ? -0x3a85fe17 : -0x3a85fe18);
    int64_t result; // 0x203b85
    return result;
}

// Address range: 0x203ba3 - 0x203bbf
int64_t function_203ba3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x203ba3
    int64_t v1; // 0x203ba3
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 0x761c8aae); // 0x203ba5
    *v3 = *v3 + (int32_t)v1;
    *(int32_t *)a1 = (int32_t)v2;
    bool v4; // 0x203ba3
    int32_t * v5 = (int32_t *)((v4 ? -4 : 4) + a1); // 0x203bae
    uint32_t v6 = *v5; // 0x203bae
    uint32_t v7 = v6 + (int32_t)v1; // 0x203bae
    *v5 = v7;
    return (v2 + a4 / 256 + (v7 < v6 ? 7 : 8)) % 256 | v2 & -256;
}

// Address range: 0x203bbf - 0x203d1c
int64_t function_203bbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x203bbf
    int64_t v1; // 0x203bbf
    char * v2 = (char *)(v1 - 0x3f6af100); // 0x203bbf
    *v2 = *v2 + (char)v1;
    int64_t v3; // bp-32, 0x203bbf
    v3 = (int64_t)&v3;
    return function_caf2a(a1, 310, a3, a4, a5, v1, v1);
}

// Address range: 0x203d1c - 0x203e3c
int64_t function_203d1c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x203d1c
    int64_t v1; // bp-40, 0x203d1c
    int64_t v2 = (int64_t)&v1; // 0x203de1
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x203de9
    *v3 = 0xd126bba;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x203dee
    *v4 = 0x75d2d020;
    bool v5; // 0x203d1c
    *(int64_t *)(v2 - 24) = 0x4000 * (int64_t)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x203dfa
    *v6 = *v3;
    *v3 = 0x43eb2316;
    *v4 = 0x200eb8;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    int64_t v7 = *v6; // 0x203e21
    v1 = v7;
    *v3 = v7;
    int64_t v8; // 0x203d1c
    return function_caf2a(a1, a2, a3, v8, v8, v8, v1);
}

// Address range: 0x203e3c - 0x203fa3
int64_t function_203e3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x203e3c
    return function_caf2a(a1, a2, a3, a4, a5, a6, 0x201142);
}

// Address range: 0x3232bb - 0x3232d4
int64_t function_3232bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x2a6dab36; // 0x3232c3
    int64_t v2; // 0x3232bb
    *(char *)-0x2a6dab36 = v1 + (char)((uint64_t)v2 / 256);
    *(char *)a1 = __asm_insb((int16_t)a3);
    return unknown_ffffffff86881dd5();
}

// Address range: 0x3232e7 - 0x323309
int64_t function_3232e7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3232e7
    int64_t v1; // 0x3232e7
    char * v2 = (char *)(v1 - 0x36ac3bf1); // 0x3232e9
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3; // 0x3232e7
    char v4 = *(char *)&v3; // 0x3232f4
    bool v5; // 0x3232e7
    *(char *)a4 = (char)v1 + (char)(a3 / 256) + (char)v5 + v4;
    int32_t * v6 = (int32_t *)(v1 - 0x7afea74c); // 0x3232f8
    *v6 = *v6 + (int32_t)v1;
    *(int64_t *)(a1 - 0x4c5f0615) = 0x3a19cf00;
    return v1 & -195;
}

// Address range: 0x323328 - 0x323338
int64_t function_323328(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x2c8016d6); // 0x32332a
    uint32_t v2 = *v1; // 0x32332a
    *v1 = v2 / 2 | 0x80000000 * v2;
    return unknown_66399c36(a1, a2, a3, a4);
}

// Address range: 0x323358 - 0x323359
int64_t function_323358(void) {
    // 0x323358
    int64_t result; // 0x323358
    return result;
}

// Address range: 0x32335c - 0x323396
int64_t function_32335c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x32335c
    int32_t * v4 = (int32_t *)(v3 - 0x5f7ec029); // 0x323363
    bool v5; // 0x32335c
    *v4 = (int32_t)a1 - (int32_t)a3 + (int32_t)v5 + *v4;
    char * v6 = (char *)(a3 - 0x2efe18); // 0x323369
    *v6 = *v6 + (char)a3;
    *(char *)a3 = (char)a4;
    if (llvm_ctpop_i8((char)v3 | -10) % 2 != 0) {
        function_323358();
    }
    int64_t result = unknown_53a74d7c() & -256 | (int64_t)__asm_in_133(44); // 0x32337e
    if (a4 == 0) {
        // 0x3233d0
        return result;
    }
    int32_t * v7 = (int32_t *)(result + 0x7b8b6e97); // 0x323384
    *v7 = *v7 + (int32_t)result;
    *(char *)v1 = *(char *)&v1 + (char)((uint64_t)v3 / 256);
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x3233a5 - 0x3233a9
int64_t function_3233a5(int64_t a1, int64_t a2) {
    // 0x3233a5
    return a2 & 0xffffffff;
}

// Address range: 0x3233f8 - 0x3233f9
int64_t function_3233f8(void) {
    // 0x3233f8
    int64_t result; // 0x3233f8
    return result;
}

// Address range: 0x32344e - 0x323498
int64_t function_32344e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x32344e
    *(int32_t *)a2 = (int32_t)(a4 ^ a2);
    int32_t * v1 = (int32_t *)(a4 + 0x40e28bf5); // 0x32345e
    int64_t v2; // 0x32344e
    *v1 = *v1 + (int32_t)v2;
    *(char *)v2 = (char)(a3 / 256);
    unknown_ffffffff91dff874();
    __asm_int3();
    unknown_ffffffff9e01df83();
    int64_t result = unknown_ffffffffdf8ab792(); // 0x32348b
    int32_t * v3 = (int32_t *)(a3 + a1); // 0x323495
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x323499 - 0x3234e4
int64_t function_323499(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a2;
    int64_t v2 = unknown_fffffffffb23159f(); // 0x323499
    bool v3; // 0x323499
    if (!v3) {
        // 0x3234d4
        *(int32_t *)a1 = __asm_insd(488);
        return v2 & -256 | (int64_t)*(char *)0x734e00b34a10440a;
    }
    char * v4 = (char *)a1; // 0x3234a0
    *v4 = (char)(a3 / 256 & a1);
    *v4 = *(char *)&v1;
    int64_t v5 = v3 ? -2 : 2; // 0x3234a2
    return unknown_576a58b0(v5 + a1, v1 + v5);
}

// Address range: 0x3234ed - 0x3234ee
int64_t function_3234ed(void) {
    // 0x3234ed
    int64_t result; // 0x3234ed
    return result;
}

// Address range: 0x323503 - 0x323505
int64_t function_323503(void) {
    // 0x323503
    return function_3234ed();
}

// Address range: 0x323539 - 0x32354a
int64_t function_323539(void) {
    // 0x323539
    return (int64_t)*(int32_t *)-0x7a0556cc3f822fd6;
}

// Address range: 0x32354a - 0x323556
int64_t function_32354a(int64_t a1) {
    // 0x32354a
    int64_t v1; // 0x32354a
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x323556 - 0x3235a1
int64_t function_323556(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 60); // 0x323571
    *v1 = *v1 - 0x1bdc8099;
    int32_t * v2 = (int32_t *)((unknown_3dacce81() + 0xa0792af6 & 0xffffffff) + 14); // 0x323582
    uint32_t v3 = *v2; // 0x323582
    *v2 = v3 - 0x5f86d50a;
    int64_t v4; // 0x323556
    *(int32_t *)0xd4e5e1e4 = (int32_t)v4 & -256 | 26;
    int64_t v5 = unknown_ffffffffc2ff299d(); // 0x323597
    *(int64_t *)0xe4237f5f = 0x995001e8;
    int64_t result = (v5 + (v3 > 0x5f86d509 ? 217 : 216)) % 256 | v5 & -256; // 0x32359d
    *(int64_t *)0xe4237f57 = result;
    return result;
}

// Address range: 0x3235fb - 0x3235fc
int64_t function_3235fb(void) {
    // 0x3235fb
    int64_t result; // 0x3235fb
    return result;
}

// Address range: 0x323610 - 0x323613
int64_t function_323610(void) {
    // 0x323610
    return function_3235fb();
}

// Address range: 0x323636 - 0x32363f
int64_t function_323636(int64_t a1, int64_t a2, int64_t a3) {
    // 0x323636
    int64_t v1; // 0x323636
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x323636
    int64_t v3 = v2 ? -4 : 4; // 0x323636
    int64_t v4; // 0x323636
    *(char *)a3 = *(char *)&v4 + (char)v1;
    return function_73b570cd(v3 + a1, v3 + a2);
}

// Address range: 0x323658 - 0x3236b9
int64_t function_323658(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x323658
    unknown_fffffffffabcf598();
    *(int32_t *)a1 = (int32_t)__asm_hlt((int64_t)&g3);
    char * v1 = (char *)((a4 & -256 | 235) + 0x37007b8d); // 0x3236a6
    *v1 = *v1 + (char)a3;
    int64_t result = unknown_ba70db6(a1 + 4); // 0x3236b0
    int32_t * v2 = (int32_t *)(result + 76); // 0x3236b5
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x3238bb - 0x3238d8
int64_t function_3238bb(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a2;
    char * v2 = (char *)(a3 - 0x17fff8b0); // 0x3238bb
    *v2 = *v2 + (char)(a3 / 256);
    int64_t v3; // 0x3238bb
    int32_t * v4 = (int32_t *)(v3 - 0x66ff5800); // 0x3238c1
    *v4 = *v4 + (int32_t)v3;
    char * v5 = (char *)(a2 + 0x5c0200d5); // 0x3238c7
    char v6 = v3; // 0x3238c7
    char v7 = *v5 + v6; // 0x3238c7
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x3238c7
    *v5 = v7;
    __asm_out((int16_t)a3, v6);
    int64_t v9; // 0x3238bb
    if (v8 % 2 == 0) {
        v9 = function_32386d();
    }
    uint32_t v10 = *(int32_t *)&v1; // 0x3238d4
    uint32_t v11 = v10 + (int32_t)a3; // 0x3238d4
    *(int32_t *)v1 = v11;
    int64_t result = v9; // 0x3238d6
    if (v11 >= v10) {
        result = function_32387a();
    }
    // 0x3238d8
    return result;
}

// Address range: 0x3238e4 - 0x3238e7
int64_t function_3238e4(int64_t a1) {
    // 0x3238e4
    int64_t result; // 0x3238e4
    return result;
}

// Address range: 0x3238f3 - 0x3238f6
int64_t function_3238f3(void) {
    // 0x3238f3
    int64_t result; // 0x3238f3
    return result;
}

// Address range: 0x32391e - 0x323923
int64_t function_32391e(int64_t a1) {
    // 0x32391e
    return __asm_hlt(a1);
}

// Address range: 0x323923 - 0x32392f
int64_t function_323923(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 118); // 0x323923
    int64_t result; // 0x323923
    *v1 = *v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x323a55 - 0x323a56
int64_t function_323a55(int64_t a1) {
    // 0x323a55
    int64_t result; // 0x323a55
    return result;
}

// Address range: 0x323a7c - 0x323a7d
int64_t function_323a7c(void) {
    // 0x323a7c
    int64_t result; // 0x323a7c
    return result;
}

// Address range: 0x323ad1 - 0x323b85
int64_t function_323ad1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x323ad1
    int64_t v1; // 0x323ad1
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a4 - 1; // 0x323ad1
    if (v4 != 0) {
        function_323a7c();
    }
    // 0x323ad3
    unknown_400754d9();
    unknown_4fa238ed();
    int64_t v5; // 0x323ad1
    int64_t v6; // 0x323ad1
    bool v7; // 0x323ad1
    if (v7 || v7) {
        // 0x323aef
        *(char *)0x313423f2 = *(char *)0x313423f2 + 13;
        int32_t v8; // 0x323ad1
        *(int32_t *)a2 = (int32_t)(int64_t)&v8;
        *(int64_t *)(v2 - 77) = (int64_t)0.0;
        unknown_459bde05();
        v5 = a1;
    } else {
        char * v9 = (char *)(a3 + 1); // 0x323b2a
        *v9 = *v9 + (char)v1;
        uint64_t v10 = unknown_31336434(); // 0x323b2e
        int64_t v11 = v10 / 256 % 256 | a3 & -256; // 0x323b33
        int64_t v12 = v10 & 0xe1950025; // 0x323b33
        int32_t * v13 = (int32_t *)(v1 + 93); // 0x323b40
        *v13 = *v13 + (int32_t)v1;
        int32_t v14 = v12 | 256 * a3 & 0x1f00; // 0x323b46
        unsigned char v15 = llvm_ctpop_i8((char)v12); // 0x323b46
        int64_t v16 = (v1 - v11 & 0xffffffff) - 8; // 0x323b4b
        *(int64_t *)v16 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(v15 % 2 == 0) | 2;
        *(char *)a1 = (char)unknown_39e71054();
        int64_t v17 = v7 ? -1 : 1; // 0x323b53
        int64_t v18 = v17 + a1; // 0x323b53
        int32_t v19 = __asm_in_134((int16_t)v11); // 0x323b54
        *(char *)v18 = *(char *)&v3;
        int64_t v20 = v18 + v17; // 0x323b5b
        v3 += v17;
        char * v21 = (char *)v4; // 0x323b66
        *v21 = *v21 & -24;
        v6 = v16;
        v5 = v20;
        if ((char)v19 <= 237) {
            // 0x323b6c
            unknown_ffffffffe43fed72(v20, v3, 0x20ee01e8);
            int32_t * v22 = (int32_t *)((2 * v2 & 0xfe00 | v2 & -0xff01) + 0x54941c3e); // 0x323b71
            int32_t v23 = v16; // 0x323b71
            *v22 = *v22 + v23;
            int64_t v24 = unknown_60b3297f(); // 0x323b79
            int32_t * v25 = (int32_t *)v4; // 0x323b83
            *v25 = *v25 | v23;
            return v24 + 0xa3a17460 & 0xffffffff;
        }
    }
    // 0x323b04
    *(int64_t *)(v6 - 8) = v5;
    *(char *)-0x27cbdc98 = *(char *)-0x27cbdc98 + 97;
    return unknown_521a0719();
}

// Address range: 0x323b91 - 0x323b98
int64_t function_323b91(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a1 + 7); // 0x323b91
    *v1 = *v1 - (char)(a3 / 256);
    return __asm_wait(a1, a2);
}

// Address range: 0x323bc3 - 0x323bc4
int64_t function_323bc3(void) {
    // 0x323bc3
    int64_t result; // 0x323bc3
    return result;
}

// Address range: 0x323bc4 - 0x323bcc
int64_t function_323bc4(int64_t a1, int64_t a2) {
    // 0x323bc4
    __asm_wait(a1, a2);
    unknown_a9908cc();
    int64_t v1; // 0x323bc4
    return v1 & 0xffffffff;
}

// Address range: 0x323bea - 0x323bed
int64_t function_323bea(int64_t a1) {
    // 0x323bea
    int64_t result; // 0x323bea
    return result;
}

// Address range: 0x323c1e - 0x323c34
int64_t function_323c1e(void) {
    // 0x323c1e
    unknown_ffffffffbe2d1d24();
    unknown_158de02f();
    return function_ffffffffe8cf8d36();
}

// Address range: 0x323c4a - 0x323c4f
int64_t function_323c4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x323c4a
    int64_t result; // 0x323c4a
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x323c8a - 0x323c9c
int64_t function_323c8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x323c8a
    int64_t v1; // 0x323c8a
    uint32_t v2 = *(int32_t *)(a3 + 0x348201d9 + v1); // 0x323c8a
    *(char *)a1 = (char)v1;
    bool v3; // 0x323c8a
    return 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | (v1 & 0xffffffff | 0x100000000 * a3) / (int64_t)v2 & 0xffff00ff | 512;
}

// Address range: 0x323ca7 - 0x323ca8
int64_t function_323ca7(void) {
    // 0x323ca7
    int64_t result; // 0x323ca7
    return result;
}
