/*
 * Targeted RetDec C for native executable gap queue batch 765.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2dc90e-0x2dcb0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dcb0e-0x2dcd0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dcd0e-0x2dcf0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30281e-0x302a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x302a1e-0x302c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x302c1e-0x302e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x302e1e-0x30301e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30301e-0x30321e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1a7aeaec();
int64_t function_24e14acc();
int64_t function_2dc90e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2dc99c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2dcac9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dcc13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2dcd67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2dce8b(void);
int64_t function_2dce8c(int64_t a1);
int64_t function_2dcecb(void);
int64_t function_2dcee5(void);
int64_t function_2dcee8(void);
int64_t function_30281e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30285a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3028d6(int64_t a1);
int64_t function_3028d8(void);
int64_t function_3028f0(int64_t a1);
int64_t function_3028f7(void);
int64_t function_30291e(void);
int64_t function_30298f(void);
int64_t function_302992(void);
int64_t function_3029da(int64_t a1);
int64_t function_302a25(void);
int64_t function_302a33(void);
int64_t function_302a3a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_302a6f(void);
int64_t function_302a74(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_302a7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_302aa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_302abe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_302ac6(int32_t a1, int64_t a2, int64_t a3);
int64_t function_302ad3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_302b76(void);
int64_t function_302ba0(void);
int64_t function_302baa(int64_t a1);
int64_t function_302baf(void);
int64_t function_302bb1(int64_t a1);
int64_t function_302c11(void);
int64_t function_302c92(void);
int64_t function_302c9a(int64_t a1);
int64_t function_302c9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_302ce1(void);
int64_t function_302d4f(void);
int64_t function_302d92(void);
int64_t function_302da7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_302e3b(void);
int64_t function_302e82(void);
int64_t function_302ec2(void);
int64_t function_302eed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_302f24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_303077(int64_t a1);
int64_t function_3030bd(void);
int64_t function_3030f3(void);
int64_t function_30310c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_303206(void);
int64_t function_3d321120();
int64_t function_42bb2351();
int64_t function_caf2a();
int64_t function_ffffffff84cc8870();
int64_t function_ffffffff8f3211d3();
int64_t function_ffffffffad759179();
int64_t unknown_104b47f6();
int64_t unknown_26f5345a();
int64_t unknown_2c30d2ca();
int64_t unknown_4979108();
int64_t unknown_5505a786();
int64_t unknown_5a9fcb51();
int64_t unknown_683ea1d1();
int64_t unknown_79e631b0();
int64_t unknown_ffffffff8ef7d83c();
int64_t unknown_ffffffff90848786();
int64_t unknown_ffffffff91864edc();
int64_t unknown_ffffffffadc7dee9();
int64_t unknown_ffffffffb3aca965();
int64_t unknown_ffffffffba35ae43();
int64_t unknown_ffffffffbcbc6a17();
int64_t unknown_ffffffffe8dc3047();

// Address range: 0x2dc90e - 0x2dc99c
int64_t function_2dc90e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2dc90e
    int64_t v1; // 0x2dc90e
    bool v2; // 0x2dc90e
    if (v2) {
        // 0x2dc934
        return function_caf2a(a1, a2, a3, a4, v1, v1, a5, 0x35cccf71);
    }
    // 0x2dc910
    return v1 ^ 36;
}

// Address range: 0x2dc99c - 0x2dcac9
int64_t function_2dc99c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2dc99c
    int64_t v1; // bp-32, 0x2dc99c
    int64_t v2 = (int64_t)&v1; // 0x2dca0f
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2dca18
    *v3 = 0x1db2a20c;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x2dca24
    int64_t * v5 = (int64_t *)(v2 + 24); // 0x2dca33
    int64_t v6 = *v5; // 0x2dca33
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x2dca33
    *v7 = v6;
    *v4 = v6;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x2dca3a
    *v8 = v6;
    int64_t v9 = v2 + 8; // 0x2dca46
    *v7 = 0x5f2c7804;
    *v4 = 0xb325b68;
    *v8 = v6;
    v1 = *v7;
    *v7 = a3;
    *v8 = v6;
    *v5 = *(int64_t *)v9;
    int64_t v10 = *v3; // 0x2dca97
    *v7 = v10;
    *v4 = v10;
    *v7 = v1;
    *v3 = v9;
    int64_t v11; // 0x2dc99c
    return function_caf2a(a1, a2, *v7, v11, v11, v11, 0x2d8a5b, 169);
}

// Address range: 0x2dcac9 - 0x2dcc13
int64_t function_2dcac9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dcac9
    int64_t v1; // bp-24, 0x2dcac9
    int64_t v2 = (int64_t)&v1; // 0x2dcaf3
    int64_t v3 = v2 - 8; // 0x2dcaff
    int64_t * v4 = (int64_t *)v3; // 0x2dcaff
    v1 = 0x2d8cdb;
    *v4 = v3;
    int64_t v5 = v2 - 16; // 0x2dcb23
    int64_t * v6 = (int64_t *)v5; // 0x2dcb2b
    *v6 = 0x4d6dae1;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x2dcb33
    *v7 = 0x22cd13ae;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x2dcb40
    int64_t v9 = *(int64_t *)(v2 + 16); // 0x2dcb46
    *v7 = v9;
    *v8 = v5;
    int64_t v10 = v2 - 40; // 0x2dcb70
    int64_t * v11 = (int64_t *)v10; // 0x2dcb70
    *v8 = 0x70f2ae5d;
    *v11 = v9;
    *v6 = *v8;
    *v11 = v10;
    *v8 = *v4;
    *(int64_t *)(v2 + 8) = *v7;
    *v7 = *v6;
    *v8 = a4;
    *v11 = v5;
    int64_t v12 = *v8; // 0x2dcbda
    *(int64_t *)(v2 - 48) = v12;
    *v7 = *v6;
    *v8 = a2;
    *v11 = a1;
    int64_t v13 = *v8; // 0x2dcc05
    *v8 = v5;
    int64_t v14; // 0x2dcac9
    bool v15; // 0x2dcac9
    return function_caf2a(a1, v13, a3, v12, a5, v14, 310, 0x4000 * (int64_t)v15 | 2048 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 128 * (int64_t)v15 | 64 * (int64_t)v15 | 16 * (int64_t)v15 | (int64_t)v15 | 4 * (int64_t)v15 | 2);
}

// Address range: 0x2dcc13 - 0x2dcd67
int64_t function_2dcc13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2dcc13
    int64_t v1; // bp-40, 0x2dcc13
    int64_t v2 = (int64_t)&v1; // 0x2dcd24
    *(int64_t *)(v2 - 8) = v2 + 8;
    int64_t v3; // 0x2dcc13
    bool v4; // 0x2dcc13
    int64_t result = function_caf2a(a1, a2, a3, a4, v3, v3, 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2, (int64_t)&g3); // 0x2dcd62
    return result;
}

// Address range: 0x2dcd67 - 0x2dce73
int64_t function_2dcd67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2dcd67
    int64_t v1; // bp-48, 0x2dcd67
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2dcd67
    return function_caf2a(a1, a2, a3, a4, a5, a6, v2, (int64_t)&g3);
}

// Address range: 0x2dce8b - 0x2dce8c
int64_t function_2dce8b(void) {
    // 0x2dce8b
    int64_t result; // 0x2dce8b
    return result;
}

// Address range: 0x2dce8c - 0x2dce8d
int64_t function_2dce8c(int64_t a1) {
    // 0x2dce8c
    int64_t result; // 0x2dce8c
    return result;
}

// Address range: 0x2dcecb - 0x2dcecc
int64_t function_2dcecb(void) {
    // 0x2dcecb
    int64_t result; // 0x2dcecb
    return result;
}

// Address range: 0x2dcee5 - 0x2dcee7
int64_t function_2dcee5(void) {
    // 0x2dcee5
    int64_t result; // 0x2dcee5
    return result;
}

// Address range: 0x2dcee8 - 0x2dceea
int64_t function_2dcee8(void) {
    // 0x2dcee8
    int64_t result; // 0x2dcee8
    return result;
}

// Address range: 0x30281e - 0x302826
int64_t function_30281e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30281e
    int64_t result; // 0x30281e
    *(int32_t *)(a2 & 0xffffffff) = (int32_t)result & -71;
    return result;
}

// Address range: 0x30285a - 0x30288b
int64_t function_30285a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30285a
    int64_t v1; // 0x30285a
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    int64_t v2 = unknown_ffffffff90848786(); // 0x302880
    return (int64_t)(*(int32_t *)(a1 - 0x109759b9) + (int32_t)v2);
}

// Address range: 0x3028d6 - 0x3028d7
int64_t function_3028d6(int64_t a1) {
    // 0x3028d6
    int64_t result; // 0x3028d6
    return result;
}

// Address range: 0x3028d8 - 0x3028dd
int64_t function_3028d8(void) {
    // 0x3028d8
    return function_ffffffff8f3211d3();
}

// Address range: 0x3028f0 - 0x3028f6
int64_t function_3028f0(int64_t a1) {
    // 0x3028f0
    return unknown_104b47f6(a1);
}

// Address range: 0x3028f7 - 0x3028fe
int64_t function_3028f7(void) {
    // 0x3028f7
    return function_3d321120();
}

// Address range: 0x30291e - 0x302921
int64_t function_30291e(void) {
    // 0x30291e
    int64_t result; // 0x30291e
    return result;
}

// Address range: 0x30298f - 0x302991
int64_t function_30298f(void) {
    // 0x30298f
    int64_t result; // 0x30298f
    return result;
}

// Address range: 0x302992 - 0x30299d
int64_t function_302992(void) {
    // 0x302992
    return function_42bb2351();
}

// Address range: 0x3029da - 0x3029dc
int64_t function_3029da(int64_t a1) {
    // 0x3029da
    int64_t v1; // 0x3029da
    *(char *)a1 = (char)v1;
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x302a25 - 0x302a26
int64_t function_302a25(void) {
    // 0x302a25
    int64_t result; // 0x302a25
    return result;
}

// Address range: 0x302a33 - 0x302a3a
int64_t function_302a33(void) {
    // 0x302a33
    bool v1; // 0x302a33
    if (true == !v1) {
        function_302a25();
    }
    // 0x302a35
    return function_24e14acc();
}

// Address range: 0x302a3a - 0x302a6b
int64_t function_302a3a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x302a3a
    int64_t v1; // 0x302a3a
    char v2 = v1 / 256; // 0x302a3a
    *(char *)-0x33e843bf = *(char *)-0x33e843bf + v2;
    char v3 = *(char *)(v1 + 4); // 0x302a46
    char * v4 = (char *)((256 * (int64_t)(v3 + (char)(a3 / 256)) | a3 & -0xff01) - 44); // 0x302a4c
    *v4 = *v4 & (char)a4;
    int64_t v5 = 2 * v1; // 0x302a4f
    int64_t result = v5 & 0xffffffff; // 0x302a4f
    int32_t * v6 = (int32_t *)(result + a1); // 0x302a51
    *v6 = *v6 + (int32_t)a1;
    int32_t * v7 = (int32_t *)result; // 0x302a5d
    *v7 = *v7 ^ (int32_t)v5;
    char * v8 = (char *)result; // 0x302a63
    *v8 = *v8 + v2;
    return result;
}

// Address range: 0x302a6f - 0x302a71
int64_t function_302a6f(void) {
    // 0x302a6f
    int64_t result; // 0x302a6f
    return result;
}

// Address range: 0x302a74 - 0x302a7e
int64_t function_302a74(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x302a74
    int64_t result; // 0x302a74
    int32_t v1 = result;
    *(int32_t *)result = 2 * v1 | (int32_t)(v1 < 0);
    int64_t * v2 = (int64_t *)((a3 / 256 + a3) % 256 | a3 & -256); // 0x302a78
    *v2 = *v2 | result;
    return result;
}

// Address range: 0x302a7e - 0x302aa1
int64_t function_302a7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x302a7e
    int64_t v2; // 0x302a7e
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)(2 * v2);
        uint32_t v4 = *v3; // 0x302a7e
        *v3 = v4 >> v1 | v4 << 32 - v1;
    }
    uint32_t v5 = (int32_t)v2;
    uint32_t v6 = (int32_t)(v5 < 0xf6af8201) + v5; // 0x302a89
    bool v7 = v5 < 0xf6af8201 ? v6 != -1 | (int32_t)(v5 < 0xf6af8201) + v5 - v6 > v5 : v6 > v5; // 0x302a89
    int64_t v8 = unknown_2c30d2ca(); // 0x302a8b
    int32_t v9 = *(int32_t *)v8; // 0x302a91
    return 0x10000 * ((int32_t)v8 + (int32_t)v7 + v9) >> 16;
}

// Address range: 0x302aa1 - 0x302abe
int64_t function_302aa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x302aa1
    __asm_rep_movsd_memcpy((char *)a1, (char *)a2, a4);
    abort();
    // UNREACHABLE
}

// Address range: 0x302abe - 0x302ac6
int64_t function_302abe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x302abe
    int64_t v1; // 0x302abe
    int32_t * v2 = (int32_t *)(v1 + 69); // 0x302ac3
    *v2 = *v2 + (int32_t)a4;
    return v1 + 0xe8d48d48 & 0xffffffff;
}

// Address range: 0x302ac6 - 0x302ad0
int64_t function_302ac6(int32_t a1, int64_t a2, int64_t a3) {
    // 0x302ac6
    int64_t v1; // 0x302ac6
    __asm_outsb((int16_t)a3, (char)v1);
    *(char *)(int64_t)a1 = (char)v1;
    __asm_out(79, (int32_t)a3);
    return unknown_683ea1d1();
}

// Address range: 0x302ad3 - 0x302b08
int64_t function_302ad3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x302ad3
    int64_t v1; // 0x302ad3
    *(char *)a2 = (char)v1 + 122;
    unknown_ffffffff91864edc();
    int64_t v2 = unknown_ffffffffadc7dee9(); // 0x302ae3
    *(char *)-0x16f7c729 = *(char *)-0x16f7c729 | (char)v2;
    int32_t * v3 = (int32_t *)(a4 - 59); // 0x302aef
    *v3 = *v3 + (int32_t)a1;
    bool v4; // 0x302ad3
    int64_t v5 = v4 ? -4 : 4; // 0x302b01
    return unknown_4979108(v5 + a1, v5 + (a2 - (a3 & 236 | 0x1e86e13) & 0xffffffff));
}

// Address range: 0x302b76 - 0x302b80
int64_t function_302b76(void) {
    // 0x302b76
    return function_ffffffffad759179();
}

// Address range: 0x302ba0 - 0x302ba2
int64_t function_302ba0(void) {
    // 0x302ba0
    int64_t result; // 0x302ba0
    return result;
}

// Address range: 0x302baa - 0x302bab
int64_t function_302baa(int64_t a1) {
    // 0x302baa
    int64_t result; // 0x302baa
    return result;
}

// Address range: 0x302baf - 0x302bb0
int64_t function_302baf(void) {
    // 0x302baf
    int64_t result; // 0x302baf
    return result;
}

// Address range: 0x302bb1 - 0x302bb2
int64_t function_302bb1(int64_t a1) {
    // 0x302bb1
    int64_t result; // 0x302bb1
    return result;
}

// Address range: 0x302c11 - 0x302c18
int64_t function_302c11(void) {
    // 0x302c11
    unknown_ffffffffbcbc6a17();
    return function_302baf();
}

// Address range: 0x302c92 - 0x302c93
int64_t function_302c92(void) {
    // 0x302c92
    int64_t result; // 0x302c92
    return result;
}

// Address range: 0x302c9a - 0x302c9b
int64_t function_302c9a(int64_t a1) {
    // 0x302c9a
    int64_t result; // 0x302c9a
    return result;
}

// Address range: 0x302c9b - 0x302ccf
int64_t function_302c9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x302c9b
    *(int32_t *)a3 = (int32_t)(a3 & a1);
    int64_t v1 = *(int64_t *)-0x78299b85; // 0x302c9d
    *(int64_t *)-0x78299b85 = v1 - 0x13d00f3;
    __asm_hlt();
    int64_t v2 = __asm_int3((v1 < 0x13d00f4 ? 0x3a08cef5 : (int32_t)a5) + (int32_t)a2); // 0x302cb8
    int64_t v3; // 0x302c9b
    int32_t v4 = *(int32_t *)&v3; // 0x302cbf
    int64_t v5; // 0x302c9b
    *(int32_t *)v2 = v4 + (*(int32_t *)(v2 + 0x3d006091) | (int32_t)v5);
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x302ce1 - 0x302ce5
int64_t function_302ce1(void) {
    // 0x302ce1
    return function_302c92();
}

// Address range: 0x302d4f - 0x302d50
int64_t function_302d4f(void) {
    // 0x302d4f
    int64_t result; // 0x302d4f
    return result;
}

// Address range: 0x302d92 - 0x302d97
int64_t function_302d92(void) {
    // 0x302d92
    return function_ffffffff84cc8870();
}

// Address range: 0x302da7 - 0x302dad
int64_t function_302da7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x302da7
    *(int32_t *)a4 = 0;
    int64_t v1; // 0x302da7
    *(int32_t *)a2 = *(int32_t *)&v1 ^ (int32_t)a4;
    return function_302d4f();
}

// Address range: 0x302e3b - 0x302e45
int64_t function_302e3b(void) {
    // 0x302e3b
    return unknown_ffffffffba35ae43();
}

// Address range: 0x302e82 - 0x302e83
int64_t function_302e82(void) {
    // 0x302e82
    int64_t result; // 0x302e82
    return result;
}

// Address range: 0x302ec2 - 0x302ec7
int64_t function_302ec2(void) {
    // 0x302ec2
    return function_302e82();
}

// Address range: 0x302eed - 0x302f0c
int64_t function_302eed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_iretd(); // 0x302efd
    char v1 = *(char *)-0x2b1279fb; // 0x302efe
    int64_t v2; // 0x302eed
    *(char *)-0x2b1279fb = v1 + (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x302f24 - 0x30302c
int64_t function_302f24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a4 - 1; // 0x302f2a
    if (v1 == 0) {
        // 0x302f2c
        int64_t v2; // 0x302f24
        return v2 & 0xffffffff;
    }
    // 0x302f4b
    unknown_5a9fcb51();
    int64_t v3 = __asm_iretd(); // 0x302f52
    // 0x302f55
    return v3 & -24;
    int64_t v4 = a3 & -0xff01 | (int64_t)&g1; // 0x302f50
    int64_t v5 = unknown_79e631b0(); // 0x302fc3
    char * v6 = (char *)v5; // 0x302fc8
    *v6 = (*v6 ^ (char)v5) - 32;
    int32_t * v7 = (int32_t *)v4; // 0x302fcd
    *v7 = *v7 + (int32_t)v5;
    int64_t result = (v5 + v1 / 256) % 256 | v5 & -256; // 0x302fcf
    int32_t * v8 = (int32_t *)(v4 + 1); // 0x302fd1
    int32_t v9; // bp+6047, 0x302f24
    *v8 = *v8 + (int32_t)(int64_t)&v9;
    int32_t * v10 = (int32_t *)(result + 61); // 0x302fd5
    *v10 = *v10 + v9;
    return result;
}

// Address range: 0x303077 - 0x30307a
int64_t function_303077(int64_t a1) {
    // 0x303077
    int64_t result; // 0x303077
    return result;
}

// Address range: 0x3030bd - 0x3030be
int64_t function_3030bd(void) {
    // 0x3030bd
    int64_t result; // 0x3030bd
    return result;
}

// Address range: 0x3030f3 - 0x3030f4
int64_t function_3030f3(void) {
    // 0x3030f3
    int64_t result; // 0x3030f3
    return result;
}

// Address range: 0x30310c - 0x303190
int64_t function_30310c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30310c
    bool v1; // 0x30310c
    int64_t v2 = v1 ? -1 : 1; // 0x30310e
    int64_t v3 = v2 + a1; // 0x30310e
    int64_t v4; // 0x30310c
    *(char *)a3 = (char)(v4 / 256);
    int64_t v5 = v4 & -0x10000 | 256 * a3 & 0xff00; // 0x30310f
    char * v6 = (char *)v3; // 0x303111
    *v6 = *v6 | (char)a4;
    *(char *)0x2fd7919eff013d00 = (char)v4;
    int32_t * v7 = (int32_t *)(v5 - 0x6fffec10); // 0x30311c
    *v7 = *v7 / 8;
    function_3030bd();
    unknown_ffffffff8ef7d83c();
    int64_t v8 = unknown_ffffffffe8dc3047(); // 0x303141
    int32_t * v9 = (int32_t *)(v3 + 109); // 0x303146
    *v9 = *v9 + (int32_t)v5;
    unknown_26f5345a();
    if ((int32_t)v8 < -0x41a8a7ff) {
        function_3030f3();
    }
    // 0x30315d
    __asm_iretd();
    uint64_t v10 = unknown_ffffffffb3aca965(); // 0x30315f
    __asm_out(-97, (int32_t)v10);
    int32_t * v11 = (int32_t *)(a3 - 0x3a76a02); // 0x30316b
    *v11 = *v11 + (int32_t)v4;
    *(int32_t *)-0x5174e30d = *(int32_t *)-0x5174e30d + (int32_t)(v2 + a2);
    __asm_out(-30, (int32_t)((v10 / 256 + a6) % 256 | a6 & 0xffffff00));
    unknown_5505a786();
    int64_t result = __asm_wait(); // 0x303185
    *(char *)-0x27cde627 = *(char *)-0x27cde627 + 119;
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x303206 - 0x30320d
int64_t function_303206(void) {
    // 0x303206
    return function_1a7aeaec();
}
