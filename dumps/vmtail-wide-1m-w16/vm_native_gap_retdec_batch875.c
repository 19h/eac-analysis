/*
 * Targeted RetDec C for native executable gap queue batch 875.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x382e30-0x383030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x383030-0x383230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x383230-0x383430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5320ac-0x5322ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5322ac-0x5324ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5324ac-0x5326ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5326ac-0x5328ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x5328ac-0x532aac rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_382e30(void);
int64_t function_382e39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_382e8a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_382eee(void);
int64_t function_382ef9(void);
int64_t function_382f0a(int64_t a1);
int64_t function_382f1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_382f40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_382f86(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_382fa3(void);
int64_t function_382ff1(void);
int64_t function_383031(int64_t a1, int64_t a2, int64_t a3);
int64_t function_383049(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38305c(int64_t a1);
int64_t function_38306f(void);
int64_t function_383073(void);
int64_t function_3830c0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_383150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3831ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38320c(int64_t a1);
int64_t function_383393(void);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_50b2b0();
int64_t function_52b400();
int64_t function_5314b0();
int64_t function_5314fb();
int64_t function_531520();
int64_t function_53152f();
int64_t function_53159d();
int64_t function_53166a();
int64_t function_531697();
int64_t function_531715();
int64_t function_5317e9();
int64_t function_531823();
int64_t function_531892();
int64_t function_5318a6();
int64_t function_5318db();
int64_t function_531938();
int64_t function_531946();
int64_t function_531ab5();
int64_t function_531b12();
int64_t function_531b54();
int64_t function_531b65();
int64_t function_531b6a();
int64_t function_531d30();
int64_t function_531d46();
int64_t function_531dd2();
int64_t function_531f90();
int64_t function_53209b();
int64_t function_5320ac(void);
int64_t function_5320b8(void);
int64_t function_5320c8(void);
int64_t function_5320d8(int32_t a1);
int64_t function_532100(int16_t a1);
int64_t function_532120(int64_t a1);
int64_t function_532130(int64_t a1, int64_t a2);
int64_t function_5321d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5321f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_532210(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_53222f(int32_t a1);
int64_t function_532237(void);
int64_t function_532241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_532258(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, char a6, int64_t a7, int64_t a8);
int64_t function_532283(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, char a7, int64_t a8, int64_t a9);
int64_t function_5322ae(void);
int64_t function_5322bf(void);
int64_t function_5322d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5322ec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_532303(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53231e(void);
int64_t function_53232a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_532343(void);
int64_t function_532351(void);
int64_t function_53236d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_532386(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5323a1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5323ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5323cf(int64_t a1);
int64_t function_5323fa(void);
int64_t function_532407(void);
int64_t function_532411(void);
int64_t function_532419(void);
int64_t function_532439(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_566390();
int64_t function_566890();
int64_t function_68d73580();
int64_t function_ffffffffaed612ef();
int64_t function_ffffffffb33a17ea();
int64_t unknown_5c32494f();
int64_t unknown_7e475842();
int64_t unknown_ffffffff8a1f368e();
int64_t unknown_ffffffffa0455b55();
int64_t unknown_ffffffffad7d693f();
int64_t unknown_ffffffffc0bcfa4a();

// Address range: 0x382e30 - 0x382e31
int64_t function_382e30(void) {
    // 0x382e30
    return __asm_int3();
}

// Address range: 0x382e39 - 0x382e40
int64_t function_382e39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x382e39
    int64_t result; // 0x382e39
    return result;
}

// Address range: 0x382e8a - 0x382e9e
int64_t function_382e8a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x382e8a
    int64_t v1; // 0x382e8a
    __asm_outsd((int16_t)a3, (int32_t)v1);
    bool v2; // 0x382e8a
    *(int32_t *)0xc2070c9 = *(int32_t *)0xc2070c9 + (v2 ? 0x13d007b : 0x13d007a);
    return v1 & -256 | 73;
}

// Address range: 0x382eee - 0x382eef
int64_t function_382eee(void) {
    // 0x382eee
    int64_t result; // 0x382eee
    return result;
}

// Address range: 0x382ef9 - 0x382efa
int64_t function_382ef9(void) {
    // 0x382ef9
    int64_t result; // 0x382ef9
    return result;
}

// Address range: 0x382f0a - 0x382f0d
int64_t function_382f0a(int64_t a1) {
    // 0x382f0a
    int64_t v1; // 0x382f0a
    bool v2; // 0x382f0a
    return function_382f40((v2 ? -4 : 4) + a1, v1, v1);
}

// Address range: 0x382f1a - 0x382f40
int64_t function_382f1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x382f1a
    if (v1 != 0) {
        int64_t v2; // 0x382f1a
        char * v3 = (char *)(v2 - 0x7d28fcb2); // 0x382f1a
        unsigned char v4 = *v3; // 0x382f1a
        *v3 = v4 >> v1 | v4 << 8 - v1;
    }
    int64_t v5; // 0x382f1a
    bool v6; // 0x382f1a
    if (v6) {
        v5 = function_382f0a(a1);
    }
    int32_t * v7 = (int32_t *)(a3 - 0x71dbbf1b); // 0x382f22
    int32_t v8 = *v7 + (int32_t)a4; // 0x382f22
    *v7 = v8;
    int64_t v9 = v5; // 0x382f28
    if (v8 >= 0) {
        v9 = function_382ef9();
    }
    // 0x382f2b
    *(int32_t *)0x3b4a2ea776be90d7 = (int32_t)v9;
    return unknown_ffffffffad7d693f();
}

// Address range: 0x382f40 - 0x382f6d
int64_t function_382f40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    // 0x382f42
    __asm_out(3, (char)unknown_ffffffffc0bcfa4a());
    int64_t v3 = unknown_ffffffffa0455b55(); // 0x382f4f
    *(char *)a1 = (char)a1 & 12;
    bool v4; // 0x382f40
    int32_t * v5 = (int32_t *)(a2 - 81 + (v4 ? -4 : 4)); // 0x382f59
    *v5 = *v5 + (int32_t)v3;
    unsigned char v6 = *(char *)&v1; // 0x382f61
    unsigned char v7 = (char)v1; // 0x382f61
    char v8 = v6 + v7; // 0x382f61
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x382f61
    *(char *)v1 = v8;
    int64_t v10; // 0x382f40
    char * v11 = (char *)(v10 - 0x34fe1800); // 0x382f64
    *v11 = *v11 + (char)v10;
    *(char *)v2 = *(char *)&v2 + (char)v1;
    return v3 & 0x80000095 | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v8 < v6) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0)) | 512;
}

// Address range: 0x382f86 - 0x382f9a
int64_t function_382f86(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x382f86
    unknown_ffffffff8a1f368e();
    int64_t v1; // 0x382f86
    char * v2 = (char *)(v1 - 99); // 0x382f8d
    *v2 = *v2 + (char)a3;
    *(char *)a4 = (char)a4;
    return function_ffffffffb33a17ea();
}

// Address range: 0x382fa3 - 0x382fa4
int64_t function_382fa3(void) {
    // 0x382fa3
    int64_t result; // 0x382fa3
    return result;
}

// Address range: 0x382ff1 - 0x382ff6
int64_t function_382ff1(void) {
    // 0x382ff1
    return function_ffffffffaed612ef();
}

// Address range: 0x383031 - 0x383049
int64_t function_383031(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_7e475842(); // 0x38303c
    int16_t v1 = a3; // 0x383041
    *(char *)a1 = __asm_insb(v1);
    int64_t v2; // 0x383031
    __asm_outsd(v1, *(int32_t *)&v2);
    return result;
}

// Address range: 0x383049 - 0x38305c
int64_t function_383049(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_5c32494f(); // 0x383049
    uint32_t v2 = (int32_t)a4 % 32; // 0x38304e
    if (v2 != 0) {
        int64_t v3; // 0x383049
        int32_t * v4 = (int32_t *)(v3 - 0x794ae700); // 0x38304e
        *v4 = *v4 << v2;
    }
    return (v1 + 54) % 256 | v1 & -256;
}

// Address range: 0x38305c - 0x38305f
int64_t function_38305c(int64_t a1) {
    // 0x38305c
    int64_t result; // 0x38305c
    return result;
}

// Address range: 0x38306f - 0x383070
int64_t function_38306f(void) {
    // 0x38306f
    int64_t result; // 0x38306f
    return result;
}

// Address range: 0x383073 - 0x383076
int64_t function_383073(void) {
    // 0x383073
    return function_38306f();
}

// Address range: 0x3830c0 - 0x3830cc
int64_t function_3830c0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3830c0
    int64_t v1; // 0x3830c0
    int64_t result = v1 & 0xffffffff; // 0x3830c0
    *(char *)result = 2 * (char)v1;
    char * v2 = (char *)(a4 + 61); // 0x3830c3
    *v2 = *v2 + (char)(a3 / 256);
    int32_t * v3 = (int32_t *)(a1 - 108); // 0x3830c6
    bool v4; // 0x3830c0
    *v3 = *v3 + (int32_t)((v4 ? 0xfffffffc : 4) + a2);
    return result;
}

// Address range: 0x383150 - 0x383156
int64_t function_383150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x383150
    int64_t v1; // 0x383150
    return v1 + a4 & 0xffffffff;
}

// Address range: 0x3831ab - 0x3831d0
int64_t function_3831ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3831ab
    int64_t v1; // 0x3831ab
    int64_t v2 = 2 * v1; // 0x3831ab
    int32_t * v3 = (int32_t *)(2 * v2 & 0x1fffffffe); // 0x3831ad
    int32_t v4 = v1; // 0x3831ad
    *v3 = *v3 + v4;
    int32_t * v5 = (int32_t *)(v1 - 0x3bed97e2 + v1); // 0x3831be
    *v5 = *v5 + v4;
    __asm_frstor(*(int864_t *)(a2 + 0x25c69b5f));
    return v2 & 0xffffff00 | (int64_t)__asm_in(-24);
}

// Address range: 0x38320c - 0x38320d
int64_t function_38320c(int64_t a1) {
    // 0x38320c
    int64_t result; // 0x38320c
    return result;
}

// Address range: 0x383393 - 0x383398
int64_t function_383393(void) {
    // 0x383393
    return function_68d73580();
}

// Address range: 0x5320ac - 0x5320b1
int64_t function_5320ac(void) {
    // 0x5320ac
    return function_5318db();
}

// Address range: 0x5320b8 - 0x5320c2
int64_t function_5320b8(void) {
    // 0x5320b8
    return function_531715();
}

// Address range: 0x5320c8 - 0x5320d4
int64_t function_5320c8(void) {
    // 0x5320c8
    return function_53159d();
}

// Address range: 0x5320d8 - 0x5320fe
int64_t function_5320d8(int32_t a1) {
    // 0x5320d8
    int64_t v1; // 0x5320d8
    if (v1 == 0) {
        function_5314fb();
    }
    if (a1 != -1) {
        function_5318db();
    }
    // 0x5320f4
    return function_531892();
}

// Address range: 0x532100 - 0x53211e
int64_t function_532100(int16_t a1) {
    // 0x532100
    return function_531823();
}

// Address range: 0x532120 - 0x532130
int64_t function_532120(int64_t a1) {
    // 0x532120
    *(int32_t *)a1 = 4;
    return function_531697();
}

// Address range: 0x532130 - 0x5321c7
// From class:    std::__numpunct_cache<wchar_t>
// Type:          constructor
int64_t function_532130(int64_t a1, int64_t a2) {
    int64_t v1 = function_4efd30(336); // 0x532135
    *(int32_t *)(v1 + 8) = 0;
    int64_t v2; // 0x532130
    int64_t v3 = v2 + 208; // 0x53214b
    *(int64_t *)(v1 + 16) = 0;
    *(int64_t *)(v1 + 24) = 0;
    *(char *)(v1 + 32) = 0;
    *(int64_t *)(v1 + 40) = 0;
    *(int64_t *)(v1 + 48) = 0;
    *(int64_t *)(v1 + 56) = 0;
    *(int64_t *)v1 = (int64_t)&g1;
    *(int64_t *)(v1 + 64) = 0;
    *(int64_t *)(v1 + 72) = 0;
    *(char *)(v1 + 328) = 0;
    function_50b2b0(v1, v3);
    function_566890(*(int64_t *)v3, v1, a1);
    return function_5314b0();
}

// Address range: 0x5321d0 - 0x5321f1
int64_t function_5321d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5321d0
    int64_t v1; // 0x5321d0
    function_52b400(a5, v1, 0, 0, 1);
    return function_53166a(v1);
}

// Address range: 0x5321f8 - 0x532210
int64_t function_5321f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5321f8
    return function_531520();
}

// Address range: 0x532210 - 0x53222f
int64_t function_532210(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x532210
    int64_t v1; // 0x532210
    return function_531d30(v1);
}

// Address range: 0x53222f - 0x532237
int64_t function_53222f(int32_t a1) {
    // 0x53222f
    return function_531b65();
}

// Address range: 0x532237 - 0x532241
int64_t function_532237(void) {
    // 0x532237
    return function_531b6a();
}

// Address range: 0x532241 - 0x532258
int64_t function_532241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x532241
    return function_53152f();
}

// Address range: 0x532258 - 0x532283
int64_t function_532258(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, char a6, int64_t a7, int64_t a8) {
    // 0x532258
    return function_5317e9(a7);
}

// Address range: 0x532283 - 0x5322ae
int64_t function_532283(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, char a7, int64_t a8, int64_t a9) {
    // 0x532283
    return function_5317e9(a8);
}

// Address range: 0x5322ae - 0x5322bf
int64_t function_5322ae(void) {
    // 0x5322ae
    int64_t v1; // 0x5322ae
    return function_531ab5(v1);
}

// Address range: 0x5322bf - 0x5322d0
int64_t function_5322bf(void) {
    // 0x5322bf
    int64_t v1; // 0x5322bf
    return function_531dd2(v1);
}

// Address range: 0x5322d0 - 0x5322ec
int64_t function_5322d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5322d0
    int64_t v1; // 0x5322d0
    return function_531938(v1);
}

// Address range: 0x5322ec - 0x532303
int64_t function_5322ec(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5322ec
    int64_t v1; // 0x5322ec
    return function_531f90(v1);
}

// Address range: 0x532303 - 0x53231e
int64_t function_532303(int64_t a1, int64_t a2, int64_t a3) {
    // 0x532303
    int64_t v1; // 0x532303
    return function_5318a6(v1);
}

// Address range: 0x53231e - 0x53232a
int64_t function_53231e(void) {
    // 0x53231e
    return function_531b65();
}

// Address range: 0x53232a - 0x532343
int64_t function_53232a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x53232a
    int64_t v1; // 0x53232a
    return function_53209b(v1);
}

// Address range: 0x532343 - 0x532351
int64_t function_532343(void) {
    // 0x532343
    int64_t v1; // 0x532343
    return function_5317e9(v1);
}

// Address range: 0x532351 - 0x53236d
int64_t function_532351(void) {
    // 0x532351
    return function_531520();
}

// Address range: 0x53236d - 0x532386
int64_t function_53236d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x53236d
    int64_t v1; // 0x53236d
    return function_531946(v1);
}

// Address range: 0x532386 - 0x5323a1
int64_t function_532386(int64_t a1, int64_t a2, int64_t a3) {
    // 0x532386
    int64_t v1; // 0x532386
    return function_531b12(v1);
}

// Address range: 0x5323a1 - 0x5323ba
int64_t function_5323a1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5323a1
    int64_t v1; // 0x5323a1
    return function_531b54(v1);
}

// Address range: 0x5323ba - 0x5323cf
int64_t function_5323ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5323ba
    return function_531520();
}

// Address range: 0x5323cf - 0x5323fa
int64_t function_5323cf(int64_t a1) {
    // 0x5323cf
    int64_t v1; // 0x5323cf
    if (v1 != a1 + 16) {
        // 0x5323e5
        function_4eeb50(v1);
    }
    // 0x5323ea
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_531d46();
}

// Address range: 0x5323fa - 0x532407
int64_t function_5323fa(void) {
    // 0x5323fa
    __stack_chk_fail();
    return function_531b65();
}

// Address range: 0x532407 - 0x532411
int64_t function_532407(void) {
    // 0x532407
    return function_531715();
}

// Address range: 0x532411 - 0x532419
int64_t function_532411(void) {
    // 0x532411
    return function_53159d();
}

// Address range: 0x532419 - 0x532439
int64_t function_532419(void) {
    // 0x532419
    int64_t v1; // 0x532419
    function_1fd40(v1);
    while (true) {
        // 0x53242a
        function_1fd40(function_20a50());
    }
}

// Address range: 0x532439 - 0x532aac
int64_t function_532439(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x532439
    function_20540();
    int64_t v1; // 0x532439
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    __readfsqword(40);
    int64_t result = *(int64_t *)(*(int64_t *)(a6 + 208) + 24) + 8 * function_566390(); // 0x5324cf
    int64_t v2 = *(int64_t *)result; // 0x5324d3
    if (v2 == 0) {
        // 0x532b10
        return result;
    }
    int32_t v3 = a3;
    if (a2 == 0 || v3 == -1) {
        // 0x532b10
        return (*(int32_t *)(a6 + 24) & 74) == 64 ? result : 10;
    }
    if (a4 == 0) {
        goto lab_0x53290d;
    } else {
        if ((int32_t)a5 == -1) {
            uint64_t result2 = *(int64_t *)(a4 + 16); // 0x5328c2
            if (result2 >= *(int64_t *)(a4 + 24)) {
                // 0x532b10
                return result2;
            }
            // 0x5328d0
            if (*(int32_t *)result2 != -1) {
                goto lab_0x532550;
            } else {
                goto lab_0x53290d;
            }
        } else {
            goto lab_0x532550;
        }
    }
  lab_0x53290d:;
    uint32_t v4 = *(int32_t *)(v2 + 224); // 0x53290d
    int64_t result3 = v4; // 0x53290d
    if (v4 != v3) {
        // 0x532922
        if (*(int32_t *)(v2 + 228) != v3) {
            // 0x532b10
            return result3;
        }
    }
    if (*(char *)(v2 + 32) != 0) {
        // 0x532934
        if (*(int32_t *)(v2 + 76) == v3) {
            // 0x532b10
            return result3;
        }
    }
    // 0x53293e
    if (*(int32_t *)(v2 + 72) == v3) {
        // 0x532b10
        return result3;
    }
    int64_t * v5 = (int64_t *)(a2 + 16); // 0x532951
    uint64_t result4 = *v5; // 0x532951
    uint64_t v6 = *(int64_t *)(a2 + 24); // 0x532955
    if (result4 >= v6) {
        // 0x532b10
        return result4;
    }
    int64_t v7 = result4 + 4; // 0x532962
    *v5 = v7;
    int64_t result5 = v7; // 0x53296d
    if (v7 < v6) {
        // 0x532973
        result5 = (int64_t)*(int32_t *)v7;
    }
    // 0x532b10
    return result5;
  lab_0x532550:;
    char v8 = 0; // bp-88, 0x532578
    if (*(char *)(v2 + 32) != 0) {
        // 0x532fb8
        return (int64_t)&v8;
    }
    // 0x532b10
    return (int64_t)*(char *)(v2 + 328);
}
