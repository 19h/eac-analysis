/*
 * Targeted RetDec C for native executable gap queue batch 1379.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x15a513-0x15a713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x335223-0x335423 rank=- name=- kind=- bytes=- uncovered=-
 *   0x335423-0x335623 rank=- name=- kind=- bytes=- uncovered=-
 *   0x335623-0x335823 rank=- name=- kind=- bytes=- uncovered=-
 *   0x335823-0x335a23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x335a23-0x335c23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x335c23-0x335e23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x335e23-0x336023 rank=- name=- kind=- bytes=- uncovered=-
 *   0x336023-0x336223 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56c0f5-0x56c2f5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56c2f5-0x56c4f5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56c6f5-0x56c8f5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56c8f5-0x56caf5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56caf5-0x56ccf5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ccf5-0x56cef5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56cef5-0x56d0f5 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_15a513(int64_t a1);
int64_t function_15a639(int64_t a1);
int64_t function_15a643(void);
int64_t function_15a6a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15a6bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15a6c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15a6cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_170593a();
int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_21b5d9e();
int64_t function_21c39bf();
int64_t function_335223(void);
int64_t function_33522b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3352b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_335331(void);
int64_t function_335335(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33536f(void);
int64_t function_335382(void);
int64_t function_3353f3(void);
int64_t function_335414(int64_t a1);
int64_t function_335455(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3354ca(void);
int64_t function_3354ee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_33551f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_335615(void);
int64_t function_3356fb(void);
int64_t function_3357d9(void);
int64_t function_3357f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_335838(void);
int64_t function_33583a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33584b(int64_t a1, int64_t a2);
int64_t function_3358cb(void);
int64_t function_335964(void);
int64_t function_3359b7(void);
int64_t function_3359bd(int64_t a1);
int64_t function_3359c8(void);
int64_t function_3359e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3359fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_335a39(void);
int64_t function_335a44(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_335ac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_335b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_335b9d(int64_t a1);
int64_t function_335bd3(void);
int64_t function_335c29(void);
int64_t function_335c4a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_335c5a(void);
int64_t function_335c5d(int64_t a1);
int64_t function_335c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_335caa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_335d39(void);
int64_t function_335d51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_335de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_335e8b(int64_t a1);
int64_t function_335e9f(void);
int64_t function_335eca(int64_t a1, int64_t a2);
int64_t function_335f08(int64_t a1);
int64_t function_335f3e(int64_t a1);
int64_t function_335f5b(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, char a5);
int64_t function_336001(void);
int64_t function_33601b(int64_t a1);
int64_t function_33601d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33616b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_336184(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3361a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3361df(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d6d5d6c();
int64_t function_43788c14();
int64_t function_4c9eef11();
int64_t function_4f5b50();
int64_t function_4f8cc0();
int64_t function_4fc010();
int64_t function_554b00();
int64_t function_5659d0();
int64_t function_566180();
int64_t function_56c068();
int64_t function_56c0f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56c0fd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_56c580();
int64_t function_56c6b0();
int64_t function_56c6b3();
int64_t function_56c6e0();
int64_t function_56c6f5(void);
int64_t function_56c718(void);
int64_t function_56c720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_56c800(void);
int64_t function_56c80f(void);
int64_t function_56c822(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7);
int64_t function_56cf54(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5790b0();
int64_t function_b6e959d();
int64_t function_cdc60();
int64_t function_ffffffffb130332c();
int64_t unknown_23ee6d2c();
int64_t unknown_33a4c057();
int64_t unknown_3479939a();
int64_t unknown_473c70d4();
int64_t unknown_4821a48e();
int64_t unknown_71b2046d();
int64_t unknown_7762a807();
int64_t unknown_cd23cf();
int64_t unknown_f38f343();
int64_t unknown_ffffffffad78aa7b();
int64_t unknown_ffffffffb008944a();
int64_t unknown_ffffffffb23e0042();
int64_t unknown_ffffffffc4c967e3();
int64_t unknown_fffffffff52e2d88();
int64_t unknown_fffffffffb35492a();

// Address range: 0x15a513 - 0x15a603
int64_t function_15a513(int64_t a1) {
    // 0x15a513
    int64_t v1; // bp-32, 0x15a513
    v1 = (int64_t)&v1 + 16;
    return function_cdc60();
}

// Address range: 0x15a639 - 0x15a63c
int64_t function_15a639(int64_t a1) {
    // 0x15a639
    int64_t result; // 0x15a639
    return result;
}

// Address range: 0x15a643 - 0x15a646
int64_t function_15a643(void) {
    // 0x15a643
    int64_t result; // 0x15a643
    return result;
}

// Address range: 0x15a6a8 - 0x15a6b4
int64_t function_15a6a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15a6a8
    int64_t v1; // 0x15a6a8
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 + 41); // 0x15a6ac
    *v3 = *v3 + (char)a4;
    return function_4c9eef11();
}

// Address range: 0x15a6bf - 0x15a6c7
int64_t function_15a6bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x15a6bf
    *v1 = *v1 | (char)a4;
    return function_15a6cf(a1, a2, a3, a4, (int64_t)&g3, (int64_t)&g3);
}

// Address range: 0x15a6c9 - 0x15a6cf
int64_t function_15a6c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15a6c9
    int64_t v1; // 0x15a6c9
    int64_t v2 = v1;
    char * v3 = (char *)(a4 + 12 + 4 * a4); // 0x15a6cb
    *v3 = *v3 & (char)a4;
    return (v2 + 9) % 256 | v2 & -256;
}

// Address range: 0x15a6cf - 0x15a713
int64_t function_15a6cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15a6cf
    int64_t result; // 0x15a6cf
    char v1 = result; // 0x15a6cf
    if (v1 == 0) {
        // 0x15a71d
        return result;
    }
    char * v2 = (char *)(a4 + 89); // 0x15a6d3
    *v2 = *v2 | v1;
    return result;
}

// Address range: 0x335223 - 0x33522a
int64_t function_335223(void) {
    char v1 = *(char *)-0x1ed03cd5; // 0x335224
    int64_t v2; // 0x335223
    *(char *)-0x1ed03cd5 = v1 + (char)((uint64_t)v2 / 256);
    int64_t v3; // 0x335223
    return (int64_t)&v3;
}

// Address range: 0x33522b - 0x3352b1
int64_t function_33522b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x4e8c6d4); // 0x3352a3
    int64_t result; // 0x33522b
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x3352b3 - 0x3352f9
int64_t function_3352b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3352b3
    int64_t result; // 0x3352b3
    bool v1; // 0x3352b3
    if (v1) {
        // 0x3352f6
        return result;
    }
    int32_t * v2 = (int32_t *)(result + 82); // 0x3352b5
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x335331 - 0x335333
int64_t function_335331(void) {
    // 0x335331
    int64_t result; // 0x335331
    return result;
}

// Address range: 0x335335 - 0x33535c
int64_t function_335335(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x335335
    int64_t v1; // 0x335335
    __asm_out((int16_t)a3, (int32_t)v1);
    char * v2 = (char *)(v1 - 0x747c4790); // 0x335336
    *v2 = *v2 - 6;
    int64_t v3 = unknown_f38f343(); // 0x33533d
    unsigned char v4 = *(char *)v3 & (char)v3; // 0x335343
    char * v5 = (char *)(int64_t)((int32_t)v3 >> 31); // 0x33534f
    *v5 = *v5 + v4;
    int64_t result = 0x10000 * (int32_t)(v3 & 0xff00 | (int64_t)v4) >> 16; // 0x335351
    int32_t * v6 = (int32_t *)(2 * result - 0x746bfd53); // 0x335352
    *v6 = *v6 | 0x1cd00068;
    return result;
}

// Address range: 0x33536f - 0x335374
int64_t function_33536f(void) {
    // 0x33536f
    return function_3d6d5d6c();
}

// Address range: 0x335382 - 0x335385
int64_t function_335382(void) {
    // 0x335382
    int64_t result; // 0x335382
    return result;
}

// Address range: 0x3353f3 - 0x3353f8
int64_t function_3353f3(void) {
    // 0x3353f3
    return function_43788c14();
}

// Address range: 0x335414 - 0x335415
int64_t function_335414(int64_t a1) {
    // 0x335414
    int64_t result; // 0x335414
    return result;
}

// Address range: 0x335455 - 0x33547d
int64_t function_335455(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x335455
    int64_t v1; // 0x335455
    *(char *)a4 = (char)v1;
    bool v2; // 0x335455
    int32_t * v3 = (int32_t *)((v2 ? 0xff00 : 0) + a3 & 0xff00 | a3 & -0xff01); // 0x335466
    int32_t v4 = *v3 + (int32_t)a1; // 0x335466
    *v3 = v4;
    if (v4 >= 0) {
        function_43788c14();
    }
    char v5 = *(char *)0x77f1cb79; // 0x335472
    *(char *)0x77f1cb79 = v5 + (char)((uint64_t)v1 / 256);
    int64_t v6 = __asm_wait(a1); // 0x335478
    return (v6 + 198) % 256 | v6 & -256;
}

// Address range: 0x3354ca - 0x3354cb
int64_t function_3354ca(void) {
    // 0x3354ca
    int64_t result; // 0x3354ca
    return result;
}

// Address range: 0x3354ee - 0x33551f
int64_t function_3354ee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x3354ee
    int32_t v3 = v2; // 0x3354f1
    *(int32_t *)0xf6d0068c0eb3a9b = v3;
    int32_t * v4 = (int32_t *)(a4 + 0x2318af); // 0x3354ff
    *v4 = *v4 + (int32_t)v2;
    int32_t * v5 = (int32_t *)(v2 + 38); // 0x33550c
    *v5 = *v5 & (int32_t)a3;
    if (*(char *)(int64_t)(0x10000 * v3 >> 16 || 3026) <= (char)(a4 / 256)) {
        function_3354ca();
    }
    uint32_t result = *(int32_t *)&v1;
    __asm_outsd((int16_t)(a4 % 256 | a3), result);
    return result;
}

// Address range: 0x33551f - 0x335601
int64_t function_33551f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 107); // 0x335526
    int64_t v2; // 0x33551f
    *v1 = *v1 + (char)v2;
    int64_t v3 = 0x5d988b00; // bp-8, 0x335529
    int64_t v4 = (int64_t)&v3 - 8; // 0x335530
    *(int64_t *)v4 = 0x3d005008;
    int32_t * v5 = (int32_t *)(a1 + 0x7cfa041f); // 0x335535
    int32_t v6 = *v5; // 0x335535
    int32_t v7 = a2; // 0x335535
    int32_t v8 = v6 + v7; // 0x335535
    *v5 = v8;
    int64_t v9 = v4; // 0x33553b
    int64_t v10; // 0x33551f
    if (v8 < 0 == ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x335577
        int64_t v11; // 0x33551f
        v10 = v11;
        return (v10 + 81) % 256 | v10 & -256;
    }
    v9 -= 8;
    *(int64_t *)v9 = 0x3d005008;
    int32_t v12 = *v5; // 0x335535
    int32_t v13 = v12 + v7; // 0x335535
    *v5 = v13;
    while (v13 < 0 != ((v13 ^ v12) & (v13 ^ v7)) < 0) {
        // 0x33553d
        v9 -= 8;
        *(int64_t *)v9 = 0x3d005008;
        v12 = *v5;
        v13 = v12 + v7;
        *v5 = v13;
    }
    // 0x335577
    v10 = 0xc47d1405;
    return (v10 + 81) % 256 | v10 & -256;
}

// Address range: 0x335615 - 0x335616
int64_t function_335615(void) {
    // 0x335615
    int64_t result; // 0x335615
    return result;
}

// Address range: 0x3356fb - 0x335701
int64_t function_3356fb(void) {
    // 0x3356fb
    return function_ffffffffb130332c();
}

// Address range: 0x3357d9 - 0x3357db
int64_t function_3357d9(void) {
    // 0x3357d9
    int64_t v1; // 0x3357d9
    return function_33583a(v1, v1, v1, v1);
}

// Address range: 0x3357f6 - 0x335812
int64_t function_3357f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3357f6
    __asm_in(-68);
    unknown_7762a807();
    char * v1 = (char *)(8 * a4 + 0x37d006be); // 0x335803
    *v1 = *v1 | -41;
    return function_b6e959d();
}

// Address range: 0x335838 - 0x335839
int64_t function_335838(void) {
    // 0x335838
    int64_t result; // 0x335838
    return result;
}

// Address range: 0x33583a - 0x33584a
int64_t function_33583a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33583a
    int64_t result; // 0x33583a
    bool v1; // 0x33583a
    *(char *)a4 = (char)result - (char)a4 + (char)v1;
    int64_t v2; // 0x33583a
    *(char *)a2 = *(char *)&v2 & (char)result;
    int32_t * v3 = (int32_t *)(a4 + 0x689df63f); // 0x335844
    uint32_t v4 = *v3; // 0x335844
    *v3 = v4 / 2 | 0x80000000 * v4;
    return result;
}

// Address range: 0x33584b - 0x33584e
int64_t function_33584b(int64_t a1, int64_t a2) {
    // 0x33584b
    return function_335838();
}

// Address range: 0x3358cb - 0x3358d2
int64_t function_3358cb(void) {
    // 0x3358cb
    return function_170593a();
}

// Address range: 0x335964 - 0x33596b
int64_t function_335964(void) {
    // 0x335964
    return function_21c39bf();
}

// Address range: 0x3359b7 - 0x3359b8
int64_t function_3359b7(void) {
    // 0x3359b7
    int64_t result; // 0x3359b7
    return result;
}

// Address range: 0x3359bd - 0x3359be
int64_t function_3359bd(int64_t a1) {
    // 0x3359bd
    int64_t result; // 0x3359bd
    return result;
}

// Address range: 0x3359c8 - 0x3359c9
int64_t function_3359c8(void) {
    // 0x3359c8
    int64_t result; // 0x3359c8
    return result;
}

// Address range: 0x3359e0 - 0x3359fc
int64_t function_3359e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3359e0
    int64_t v1; // 0x3359e0
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)0x3baefd5b = *(int32_t *)0x3baefd5b ^ (int32_t)v1;
    uint32_t v4 = ((int32_t)a4 ^ 0xff00) & (int32_t)v3; // 0x3359ee
    *(char *)v2 = (char)v2 + 3;
    int32_t * v5 = (int32_t *)(int64_t)v4; // 0x3359f8
    *v5 = (int32_t)(v3 | v1) + (int32_t)a2 + *v5;
    return (v3 + (int64_t)(v4 / 256)) % 256 | v3 & -256;
}

// Address range: 0x3359fc - 0x335a33
int64_t function_3359fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 256 * (a4 / 0x8000 % 2 | a4 / 128 & 254) | a4 & -0xff01; // 0x3359fc
    int64_t v2; // 0x3359fc
    uint32_t v3 = *(int32_t *)v1 & (int32_t)v2; // 0x335a01
    int64_t v4 = v3; // 0x335a01
    char * v5 = (char *)v4; // 0x335a03
    unsigned char v6 = *v5; // 0x335a03
    *v5 = v6 / 128 | 2 * v6;
    int64_t v7 = v4 & 0xffffff00 | (int64_t)((v3 + 255) % 256); // 0x335a0a
    if ((char)v3 > 1) {
        v7 = function_3359b7();
    }
    int64_t v8 = v7;
    int32_t * v9 = (int32_t *)(v2 + 25); // 0x335a0f
    *v9 = *v9 + (int32_t)v2;
    int32_t * v10 = (int32_t *)(2 * a1 + 0x51900fc6 + v1); // 0x335a16
    int32_t v11 = *v10; // 0x335a16
    int32_t v12 = a2; // 0x335a16
    int32_t v13 = v11 + v12; // 0x335a16
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x335a16
    *v10 = v13;
    if (v14 % 2 == 0) {
        // 0x335a2e
        return __asm_int3();
    }
    if (((v13 ^ v11) & (v13 ^ v12)) >= 0) {
        // 0x335a24
        return unknown_23ee6d2c(a5);
    }
    // 0x335a23
    return v8 & -0x10000 | (int64_t)&g1 | (v8 + 60) % 256;
}

// Address range: 0x335a39 - 0x335a3a
int64_t function_335a39(void) {
    // 0x335a39
    int64_t result; // 0x335a39
    return result;
}

// Address range: 0x335a44 - 0x335ac1
int64_t function_335a44(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x335a44
    int64_t v1; // 0x335a44
    int64_t v2 = v1;
    int64_t v3 = a3;
    __asm_out((int16_t)a3, (int32_t)unknown_ffffffffb008944a());
    char v4 = (char)v1 - 127; // 0x335a4d
    if (llvm_ctpop_i8(v4) % 2 != 0) {
        function_335a39();
    }
    int64_t result = unknown_33a4c057(); // 0x335a51
    if (v4 == 0) {
        int32_t * v5 = (int32_t *)result; // 0x335ab7
        *v5 = *v5 ^ (int32_t)a3;
        *(int32_t *)v3 = *(int32_t *)&v3 - 0x1fea7ba6;
        bool v6; // 0x335a44
        return (v6 ? 0xffffffff : 1) + a2 & 0xffffffff;
    }
    char * v7 = (char *)result; // 0x335a58
    *v7 = *v7 + (char)a3;
    char v8 = *(char *)(v3 + 52); // 0x335a5a
    int32_t * v9 = (int32_t *)(v3 - 0x17834f69); // 0x335a5d
    int32_t v10 = *v9; // 0x335a5d
    *v9 = v10 - (int32_t)(v2 & 0xffffff00 | (int64_t)(v8 + (char)v2));
    int32_t * v11 = (int32_t *)(result - 23); // 0x335a63
    *v11 = *v11 + (int32_t)a4;
    return result;
}

// Address range: 0x335ac2 - 0x335b15
int64_t function_335ac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x335ac2
    int64_t v1; // 0x335ac2
    uint64_t v2 = v1;
    int64_t result = __asm_iretd(a1, a2); // 0x335ac2
    int64_t * v3 = (int64_t *)(a6 + 0x25990091 + 2 * v1); // 0x335ac3
    *v3 = *v3 - v1;
    *(char *)-0x2dd00f2e = *(char *)-0x2dd00f2e + (char)(v2 / 256);
    if (a4 != 0) {
        // 0x335ad4
        return result;
    }
    // 0x335b13
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return result;
}

// Address range: 0x335b52 - 0x335b75
int64_t function_335b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x79d65201); // 0x335b52
    int64_t v2; // 0x335b52
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(v2 + 0x1e82d00); // 0x335b58
    *v3 = *v3 + (char)(v2 / 256);
    int32_t * v4 = (int32_t *)(4 * a1 + 60 + a4); // 0x335b5e
    *v4 = *v4 ^ 0xa0f4b6;
    return unknown_71b2046d();
}

// Address range: 0x335b9d - 0x335ba0
int64_t function_335b9d(int64_t a1) {
    // 0x335b9d
    int64_t result; // 0x335b9d
    return result;
}

// Address range: 0x335bd3 - 0x335bd5
int64_t function_335bd3(void) {
    // 0x335bd3
    int64_t result; // 0x335bd3
    return result;
}

// Address range: 0x335c29 - 0x335c2a
int64_t function_335c29(void) {
    // 0x335c29
    int64_t result; // 0x335c29
    return result;
}

// Address range: 0x335c4a - 0x335c57
int64_t function_335c4a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x335c4a
    __readgsdword(a3 - 0x4be24558);
    return function_21b5d9e();
}

// Address range: 0x335c5a - 0x335c5c
int64_t function_335c5a(void) {
    // 0x335c5a
    int64_t result; // 0x335c5a
    return result;
}

// Address range: 0x335c5d - 0x335c60
int64_t function_335c5d(int64_t a1) {
    // 0x335c5d
    int64_t result; // 0x335c5d
    return result;
}

// Address range: 0x335c62 - 0x335c90
int64_t function_335c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x335c62
    int64_t v1; // 0x335c62
    uint64_t v2 = v1;
    int64_t v3 = v2 / 2 % 128 | v2 & 0xffffff00;
    int32_t * v4 = (int32_t *)v3; // 0x335c67
    uint32_t v5 = *v4; // 0x335c67
    uint32_t v6 = v5 + (int32_t)v1; // 0x335c67
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x335c67
    *v4 = v6;
    int64_t v8 = v3; // 0x335c69
    if (v7 % 2 == 0) {
        v8 = function_335c29();
    }
    // 0x335c6c
    *(int32_t *)-0x1bf370e98c135f54 = (int32_t)v8;
    unknown_ffffffffad78aa7b();
    bool v9; // 0x335c62
    int32_t * v10 = (int32_t *)(a2 - 0x141e5535 + (v9 ? -4 : 4)); // 0x335c7b
    uint32_t v11 = *v10; // 0x335c7b
    uint32_t v12 = v11 + (v6 < v5 ? 4 : 3); // 0x335c7b
    *v10 = v12;
    int64_t result = unknown_fffffffff52e2d88(); // 0x335c82
    int32_t * v13 = (int32_t *)(v1 + 0x5b678801); // 0x335c87
    *v13 = 0x80000000 * (int32_t)(v6 < v5 ? v12 <= v11 : v11 > 0xfffffffc) | *v13 / 2;
    return result;
}

// Address range: 0x335caa - 0x335ced
int64_t function_335caa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    bool v2; // 0x335caa
    if (v2) {
        // 0x335ceb
        int64_t v3; // 0x335caa
        return function_335d51(a1, a2, a3, a4, a3, v3);
    }
    int64_t v4 = __asm_iretd((v2 ? -1 : 1) + a1, a2); // 0x335cb6
    unsigned char v5 = (char)v4; // 0x335cb7
    *(char *)a3 = v5 + (char)a3;
    unsigned char v6 = (char)v1 % 32; // 0x335cba
    if (v6 != 0) {
        unsigned char v7 = *(char *)&v1; // 0x335cba
        *(char *)v1 = v7 << 8 - v6 | v7 >> v6;
    }
    return v4 + 0xc4f401e8 + (int64_t)(v5 < 239) & 0xffffffff;
}

// Address range: 0x335d39 - 0x335d3b
int64_t function_335d39(void) {
    // 0x335d39
    int64_t result; // 0x335d39
    return result;
}

// Address range: 0x335d51 - 0x335da8
int64_t function_335d51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = *(char *)-0x7b34fda8; // 0x335d51
    int64_t v2; // 0x335d51
    *(char *)-0x7b34fda8 = v1 + (char)((uint64_t)v2 / 256);
    int32_t v3 = __asm_in_134(-75); // 0x335d57
    int64_t result = v3; // 0x335d57
    int64_t v4 = a4 - 1; // 0x335d59
    if (v4 == 0) {
        // 0x335d5b
        return result;
    }
    // 0x335da2
    *(int32_t *)a1 = v3;
    *(char *)a3 = (char)v4;
    return result;
}

// Address range: 0x335de5 - 0x335de9
int64_t function_335de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(3 * a4); // 0x335de5
    int64_t result; // 0x335de5
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x335e8b - 0x335e93
int64_t function_335e8b(int64_t a1) {
    // 0x335e8b
    return unknown_cd23cf(a1);
}

// Address range: 0x335e9f - 0x335ea0
int64_t function_335e9f(void) {
    // 0x335e9f
    int64_t result; // 0x335e9f
    return result;
}

// Address range: 0x335eca - 0x335f07
int64_t function_335eca(int64_t a1, int64_t a2) {
    // 0x335eca
    bool v1; // 0x335eca
    if (!v1) {
        // 0x335f06
        return __asm_wait(a1);
    }
    // 0x335ecc
    unknown_473c70d4();
    __asm_in(45);
    return unknown_ffffffffc4c967e3();
}

// Address range: 0x335f08 - 0x335f11
int64_t function_335f08(int64_t a1) {
    // 0x335f08
    int64_t v1; // 0x335f08
    *(char *)(v1 + 0x389b01e8) = (char)((uint64_t)v1 / 256);
    return function_335e9f();
}

// Address range: 0x335f3e - 0x335f41
int64_t function_335f3e(int64_t a1) {
    // 0x335f3e
    int64_t result; // 0x335f3e
    return result;
}

// Address range: 0x335f5b - 0x335f8e
int64_t function_335f5b(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, char a5) {
    // 0x335f5b
    int64_t v1; // 0x335f5b
    int64_t v2 = v1;
    char v3 = *(char *)(v2 + 0x526a5d00); // 0x335f67
    bool v4; // 0x335f5b
    int64_t v5 = v4 ? 0xfffffffc : 4; // 0x335f6d
    *(int32_t *)-0x179d7383 = *(int32_t *)-0x179d7383 + (int32_t)(v5 + a1);
    __asm_int(16);
    *(char *)v2 = (char)(v2 & a4 / 256);
    *(int64_t *)((a2 & 0xffffffff) - 8) = (256 * (int64_t)(v3 + (char)(a3 / 256)) | a3 & 0xffff00ff) + v1 & 0xffffffff;
    return unknown_4821a48e();
}

// Address range: 0x336001 - 0x336003
int64_t function_336001(void) {
    // 0x336001
    int64_t v1; // 0x336001
    return function_33601d(v1, v1, v1, v1, v1);
}

// Address range: 0x33601b - 0x33601c
int64_t function_33601b(int64_t a1) {
    // 0x33601b
    int64_t result; // 0x33601b
    return result;
}

// Address range: 0x33601d - 0x336168
int64_t function_33601d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33601d
    int3_t v1; // 0x33601d
    int3_t v2 = v1;
    int64_t v3; // 0x33601d
    int64_t v4; // 0x33601d
    bool v5; // 0x33601d
    char * v6 = (char *)(v4 - 70); // 0x336021
    *v6 = *v6 + (v5 ? -23 : -24);
    int32_t * v7 = (int32_t *)(a2 + 79 + a3); // 0x336025
    *v7 = *v7 + (int32_t)v4;
    int32_t * v8 = (int32_t *)(4 * v3 + v4); // 0x336029
    *v8 = -1 - *v8;
    *(int64_t *)a1 = a2;
    __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v2) + (float80_t)*(float32_t *)&v3);
    int32_t * v9 = (int32_t *)(v4 + 96); // 0x336039
    *v9 = *v9 ^ (int32_t)v3;
    unknown_ffffffffb23e0042();
    // 0x336041
    return __asm_int3();
    int32_t v10 = 0x10000 * (int32_t)v4 >> 16 | 186; // 0x336078
    int64_t v11 = v10; // 0x336079
    int64_t v12 = __asm_iretd(a1, v11); // 0x33607a
    *(int32_t *)v12 = v10 | (int32_t)v4;
    int32_t * v13 = (int32_t *)(v3 + 0x604fac94); // 0x33607f
    *v13 = *v13 + (int32_t)v12;
    int32_t * v14 = (int32_t *)(v4 + 108 + 2 * v3); // 0x33608a
    uint32_t v15 = *v14; // 0x33608a
    uint32_t v16 = v15 + (int32_t)a3; // 0x33608a
    *v14 = v16;
    int32_t v17; // 0x33601d
    int32_t v18; // 0x33601d
    int64_t v19; // 0x33601d
    int64_t v20; // 0x33601d
    int64_t v21; // 0x33601d
    int64_t v22; // 0x33601d
    int64_t v23; // 0x33601d
    if (a4 != 1 == v16 == 0) {
        // 0x33607f
        v22 = v11;
        v17 = v10;
        v19 = (v12 | 58) + 232 & 231 | v12 & -256;
        v20 = a3;
        goto lab_0x3360f3;
    } else {
        if (v16 != 0) {
            // 0x336041
            return __asm_int3();
        }
        // 0x336092
        v23 = v11;
        v18 = -0x49d74e3a;
        v21 = a3;
        if (v16 >= v15) {
            // 0x336094
            return unknown_3479939a();
        }
        goto lab_0x33610c;
    }
  lab_0x3360f3:;
    int32_t * v24 = (int32_t *)v19; // 0x3360f3
    uint32_t v25 = *v24; // 0x3360f3
    uint32_t v26 = v25 + v17; // 0x3360f3
    *v24 = v26;
    char * v27 = (char *)v22; // 0x3360f5
    unsigned char v28 = *v27; // 0x3360f5
    unsigned char v29 = (char)v3; // 0x3360f5
    char v30 = v26 < v25; // 0x3360f5
    char v31 = v28 + v30 + v29; // 0x3360f5
    char v32 = v31 + v30; // 0x3360f5
    unsigned char v33 = llvm_ctpop_i8(v31); // 0x3360f5
    *v27 = v31;
    int64_t v34; // 0x33601d
    int64_t * v35 = (int64_t *)v34; // 0x3360f8
    int64_t v36 = __asm_int3(); // 0x3360f9
    *v35 = 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 64 * (int64_t)(v31 == 0) | 128 * (int64_t)(v31 < 0) | 16 * (int64_t)(v28 % 16 + v30 + v29 % 16 > 15) | 4 * (int64_t)(v33 % 2 == 0) | 2048 * (int64_t)(((v32 ^ v28) & (v32 ^ v29)) < 0) | 2;
    int32_t * v37 = (int32_t *)v22; // 0x3360fc
    *v37 = *v37 & -0x172be919;
    int32_t * v38 = (int32_t *)v36; // 0x336102
    *v38 = *v38 + (int32_t)v20;
    char * v39 = (char *)(a1 - 0x2818ca82 + 4 * v36); // 0x336104
    *v39 = *v39 | (char)v3;
    v23 = v22;
    v18 = -0x49d74e3b;
    v21 = v36 & 0xffffffff;
    int64_t v40 = v34; // 0x33610b
    int64_t v41 = *v35; // 0x33610b
    goto lab_0x33610c;
  lab_0x33610c:;
    int64_t v42 = v41;
    int64_t v43 = v21;
    int64_t v44 = v3 & -256 | 65; // 0x336112
    v3 = v44;
    uint32_t v45 = (int32_t)__asm_iretd(a1, v23) - v18; // 0x336116
    v22 = 0x1e82fea;
    v17 = 0x1e82fea;
    v19 = v45;
    v20 = v43;
    v34 = v42;
    if (v45 == 0) {
        // 0x33611d
        __asm_out_133(-53, (int32_t)unknown_fffffffffb35492a());
        char * v46 = (char *)v44; // 0x336124
        *v46 = *v46 + (char)v43;
        *(int32_t *)a1 = __asm_insd((int16_t)v43);
        float80_t v47 = __frontend_reg_load_fpr(v2); // 0x336129
        float64_t v48 = *(float64_t *)(((v42 ^ v43) & 0xffffffff) + 0x2c01e8aa); // 0x336129
        __frontend_reg_store_fpr(v2, (float80_t)v48 / v47);
        int32_t v49 = *(int32_t *)0x550f01e83c2ee120; // 0x336138
        __frontend_reg_load_fpr(v2);
        __frontend_reg_load_fpr(v2);
        float80_t v50 = __frontend_reg_load_fpr(v2); // 0x336158
        __frontend_reg_store_fpr(v2, v50 - (float80_t)*(int32_t *)(v3 + 0x7a0bf90));
        *(int32_t *)0x640f9bfd = (0x10000 * v49 >> 16) - 0x176afd24 + *(int32_t *)0x640f9bfd;
        return v40 + 0xa3e9aaa2 & 0xffffffff;
    }
    goto lab_0x3360f3;
}

// Address range: 0x33616b - 0x336170
int64_t function_33616b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33616b
    int64_t v1; // 0x33616b
    int32_t v2 = v1; // 0x33616b
    *(int32_t *)a4 = v2 + (int32_t)v1;
    return 0x10000 * v2 >> 16;
}

// Address range: 0x336184 - 0x336188
int64_t function_336184(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x336184
    int64_t result; // 0x336184
    return result;
}

// Address range: 0x3361a3 - 0x3361ad
int64_t function_3361a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3361a3
    int64_t result; // 0x3361a3
    int32_t * v1 = (int32_t *)(result - 0x3b624cba); // 0x3361a5
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x3361df - 0x336215
int64_t function_3361df(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3361df
    int64_t v1; // 0x3361df
    int64_t v2 = v1;
    int64_t v3 = (v2 & 0xff00) + a3 & 0xff00 | v2 & -0xff01; // 0x3361df
    int64_t v4 = a2 + a1 & 0xffffffff; // 0x336205
    char * v5 = (char *)(v3 + 0x3a1fad7a6); // 0x33620c
    *v5 = *v5 / 2;
    uint32_t v6 = *(int32_t *)v4; // 0x336210
    bool v7; // 0x3361df
    uint64_t v8 = __asm_wait((v7 ? -4 : 4) + v4); // 0x336211
    int64_t v9; // 0x3361df
    int32_t v10 = *(int32_t *)&v9; // 0x336212
    int64_t v11 = v9;
    *(int32_t *)v11 = v10 + (int32_t)(v6 > (int32_t)v3) - (int32_t)v11;
    return v8 & -256 | (int64_t)*(char *)(v9 + v8 % 256);
}

// Address range: 0x56c0f5 - 0x56c0fd
int64_t function_56c0f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56c0f5
    return function_56c068();
}

// Address range: 0x56c0fd - 0x56c4f4
int64_t function_56c0fd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x56c0fd
    __stack_chk_fail();
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x56c132
    *v1 = 0;
    int64_t v2 = __readfsqword(40); // 0x56c142
    function_4f5b50();
    int64_t v3 = 1; // 0x56c15c
    int64_t v4 = a2; // 0x56c15c
    int32_t v5; // 0x56c0fd
    int64_t v6; // 0x56c0fd
    int64_t v7; // 0x56c0fd
    int64_t v8; // 0x56c0fd
    int64_t v9; // 0x56c0fd
    int64_t v10; // 0x56c0fd
    int64_t v11; // 0x56c0fd
    int64_t v12; // 0x56c0fd
    int64_t v13; // 0x56c0fd
    int64_t v14; // 0x56c0fd
    int64_t v15; // 0x56c0fd
    int64_t v16; // 0x56c0fd
    int64_t v17; // 0x56c0fd
    int64_t v18; // 0x56c0fd
    int64_t v19; // 0x56c0fd
    int64_t v20; // 0x56c0fd
    int64_t v21; // 0x56c0fd
    int64_t v22; // 0x56c0fd
    int64_t v23; // 0x56c0fd
    int64_t v24; // 0x56c0fd
    int64_t v25; // 0x56c0fd
    int64_t v26; // 0x56c0fd
    int64_t v27; // 0x56c0fd
    int64_t v28; // 0x56c0fd
    int64_t v29; // 0x56c0fd
    int64_t v30; // 0x56c0fd
    int64_t v31; // 0x56c0fd
    int64_t v32; // 0x56c0fd
    int64_t v33; // 0x56c0fd
    char v34; // 0x56c0fd
    uint64_t v35; // 0x56c166
    int64_t * v36; // 0x56c0fd
    int64_t * str; // 0x56c1f4
    int64_t * v37; // 0x56c17a
    int64_t * v38; // 0x56c17e
    if (v34 == 0) {
        goto lab_0x56c278;
    } else {
        // 0x56c162
        char v39; // bp-65, 0x56c0fd
        int64_t v40 = *(int64_t *)((int64_t)&v39 - 24); // 0x56c16e
        int64_t v41 = *(int64_t *)(a1 + 232 + v40); // 0x56c172
        v37 = (int64_t *)(v41 + 16);
        uint64_t v42 = *v37; // 0x56c17a
        v38 = (int64_t *)(v41 + 24);
        int64_t v43; // 0x56c0fd
        if (v42 >= *v38) {
            // 0x56c370
            v43 = *(int64_t *)v41;
        } else {
            // 0x56c188
            v43 = (int64_t)*(char *)v42;
        }
        // 0x56c18b
        v35 = a4 % 256;
        int64_t v44 = *v1;
        int64_t v45 = v44 + 1; // 0x56c197
        v26 = v43;
        v32 = v45;
        v15 = a2;
        v19 = v44;
        if (v45 < a3) {
            // 0x56c1a4
            v36 = (int64_t *)v41;
            v6 = v45;
            v16 = v44;
            v9 = a2;
            v23 = v43;
            int64_t v46; // 0x56c0fd
            int64_t v47; // 0x56c0fd
            int64_t v48; // 0x56c0fd
            while (true) {
              lab_0x56c1a4_2:
                // 0x56c1a4
                v25 = v23;
                v29 = v6;
                v13 = v9;
                v17 = v16;
                int64_t v49; // 0x56c0fd
                while (true) {
                  lab_0x56c1a4:;
                    int64_t v50 = v17;
                    v14 = v13;
                    v49 = v25;
                    int32_t v51 = v49; // 0x56c1a4
                    if (v51 == -1) {
                        // break (via goto) -> 0x56c395
                        goto lab_0x56c395;
                    }
                    int64_t v52 = *v38; // 0x56c1b1
                    int64_t v53 = *v37; // 0x56c1b5
                    v31 = v29;
                    v8 = v52;
                    v12 = v14;
                    v22 = v53;
                    if ((int32_t)v35 == v51) {
                        goto lab_0x56c3c8;
                    }
                    int64_t v54 = v52 - v53; // 0x56c1c8
                    int64_t v55 = -1 - v50 + a3; // 0x56c1cb
                    int64_t v56 = v55 - v54; // 0x56c1cf
                    int64_t v57 = v56 < 0 == ((v56 ^ v55) & (v54 ^ v55)) < 0 == (v56 != 0) ? v54 : v55; // 0x56c1d2
                    if (v57 < 2) {
                        // break -> 0x56c300
                        break;
                    }
                    // 0x56c1e0
                    str = (int64_t *)v53;
                    int32_t n = v57;
                    int64_t * found_byte_pos = memchr(str, (int32_t)(0x100000000000000 * a4 / 0x100000000000000), n); // 0x56c1f4
                    v5 = n;
                    v28 = v57;
                    if (found_byte_pos == NULL) {
                        goto lab_0x56c2d0;
                    } else {
                        int64_t v58 = (int64_t)found_byte_pos - v53; // 0x56c207
                        v27 = v58;
                        v7 = v52;
                        v18 = v50;
                        v21 = v53;
                        if (v58 != 0) {
                            // 0x56c207
                            v5 = v58;
                            v28 = v58;
                            goto lab_0x56c2d0;
                        } else {
                            goto lab_0x56c218;
                        }
                    }
                }
                // 0x56c300
                *(char *)v14 = (char)v49;
                uint64_t v59 = *v37; // 0x56c304
                int64_t v60 = v14 + 1; // 0x56c308
                int64_t v61 = *v38; // 0x56c30d
                int64_t v62 = *v1 + 1; // 0x56c311
                *v1 = v62;
                int64_t v63; // 0x56c0fd
                int64_t v64; // 0x56c0fd
                if (v59 >= v61) {
                    // 0x56c380
                    v46 = v62;
                    v48 = v61;
                    v47 = v60;
                    if ((int32_t)*v36 == -1) {
                        // break -> 0x56c395
                        break;
                    }
                    // 0x56c460
                    v63 = *v37;
                    v64 = *v38;
                } else {
                    int64_t v65 = v59 + 1; // 0x56c31e
                    *v37 = v65;
                    v63 = v65;
                    v64 = v61;
                }
                uint64_t v66 = v63;
                if (v66 >= v64) {
                    // 0x56c400
                    v24 = *v36;
                    v10 = v60;
                } else {
                    // 0x56c32f
                    v24 = (int64_t)*(char *)v66;
                    v10 = v60;
                }
                goto lab_0x56c197;
            }
          lab_0x56c395:
            // 0x56c395
            v30 = v48;
            v11 = v47;
            v20 = v46;
            v33 = 2;
            if (a3 >= 1) {
                // 0x56c39a
                *(char *)v47 = 0;
                v30 = v48;
                v11 = v47;
                v20 = *v1;
                v33 = 2;
            }
            goto lab_0x56c3a8;
        } else {
            goto lab_0x56c243_2;
        }
    }
  lab_0x56c358:;
    // 0x56c358
    int64_t v67; // 0x56c0fd
    int64_t v68 = *(int64_t *)(v67 + 8); // 0x56c358
    int64_t v69 = v67; // 0x56c358
    int64_t v70; // 0x56c0fd
    int64_t v71 = v70; // 0x56c358
    goto lab_0x56c35c;
  lab_0x56c292:;
    // 0x56c292
    int64_t v73; // 0x56c0fd
    int64_t v94 = v73;
    int64_t v95 = *(int64_t *)(*(int64_t *)v94 - 24) + v94; // 0x56c29a
    int64_t v74; // 0x56c0fd
    function_4fc010(v95, *(int32_t *)(v95 + 32) | (int32_t)v74);
    int64_t v72; // 0x56c0fd
    int64_t v76 = v72; // 0x56c2a0
    int64_t v75; // 0x56c0fd
    int64_t v77 = v75; // 0x56c2a0
    goto lab_0x56c2a5;
  lab_0x56c243_2:;
    int32_t v96 = v26; // 0x56c243
    int64_t v97; // 0x56c0fd
    int64_t v98; // 0x56c0fd
    if (v96 == -1) {
        // 0x56c415
        int64_t v99; // 0x56c0fd
        v30 = v99;
        int64_t v100; // 0x56c0fd
        v11 = v100;
        int64_t v101; // 0x56c0fd
        v20 = v101;
        v33 = 2;
        if (a3 < 1) {
            goto lab_0x56c3a8;
        } else {
            // 0x56c41a
            *(char *)v100 = 0;
            int64_t v102 = *v1; // 0x56c41f
            int64_t v103 = v102 == 0 ? 6 : 2; // 0x56c429
            v72 = v99;
            v73 = a1;
            v74 = v103;
            v75 = v100;
            goto lab_0x56c292;
        }
    } else {
        if ((int32_t)v35 == v96) {
            // 0x56c3b9
            v31 = v32;
            v8 = *v38;
            v12 = v15;
            v22 = *v37;
          lab_0x56c3c8:;
            uint64_t v104 = v22;
            int64_t v105 = v12;
            int64_t v106 = v31;
            *v1 = v106;
            v3 = v106;
            v4 = v105;
            if (v8 > v104) {
                // 0x56c3d5
                *v37 = v104 + 1;
                v98 = v106;
                v97 = v105;
                v68 = v106;
                v69 = a1;
                v71 = v105;
                if (a3 >= 0 == (a3 != 0)) {
                    goto lab_0x56c281;
                } else {
                    goto lab_0x56c35c;
                }
            } else {
                goto lab_0x56c278;
            }
        } else {
            // 0x56c256
            v30 = v32;
            v11 = v15;
            v20 = v19;
            v33 = 4;
            if (a3 < 1) {
                goto lab_0x56c3a8;
            } else {
                // 0x56c25f
                *(char *)v15 = 0;
                v72 = v32;
                v73 = a1;
                v74 = 4;
                v75 = v15;
                goto lab_0x56c292;
            }
        }
    }
  lab_0x56c2d0:
    // 0x56c2d0
    memcpy((int64_t *)v14, str, v5);
    v27 = v28;
    v7 = *v38;
    v18 = *v1;
    v21 = *v37;
    goto lab_0x56c218;
  lab_0x56c218:;
    uint64_t v107 = v21 + v27; // 0x56c218
    int64_t v108 = v18 + v27; // 0x56c21c
    int64_t v109 = v27 + v14; // 0x56c21f
    *v37 = v107;
    *v1 = v108;
    if (v107 >= v7) {
        // 0x56c340
        v24 = *v36;
        v10 = v109;
        goto lab_0x56c197;
    }
    int64_t v110 = v108 + 1; // 0x56c233
    int64_t v111 = (int64_t)*(char *)v107; // 0x56c237
    v25 = v111;
    v29 = v110;
    v13 = v109;
    v17 = v108;
    v26 = v111;
    v32 = v110;
    v15 = v109;
    v19 = v108;
    if (v110 >= a3) {
        goto lab_0x56c243_2;
    }
    goto lab_0x56c1a4;
  lab_0x56c197:;
    int64_t v112 = *v1;
    int64_t v113 = v112 + 1; // 0x56c197
    v6 = v113;
    v16 = v112;
    v9 = v10;
    v23 = v24;
    v26 = v24;
    v32 = v113;
    v15 = v10;
    v19 = v112;
    if (v113 >= a3) {
        goto lab_0x56c243_2;
    }
    goto lab_0x56c1a4_2;
  lab_0x56c278:
    // 0x56c278
    v98 = v3;
    v97 = v4;
    v67 = a1;
    v70 = v4;
    if (a3 < 1) {
        goto lab_0x56c358;
    } else {
        goto lab_0x56c281;
    }
  lab_0x56c281:
    // 0x56c281
    *(char *)v97 = 0;
    v72 = v98;
    v73 = a1;
    v74 = 4;
    v75 = v97;
    v76 = v98;
    v77 = v97;
    if (*v1 != 0) {
        goto lab_0x56c2a5;
    } else {
        goto lab_0x56c292;
    }
  lab_0x56c35c:
    // 0x56c35c
    v72 = v68;
    v73 = v69;
    v74 = 4;
    v75 = v71;
    v76 = v68;
    v77 = v71;
    if (v68 != 0) {
        goto lab_0x56c2a5;
    } else {
        goto lab_0x56c292;
    }
  lab_0x56c2a5:;
    int64_t v78 = v77;
    char * v79 = (char *)v78;
    int64_t v80 = v76; // 0x56c0fd
    while (v2 != __readfsqword(40)) {
        // 0x56c431
        __stack_chk_fail();
        int64_t v81 = v80 - 1; // 0x56c439
        int64_t v82; // 0x56c0fd
        while (v81 == 0) {
            // 0x56c442
            int64_t v83; // 0x56c0fd
            function_1fd40(v83);
            int64_t v84; // 0x56c0fd
            int64_t v85 = *(int64_t *)(*(int64_t *)v84 - 24) + v84; // 0x56c44b
            int32_t * v86 = (int32_t *)(v85 + 32); // 0x56c44f
            *v86 = *v86 | 1;
            int64_t v87 = function_20a50(); // 0x56c457
            int64_t v88 = v81; // 0x56c457
            v82 = v85;
            if (*(char *)(v85 + 28) % 2 == 0) {
                // break -> 0x56c486
                break;
            }
            v84 = v85;
            v83 = v87;
            v81 = v88 - 1;
        }
        int64_t v89 = v82;
        function_1fd40((int64_t)&g3);
        int64_t v90 = *(int64_t *)(*(int64_t *)v89 - 24) + v89; // 0x56c493
        int32_t * v91 = (int32_t *)(v90 + 32); // 0x56c496
        *v91 = *v91 | 1;
        if (*(char *)(v90 + 28) % 2 != 0) {
            int64_t v92 = function_20a50(); // 0x56c4c2
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v92);
            return (int64_t)&g3;
        }
        // 0x56c4a0
        function_20540();
        v67 = v89;
        v70 = v78;
        if (a3 < 1) {
            goto lab_0x56c358;
        }
        // 0x56c4ae
        *v79 = 0;
        v72 = v81;
        v73 = v89;
        v74 = 4;
        v75 = v78;
        v80 = v81;
        if (*(int64_t *)(v89 + 8) == 0) {
            goto lab_0x56c292;
        }
    }
    // 0x56c2bc
    int64_t result; // 0x56c0fd
    return result;
  lab_0x56c3a8:;
    int64_t v93 = v33;
    v72 = v30;
    v73 = a1;
    v74 = v20 != 0 ? v93 : v93 | 4;
    v75 = v11;
    goto lab_0x56c292;
}

// Address range: 0x56c6f5 - 0x56c712
int64_t function_56c6f5(void) {
    // 0x56c6f5
    int64_t v1; // 0x56c6f5
    int64_t v2 = v1;
    *(int32_t *)(v2 + 8) = (int32_t)v1;
    int64_t v3 = *(int64_t *)(v2 - 24) + v2; // 0x56c6ff
    function_4fc010(v3, *(int32_t *)(v3 + 32) | 2);
    return function_56c6b3();
}

// Address range: 0x56c718 - 0x56c71f
int64_t function_56c718(void) {
    // 0x56c718
    function_5790b0();
    return function_56c6b3();
}

// Address range: 0x56c720 - 0x56c7f7
int64_t function_56c720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    // 0x56c720
    int64_t v1; // 0x56c720
    *(int64_t *)(v1 + 8) = a4 + 1;
    int64_t v2; // 0x56c720
    int64_t v3; // 0x56c720
    int64_t v4; // 0x56c720
    if (v1 > a6) {
        int64_t v5 = a6 + 1; // 0x56c731
        *(int64_t *)(v1 + 16) = v5;
        v3 = v5;
        v4 = a1;
    } else {
        if ((int32_t)v1 == -1) {
            function_56c6e0();
        }
        // 0x56c7ea
        v3 = *(int64_t *)(v1 + 16);
        v2 = *(int64_t *)(v1 + 24);
    }
    // 0x56c739
    if (v2 > v3) {
        // 0x56c73e
        return function_56c580(v4);
    }
    // 0x56c7b0
    return function_56c580(v1);
}

// Address range: 0x56c800 - 0x56c80f
int64_t function_56c800(void) {
    // 0x56c800
    int64_t v1; // 0x56c800
    return function_56c6b0(v1);
}

// Address range: 0x56c80f - 0x56c822
int64_t function_56c80f(void) {
    // 0x56c80f
    __stack_chk_fail();
    return (int64_t)&g3;
}

// Address range: 0x56c822 - 0x56cf54
int64_t function_56c822(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x56c822
    int64_t v1; // 0x56c822
    int64_t v2 = v1;
    int64_t v3; // 0x56c822
    if (a3 == 1) {
        // 0x56c82b
        function_1fd40(v1);
        int64_t v4 = *(int64_t *)(v2 - 24) + v2; // 0x56c833
        int32_t * v5 = (int32_t *)(v4 + 32); // 0x56c837
        *v5 = *v5 | 1;
        int64_t result = function_20a50(); // 0x56c83f
        v3 = v4;
        if (*(char *)(v4 + 28) % 2 != 0) {
            // 0x56c841
            return result;
        }
    }
    int64_t v6 = v3;
    function_1fd40(v1);
    int64_t v7 = *(int64_t *)(*(int64_t *)v6 - 24) + v6; // 0x56c875
    int32_t * v8 = (int32_t *)(v7 + 32); // 0x56c878
    *v8 = *v8 | 1;
    if (*(char *)(v7 + 28) % 2 == 0) {
        // 0x56c882
        function_20540();
        return function_56c6b3();
    }
    int64_t result2 = function_20a50(); // 0x56c88f
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)result2);
    int64_t v9 = __readfsqword(40); // 0x56c8ce
    function_4f5b50();
    int64_t * v10 = (int64_t *)result2; // 0x56c8e8
    int64_t v11 = *v10; // 0x56c8e8
    int64_t v12 = v11; // 0x56c8ec
    int64_t v13; // 0x56c822
    int64_t v14; // 0x56c822
    int64_t v15; // 0x56c822
    int64_t v16; // 0x56c822
    int64_t v17; // 0x56c822
    int64_t v18; // 0x56c822
    int64_t v19; // 0x56c822
    char v20; // 0x56c822
    if (v20 == 0) {
        goto lab_0x56ca40;
    } else {
        int64_t v21 = *(int64_t *)(v11 - 24) + result2; // 0x56c908
        int64_t v22 = *(int64_t *)(v21 + 16); // 0x56c90b
        int64_t v23; // bp-72, 0x56c822
        function_5659d0(&v23, v21 + 208);
        int64_t v24 = function_554b00(&v23); // 0x56c925
        function_566180(&v23);
        int64_t v25 = *(int64_t *)(result2 + 232 + *(int64_t *)(*v10 - 24)); // 0x56c93d
        if (*(int64_t *)(v25 + 24) > *(int64_t *)(v25 + 16)) {
            // branch -> 0x56c956
        }
        int64_t v26 = v22 < 1 ? 0x7fffffffffffffff : v22; // 0x56c912
        v19 = v26 - 1;
        v16 = *(int64_t *)v25;
        v18 = v25;
        v17 = 0;
        v13 = v7;
        v14 = v26;
        v15 = v24;
        goto lab_0x56c960;
    }
  lab_0x56cb0c:;
    // 0x56cb0c
    int64_t v27; // 0x56c822
    *(char *)v27 = 0;
    int64_t v28 = *v10; // 0x56cb1d
    *(int64_t *)(result2 + 16 + *(int64_t *)(v28 - 24)) = 0;
    int64_t v29; // 0x56c822
    int64_t v30 = v29; // 0x56cb31
    int64_t v31 = v27; // 0x56cb31
    int64_t v32 = v28; // 0x56cb31
    int64_t v33; // 0x56c822
    int64_t v34 = v33; // 0x56cb31
    int32_t v35 = v33 == 0 ? 6 : 2; // 0x56cb31
    int64_t v36; // 0x56c822
    int64_t v37 = v36; // 0x56cb31
    int64_t v38; // 0x56c822
    int64_t v39 = v38; // 0x56cb31
    goto lab_0x56ca45;
  lab_0x56ca1c:;
    // 0x56ca1c
    int64_t v94; // 0x56c822
    *(char *)v94 = 0;
    int64_t v122 = *v10; // 0x56ca21
    *(int64_t *)(result2 + 16 + *(int64_t *)(v122 - 24)) = 0;
    int64_t v123 = v29; // 0x56ca35
    int64_t v92; // 0x56c822
    int64_t v124 = v92; // 0x56ca35
    v12 = v122;
    int64_t v93; // 0x56c822
    int64_t v125 = v93; // 0x56ca35
    int64_t v126 = v36; // 0x56ca35
    int64_t v127 = v38; // 0x56ca35
    int64_t v41 = v29; // 0x56ca35
    int64_t v42 = v92; // 0x56ca35
    int64_t v43 = v93; // 0x56ca35
    int64_t v44 = v36; // 0x56ca35
    int64_t v45 = v38; // 0x56ca35
    if (v93 != 0) {
        goto lab_0x56ca54;
    } else {
        goto lab_0x56ca40;
    }
  lab_0x56ca13_2:;
    // 0x56ca13
    int64_t v73; // 0x56c822
    v92 = v73;
    int64_t v75; // 0x56c822
    v93 = v75;
    int64_t v76; // 0x56c822
    v94 = v76;
    v27 = v76;
    v33 = v75;
    int64_t v74; // 0x56c822
    if ((int32_t)v74 == -1) {
        goto lab_0x56cb0c;
    } else {
        goto lab_0x56ca1c;
    }
  lab_0x56ca40:
    // 0x56ca40
    v30 = v123;
    v31 = v124;
    v32 = v12;
    v34 = v125;
    v35 = 4;
    v37 = v126;
    v39 = v127;
    goto lab_0x56ca45;
  lab_0x56ca45:;
    int64_t v40 = *(int64_t *)(v32 - 24) + result2; // 0x56ca49
    function_4fc010(v40, *(int32_t *)(v40 + 32) | v35);
    v41 = v30;
    v42 = v31;
    v43 = v34;
    v44 = v37;
    v45 = v39;
    goto lab_0x56ca54;
  lab_0x56c960:
    // 0x56c960
    v38 = v15;
    v36 = v14;
    int64_t v69 = v13;
    int64_t v70 = v17;
    int64_t v71 = v16;
    int64_t v68; // 0x56c822
    int64_t v72 = v68;
    v29 = v19;
    v73 = v72;
    v74 = v71;
    v75 = v70;
    v76 = v69;
    int64_t v59; // 0x56c822
    int64_t v51; // 0x56c822
    int64_t v60; // 0x56c822
    int64_t v52; // 0x56c822
    int64_t v55; // 0x56c822
    int64_t v50; // 0x56c822
    int64_t v58; // 0x56c822
    int64_t v57; // 0x56c822
    int64_t v49; // 0x56c822
    int64_t v56; // 0x56c822
    int64_t v53; // 0x56c822
    int64_t v47; // 0x56c822
    int64_t v48; // 0x56c822
    int64_t v54; // 0x56c822
    if (v70 < v29) {
        int64_t v77 = v18;
        int64_t * v78 = (int64_t *)(v38 + 48);
        int64_t * v79 = (int64_t *)(v77 + 24);
        int64_t * v80 = (int64_t *)(v77 + 16);
        int64_t * v81 = (int64_t *)v77;
        int64_t v82 = v69; // 0x56c822
        int64_t v83 = v70; // 0x56c822
        int64_t v84 = v71; // 0x56caf0
        int64_t v85 = v72; // 0x56c822
        while (true) {
            int64_t v86 = v85; // 0x56c822
            int64_t v87 = v82;
            int64_t v88 = v83;
            int64_t v89 = v84;
            v27 = v87;
            v33 = v88;
            if ((int32_t)v89 == -1) {
                // break (via goto) -> 0x56cb0c
                goto lab_0x56cb0c;
            }
            int64_t v90 = v86;
            int64_t v91 = *v78 + 1; // 0x56c97a
            v92 = v90;
            v93 = v88;
            v94 = v87;
            if ((*(char *)(v91 + (2 * v89 & 510)) & 32) != 0) {
                goto lab_0x56ca1c;
            }
            int64_t v95 = *v79; // 0x56c986
            int64_t v96 = *v80; // 0x56c98a
            int64_t v97 = v36 + -1 - v88; // 0x56c994
            int64_t v98 = v95 - v96; // 0x56c99b
            int64_t v99 = v97 - v98; // 0x56c99e
            int64_t v100 = v99 < 0 == ((v99 ^ v97) & (v98 ^ v97)) < 0 == (v99 != 0) ? v98 : v97; // 0x56c9a1
            uint64_t v101; // 0x56ca84
            int64_t v102; // 0x56ca88
            uint64_t v103; // 0x56ca8d
            int64_t v104; // 0x56ca91
            int64_t v105; // 0x56ca9f
            if (v100 < 2) {
                // 0x56ca80
                *(char *)v87 = (char)v89;
                v101 = *v80;
                v102 = v87 + 1;
                v103 = *v79;
                v104 = v88 + 1;
                if (v101 >= v103) {
                    // 0x56cafe
                    v27 = v102;
                    v33 = v104;
                    v47 = v29;
                    v48 = v102;
                    v49 = v77;
                    v50 = v104;
                    v51 = v36;
                    v52 = v38;
                    if ((int32_t)*v81 != -1) {
                        goto lab_0x56cb7e;
                    } else {
                        goto lab_0x56cb0c;
                    }
                } else {
                    // 0x56ca9f
                    v105 = v101 + 1;
                    *v80 = v105;
                    v53 = v29;
                    v54 = v102;
                    v55 = v105;
                    v56 = v103;
                    v57 = v77;
                    v58 = v104;
                    v59 = v36;
                    v60 = v38;
                    goto lab_0x56caa7;
                }
            }
            uint64_t v106 = v100 + v96; // 0x56c9af
            int64_t v107 = v96 + 1; // 0x56c9b3
            int64_t v108 = v107; // 0x56c9ba
            int64_t v109; // 0x56c822
            int64_t v110; // 0x56c9db
            if (v106 > v107) {
                // 0x56c9bc
                v109 = v107;
                v108 = v107;
                if ((*(char *)(2 * (int64_t)*(char *)v107 + v91) & 32) == 0) {
                    v110 = v109 + 1;
                    v108 = v110;
                    while (v106 > v110) {
                        // 0x56c9d0
                        v109 = v110;
                        v108 = v110;
                        if ((*(char *)(2 * (int64_t)*(char *)v110 + v91) & 32) != 0) {
                            // break -> 0x56c9e4
                            break;
                        }
                        v110 = v109 + 1;
                        v108 = v110;
                    }
                }
            }
            int64_t v111 = v108 - v96; // 0x56c9e7
            int64_t v112 = v90; // 0x56c9ea
            int64_t v113 = v96; // 0x56c9ea
            int64_t v114 = v95; // 0x56c9ea
            if (v111 != 0) {
                // 0x56cac0
                memcpy((int64_t *)v87, (int64_t *)v96, (int32_t)v111);
                v114 = *v79;
                v113 = *v80;
                v112 = v111;
            }
            int64_t v115 = v112;
            uint64_t v116 = v113 + v111; // 0x56c9f0
            int64_t v117 = v111 + v87; // 0x56c9f3
            int64_t v118 = v111 + v88; // 0x56c9f6
            *v80 = v116;
            while (v116 < v114) {
                int64_t v119 = (int64_t)*(char *)v116; // 0x56ca0a
                v86 = v115;
                int64_t v120 = v118; // 0x56ca0d
                int64_t v121 = v117; // 0x56ca0d
                v73 = v115;
                v74 = v119;
                v75 = v118;
                v76 = v117;
                if (v118 >= v29) {
                    goto lab_0x56ca13_2;
                }
                v87 = v121;
                v88 = v120;
                v89 = v119;
                v27 = v87;
                v33 = v88;
                if ((int32_t)v89 == -1) {
                    // break (via goto) -> 0x56cb0c
                    goto lab_0x56cb0c;
                }
                // 0x56c973
                v90 = v86;
                v91 = *v78 + 1;
                v92 = v90;
                v93 = v88;
                v94 = v87;
                if ((*(char *)(v91 + (2 * v89 & 510)) & 32) != 0) {
                    goto lab_0x56ca1c;
                }
                // 0x56c986
                v95 = *v79;
                v96 = *v80;
                v97 = v36 + -1 - v88;
                v98 = v95 - v96;
                v99 = v97 - v98;
                v100 = v99 < 0 == ((v99 ^ v97) & (v98 ^ v97)) < 0 == (v99 != 0) ? v98 : v97;
                if (v100 < 2) {
                    // 0x56ca80
                    *(char *)v87 = (char)v89;
                    v101 = *v80;
                    v102 = v87 + 1;
                    v103 = *v79;
                    v104 = v88 + 1;
                    if (v101 >= v103) {
                        // 0x56cafe
                        v27 = v102;
                        v33 = v104;
                        v47 = v29;
                        v48 = v102;
                        v49 = v77;
                        v50 = v104;
                        v51 = v36;
                        v52 = v38;
                        if ((int32_t)*v81 != -1) {
                            goto lab_0x56cb7e;
                        } else {
                            goto lab_0x56cb0c;
                        }
                    } else {
                        // 0x56ca9f
                        v105 = v101 + 1;
                        *v80 = v105;
                        v53 = v29;
                        v54 = v102;
                        v55 = v105;
                        v56 = v103;
                        v57 = v77;
                        v58 = v104;
                        v59 = v36;
                        v60 = v38;
                        goto lab_0x56caa7;
                    }
                }
                // 0x56c9af
                v106 = v100 + v96;
                v107 = v96 + 1;
                v108 = v107;
                if (v106 > v107) {
                    // 0x56c9bc
                    v109 = v107;
                    v108 = v107;
                    if ((*(char *)(2 * (int64_t)*(char *)v107 + v91) & 32) == 0) {
                        v110 = v109 + 1;
                        v108 = v110;
                        while (v106 > v110) {
                            // 0x56c9d0
                            v109 = v110;
                            v108 = v110;
                            if ((*(char *)(2 * (int64_t)*(char *)v110 + v91) & 32) != 0) {
                                // break -> 0x56c9e4
                                break;
                            }
                            v110 = v109 + 1;
                            v108 = v110;
                        }
                    }
                }
                // 0x56c9e4
                v111 = v108 - v96;
                v112 = v90;
                v113 = v96;
                v114 = v95;
                if (v111 != 0) {
                    // 0x56cac0
                    memcpy((int64_t *)v87, (int64_t *)v96, (int32_t)v111);
                    v114 = *v79;
                    v113 = *v80;
                    v112 = v111;
                }
                // 0x56c9f0
                v115 = v112;
                v116 = v113 + v111;
                v117 = v111 + v87;
                v118 = v111 + v88;
                *v80 = v116;
            }
            // 0x56caf0
            v84 = *v81;
            v82 = v117;
            v83 = v118;
            v85 = v115;
            v73 = v115;
            v74 = v84;
            v75 = v118;
            v76 = v117;
            if (v118 >= v29) {
                goto lab_0x56ca13_2;
            }
        }
        goto lab_0x56cb0c;
    } else {
        goto lab_0x56ca13_2;
    }
  lab_0x56ca54:;
    int64_t v46 = __readfsqword(40) ^ v9; // 0x56ca59
    if (v46 == 0) {
        // 0x56c841
        return result2;
    }
    // 0x56cb79
    __stack_chk_fail();
    v47 = v41;
    v48 = v42;
    v49 = v46;
    v50 = v43;
    v51 = v44;
    v52 = v45;
    goto lab_0x56cb7e;
  lab_0x56cb7e:
    // 0x56cb7e
    v53 = v47;
    v54 = v48;
    v55 = *(int64_t *)(v49 + 16);
    v56 = *(int64_t *)(v49 + 24);
    v57 = v49;
    v58 = v50;
    v59 = v51;
    v60 = v52;
    goto lab_0x56caa7;
  lab_0x56caa7:;
    int64_t v61 = v60;
    int64_t v62 = v59;
    int64_t v63 = v58;
    int64_t v64 = v57;
    uint64_t v65 = v55;
    int64_t v66 = v54;
    int64_t v67 = v53;
    if (v56 > v65) {
        // 0x56cab0
        v19 = v67;
        v68 = v66;
        v16 = (int64_t)*(char *)v65;
        v18 = v64;
        v17 = v63;
        v13 = v66;
        v14 = v62;
        v15 = v61;
    } else {
        // 0x56cb36
        v19 = v67;
        v68 = v66;
        v16 = *(int64_t *)v64;
        v18 = v64;
        v17 = v63;
        v13 = v66;
        v14 = v62;
        v15 = v61;
    }
    goto lab_0x56c960;
}

// Address range: 0x56cf54 - 0x56d0f3
int64_t function_56cf54(int64_t a1, int64_t a2, int64_t a3) {
    // 0x56cf54
    int64_t v1; // 0x56cf54
    int64_t v2 = v1;
    int64_t v3 = a3 - 1; // 0x56cf54
    int64_t v4; // 0x56cf54
    if (v3 == 0) {
        // 0x56cf5d
        function_1fd40(v1);
        int64_t v5 = *(int64_t *)(v2 - 24) + v2; // 0x56cf66
        int32_t * v6 = (int32_t *)(v5 + 32); // 0x56cf6a
        *v6 = *v6 | 1;
        function_20a50();
        v4 = v5;
        if (*(char *)(v5 + 28) % 2 != 0) {
            // 0x56cf7d
            return function_56cf54(v1, a2, v3);
        }
    }
    int64_t v7 = v4;
    function_1fd40(v1);
    int64_t v8 = *(int64_t *)(*(int64_t *)v7 - 24) + v7; // 0x56cfa8
    int32_t * v9 = (int32_t *)(v8 + 32); // 0x56cfab
    *v9 = *v9 | 1;
    if (*(char *)(v8 + 28) % 2 == 0) {
        int64_t result = function_20540(); // 0x56cfb5
        *(int32_t *)v1 = 0;
        return result;
    }
    int64_t v10 = function_20a50(); // 0x56cfda
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)v10);
    __readfsqword(40);
    int32_t c = v3; // 0x56d014
    if (c == -1) {
        // 0x56d140
        return 0;
    }
    int64_t * v11 = (int64_t *)(v10 + 8); // 0x56d01d
    *v11 = 0;
    char v12; // bp-65, 0x56cf54
    int64_t result2 = function_4f8cc0((int64_t)&v12, v10, 1); // 0x56d035
    if (a2 < 1 || v12 == 0) {
        // 0x56d140
        return result2;
    }
    int64_t v13 = *(int64_t *)(v10 + 232 + *(int64_t *)(*(int64_t *)v10 - 24)); // 0x56d059
    uint64_t result3 = *(int64_t *)(v13 + 16); // 0x56d061
    uint64_t v14 = *(int64_t *)(v13 + 24); // 0x56d065
    if (v14 <= result3) {
        // 0x56d140
        return result3;
    }
    int32_t * wstr = (int32_t *)result3; // 0x56d06f
    uint32_t result4 = *wstr; // 0x56d06f
    int64_t v15 = *v11; // 0x56d071
    if (result4 == c || result4 == -1 || v15 >= a2) {
        // 0x56d140
        return result4;
    }
    int64_t result5 = a2 - v15; // 0x56d0a6
    int64_t v16 = (v14 - result3) / 4; // 0x56d0af
    int64_t v17 = v16 - result5; // 0x56d0b3
    int64_t n = v17 < 0 == ((v17 ^ v16) & (result5 ^ v16)) < 0 == (v17 != 0) ? result5 : v16; // 0x56d0b6
    if (n < 2) {
        // 0x56d140
        return result5;
    }
    // 0x56d0c4
    return (int64_t)wmemchr(wstr, c, (int32_t)n);
}
