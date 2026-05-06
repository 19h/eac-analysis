/*
 * Targeted RetDec C for native executable gap queue batch 863.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3c23dd-0x3c25dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c25dd-0x3c27dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c27dd-0x3c29dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x419440-0x419640 rank=- name=- kind=- bytes=- uncovered=-
 *   0x419640-0x419840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x419840-0x419a40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x419b40-0x419c40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x419c40-0x419e40 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_179264c();
int64_t function_3c23dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c24b7(void);
int64_t function_3c24e2(void);
int64_t function_3c24ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c257e(uint64_t a1, int64_t a2, int64_t a3);
int64_t function_3c25de(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3c2703(int64_t a1);
int64_t function_3c2757(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3c277b(void);
int64_t function_3c279a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c28ae(void);
int64_t function_3c28ba(void);
int64_t function_3c28de(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c28fb(int64_t a1);
int64_t function_3c2901(void);
int64_t function_3c2946(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_419429();
int64_t function_419440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41945b(int64_t a1, int64_t a2);
int64_t function_41945d(void);
int64_t function_4194a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4194bd(int64_t a1);
int64_t function_4194e8(void);
int64_t function_4194ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41950f(void);
int64_t function_419544(void);
int64_t function_41954d(void);
int64_t function_419576(int64_t a1, int64_t a2, int64_t a3);
int64_t function_419594(void);
int64_t function_4195a9(void);
int64_t function_4195be(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_41967e(int64_t a1);
int64_t function_41969b(void);
int64_t function_4196a2(int64_t a1);
int64_t function_4196f8(int64_t a1);
int64_t function_419745(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_419781(int64_t a1);
int64_t function_419799(int64_t a1);
int64_t function_4197d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_419813(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_419912(void);
int64_t function_41996d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_419a30(void);
int64_t function_419b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_419c60(void);
int64_t function_419c67(void);
int64_t function_419c70(void);
int64_t function_419c75(int64_t a1);
int64_t function_419c7f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_419d6f(int64_t a1, int64_t a2);
int64_t function_419d80(int64_t a1);
int64_t function_419dc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_751798d4();
int64_t function_78b76645();
int64_t function_ffffffff8930fd40();
int64_t function_ffffffff973fa3b9();
int64_t function_ffffffffa16308c0();
int64_t function_ffffffffaec406de();
int64_t function_ffffffffdc1b09fc();
int64_t function_ffffffffdc3884d7();
int64_t function_ffffffffe8fdb381();
int64_t unknown_132ed8c();
int64_t unknown_253f2deb();
int64_t unknown_3049d827();
int64_t unknown_3f5f033b();
int64_t unknown_443856f6();
int64_t unknown_4f3cea61();
int64_t unknown_5a420e9f();
int64_t unknown_6c6a42e8();
int64_t unknown_71b2cd57();
int64_t unknown_ffffffffa0d11590();
int64_t unknown_ffffffffabb0ed72();
int64_t unknown_ffffffffb03ffee7();
int64_t unknown_ffffffffb0aac846();
int64_t unknown_ffffffffd58ea7ea();

// Address range: 0x3c23dd - 0x3c2498
int64_t function_3c23dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c23dd
    int64_t v1; // 0x3c23dd
    int64_t v2 = v1;
    int32_t v3 = v1; // 0x3c23dd
    int32_t v4 = v3 - 0x2f6a1bea; // 0x3c23dd
    __asm_out(-51, v4);
    int64_t v5 = unknown_253f2deb(); // 0x3c23e5
    if (((v4 ^ v3) & v3 + 0x5095e416) >= 0) {
        // 0x3c23ec
        return unknown_443856f6();
    }
    int32_t * v6 = (int32_t *)(a3 - 45); // 0x3c2449
    *v6 = *v6 + (int32_t)a1;
    *(int32_t *)v5 = (int32_t)v5;
    unknown_71b2cd57();
    if ((a4 & -0xff01 || (int64_t)&g2) != 0) {
        // 0x3c245a
        return __asm_wait();
    }
    uint64_t v7 = unknown_132ed8c(); // 0x3c2486
    unsigned char v8 = *(char *)(((v7 / 256 + v2) % 256 | v2 & -256) + v7 % 256); // 0x3c248d
    *(int16_t *)(a3 - 44) = (int16_t)v1;
    int64_t v9 = (v7 & -256 | (int64_t)v8) + 0x6801e8ac; // 0x3c2465
    *(int32_t *)0x51e80080003c3fea = (int32_t)v9;
    char v10 = *(char *)(v9 & 0xffffffff); // 0x3c2473
    return v9 & 0xffffff00 | (int64_t)(v10 + (char)v9);
}

// Address range: 0x3c24b7 - 0x3c24b9
int64_t function_3c24b7(void) {
    // 0x3c24b7
    int64_t result; // 0x3c24b7
    return result;
}

// Address range: 0x3c24e2 - 0x3c24ea
int64_t function_3c24e2(void) {
    // 0x3c24e2
    return unknown_6c6a42e8();
}

// Address range: 0x3c24ea - 0x3c24ff
int64_t function_3c24ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c24ea
    __asm_int(-117);
    int32_t * v1 = (int32_t *)(a4 - 10); // 0x3c24f0
    *v1 = *v1 + (int32_t)a3;
    return function_ffffffffe8fdb381();
}

// Address range: 0x3c257e - 0x3c258c
int64_t function_3c257e(uint64_t a1, int64_t a2, int64_t a3) {
    // 0x3c257e
    int64_t v1; // 0x3c257e
    *(char *)(a1 & 0xffffffff) = (char)(v1 | a1 / 256);
    return function_179264c(v1 & 0xffffffff);
}

// Address range: 0x3c25de - 0x3c26fd
int64_t function_3c25de(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3c25de
    int32_t v3 = v2; // 0x3c25e0
    *(int32_t *)-0x24cf4c18 = *(int32_t *)-0x24cf4c18 + v3;
    *(char *)-0x4dc9d82c = *(char *)-0x4dc9d82c + (char)a4;
    int32_t * v4 = (int32_t *)(a2 - 0x67fe17d4); // 0x3c25f0
    int32_t v5 = a4; // 0x3c25f0
    uint32_t v6 = *v4 | v5; // 0x3c25f0
    *v4 = v6;
    if (v6 >= 0) {
        // 0x3c25f8
        unknown_ffffffffb03ffee7();
        return a4 & 0xffffffff;
    }
    // 0x3c2617
    float80_t v7; // 0x3c25de
    float80_t v8 = (float80_t)*(float64_t *)(a3 - 26 + v2) / v7; // 0x3c25ec
    int32_t * v9 = (int32_t *)(a1 - 81); // 0x3c2617
    int32_t * v10 = (int32_t *)(v2 - 0x26efba7d); // 0x3c261b
    int64_t v11 = a3; // 0x3c2626
    *v9 = *v9 + v3;
    uint32_t v12 = *v10; // 0x3c261b
    uint32_t v13 = (int32_t)(2 * v2 & 0xffffffff) + 1 + v12; // 0x3c261b
    *v10 = v13;
    char v14 = (char)(v13 <= v12) + (char)(v11 / 256); // 0x3c2626
    v11 = 256 * (int64_t)v14 | v11 & -0xff01;
    int64_t v15 = unknown_3049d827(); // 0x3c2629
    while (v14 >= 0) {
        // 0x3c2617
        *v9 = *v9 + v3;
        v12 = *v10;
        v13 = (int32_t)v15 + 1 + v12;
        *v10 = v13;
        v14 = (char)(v13 <= v12) + (char)(v11 / 256);
        v11 = 256 * (int64_t)v14 | v11 & -0xff01;
        v15 = unknown_3049d827();
    }
    int32_t * v16 = (int32_t *)(v2 - 0x76f1b391); // 0x3c262b
    *v16 = *v16 + (int32_t)a1;
    unknown_3f5f033b();
    int64_t v17 = unknown_ffffffffb0aac846(); // 0x3c2640
    int32_t * v18 = (int32_t *)(v17 + 0x1e84605); // 0x3c2647
    *v18 = *v18 - (int32_t)v17;
    char * v19 = (char *)v17; // 0x3c2653
    char v20 = *v19; // 0x3c2653
    char v21 = v20 - 32; // 0x3c2653
    *v19 = v21;
    int64_t result = unknown_4f3cea61(); // 0x3c265b
    int16_t v22 = v11; // 0x3c2660
    __asm_outsb(v22, *(char *)&v1);
    if (((v21 ^ v20) & v20 + 96) < 0) {
        // 0x3c2665
        return result;
    }
    // 0x3c2669
    __asm_rcl(*(char *)(v1 + 127));
    int64_t v23 = unknown_ffffffffabb0ed72(); // 0x3c266c
    char * v24 = (char *)(v11 + 8); // 0x3c2671
    *v24 = *v24 + (char)(a4 / 256);
    int32_t * v25 = (int32_t *)(a1 - 43 + 4 * v11); // 0x3c2676
    *v25 = *v25 - 0x6dfe17f2;
    __asm_out_134(v22, (int32_t)v23);
    *(float64_t *)(v1 - 0x67d215e4) = (float64_t)v8;
    int64_t v26 = unknown_ffffffffa0d11590(); // 0x3c268a
    __asm_out_134(v22, (int32_t)v26);
    v1 = *(int64_t *)0xa50050;
    int64_t v27 = unknown_5a420e9f(); // 0x3c2699
    unsigned char v28 = *(char *)-0x17fac72839910919; // 0x3c26a0
    int64_t v29 = v27 & -256 | (int64_t)v28; // 0x3c26a0
    int32_t * v30 = (int32_t *)(a1 - 0x64a3c5b3); // 0x3c26a9
    uint32_t v31 = *v30; // 0x3c26a9
    uint32_t v32 = v31 + (*(int32_t *)v26 & (v5 & -256 | 217)); // 0x3c26a9
    *v30 = v32;
    int32_t * v33 = (int32_t *)(v29 - 91); // 0x3c26af
    int32_t v34 = *v33; // 0x3c26af
    *v33 = 4 * v34 | (int32_t)(v34 < 0) | 2 * (int32_t)(v32 < v31);
    int64_t v35 = v11 + a1; // 0x3c26b8
    int64_t v36 = v35 & 0xffffffff; // 0x3c26b8
    uint64_t v37 = 2 * v29 + 0xe84ede03; // 0x3c26ba
    __asm_out_133((int16_t)v35, v28);
    unsigned char v38 = *(char *)(v36 + 0x6001e873) - 34; // 0x3c26c3
    char * v39 = (char *)(v36 + 0x6cf91758); // 0x3c26c9
    *v39 = *v39 | (char)v37;
    char * v40 = (char *)((v37 & 0xffffffff) + 0x1001e886); // 0x3c26d2
    int32_t v41 = v37; // 0x3c26ef
    int64_t v42 = v36; // 0x3c26cf
    int64_t v43 = a1; // 0x3c26cf
    v42 = v42 & -0xff01 | (int64_t)&g1;
    *v40 = (char)true - (char)(v37 / 256) + *v40;
    char * v44 = (char *)(2 * v42 + 0x288ae768 + v1); // 0x3c26d8
    *v44 = *v44 | v38;
    int32_t v45 = *(int32_t *)(256 * (int64_t)v38 | 0xe84e0003); // 0x3c26df
    v43 = v45 & (int32_t)v43;
    int32_t * v46 = (int32_t *)(v1 - 0x62a30ccb); // 0x3c26e3
    *v46 = *v46 + (int32_t)v1;
    int32_t * v47 = (int32_t *)(v1 - 0x3a4607fe); // 0x3c26e9
    *v47 = *v47 + (int32_t)v1;
    int32_t * v48 = (int32_t *)(v42 - 24); // 0x3c26ef
    *v48 = *v48 | v41;
    int32_t * v49 = (int32_t *)v42; // 0x3c26f2
    uint32_t v50 = *v49; // 0x3c26f2
    uint32_t v51 = v50 + v41; // 0x3c26f2
    *v49 = v51;
    while (v51 < v50 || v51 == 0) {
        // 0x3c26d0
        v42 = v42 & -0xff01 | (int64_t)&g1;
        *v40 = (char)(v51 < v50) - (char)(v37 / 256) + *v40;
        v44 = (char *)(2 * v42 + 0x288ae768 + v1);
        *v44 = *v44 | v38;
        v45 = *(int32_t *)(256 * (int64_t)v38 | 0xe84e0003);
        v43 = v45 & (int32_t)v43;
        v46 = (int32_t *)(v1 - 0x62a30ccb);
        *v46 = *v46 + (int32_t)v1;
        v47 = (int32_t *)(v1 - 0x3a4607fe);
        *v47 = *v47 + (int32_t)v1;
        v48 = (int32_t *)(v42 - 24);
        *v48 = *v48 | v41;
        v49 = (int32_t *)v42;
        v50 = *v49;
        v51 = v50 + v41;
        *v49 = v51;
    }
    // 0x3c26f7
    *(char *)v43 = v28;
    return __asm_hlt(v43 + 1, v1, v42, v37 & 0xffffff00);
}

// Address range: 0x3c2703 - 0x3c270b
int64_t function_3c2703(int64_t a1) {
    // 0x3c2703
    int64_t result; // 0x3c2703
    int32_t * v1 = (int32_t *)(result + 0x27fe9199); // 0x3c2703
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3c2757 - 0x3c2760
int64_t function_3c2757(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3c2757
    int64_t v1; // 0x3c2757
    bool v2; // 0x3c2757
    *(char *)a3 = (char)v1 + (char)(a4 / 256) + (char)v2;
    return function_ffffffffdc1b09fc();
}

// Address range: 0x3c277b - 0x3c277c
int64_t function_3c277b(void) {
    // 0x3c277b
    int64_t result; // 0x3c277b
    return result;
}

// Address range: 0x3c279a - 0x3c27d1
int64_t function_3c279a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c279a
    int64_t result; // 0x3c279a
    bool v1; // 0x3c279a
    if (v1 || false) {
        // 0x3c27cc
        return 2 * result & 0xfffffffe | (int64_t)v1;
    }
    // 0x3c279c
    *(int32_t *)a1 = (int32_t)a1 - (int32_t)a2;
    return result;
}

// Address range: 0x3c28ae - 0x3c28b3
int64_t function_3c28ae(void) {
    // 0x3c28ae
    return function_ffffffffdc3884d7();
}

// Address range: 0x3c28ba - 0x3c28bb
int64_t function_3c28ba(void) {
    // 0x3c28ba
    int64_t result; // 0x3c28ba
    return result;
}

// Address range: 0x3c28de - 0x3c28f1
int64_t function_3c28de(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c28de
    float80_t v1; // 0x3c28de
    *(float80_t *)(a3 + 0x16ea40c5) = __asm_fbstp(v1);
    unknown_ffffffffd58ea7ea();
    function_3c28ba();
    // 0x3c28ec
    return a2 & 0xffffff00 | (int64_t)__asm_in(-12);
}

// Address range: 0x3c28fb - 0x3c2901
int64_t function_3c28fb(int64_t a1) {
    // 0x3c28fb
    return a1 & 0xffffffff;
}

// Address range: 0x3c2901 - 0x3c2907
int64_t function_3c2901(void) {
    // 0x3c2901
    int64_t result; // 0x3c2901
    return result;
}

// Address range: 0x3c2946 - 0x3c29d8
int64_t function_3c2946(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3c2946
    int64_t v1; // 0x3c2946
    uint64_t result = v1;
    unsigned char v2 = (char)(a3 / 256); // 0x3c2946
    unsigned char v3 = (char)(result / 256); // 0x3c2946
    if (v2 > v3) {
        // 0x3c29bd
        return (result + 186) % 256 | result & -256;
    }
    if (v2 != v3) {
        // 0x3c2951
        *(int32_t *)-0x34be24034577abf6 = (int32_t)result;
        return result;
    }
    char v4 = *(char *)-0x4edf627; // 0x3c29d2
    *(char *)-0x4edf627 = v4 - (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0x419440 - 0x419449
int64_t function_419440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result; // 0x419440
    if (a4 != 1) {
        result = function_419429();
    }
    // 0x419442
    return result;
}

// Address range: 0x41945b - 0x41945d
int64_t function_41945b(int64_t a1, int64_t a2) {
    // 0x41945b
    int64_t result; // 0x41945b
    return result;
}

// Address range: 0x41945d - 0x41945f
int64_t function_41945d(void) {
    // 0x41945d
    int64_t v1; // 0x41945d
    return function_4194bd(v1);
}

// Address range: 0x4194a7 - 0x4194ab
int64_t function_4194a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4194a7
    int64_t result; // 0x4194a7
    return result;
}

// Address range: 0x4194bd - 0x4194cb
int64_t function_4194bd(int64_t a1) {
    // 0x4194bd
    int64_t v1; // 0x4194bd
    *(char *)(a1 - 0x710209c7) = (char)v1;
    return v1 & -42;
}

// Address range: 0x4194e8 - 0x4194eb
int64_t function_4194e8(void) {
    // 0x4194e8
    int64_t result; // 0x4194e8
    return result;
}

// Address range: 0x4194ef - 0x419502
int64_t function_4194ef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4194ef
    int64_t v1; // 0x4194ef
    __asm_outsb((int16_t)a3, (char)v1);
    return function_751798d4();
}

// Address range: 0x41950f - 0x419510
int64_t function_41950f(void) {
    // 0x41950f
    int64_t result; // 0x41950f
    return result;
}

// Address range: 0x419544 - 0x419545
int64_t function_419544(void) {
    // 0x419544
    int64_t result; // 0x419544
    return result;
}

// Address range: 0x41954d - 0x41954f
int64_t function_41954d(void) {
    // 0x41954d
    return function_41950f();
}

// Address range: 0x419576 - 0x41957d
int64_t function_419576(int64_t a1, int64_t a2, int64_t a3) {
    // 0x419576
    int64_t v1; // 0x419576
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_ffffffffa16308c0();
}

// Address range: 0x419594 - 0x419599
int64_t function_419594(void) {
    // 0x419594
    int64_t v1; // 0x419594
    return v1 & -256 | 237;
}

// Address range: 0x4195a9 - 0x4195ab
int64_t function_4195a9(void) {
    // 0x4195a9
    return function_419544();
}

// Address range: 0x4195be - 0x419655
int64_t function_4195be(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4195be
    int64_t result; // 0x4195be
    // 0x419633
    *(char *)a1 = (char)result;
    char * v1 = (char *)(a3 + 0xd319743); // 0x419635
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x41967e - 0x41967f
int64_t function_41967e(int64_t a1) {
    // 0x41967e
    int64_t result; // 0x41967e
    return result;
}

// Address range: 0x41969b - 0x41969d
int64_t function_41969b(void) {
    // 0x41969b
    int64_t result; // 0x41969b
    return result;
}

// Address range: 0x4196a2 - 0x4196a3
int64_t function_4196a2(int64_t a1) {
    // 0x4196a2
    int64_t result; // 0x4196a2
    return result;
}

// Address range: 0x4196f8 - 0x4196fb
int64_t function_4196f8(int64_t a1) {
    // 0x4196f8
    int64_t v1; // 0x4196f8
    return v1 & -143;
}

// Address range: 0x419745 - 0x419781
int64_t function_419745(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x419745
    int64_t v1; // 0x419745
    *(char *)(v1 + 33) = (char)v1;
    float80_t v2; // 0x419745
    *(int16_t *)(a1 + 97) = (int16_t)v2;
    int64_t v3; // 0x419745
    uint32_t v4 = *(int32_t *)&v3; // 0x41974c
    int64_t v5; // 0x419745
    uint32_t v6 = *(int32_t *)&v5; // 0x41974c
    int32_t v7 = v4 - v6; // 0x41974c
    bool v8; // 0x419745
    int64_t v9 = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | (int64_t)(v4 < v6) | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v4 % 16 - v6 % 16 > 15) | 2048 * (int64_t)(((v7 ^ v4) & (v6 ^ v4)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v7) % 2 == 0) | 2; // 0x41974d
    int32_t * v10 = (int32_t *)(v9 + 0x6de89700); // 0x419751
    *v10 = *v10 | (int32_t)v1;
    int64_t v11 = a5 & -138; // 0x419758
    int32_t * v12 = (int32_t *)v11; // 0x41975b
    *v12 = *v12 & (int32_t)v11;
    *(int32_t *)v9 = *(int32_t *)((v8 ? -4 : 4) + a2);
    uint32_t v13 = (int32_t)a4; // 0x419763
    uint32_t v14 = *(int32_t *)(v11 + 30); // 0x419763
    int32_t v15 = v14 + v13; // 0x419763
    unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x419763
    *(char *)-0x3d7561f295bb2ad4 = (char)a5 & 118;
    __asm_outsd((int16_t)a3, *(int32_t *)0xd99b9d74);
    return 256 * (128 * (int64_t)(v15 < 0) | (int64_t)(v14 > -1 - v13) | 16 * (int64_t)(v14 % 16 + v13 % 16 > 15) | 4 * (int64_t)(v16 % 2 == 0)) | a5 & 0xd99b0074;
}

// Address range: 0x419781 - 0x41978c
int64_t function_419781(int64_t a1) {
    // 0x419781
    __asm_int((char)a1);
    int64_t v1; // 0x419781
    bool v2; // 0x419781
    return v1 - (v2 ? 0x7a634b85 : 0x7a634b84) & 0xffffffff;
}

// Address range: 0x419799 - 0x41979c
int64_t function_419799(int64_t a1) {
    // 0x419799
    int64_t result; // 0x419799
    return result;
}

// Address range: 0x4197d1 - 0x4197df
int64_t function_4197d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4197d1
    int64_t v1; // 0x4197d1
    *(char *)a4 = (char)((uint64_t)v1 / 256);
    int64_t v2; // 0x4197d1
    *(char *)a1 = *(char *)&v2;
    bool v3; // 0x4197d1
    return (v3 ? 0xffffffff : 1) + a1 & 0xffffffff;
}

// Address range: 0x419813 - 0x4198af
int64_t function_419813(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x419813
    int64_t v1; // 0x419813
    uint32_t v2 = (int32_t)v1 & 0x21777a53; // 0x419813
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x419813
    int64_t v4 = v2; // 0x419813
    if (v3 % 2 == 0) {
        uint64_t v5 = v4 + 0xe2730b11; // 0x419842
        uint32_t v6 = v2 - 0x1d8cf4ef;
        char * v7 = (char *)(a2 - 23); // 0x419848
        *v7 = *v7 + (char)(v5 / 256);
        char v8 = *(char *)(a5 + 0x681be44f); // 0x41984b
        int32_t v9 = __asm_insd((int16_t)(a5 & 0xff00 | (int64_t)(v8 | (char)a5))); // 0x419851
        *(int32_t *)a1 = v9;
        char v10 = *(char *)(int64_t)v6; // 0x419853
        return (int64_t)((char)v5 - v10) | (int64_t)(v6 & -0x1c000100);
    }
    int32_t v11 = *(int32_t *)(v1 + 0x2f4db59a); // 0x41981b
    int64_t v12 = *(int64_t *)(a4 - 43); // 0x419822
    *(int64_t *)((int64_t)(v11 + (int32_t)v1) - 8) = v12;
    bool v13; // 0x419813
    int64_t v14 = v13 ? -4 : 4; // 0x419825
    *(char *)((4 * a3 & 0x3fffffffc) - 23 + v4) = (char)a3;
    int64_t v15 = a3 & 0xffffffff; // 0x41982e
    char * v16 = (char *)(v15 - 74); // 0x41982f
    *v16 = *v16 - (char)(v1 / 256);
    return function_78b76645(v14 + a1, v14 + a2, v4, v15);
}

// Address range: 0x419912 - 0x419913
int64_t function_419912(void) {
    // 0x419912
    int64_t result; // 0x419912
    return result;
}

// Address range: 0x41996d - 0x419a1a
int64_t function_41996d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x41996d
    __asm_rcl((char)v2);
    int32_t v3 = a4;
    bool v4; // 0x41996d
    int32_t v5 = (int32_t)v4 - v3 + (int32_t)v2; // 0x41996f
    if (v5 != 0) {
        function_419912();
    }
    uint32_t v6 = -1 - v5;
    int64_t v7 = v6; // 0x419971
    int32_t * v8 = (int32_t *)(v2 - 113); // 0x419980
    *v8 = 0x2000000 * *v8;
    int64_t v9 = __asm_wait(); // 0x419986
    if (a4 != 0) {
        int64_t v10 = a3 & -256 | 120; // 0x419975
        *(int32_t *)a1 = (int32_t)v9;
        float80_t v11; // 0x41996d
        *(float64_t *)((v4 ? -4 : 4) + a1) = (float64_t)v11;
        char * v12 = (char *)v7; // 0x41999e
        *v12 = *v12 - 122;
        int64_t result = v10 & 0xffffff78; // 0x4199a5
        int32_t * v13 = (int32_t *)(result - 0x14a442be); // 0x4199a7
        *v13 = *v13 | (int32_t)v10;
        *(char *)(2 * (((v9 + 160) % 256 | v9 & 0xffffff00) + 0x9928dc92 + (int64_t)((char)v9 > 95)) & 0x1fffffffe) = (char)(a4 / 256);
        return result;
    }
    char v14 = __asm_in(-108); // 0x4199b1
    int64_t v15 = v9 & -256 | (int64_t)v14; // 0x4199b1
    char * v16 = (char *)(v7 - 125); // 0x4199b4
    *v16 = *v16 + v14;
    char * v17 = (char *)(4 * v2 + 0x63d05738 + v7); // 0x4199b7
    *v17 = *v17 ^ 120;
    char * v18 = (char *)v7; // 0x4199be
    *v18 = *v18 | (char)v6;
    int32_t * v19 = (int32_t *)(v15 + 32); // 0x4199c0
    *v19 = *v19 + 0x2b15814d;
    *(int32_t *)42 = *(int32_t *)42 & v3;
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t v20 = v4 ? -4 : 4; // 0x4199d8
    uint32_t v21 = 89 * *(int32_t *)((int64_t)L"\n2" | -0xff01); // 0x4199db
    uint64_t v22 = (int64_t)(v21 / 256) + v7; // 0x4199df
    int64_t result2 = __asm_hlt(v15 & 0xffffffff, v1 + v20, (int64_t)v21, (int64_t)L"\n2" | -0xff01); // 0x4199e2
    uint32_t v23 = *(int32_t *)(v22 % 256 | v7 & 0xffffff00); // 0x4199e3
    if (v23 >= (int32_t)((int64_t)L"\n2" || -0xff01)) {
        // 0x4199e7
        return result2;
    }
    uint16_t v24 = (int16_t)result2; // 0x419a17
    uint16_t v25 = (int16_t)v22 % 256; // 0x419a17
    return result2 & -0x10000 | (int64_t)(v24 / v25 % 256) | (int64_t)(256 * (v24 % v25));
}

// Address range: 0x419a30 - 0x419a36
int64_t function_419a30(void) {
    // 0x419a30
    return function_ffffffff8930fd40();
}

// Address range: 0x419b40 - 0x419c1b
int64_t function_419b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a4 - 0x700bbe2a); // 0x419b40
    int64_t v2; // 0x419b40
    bool v3; // 0x419b40
    *v1 = (char)v3 - (char)v2 + *v1;
    __asm_out_133((int16_t)a3, (char)v2);
    int64_t v4 = a6 & 0xffffffff; // 0x419b52
    int32_t v5 = *(int32_t *)(v4 + 100); // 0x419b54
    int32_t * v6 = (int32_t *)v4; // 0x419b5a
    *v6 = *v6 | (int32_t)a3;
    return (int64_t)(v5 + (int32_t)a2 & -0xff01 | 0x8f00) + 0x5a20a307;
}

// Address range: 0x419c60 - 0x419c63
int64_t function_419c60(void) {
    // 0x419c60
    int64_t result; // 0x419c60
    return result;
}

// Address range: 0x419c67 - 0x419c68
int64_t function_419c67(void) {
    // 0x419c67
    int64_t result; // 0x419c67
    return result;
}

// Address range: 0x419c70 - 0x419c71
int64_t function_419c70(void) {
    // 0x419c70
    int64_t result; // 0x419c70
    return result;
}

// Address range: 0x419c75 - 0x419c78
int64_t function_419c75(int64_t a1) {
    // 0x419c75
    int64_t result; // 0x419c75
    return result;
}

// Address range: 0x419c7f - 0x419c9e
int64_t function_419c7f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = 0x6d887e80; // bp-8, 0x419c7f
    int64_t v3 = (int64_t)&v2; // 0x419c7f
    int64_t v4; // 0x419c7f
    *(int32_t *)a1 = (int32_t)v4;
    int64_t v5 = v3; // 0x419c85
    int64_t v6; // 0x419c7f
    bool v7; // 0x419c7f
    if (v7) {
        int32_t v8 = v4 | v3; // 0x419c87
        int64_t v9 = function_419c67(); // 0x419c8b
        if (v8 >= 0 == (v8 != 0)) {
            v9 = function_419c70();
        }
        // 0x419c8e
        v6 = v9;
        int64_t v10; // 0x419c7f
        v5 = (int64_t)&v10;
    }
    // 0x419c8f
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)(v6 ^ a4 % 256);
    *(int64_t *)(v5 - 8) = v1;
    return function_ffffffff973fa3b9();
}

// Address range: 0x419d6f - 0x419d7a
int64_t function_419d6f(int64_t a1, int64_t a2) {
    // 0x419d6f
    int64_t v1; // 0x419d6f
    *(int64_t *)a1 = __asm_hlt(a1, a2, v1, v1);
    bool v2; // 0x419d6f
    return function_ffffffffaec406de((v2 ? -8 : 8) + a1);
}

// Address range: 0x419d80 - 0x419d82
int64_t function_419d80(int64_t a1) {
    // 0x419d80
    int64_t result; // 0x419d80
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x419dc7 - 0x419e3d
int64_t function_419dc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x419dc7
    int64_t result; // 0x419dc7
    return result;
}
