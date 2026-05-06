/*
 * Targeted RetDec C for native executable gap queue batch 665.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x243218-0x243418 rank=- name=- kind=- bytes=- uncovered=-
 *   0x243418-0x243618 rank=- name=- kind=- bytes=- uncovered=-
 *   0x243618-0x243818 rank=- name=- kind=- bytes=- uncovered=-
 *   0x243818-0x243a18 rank=- name=- kind=- bytes=- uncovered=-
 *   0x277641-0x277741 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2777c1-0x277841 rank=- name=- kind=- bytes=- uncovered=-
 *   0x277a41-0x277c41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x277c41-0x277e41 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2105bda();
int64_t function_243218(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2432ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2433f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_243530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_243672(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2437e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2439c9(void);
int64_t function_2439ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2439eb(void);
int64_t function_277641(void);
int64_t function_277668(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_277679(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2776e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2777c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_277a28();
int64_t function_277a41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_277a7f(void);
int64_t function_277ab5(int64_t a1);
int64_t function_277ac6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_277ba0(int64_t a1);
int64_t function_277bfb(void);
int64_t function_277c0c(void);
int64_t function_277c12(void);
int64_t function_277c1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_277c29(int64_t a1);
int64_t function_277c2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_277c5c(void);
int64_t function_277c5e(void);
int64_t function_277d13(int64_t a1);
int64_t function_277d50(int64_t a1);
int64_t function_277d5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_277dbd(int64_t a1);
int64_t function_277dd6(int64_t a1);
int64_t function_277e04(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37296468();
int64_t function_cf3c7();
int64_t function_ffffffffd0a07d34();
int64_t unknown_10b1652b();
int64_t unknown_57d6e277();
int64_t unknown_6e66e226();

// Address range: 0x243218 - 0x2432ec
int64_t function_243218(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x243218
    int64_t v1; // bp+16, 0x243218
    return function_cf3c7(a1 + 8 & 0xffffffff, a2, a3, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0x2432ec - 0x2433f5
int64_t function_2432ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2432ec
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x7f64f0ff);
}

// Address range: 0x2433f5 - 0x243530
int64_t function_2433f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5; // bp-40, 0x24347d
    int64_t v2 = (int64_t)&v1; // 0x24348a
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2434b2
    v1 = 0x2650f200;
    *v3 = 0x1c7350a3;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x2434cf
    *v4 = a5;
    *(int64_t *)(v2 + 16) = v1;
    v1 = 0x70cfce8e;
    *v4 = *(int64_t *)(v2 + 24);
    *(int64_t *)(v2 + 32) = v1;
    int64_t v5 = v2 + 8; // 0x2434e9
    int64_t * v6 = (int64_t *)v5; // 0x2434ed
    v1 = *v6;
    *v3 = v5;
    v1 = *v6;
    *v3 = v5;
    int64_t v7; // 0x2433f5
    return function_cf3c7(a1, a2, a3, v7, v7, v7, v7);
}

// Address range: 0x243530 - 0x243672
int64_t function_243530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x243530
    int64_t v1; // bp-24, 0x243530
    int64_t v2 = (int64_t)&v1; // 0x2435f8
    v1 = v2;
    int64_t v3; // 0x243530
    return function_cf3c7(a1, a2, a3, a4, a5, v3, v2);
}

// Address range: 0x243672 - 0x2437e6
int64_t function_243672(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x243672
    int64_t v1; // bp-56, 0x243672
    v1 = (int64_t)&v1;
    int64_t v2; // 0x243672
    return function_cf3c7(a1, a2, a3, a4, a5, v2, 0x236d62);
}

// Address range: 0x2437e6 - 0x24391f
int64_t function_2437e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x5a4a1357; // bp-48, 0x243852
    int64_t v2 = (int64_t)&v1; // 0x2438a2
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2438aa
    *v3 = 0x5fe25109;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x2438b7
    *v4 = 310;
    int64_t v5 = v2 + 8; // 0x2438ba
    *(int64_t *)v5 = *v3;
    *v3 = v5;
    *v3 = v1;
    *v4 = v1;
    int64_t v6; // 0x2437e6
    return function_cf3c7(a1, a2, a3, a4, v6, v6, v1);
}

// Address range: 0x2439c9 - 0x2439ca
int64_t function_2439c9(void) {
    // 0x2439c9
    int64_t result; // 0x2439c9
    return result;
}

// Address range: 0x2439ca - 0x2439ce
int64_t function_2439ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x2439ca
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x2439ca
    return result;
}

// Address range: 0x2439eb - 0x2439ec
int64_t function_2439eb(void) {
    // 0x2439eb
    int64_t result; // 0x2439eb
    return result;
}

// Address range: 0x277641 - 0x277642
int64_t function_277641(void) {
    // 0x277641
    int64_t result; // 0x277641
    return result;
}

// Address range: 0x277668 - 0x277679
int64_t function_277668(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x277668
    int64_t v1; // 0x277668
    *(int32_t *)a4 = 2 * (int32_t)v1;
    int64_t v2; // 0x277668
    *(int32_t *)a1 = (int32_t)v2;
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    char * v4 = (char *)(v1 + 0x3d000000); // 0x27766d
    *v4 = *v4 + (char)a3;
    int64_t v5; // 0x277668
    *(int32_t *)a3 = *(int32_t *)&v5 + (int32_t)v1;
    bool v6; // 0x277668
    return __asm_sti((v6 ? -4 : 4) + a1);
}

// Address range: 0x277679 - 0x2776a4
int64_t function_277679(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x277679
    int64_t v1; // 0x277679
    float80_t v2; // 0x277679
    *(int16_t *)(v1 - 4) = (int16_t)v2;
    __asm_in((int16_t)a3);
    uint16_t v3 = *(int16_t *)(a3 - 0x2203c788); // 0x27767e
    int64_t v4 = v3; // 0x27767e
    char v5 = v3; // 0x277685
    *(char *)a4 = v5;
    bool v6; // 0x277679
    unsigned char v7 = v5 + (char)v6 + *(char *)v4; // 0x277687
    int64_t result = v4 & 0xff00 | (int64_t)v7; // 0x277687
    *(int32_t *)a1 = (int32_t)result;
    char * v8 = (char *)result; // 0x277690
    *v8 = *v8 + v7;
    char * v9 = (char *)(a4 - 0x58000000); // 0x277692
    *v9 = *v9 + (char)(v1 / 256);
    char * v10 = (char *)(v1 - 0x212f2200); // 0x277698
    *v10 = *v10 + (char)(a3 / 256);
    return result;
}

// Address range: 0x2776e6 - 0x27773c
int64_t function_2776e6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t result; // 0x2776e6
    bool v2; // 0x2776e6
    if (v2 || v2) {
        // 0x27773b
        return result;
    }
    char * v3 = (char *)(result + 45); // 0x2776e8
    char v4 = a3; // 0x2776e8
    *v3 = *v3 + v4;
    unsigned char v5 = *(char *)0x7824a5f5; // 0x2776ee
    int64_t v6; // 0x2776e6
    unsigned char v7 = (char)(v6 / 256); // 0x2776ee
    char v8 = v5 + v7; // 0x2776ee
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x2776ee
    *(char *)0x7824a5f5 = v8;
    int64_t v10 = result & -0xff01 | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v8 < v5) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0)) | 512;
    int64_t v11 = v10 ^ 234; // 0x2776f4
    *(int32_t *)a1 = (int32_t)v11;
    char * v12 = (char *)v11; // 0x2776f6
    char v13 = v11; // 0x2776f6
    *v12 = *v12 + v13;
    *(char *)v6 = *(char *)&v6 + v4;
    *v12 = *v12 + v13;
    unsigned char v14 = *(char *)&v1; // 0x2776fd
    char * v15 = (char *)(v6 - 81); // 0x2776fe
    *v15 = *v15 + v14;
    return v10 & -256 | (int64_t)v14;
}

// Address range: 0x2777c1 - 0x277840
int64_t function_2777c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2777c1
    char * v3 = (char *)(v2 + 0xc52955); // 0x2777d0
    int64_t result = 0; // 0x2777c3
    int64_t v4 = a1;
    *(char *)v1 = (char)false - (char)result + *(char *)&v1;
    uint64_t v5 = result + 0x4c07fc60; // 0x2777cb
    int64_t result2 = v5 & 0xffffffff; // 0x2777cb
    unsigned char v6 = *v3; // 0x2777d0
    unsigned char v7 = v6 + (char)(v5 / 256); // 0x2777d0
    *v3 = v7;
    int64_t v8; // 0x2777c1
    int64_t v9 = v8 - 16; // 0x2777d6
    *(int64_t *)v9 = v1;
    while (v7 < 0) {
        unsigned char v10 = (char)v4; // 0x277817
        unsigned char v11 = v10 + 118 + (char)(v7 < v6); // 0x277817
        result = v4 & 0xffffff00 | (int64_t)v11;
        if (v11 >= 0) {
            // 0x27781b
            return result;
        }
        bool v12 = v7 < v6 ? v11 <= v10 : v10 > 137; // 0x277817
        int3_t v13; // 0x2777c1
        int3_t v14 = v13 - 1; // 0x27781c
        __frontend_reg_store_fpr(v14, *(float80_t *)(a3 + 0x18106a4a & 0xffffffff));
        v13 = v14;
        v4 = result2;
        *(char *)v1 = (char)v12 - (char)result + *(char *)&v1;
        v5 = result + 0x4c07fc60;
        result2 = v5 & 0xffffffff;
        v6 = *v3;
        v7 = v6 + (char)(v5 / 256);
        *v3 = v7;
        v9 -= 16;
        *(int64_t *)v9 = v1;
    }
    int32_t * v15 = (int32_t *)(result2 + 46); // 0x2777d9
    *v15 = *v15 + (int32_t)a4;
    return result2;
}

// Address range: 0x277a41 - 0x277a7c
int64_t function_277a41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x277a41
    bool v1; // 0x277a41
    int64_t v2 = v1 ? -1 : 1; // 0x277a41
    int64_t v3 = v2 + a1; // 0x277a41
    int64_t v4 = v2 + a2; // 0x277a41
    if (a4 == 0) {
        // 0x277a71
        return unknown_57d6e277(v3, v4);
    }
    int64_t result; // 0x277a41
    if ((char)result < (char)result) {
        // 0x277a70
        return result;
    }
    // 0x277a49
    *(int32_t *)a4 = (int32_t)a4 - 0x13dce33;
    char * v5 = (char *)(0x99bc3212 - (result & 0xffffffff) + v4); // 0x277a56
    *v5 = (char)a3;
    int64_t v6 = 0x10000 * (int32_t)v3 >> 16; // 0x277a62
    if (*(char *)((a3 & -256 | (int64_t)*v5) - 63) + (char)a4 < 1) {
        v6 = function_277a28();
    }
    int64_t v7 = v6;
    char v8 = *(char *)0x13dce08; // 0x277a6a
    return v7 & -256 | (int64_t)(v8 ^ (char)v7);
}

// Address range: 0x277a7f - 0x277a80
int64_t function_277a7f(void) {
    // 0x277a7f
    int64_t result; // 0x277a7f
    return result;
}

// Address range: 0x277ab5 - 0x277ac4
int64_t function_277ab5(int64_t a1) {
    // 0x277ab5
    int64_t result; // 0x277ab5
    return result;
}

// Address range: 0x277ac6 - 0x277b38
int64_t function_277ac6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x277ac6
    int64_t v1; // 0x277ac6
    *(char *)(a2 + 0x6b807cf) = (char)v1;
    int64_t v2 = __asm_iretd(); // 0x277acc
    __asm_in_134((int16_t)v2);
    bool v3; // 0x277ac6
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x277acf
    int64_t v5 = a4 & -256; // 0x277ad5
    int32_t * v6 = (int32_t *)(v4 + 0xc31198); // 0x277ad7
    uint32_t v7 = *v6; // 0x277ad7
    *v6 = v7 / 2 | 0x80000000 * v7;
    int32_t * v8 = (int32_t *)v5; // 0x277ae3
    int32_t v9 = a5; // 0x277ae3
    *v8 = *v8 - v9;
    *(char *)0xad00213 = *(char *)0xad00213 & (char)a5;
    __asm_out(-72, v9);
    int64_t v10 = __asm_iretd(); // 0x277aef
    int64_t v11 = v5 - 1; // 0x277af0
    if (v9 != -0x63589668) {
        // 0x277af2
        *(char *)-0x44d07e07 = *(char *)-0x44d07e07 + (char)(v1 / 256);
        int32_t * v12 = (int32_t *)(v1 - 113); // 0x277af8
        *v12 = *v12 & (int32_t)v11;
        return function_277a7f();
    }
    unsigned char v13 = *(char *)v10; // 0x277b19
    int32_t * v14 = (int32_t *)v10; // 0x277b1d
    *v14 = *v14 + (int32_t)v10;
    uint64_t v15 = unknown_10b1652b(); // 0x277b25
    char * v16 = (char *)(v4 + 0x2d75c15b); // 0x277b2a
    *v16 = *v16 | (char)(v15 / 256);
    char * v17 = (char *)(v15 - 0x4a7efe18); // 0x277b30
    char v18 = *v17; // 0x277b30
    unsigned char v19 = (char)((v11 - 256 * (v10 + (int64_t)(v13 > (char)v2))) / 256); // 0x277b30
    *v17 = v18 + v19;
    return (v15 + 158 + (int64_t)(-1 - v18 < v19)) % 256 | v15 & -256;
}

// Address range: 0x277ba0 - 0x277ba1
int64_t function_277ba0(int64_t a1) {
    // 0x277ba0
    int64_t result; // 0x277ba0
    return result;
}

// Address range: 0x277bfb - 0x277c02
int64_t function_277bfb(void) {
    // 0x277bfb
    return function_2105bda();
}

// Address range: 0x277c0c - 0x277c11
int64_t function_277c0c(void) {
    // 0x277c0c
    return function_ffffffffd0a07d34();
}

// Address range: 0x277c12 - 0x277c1c
int64_t function_277c12(void) {
    // 0x277c12
    int64_t v1; // 0x277c12
    int64_t v2 = 2 * v1; // 0x277c12
    char v3 = *(char *)((v2 & 0xffffffff) - 0x7d54f401); // 0x277c14
    return v2 & 0xffffff00 | (int64_t)(v3 | (char)v2);
}

// Address range: 0x277c1c - 0x277c25
int64_t function_277c1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x277c1c
    if (a4 == 0) {
        // 0x277c28
        int64_t result; // 0x277c1c
        return result;
    }
    // 0x277c1e
    return unknown_6e66e226(a1, a2, a3, a4, a5);
}

// Address range: 0x277c29 - 0x277c2a
int64_t function_277c29(int64_t a1) {
    // 0x277c29
    int64_t result; // 0x277c29
    return result;
}

// Address range: 0x277c2c - 0x277c41
int64_t function_277c2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x277c2c
    int64_t v1; // 0x277c2c
    uint64_t v2 = 256 * v1 + a4;
    int64_t v3 = v2 & 0xff00 | a4 & -0xff01; // 0x277c2e
    int32_t * v4 = (int32_t *)(v3 + 0x3277380e); // 0x277c30
    uint32_t v5 = *v4; // 0x277c30
    uint32_t v6 = v5 + (int32_t)v3; // 0x277c30
    *v4 = v6;
    char * v7 = (char *)(a1 - 39); // 0x277c37
    *v7 = *v7 - (char)(v2 / 256) + (char)(v6 >= v5);
    return function_37296468();
}

// Address range: 0x277c5c - 0x277c5d
int64_t function_277c5c(void) {
    // 0x277c5c
    int64_t result; // 0x277c5c
    return result;
}

// Address range: 0x277c5e - 0x277c60
int64_t function_277c5e(void) {
    // 0x277c5e
    return function_277c5c();
}

// Address range: 0x277d13 - 0x277d14
int64_t function_277d13(int64_t a1) {
    // 0x277d13
    int64_t result; // 0x277d13
    return result;
}

// Address range: 0x277d50 - 0x277d53
int64_t function_277d50(int64_t a1) {
    // 0x277d50
    int64_t result; // 0x277d50
    return result;
}

// Address range: 0x277d5a - 0x277d60
int64_t function_277d5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4;
    unsigned char v2 = v1 % 32; // 0x277d5a
    if (v2 != 0) {
        *(char *)a4 = v1 >> v2;
    }
    int64_t result; // 0x277d5a
    return result;
}

// Address range: 0x277dbd - 0x277dc4
int64_t function_277dbd(int64_t a1) {
    // 0x277dbd
    int64_t result; // 0x277dbd
    return result;
}

// Address range: 0x277dd6 - 0x277dd8
int64_t function_277dd6(int64_t a1) {
    // 0x277dd6
    int64_t result; // 0x277dd6
    return result;
}

// Address range: 0x277e04 - 0x277e12
int64_t function_277e04(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x277e04
    int64_t result; // 0x277e04
    *(char *)a4 = (char)result + (char)(a4 / 256);
    return result;
}
