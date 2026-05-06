/*
 * Targeted RetDec C for native executable gap queue batch 733.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x207f9e-0x20819e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20819e-0x20839e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20839e-0x20859e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20859e-0x20879e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20879e-0x20899e rank=- name=- kind=- bytes=- uncovered=-
 *   0x442a67-0x442c67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x442c67-0x442e67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x442e67-0x443067 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1716fa1e();
int64_t function_207f9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_207fcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_208087(void);
int64_t function_208095(void);
int64_t function_2080be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2080df(void);
int64_t function_208106(int64_t a1);
int64_t function_20812c(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_208198(void);
int64_t function_20819d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2081b2(int64_t a1);
int64_t function_2081d2(void);
int64_t function_2081e4(void);
int64_t function_2081f4(int64_t a1, int64_t a2);
int64_t function_208233(int64_t a1, int64_t a2, int64_t a3);
int64_t function_208266(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2082aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2082ed(void);
int64_t function_208331(void);
int64_t function_208345(void);
int64_t function_208376(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2083bc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2083d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_208557(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_208670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2087dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_442a67(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_442d1a(int64_t a1);
int64_t function_442d3f(int64_t a1, int64_t a2);
int64_t function_442d81(void);
int64_t function_442d94(void);
int64_t function_442dc8(int64_t a1);
int64_t function_442de7(void);
int64_t function_442e1e(void);
int64_t function_442e45(void);
int64_t function_442e6d(void);
int64_t function_442e95(void);
int64_t function_442ea6(void);
int64_t function_442ec5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_442f0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_442f1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_443041(int64_t a1, int64_t a2);
int64_t function_443052(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_caf2a();
int64_t function_d5946bb();
int64_t function_ffffffffa6571e76();
int64_t function_fffffffff01f4e6b();
int64_t unknown_1643e2d2();
int64_t unknown_7aa5c27f();
int64_t unknown_ffffffff8196ece3();
int64_t unknown_ffffffff9311639b();
int64_t unknown_ffffffffad6614f7();
int64_t unknown_ffffffffd3131fc2();
int64_t unknown_fffffffffe005dd8();

// Address range: 0x207f9e - 0x207fc8
int64_t function_207f9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x207f9e
    int64_t result; // 0x207f9e
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(result + 0x3bb601e8); // 0x207f9e
        uint32_t v3 = *v2; // 0x207f9e
        bool v4; // 0x207f9e
        *v2 = (int32_t)v4 << 32 - v1 | v3 >> v1 | (int32_t)((int64_t)v3 << (int64_t)(33 - v1));
    }
    if (a4 != 0) {
        int32_t * v5 = (int32_t *)(a3 + 0x20903cf1); // 0x207fac
        *v5 = *v5 + (int32_t)a2;
        char * v6 = (char *)(result + 0x2c3ee00); // 0x207fb2
        *v6 = *v6 + (char)result;
    }
    char * v7 = (char *)(result - 0x62fe1800); // 0x207fb8
    char v8 = a4 / 256; // 0x207fb8
    *v7 = *v7 + v8;
    char * v9 = (char *)(a1 - 43); // 0x207fbe
    *v9 = *v9 + v8;
    char * v10 = (char *)(result + 0x69b4530a); // 0x207fc2
    *v10 = *v10 + (char)a4;
    return result;
}

// Address range: 0x207fcb - 0x20807b
int64_t function_207fcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2; // 0x207fcb
    *(char *)a1 = (char)v2;
    bool v3; // 0x207fcb
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x207fcb
    uint64_t result = unknown_1643e2d2(v4); // 0x207fcc
    if (!v3) {
        // 0x207fd3
        *(char *)v4 = __asm_insb((int16_t)v1);
        return result;
    }
    int64_t v5 = a4 - 1; // 0x207fde
    if (v5 == 0 || v3) {
        // 0x207fe0
        return result;
    }
    char v6 = __asm_insb((int16_t)v1); // 0x208053
    char * v7 = (char *)v4; // 0x208053
    *v7 = v6;
    unsigned char v8 = *(char *)(v4 - 0x5b8a0c6e); // 0x208054
    char v9 = result; // 0x20805a
    *v7 = v6 - v9 + (char)(v8 < (char)(result / 256));
    int32_t * v10 = (int32_t *)(v1 + 121); // 0x20805c
    *v10 = *v10 + (int32_t)v2;
    *(char *)v1 = *(char *)&v1 + (v9 & 116);
    __asm_sti();
    char v11 = *(char *)(a2 + 0x43875a90); // 0x208067
    *(char *)a2 = (char)(v2 / 256) + (char)a2;
    return v5 & 0xffffff00 | (int64_t)(v11 + (char)v5 & -24);
}

// Address range: 0x208087 - 0x208088
int64_t function_208087(void) {
    // 0x208087
    int64_t result; // 0x208087
    return result;
}

// Address range: 0x208095 - 0x20809f
int64_t function_208095(void) {
    // 0x208095
    int64_t result; // 0x208095
    return result;
}

// Address range: 0x2080be - 0x2080c2
int64_t function_2080be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2080be
    int64_t result; // 0x2080be
    *(int32_t *)a3 = (int32_t)(result | a3);
    return result;
}

// Address range: 0x2080df - 0x2080e1
int64_t function_2080df(void) {
    // 0x2080df
    int64_t v1; // 0x2080df
    return function_20812c(v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x208106 - 0x20810c
int64_t function_208106(int64_t a1) {
    // 0x208106
    bool v1; // 0x208106
    return function_1716fa1e((v1 ? -4 : 4) + a1);
}

// Address range: 0x20812c - 0x20813c
int64_t function_20812c(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x20812c
    int64_t v1; // 0x20812c
    int64_t v2 = v1;
    *(char *)-0x28d9f4cd = *(char *)-0x28d9f4cd + (char)(v1 / 256);
    __asm_outsd((int16_t)a3, (int32_t)v1);
    *(char *)v2 = (char)v2 + (char)v1;
    return result;
}

// Address range: 0x208198 - 0x20819b
int64_t function_208198(void) {
    // 0x208198
    int64_t result; // 0x208198
    return result;
}

// Address range: 0x20819d - 0x2081a2
int64_t function_20819d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20819d
    *(int32_t *)a3 = (int32_t)a1;
    int64_t result; // 0x20819d
    return result;
}

// Address range: 0x2081b2 - 0x2081b5
int64_t function_2081b2(int64_t a1) {
    // 0x2081b2
    int64_t result; // 0x2081b2
    return result;
}

// Address range: 0x2081d2 - 0x2081d3
int64_t function_2081d2(void) {
    // 0x2081d2
    int64_t result; // 0x2081d2
    return result;
}

// Address range: 0x2081e4 - 0x2081e5
int64_t function_2081e4(void) {
    // 0x2081e4
    int64_t result; // 0x2081e4
    return result;
}

// Address range: 0x2081f4 - 0x2081fc
int64_t function_2081f4(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x194c209a); // 0x2081f4
    int64_t v2; // 0x2081f4
    *v1 = *v1 & (int32_t)v2;
    return function_2081e4();
}

// Address range: 0x208233 - 0x20825a
int64_t function_208233(int64_t a1, int64_t a2, int64_t a3) {
    // 0x208233
    int64_t v1; // 0x208233
    uint64_t v2 = (v1 & 0xffffff00 | (uint64_t)v1 % 256) + 0xc66728c0; // 0x208234
    unsigned char v3 = *(char *)(v2 % 256 + v1); // 0x20823a
    int64_t v4 = v2 & 0xffffff00; // 0x20823a
    char v5 = *(char *)((v4 | (int64_t)v3) - 24); // 0x20823b
    uint32_t v6 = (int32_t)(v4 | (int64_t)(v5 ^ v3)); // 0x20823e
    int32_t v7 = v6 + (int32_t)v1; // 0x20823e
    int64_t v8 = a3 & -256 | 250; // 0x208240
    bool v9 = v7 < v6; // 0x208240
    int64_t v10 = v7; // 0x208242
    if (!v9) {
        v10 = function_2081d2();
    }
    uint32_t v11 = (int32_t)(v10 & 0xffffff00 | (int64_t)__asm_in((int16_t)v8)); // 0x20824a
    uint32_t v12 = v9 ? -0x2afe1765 : -0x2afe1766; // 0x20824a
    int32_t v13 = v11 - v12; // 0x20824a
    v9 |= v12 > v11;
    while (v12 > v11) {
        // 0x208242
        v10 = v13;
        if (!v9) {
            v10 = function_2081d2();
        }
        // 0x208244
        v11 = (int32_t)(v10 & 0xffffff00 | (int64_t)__asm_in((int16_t)v8));
        v12 = v9 ? -0x2afe1765 : -0x2afe1766;
        v13 = v11 - v12;
        v9 |= v12 > v11;
    }
    int32_t * v14 = (int32_t *)v8; // 0x208251
    *v14 = *v14 + (int32_t)v1;
    return v13 - 0x5ef6e1c5;
}

// Address range: 0x208266 - 0x20829a
int64_t function_208266(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a4 + 0x23c0c3f4); // 0x208269
    int64_t v2; // 0x208266
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v2 - 0x1a3022f); // 0x20826f
    int32_t v4 = v2; // 0x20826f
    *v3 = *v3 + v4;
    int64_t v5; // 0x208266
    int32_t result = *(int32_t *)&v5 & v4; // 0x208275
    if (result != 0) {
        if (result >= 0) {
            // 0x20829d
            return result;
        }
        // 0x208293
        return unknown_ffffffff9311639b();
    }
    // 0x208279
    bool v6; // 0x208266
    int64_t v7 = v6 ? -1 : 1; // 0x208266
    int64_t v8 = v7 + a1; // 0x208266
    int64_t result2 = unknown_7aa5c27f(v8, v7 + a2); // 0x208279
    unsigned char v9 = *(char *)(v8 + 26); // 0x20827e
    int64_t v10; // 0x208266
    unsigned char v11 = *(char *)&v10; // 0x208281
    *(char *)v10 = 128 * (char)(v9 > -1 - (char)a3) | v11 / 2;
    return result2;
}

// Address range: 0x2082aa - 0x2082b0
int64_t function_2082aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2082aa
    int64_t result; // 0x2082aa
    return result;
}

// Address range: 0x2082ed - 0x2082f6
int64_t function_2082ed(void) {
    // 0x2082ed
    return unknown_ffffffffad6614f7();
}

// Address range: 0x208331 - 0x208334
int64_t function_208331(void) {
    // 0x208331
    int64_t result; // 0x208331
    return result;
}

// Address range: 0x208345 - 0x20834a
int64_t function_208345(void) {
    // 0x208345
    return function_ffffffffa6571e76();
}

// Address range: 0x208376 - 0x208386
int64_t function_208376(int64_t a1, int64_t a2, int64_t a3) {
    // 0x208376
    int64_t result; // 0x208376
    int32_t * v1 = (int32_t *)(result - 0x175af4ff); // 0x208377
    bool v2; // 0x208376
    *v1 = *v1 - (v2 ? 2 : 1);
    *(char *)a3 = (char)(result / 256);
    return result;
}

// Address range: 0x2083bc - 0x2083c5
int64_t function_2083bc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2083bc
    unknown_ffffffffd3131fc2(a1, a2, a3);
    return a2 & 0xffffffff;
}

// Address range: 0x2083d2 - 0x208557
int64_t function_2083d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2083d2
    unknown_fffffffffe005dd8();
    int64_t v1 = a4 & a2;
    unknown_ffffffff8196ece3();
    int32_t v2 = *(int32_t *)(v1 & 0xffffffff); // 0x2083e3
    char * v3 = (char *)(int64_t)(v2 + (int32_t)v1); // 0x2083e5
    *v3 = *v3 + 105;
    unsigned char v4 = (char)a4 % 32; // 0x2083e8
    int64_t v5; // 0x2083d2
    if (v4 != 0) {
        char * v6 = (char *)(v5 + 78); // 0x2083e8
        *v6 = *v6 >> v4;
    }
    *(char *)(a4 - 100) = 80;
    return function_caf2a(a1, v5, a3, a4, a5, a6, a7);
}

// Address range: 0x208557 - 0x208670
int64_t function_208557(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x208557
    int64_t v1; // 0x208557
    bool v2; // 0x208557
    return function_caf2a(a1, a2, a1, a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x208670 - 0x2087dc
int64_t function_208670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x208670
    int64_t v1; // bp-48, 0x208670
    v1 = (int64_t)&v1 + 16;
    return function_caf2a(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x2087dc - 0x20895d
int64_t function_2087dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2087dc
    return function_caf2a(a1, a2, a3, a4, a5, a6, 0x5a9d08b5);
}

// Address range: 0x442a67 - 0x442cd7
int64_t function_442a67(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x442a67
    int64_t result = v3 & 0xa026c812 | 0x5fd937ed; // 0x442a67
    char * v4 = (char *)(a1 + 30); // 0x442a71
    char v5 = a4 / 256; // 0x442a71
    *v4 = *v4 & v5;
    char v6 = a3; // 0x442a74
    unsigned char v7 = v5 + v6; // 0x442a74
    if (a4 == 0 != v7 != 0) {
        // 0x442a7a
        return result;
    }
    uint32_t v8 = (int32_t)v3; // 0x442a6c
    int64_t v9 = v8 / 512 | 0x800000 * v8; // 0x442a6c
    int64_t v10 = a3 & -256 | (int64_t)v7; // 0x442a74
    int3_t v11; // 0x442a67
    int64_t result3; // 0x442a67
    bool v12; // 0x442a67
    if (((v7 ^ v6) & (v7 ^ v5)) < 0) {
        uint32_t v13 = *(int32_t *)&v2 + (int32_t)result ^ -0x2ebaa239; // 0x442bcd
        int64_t result2 = v13; // 0x442bcd
        *(int32_t *)v2 = v13;
        int64_t v14 = v2 + (v12 ? -4 : 4); // 0x442bd2
        v2 = v14;
        result3 = result2;
        if (v13 >= 0) {
            // 0x442bd7
            __asm_outsb((int16_t)v10, *(char *)&v1);
            *(char *)v14 = (char)v13;
            return result2;
        }
    } else {
        char v15 = result; // 0x442b4c
        *(char *)v2 = v15;
        int64_t v16 = v2 + (v12 ? -1 : 1); // 0x442b4c
        v2 = v16;
        if ((int32_t)result >= 0x6ff25998) {
            // 0x442bad
            *(int64_t *)(v9 - 8) = v16;
            *(char *)0x4f2adfda = *(char *)0x4f2adfda - (char)v3;
            __asm_rcl(*(char *)0x33c2258f);
            int32_t * v17 = (int32_t *)(v1 + 22); // 0x442bc5
            *v17 = *v17 / 2 | 0x80000000 * (int32_t)(*(char *)v2 > 101);
            return result & 0xffffff00 | 107;
        }
        // 0x442b56
        int3_t v18; // 0x442a67
        *(int32_t *)result = (int32_t)__frontend_reg_load_fpr(v18);
        __asm_out(19, v15);
        *(int64_t *)(v9 - 8) = v1;
        v11 = v18 + 1;
        result3 = result & 0x3cd71300;
    }
    // 0x442b60
    __frontend_reg_load_fpr(v11);
    __frontend_reg_load_fpr(v11 ^ -4);
    int64_t * v19 = (int64_t *)(a5 + 27 + 2 * v3); // 0x442b63
    *v19 = *v19 & v10;
    return result3;
}

// Address range: 0x442d1a - 0x442d1d
int64_t function_442d1a(int64_t a1) {
    // 0x442d1a
    int64_t result; // 0x442d1a
    return result;
}

// Address range: 0x442d3f - 0x442d45
int64_t function_442d3f(int64_t a1, int64_t a2) {
    // 0x442d3f
    return function_d5946bb();
}

// Address range: 0x442d81 - 0x442d83
int64_t function_442d81(void) {
    // 0x442d81
    int64_t result; // 0x442d81
    return result;
}

// Address range: 0x442d94 - 0x442d97
int64_t function_442d94(void) {
    // 0x442d94
    int64_t result; // 0x442d94
    return result;
}

// Address range: 0x442dc8 - 0x442dd4
int64_t function_442dc8(int64_t a1) {
    // 0x442dc8
    int64_t result; // 0x442dc8
    *(int32_t *)-0x6c8374a6ff8db52b = (int32_t)result;
    return result;
}

// Address range: 0x442de7 - 0x442dea
int64_t function_442de7(void) {
    // 0x442de7
    int64_t v1; // 0x442de7
    return v1 ^ 229;
}

// Address range: 0x442e1e - 0x442e1f
int64_t function_442e1e(void) {
    // 0x442e1e
    int64_t result; // 0x442e1e
    return result;
}

// Address range: 0x442e45 - 0x442e49
int64_t function_442e45(void) {
    // 0x442e45
    int64_t result; // 0x442e45
    return result;
}

// Address range: 0x442e6d - 0x442e6f
int64_t function_442e6d(void) {
    // 0x442e6d
    return function_442e1e();
}

// Address range: 0x442e95 - 0x442e9b
int64_t function_442e95(void) {
    // 0x442e95
    int64_t result; // 0x442e95
    return result;
}

// Address range: 0x442ea6 - 0x442ea7
int64_t function_442ea6(void) {
    // 0x442ea6
    int64_t result; // 0x442ea6
    return result;
}

// Address range: 0x442ec5 - 0x442eeb
int64_t function_442ec5(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 0x52c0affe); // 0x442ecf
    int64_t v2; // 0x442ec5
    *v1 = *v1 ^ (char)((256 * v2 + a3) / 256);
    return function_442ea6();
}

// Address range: 0x442f0c - 0x442f1d
int64_t function_442f0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x442f0c
    int64_t v1; // 0x442f0c
    return v1 ^ 61;
}

// Address range: 0x442f1d - 0x442ffe
int64_t function_442f1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a1;
    int64_t v2; // 0x442f1d
    char v3; // 0x442f1d
    int64_t v4; // 0x442f1d
    if ((int32_t)v4 > -0x12db3ad2) {
        // 0x442f1d
        v2 = a1;
        v3 = a1;
    } else {
        // 0x442f2d
        if (a4 != 0) {
            // 0x442f30
            *(int32_t *)a1 = __asm_insd((int16_t)a3);
            *(char *)-0x39a3fbc22e38d3cb = (char)(v4 + 0x12db3ad1);
            return function_fffffffff01f4e6b();
        }
        // 0x442f92
        v2 = v1;
        v3 = *(char *)&v1;
    }
    // 0x442f95
    __asm_out(67, (char)a3);
    char v5 = v4; // 0x442faa
    *(char *)v2 = v3 - v5;
    int64_t v6 = __asm_iretd(); // 0x442fb9
    unsigned char v7 = *(char *)(a7 + 100); // 0x442fbd
    int64_t v8 = v4 + 0xd65c4857 & 0xffff0000 | (int64_t)&g1 & -256 | (int64_t)v7; // 0x442fbd
    int32_t * v9 = (int32_t *)v8; // 0x442fc2
    *v9 = (int32_t)a7;
    uint32_t v10 = (int32_t)a4 % 32; // 0x442fc5
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)v6; // 0x442fc5
        *v11 = *v11 >> v10;
    }
    int64_t v12 = 256 * a3 + a4 & 0xff00 | a4 & -0xff01; // 0x442fa0
    int32_t * v13 = (int32_t *)(v12 + 0x5f2ec919); // 0x442fc7
    *v13 = *v13 ^ (int32_t)v8;
    int64_t result = v6 ^ 0x4926c142; // 0x442fce
    char * v14 = (char *)(result + 0x3c5a180f); // 0x442fd4
    char v15 = *v14 + (char)(v4 / 256); // 0x442fd4
    *v14 = v15;
    if (v15 != 0) {
        // 0x442fdc
        return result;
    }
    char v16 = *(char *)(result + 8); // 0x442fe6
    char * v17 = (char *)(int64_t)*v9; // 0x442fe9
    *v17 = (char)v4;
    *(int64_t *)(v4 - 8) = v4 & -256 | (int64_t)(v16 | v5);
    int32_t * v18 = (int32_t *)(v12 + 114); // 0x442ff9
    *v18 = *v18 + 49;
    __asm_outsb((int16_t)v8, *v17);
    return result;
}

// Address range: 0x443041 - 0x443046
int64_t function_443041(int64_t a1, int64_t a2) {
    // 0x443041
    int64_t result; // 0x443041
    return result;
}

// Address range: 0x443052 - 0x443059
int64_t function_443052(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x443052
    int64_t v1; // 0x443052
    return v1 & 0xffffffff;
}
