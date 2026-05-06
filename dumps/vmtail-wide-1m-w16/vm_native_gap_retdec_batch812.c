/*
 * Targeted RetDec C for native executable gap queue batch 812.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1368a4-0x1369a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1369a4-0x136ba4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x136ba4-0x136da4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2808ee-0x280aee rank=- name=- kind=- bytes=- uncovered=-
 *   0x280aee-0x280cee rank=- name=- kind=- bytes=- uncovered=-
 *   0x280cee-0x280eee rank=- name=- kind=- bytes=- uncovered=-
 *   0x280eee-0x2810ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2810ee-0x2812ee rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_136852();
int64_t function_1368a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1369b6(int64_t a1);
int64_t function_136af0(void);
int64_t function_136af7(void);
int64_t function_136aff(void);
int64_t function_136b14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_136bc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_136bce(int64_t a1);
int64_t function_136c55(void);
int64_t function_136c76(void);
int64_t function_136c99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_136d31(void);
int64_t function_2808ee(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_28092c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2809fc(int64_t a1);
int64_t function_280a72(void);
int64_t function_280a9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_280b8a(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_280ba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_280beb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_280c29(void);
int64_t function_280c86(void);
int64_t function_280c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_280cd0(void);
int64_t function_280d84(void);
int64_t function_280db9(void);
int64_t function_280dbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_280e3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_280e53(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_280eb8(void);
int64_t function_280ef4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_280f54(int64_t a1, int64_t a2);
int64_t function_280fb4(void);
int64_t function_280fd3(int64_t a1);
int64_t function_280fde(void);
int64_t function_28102a(void);
int64_t function_281051(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_28108f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2810ef(int64_t a1);
int64_t function_28112e(int64_t a1, int64_t a2);
int64_t function_281138(void);
int64_t function_281172(void);
int64_t function_28119a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2811fa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_281247(void);
int64_t function_28125d(void);
int64_t function_281265(void);
int64_t function_281290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2812cf(void);
int64_t function_333c0710();
int64_t function_3c4772f8();
int64_t function_7e2813();
int64_t function_ffffffffabe3017b();
int64_t function_ffffffffaf2873ee();
int64_t function_ffffffffafb6eb58();
int64_t function_ffffffffc04f3f1a();
int64_t function_fffffffff4f31471();
int64_t unknown_1228b8c6();
int64_t unknown_210092c();
int64_t unknown_283b7aa8();
int64_t unknown_29055afb();
int64_t unknown_2a364760();
int64_t unknown_62c17abe();
int64_t unknown_67ad228();
int64_t unknown_ffffffff881b7d02();
int64_t unknown_ffffffff88330da1();
int64_t unknown_ffffffff969d110f();
int64_t unknown_ffffffff9deda1dc();
int64_t unknown_ffffffffa619374f();
int64_t unknown_ffffffffab4881d9();
int64_t unknown_ffffffffac3765af();
int64_t unknown_ffffffffafc54c1a();
int64_t unknown_ffffffffb3bd52ab();
int64_t unknown_ffffffffb4fdf942();
int64_t unknown_ffffffffb5f03124();
int64_t unknown_ffffffffbb306e6f();
int64_t unknown_ffffffffcb7eb7fa();
int64_t unknown_ffffffffe3a50a05();
int64_t unknown_ffffffffe82adfd6();

// Address range: 0x1368a4 - 0x1368bc
int64_t function_1368a4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1368a4
    int64_t v1; // 0x1368a4
    *(int32_t *)-0xfa89b0ed6fe17c6 = (int32_t)v1;
    *(char *)a3 = (char)v1 ^ 77;
    int32_t v2 = 256 * (int32_t)a2; // 0x1368b8
    return function_136852(v2 + (int32_t)a1, v2);
}

// Address range: 0x1369b6 - 0x1369b7
int64_t function_1369b6(int64_t a1) {
    // 0x1369b6
    int64_t result; // 0x1369b6
    return result;
}

// Address range: 0x136af0 - 0x136af5
int64_t function_136af0(void) {
    // 0x136af0
    return function_ffffffffaf2873ee();
}

// Address range: 0x136af7 - 0x136aff
int64_t function_136af7(void) {
    // 0x136af7
    int64_t v1; // 0x136af7
    int64_t v2 = v1 & v1;
    return (v2 + 59) % 256 | v2 & 0xffffff00;
}

// Address range: 0x136aff - 0x136b10
int64_t function_136aff(void) {
    // 0x136aff
    unknown_ffffffffe3a50a05();
    return __asm_int3();
}

// Address range: 0x136b14 - 0x136b1a
int64_t function_136b14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x136b14
    int64_t v1; // 0x136b14
    uint64_t result = v1 & -256 | (int64_t)__asm_in(0); // 0x136b15
    *(char *)a3 = (char)(result / 256 | v1);
    return result;
}

// Address range: 0x136bc9 - 0x136bce
int64_t function_136bc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x136bc9
    int64_t result; // 0x136bc9
    *(int32_t *)a4 = (int32_t)(result & result);
    return result;
}

// Address range: 0x136bce - 0x136bd1
int64_t function_136bce(int64_t a1) {
    // 0x136bce
    int64_t result; // 0x136bce
    return result;
}

// Address range: 0x136c55 - 0x136c58
int64_t function_136c55(void) {
    // 0x136c55
    int64_t result; // 0x136c55
    return result;
}

// Address range: 0x136c76 - 0x136c7b
int64_t function_136c76(void) {
    // 0x136c76
    return function_3c4772f8();
}

// Address range: 0x136c99 - 0x136d12
int64_t function_136c99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x136c99
    bool v4; // 0x136c99
    if (v4) {
        // 0x136cd7
        *(int64_t *)v3 = a7;
        int32_t * v5 = (int32_t *)(v3 + 0x18015100); // 0x136cdb
        *v5 = *v5 + (int32_t)v3;
        __asm_int3();
        return (int64_t)*(int32_t *)&v2;
    }
    char v6 = v3;
    int64_t v7 = v3 & a4;
    if ((int32_t)v7 == 0) {
        // 0x136cee
        *(char *)v3 = v6 + 1;
        int64_t v8 = unknown_ffffffff881b7d02(); // 0x136cfc
        *(int32_t *)v1 = *(int32_t *)&v1 + ((int32_t)a3 & -256 | 130);
        return v8 + 0x1063ea6d & 0xffffffff;
    }
    int32_t * v9 = (int32_t *)((v7 & 0xffffffff) - 60); // 0x136c9f
    *v9 = *v9 | (int32_t)v3;
    int64_t v10 = unknown_283b7aa8(); // 0x136ca2
    char * v11 = (char *)(v10 + 0x1e8f405); // 0x136ca7
    unsigned char v12 = *v11; // 0x136ca7
    char v13 = v10; // 0x136ca7
    unsigned char v14 = v12 + v13; // 0x136ca7
    *v11 = v14;
    __asm_out(-107, v13);
    char * v15 = (char *)(v3 + 0x504eba2d + v1); // 0x136cb1
    *v15 = (char)(v14 < v12) + v6 + *v15;
    unknown_62c17abe();
    return function_333c0710();
}

// Address range: 0x136d31 - 0x136d32
int64_t function_136d31(void) {
    // 0x136d31
    int64_t result; // 0x136d31
    return result;
}

// Address range: 0x2808ee - 0x280929
int64_t function_2808ee(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x2808ee
    int64_t v1; // 0x2808ee
    char * v2 = (char *)(v1 - 110); // 0x2808ee
    *v2 = *v2 + (char)(a3 / 256);
    char * v3 = (char *)(unknown_29055afb() + 10); // 0x2808fa
    *v3 = *v3 + (char)(a4 / 256);
    unknown_210092c(a1 + 8, a2 + 8);
    int64_t v4; // 0x2808ee
    unsigned char v5 = *(char *)&v4; // 0x28090e
    *(char *)a3 = v5 / 2 | 128 * v5;
    char * v6 = (char *)(v1 + 0x4c01e810); // 0x280910
    *v6 = *v6 | (char)a3;
    int32_t * v7 = (int32_t *)(v1 - 123); // 0x280917
    *v7 = *v7 + (int32_t)v1;
    return unknown_67ad228();
}

// Address range: 0x28092c - 0x28092e
int64_t function_28092c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28092c
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x28092c
    return result;
}

// Address range: 0x2809fc - 0x280a04
int64_t function_2809fc(int64_t a1) {
    // 0x2809fc
    float80_t v1; // 0x2809fc
    *(int16_t *)(a1 - 71) = (int16_t)v1;
    return function_7e2813();
}

// Address range: 0x280a72 - 0x280a73
int64_t function_280a72(void) {
    // 0x280a72
    int64_t result; // 0x280a72
    return result;
}

// Address range: 0x280a9d - 0x280aac
int64_t function_280a9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_wait(); // 0x280a9e
    char * v2 = (char *)(a2 - 43 + 8 * v1); // 0x280a9f
    *v2 = 2 * *v2;
    int64_t result = v1; // 0x280aa7
    if (a4 == 0) {
        result = function_280a72();
    }
    // 0x280aa9
    return result;
}

// Address range: 0x280b8a - 0x280ba5
int64_t function_280b8a(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x280b8a
    int64_t v1; // 0x280b8a
    char * v2 = (char *)(a4 + 4 + 8 * v1); // 0x280b91
    *v2 = *v2 + (char)(a3 / 256);
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x280b97
    uint32_t v4 = *v3; // 0x280b97
    uint32_t v5 = v4 + (int32_t)v1; // 0x280b97
    *v3 = v5;
    uint64_t v6 = v1 + a4 / 256 + (int64_t)(v5 < v4); // 0x280b9a
    int64_t v7; // 0x280b8a
    unsigned char v8 = *(char *)&v7; // 0x280b9c
    char v9 = v6; // 0x280b9c
    unsigned char v10 = v8 + v9; // 0x280b9c
    *(char *)a3 = v10;
    char * v11 = (char *)(a3 - 0x36c4e7ae); // 0x280b9e
    *v11 = *v11 + v9 + (char)(v10 < v8);
    return v6 % 256 | v1 & -256;
}

// Address range: 0x280ba5 - 0x280bdc
int64_t function_280ba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x280ba5
    bool v1; // 0x280ba5
    int64_t v2 = v1 ? -4 : 4; // 0x280ba5
    int64_t v3 = v2 + a2; // 0x280ba5
    *(int32_t *)a1 = *(int32_t *)v3;
    int64_t v4 = v2 + a1; // 0x280ba6
    int64_t v5 = (int64_t)*(int32_t *)(v3 + v2); // 0x280ba8
    int64_t v6 = unknown_ffffffffac3765af(v4, v5); // 0x280ba9
    int32_t * v7 = (int32_t *)(v4 - 22); // 0x280bb9
    *v7 = *v7 + (int32_t)v6;
    *(int64_t *)a5 = a5;
    int64_t v8; // 0x280ba5
    *(int32_t *)v8 = *(int32_t *)&v8 + (int32_t)v4;
    __asm_rcl(*(char *)(v5 - 14));
    return unknown_ffffffff9deda1dc();
}

// Address range: 0x280beb - 0x280c1c
int64_t function_280beb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x280beb
    unknown_ffffffffcb7eb7fa();
    char * v1 = (char *)(a2 - 0x2f30dc90); // 0x280bf9
    unsigned char v2 = *v1; // 0x280bf9
    unsigned char v3 = v2 + (char)a4; // 0x280bf9
    *v1 = v3;
    char v4 = *(char *)(a2 + 0x1e8aeaa); // 0x280bff
    if (llvm_ctpop_i8(v4 + (char)(a4 / 256) + (char)(v3 < v2)) % 2 != 0) {
        // 0x280c10
        return function_ffffffffabe3017b();
    }
    // 0x280c0d
    return 0x3bcca7f8;
}

// Address range: 0x280c29 - 0x280c2a
int64_t function_280c29(void) {
    // 0x280c29
    int64_t result; // 0x280c29
    return result;
}

// Address range: 0x280c86 - 0x280c87
int64_t function_280c86(void) {
    // 0x280c86
    int64_t result; // 0x280c86
    return result;
}

// Address range: 0x280c9c - 0x280cc0
int64_t function_280c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x280c9c
    bool v1; // 0x280c9c
    if (!v1) {
        function_280c86();
    }
    // 0x280c9e
    int64_t v2; // 0x280c9c
    int64_t v3 = (int64_t)&v2; // 0x280ca0
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x280ca5
    bool v5 = true; // 0x280ca3
    while (true) {
        // 0x280ca5
        int64_t v6; // 0x280c9c
        int64_t v7 = v6;
        *v4 = v3;
        if (!v5) {
            function_280c29();
        }
        char v8 = *(char *)-0x2f12484f; // 0x280caa
        int64_t v9; // 0x280c9c
        *(char *)-0x2f12484f = v8 + (char)(v9 / 256);
        v6 = v7 & 0xffffffff;
        v9 = *v4;
        v5 = (int32_t)v7 == 0;
    }
}

// Address range: 0x280cd0 - 0x280cdc
int64_t function_280cd0(void) {
    // 0x280cd0
    int64_t v1; // 0x280cd0
    return v1 & -256 | (int64_t)__asm_in(-111);
}

// Address range: 0x280d84 - 0x280d85
int64_t function_280d84(void) {
    // 0x280d84
    int64_t result; // 0x280d84
    return result;
}

// Address range: 0x280db9 - 0x280dba
int64_t function_280db9(void) {
    // 0x280db9
    int64_t result; // 0x280db9
    return result;
}

// Address range: 0x280dbc - 0x280e39
int64_t function_280dbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    bool v2; // 0x280dbc
    if (a4 == 1 || v2) {
        uint64_t v3 = unknown_1228b8c6(); // 0x280dc0
        char * v4 = (char *)(v3 + 5); // 0x280dc5
        char v5 = v3 / 256; // 0x280dc5
        *v4 = *v4 + v5;
        int64_t v6 = unknown_ffffffffab4881d9(); // 0x280dd3
        char * v7 = (char *)v6; // 0x280dd8
        unsigned char v8 = *v7; // 0x280dd8
        unsigned char v9 = v8 + v5; // 0x280dd8
        *v7 = v9;
        return (v6 - (v9 < v8 ? 59 : 58)) % 256 | v6 & -256;
    }
    int64_t v10 = unknown_ffffffffb5f03124() & -256; // 0x280e25
    uint32_t v11 = (int32_t)a3 + (int32_t)a1; // 0x280e27
    char v12 = *(char *)((v10 | 171) - 92); // 0x280e30
    int32_t v13 = __asm_insd(256 * (int16_t)(v12 | (char)(v11 / 256)) | (int16_t)v11 % 256); // 0x280e33
    *(int32_t *)a1 = v13;
    return v10 | (int64_t)*(char *)&v1;
}

// Address range: 0x280e3c - 0x280e53
int64_t function_280e3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x280e3c
    __asm_out_133((int16_t)a3, (char)unknown_ffffffffb4fdf942());
    int32_t * v1 = (int32_t *)(a1 + 0xffffff83 & 0xffffffff); // 0x280e45
    int64_t v2; // 0x280e3c
    *v1 = *v1 + (int32_t)v2;
    return unknown_ffffffffa619374f();
}

// Address range: 0x280e53 - 0x280eb7
int64_t function_280e53(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x280e53
    int64_t v1; // 0x280e53
    int64_t v2 = v1 ^ a3;
    int64_t v3 = unknown_ffffffffbb306e6f(); // 0x280e69
    int32_t * v4 = (int32_t *)(4 * a2 + 0x33fd629); // 0x280e6e
    int32_t v5 = *v4 ^ (int32_t)a4; // 0x280e6e
    *v4 = v5;
    bool v6; // 0x280e53
    int64_t v7 = v6 ? -1 : 1; // 0x280e76
    int64_t v8 = v7 + a1; // 0x280e76
    int32_t * v9 = (int32_t *)(v1 - 0x12279940); // 0x280e79
    *v9 = *v9 + (int32_t)v1;
    uint32_t v10 = (int32_t)v3; // 0x280e80
    uint32_t v11 = *(int32_t *)v8; // 0x280e80
    if (((v10 - v11 ^ v10) & (v11 ^ v10)) < 0) {
        int64_t result = v3 - v1 + (int64_t)(v11 > v10) & 0xffffffff; // 0x280e86
        int32_t * v12 = (int32_t *)(result + 0x5b4d8803); // 0x280e88
        *v12 = *v12 + (int32_t)v2;
        return result;
    }
    int64_t v13 = ((1024 * (int64_t)v6 | 0x4000 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0)) & (int64_t)&g1) == 0 ? 4 : -4; // 0x280e80
    int64_t v14 = v13 + v8; // 0x280e80
    *(char *)(v2 & 0xffffffff) = (char)a4;
    int64_t v15 = unknown_ffffffffb3bd52ab(v14, v7 + a2); // 0x280ea5
    char * v16 = (char *)(v14 - 77); // 0x280eaa
    *v16 = *v16 + (char)v1;
    return v15 & -91;
}

// Address range: 0x280eb8 - 0x280eb9
int64_t function_280eb8(void) {
    // 0x280eb8
    int64_t result; // 0x280eb8
    return result;
}

// Address range: 0x280ef4 - 0x280f3b
int64_t function_280ef4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x280ef4
    int64_t result; // 0x280ef4
    if (a4 == 1) {
        // 0x280ef6
        return result;
    }
    // 0x280f1d
    int64_t v1; // 0x280ef4
    *(char *)0x440aa007d997512c = (char)v1;
    bool v2; // 0x280ef4
    result = v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
    if (v2) {
        result = function_280eb8();
    }
    // 0x280ef6
    return result;
}

// Address range: 0x280f54 - 0x280f62
int64_t function_280f54(int64_t a1, int64_t a2) {
    // 0x280f54
    *(int64_t *)0x30f2f9a2 = a1;
    return unknown_2a364760(a1, a2);
}

// Address range: 0x280fb4 - 0x280fb7
int64_t function_280fb4(void) {
    // 0x280fb4
    int64_t result; // 0x280fb4
    return result;
}

// Address range: 0x280fd3 - 0x280fd6
int64_t function_280fd3(int64_t a1) {
    // 0x280fd3
    int64_t result; // 0x280fd3
    return result;
}

// Address range: 0x280fde - 0x280fe3
int64_t function_280fde(void) {
    // 0x280fde
    return function_ffffffffafb6eb58();
}

// Address range: 0x28102a - 0x28102c
int64_t function_28102a(void) {
    // 0x28102a
    int64_t v1; // 0x28102a
    return function_28108f(v1, v1, v1);
}

// Address range: 0x281051 - 0x28105a
int64_t function_281051(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x281051
    int64_t v1; // 0x281051
    char * v2 = (char *)(v1 + 0x1fc37275); // 0x281051
    *v2 = *v2 + (char)(a3 / 256);
    return v1 | 252;
}

// Address range: 0x28108f - 0x2810a5
int64_t function_28108f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28108f
    int64_t result; // 0x28108f
    *(int32_t *)0x2c103d867e88910a = (int32_t)result;
    int32_t * v1 = (int32_t *)(result + 0x1003a75); // 0x28109b
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x2810ef - 0x2810f2
int64_t function_2810ef(int64_t a1) {
    // 0x2810ef
    int64_t result; // 0x2810ef
    return result;
}

// Address range: 0x28112e - 0x281134
int64_t function_28112e(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 16); // 0x28112e
    int64_t result; // 0x28112e
    *v1 = *v1 | (int32_t)result;
    return result;
}

// Address range: 0x281138 - 0x28113b
int64_t function_281138(void) {
    // 0x281138
    int64_t result; // 0x281138
    return result;
}

// Address range: 0x281172 - 0x281173
int64_t function_281172(void) {
    // 0x281172
    int64_t result; // 0x281172
    return result;
}

// Address range: 0x28119a - 0x2811f8
int64_t function_28119a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffff88330da1(); // 0x28119b
    int64_t v2 = (v1 + 216) % 256 | v1 & -256; // 0x2811a0
    int64_t v3; // 0x28119a
    int32_t v4 = *(int32_t *)(v2 + 125) + (int32_t)v2 & (int32_t)v3; // 0x2811a5
    int64_t result = 2 * v3 & 0xffffffff; // 0x2811a7
    int64_t v5 = a4 - 1; // 0x2811aa
    if (v5 == 0) {
        // 0x2811ac
        *(int32_t *)a1 = v4;
        // 0x2811b0
        return result;
    }
    int64_t v6 = v3 & -0xff01 | (int64_t)&g4; // 0x2811be
    char v7 = v4; // 0x2811c0
    unsigned char v8 = v7 - 27; // 0x2811c0
    int64_t result2 = (int64_t)v8 | (int64_t)(v4 & -256); // 0x2811c0
    if (((v8 ^ v7) & v7 + 101) < 0) {
        uint32_t v9 = (int32_t)v5 % 32; // 0x2811ec
        if (v9 != 0) {
            int32_t * v10 = (int32_t *)(a6 - 67 + 8 * a6); // 0x2811ec
            *v10 = *v10 << v9;
        }
        unsigned char v11 = (char)v5 % 32; // 0x2811f1
        if (v11 != 0) {
            bool v12; // 0x28119a
            char * v13 = (char *)(a1 - 24 + (v12 ? -1 : 1)); // 0x2811f1
            unsigned char v14 = *v13; // 0x2811f1
            *v13 = v14 >> v11 | v14 << 8 - v11;
        }
        int64_t v15 = result2 + v6; // 0x2811f4
        return v15 & 0xffffff00 | (int64_t)(*(char *)v5 | (char)v15);
    }
    // 0x2811c4
    if (v6 > result2) {
        // 0x2811b0
        return result2;
    }
    int32_t * v16 = (int32_t *)(result + 0xcb13c79); // 0x2811c8
    uint32_t v17 = *v16; // 0x2811c8
    uint32_t v18 = v17 + (int32_t)result2; // 0x2811c8
    *v16 = v18;
    unknown_ffffffffe82adfd6();
    if (v18 >= v17 && v18 != 0) {
        function_281172();
    }
    unsigned char v19 = *(char *)-0x17cce159; // 0x2811d8
    *(char *)-0x17cce159 = v19 / 128 | 2 * v19;
    return __asm_in_134((int16_t)a6);
}

// Address range: 0x2811fa - 0x281223
int64_t function_2811fa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2811fa
    int64_t v1; // 0x2811fa
    int32_t * v2 = (int32_t *)((0xffffff88 * v1 & 0xfffffff8) + 0x6f85b0a); // 0x2811ff
    *v2 = *v2 + (int32_t)v1;
    unknown_ffffffff969d110f();
    int64_t result = unknown_ffffffffafc54c1a(); // 0x281214
    *(int32_t *)result = (int32_t)result + (int32_t)(a4 % 256 ^ a3);
    return result;
}

// Address range: 0x281247 - 0x281248
int64_t function_281247(void) {
    // 0x281247
    int64_t result; // 0x281247
    return result;
}

// Address range: 0x28125d - 0x28125f
int64_t function_28125d(void) {
    // 0x28125d
    return function_281247();
}

// Address range: 0x281265 - 0x28126c
int64_t function_281265(void) {
    // 0x281265
    int64_t v1; // 0x281265
    __asm_out(99, (char)v1);
    return function_ffffffffc04f3f1a();
}

// Address range: 0x281290 - 0x281297
int64_t function_281290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x281290
    int64_t result; // 0x281290
    *(char *)a2 = (char)result;
    return result;
}

// Address range: 0x2812cf - 0x2812d4
int64_t function_2812cf(void) {
    // 0x2812cf
    return function_fffffffff4f31471();
}
