/*
 * Targeted RetDec C for native executable gap queue batch 889.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x337e7b-0x33807b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33807b-0x33827b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33827b-0x33847b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33847b-0x33867b rank=- name=- kind=- bytes=- uncovered=-
 *   0x33867b-0x33887b rank=- name=- kind=- bytes=- uncovered=-
 *   0x51edc0-0x51efc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51efc0-0x51f1c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51f1c0-0x51f3c0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14c523cb();
int64_t function_1707fe9();
int64_t function_337e7b(void);
int64_t function_337ec3(void);
int64_t function_337ef3(int64_t a1, int64_t a2);
int64_t function_337f06(int64_t a1);
int64_t function_337f1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_337fac(void);
int64_t function_337fc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_337fdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_337fe8(int64_t a1, int64_t a2);
int64_t function_338053(int64_t a1);
int64_t function_3380b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_338192(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_338254(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33825e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_338277(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3382af(void);
int64_t function_3382cb(void);
int64_t function_3382d9(void);
int64_t function_3382ed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3382f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33838c(void);
int64_t function_3383a6(void);
int64_t function_3383d4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3383e7(int64_t a1, int64_t a2);
int64_t function_33841a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_338450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_338457(void);
int64_t function_338471(void);
int64_t function_33848b(void);
int64_t function_338491(void);
int64_t function_3384a1(void);
int64_t function_3384aa(void);
int64_t function_3384ad(int64_t a1, int64_t a2);
int64_t function_3384c3(void);
int64_t function_3384ed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_338539(int64_t a1, int64_t a2, int64_t a3);
int64_t function_338560(void);
int64_t function_338570(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3385b1(void);
int64_t function_3385e3(void);
int64_t function_3385fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_338676(void);
int64_t function_338698(void);
int64_t function_33871b(void);
int64_t function_33875f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_338794(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_338796(void);
int64_t function_3387ca(void);
int64_t function_3387dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33883f(void);
int64_t function_338842(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_338872(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3388ed();
int64_t function_33b642();
int64_t function_3d580f75();
int64_t function_4966766();
int64_t function_51e071();
int64_t function_51e074();
int64_t function_51e0db();
int64_t function_51e133();
int64_t function_51e43e();
int64_t function_51e66b();
int64_t function_51e68a();
int64_t function_51eca0();
int64_t function_51edc0(int32_t a1);
int64_t function_51eddf(void);
int64_t function_51ede9(void);
int64_t function_51edf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_51ee28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_51ef90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_566390();
int64_t function_ffffffff8bb487be();
int64_t function_ffffffffe8bc6479();
int64_t unknown_1708497();
int64_t unknown_2ac5083b();
int64_t unknown_2b34e9ec();
int64_t unknown_34562fb9();
int64_t unknown_3d738605();
int64_t unknown_44c84019();
int64_t unknown_48a9882c();
int64_t unknown_59b7fc48();
int64_t unknown_67f0d131();
int64_t unknown_ffffffff8e3b7124();
int64_t unknown_ffffffff9bbc12ff();
int64_t unknown_ffffffffaf291468();
int64_t unknown_ffffffffc1ac4b6f();

// Address range: 0x337e7b - 0x337e80
int64_t function_337e7b(void) {
    // 0x337e7b
    return function_33b642();
}

// Address range: 0x337ec3 - 0x337ec4
int64_t function_337ec3(void) {
    // 0x337ec3
    int64_t result; // 0x337ec3
    return result;
}

// Address range: 0x337ef3 - 0x337ef8
int64_t function_337ef3(int64_t a1, int64_t a2) {
    // 0x337ef3
    int64_t result; // 0x337ef3
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x337f06 - 0x337f07
int64_t function_337f06(int64_t a1) {
    // 0x337f06
    int64_t result; // 0x337f06
    return result;
}

// Address range: 0x337f1e - 0x337f3b
int64_t function_337f1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x337f1e
    __asm_out((int16_t)a3, (int32_t)unknown_ffffffff8e3b7124());
    unknown_67f0d131();
    if (!((a4 == 1 | *(int32_t *)(a3 - 43) == 0x2c9dfdaf))) {
        function_337ec3();
    }
    // 0x337f32
    return function_ffffffffe8bc6479();
}

// Address range: 0x337fac - 0x337fb0
int64_t function_337fac(void) {
    // 0x337fac
    int64_t v1; // 0x337fac
    return (int64_t)&v1;
}

// Address range: 0x337fc5 - 0x337fda
int64_t function_337fc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x337fc5
    int64_t v1; // 0x337fc5
    return v1 & -256 | (int64_t)*(char *)0x785209a341e73636;
}

// Address range: 0x337fdd - 0x337fe8
int64_t function_337fdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x337fdd
    return function_1707fe9();
}

// Address range: 0x337fe8 - 0x337fec
int64_t function_337fe8(int64_t a1, int64_t a2) {
    // 0x337fe8
    int64_t result; // 0x337fe8
    return result;
}

// Address range: 0x338053 - 0x338054
int64_t function_338053(int64_t a1) {
    // 0x338053
    int64_t result; // 0x338053
    return result;
}

// Address range: 0x3380b3 - 0x3380e7
int64_t function_3380b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 94); // 0x3380b9
    *v1 = *v1 | (int32_t)a1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2; // 0x3380b3
    int64_t v3 = v2 & 0xeb65604f | 0x149a9fb0; // 0x3380be
    *(char *)0x490c9acd = *(char *)0x490c9acd + (char)(v2 / 256);
    char * v4 = (char *)(v2 + 41); // 0x3380cc
    *v4 = *v4 ^ (char)v2;
    int32_t * v5 = (int32_t *)(v3 - 0x775ec3f7); // 0x3380d0
    *v5 = *v5 + (int32_t)a3;
    int64_t v6; // 0x3380b3
    *(int32_t *)a1 = -1 - *(int32_t *)&v6;
    return v3 & 0xffffff00 | (int64_t)(*(char *)v3 | (char)v3);
}

// Address range: 0x338192 - 0x33819c
int64_t function_338192(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x338192
    int64_t result; // 0x338192
    return result;
}

// Address range: 0x338254 - 0x33825e
int64_t function_338254(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 40); // 0x338254
    int64_t v2; // 0x338254
    *v1 = *v1 + (int32_t)v2;
    return function_4966766();
}

// Address range: 0x33825e - 0x338265
int64_t function_33825e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a4 + 102); // 0x33825e
    int64_t v2; // 0x33825e
    return *(int64_t *)(int64_t)(v1 | (int32_t)v2);
}

// Address range: 0x338277 - 0x33829e
int64_t function_338277(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x338277
    int64_t v1; // 0x338277
    char * v2 = (char *)(v1 + 0x3d002a01); // 0x338282
    *v2 = *v2 + (char)a4;
    __asm_out_133(61, (char)v1);
    *(int32_t *)0x6f01e8f0 = *(int32_t *)0x6f01e8f0 + (int32_t)a3;
    int64_t v3 = __asm_int1(); // 0x338292
    int64_t v4 = (a3 | (int64_t)&g1) & -0xff01 | (int64_t)&g2; // 0x338296
    char * v5 = (char *)v4; // 0x33829a
    *v5 = *v5 + (char)v4 + (char)((v3 & 256) != 0);
    return v3 & -256;
}

// Address range: 0x3382af - 0x3382b0
int64_t function_3382af(void) {
    // 0x3382af
    int64_t result; // 0x3382af
    return result;
}

// Address range: 0x3382cb - 0x3382cc
int64_t function_3382cb(void) {
    // 0x3382cb
    int64_t result; // 0x3382cb
    return result;
}

// Address range: 0x3382d9 - 0x3382da
int64_t function_3382d9(void) {
    // 0x3382d9
    int64_t result; // 0x3382d9
    return result;
}

// Address range: 0x3382ed - 0x3382f5
int64_t function_3382ed(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 0x7b44b939); // 0x3382ed
    *v1 = *v1 + (int32_t)a3;
    return function_3382cb();
}

// Address range: 0x3382f7 - 0x33834f
int64_t function_3382f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3382f7
    int64_t v1; // 0x3382f7
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4; // 0x3382f7
    bool v5; // 0x3382f7
    if (!v5 && !v5) {
        v4 = function_3382d9();
    }
    char * v6 = (char *)(a3 - 48); // 0x3382f9
    *v6 = *v6 + (char)(v4 / 256);
    char v7 = *(char *)(a1 + 0x1d04ec + 8 * v4); // 0x3382fc
    int64_t v8 = v2 & -256 | (int64_t)(v7 + (char)v2); // 0x3382fc
    char v9 = a2; // 0x33830a
    __asm_out_133(104, v9);
    char * v10 = (char *)v8; // 0x33830c
    *v10 = *v10 + v9;
    if (a4 != 0) {
        int64_t v11 = unknown_44c84019(); // 0x338313
        char v12 = __asm_in(24); // 0x338318
        char * v13 = (char *)(4 * v8 + a4); // 0x33831a
        *v13 = *v13 + (char)a4;
        return v11 & -256 | (int64_t)v12;
    }
    char v14 = v2 / 256; // 0x33831e
    *(char *)0x37cf0125 = *(char *)0x37cf0125 + v14;
    int64_t v15 = __asm_wait(); // 0x338324
    *(char *)(v3 & 0xffffffff) = 0;
    *(int32_t *)v15 = (int32_t)v1;
    *(char *)0x1f2ac53d = *(char *)0x1f2ac53d + (char)a1;
    int32_t * v16 = (int32_t *)(4 * v15 + 0x1162c410 + (int64_t)*(char *)&v3); // 0x33833c
    *v16 = 0x10000 * *v16;
    char * v17 = (char *)(v15 + 2); // 0x338349
    *v17 = *v17 + v14;
    return v15 & -0xff01 | (int64_t)"_Resume";
}

// Address range: 0x33838c - 0x338391
int64_t function_33838c(void) {
    // 0x33838c
    int64_t v1; // 0x33838c
    return v1 | 78;
}

// Address range: 0x3383a6 - 0x3383a8
int64_t function_3383a6(void) {
    // 0x3383a6
    int64_t v1; // 0x3383a6
    return function_33841a(v1, v1, (int64_t)&g3, (int64_t)&g3);
}

// Address range: 0x3383d4 - 0x3383da
int64_t function_3383d4(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 102); // 0x3383d4
    int64_t v2; // 0x3383d4
    *v1 = *v1 | (int32_t)v2;
    return v2 | 194;
}

// Address range: 0x3383e7 - 0x3383ec
int64_t function_3383e7(int64_t a1, int64_t a2) {
    // 0x3383e7
    int64_t result; // 0x3383e7
    *(int32_t *)a1 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x33841a - 0x338426
int64_t function_33841a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33841a
    int64_t v1; // 0x33841a
    __asm_out_133(-63, (char)v1);
    char * v2 = (char *)(a2 + 96); // 0x338423
    *v2 = 2 * *v2;
    return v1 & 0xffffffff;
}

// Address range: 0x338450 - 0x338457
int64_t function_338450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x338450
    int64_t v1; // 0x338450
    return a3 + 104 + 8 * v1 & 0xffffffff;
}

// Address range: 0x338457 - 0x338469
int64_t function_338457(void) {
    // 0x338457
    return __asm_iretd();
}

// Address range: 0x338471 - 0x338476
int64_t function_338471(void) {
    // 0x338471
    return function_ffffffff8bb487be();
}

// Address range: 0x33848b - 0x33848c
int64_t function_33848b(void) {
    // 0x33848b
    int64_t result; // 0x33848b
    return result;
}

// Address range: 0x338491 - 0x33849d
int64_t function_338491(void) {
    // 0x338491
    unknown_1708497();
    bool v1; // 0x338491
    if (!v1) {
        function_33848b();
    }
    // 0x338498
    return function_14c523cb();
}

// Address range: 0x3384a1 - 0x3384aa
int64_t function_3384a1(void) {
    // 0x3384a1
    int64_t result; // 0x3384a1
    int32_t * v1 = (int32_t *)(result - 0x3e011f8f); // 0x3384a1
    int32_t v2 = *v1; // 0x3384a1
    *v1 = 2 * v2 | (int32_t)(v2 < 0);
    return result;
}

// Address range: 0x3384aa - 0x3384ab
int64_t function_3384aa(void) {
    // 0x3384aa
    int64_t result; // 0x3384aa
    return result;
}

// Address range: 0x3384ad - 0x3384b0
int64_t function_3384ad(int64_t a1, int64_t a2) {
    // 0x3384ad
    int64_t result; // 0x3384ad
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3384c3 - 0x3384c6
int64_t function_3384c3(void) {
    // 0x3384c3
    int64_t result; // 0x3384c3
    return result;
}

// Address range: 0x3384ed - 0x33850c
int64_t function_3384ed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3384ed
    int64_t v1; // 0x3384ed
    int32_t v2 = *(int32_t *)(v1 - 0x3ff591c6); // 0x3384ed
    bool v3; // 0x3384ed
    __asm_outsb((int16_t)a3, *(char *)((v3 ? -1 : 1) + a2));
    uint32_t v4 = *(int32_t *)-0x61957b02; // 0x3384f7
    *(int32_t *)-0x61957b02 = v4 / 2;
    int64_t result = 32 * v2 + 0x4a7f00b3 + (int32_t)(v4 % 2 != 0); // 0x338509
    result = function_3384aa();
    // 0x33850b
    return result;
}

// Address range: 0x338539 - 0x338558
int64_t function_338539(int64_t a1, int64_t a2, int64_t a3) {
    // 0x338539
    int64_t v1; // 0x338539
    int64_t v2 = v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_3d580f75(*(int32_t *)(v2 & -0x10000 | v2 + 0xc600 & 0xff00 | 2) - 0x18ee2d62);
}

// Address range: 0x338560 - 0x33856b
int64_t function_338560(void) {
    // 0x338560
    return __asm_in_134(122);
}

// Address range: 0x338570 - 0x338584
int64_t function_338570(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x338570
    int64_t v1; // 0x338570
    uint64_t v2 = v1;
    int64_t v3 = v1;
    char v4 = *(char *)((256 * (v2 / 0x8000 % 2 | v2 / 128 & 254) | v2 & -0xff01) + 8 * a4); // 0x338577
    unsigned char v5 = (v4 | (char)a4) % 32; // 0x33857a
    if (v5 != 0) {
        *(char *)v3 = (char)v3 >> v5;
    }
    int64_t v6 = v3 & -256 | (int64_t)__asm_in_135((int16_t)a3); // 0x33857d
    int32_t v7 = *(int32_t *)v6 ^ (int32_t)v6; // 0x33857e
    return (v7 + 73) % 256 | v7 & -256;
}

// Address range: 0x3385b1 - 0x3385c3
int64_t function_3385b1(void) {
    int64_t v1 = unknown_34562fb9(); // 0x3385b3
    int64_t v2; // 0x3385b1
    return v1 & -256 | (int64_t)(*(char *)(2 * v2) | (char)v1);
}

// Address range: 0x3385e3 - 0x3385e4
int64_t function_3385e3(void) {
    // 0x3385e3
    int64_t result; // 0x3385e3
    return result;
}

// Address range: 0x3385fa - 0x33866e
int64_t function_3385fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3d738605(); // 0x3385ff
    int32_t * v2 = (int32_t *)v1; // 0x338604
    uint32_t v3 = *v2; // 0x338604
    uint32_t v4 = v3 + (int32_t)v1; // 0x338604
    *v2 = v4;
    int64_t v5 = v1 & -256; // 0x338606
    if (v4 < v3) {
        // 0x33860b
        return v5 | 16;
    }
    int64_t v6 = v5 | (int64_t)*(char *)(a4 + a1); // 0x338606
    *(int32_t *)v6 = -0x2f98a3fa;
    return 0x10000 * (int32_t)v6 >> 16;
}

// Address range: 0x338676 - 0x338677
int64_t function_338676(void) {
    // 0x338676
    int64_t result; // 0x338676
    return result;
}

// Address range: 0x338698 - 0x338699
int64_t function_338698(void) {
    // 0x338698
    int64_t result; // 0x338698
    return result;
}

// Address range: 0x33871b - 0x33871c
int64_t function_33871b(void) {
    // 0x33871b
    int64_t result; // 0x33871b
    return result;
}

// Address range: 0x33875f - 0x338793
int64_t function_33875f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33875f
    int64_t result; // 0x33875f
    if (a4 == 1 || (int32_t)result == -0xfa8f9d) {
        // 0x338769
        unknown_ffffffffc1ac4b6f();
        return function_33871b();
    }
    // 0x338793
    return result;
}

// Address range: 0x338794 - 0x338796
int64_t function_338794(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x338794
    int64_t result; // 0x338794
    return result;
}

// Address range: 0x338796 - 0x338798
int64_t function_338796(void) {
    // 0x338796
    int64_t result; // 0x338796
    bool v1; // 0x338796
    if (v1) {
        result = function_33871b();
    }
    // 0x338798
    return result;
}

// Address range: 0x3387ca - 0x3387cb
int64_t function_3387ca(void) {
    // 0x3387ca
    int64_t result; // 0x3387ca
    return result;
}

// Address range: 0x3387dc - 0x33883f
int64_t function_3387dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3387dc
    int64_t v1; // 0x3387dc
    uint64_t v2 = v1;
    *(char *)v2 = (char)(v1 | v2);
    int3_t v3; // 0x3387dc
    *(float32_t *)a2 = (float32_t)__frontend_reg_load_fpr(v3);
    unsigned char v4 = (char)a4; // 0x3387e0
    unsigned char v5 = v4 % 32; // 0x3387e0
    if (v5 != 0) {
        char * v6 = (char *)(a2 + 0x800033); // 0x3387e0
        *v6 = *v6 << v5;
    }
    unknown_2b34e9ec();
    bool v7; // 0x3387dc
    int64_t v8 = v7 ? -1 : 1; // 0x3387f1
    uint32_t v9 = (int32_t)a4 % 32;
    uint64_t v10 = (int64_t)(33 - v9);
    int64_t v11 = a2; // 0x3387e6
    int64_t v12 = a1; // 0x3387e6
    int64_t v13 = a3;
    int3_t v14; // 0x3387dc
    int3_t v15 = v14 + 1;
    *(char *)0x3c34216a = *(char *)0x3c34216a + (char)(v2 / 256);
    *(char *)v12 = *(char *)v11;
    v12 += v8;
    __frontend_reg_load_fpr(v15);
    __frontend_reg_load_fpr(v14 + 3);
    int64_t v16 = unknown_ffffffff9bbc12ff(); // 0x3387f7
    while (*(char *)v13 < v4) {
        int64_t v17 = v13; // 0x33882c
        if (v9 != 0) {
            v17 = (int32_t)v13 << v9 | (int32_t)((v13 & 0xffffffff) >> v10);
        }
        v14 = v15;
        v11 += v8;
        if ((int32_t)(v16 & a4) < 0) {
            int64_t result = unknown_2ac5083b(); // 0x338835
            __asm_int(84);
            return result;
        }
        v13 = v17;
        v15 = v14 + 1;
        *(char *)0x3c34216a = *(char *)0x3c34216a + (char)(v2 / 256);
        *(char *)v12 = *(char *)v11;
        v12 += v8;
        __frontend_reg_load_fpr(v15);
        __frontend_reg_load_fpr(v14 + 3);
        v16 = unknown_ffffffff9bbc12ff();
    }
    // 0x338801
    *(int32_t *)v12 = (int32_t)v16;
    char * v18 = (char *)(v16 + 75); // 0x338802
    *v18 = *v18 + (char)(v13 / 256);
    if ((int32_t)(v12 + (v7 ? 0xfffffffc : 4)) + (int32_t)v13 >= 0) {
        function_3387ca();
    }
    // 0x33881a
    return unknown_48a9882c();
}

// Address range: 0x33883f - 0x338842
int64_t function_33883f(void) {
    // 0x33883f
    int64_t result; // 0x33883f
    return result;
}

// Address range: 0x338842 - 0x338868
int64_t function_338842(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    unknown_59b7fc48();
    uint32_t v3 = (int32_t)a4; // 0x338847
    uint32_t v4 = v3 % 32; // 0x338847
    int64_t v5; // 0x338842
    int32_t v6; // 0x338842
    int64_t v7; // 0x338842
    if (v4 == 0) {
        // 0x338842
        v5 = a1;
        v6 = a1;
    } else {
        int32_t * v8 = (int32_t *)(8 * a1 + 27 + v7);
        *v8 = *v8 >> v4;
        v5 = v2;
        v6 = *(int32_t *)&v2;
    }
    uint32_t v9 = v6 + (int32_t)v7; // 0x338854
    *(int32_t *)v5 = v9;
    int32_t * v10 = (int32_t *)(v2 + 56); // 0x338858
    *v10 = (int32_t)(v9 < v6) + v3 + *v10;
    char v11 = *(char *)&v1 + (char)v7; // 0x33885b
    *(char *)v1 = v11;
    int64_t v12 = v2; // 0x33885f
    int64_t v13 = __asm_hlt() & 0xffffffff; // 0x33885f
    v2 = v13;
    if (v11 < 1) {
        // 0x338890
        return v12 & 0xffffffff;
    }
    // 0x338862
    return unknown_ffffffffaf291468(v13);
}

// Address range: 0x338872 - 0x338877
int64_t function_338872(int64_t a1, int64_t a2, int64_t a3) {
    // 0x338872
    bool v1; // 0x338872
    return function_3388ed((v1 ? -4 : 4) + a1);
}

// Address range: 0x51edc0 - 0x51eddf
int64_t function_51edc0(int32_t a1) {
    // 0x51edc0
    int64_t v1; // 0x51edc0
    if ((int32_t)v1 != -1) {
        function_51e071();
    }
    // 0x51edd5
    return function_51e074();
}

// Address range: 0x51eddf - 0x51ede9
int64_t function_51eddf(void) {
    // 0x51eddf
    return function_51e43e();
}

// Address range: 0x51ede9 - 0x51edf7
int64_t function_51ede9(void) {
    // 0x51ede9
    int64_t v1; // 0x51ede9
    return function_51e68a(v1);
}

// Address range: 0x51edf7 - 0x51ee23
int64_t function_51edf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x51edf7
    int64_t v1; // 0x51edf7
    if ((int32_t)v1 == -1) {
        function_51eca0();
    }
    if (v1 != 0) {
        function_51e0db();
    }
    // 0x51ee1e
    return function_51e133();
}

// Address range: 0x51ee28 - 0x51ef8c
int64_t function_51ee28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x51ee28
    int64_t v1; // 0x51ee28
    if (v1 == 0) {
        // 0x51ef7a
        return function_51e68a(v1);
    }
    // 0x51ee31
    return function_51e66b();
}

// Address range: 0x51ef90 - 0x51f3c0
int64_t function_51ef90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x51ef90
    __readfsqword(40);
    int64_t result = *(int64_t *)(*(int64_t *)(a6 + 208) + 24) + 8 * function_566390(); // 0x51f010
    int64_t v1 = *(int64_t *)result; // 0x51f014
    if (v1 == 0) {
        // 0x51f159
        return result;
    }
    int32_t v2 = *(int32_t *)(a6 + 24) & 74; // 0x51f030
    int64_t result2 = result; // 0x51f036
    if (v2 != 64) {
        // 0x51f038
        result2 = v2 != 8 ? 10 : 16;
    }
    // 0x51f04c
    if (a2 == 0 || (int32_t)a3 == -1) {
        // 0x51f159
        return result2;
    }
    // 0x51f05f
    if (a4 != 0) {
        // 0x51f159
        return 0;
    }
    unsigned char v3 = *(char *)(v1 + 110); // 0x51f094
    int64_t result3 = v3; // 0x51f094
    char v4 = a3; // 0x51f09e
    if (v3 != v4) {
        // 0x51f0a7
        if (*(char *)(v1 + 111) != v4) {
            // 0x51f159
            return result3;
        }
    }
    // 0x51f0b1
    if (*(char *)(v1 + 32) != 0 || *(char *)(v1 + 72) == v4) {
        // 0x51f159
        return result3;
    }
    int64_t * v5 = (int64_t *)(a2 + 16); // 0x51f0cd
    uint64_t v6 = *v5; // 0x51f0cd
    int64_t result4 = v6; // 0x51f0d8
    if (v6 < *(int64_t *)(a2 + 24)) {
        // 0x51f0de
        result4 = v6 + 1;
        *v5 = result4;
    }
    // 0x51f159
    return result4;
}
