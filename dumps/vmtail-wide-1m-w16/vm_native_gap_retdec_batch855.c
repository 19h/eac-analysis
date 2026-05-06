/*
 * Targeted RetDec C for native executable gap queue batch 855.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3eb096-0x3eb196 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3eb296-0x3eb496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3eb496-0x3eb696 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44b725-0x44b925 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44b925-0x44bb25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44bb25-0x44bd25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44bd25-0x44bf25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44bf25-0x44c125 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2057b9f8();
int64_t function_3eb096(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3eb0f9(void);
int64_t function_3eb174(void);
int64_t function_3eb180(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3eb28a();
int64_t function_3eb296(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3eb366(int64_t a1);
int64_t function_3eb374(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3eb4bf(void);
int64_t function_3eb4c9(int64_t a1);
int64_t function_3eb4d9(void);
int64_t function_3eb552(void);
int64_t function_3eb640(int64_t a1);
int64_t function_3eb643(void);
int64_t function_3eb64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3eb654(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44b725(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44b770(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44b795(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44b7d2(void);
int64_t function_44b873(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44b8c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44b92e(void);
int64_t function_44b93f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44b9e3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44ba1c(void);
int64_t function_44ba3c(void);
int64_t function_44baa6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44bab4(void);
int64_t function_44bacd(void);
int64_t function_44bb90(void);
int64_t function_44bbca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_44bd3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44bd5e(void);
int64_t function_44bd78(void);
int64_t function_44bd7c(int64_t a1);
int64_t function_44bd87(void);
int64_t function_44bd97(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44bddd(int64_t a1);
int64_t function_44bde5(int64_t a1);
int64_t function_44bead(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44bf34(int64_t a1);
int64_t function_44bf3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44bf65(int64_t a1);
int64_t function_44bfa5(void);
int64_t function_44bfcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44c014(void);
int64_t function_44c07c(int64_t a1);
int64_t function_44c07e(int64_t a1);
int64_t function_44c0ae(void);
int64_t function_44c0b2(int64_t a1, int64_t a2);
int64_t function_76266da4();
int64_t function_ffffffff83dbb7a3();
int64_t function_ffffffffced50090();
int64_t function_ffffffffd075bff4();
int64_t function_ffffffffe4671102();
int64_t unknown_60ef490();

// Address range: 0x3eb096 - 0x3eb0bb
int64_t function_3eb096(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 101); // 0x3eb096
    *v1 = *v1 - (int32_t)a3;
    int64_t v2; // 0x3eb096
    *(char *)-0x5882b4ef5d77b055 = (char)v2;
    return 0x1bf3a169;
}

// Address range: 0x3eb0f9 - 0x3eb0fb
int64_t function_3eb0f9(void) {
    // 0x3eb0f9
    int64_t result; // 0x3eb0f9
    return result;
}

// Address range: 0x3eb174 - 0x3eb175
int64_t function_3eb174(void) {
    // 0x3eb174
    int64_t result; // 0x3eb174
    return result;
}

// Address range: 0x3eb180 - 0x3eb191
int64_t function_3eb180(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3eb180
    float80_t v1; // 0x3eb180
    *(int16_t *)(a2 + 0x6f0a4f16) = (int16_t)v1;
    __asm_wait();
    int64_t result = __asm_sti(); // 0x3eb18b
    bool v2; // 0x3eb180
    if (v2 || v2) {
        result = function_3eb174();
    }
    // 0x3eb18d
    return result;
}

// Address range: 0x3eb296 - 0x3eb346
int64_t function_3eb296(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x3eb296
    char * v4 = (char *)(v3 + 57); // 0x3eb296
    *v4 = 2 * *v4;
    int32_t * v5 = (int32_t *)(a4 - 113); // 0x3eb29c
    uint32_t v6 = *v5; // 0x3eb29c
    uint32_t v7 = (int32_t)v3; // 0x3eb29c
    int32_t v8 = v6 - v7; // 0x3eb29c
    *v5 = v8;
    int16_t v9 = a3; // 0x3eb29f
    int32_t v10 = *(int32_t *)&v2; // 0x3eb29f
    __asm_outsd(v9, v10);
    bool v11; // 0x3eb296
    bool v12; // 0x3eb296
    bool v13; // 0x3eb296
    int64_t result2; // 0x3eb296
    bool v14; // 0x3eb296
    int64_t v15; // 0x3eb323
    bool v16; // 0x3eb296
    if (v3 < (int64_t)v6) {
        int32_t v17 = v7 + 0x1b7824ce; // 0x3eb2a3
        v11 = v7 > 0xe487db31;
        v13 = llvm_ctpop_i8((char)v17) % 2 == 0;
        v16 = v17 == 0;
        v14 = v17 < 0;
        v12 = false;
        result2 = v17;
        if ((v17 & (v7 ^ -0x80000000)) < 0) {
            int32_t v18 = v7 > 0xe487db31 ? 182 : 181; // 0x3eb2ac
            __asm_outsd(v9, v10);
            uint64_t v19 = v1;
            *(char *)v19 = *(char *)&v1 - (char)(v19 / 256);
            // 0x3eb2bc
            return (int64_t)(0x10000 * ((v17 - v18) % 256 | v17 & 0xff00) / 0x10000);
        }
    } else {
        int64_t v20; // 0x3eb296
        if (v8 >= 0) {
            v20 = function_3eb28a();
        }
        if (v6 < v7 || v8 == 0) {
            uint32_t v21 = (int32_t)a1; // 0x3eb2e7
            int32_t v22 = v6 < v7; // 0x3eb2e7
            uint32_t v23 = (int32_t)v1 + v22; // 0x3eb2e7
            uint32_t v24 = v21 - v23; // 0x3eb2e7
            if (v24 == 0 || (v6 < v7 ? v23 != -1 || v24 - v22 > v21 : v23 > v21)) {
                // 0x3eb2ed
                __asm_out(v9, (int32_t)v3);
                *(char *)(int64_t)v24 = (char)v10;
                int64_t result = a3 & 0xffffffff; // 0x3eb2f2
                *(int32_t *)result = 0;
                return result;
            }
            // 0x3eb323
            v15 = (v3 & 0xffffffff) + 0x9084f75d;
            *(int32_t *)0x5bd13511260b77c = (int32_t)v15;
            return v15 & 0xffffffff;
        }
        char v25 = v20 / 256; // 0x3eb30e
        v11 = (v20 & 256) != 0;
        v13 = (v25 & 4) != 0;
        v16 = (v25 & 64) != 0;
        v14 = v25 < 0;
        v12 = ((v8 ^ v6) & (v6 ^ v7)) < 0;
        result2 = v20;
    }
    // 0x3eb30f
    if (v14 != v12) {
        // 0x3eb2cc
        float80_t v26; // 0x3eb296
        *(int64_t *)a3 = (int64_t)v26;
        return result2;
    }
    // 0x3eb311
    if (v16) {
        // 0x3eb314
        if (v13) {
            // 0x3eb33d
            __asm_out_133(v9, (char)result2);
            return result2;
        }
        // 0x3eb2bc
        return result2;
    }
    unsigned char v27 = (char)v1 % 32; // 0x3eb31d
    if (v27 != 0) {
        char * v28 = (char *)result2; // 0x3eb31d
        unsigned char v29 = *v28; // 0x3eb31d
        *v28 = (char)v11 << 8 - v27 | v29 >> v27 | (char)((int16_t)v29 << (int16_t)(9 - v27));
    }
    __asm_int(92);
    // 0x3eb323
    v15 = a5 + 0x9084f75d;
    *(int32_t *)0x5bd13511260b77c = (int32_t)v15;
    return v15 & 0xffffffff;
}

// Address range: 0x3eb366 - 0x3eb36e
int64_t function_3eb366(int64_t a1) {
    // 0x3eb366
    int64_t v1; // 0x3eb366
    uint32_t v2 = (int32_t)v1;
    *(int32_t *)a1 = v2 / 2 | 0x80000000 * v2;
    return v1 & 0x87c9ba1;
}

// Address range: 0x3eb374 - 0x3eb44b
int64_t function_3eb374(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    uint32_t v1 = (int32_t)a3; // 0x3eb374
    uint32_t v2 = 2 * v1; // 0x3eb374
    bool v3; // 0x3eb374
    uint32_t v4 = v2 | (int32_t)v3; // 0x3eb374
    int32_t * v5 = (int32_t *)a1;
    float80_t v6; // 0x3eb374
    *v5 = (int32_t)v6;
    char * v7 = (char *)(a1 + 107); // 0x3eb37a
    char v8 = *v7; // 0x3eb37a
    char v9 = v3 ? v4 <= v1 : v2 < v1; // 0x3eb37a
    char v10 = v9 + (char)(v1 / 128); // 0x3eb37a
    char v11 = v8 - v10; // 0x3eb37a
    *v7 = v11;
    int32_t * v12 = v5; // 0x3eb37d
    int64_t v13; // 0x3eb374
    if (((v11 - v9 ^ v8) & (v10 ^ v8)) < 0) {
        int64_t v14; // 0x3eb374
        if (a4 != 1 && v11 != 0) {
            char * v15 = (char *)(a7 - 0x628496d7); // 0x3eb3ad
            *v15 = *v15 ^ (char)((uint64_t)v14 / 256);
            return 0x10000 * (int32_t)v14 >> 16;
        }
        int64_t result = v14 & -200; // 0x3eb382
        int32_t v16 = v4 + (int32_t)a1; // 0x3eb384
        if (v16 >= 0) {
            // 0x3eb407
            return result;
        }
        int64_t v17 = v16; // 0x3eb384
        *(char *)v17 = (char)result;
        v12 = (int32_t *)((v3 ? -1 : 1) + v17);
        v13 = result;
    }
    int32_t v18 = v13; // 0x3eb392
    *v12 = v18;
    int32_t * v19 = (int32_t *)v13; // 0x3eb393
    *v19 = *v19 & v18;
    return __asm_wait();
}

// Address range: 0x3eb4bf - 0x3eb4c9
int64_t function_3eb4bf(void) {
    // 0x3eb4bf
    int64_t v1; // 0x3eb4bf
    return v1 & 0xffffffff ^ 0x14895c64;
}

// Address range: 0x3eb4c9 - 0x3eb4ca
int64_t function_3eb4c9(int64_t a1) {
    // 0x3eb4c9
    int64_t result; // 0x3eb4c9
    return result;
}

// Address range: 0x3eb4d9 - 0x3eb4de
int64_t function_3eb4d9(void) {
    // 0x3eb4d9
    return function_ffffffffced50090();
}

// Address range: 0x3eb552 - 0x3eb553
int64_t function_3eb552(void) {
    // 0x3eb552
    int64_t result; // 0x3eb552
    return result;
}

// Address range: 0x3eb640 - 0x3eb643
int64_t function_3eb640(int64_t a1) {
    // 0x3eb640
    int64_t result; // 0x3eb640
    return result;
}

// Address range: 0x3eb643 - 0x3eb64c
int64_t function_3eb643(void) {
    // 0x3eb643
    __asm_hlt();
    int64_t v1; // 0x3eb643
    return function_3eb654(v1, v1, v1, v1);
}

// Address range: 0x3eb64c - 0x3eb654
int64_t function_3eb64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3eb64c
    int64_t result; // 0x3eb64c
    return result;
}

// Address range: 0x3eb654 - 0x3eb66b
int64_t function_3eb654(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3eb654
    int64_t result; // 0x3eb654
    int32_t * v1 = (int32_t *)(result + 0x2444515c); // 0x3eb654
    bool v2; // 0x3eb654
    *v1 = *v1 / 2 | 0x80000000 * (int32_t)v2;
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x44b725 - 0x44b727
int64_t function_44b725(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44b725
    int64_t result; // 0x44b725
    return result;
}

// Address range: 0x44b770 - 0x44b777
int64_t function_44b770(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44b770
    return function_ffffffff83dbb7a3();
}

// Address range: 0x44b795 - 0x44b79c
int64_t function_44b795(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44b795
    int64_t result; // 0x44b795
    return result;
}

// Address range: 0x44b7d2 - 0x44b7d3
int64_t function_44b7d2(void) {
    // 0x44b7d2
    int64_t result; // 0x44b7d2
    return result;
}

// Address range: 0x44b873 - 0x44b87b
int64_t function_44b873(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44b873
    return function_76266da4();
}

// Address range: 0x44b8c1 - 0x44b8cc
int64_t function_44b8c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44b8c1
    int64_t result; // 0x44b8c1
    int32_t * v1 = (int32_t *)(result - 0x42236c95); // 0x44b8c1
    *v1 = *v1 ^ (int32_t)a3;
    return result;
}

// Address range: 0x44b92e - 0x44b936
int64_t function_44b92e(void) {
    // 0x44b92e
    int64_t result; // 0x44b92e
    return result;
}

// Address range: 0x44b93f - 0x44b942
int64_t function_44b93f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44b93f
    int64_t result; // 0x44b93f
    return result;
}

// Address range: 0x44b9e3 - 0x44b9f1
int64_t function_44b9e3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44b9e3
    return function_ffffffffe4671102();
}

// Address range: 0x44ba1c - 0x44ba1d
int64_t function_44ba1c(void) {
    // 0x44ba1c
    int64_t result; // 0x44ba1c
    return result;
}

// Address range: 0x44ba3c - 0x44ba40
int64_t function_44ba3c(void) {
    // 0x44ba3c
    bool v1; // 0x44ba3c
    if (!v1) {
        function_44ba1c();
    }
    // 0x44ba3e
    return function_44bab4();
}

// Address range: 0x44baa6 - 0x44bab4
int64_t function_44baa6(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t result = unknown_60ef490(a1, a2, a3); // 0x44baad
    int64_t v1; // 0x44baa6
    *(char *)a3 = (char)(result / 256 ^ v1);
    return result;
}

// Address range: 0x44bab4 - 0x44bac6
int64_t function_44bab4(void) {
    // 0x44bab4
    int64_t v1; // 0x44bab4
    *(int64_t *)((v1 & 0xdcb67fa8) - 8) = -0x58efc839;
    int64_t v2; // 0x44bab4
    return (int64_t)&v2 + 0xd7410d2d & 0xfffffffd;
}

// Address range: 0x44bacd - 0x44bace
int64_t function_44bacd(void) {
    // 0x44bacd
    int64_t result; // 0x44bacd
    return result;
}

// Address range: 0x44bb90 - 0x44bb91
int64_t function_44bb90(void) {
    // 0x44bb90
    int64_t result; // 0x44bb90
    return result;
}

// Address range: 0x44bbca - 0x44bcc3
int64_t function_44bbca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x44bbca
    if (llvm_ctpop_i8((char)((int32_t)v2 < 0x88d8b551)) % 2 != 0) {
        // 0x44bbdd
        return function_44bb90();
    }
    unsigned char v3 = *(char *)0x4c7ccbd05861070e; // 0x44bbcf
    int64_t v4 = v2 & -256; // 0x44bbcf
    uint32_t v5 = (int32_t)a1; // 0x44bbd9
    int32_t v6 = (int32_t)v2 < 0x88d8b551; // 0x44bbd9
    uint32_t v7 = v6 + v5; // 0x44bbd9
    uint32_t v8 = (int32_t)((int32_t)v2 < 0x88d8b551); // 0x44bbd9
    if ((int32_t)v2 < 0x88d8b551 ? v8 - v6 > v5 | v7 != -1 : v7 > v5) {
        char * v9 = (char *)(v2 - 65); // 0x44bc10
        char v10 = *v9 & (char)(a3 / 256); // 0x44bc10
        *v9 = v10;
        if (v10 >= 0) {
            // 0x44bc3f
            return v4 | (int64_t)(v3 - 63);
        }
        // 0x44bc15
        return (int64_t)&v1;
    }
    int64_t v11 = v4 | (int64_t)v3; // 0x44bc79
    if (v7 <= v5) {
        char * v12 = (char *)(a3 - 47); // 0x44bc7c
        *v12 = *v12 - (char)a4;
        *(char *)(int64_t)v8 = __asm_insb((int16_t)a3);
        int64_t v13 = __asm_iretd(); // 0x44bc8c
        int64_t v14; // 0x44bbca
        char v15 = *(char *)&v14; // 0x44bc9d
        __asm_outsb((int16_t)v13 % 256 | (int16_t)&g1, v15);
        __asm_int(88);
        v11 = __asm_iretd();
    }
    int32_t * v16 = (int32_t *)v11; // 0x44bcad
    *v16 = *v16 & (int32_t)v11;
    int64_t v17 = (v11 & 0xffffff00 | (int64_t)__asm_in_134(17)) + 0x8a52b4cc; // 0x44bcb4
    char v18 = *(char *)(v17 & 0xffffffff); // 0x44bcb9
    return v17 & 0xffff0000 | (int64_t)((256 * (int16_t)v17 >> 8) * (int16_t)v18);
}

// Address range: 0x44bd3d - 0x44bd43
int64_t function_44bd3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x44bd3d
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a4 + 2); // 0x44bd3d
        *v2 = *v2 >> v1;
    }
    int64_t result; // 0x44bd3d
    return result;
}

// Address range: 0x44bd5e - 0x44bd65
int64_t function_44bd5e(void) {
    // 0x44bd5e
    return function_ffffffffd075bff4();
}

// Address range: 0x44bd78 - 0x44bd7a
int64_t function_44bd78(void) {
    // 0x44bd78
    int64_t result; // 0x44bd78
    return result;
}

// Address range: 0x44bd7c - 0x44bd7d
int64_t function_44bd7c(int64_t a1) {
    // 0x44bd7c
    int64_t result; // 0x44bd7c
    return result;
}

// Address range: 0x44bd87 - 0x44bd8d
int64_t function_44bd87(void) {
    // 0x44bd87
    int64_t result; // 0x44bd87
    return result;
}

// Address range: 0x44bd97 - 0x44bda8
int64_t function_44bd97(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44bd97
    int64_t v1; // 0x44bd97
    char * v2 = (char *)(v1 - 120); // 0x44bd97
    bool v3; // 0x44bd97
    *v2 = *v2 + (char)a3 + (char)v3;
    return __asm_iretd();
}

// Address range: 0x44bddd - 0x44bde0
int64_t function_44bddd(int64_t a1) {
    // 0x44bddd
    int64_t result; // 0x44bddd
    return result;
}

// Address range: 0x44bde5 - 0x44bde8
int64_t function_44bde5(int64_t a1) {
    // 0x44bde5
    int64_t result; // 0x44bde5
    return result;
}

// Address range: 0x44bead - 0x44bec9
int64_t function_44bead(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44bead
    int64_t v1; // 0x44bead
    uint64_t v2 = v1;
    *(int32_t *)a2 = (int32_t)(v1 ^ a3);
    int16_t v3 = a3; // 0x44beb4
    __asm_out_133(v3, (char)v2);
    int64_t v4; // 0x44bead
    char v5 = *(char *)&v4; // 0x44beb5
    *(char *)a1 = __asm_insb(v3);
    __asm_int(95);
    __asm_fldenv(*(int224_t *)(v1 + 2 * a1));
    int32_t * v6 = (int32_t *)(a3 + 8); // 0x44bebf
    uint32_t v7 = *v6; // 0x44bebf
    uint32_t v8 = v7 + (int32_t)v1; // 0x44bebf
    *v6 = v8;
    int64_t v9 = v8 < v7 ? 0x5de286ee : 0x5de286ed; // 0x44bec2
    return (256 * (int64_t)(v5 + (char)(v2 / 256)) | v2 & 0xffff00ff) - v9 & 0xffffffff;
}

// Address range: 0x44bf34 - 0x44bf37
int64_t function_44bf34(int64_t a1) {
    // 0x44bf34
    int64_t result; // 0x44bf34
    return result;
}

// Address range: 0x44bf3f - 0x44bf57
int64_t function_44bf3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44bf3f
    float80_t v1; // 0x44bf3f
    *(float32_t *)(a3 - 103) = (float32_t)v1;
    int64_t v2; // 0x44bf3f
    int64_t v3 = v2 + 62 & 52 | 203; // 0x44bf45
    __asm_out_135(-120, (char)v3);
    return v3 | v2 & -256;
}

// Address range: 0x44bf65 - 0x44bf66
int64_t function_44bf65(int64_t a1) {
    // 0x44bf65
    int64_t result; // 0x44bf65
    return result;
}

// Address range: 0x44bfa5 - 0x44bfa6
int64_t function_44bfa5(void) {
    // 0x44bfa5
    int64_t result; // 0x44bfa5
    return result;
}

// Address range: 0x44bfcf - 0x44bfd7
int64_t function_44bfcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44bfcf
    return function_2057b9f8();
}

// Address range: 0x44c014 - 0x44c01a
int64_t function_44c014(void) {
    // 0x44c014
    int64_t result; // 0x44c014
    return result;
}

// Address range: 0x44c07c - 0x44c07d
int64_t function_44c07c(int64_t a1) {
    // 0x44c07c
    int64_t result; // 0x44c07c
    return result;
}

// Address range: 0x44c07e - 0x44c07f
int64_t function_44c07e(int64_t a1) {
    // 0x44c07e
    int64_t result; // 0x44c07e
    return result;
}

// Address range: 0x44c0ae - 0x44c0b1
int64_t function_44c0ae(void) {
    // 0x44c0ae
    int64_t result; // 0x44c0ae
    return result;
}

// Address range: 0x44c0b2 - 0x44c0f2
int64_t function_44c0b2(int64_t a1, int64_t a2) {
    // 0x44c0b2
    int64_t result2; // 0x44c0b2
    bool v1; // 0x44c0b2
    if (v1) {
        int32_t * v2 = (int32_t *)(a2 + 0x33c204b4); // 0x44c0d4
        uint32_t v3 = *v2; // 0x44c0d4
        uint32_t v4 = v3 + (int32_t)result2; // 0x44c0d4
        *v2 = v4;
        int32_t result = __asm_in_136(60); // 0x44c0df
        int32_t v5 = *(int32_t *)0x5c77e34c; // 0x44c0e2
        *(int32_t *)0x5c77e34c = v5 + (int32_t)result2 + (int32_t)(v4 < v3);
        return result;
    }
    // 0x44c0b4
    return result2;
}
