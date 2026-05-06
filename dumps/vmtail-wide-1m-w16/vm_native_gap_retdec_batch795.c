/*
 * Targeted RetDec C for native executable gap queue batch 795.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1dc25a-0x1dc45a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dc45a-0x1dc65a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dc65a-0x1dc85a rank=- name=- kind=- bytes=- uncovered=-
 *   0x431093-0x431293 rank=- name=- kind=- bytes=- uncovered=-
 *   0x431293-0x431493 rank=- name=- kind=- bytes=- uncovered=-
 *   0x431493-0x431593 rank=- name=- kind=- bytes=- uncovered=-
 *   0x431693-0x431893 rank=- name=- kind=- bytes=- uncovered=-
 *   0x431893-0x431a93 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10e47325();
int64_t function_15ac730();
int64_t function_1dc25a(void);
int64_t function_1dc260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dc2cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dc2df(int64_t a1);
int64_t function_1dc2e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1dc2ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dc2f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dc41e(void);
int64_t function_1dc454(void);
int64_t function_1dc459(void);
int64_t function_1dc47c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dc48a(int64_t a1, int64_t a2);
int64_t function_1dc492(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dc4a9(int64_t a1, int64_t a2);
int64_t function_1dc527(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1dc55f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dc574(int64_t a1, int32_t a2, int32_t a3, int64_t a4);
int64_t function_1dc598(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int64_t a6);
int64_t function_1dc5e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dc63e(int64_t a1, int64_t a2);
int64_t function_1dc648(void);
int64_t function_1dc64d(void);
int64_t function_1dc654(void);
int64_t function_1dc674(void);
int64_t function_1dc692(void);
int64_t function_1dc6b3(int64_t a1, int64_t a2);
int64_t function_1dc6c8(int64_t a1, int64_t a2);
int64_t function_1dc6f5(int64_t a1);
int64_t function_1dc72f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dc739(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f519();
int64_t function_3194af36();
int64_t function_431093(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43113e(void);
int64_t function_431140(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_4311d0(void);
int64_t function_4311f5(void);
int64_t function_431209(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43133e(void);
int64_t function_4313a0(int64_t a1);
int64_t function_4313a9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4313bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4313ef(void);
int64_t function_43142a(int16_t a1);
int64_t function_431455(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_431465(void);
int64_t function_431496(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4314cc(void);
int64_t function_4314d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_43156e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43158d(void);
int64_t function_431693(void);
int64_t function_4316b4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_431733(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43176f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43177d(void);
int64_t function_431783(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4317b2(void);
int64_t function_4317bd(void);
int64_t function_4317f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_431803(void);
int64_t function_431830(void);
int64_t function_43183d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4318da(void);
int64_t function_4318e6(int64_t a1);
int64_t function_4318ec(int64_t a1);
int64_t function_431912(void);
int64_t function_431916(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_431942(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4319aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffaef229ea();
int64_t function_ffffffffb0d4184b();
int64_t function_ffffffffb113904e();
int64_t function_ffffffffda79b169();
int64_t unknown_475fba13();
int64_t unknown_ffffffff89bf1ae6();
int64_t unknown_ffffffffac1145d7();
int64_t unknown_ffffffffe8f25e87();
int64_t unknown_ffffffffefd18931();

// Address range: 0x1dc25a - 0x1dc25b
int64_t function_1dc25a(void) {
    // 0x1dc25a
    int64_t result; // 0x1dc25a
    return result;
}

// Address range: 0x1dc260 - 0x1dc28b
int64_t function_1dc260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1dc260
    int64_t v1; // 0x1dc260
    uint32_t v2 = (int32_t)v1 + 0x759ffe18; // 0x1dc260
    char v3 = v2; // 0x1dc260
    int64_t result = v2; // 0x1dc260
    if (llvm_ctpop_i8(v3) % 2 == 0) {
        // 0x1dc2de
        return result;
    }
    int32_t * v4 = (int32_t *)(result - 0x2f7c24f3); // 0x1dc26e
    *v4 = *v4 + (int32_t)a1;
    *(char *)a1 = v3 - 102;
    bool v5; // 0x1dc260
    return unknown_ffffffffe8f25e87((v5 ? -1 : 1) + a1);
}

// Address range: 0x1dc2cb - 0x1dc2de
int64_t function_1dc2cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1dc2cb
    unknown_ffffffffac1145d7();
    int64_t v1; // 0x1dc2cb
    return v1 & 0xffffffff;
}

// Address range: 0x1dc2df - 0x1dc2e0
int64_t function_1dc2df(int64_t a1) {
    // 0x1dc2df
    int64_t result; // 0x1dc2df
    return result;
}

// Address range: 0x1dc2e0 - 0x1dc2ed
int64_t function_1dc2e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a3 + 58 + unknown_ffffffff89bf1ae6(a1, a2, a3, a4)); // 0x1dc2e5
    *v1 = *v1 + (char)(a4 / 256);
    int64_t v2; // 0x1dc2e0
    return function_1dc2f0(a1, a2, a3 & -256 | 58, a4, v2);
}

// Address range: 0x1dc2ee - 0x1dc2f0
int64_t function_1dc2ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dc2ee
    int64_t result; // 0x1dc2ee
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x1dc2f0 - 0x1dc370
int64_t function_1dc2f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x1dc2f0
    int64_t v4 = v3 & 0x7c26d8a ^ 8; // 0x1dc2f5
    int32_t * v5 = (int32_t *)(a3 - 0x556fe18); // 0x1dc2fa
    *v5 = *v5 - (int32_t)a4;
    unsigned char v6 = *(char *)&v2; // 0x1dc306
    bool v7; // 0x1dc2f0
    int64_t v8 = v2 + (v7 ? -1 : 1); // 0x1dc306
    v2 = v8;
    if (a4 != 0) {
        // 0x1dc309
        __readfsbyte(a2);
        int32_t * v9 = (int32_t *)(v1 - 128); // 0x1dc312
        int32_t v10 = unknown_475fba13(); // 0x1dc312
        *v9 = *v9 + v10;
        unsigned char v11 = *(char *)(v3 - 24) ^ (char)a4; // 0x1dc31a
        int32_t * v12 = (int32_t *)((a4 & -256 | (int64_t)v11) + 0x7ffb6b5); // 0x1dc31d
        *v12 = *v12 + v10;
        unsigned char v13 = v11 % 32; // 0x1dc323
        int64_t v14; // 0x1dc2f0
        if (v13 != 0) {
            unsigned char v15 = (char)v3; // 0x1dc323
            v14 = v3 & -256 | (int64_t)(v15 << 8 - v13 | v15 >> v13);
        }
        char * v16 = (char *)v14; // 0x1dc325
        *v16 = *v16 + (char)(v1 / 256);
        return unknown_ffffffffefd18931();
    }
    unsigned char v17 = *(char *)(v4 - 0xadffebc) | (char)v4; // 0x1dc300
    if (v17 == v6) {
        int64_t result = v3 & 0x7c26d00 | (int64_t)v17; // 0x1dc300
        int32_t * v18 = (int32_t *)(result + 10); // 0x1dc34a
        uint32_t v19 = *v18; // 0x1dc34a
        uint32_t v20 = v19 + (int32_t)v3; // 0x1dc34a
        *v18 = v20;
        int32_t * v21 = (int32_t *)(v3 + 0x3019dfa); // 0x1dc34d
        *v21 = *v21 - (int32_t)result + (int32_t)(v20 < v19);
        *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)v3;
        return result;
    }
    char * v22 = (char *)(v3 + 45); // 0x1dc35e
    int64_t v23 = v3 - 8; // 0x1dc35d
    int64_t * v24 = (int64_t *)v23;
    *v24 = v8;
    unsigned char v25 = *v22; // 0x1dc35e
    *v22 = v25 / 4 | 64 * (char)(v17 < v6) | 128 * v25;
    int64_t v26 = v23; // 0x1dc367
    int64_t * v27 = v24; // 0x1dc367
    if ((v25 & 2) != 0) {
        v26 -= 8;
        int64_t * v28 = (int64_t *)v26;
        *v28 = v2;
        unsigned char v29 = *v22; // 0x1dc35e
        *v22 = v29 / 4 | 128 * v29 | 64;
        v27 = v28;
        while ((v29 & 2) != 0) {
            // 0x1dc35a
            v26 -= 8;
            v28 = (int64_t *)v26;
            *v28 = v2;
            v29 = *v22;
            *v22 = v29 / 4 | 128 * v29 | 64;
            v27 = v28;
        }
    }
    int32_t * v30 = (int32_t *)(a2 + 0x154d6b31); // 0x1dc36a
    *v30 = *v30 + (int32_t)v2;
    return *v27;
}

// Address range: 0x1dc41e - 0x1dc423
int64_t function_1dc41e(void) {
    // 0x1dc41e
    return function_ffffffffb113904e();
}

// Address range: 0x1dc454 - 0x1dc455
int64_t function_1dc454(void) {
    // 0x1dc454
    int64_t result; // 0x1dc454
    return result;
}

// Address range: 0x1dc459 - 0x1dc46c
int64_t function_1dc459(void) {
    // 0x1dc459
    __asm_out(76, (int32_t)function_23f519());
    return function_1dc454();
}

// Address range: 0x1dc47c - 0x1dc489
int64_t function_1dc47c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x68df7bf4); // 0x1dc47c
    int64_t result; // 0x1dc47c
    *v1 = *v1 + (int32_t)result;
    char * v2 = (char *)(a4 - 39); // 0x1dc482
    *v2 = *v2 + (char)(result / 256);
    char * v3 = (char *)(a4 - 105); // 0x1dc485
    *v3 = *v3 ^ (char)a3;
    return result;
}

// Address range: 0x1dc48a - 0x1dc48c
int64_t function_1dc48a(int64_t a1, int64_t a2) {
    // 0x1dc48a
    return a1 & 0xffffffff;
}

// Address range: 0x1dc492 - 0x1dc497
int64_t function_1dc492(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dc492
    int64_t result; // 0x1dc492
    return result;
}

// Address range: 0x1dc4a9 - 0x1dc4ad
int64_t function_1dc4a9(int64_t a1, int64_t a2) {
    // 0x1dc4a9
    int64_t result; // 0x1dc4a9
    return result;
}

// Address range: 0x1dc527 - 0x1dc55e
int64_t function_1dc527(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1dc527
    int64_t v1; // 0x1dc527
    char v2 = *(char *)(8 * a4 + 0x68f1efe3 + v1) + (char)v1; // 0x1dc527
    char * v3 = (char *)(a4 + 92); // 0x1dc52e
    *v3 = *v3 + v2;
    int32_t * v4 = (int32_t *)(a2 - 120); // 0x1dc539
    *v4 = *v4 + (int32_t)a1;
    int64_t v5; // 0x1dc527
    *(char *)a3 = *(char *)&v5 + (v2 | (char)(a4 / 256));
    return function_1dc598(a1, a2, a3, (int32_t)a4 - (int32_t)v1, v1, v1);
}

// Address range: 0x1dc55f - 0x1dc574
int64_t function_1dc55f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t * v2 = (int64_t *)(a4 - 81); // 0x1dc55f
    *v2 = *v2 - 17;
    uint32_t v3 = (int32_t)a4 % 32; // 0x1dc564
    int64_t result; // 0x1dc55f
    if (v3 != 0) {
        uint32_t v4 = *(int32_t *)&result; // 0x1dc564
        *(int32_t *)result = v4 >> 32 - v3 | v4 << v3;
    }
    int64_t v5; // 0x1dc55f
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v5;
    *(char *)v1 = (char)result;
    return result;
}

// Address range: 0x1dc574 - 0x1dc587
int64_t function_1dc574(int64_t a1, int32_t a2, int32_t a3, int64_t a4) {
    // 0x1dc574
    int64_t v1; // 0x1dc574
    __asm_out_133((int16_t)a3, (char)v1);
    unsigned char v2 = (char)a4 % 32; // 0x1dc576
    if (v2 != 0) {
        char * v3 = (char *)(v1 - 0x36b9c753); // 0x1dc576
        *v3 = *v3 >> v2;
    }
    *(char *)-0x26453c79 = *(char *)-0x26453c79 ^ (char)(v1 / 256);
    return v1 & 0xffffffff;
}

// Address range: 0x1dc598 - 0x1dc5c6
int64_t function_1dc598(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __asm_wait() & -0xff01 | (int64_t)&g3; // 0x1dc5a6
    int64_t v2 = a3 + a2; // 0x1dc5a8
    int64_t v3; // 0x1dc598
    char * v4 = (char *)(v3 + 83); // 0x1dc5b2
    *v4 = *v4 + (char)v3;
    char * v5 = (char *)v1; // 0x1dc5bb
    *v5 = *v5 + (char)v1;
    int32_t * v6 = (int32_t *)((v2 & 0xffffffff) - 85); // 0x1dc5bd
    *v6 = *v6 ^ (int32_t)v3;
    char * v7 = (char *)(a6 - 125); // 0x1dc5c0
    *v7 = *v7 + (char)v2;
    return function_1dc574(a1, (int32_t)v2, (int32_t)v1 >> 31, (int64_t)a4);
}

// Address range: 0x1dc5e9 - 0x1dc5f0
int64_t function_1dc5e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1dc5e9
    int64_t v1; // 0x1dc5e9
    return v1 | 256 * a3 & 0xff00;
}

// Address range: 0x1dc63e - 0x1dc645
int64_t function_1dc63e(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0xcf24289); // 0x1dc63e
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x1dc63e
    return result;
}

// Address range: 0x1dc648 - 0x1dc649
int64_t function_1dc648(void) {
    // 0x1dc648
    int64_t result; // 0x1dc648
    return result;
}

// Address range: 0x1dc64d - 0x1dc64e
int64_t function_1dc64d(void) {
    // 0x1dc64d
    int64_t result; // 0x1dc64d
    return result;
}

// Address range: 0x1dc654 - 0x1dc659
int64_t function_1dc654(void) {
    // 0x1dc654
    return function_15ac730();
}

// Address range: 0x1dc674 - 0x1dc675
int64_t function_1dc674(void) {
    // 0x1dc674
    int64_t result; // 0x1dc674
    return result;
}

// Address range: 0x1dc692 - 0x1dc696
int64_t function_1dc692(void) {
    // 0x1dc692
    return function_1dc674();
}

// Address range: 0x1dc6b3 - 0x1dc6c8
int64_t function_1dc6b3(int64_t a1, int64_t a2) {
    // 0x1dc6b3
    int64_t v1; // 0x1dc6b3
    char v2 = v1; // 0x1dc6b3
    *(char *)a2 = v2 + (char)v1;
    char * v3 = (char *)(a1 + 1); // 0x1dc6b5
    *v3 = *v3 + v2;
    int64_t v4; // 0x1dc6b3
    if ((int32_t)v1 >= 0x8e0def02) {
        v4 = function_1dc64d();
    }
    char * v5 = (char *)(a1 + 0x3a583f6a); // 0x1dc6bf
    char v6 = *v5; // 0x1dc6bf
    *v5 = v6 >> 1;
    int64_t result = v4; // 0x1dc6c5
    if (v6 >= 0) {
        result = function_1dc648();
    }
    // 0x1dc6c7
    return result;
}

// Address range: 0x1dc6c8 - 0x1dc6dd
int64_t function_1dc6c8(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x604f10be); // 0x1dc6ce
    int64_t v2; // 0x1dc6c8
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x1dc6c8
    uint64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)(v4 / 256);
    return function_ffffffffda79b169();
}

// Address range: 0x1dc6f5 - 0x1dc6fc
int64_t function_1dc6f5(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 11); // 0x1dc6f7
    int64_t v2; // 0x1dc6f5
    *v1 = *v1 + (int32_t)v2;
    return function_1dc739(a1, v2, v2, v2);
}

// Address range: 0x1dc72f - 0x1dc739
int64_t function_1dc72f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dc72f
    int64_t v1; // 0x1dc72f
    bool v2; // 0x1dc72f
    *(char *)a2 = (char)v1 - (char)a4 + (char)v2;
    int16_t v3; // 0x1dc72f
    return (int64_t)v3 + 0x19ba24c;
}

// Address range: 0x1dc739 - 0x1dc855
int64_t function_1dc739(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dc739
    int64_t v1; // 0x1dc739
    int64_t v2 = v1;
    bool v3; // 0x1dc739
    int64_t v4 = 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2; // bp-16, 0x1dc73a
    if (v3 || v3) {
        // 0x1dc73d
        *(int32_t *)v2 = 2 * (int32_t)v2;
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        uint32_t v5 = *(int32_t *)(v2 - 2); // 0x1dc746
        return (v2 + 90 + (int64_t)(v5 > (int32_t)(int64_t)&v4)) % 256 | v2 & -256;
    }
    // 0x1dc7a5
    return v2 + 256 * a1 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x431093 - 0x431096
int64_t function_431093(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431093
    int64_t result; // 0x431093
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x43113e - 0x43113f
int64_t function_43113e(void) {
    // 0x43113e
    int64_t result; // 0x43113e
    return result;
}

// Address range: 0x431140 - 0x43119d
int64_t function_431140(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x431140
    int64_t v1; // 0x431140
    uint64_t v2 = v1;
    int64_t v3 = a2;
    char * v4 = (char *)(v2 - 0x23008c28); // 0x431140
    *v4 = *v4 + (char)v1;
    int64_t result; // 0x431140
    int32_t v5 = *(int32_t *)&result + (int32_t)a1; // 0x431146
    *(int32_t *)result = v5;
    *(char *)a1 = (char)result;
    int64_t v6 = (int64_t)*(int32_t *)(a4 - 11); // 0x43114a
    int64_t v7 = 125 * v6; // 0x43114a
    if (v5 == 0) {
        if (v7 == 0x7d00000000 * v6 >> 32) {
            // 0x43117f
            return function_ffffffffaef229ea();
        }
        unsigned char v8 = (char)(a3 / 256); // 0x431165
        char v9 = (char)result < 97; // 0x431165
        unsigned char v10 = v9 + (char)a3; // 0x431165
        unsigned char v11 = v8 - v10; // 0x431165
        bool v12 = (char)result < 97 ? v10 != -1 | v11 - v9 > v8 : v10 > v8; // 0x431165
        char * v13 = (char *)((256 * (int64_t)v11 | a3 & -0xff01) + 0x334394f0); // 0x431167
        *v13 = *v13 - (char)v7 + (char)v12;
        return result;
    }
    // 0x431150
    *(char *)(a3 - 101) = (char)(v2 / 256);
    if (v7 != 0x7d00000000 * v6 >> 32) {
        // 0x431155
        return result;
    }
    // 0x431170
    bool v14; // 0x431140
    int64_t v15 = (v14 ? -1 : 1) + a1; // 0x431149
    uint32_t v16 = *(int32_t *)&v3; // 0x431170
    uint32_t v17 = *(int32_t *)v15; // 0x431170
    int64_t v18 = v14 ? -4 : 4; // 0x431170
    int64_t v19 = v15 + v18; // 0x431170
    *(int32_t *)v19 = (int32_t)result;
    *(int32_t *)(v19 + v18) = __asm_insd((int16_t)a3);
    if (v16 - v17 >= 0) {
        // 0x431199
        return 0x10000 * (int32_t)result >> 16;
    }
    // 0x431176
    int64_t v20; // 0x431140
    *(int32_t *)(v7 & 0xffffffff) = (int32_t)(int64_t)&v20;
    if (v16 >= v17) {
        result = function_43113e();
    }
    // 0x43117f
    return function_ffffffffaef229ea();
}

// Address range: 0x4311d0 - 0x4311d1
int64_t function_4311d0(void) {
    // 0x4311d0
    int64_t result; // 0x4311d0
    return result;
}

// Address range: 0x4311f5 - 0x4311fa
int64_t function_4311f5(void) {
    // 0x4311f5
    return function_ffffffffb0d4184b();
}

// Address range: 0x431209 - 0x4312f7
int64_t function_431209(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431209
    int64_t v1; // 0x431209
    int32_t v2 = (int32_t)v1 & -0x7fa51a93; // 0x43120c
    int64_t v3 = v2; // 0x43120c
    if (v2 != 0) {
        int64_t result = v3; // 0x431232
        if (v2 >= 0) {
            result = function_4311d0();
        }
        // 0x431235
        *(int32_t *)0x11a45ea15f387ba3 = (int32_t)result;
        return result;
    }
    int32_t v4 = *(int32_t *)(a1 + 72); // 0x431209
    int32_t * v5 = (int32_t *)(a2 - 0x7ad9fda5 + a3); // 0x431214
    *v5 = *v5 ^ 68;
    if ((char)a3 < 0) {
        // 0x431221
        return a4 & 0xffffffff;
    }
    int64_t v6 = a4 - 1; // 0x431246
    if (v6 != 0 != (-(int16_t)&g2 == 0)) {
        // 0x431248
        return function_3194af36();
    }
    int64_t v7 = v3 & 109 | a3; // 0x43121c
    int64_t v8 = v3 & 0x805a0000 | (int64_t)-(int16_t)&g2; // 0x431241
    int64_t * v9 = (int64_t *)((int64_t)((int32_t)v1 - v4) - 8); // 0x43127d
    *v9 = a1;
    int32_t * v10 = (int32_t *)(a4 + 83); // 0x43127f
    *v10 = *v10 ^ (int32_t)a1;
    int32_t * v11 = (int32_t *)(v8 - 41); // 0x431282
    int32_t v12 = *v11; // 0x431282
    *v11 = 0x4000000 * v12;
    *(char *)a1 = __asm_insb((int16_t)v7);
    char * v13 = (char *)(a2 + 67); // 0x431287
    *v13 = (char)((v12 & 64) != 0) + (char)v7 + *v13;
    char * v14 = (char *)(v1 + 0x631621ce); // 0x43128c
    unsigned char v15 = *v14; // 0x43128c
    unsigned char v16 = (char)v6; // 0x43128c
    char v17 = v15 - v16; // 0x43128c
    unsigned char v18 = llvm_ctpop_i8(v17); // 0x43128c
    *v14 = v17;
    if (v18 % 2 != 0) {
        char v19 = *(char *)v8; // 0x4312df
        char v20 = v15 < v16 ? (char)(-(int16_t)&g2 >> 8) + 1 : (char)(-(int16_t)&g2 >> 8); // 0x4312df
        *(char *)(a1 - 69 + v1) = 0;
        return (int64_t)((0x1000000 * (int32_t)(v19 + v20) | 0x10000 * (int32_t)((int64_t)-(int16_t)&g2 & 255)) >> 16);
    }
    int64_t v21 = __asm_int1(); // 0x431295
    unsigned char v22 = *(char *)(v1 + 0x176573be); // 0x431297
    int32_t * v23 = (int32_t *)(v1 + 43); // 0x4312a2
    uint32_t v24 = *v23; // 0x4312a2
    *v23 = v24 / 0x800000 | 512 * v24;
    return v21 + 0xc50440 + (int64_t)(v22 < (char)v1) & 0xffffffff;
}

// Address range: 0x43133e - 0x431341
int64_t function_43133e(void) {
    // 0x43133e
    int64_t result; // 0x43133e
    return result;
}

// Address range: 0x4313a0 - 0x4313a2
int64_t function_4313a0(int64_t a1) {
    // 0x4313a0
    int64_t result; // 0x4313a0
    return result;
}

// Address range: 0x4313a9 - 0x4313b5
int64_t function_4313a9(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2; // 0x4313a9
    char * v2 = (char *)((int64_t)(v1 / 0x2000 | 0x80000 * v1) + 77); // 0x4313ac
    int64_t result; // 0x4313a9
    *v2 = *v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x4313bc - 0x4313d4
int64_t function_4313bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4313bc
    *(int32_t *)0x7c1921b782bc64e = __asm_in_135((int16_t)a3);
    return 0x6b60c125;
}

// Address range: 0x4313ef - 0x4313f0
int64_t function_4313ef(void) {
    // 0x4313ef
    int64_t result; // 0x4313ef
    return result;
}

// Address range: 0x43142a - 0x431433
int64_t function_43142a(int16_t a1) {
    // 0x43142a
    return function_4313ef();
}

// Address range: 0x431455 - 0x431460
int64_t function_431455(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431455
    int64_t result; // 0x431455
    return result;
}

// Address range: 0x431465 - 0x431466
int64_t function_431465(void) {
    // 0x431465
    int64_t result; // 0x431465
    return result;
}

// Address range: 0x431496 - 0x4314c8
int64_t function_431496(int64_t a1, int64_t a2, int64_t a3) {
    // 0x431496
    int64_t v1; // 0x431496
    __asm_out_134(40, (char)v1);
    int32_t * v2 = (int32_t *)(a2 - 0x2bd0c714); // 0x431498
    *v2 = *v2 ^ (int32_t)v1;
    *(char *)a3 = -80;
    char * v3 = (char *)(a3 + 83 + 2 * a2); // 0x4314be
    char v4 = 2 * *v3; // 0x4314be
    *v3 = v4;
    int64_t result = 0x24058004; // 0x4314c3
    if (v4 < 0) {
        result = function_431465();
    }
    // 0x4314c5
    return result;
}

// Address range: 0x4314cc - 0x4314cf
int64_t function_4314cc(void) {
    // 0x4314cc
    int64_t result; // 0x4314cc
    return result;
}

// Address range: 0x4314d1 - 0x4314f0
int64_t function_4314d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4314d1
    __readgsdword(a4 + 0x714b7bf1);
    __asm_int3();
    return __asm_hlt() | 80;
}

// Address range: 0x43156e - 0x43158d
int64_t function_43156e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43156e
    int64_t v1; // 0x43156e
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x431576
    if (v3 != 0) {
        char v4 = v2;
        *(int32_t *)a3 = (int32_t)a3 << v3 | (int32_t)((a3 & 0xffffffff) >> (int64_t)(33 - v3)) | (int32_t)((char)(v2 / 256) + v4 > -1 - v4) << v3 - 1;
    }
    // 0x43158e
    return __asm_int1();
}

// Address range: 0x43158d - 0x43158e
int64_t function_43158d(void) {
    // 0x43158d
    int64_t result; // 0x43158d
    return result;
}

// Address range: 0x431693 - 0x431694
int64_t function_431693(void) {
    // 0x431693
    int64_t result; // 0x431693
    return result;
}

// Address range: 0x4316b4 - 0x431730
int64_t function_4316b4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4316b4
    int64_t v1; // 0x4316b4
    bool v2; // 0x4316b4
    int64_t v3 = v1 - (v2 ? 0x671a1596 : 0x671a1595); // 0x4316b4
    if ((int32_t)v3 >= 0) {
        // 0x43171c
        __asm_in_136(70);
        return function_431783(a1, a2, v1, v1);
    }
    int32_t * v4 = (int32_t *)(a2 + 5); // 0x4316c1
    *v4 = *v4 + 33;
    int32_t * v5 = (int32_t *)(v1 - 0x21b89db5); // 0x4316c5
    *v5 = *v5 ^ 0x170f0728;
    return v3 & 0xffffffff ^ 0x4c44d8a9;
}

// Address range: 0x431733 - 0x43173d
int64_t function_431733(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x431733
    int64_t result; // 0x431733
    return result;
}

// Address range: 0x43176f - 0x431773
int64_t function_43176f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43176f
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x43176f
    return result;
}

// Address range: 0x43177d - 0x431780
int64_t function_43177d(void) {
    // 0x43177d
    int64_t v1; // 0x43177d
    return function_4317f8(v1, v1, v1, v1);
}

// Address range: 0x431783 - 0x4317aa
int64_t function_431783(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431783
    int64_t v1; // 0x431783
    __writefsbyte(a2, __readfsbyte(a2) + (char)v1);
    unsigned char v2 = (char)a4;
    unsigned char v3 = v2 % 32; // 0x4317a2
    if (v3 != 0) {
        *(char *)a4 = v2 << v3;
    }
    return (int64_t)*(int32_t *)0x561f39d86ede36bb;
}

// Address range: 0x4317b2 - 0x4317b3
int64_t function_4317b2(void) {
    // 0x4317b2
    int64_t result; // 0x4317b2
    return result;
}

// Address range: 0x4317bd - 0x4317bf
int64_t function_4317bd(void) {
    // 0x4317bd
    return function_4317b2();
}

// Address range: 0x4317f8 - 0x431807
int64_t function_4317f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4317f8
    int64_t v1; // 0x4317f8
    uint64_t v2 = v1;
    return v2 & 0xffffff00 | (int64_t)(*(char *)(v1 + v2 % 256) | 96);
}

// Address range: 0x431803 - 0x431804
int64_t function_431803(void) {
    // 0x431803
    int64_t result; // 0x431803
    return result;
}

// Address range: 0x431830 - 0x431831
int64_t function_431830(void) {
    // 0x431830
    int64_t result; // 0x431830
    return result;
}

// Address range: 0x43183d - 0x43184b
int64_t function_43183d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 121); // 0x43183d
    int64_t v2; // 0x43183d
    int32_t v3 = *v1 ^ (int32_t)v2; // 0x43183d
    *v1 = v3;
    int64_t result; // 0x43183d
    if (a4 != 1 == v3 == 0) {
        result = function_431803();
    }
    // 0x43184a
    return result;
}

// Address range: 0x4318da - 0x4318dd
int64_t function_4318da(void) {
    // 0x4318da
    int64_t result; // 0x4318da
    return result;
}

// Address range: 0x4318e6 - 0x4318e9
int64_t function_4318e6(int64_t a1) {
    // 0x4318e6
    int64_t result; // 0x4318e6
    return result;
}

// Address range: 0x4318ec - 0x4318ee
int64_t function_4318ec(int64_t a1) {
    // 0x4318ec
    int64_t result; // 0x4318ec
    return result;
}

// Address range: 0x431912 - 0x431913
int64_t function_431912(void) {
    // 0x431912
    int64_t result; // 0x431912
    return result;
}

// Address range: 0x431916 - 0x43192e
int64_t function_431916(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431916
    return function_10e47325(0xe7226b35);
}

// Address range: 0x431942 - 0x43196d
int64_t function_431942(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x431942
    int64_t v1; // 0x431942
    int64_t v2 = v1;
    __asm_out(99, (int32_t)v1);
    int64_t result = (int64_t)*(int32_t *)-0x4d59bad7d53be498; // 0x431946
    unsigned char v3 = (char)a2; // 0x43194f
    unsigned char v4 = (char)v1 + v3; // 0x43194f
    bool v5; // 0x431942
    unsigned char v6 = v4 + (char)v5; // 0x43194f
    bool v7 = v5 ? v6 <= v3 : v4 < v3; // 0x43194f
    __asm_fldenv(*(int224_t *)(2 * result - 20));
    uint32_t v8 = (int32_t)a3; // 0x43195d
    uint32_t v9 = (int32_t)v2 + v8; // 0x43195d
    uint32_t v10 = v9 + (int32_t)v7; // 0x43195d
    bool v11 = v7 ? v10 <= v8 : v9 < v8; // 0x43195d
    *(char *)v2 = (char)v2 - (char)(a4 / 256) + (char)v11;
    float80_t v12; // 0x431942
    *(float64_t *)a1 = (float64_t)v12;
    __asm_outsb((int16_t)v10, *(char *)(a2 & -256 | (int64_t)v6));
    return result;
}

// Address range: 0x4319aa - 0x4319de
int64_t function_4319aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4319aa
    int64_t v1; // 0x4319aa
    int32_t v2 = *(int32_t *)(v1 + 104); // 0x4319af
    int64_t result = a1 & 0xffffffff; // 0x4319b2
    char v3 = v1 & a1; // 0x4319b3
    *(char *)result = v3;
    if (a4 == 1 || v3 == 0) {
        // 0x4319b8
        return result;
    }
    // 0x4319d1
    bool v4; // 0x4319aa
    char * v5 = (char *)((v1 & 0xffffffff) + 17 + 8 * (int64_t)(v2 + (int32_t)a3 + (int32_t)v4)); // 0x4319d3
    *v5 = *v5 + (char)((uint64_t)v1 / 256);
    return 0x10000 * (int32_t)a1 >> 16;
}
