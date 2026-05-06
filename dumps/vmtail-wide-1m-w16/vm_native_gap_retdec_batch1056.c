/*
 * Targeted RetDec C for native executable gap queue batch 1056.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x210042-0x210242 rank=- name=- kind=- bytes=- uncovered=-
 *   0x210242-0x210442 rank=- name=- kind=- bytes=- uncovered=-
 *   0x210442-0x210642 rank=- name=- kind=- bytes=- uncovered=-
 *   0x210642-0x210842 rank=- name=- kind=- bytes=- uncovered=-
 *   0x210842-0x210a42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x210a42-0x210c42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x210c42-0x210e42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x210e42-0x211042 rank=- name=- kind=- bytes=- uncovered=-
 *   0x340e73-0x341073 rank=- name=- kind=- bytes=- uncovered=-
 *   0x341073-0x341273 rank=- name=- kind=- bytes=- uncovered=-
 *   0x341273-0x341473 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39b9b1-0x39bbb1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39bbb1-0x39bdb1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39bdb1-0x39bfb1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39bfb1-0x39c1b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39c5b1-0x39c7b1 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
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

int64_t function_11c52d();
int64_t function_1422f82a();
int64_t function_1a4637();
int64_t function_2090d55();
int64_t function_210042(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2100f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2101ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2101d3(int64_t a1);
int64_t function_2101f2(int64_t a1);
int64_t function_210220(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21022f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_210253(int64_t a1, int64_t a2);
int64_t function_210261(int64_t a1);
int64_t function_21026a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2102d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2102da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_210317(int64_t a1);
int64_t function_210365(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_210386(int64_t a1);
int64_t function_2103b0(void);
int64_t function_2103be(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2103c6(void);
int64_t function_2103fb(void);
int64_t function_2103fd(void);
int64_t function_2103fe(void);
int64_t function_210406(int64_t a1);
int64_t function_210411(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21041c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21043d(int64_t a1);
int64_t function_210444(void);
int64_t function_21045a(void);
int64_t function_2104a7(int64_t a1);
int64_t function_2104c8(int64_t a1);
int64_t function_210550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2105b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_210620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_210648(void);
int64_t function_210675(void);
int64_t function_2106a6(int64_t a1, int64_t a2);
int64_t function_2106bd(void);
int64_t function_2106c3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21073c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_210859(void);
int64_t function_210870(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_210886(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21093c(void);
int64_t function_210975(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_210a8a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_210aae(int64_t a1);
int64_t function_210afa(void);
int64_t function_210b37(int64_t a1);
int64_t function_210b9a(int64_t a1);
int64_t function_210bca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_210c9c(void);
int64_t function_210c9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_210cc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_210cd3(void);
int64_t function_210cd9(void);
int64_t function_210ce5(void);
int64_t function_210cfd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_210d08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_210ea6(void);
int64_t function_210ebf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_210f15(void);
int64_t function_210f38(void);
int64_t function_210f61(int64_t a1);
int64_t function_210f7e(int64_t a1);
int64_t function_210fe4(void);
int64_t function_211016(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2367c212();
int64_t function_340e40();
int64_t function_340e73(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_340e99(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_340ef7(void);
int64_t function_340f54(void);
int64_t function_340faf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34101b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_34105a(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_341145(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3411c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34127a(int64_t a1);
int64_t function_3412ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3412b3(void);
int64_t function_3412f5(void);
int64_t function_34132d(int64_t a1);
int64_t function_34136c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34137c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_341382(void);
int64_t function_341409(void);
int64_t function_34141f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_341438(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_341466(void);
int64_t function_34146b(void);
int64_t function_39b9b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ba37(void);
int64_t function_39ba7c(void);
int64_t function_39ba85(void);
int64_t function_39ba9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39badb(void);
int64_t function_39bb02(int64_t a1);
int64_t function_39bb23(int64_t a1);
int64_t function_39bb2a(int64_t a1);
int64_t function_39bb2f(void);
int64_t function_39bb35(int64_t a1);
int64_t function_39bbd1(void);
int64_t function_39bc05(int64_t a1);
int64_t function_39bc08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_39bc3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39bc93(int64_t a1);
int64_t function_39bd01(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_39be46(int64_t a1);
int64_t function_39be5c(int64_t a1);
int64_t function_39bebc(void);
int64_t function_39bfc4(void);
int64_t function_39bfda(void);
int64_t function_39bfec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39c0b5(void);
int64_t function_39c0d5(void);
int64_t function_39c0d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39c578();
int64_t function_39c5b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39c5f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39c630(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39c64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39c68c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39c6a3(int64_t a1);
int64_t function_39c6b4(int64_t a1);
int64_t function_39c6c8(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_39c6f6(void);
int64_t function_39c745(int64_t a1);
int64_t function_39c758(int64_t a1);
int64_t function_39c76c(int64_t a1);
int64_t function_39c77f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d2176df();
int64_t function_483ba445();
int64_t function_5c1e65();
int64_t function_717993c7();
int64_t function_71b10386();
int64_t function_9cd82b();
int64_t function_b07b14e();
int64_t function_f710a81();
int64_t function_ffffffff9da548bf();
int64_t function_ffffffffabe15521();
int64_t function_ffffffffb4764fd7();
int64_t function_ffffffffcbab3259();
int64_t function_ffffffffdbe5e5cb();
int64_t function_fffffffffb5d1976();
int64_t unknown_105696e0();
int64_t unknown_1110a852();
int64_t unknown_139bc794();
int64_t unknown_21762f8c();
int64_t unknown_33003fb();
int64_t unknown_33a2e20d();
int64_t unknown_3a085210();
int64_t unknown_3a0f1d8d();
int64_t unknown_3aa828c3();
int64_t unknown_3d34dd28();
int64_t unknown_436f0cb5();
int64_t unknown_444225ff();
int64_t unknown_4520db2a();
int64_t unknown_4c2a43a5();
int64_t unknown_5c2ba575();
int64_t unknown_5c73fff6();
int64_t unknown_68b91f82();
int64_t unknown_7a950119();
int64_t unknown_7d240f3b();
int64_t unknown_87fe602();
int64_t unknown_cbea8b0();
int64_t unknown_ffffffff851035c9();
int64_t unknown_ffffffff88c77a20();
int64_t unknown_ffffffff8cf8eb5d();
int64_t unknown_ffffffffa05f00a6();
int64_t unknown_ffffffffa83b1ffe();
int64_t unknown_ffffffffabee8119();
int64_t unknown_ffffffffbcf740fe();
int64_t unknown_ffffffffbd226c50();
int64_t unknown_ffffffffc4f9c4f0();
int64_t unknown_ffffffffc6e049de();
int64_t unknown_ffffffffc840cdb7();
int64_t unknown_ffffffffcedb4f2e();
int64_t unknown_ffffffffd4969768();
int64_t unknown_ffffffffdaa8ac40();
int64_t unknown_ffffffffdb291a18();
int64_t unknown_ffffffffe2b26cdf();
int64_t unknown_ffffffffe835519f();
int64_t unknown_ffffffffe83b03e2();
int64_t unknown_ffffffffe89ecb04();
int64_t unknown_fffffffff3c2d85d();
int64_t unknown_fffffffff6b5502a();
int64_t unknown_fffffffffbafaa61();

// Address range: 0x210042 - 0x2100ef
int64_t function_210042(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x210042
    int64_t v1; // 0x210042
    int64_t v2 = __asm_hlt() | v1;
    int64_t result = v2 & 0xffffffff; // 0x210049
    if ((int32_t)v2 >= 0) {
        // 0x21008b
        return result;
    }
    int32_t * v3 = (int32_t *)(a2 + 56); // 0x21004e
    *v3 = *v3 + (int32_t)v1;
    __asm_out(-98, (char)v2);
    return result;
}

// Address range: 0x2100f5 - 0x210142
int64_t function_2100f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_33003fb(); // 0x2100f5
    *(int32_t *)0x6301e8d6e6031f8c = (int32_t)v1;
    int64_t v2 = -36; // bp-8, 0x210103
    int64_t v3; // 0x2100f5
    float80_t v4; // 0x2100f5
    *(int32_t *)(v3 + 0x1e83afa) = (int32_t)v4;
    int32_t * v5 = (int32_t *)(a2 - 0x24190c2a); // 0x210117
    int32_t * v6 = (int32_t *)(a2 - 0x3a49fe18); // 0x21011d
    int64_t v7 = (int64_t)&v2 - 8; // 0x210110
    int64_t v8; // 0x2100f5
    *(int64_t *)v7 = v8;
    *v5 = (int32_t)v1 + 0x70febf1 + *v5;
    *v6 = *v6 + 1;
    int64_t v9 = __asm_wait(); // 0x21012c
    int64_t v10 = v7 - (int64_t)&g2; // 0x21012d
    v8 = v7;
    while (a4 == 0) {
        // 0x21010b
        v7 = v10 - 8;
        *(int64_t *)v7 = v8;
        *v5 = (int32_t)v9 + 0x70febf1 + *v5;
        *v6 = *v6 + 1;
        v9 = __asm_wait();
        v10 = v7 - (int64_t)&g2;
        v8 = v7;
    }
    char * v11 = (char *)(v9 + 0x1e87405); // 0x210131
    *v11 = *v11 + (char)v9;
    return v9 & 0xffffffff ^ 0x3e40390;
}

// Address range: 0x2101ad - 0x2101b8
int64_t function_2101ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2101ad
    int64_t v1; // 0x2101ad
    int32_t * v2 = (int32_t *)(v1 + 1); // 0x2101ad
    *v2 = *v2 + (int32_t)v1;
    int64_t result; // 0x2101ad
    *(char *)result = *(char *)&result | (char)a3;
    return result;
}

// Address range: 0x2101d3 - 0x2101d4
int64_t function_2101d3(int64_t a1) {
    // 0x2101d3
    int64_t result; // 0x2101d3
    return result;
}

// Address range: 0x2101f2 - 0x2101f3
int64_t function_2101f2(int64_t a1) {
    // 0x2101f2
    int64_t result; // 0x2101f2
    return result;
}

// Address range: 0x210220 - 0x21022e
int64_t function_210220(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x210220
    if (v1 != 0) {
        int64_t v2; // 0x210220
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    unknown_4520db2a(a1, a2, a3, a4);
    return function_71b10386();
}

// Address range: 0x21022f - 0x210239
int64_t function_21022f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21022f
    int64_t v1; // 0x21022f
    int32_t * v2 = (int32_t *)(4 * v1 + a3); // 0x210234
    *v2 = *v2 + (int32_t)v1;
    return function_21026a(a1, a2, a3, v1);
}

// Address range: 0x210253 - 0x21025d
int64_t function_210253(int64_t a1, int64_t a2) {
    // 0x210253
    int64_t v1; // 0x210253
    int32_t * v2 = (int32_t *)(v1 + 0x514ea9d0); // 0x210253
    *v2 = 0x2000000 * *v2;
    int64_t v3; // 0x210253
    return __asm_sti(a1, a2, v1) & -256 | (int64_t)*(char *)&v3;
}

// Address range: 0x210261 - 0x21026a
int64_t function_210261(int64_t a1) {
    // 0x210261
    float80_t v1; // 0x210261
    *(int16_t *)a1 = (int16_t)v1;
    int64_t result; // 0x210261
    int64_t v2 = result;
    *(int32_t *)v2 = *(int32_t *)&result + (int32_t)v2;
    return result;
}

// Address range: 0x21026a - 0x210273
int64_t function_21026a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21026a
    int64_t v1; // 0x21026a
    *(char *)a3 = (char)(v1 / 256) + (char)v1;
    int64_t v2; // 0x21026a
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    char * v4 = (char *)(v1 + 1); // 0x21026e
    *v4 = *v4 + (char)a4;
    return function_210253(a1, a2);
}

// Address range: 0x2102d1 - 0x2102da
int64_t function_2102d1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2102d1
    int64_t result; // 0x2102d1
    bool v1; // 0x2102d1
    if (v1 || v1) {
        // 0x2102f5
        return result;
    }
    char * v2 = (char *)(a1 + 0x1436e854); // 0x2102d3
    *v2 = *v2 - (char)a3;
    return result;
}

// Address range: 0x2102da - 0x2102f5
int64_t function_2102da(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x7c17ab0d); // 0x2102da
    *v1 = *v1 + (char)a3;
    int64_t v2; // 0x2102da
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    int64_t v4; // 0x2102da
    int64_t * v5 = (int64_t *)(v4 - 0x24fb1000); // 0x2102e9
    *v5 = *v5 + v4 + (int64_t)((v2 & 256) != 0);
    return unknown_5c73fff6();
}

// Address range: 0x210317 - 0x21031a
int64_t function_210317(int64_t a1) {
    // 0x210317
    int64_t result; // 0x210317
    return result;
}

// Address range: 0x210365 - 0x21036a
int64_t function_210365(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x210365
    int64_t result; // 0x210365
    return result;
}

// Address range: 0x210386 - 0x210387
int64_t function_210386(int64_t a1) {
    // 0x210386
    int64_t result; // 0x210386
    return result;
}

// Address range: 0x2103b0 - 0x2103b1
int64_t function_2103b0(void) {
    // 0x2103b0
    int64_t result; // 0x2103b0
    return result;
}

// Address range: 0x2103be - 0x2103c6
int64_t function_2103be(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2103be
    int64_t result; // 0x2103be
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0x2103c6 - 0x2103c8
int64_t function_2103c6(void) {
    // 0x2103c6
    return function_2103b0();
}

// Address range: 0x2103fb - 0x2103fd
int64_t function_2103fb(void) {
    // 0x2103fb
    return function_2103fe();
}

// Address range: 0x2103fd - 0x2103fe
int64_t function_2103fd(void) {
    // 0x2103fd
    int64_t v1; // 0x2103fd
    bool v2; // 0x2103fd
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2103fe - 0x210405
int64_t function_2103fe(void) {
    // 0x2103fe
    int64_t v1; // 0x2103fe
    float80_t v2; // 0x2103fe
    *(int16_t *)(v1 + 0x1e89805) = (int16_t)v2;
    bool v3; // 0x2103fe
    return v1 & -0xff01 | 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | 512;
}

// Address range: 0x210406 - 0x21040f
int64_t function_210406(int64_t a1) {
    char * v1 = (char *)(a1 + 1); // 0x210406
    int64_t result; // 0x210406
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x210411 - 0x210417
int64_t function_210411(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x210411
    int64_t v1; // 0x210411
    int64_t result = (v1 | v1) & 0xffffffff; // 0x210411
    int32_t * v2 = (int32_t *)(result + 4 * v1); // 0x210413
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x21041c - 0x210424
int64_t function_21041c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21041c
    int64_t result; // 0x21041c
    unsigned char v1 = (char)result;
    *(char *)a3 = v1 / 2 | 128 * v1;
    return result;
}

// Address range: 0x21043d - 0x210441
int64_t function_21043d(int64_t a1) {
    // 0x21043d
    int64_t result; // 0x21043d
    return result;
}

// Address range: 0x210444 - 0x210445
int64_t function_210444(void) {
    // 0x210444
    int64_t result; // 0x210444
    return result;
}

// Address range: 0x21045a - 0x21045c
int64_t function_21045a(void) {
    // 0x21045a
    return function_210444();
}

// Address range: 0x2104a7 - 0x2104a8
int64_t function_2104a7(int64_t a1) {
    // 0x2104a7
    int64_t result; // 0x2104a7
    return result;
}

// Address range: 0x2104c8 - 0x2104ca
int64_t function_2104c8(int64_t a1) {
    // 0x2104c8
    int64_t result; // 0x2104c8
    return result;
}

// Address range: 0x210550 - 0x21058d
int64_t function_210550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_436f0cb5(); // 0x210551
    unknown_ffffffff8cf8eb5d();
    int64_t v2 = v1 & 0xffffffff; // 0x21055c
    unknown_ffffffffd4969768();
    while (v2 != 1) {
        // 0x21055e
        v2--;
        unknown_ffffffffd4969768();
    }
    // 0x21056f
    unknown_5c2ba575();
    int32_t * v3 = (int32_t *)(a5 + 0x19e7654); // 0x210579
    *v3 = *v3 - 0x17ffecb9;
    return function_ffffffffcbab3259();
}

// Address range: 0x2105b0 - 0x2105bf
int64_t function_2105b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2105b0
    int64_t v1; // 0x2105b0
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t result = unknown_ffffffffc840cdb7(); // 0x2105b1
    char * v2 = (char *)(a4 + 0x1e80089); // 0x2105b6
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x210620 - 0x210643
int64_t function_210620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x210620
    int64_t result; // 0x210620
    *(int32_t *)0x7556cdc794d0ee7d = (int32_t)result;
    if (a4 != 0) {
        // 0x21062b
        return result;
    }
    // 0x210635
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1 = unknown_ffffffffdaa8ac40(); // 0x210639
    return (v1 + 94) % 256 | v1 & -256;
}

// Address range: 0x210648 - 0x21064b
int64_t function_210648(void) {
    // 0x210648
    int64_t v1; // 0x210648
    return v1 & 0xffffffff;
}

// Address range: 0x210675 - 0x210676
int64_t function_210675(void) {
    // 0x210675
    int64_t result; // 0x210675
    return result;
}

// Address range: 0x2106a6 - 0x2106ba
int64_t function_2106a6(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0x6d700dd2); // 0x2106a6
    int64_t v2; // 0x2106a6
    *v1 = *v1 + (int32_t)v2;
    *(char *)0x1e8f4dcf6d3f01c = (char)v2;
    bool v3; // 0x2106a6
    return __asm_sti((v3 ? -4 : 4) + a1, v2, v2);
}

// Address range: 0x2106bd - 0x2106c0
int64_t function_2106bd(void) {
    // 0x2106bd
    int64_t result; // 0x2106bd
    return result;
}

// Address range: 0x2106c3 - 0x2106ec
int64_t function_2106c3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2106c3
    unknown_ffffffff851035c9();
    *(int32_t *)-0x7d8e5990 = *(int32_t *)-0x7d8e5990 + 99;
    unknown_105696e0();
    return a2 & 0xffffffff;
}

// Address range: 0x21073c - 0x2107a5
int64_t function_21073c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_139bc794(); // 0x21078e
    int64_t v1; // 0x21073c
    if (*(int32_t *)((257 * v1 / 256 + a3) % 256 || a3 & -256) < -0x18a31991) {
        // 0x21079c
        *(int32_t *)(v1 + a1 & 0xffffffff) = (int32_t)result;
        return result;
    }
    int32_t * v2 = (int32_t *)(a4 - 24 + v1); // 0x210784
    int64_t v3; // 0x21073c
    *v2 = *v2 + (int32_t)(int64_t)&v3;
    return result;
}

// Address range: 0x210859 - 0x21085a
int64_t function_210859(void) {
    // 0x210859
    int64_t result; // 0x210859
    return result;
}

// Address range: 0x210870 - 0x210886
int64_t function_210870(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x210870
    int64_t v1; // 0x210870
    int32_t * v2 = (int32_t *)(v1 - 0x19e9d3f); // 0x210870
    *v2 = *v2 + (int32_t)a4;
    return function_210859();
}

// Address range: 0x210886 - 0x21088a
int64_t function_210886(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x210886
    int64_t result; // 0x210886
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x21093c - 0x21093f
int64_t function_21093c(void) {
    // 0x21093c
    int64_t result; // 0x21093c
    return result;
}

// Address range: 0x210975 - 0x210a73
int64_t function_210975(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t v4; // 0x210975
    uint64_t v5 = v4 & a3;
    unsigned char v6 = (char)v5; // 0x210975
    bool v7; // 0x210975
    if (v6 >= 1) {
        int32_t v8 = a2;
        __asm_outsd((int16_t)a3, v8);
        int64_t v9 = unknown_21762f8c(); // 0x210985
        int64_t v10 = (v7 ? -1 : 1) + a1; // 0x21098b
        v3 = v10;
        int32_t * v11 = (int32_t *)v9; // 0x210998
        *v11 = *v11 + v8;
        int64_t result = v9 & 0x14b886d9 | 0xeb477926; // 0x21099a
        int32_t * v12 = (int32_t *)(v10 - 0x7fe17c6); // 0x21099f
        uint32_t v13 = *v12; // 0x21099f
        uint32_t v14 = v13 + (int32_t)v10; // 0x21099f
        unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x21099f
        *v12 = v14;
        if (v15 % 2 == 0) {
            // 0x2109b2
            return result;
        }
        // 0x2109a7
        *(int32_t *)a3 = (int32_t)v3;
        int32_t * v16 = (int32_t *)((v4 & 0xffffffff) - 48); // 0x2109a9
        int32_t v17 = *v16; // 0x2109a9
        int64_t v18; // bp-325, 0x210975
        *v16 = v17 + ((int32_t)(v14 < v13) | (int32_t)(int64_t)&v18);
        return result;
    }
    int64_t v19 = 2 * a3 & 254 | a3 & -256; // 0x2109c1
    int32_t * v20 = (int32_t *)(v5 % 256 | v4 & -256); // 0x2109c6
    int32_t v21 = *v20; // 0x2109c6
    int32_t v22 = a4; // 0x2109c6
    int32_t v23 = v21 + v22; // 0x2109c6
    *v20 = v23;
    int32_t v24 = *(int32_t *)(v19 - 0x1c534808); // 0x2109c8
    uint32_t v25 = v23 < 0 == ((v23 ^ v21) & (v23 ^ v22)) < 0 == (v23 != 0) ? v24 : (int32_t)v4; // 0x2109c8
    int64_t v26 = v25; // 0x2109c8
    __asm_in(-24);
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
    uint32_t v27 = (int32_t)v19; // 0x2109d3
    uint32_t v28 = *(int32_t *)(v1 - 0x17fb0f04) + v27; // 0x2109d3
    int64_t v29 = unknown_ffffffffe2b26cdf(); // 0x2109d9
    *(int64_t *)(v26 - 8) = v29;
    unsigned char v30 = (char)(v1 / 256); // 0x2109df
    char v31 = v28 < v27; // 0x2109df
    unsigned char v32 = *(char *)&v3 + v31; // 0x2109df
    unsigned char v33 = v30 - v32; // 0x2109df
    v1 = 256 * (int64_t)v33 | v1 & -0xff01;
    if (v33 == 0 || (v28 < v27 ? v32 != -1 || v33 - v31 > v30 : v32 > v30)) {
        // 0x210a23
        return unknown_ffffffffcedb4f2e();
    }
    // 0x2109e3
    *(char *)v3 = *(char *)&v2;
    int64_t v34 = v7 ? -1 : 1; // 0x2109ec
    int64_t v35 = v3 + v34; // 0x2109ec
    int64_t v36 = v2 + v34; // 0x2109ec
    *(char *)v35 = *(char *)v36;
    int64_t v37 = v35 + v34; // 0x2109ed
    int64_t v38 = v36 + v34; // 0x2109ed
    v2 = v38;
    int32_t * v39 = (int32_t *)(v37 - 0x7cadf47a + 2 * v37); // 0x2109f0
    *v39 = *v39 + v28;
    int64_t v40 = v37 + (v7 ? -4 : 4); // 0x2109fb
    v3 = v40;
    int64_t v41 = unknown_87fe602(v40, v38); // 0x2109fc
    *(char *)-0x2b9c55fe1797fa80 = (char)v41;
    if (((int32_t)v29 & -256 || 23) < *(int32_t *)v37) {
        // 0x210a0d
        unknown_ffffffffdb291a18(0x25fd3a05);
        return v25 - 8;
    }
    int32_t * v42 = (int32_t *)v41; // 0x210a42
    *v42 = *v42 & (int32_t)v41;
    char * v43 = (char *)v41; // 0x210a44
    *v43 = *v43 - 114;
    int64_t v44 = v26 - 16; // 0x210a47
    *(int64_t *)v44 = v41;
    int64_t v45 = unknown_ffffffffbd226c50(); // 0x210a4a
    char * v46 = (char *)(v1 + 0x60ef3c00); // 0x210a4f
    *v46 = *v46 + v6;
    int64_t v47 = v4 + 0xbbf1a388 + v45 & 0xffff00ff | (int64_t)&g7; // 0x210a5c
    int32_t * v48 = (int32_t *)(v47 + 6); // 0x210a5e
    *v48 = *v48 + (int32_t)v44;
    *(int32_t *)v3 = *(int32_t *)v2;
    int64_t result2 = v47 ^ 222; // 0x210a64
    char * v49 = (char *)(v1 + 91); // 0x210a66
    *v49 = *v49 ^ (char)(v4 / 256);
    *(int64_t *)((v1 + v44 & 0xffffffff) - 8) = v4 & 0xffffffff & result2;
    __asm_out_134(88, (int32_t)result2);
    return result2;
}

// Address range: 0x210a8a - 0x210a8c
int64_t function_210a8a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x210a8a
    int64_t v1; // 0x210a8a
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x210aae - 0x210ab4
int64_t function_210aae(int64_t a1) {
    // 0x210aae
    int64_t result; // 0x210aae
    return result;
}

// Address range: 0x210afa - 0x210afe
int64_t function_210afa(void) {
    // 0x210afa
    int64_t v1; // 0x210afa
    return v1 & -0xff01 | (int64_t)&g6;
}

// Address range: 0x210b37 - 0x210b3c
int64_t function_210b37(int64_t a1) {
    // 0x210b37
    int64_t v1; // 0x210b37
    int64_t v2 = v1;
    return (v2 + 255) % 256 | v2 & -256;
}

// Address range: 0x210b9a - 0x210b9d
int64_t function_210b9a(int64_t a1) {
    // 0x210b9a
    int64_t result; // 0x210b9a
    return result;
}

// Address range: 0x210bca - 0x210c9c
int64_t function_210bca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x210bca
    int64_t v1; // 0x210bca
    unsigned char v2 = (char)(v1 / 256); // 0x210bca
    unsigned char v3 = v2 + (char)v1; // 0x210bca
    if (v3 >= v2 && v3 != 0) {
        // 0x210bce
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return a4 & 0xffffffff;
    }
    // 0x210bfc
    __asm_int1();
    __asm_int3();
    unknown_ffffffffe89ecb04();
    int32_t * v4 = (int32_t *)(a1 - 0x76fec298); // 0x210c03
    *v4 = *v4 + (int32_t)a1;
    int32_t * v5 = (int32_t *)(v1 - 91); // 0x210c12
    *v5 = *v5 + (int32_t)v1;
    uint64_t v6 = unknown_ffffffff88c77a20(); // 0x210c1a
    char v7 = *(char *)(8 * a2 + 118 + v1) | (char)(v6 / 256); // 0x210c1f
    *(char *)(v1 - 36) = (char)a4;
    int64_t result = function_11c52d(); // 0x210c27
    if (v7 == 0) {
        // 0x210c2e
        return result;
    }
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x210c1f
    *(int32_t *)result = (int32_t)result;
    bool v9; // 0x210bca
    *(int64_t *)((256 * (int64_t)v7 | v6 & 0xffff00ff) - 8) = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 256 * (int64_t)v9 | 128 * (int64_t)(v7 < 0) | 4 * (int64_t)(v8 % 2 == 0) | 2;
    return function_210cc5(a1, a2, a3, 0x1e8d7a6);
}

// Address range: 0x210c9c - 0x210c9f
int64_t function_210c9c(void) {
    // 0x210c9c
    int64_t result; // 0x210c9c
    return result;
}

// Address range: 0x210c9f - 0x210cb5
int64_t function_210c9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x210c9f
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result = unknown_ffffffffa05f00a6(); // 0x210ca0
    char * v1 = (char *)(a4 + 0x62f75ad9); // 0x210ca5
    *v1 = *v1 - 24;
    int32_t * v2 = (int32_t *)result; // 0x210cac
    *v2 = *v2 + (int32_t)result;
    *(int64_t *)a5 = result & a5;
    char * v3 = (char *)result; // 0x210cb1
    *v3 = *v3 + 64;
    return result;
}

// Address range: 0x210cc5 - 0x210ccc
int64_t function_210cc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x210cc5
    int64_t result; // 0x210cc5
    return result;
}

// Address range: 0x210cd3 - 0x210cd4
int64_t function_210cd3(void) {
    // 0x210cd3
    int64_t result; // 0x210cd3
    return result;
}

// Address range: 0x210cd9 - 0x210cde
int64_t function_210cd9(void) {
    // 0x210cd9
    return function_ffffffffb4764fd7();
}

// Address range: 0x210ce5 - 0x210ce6
int64_t function_210ce5(void) {
    // 0x210ce5
    int64_t result; // 0x210ce5
    return result;
}

// Address range: 0x210cfd - 0x210d06
int64_t function_210cfd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 45 + 8 * a2); // 0x210cfd
    bool v2; // 0x210cfd
    *v1 = *v1 + (char)(a4 / 256) + (char)v2;
    int64_t result; // 0x210cfd
    return result;
}

// Address range: 0x210d08 - 0x210d42
int64_t function_210d08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x210d08
    int64_t v1; // 0x210d08
    *(char *)a3 = (char)v1 + (char)a3;
    __asm_iretd(a1, a2);
    unknown_ffffffffabee8119();
    if ((*(char *)(v1 - 127) & (char)(a4 / 256)) != 0) {
        function_210ce5();
    }
    int32_t * v2 = (int32_t *)(v1 + 0x4e1a00e0 + 2 * v1); // 0x210d1c
    *v2 = *v2 + (int32_t)a3;
    unknown_fffffffff6b5502a();
    __asm_out_133((int16_t)a3, (int32_t)function_1a4637());
    return function_2090d55();
}

// Address range: 0x210ea6 - 0x210eab
int64_t function_210ea6(void) {
    // 0x210ea6
    return function_ffffffffabe15521();
}

// Address range: 0x210ebf - 0x210ec8
int64_t function_210ebf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x210ebf
    int64_t v1; // 0x210ebf
    return v1 | 232;
}

// Address range: 0x210f15 - 0x210f18
int64_t function_210f15(void) {
    // 0x210f15
    int64_t result; // 0x210f15
    return result;
}

// Address range: 0x210f38 - 0x210f3d
int64_t function_210f38(void) {
    // 0x210f38
    return function_1422f82a();
}

// Address range: 0x210f61 - 0x210f62
int64_t function_210f61(int64_t a1) {
    // 0x210f61
    int64_t result; // 0x210f61
    return result;
}

// Address range: 0x210f7e - 0x210f86
int64_t function_210f7e(int64_t a1) {
    // 0x210f7e
    int64_t v1; // 0x210f7e
    return v1 & 0x57dffcd6 | 0xa8200329;
}

// Address range: 0x210fe4 - 0x210fe9
int64_t function_210fe4(void) {
    // 0x210fe4
    return function_ffffffffdbe5e5cb();
}

// Address range: 0x211016 - 0x211026
int64_t function_211016(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x38856161); // 0x211016
    *v1 = -1 - *v1;
    float80_t v2; // 0x211016
    *(int64_t *)a4 = (int64_t)v2;
    return function_3d2176df();
}

// Address range: 0x340e73 - 0x340e8e
int64_t function_340e73(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x662b5dfc); // 0x340e7a
    int64_t v2; // 0x340e73
    *v1 = *v1 | (char)v2;
    int64_t result; // 0x340e73
    if (a4 == 0) {
        result = function_340e40();
    }
    // 0x340e84
    return result;
}

// Address range: 0x340e99 - 0x340eb2
int64_t function_340e99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x340e99
    int64_t v1; // 0x340e99
    *(int32_t *)a4 = (int32_t)v1 - (int32_t)a4;
    return function_ffffffff9da548bf();
}

// Address range: 0x340ef7 - 0x340ef8
int64_t function_340ef7(void) {
    // 0x340ef7
    int64_t result; // 0x340ef7
    return result;
}

// Address range: 0x340f54 - 0x340f5f
int64_t function_340f54(void) {
    // 0x340f54
    int64_t v1; // 0x340f54
    *(char *)-0x41fe17f804c7a140 = (char)v1;
    return function_340ef7();
}

// Address range: 0x340faf - 0x340fba
int64_t function_340faf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x340faf
    int64_t v1; // 0x340faf
    int32_t * v2 = (int32_t *)(v1 - 0x1c5c650c); // 0x340faf
    *v2 = *v2 + (int32_t)a4;
    return function_b07b14e();
}

// Address range: 0x34101b - 0x34104f
int64_t function_34101b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x34101b
    char * v4 = (char *)(v3 - 77); // 0x34101e
    *v4 = *v4 / 2;
    unsigned char v5 = *(char *)&v1; // 0x341033
    unsigned char v6 = *(char *)&v2; // 0x341033
    bool v7; // 0x34101b
    int64_t v8 = v7 ? -1 : 1; // 0x341033
    int64_t v9 = v2 + v8; // 0x341033
    int64_t v10 = v1 + v8; // 0x341033
    *(char *)0x38da6e45 = *(char *)0x38da6e45 + (char)(v3 / 256);
    int32_t * v11 = (int32_t *)(v10 - 0x191434bb); // 0x341044
    *v11 = *v11 + 1;
    char * v12 = (char *)(__asm_sti(v9, v10, a3 & -0x10000 | a3 - 256 * (v3 + (int64_t)(v5 < v6)) & 0xff00 | 93) + 63); // 0x34104b
    *v12 = *v12 - (char)(a4 / 256);
    return __asm_iretd(v9, v10);
}

// Address range: 0x34105a - 0x341068
int64_t function_34105a(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x34105a
    int64_t v1; // 0x34105a
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return result;
}

// Address range: 0x341145 - 0x3411bf
int64_t function_341145(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x341145
    int64_t result; // 0x341145
    bool v1; // 0x341145
    if (a4 != 1 != v1) {
        // 0x341147
        return result;
    }
    int32_t v2 = *(int32_t *)(a4 - 46); // 0x341186
    char * v3 = (char *)((int64_t)(v2 ^ (int32_t)result) - 85); // 0x341189
    char v4 = a3; // 0x341189
    *v3 = *v3 + v4;
    int64_t v5; // 0x341145
    *(char *)v5 = v4;
    int64_t v6 = unknown_3d34dd28(); // 0x341192
    int32_t * v7 = (int32_t *)((a3 & -256 | (int64_t)*(char *)&v5) - 0x3c006d25); // 0x341197
    *v7 = *v7 + (int32_t)result;
    *(int32_t *)a1 = (int32_t)v6;
    *(char *)0x5091e2612f2e088a = (char)v6;
    uint64_t v8 = v6 + 0x72158b80; // 0x3411b2
    char v9 = *(char *)((v1 ? -4 : 4) + a2); // 0x3411b7
    return 256 * (int64_t)(v9 | (char)(v8 / 256)) | v8 & 0xffff00ff;
}

// Address range: 0x3411c9 - 0x3411d1
int64_t function_3411c9(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x3b7f92fc); // 0x3411c9
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x3411c9
    return result;
}

// Address range: 0x34127a - 0x34127f
int64_t function_34127a(int64_t a1) {
    // 0x34127a
    int64_t v1; // 0x34127a
    return v1 & -256 | (int64_t)__asm_in_135((char)a1);
}

// Address range: 0x3412ac - 0x3412b3
int64_t function_3412ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3412ac
    int64_t result; // 0x3412ac
    int32_t * v1 = (int32_t *)(result - 0x5cd53bfd); // 0x3412ac
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x3412b3 - 0x3412b8
int64_t function_3412b3(void) {
    // 0x3412b3
    return function_9cd82b();
}

// Address range: 0x3412f5 - 0x3412f7
int64_t function_3412f5(void) {
    // 0x3412f5
    int64_t result; // 0x3412f5
    return result;
}

// Address range: 0x34132d - 0x341330
int64_t function_34132d(int64_t a1) {
    // 0x34132d
    int64_t result; // 0x34132d
    return result;
}

// Address range: 0x34136c - 0x341373
int64_t function_34136c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34136c
    int64_t result; // 0x34136c
    *(char *)result = 0;
    return result;
}

// Address range: 0x34137c - 0x341381
int64_t function_34137c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34137c
    int64_t result; // 0x34137c
    return result;
}

// Address range: 0x341382 - 0x341389
int64_t function_341382(void) {
    // 0x341382
    int64_t v1; // 0x341382
    bool v2; // 0x341382
    return v1 + 0xc5ffc3b3 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x341409 - 0x34140a
int64_t function_341409(void) {
    // 0x341409
    int64_t result; // 0x341409
    return result;
}

// Address range: 0x34141f - 0x341438
int64_t function_34141f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x34141f
    int64_t v1; // 0x34141f
    *(char *)a2 = (char)(v1 ^ a4 / 256);
    int64_t result; // 0x34141f
    *(char *)0x63b20a06c83af960 = (char)result;
    char * v2 = (char *)(result + 0x3d000002);
    *v2 = *v2 + (char)a4;
    int64_t v3 = result;
    *(int32_t *)v3 = *(int32_t *)&result + (int32_t)v3;
    return result;
}

// Address range: 0x341438 - 0x341465
int64_t function_341438(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x341438
    int64_t v1; // 0x341438
    char v2 = v1 / 256; // 0x341439
    bool v3; // 0x341438
    *(char *)a3 = (char)a3 - v2 + (char)v3;
    int32_t * v4 = (int32_t *)(a1 - 24); // 0x34143d
    *v4 = *v4 + 0x686c4501;
    int64_t v5; // 0x341438
    *(char *)a1 = *(char *)&v5 + v2;
    function_341409();
    *(int64_t *)v1 = unknown_ffffffffe835519f();
    return function_5c1e65();
}

// Address range: 0x341466 - 0x34146b
int64_t function_341466(void) {
    // 0x341466
    int64_t result; // 0x341466
    return result;
}

// Address range: 0x34146b - 0x34146e
int64_t function_34146b(void) {
    // 0x34146b
    int64_t result; // 0x34146b
    return result;
}

// Address range: 0x39b9b1 - 0x39b9ce
int64_t function_39b9b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39b9b1
    int64_t v1; // 0x39b9b1
    *(int32_t *)a3 = (int32_t)v1 - (int32_t)a1;
    int64_t v2; // 0x39b9b1
    *(int32_t *)v2 = (int32_t)a2;
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x39b9b1
    int64_t v4 = (v3 ? -8 : 8) + a1; // 0x39b9c4
    *(char *)v4 = *(char *)&v2;
    return v4 + (v3 ? 0xffffffff : 1) & 0xffffffff;
}

// Address range: 0x39ba37 - 0x39ba38
int64_t function_39ba37(void) {
    // 0x39ba37
    int64_t result; // 0x39ba37
    return result;
}

// Address range: 0x39ba7c - 0x39ba81
int64_t function_39ba7c(void) {
    // 0x39ba7c
    int64_t v1; // 0x39ba7c
    int64_t v2 = v1;
    return (v2 + 154) % 256 | v2 & -256;
}

// Address range: 0x39ba85 - 0x39ba95
int64_t function_39ba85(void) {
    // 0x39ba85
    int64_t result; // 0x39ba85
    return result;
}

// Address range: 0x39ba9c - 0x39baa8
int64_t function_39ba9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 5); // 0x39ba9c
    int64_t result; // 0x39ba9c
    *v1 = *v1 + (char)(result / 256);
    char v2 = *(char *)-0x5c04f65a; // 0x39ba9f
    *(char *)-0x5c04f65a = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x39badb - 0x39bade
int64_t function_39badb(void) {
    // 0x39badb
    int64_t result; // 0x39badb
    return result;
}

// Address range: 0x39bb02 - 0x39bb0c
int64_t function_39bb02(int64_t a1) {
    // 0x39bb02
    return __asm_int3();
}

// Address range: 0x39bb23 - 0x39bb29
int64_t function_39bb23(int64_t a1) {
    // 0x39bb23
    return function_fffffffffb5d1976();
}

// Address range: 0x39bb2a - 0x39bb2b
int64_t function_39bb2a(int64_t a1) {
    // 0x39bb2a
    int64_t result; // 0x39bb2a
    return result;
}

// Address range: 0x39bb2f - 0x39bb30
int64_t function_39bb2f(void) {
    // 0x39bb2f
    int64_t result; // 0x39bb2f
    return result;
}

// Address range: 0x39bb35 - 0x39bb36
int64_t function_39bb35(int64_t a1) {
    // 0x39bb35
    int64_t result; // 0x39bb35
    return result;
}

// Address range: 0x39bbd1 - 0x39bbd6
int64_t function_39bbd1(void) {
    // 0x39bbd1
    return function_483ba445();
}

// Address range: 0x39bc05 - 0x39bc08
int64_t function_39bc05(int64_t a1) {
    // 0x39bc05
    int64_t v1; // 0x39bc05
    int64_t v2 = v1;
    bool v3; // 0x39bc05
    return (v2 + 101 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x39bc08 - 0x39bc30
int64_t function_39bc08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_3a085210(); // 0x39bc0a
    char * v2 = (char *)(v1 + 0x48c6ae00); // 0x39bc0f
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x39bc08
    char * v4 = (char *)(v3 + 0x2901e800); // 0x39bc15
    *v4 = *v4 + (char)(a4 / 256);
    int64_t v5; // 0x39bc08
    *(int32_t *)a4 = *(int32_t *)&v5 + (int32_t)a2;
    __asm_in_136(-72);
    bool v6; // 0x39bc08
    int64_t v7 = v6 ? -1 : 1; // 0x39bc24
    int32_t * v8 = (int32_t *)(a4 - 14); // 0x39bc28
    int64_t v9; // 0x39bc08
    *v8 = *v8 + (int32_t)(int64_t)&v9;
    return function_f710a81(v7 + a1, v7 + a2);
}

// Address range: 0x39bc3f - 0x39bc47
int64_t function_39bc3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39bc3f
    return function_717993c7();
}

// Address range: 0x39bc93 - 0x39bcad
int64_t function_39bc93(int64_t a1) {
    // 0x39bc93
    int64_t v1; // 0x39bc93
    int32_t * v2 = (int32_t *)(v1 + 0x681da760); // 0x39bc93
    *v2 = *v2 + (int32_t)v1;
    unsigned char v3 = *(char *)(v1 + (int64_t)*(char *)0x1e8983631dbdcdf); // 0x39bca3
    return v1 & -256 | (int64_t)v3;
}

// Address range: 0x39bd01 - 0x39be06
int64_t function_39bd01(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x39bd01
    int64_t v1; // 0x39bd01
    uint64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x39bd01
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x39bd01
    int64_t v6 = unknown_7a950119(v5); // 0x39bd13
    int32_t * v7 = (int32_t *)(4 * v1 + 0x5ee6db68); // 0x39bd18
    uint32_t v8 = *v7; // 0x39bd18
    uint32_t v9 = v8 + (int32_t)v1; // 0x39bd18
    *v7 = v9;
    int32_t v10 = (int32_t)v6 - 0x1338ffed + (int32_t)(v9 < v8); // 0x39bd1f
    if (v10 >= 0) {
        int32_t v11 = *(int32_t *)&v3; // 0x39bd97
        __asm_outsd(-2560, v11);
        if (v10 < -0x19c79d44) {
            char * v12 = (char *)(int64_t)(v10 + 0x19c79d45); // 0x39bdf2
            *v12 = *v12 - 40;
            int64_t v13 = unknown_ffffffffa83b1ffe(); // 0x39bdf8
            char * v14 = (char *)(a4 - 0x152f2200); // 0x39bdfd
            *v14 = *v14 + (char)v2;
            return v13 & -256 | (int64_t)((char)v13 - *(char *)a4);
        }
        // 0x39bd9f
        unknown_4c2a43a5();
        unknown_cbea8b0();
        __asm_outsb(-2560, (char)v11);
        unsigned char v15 = *(char *)(v3 - 0x379f86f7); // 0x39bdb8
        unsigned char v16 = (char)(a4 / 512); // 0x39bdb8
        char v17 = v15 - v16; // 0x39bdb8
        return a4 / 2 & 0x7fff00ff | 256 * (64 * (int64_t)(v17 == 0) | (int64_t)(v15 < v16) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v15 % 16 - v16 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v17) % 2 == 0)) | 512;
    }
    // 0x39bd26
    *(char *)0x1ef3542d = *(char *)0x1ef3542d + (char)(v2 / 256);
    char * v18 = (char *)(a4 - 0x7f13a9e2); // 0x39bd2c
    *v18 = *v18 & (char)v2;
    char * v19 = (char *)((int64_t)(v10 - 0x3fe175a & -101) + 91); // 0x39bd39
    *v19 = *v19 - (char)(a4 / 256);
    *(int32_t *)-0x6f6137b5 = *(int32_t *)-0x6f6137b5 + (int32_t)v5;
    int32_t * v20 = (int32_t *)(v2 - 102); // 0x39bd53
    *v20 = *v20 + (int32_t)v2;
    int64_t v21 = unknown_fffffffffbafaa61(); // 0x39bd5b
    int32_t * v22 = (int32_t *)((v2 & 0xff00) + v2 & 0xff00 | v2 & -0xff01); // 0x39bd74
    *v22 = *v22 + 0x2a4f5129 + ((int32_t)v21 ^ -0x4dfe1751);
    int128_t v23; // 0x39bd01
    *(int128_t *)0xae82f600 = (int128_t)__asm_movaps(v23);
    int64_t v24 = unknown_68b91f82(); // 0x39bd7c
    char * v25 = (char *)(v24 + 58); // 0x39bd82
    *v25 = *v25 | (char)v5;
    *(char *)0xae82f600 = (char)v24;
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x39be46 - 0x39be47
int64_t function_39be46(int64_t a1) {
    // 0x39be46
    int64_t result; // 0x39be46
    return result;
}

// Address range: 0x39be5c - 0x39be62
int64_t function_39be5c(int64_t a1) {
    // 0x39be5c
    int64_t result; // 0x39be5c
    return result;
}

// Address range: 0x39bebc - 0x39bebd
int64_t function_39bebc(void) {
    // 0x39bebc
    int64_t result; // 0x39bebc
    return result;
}

// Address range: 0x39bfc4 - 0x39bfc5
int64_t function_39bfc4(void) {
    // 0x39bfc4
    int64_t result; // 0x39bfc4
    return result;
}

// Address range: 0x39bfda - 0x39bfdc
int64_t function_39bfda(void) {
    // 0x39bfda
    return function_39bfc4();
}

// Address range: 0x39bfec - 0x39c0b0
int64_t function_39bfec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39bfec
    int64_t v1; // 0x39bfec
    int64_t v2 = v1 & -256 | (int64_t)*(char *)0x117c75b901e87200; // 0x39bfec
    uint64_t v3 = (v2 & 0xffffffff) * (int64_t)*(int32_t *)(v2 + 0x1e84e00) / 0x100000000; // 0x39bff6
    int64_t v4 = a4 & -256 | (int64_t)(*(char *)v3 | (char)a4); // 0x39c005
    int64_t result = unknown_33a2e20d(); // 0x39c007
    int64_t v5 = ((a5 & (int64_t)&g1) != 0 ? -1 : 1) + a1; // 0x39c00c
    char v6 = *(char *)-0x5ac45764 + 72; // 0x39c00d
    *(char *)-0x5ac45764 = v6;
    if (v4 == 0) {
        // 0x39c06d
        *(int32_t *)v5 = (int32_t)result;
        int64_t v7 = (a5 & (int64_t)&g1) != 0 ? -4 : 4; // 0x39c06d
        *(char *)1 = *(char *)1 + (char)v3;
        *(char *)(v5 + v7) = (char)result;
        abort();
        // UNREACHABLE
    }
    if (v6 < 0) {
        int32_t * v8 = (int32_t *)(4 * result + v1); // 0x39c034
        *v8 = *v8 + (int32_t)v1;
        int32_t * v9 = (int32_t *)(v1 - 80); // 0x39c038
        *v9 = *v9 + (int32_t)a2;
        int32_t * v10 = (int32_t *)v4; // 0x39c03d
        *v10 = *v10 + (int32_t)v5;
        return result;
    }
    int32_t * v11 = (int32_t *)(v4 - 0x544a008d); // 0x39c01c
    int32_t v12 = *v11; // 0x39c01c
    int32_t v13 = a2; // 0x39c01c
    int32_t v14 = v12 + v13; // 0x39c01c
    *v11 = v14;
    int64_t result2 = __asm_iretd(v5, a2); // 0x39c022
    if (v14 < 0 != ((v14 ^ v12) & (v14 ^ v13)) < 0) {
        // 0x39c025
        return function_2367c212();
    }
    int32_t * v15 = (int32_t *)(v4 - 0x217faf8); // 0x39c02c
    uint32_t v16 = *v15; // 0x39c02c
    *v15 = v16 / 256 | 0x1000000 * v16;
    return result2;
}

// Address range: 0x39c0b5 - 0x39c0b7
int64_t function_39c0b5(void) {
    // 0x39c0b5
    int64_t v1; // 0x39c0b5
    return function_39c0d6(v1, v1, v1, v1);
}

// Address range: 0x39c0d5 - 0x39c0d6
int64_t function_39c0d5(void) {
    // 0x39c0d5
    int64_t result; // 0x39c0d5
    return result;
}

// Address range: 0x39c0d6 - 0x39c153
int64_t function_39c0d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffc6e049de(); // 0x39c0d8
    bool v1; // 0x39c0d6
    if (v1 || v1) {
        // 0x39c14e
        return result;
    }
    // 0x39c0e5
    *(int32_t *)a1 = (int32_t)a2;
    uint64_t v2 = result - 232; // 0x39c0e6
    int64_t v3; // 0x39c0d6
    *(int32_t *)(v3 & 0xffffffff) = (int32_t)result + (int32_t)a4;
    *(char *)0x8f8dcfc63a97e13 = (char)v2;
    return v2 % 256 | result & -256;
}

// Address range: 0x39c5b1 - 0x39c5f1
int64_t function_39c5b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39c5b1
    int64_t v1; // 0x39c5b1
    uint32_t v2 = (int32_t)v1; // 0x39c5b1
    uint32_t v3 = (int32_t)a4 % 32; // 0x39c5b6
    bool v4 = v2 < 0x685698d4; // 0x39c5b6
    if (v3 != 0) {
        v4 = (0x80000000 >> v3 - 1 & (int32_t)v1) != 0;
    }
    if (v2 == 0x685698d4 || v4) {
        // 0x39c5ea
        unknown_ffffffffc4f9c4f0();
        return function_39c578();
    }
    int16_t v5 = a3; // 0x39c5bc
    *(char *)a1 = __asm_insb(v5);
    int64_t result = unknown_3aa828c3(); // 0x39c5bd
    int64_t v6; // 0x39c5b1
    char v7 = *(char *)&v6;
    __asm_outsb(v5, v7);
    __asm_outsb(v5, v7);
    return result;
}

// Address range: 0x39c5f8 - 0x39c60c
int64_t function_39c5f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_444225ff(); // 0x39c5f8
    int64_t v2; // 0x39c5f8
    unsigned char v3 = (char)v2;
    *(char *)a4 = v3 / 128 | 2 * v3;
    return v1 - (a3 & 0xff00) & 0xff00 | v1 & -0xff01;
}

// Address range: 0x39c630 - 0x39c63c
int64_t function_39c630(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 50); // 0x39c630
    bool v2; // 0x39c630
    *v1 = *v1 + (int32_t)a3 + (int32_t)(bool)v2;
    return unknown_7d240f3b();
}

// Address range: 0x39c64c - 0x39c664
int64_t function_39c64c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39c64c
    unknown_1110a852();
    int32_t v1 = *(int32_t *)(a3 + 0x98b38fe); // 0x39c651
    bool v2; // 0x39c64c
    return unknown_fffffffff3c2d85d((int32_t)(bool)v2 + (int32_t)a1 + v1);
}

// Address range: 0x39c68c - 0x39c692
int64_t function_39c68c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39c68c
    return __asm_int1();
}

// Address range: 0x39c6a3 - 0x39c6a9
int64_t function_39c6a3(int64_t a1) {
    // 0x39c6a3
    int64_t v1; // 0x39c6a3
    int64_t v2 = v1;
    return (v2 + 219) % 256 | v2 & -256;
}

// Address range: 0x39c6b4 - 0x39c6b7
int64_t function_39c6b4(int64_t a1) {
    // 0x39c6b4
    int64_t result; // 0x39c6b4
    return result;
}

// Address range: 0x39c6c8 - 0x39c6eb
int64_t function_39c6c8(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x39c6c8
    return unknown_ffffffffe83b03e2();
}

// Address range: 0x39c6f6 - 0x39c6fd
int64_t function_39c6f6(void) {
    // 0x39c6f6
    __asm_int1();
    return unknown_ffffffffbcf740fe();
}

// Address range: 0x39c745 - 0x39c748
int64_t function_39c745(int64_t a1) {
    // 0x39c745
    int64_t result; // 0x39c745
    return result;
}

// Address range: 0x39c758 - 0x39c75b
int64_t function_39c758(int64_t a1) {
    // 0x39c758
    int64_t result; // 0x39c758
    return result;
}

// Address range: 0x39c76c - 0x39c76d
int64_t function_39c76c(int64_t a1) {
    // 0x39c76c
    int64_t result; // 0x39c76c
    return result;
}

// Address range: 0x39c77f - 0x39c7b0
int64_t function_39c77f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x129d8fa9); // 0x39c77f
    *v1 = -1 - *v1;
    int64_t v2 = unknown_3a0f1d8d(); // 0x39c787
    char * v3 = (char *)(v2 + 0x24dff00); // 0x39c78c
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x39c77f
    int32_t * v5 = (int32_t *)(v4 - 0x70ff6300); // 0x39c794
    *v5 = *v5 + (int32_t)v4;
    int32_t v6 = (int32_t)v2 >> 31; // 0x39c79b
    uint32_t v7 = *(int32_t *)-0x16d0ffa6; // 0x39c7a1
    int16_t v8; // 0x39c77f
    int64_t v9 = (0x100000000 * (int64_t)((v6 + (int32_t)v4) % 256 | v6 & -256) | (int64_t)v8) / (int64_t)v7; // 0x39c7a1
    int32_t * v10 = (int32_t *)(v4 - 0xb2b3910); // 0x39c7a7
    uint32_t v11 = *v10; // 0x39c7a7
    int64_t v12; // 0x39c77f
    int32_t v13 = (int64_t)&v12; // 0x39c7a7
    uint32_t v14 = v11 + v13; // 0x39c7a7
    unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x39c7a7
    *v10 = v14;
    int64_t v16 = v14 < v11 ? 225 : 224; // 0x39c7ae
    return v9 & 0xffff0000 | (v9 - v16) % 256 | 256 * (64 * (int64_t)(v14 == 0) | (int64_t)(v14 < v11) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v11 % 16 + (v13 & 8) > 15) | 4 * (int64_t)(v15 % 2 == 0)) | 512;
}
