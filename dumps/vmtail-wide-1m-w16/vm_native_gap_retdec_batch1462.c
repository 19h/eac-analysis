/*
 * Targeted RetDec C for native executable gap queue batch 1462.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3912a0-0x3914a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3914a0-0x3916a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3916a0-0x3918a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x391aa0-0x391ca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x393dcb-0x393fcb rank=- name=- kind=- bytes=- uncovered=-
 *   0x393fcb-0x3941cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3941cb-0x3943cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3943cb-0x3945cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3945cb-0x3947cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3947cb-0x3949cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3949cb-0x3949d5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bfdb5-0x3bffb5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bffb5-0x3c01b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c01b5-0x3c03b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c05b5-0x3c07b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c07b5-0x3c09b1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1763fd6();
int64_t function_221a866();
int64_t function_221f8de();
int64_t function_3912a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_391361(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3914a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3915e6(void);
int64_t function_391622(int64_t a1);
int64_t function_39163a(void);
int64_t function_39163e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_391647(void);
int64_t function_39164e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39170e(int64_t a1);
int64_t function_39172e(int64_t a1);
int64_t function_3917c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3917e8(int64_t a1, int64_t a2);
int64_t function_391805(void);
int64_t function_391807(void);
int64_t function_39180b(int64_t a1, int64_t a2);
int64_t function_391819(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_391aa0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_391aa7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_391ac9(void);
int64_t function_391afa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_391c1c(void);
int64_t function_391c3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393dcb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_393e18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393e2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_393ead(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393ed0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_393f0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_393f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393f8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393fe4(void);
int64_t function_393fea(void);
int64_t function_393ffe(void);
int64_t function_394043(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_394063(void);
int64_t function_3940ab(int64_t a1);
int64_t function_3940c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3940d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_394156(void);
int64_t function_394176(int64_t a1);
int64_t function_394192(int64_t a1);
int64_t function_3941bc(void);
int64_t function_394204(void);
int64_t function_394212(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_394224(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39423e(int64_t a1);
int64_t function_3942ba(int64_t a1);
int64_t function_3942e3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_394381(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_39439e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3943b6(int64_t a1);
int64_t function_39440a(void);
int64_t function_394413(int64_t a1);
int64_t function_394419(void);
int64_t function_39441b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_394483(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3944c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3944e3(int64_t a1);
int64_t function_3944eb(void);
int64_t function_39451d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39455e(int64_t a1);
int64_t function_3946d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3946ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_394787(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39479c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_394811(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_394879(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3948f5(void);
int64_t function_394947(void);
int64_t function_39495c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39497d(int64_t a1, int64_t a2, int32_t a3);
int64_t function_396fc3();
int64_t function_3bfdb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3bfdf2(void);
int64_t function_3bfe2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bfe6b(void);
int64_t function_3bfe7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3bfeb9(void);
int64_t function_3bfee3(void);
int64_t function_3bfef3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3bff68(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3bff6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bfffa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c0017(void);
int64_t function_3c002d(int64_t a1);
int64_t function_3c0033(int64_t a1);
int64_t function_3c004f(void);
int64_t function_3c0069(int64_t a1, int64_t a2);
int64_t function_3c008c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c00d1(void);
int64_t function_3c00de(void);
int64_t function_3c0167(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c01b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c01c8(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c021b(int64_t a1, int64_t a2);
int64_t function_3c026d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c027b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c0298(int64_t a1);
int64_t function_3c029b(void);
int64_t function_3c02a6(void);
int64_t function_3c02c5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3c05b5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c05fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c0613(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c064a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3c074c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c075e(int64_t a1);
int64_t function_3c07c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c07f7(void);
int64_t function_3c0809(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c08f4(void);
int64_t function_3c0924(void);
int64_t function_3c095a(void);
int64_t function_3c0968(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3c0976(void);
int64_t function_3c097c(void);
int64_t function_3c09a4(void);
int64_t function_3c09a6(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_3c3deec0();
int64_t function_5f29bd2a();
int64_t function_c4258();
int64_t function_c574b53();
int64_t function_ffffffffabb7506e();
int64_t function_ffffffffc23df15f();
int64_t function_ffffffffc3cd6f72();
int64_t function_ffffffffc3fd49b4();
int64_t function_ffffffffc5c82e65();
int64_t unknown_106bfee7();
int64_t unknown_10a0e94c();
int64_t unknown_111d2bd2();
int64_t unknown_1dc9b7b1();
int64_t unknown_28415efc();
int64_t unknown_2ed40dad();
int64_t unknown_32451356();
int64_t unknown_3ac2a319();
int64_t unknown_3d3b0444();
int64_t unknown_3d43f52a();
int64_t unknown_564a8d47();
int64_t unknown_5a51a602();
int64_t unknown_6170e42b();
int64_t unknown_6c1aacb5();
int64_t unknown_76608174();
int64_t unknown_9b0beb2();
int64_t unknown_abdb0f1();
int64_t unknown_ffffffff83b6fecb();
int64_t unknown_ffffffff883cdd28();
int64_t unknown_ffffffff8a2b9f47();
int64_t unknown_ffffffff8b3b1202();
int64_t unknown_ffffffff99808d4c();
int64_t unknown_ffffffff9c4688e4();
int64_t unknown_ffffffff9eb3283e();
int64_t unknown_ffffffffa45123cf();
int64_t unknown_ffffffffb24ee701();
int64_t unknown_ffffffffc2f369e0();
int64_t unknown_ffffffffcbdcd184();
int64_t unknown_ffffffffcca302b1();
int64_t unknown_ffffffffccb69157();
int64_t unknown_ffffffffd1d176c1();
int64_t unknown_ffffffffdae0740b();
int64_t unknown_ffffffffdc951d07();
int64_t unknown_ffffffffe83d4024();
int64_t unknown_ffffffffe8cb74c6();
int64_t unknown_ffffffffe8fb7181();
int64_t unknown_fffffffff7171063();

// Address range: 0x3912a0 - 0x391361
int64_t function_3912a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3912a0
    int64_t v1; // bp+16, 0x3912a0
    int64_t v2 = (int64_t)&v1; // 0x3912b6
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3912be
    *v3 = 0x2797bd90;
    int64_t v4 = v2 - 16; // 0x3912c3
    int64_t * v5 = (int64_t *)v4; // 0x3912c5
    *v5 = v4;
    *(int64_t *)(v2 + 32) = v1;
    *v5 = a7;
    *v3 = v2;
    v1 = v2 + 16;
    return function_c4258(a1, a2, a3, a4, a5, *v3);
}

// Address range: 0x391361 - 0x3914a3
int64_t function_391361(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x391361
    int64_t v1; // 0x391361
    return function_c4258(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x3914a3 - 0x3915e6
int64_t function_3914a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3914a3
    int64_t v1; // bp-48, 0x3914a3
    int64_t v2 = (int64_t)&v1; // 0x391509
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x39151f
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x391522
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x391526
    *v5 = v2;
    v1 = v4;
    *v5 = 0x590f19d6;
    *(int64_t *)(v2 - 24) = 0x31fbcd5f;
    *(int64_t *)(v2 - 32) = *(int64_t *)(v2 + 8);
    *(int64_t *)(v2 + 16) = *v5;
    *v5 = v2;
    *v5 = *v3;
    int64_t v6; // 0x3914a3
    return function_c4258(a1, a2, 86, a4, a5, v6);
}

// Address range: 0x3915e6 - 0x3915eb
int64_t function_3915e6(void) {
    // 0x3915e6
    return function_396fc3();
}

// Address range: 0x391622 - 0x391623
int64_t function_391622(int64_t a1) {
    // 0x391622
    int64_t result; // 0x391622
    return result;
}

// Address range: 0x39163a - 0x39163c
int64_t function_39163a(void) {
    // 0x39163a
    int64_t result; // 0x39163a
    return result;
}

// Address range: 0x39163e - 0x39163f
int64_t function_39163e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39163e
    return a4 & 0xffffffff;
}

// Address range: 0x391647 - 0x391648
int64_t function_391647(void) {
    // 0x391647
    int64_t result; // 0x391647
    return result;
}

// Address range: 0x39164e - 0x391659
int64_t function_39164e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39164e
    int64_t result; // 0x39164e
    int32_t * v1 = (int32_t *)(result - 0x23df7451 + 4 * result); // 0x39164e
    *v1 = *v1 + (int32_t)a4;
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x39170e - 0x391711
int64_t function_39170e(int64_t a1) {
    // 0x39170e
    int64_t result; // 0x39170e
    return result;
}

// Address range: 0x39172e - 0x39172f
int64_t function_39172e(int64_t a1) {
    // 0x39172e
    int64_t result; // 0x39172e
    return result;
}

// Address range: 0x3917c8 - 0x3917d8
int64_t function_3917c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3917c8
    int64_t v1; // 0x3917c8
    *(char *)a1 = (char)v1;
    *(char *)a3 = (char)a4;
    return a4 & 0xffffffff;
}

// Address range: 0x3917e8 - 0x3917fd
int64_t function_3917e8(int64_t a1, int64_t a2) {
    // 0x3917e8
    unknown_abdb0f1();
    __asm_sti();
    return function_391807();
}

// Address range: 0x391805 - 0x391807
int64_t function_391805(void) {
    // 0x391805
    int64_t v1; // 0x391805
    return v1 & -0xff01 | (int64_t)"MCloneTable";
}

// Address range: 0x391807 - 0x391808
int64_t function_391807(void) {
    // 0x391807
    int64_t v1; // 0x391807
    return v1 & 0xffffffff;
}

// Address range: 0x39180b - 0x39180d
int64_t function_39180b(int64_t a1, int64_t a2) {
    // 0x39180b
    int64_t result; // 0x39180b
    return result;
}

// Address range: 0x391819 - 0x39182b
int64_t function_391819(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x391819
    __asm_int(-75);
    int64_t v1; // 0x391819
    int64_t v2 = v1 & -0x17af4451; // 0x39181d
    int32_t * v3 = (int32_t *)(a4 + a1); // 0x391823
    uint32_t v4 = *v3; // 0x391823
    uint32_t v5 = v4 + (int32_t)a1; // 0x391823
    *v3 = v5;
    int32_t v6 = *(int32_t *)v2; // 0x391826
    return v6 + (int32_t)v2 + (int32_t)(v5 < v4);
}

// Address range: 0x391aa0 - 0x391aa6
int64_t function_391aa0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 62); // 0x391aa3
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x391aa0
    return v2 & 0xffffffff;
}

// Address range: 0x391aa7 - 0x391ab1
int64_t function_391aa7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x391aa7
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x391aa7
    bool v1; // 0x391aa7
    __writegsbyte(a4, (char)v1 - (char)result + __readgsbyte(a4));
    return result;
}

// Address range: 0x391ac9 - 0x391aca
int64_t function_391ac9(void) {
    // 0x391ac9
    int64_t result; // 0x391ac9
    return result;
}

// Address range: 0x391afa - 0x391c1b
int64_t function_391afa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = unknown_ffffffff8b3b1202(); // 0x391afc
    int64_t v3; // 0x391afa
    if (a4 == 1 | *(int32_t *)((v3 & 0xffffffff) + 35) == -(int32_t)v3) {
        // 0x391b0e
        return unknown_ffffffffdc951d07();
    }
    uint32_t v4 = *(int32_t *)0x1e8af35; // 0x391b5c
    bool v5; // 0x391afa
    int64_t v6 = v5 ? -4 : 4; // 0x391b5c
    int64_t result = unknown_fffffffff7171063(v6 + 0x1e8af35, v6 + a2); // 0x391b5d
    int32_t * v7 = (int32_t *)(result - 0x522920aa); // 0x391b62
    *v7 = (int32_t)(v4 > (int32_t)a2) - (int32_t)v2 + *v7;
    *(char *)v1 = *(char *)&v1 + (char)result;
    return result;
}

// Address range: 0x391c1c - 0x391c31
int64_t function_391c1c(void) {
    // 0x391c1c
    int64_t v1; // 0x391c1c
    *(int32_t *)0x2a0e2001e8f1227c = (int32_t)v1;
    return function_221f8de();
}

// Address range: 0x391c3e - 0x391c8a
int64_t function_391c3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x391c3e
    int64_t v1; // 0x391c3e
    uint64_t v2 = v1;
    unknown_3d3b0444();
    int32_t * v3 = (int32_t *)(a2 - 10); // 0x391c43
    *v3 = *v3 + (int32_t)a4;
    int64_t v4 = unknown_10a0e94c(); // 0x391c46
    int32_t * v5 = (int32_t *)(v2 - 0x7274ef8); // 0x391c57
    *v5 = *v5 | 18;
    *(char *)0x7bf83365 = *(char *)0x7bf83365 + (char)(v2 / 256);
    int32_t * v6 = (int32_t *)(a3 - 0x1b53ac9d); // 0x391c64
    *v6 = *v6 | -31;
    *(int32_t *)a1 = (int32_t)v4;
    if (a4 != 1) {
        // 0x391c7a
        return a2 & 0xffffffff;
    }
    // 0x391ca3
    bool v7; // 0x391c3e
    int64_t v8 = v7 ? 0xfffffffc : 4; // 0x391c6b
    return v4 + 0x3f9662ae + (int64_t)(-1 - (int32_t)(v8 + a1) < (int32_t)a2) & 0xffffffff;
}

// Address range: 0x393dcb - 0x393dda
int64_t function_393dcb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x393dcb
    bool v1; // 0x393dcb
    int64_t result = unknown_111d2bd2((v1 ? -1 : 1) + a1); // 0x393dcc
    char * v2 = (char *)result; // 0x393dd1
    *v2 = *v2 | (char)result;
    return result;
}

// Address range: 0x393e18 - 0x393e2a
int64_t function_393e18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393e18
    int64_t v1; // 0x393e18
    uint64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | v1);
    char * v3 = (char *)(v1 - 116); // 0x393e1e
    *v3 = *v3 + (char)(v2 / 256);
    return unknown_6170e42b();
}

// Address range: 0x393e2b - 0x393ea7
int64_t function_393e2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x393e2b
    int64_t v1; // 0x393e2b
    int64_t v2 = v1;
    int64_t v3; // 0x393e2b
    v3 = function_ffffffffc5c82e65();
    int64_t v4 = v3; // 0x393e31
    bool v5; // 0x393e2b
    *(char *)v4 = (char)v5 - (char)a3 + (char)v4;
    int32_t * v6 = (int32_t *)(v2 - 96 + 2 * v2); // 0x393e35
    uint32_t v7 = *v6; // 0x393e35
    uint32_t v8 = v7 + (int32_t)a4; // 0x393e35
    *v6 = v8;
    int32_t * v9 = (int32_t *)(a3 + 0x37c3aeb5 + 4 * v2); // 0x393e39
    *v9 = *v9 + (int32_t)v1 + (int32_t)(v8 < v7);
    int64_t result = unknown_ffffffff8a2b9f47(); // 0x393e41
    if ((char)result > 46) {
        // 0x393e9d
        return function_393ed0(a1, a2, a3);
    }
    // 0x393e4a
    *(char *)(v2 - 0x3059c866) = -1;
    return result;
}

// Address range: 0x393ead - 0x393ecc
int64_t function_393ead(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393ead
    int64_t v1; // 0x393ead
    int32_t * v2 = (int32_t *)(v1 + 0xe8840a); // 0x393ead
    *v2 = *v2 + (int32_t)v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x393eb3
    if (v3 != 0) {
        int64_t v4; // 0x393ead
        uint32_t v5 = *(int32_t *)&v4; // 0x393eb3
        *(int32_t *)v4 = v5 >> 32 - v3 | v5 << v3;
    }
    unknown_ffffffffd1d176c1();
    bool v6; // 0x393ead
    int64_t v7 = v6 ? -1 : 1; // 0x393ec2
    return function_221a866(v7 + a1, v7 + a2);
}

// Address range: 0x393ed0 - 0x393eeb
int64_t function_393ed0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x393ed0
    unknown_ffffffffe8cb74c6();
    int64_t v1; // 0x393ed0
    int32_t * v2 = (int32_t *)(8 * a3 + 0x1e8013d + v1); // 0x393eda
    *v2 = *v2 + (int32_t)a3;
    return unknown_106bfee7();
}

// Address range: 0x393f0a - 0x393f2c
int64_t function_393f0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x393f0a
    int64_t v1; // 0x393f0a
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 | a4);
    int64_t result = __asm_wait(); // 0x393f0f
    *(int32_t *)-0x2ff0c574d4c5a624 = (int32_t)result;
    return result;
}

// Address range: 0x393f66 - 0x393f72
int64_t function_393f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393f66
    int64_t v1; // 0x393f66
    return v1 & -256 | 130;
}

// Address range: 0x393f8a - 0x393fd5
int64_t function_393f8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 0x49805de4 + 2 * a3); // 0x393f8b
    int64_t v2; // 0x393f8a
    char v3 = v2; // 0x393f8b
    *v1 = *v1 + v3;
    int64_t v4 = (int64_t)(*(int32_t *)0xaad3f9e + (int32_t)a1); // 0x393f96
    int64_t v5; // 0x393f8a
    *(int32_t *)v4 = *(int32_t *)&v5;
    bool v6; // 0x393f8a
    int64_t v7 = v6 ? -4 : 4; // 0x393f9d
    int64_t v8 = v7 + v4; // 0x393f9d
    int64_t v9 = v7 + a2; // 0x393f9d
    char v10 = a4; // 0x393f9e
    char * v11 = (char *)(a4 & 0xffffffff); // 0x393f9e
    int64_t v12; // 0x393f8a
    *v11 = *(char *)&v12 + v10;
    char * v13 = (char *)(v8 + 12); // 0x393fa0
    *v13 = *v13 + v3;
    *v11 = *(char *)&v12 + v10;
    int32_t * v14 = (int32_t *)(v8 - 111); // 0x393fa6
    *v14 = *v14 + (int32_t)v2;
    __asm_outsb((int16_t)a3, *(char *)v9);
    unknown_6c1aacb5();
    *(int32_t *)v8 = *(int32_t *)v9;
    return function_1763fd6(v8 + v7, v9 + v7);
}

// Address range: 0x393fe4 - 0x393fe5
int64_t function_393fe4(void) {
    // 0x393fe4
    int64_t result; // 0x393fe4
    return result;
}

// Address range: 0x393fea - 0x393feb
int64_t function_393fea(void) {
    // 0x393fea
    int64_t result; // 0x393fea
    return result;
}

// Address range: 0x393ffe - 0x394002
int64_t function_393ffe(void) {
    // 0x393ffe
    return function_393fea();
}

// Address range: 0x394043 - 0x394056
int64_t function_394043(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x394043
    bool v1; // 0x394043
    if (v1) {
        function_393fe4();
    }
    int32_t * v2 = (int32_t *)(a4 + 0x13d00c6); // 0x394047
    *v2 = *v2 + (int32_t)a3;
    return function_3940ab(a1);
}

// Address range: 0x394063 - 0x394064
int64_t function_394063(void) {
    // 0x394063
    int64_t result; // 0x394063
    return result;
}

// Address range: 0x3940ab - 0x3940ac
int64_t function_3940ab(int64_t a1) {
    // 0x3940ab
    int64_t result; // 0x3940ab
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3940c8 - 0x3940d6
int64_t function_3940c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3940c8
    int64_t v1; // 0x3940c8
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    *(int32_t *)0x3b0bb9d0 = (int32_t)a4;
    return result;
}

// Address range: 0x3940d9 - 0x3940dc
int64_t function_3940d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3940d9
    int64_t result; // 0x3940d9
    *(char *)a1 = (char)result - (char)a4;
    return result;
}

// Address range: 0x394156 - 0x39415a
int64_t function_394156(void) {
    // 0x394156
    int64_t v1; // 0x394156
    int64_t v2 = v1;
    return (v2 + 142) % 256 | v2 & -256;
}

// Address range: 0x394176 - 0x394177
int64_t function_394176(int64_t a1) {
    // 0x394176
    int64_t result; // 0x394176
    return result;
}

// Address range: 0x394192 - 0x39419a
int64_t function_394192(int64_t a1) {
    // 0x394192
    int64_t result; // 0x394192
    return result;
}

// Address range: 0x3941bc - 0x3941bf
int64_t function_3941bc(void) {
    // 0x3941bc
    int64_t result; // 0x3941bc
    return result;
}

// Address range: 0x394204 - 0x394205
int64_t function_394204(void) {
    // 0x394204
    int64_t result; // 0x394204
    return result;
}

// Address range: 0x394212 - 0x39421a
int64_t function_394212(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x394212
    int64_t v1; // 0x394212
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 8); // 0x394214
    *v3 = *v3 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x394224 - 0x394233
int64_t function_394224(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_3d43f52a(); // 0x394224
    int64_t v2; // 0x394224
    *(int32_t *)a3 = (int32_t)v2 + (int32_t)a2;
    __asm_rcl(*(int32_t *)(v1 + 2 * v2 & 0xffffffff));
    return function_394204();
}

// Address range: 0x39423e - 0x394248
int64_t function_39423e(int64_t a1) {
    // 0x39423e
    int64_t result; // 0x39423e
    *(int32_t *)0x13d000a1c65e674 = (int32_t)result;
    return result;
}

// Address range: 0x3942ba - 0x3942bb
int64_t function_3942ba(int64_t a1) {
    // 0x3942ba
    int64_t result; // 0x3942ba
    return result;
}

// Address range: 0x3942e3 - 0x394380
int64_t function_3942e3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3942e3
    int64_t v1; // 0x3942e3
    int64_t v2 = v1 + a1 & 0xffffffff; // 0x3942e3
    char * v3 = (char *)(a3 + 9); // 0x3942e5
    *v3 = *v3 - 1;
    int64_t v4; // 0x3942e3
    *(int32_t *)v2 = *(int32_t *)&v4;
    bool v5; // 0x3942e3
    int64_t v6 = v5 ? -4 : 4; // 0x3942e8
    int64_t v7 = v6 + v2; // 0x3942e8
    v4 = v6 + a2;
    int64_t result; // 0x3942e3
    int64_t v8 = result;
    *(char *)v8 = *(char *)&result + (char)v8;
    char * v9 = (char *)(2 * a4); // 0x3942eb
    *v9 = *v9 + (char)a3;
    int64_t v10 = result;
    *(char *)v10 = *(char *)&result + (char)v10;
    char * v11 = (char *)(a4 - 0x1c1c569); // 0x3942f0
    *v11 = *v11 + (char)v1;
    int64_t v12 = (a4 + 1) % 256 | a4 & -256; // 0x3942fd
    char * v13 = (char *)(v1 - 0x7226b5b); // 0x3942ff
    char v14 = a4 / 256; // 0x3942ff
    *v13 = *v13 & v14;
    int32_t v15 = result;
    __asm_out_133(119, v15);
    *(char *)-0x53d95ef2 = *(char *)-0x53d95ef2 + (char)(v1 / 256);
    if (v12 == 0) {
        // 0x394377
        *(int32_t *)v7 = v15;
        return result;
    }
    char * v16 = (char *)(result + v12); // 0x39430f
    *v16 = *v16 + (char)result;
    char * v17 = (char *)(9 * v7); // 0x394312
    *v17 = *v17 + v14;
    return result;
}

// Address range: 0x394381 - 0x39438c
int64_t function_394381(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x394381
    __asm_in_134(-22);
    int32_t * v1 = (int32_t *)(4 * a4 + a3); // 0x394388
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x39439e - 0x3943a9
int64_t function_39439e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39439e
    int64_t v1; // 0x39439e
    unsigned char v2 = (char)v1; // 0x39439e
    bool v3; // 0x39439e
    unsigned char v4 = v2 - 111 + (char)v3; // 0x39439e
    int64_t result = v1 & -256 | (int64_t)v4; // 0x39439e
    int32_t * v5 = (int32_t *)(result + 0x4ab54003); // 0x3943a0
    *v5 = *v5 - (int32_t)a3 + (int32_t)(v3 ? v4 <= v2 : v2 > 110);
    return result;
}

// Address range: 0x3943b6 - 0x3943c0
int64_t function_3943b6(int64_t a1) {
    // 0x3943b6
    int64_t v1; // 0x3943b6
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)((char)v2 - *(char *)(v1 - 0x6fc7fe18));
}

// Address range: 0x39440a - 0x39440b
int64_t function_39440a(void) {
    // 0x39440a
    int64_t result; // 0x39440a
    return result;
}

// Address range: 0x394413 - 0x394416
int64_t function_394413(int64_t a1) {
    // 0x394413
    int64_t result; // 0x394413
    return result;
}

// Address range: 0x394419 - 0x39441b
int64_t function_394419(void) {
    // 0x394419
    int64_t result; // 0x394419
    return result;
}

// Address range: 0x39441b - 0x394429
int64_t function_39441b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffc2f369e0(); // 0x394420
    bool v2; // 0x39441b
    if (!v2) {
        v1 = function_39440a();
    }
    // 0x394422
    int64_t v3; // 0x39441b
    int32_t * v4 = (int32_t *)(2 * a3 - 76 + v3); // 0x394422
    *v4 = *v4 + (int32_t)a4;
    return v1 | 19;
}

// Address range: 0x394483 - 0x3944c1
int64_t function_394483(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x33c4519e); // 0x394483
    *v1 = *v1 | (int32_t)a3;
    uint64_t v2 = a4 / 256; // 0x39448a
    int64_t v3; // 0x394483
    uint64_t v4 = v3 + v2; // 0x39448a
    int32_t * v5 = (int32_t *)((v4 % 256 | v3 & -256) - 3); // 0x39448c
    *v5 = *v5 + (int32_t)a2;
    __asm_out_135(8, (char)v4);
    int64_t v6 = (int32_t)v3 >> 31 & -256 | 128; // 0x394491
    *(int32_t *)a1 = (int32_t)unknown_9b0beb2();
    char * v7 = (char *)(a4 - 0x52fe1708); // 0x394499
    unsigned char v8 = *v7; // 0x394499
    unsigned char v9 = v8 + (char)a4; // 0x394499
    *v7 = v9;
    char * v10 = (char *)v6; // 0x3944a7
    *v10 = *v10 + (char)v2 + (char)(v9 < v8);
    int64_t result = unknown_ffffffffcca302b1(0x2f6cab16); // 0x3944ab
    char * v11 = (char *)(4 * v3 + v6); // 0x3944b0
    unsigned char v12 = *v11; // 0x3944b0
    *v11 = 8 * v12 | v12 / 64;
    *v10 = *v10 >> 1;
    return result;
}

// Address range: 0x3944c3 - 0x3944e3
int64_t function_3944c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3944c3
    int64_t v1; // 0x3944c3
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v2 = (char)v2 + (char)v1;
    uint64_t v4 = a4 - 256 * (v3 + (int64_t)(-1 - (int32_t)v1 < (int32_t)v3));
    int64_t v5 = v4 & 0xff00 | a4 & -0xff01; // 0x3944c8
    int32_t * v6 = (int32_t *)(v5 + 0x33a71a15); // 0x3944ca
    *v6 = *v6 + (int32_t)a2;
    char * v7 = (char *)(v2 - 0x17e811f3); // 0x3944d3
    *v7 = *v7 & (char)(v4 / 256);
    int32_t * v8 = (int32_t *)(v5 - 0x26a7b73b); // 0x3944d9
    *v8 = *v8 + (int32_t)v5;
    __asm_wait();
    return function_3944eb();
}

// Address range: 0x3944e3 - 0x3944e4
int64_t function_3944e3(int64_t a1) {
    // 0x3944e3
    int64_t result; // 0x3944e3
    return result;
}

// Address range: 0x3944eb - 0x3944f3
int64_t function_3944eb(void) {
    // 0x3944eb
    int64_t v1; // 0x3944eb
    int64_t v2 = v1;
    return (v2 + 73) % 256 | v2 & -256;
}

// Address range: 0x39451d - 0x39454a
int64_t function_39451d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39451d
    bool v1; // 0x39451d
    if (!v1) {
        // 0x39451f
        int64_t result; // 0x39451d
        return result;
    }
    // 0x394544
    int64_t v2; // 0x39451d
    int64_t result2 = v2 & -256 | 19; // 0x394546
    int32_t * v3 = (int32_t *)result2; // 0x394548
    uint32_t v4 = *v3; // 0x394548
    uint32_t v5 = (int32_t)a4 % 32; // 0x394548
    if (v5 != 0) {
        *v3 = v4 >> 32 - v5 | v4 << v5;
    }
    // 0x39451f
    return result2;
}

// Address range: 0x39455e - 0x394561
int64_t function_39455e(int64_t a1) {
    // 0x39455e
    int64_t result; // 0x39455e
    return result;
}

// Address range: 0x3946d4 - 0x3946df
int64_t function_3946d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3946d4
    int64_t v1; // 0x3946d4
    int64_t v2 = v1;
    bool v3; // 0x3946d4
    return (v2 + 48 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x3946ee - 0x394703
int64_t function_3946ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3946ee
    __asm_wait();
    int64_t v1; // 0x3946ee
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3946ee
    int64_t v3 = v2 ? -4 : 4; // 0x3946ef
    int64_t v4 = v3 + a1; // 0x3946ef
    int64_t v5 = v3 + a2; // 0x3946ef
    *(char *)v4 = *(char *)v5;
    int64_t v6 = v2 ? -1 : 1; // 0x3946f4
    return unknown_ffffffffb24ee701(v4 + v6, v5 + v6);
}

// Address range: 0x394787 - 0x39479a
int64_t function_394787(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x394787
    int64_t result; // 0x394787
    *(char *)a3 = 2 * (char)result;
    int32_t * v1 = (int32_t *)(int64_t)(0x70000000 * *(int32_t *)-0x5a81356e); // 0x394795
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x39479c - 0x3947b2
int64_t function_39479c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39479c
    __asm_in((int16_t)a3);
    return __asm_in_136(102);
}

// Address range: 0x394811 - 0x394823
int64_t function_394811(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x394811
    int64_t v1; // 0x394811
    int32_t * v2 = (int32_t *)(v1 - 126); // 0x394811
    bool v3; // 0x394811
    *v2 = *v2 - (v3 ? 15 : 14);
    return function_ffffffffabb7506e();
}

// Address range: 0x394879 - 0x3948f2
int64_t function_394879(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a2; // 0x394879
    int64_t v2; // 0x394879
    uint32_t v3 = (int32_t)v2; // 0x394879
    int32_t v4 = v1 - v3; // 0x394879
    int64_t v5 = v2 & 0xffff00ff | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v1 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v1 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v4) % 2 == 0)) | 512; // 0x39487b
    if ((int32_t)v5 < 0x8ca317) {
        // 0x3948f0
        return v2 & 0xffffffff;
    }
    int64_t v6 = v5 + 0xff735ce9; // 0x39487c
    int64_t result = v6 & 0xffffffff; // 0x39487c
    int32_t * v7 = (int32_t *)result; // 0x394888
    *v7 = (int32_t)((int32_t)v6 < 0x7c9e5f01) + (int32_t)v2 + *v7;
    return result;
}

// Address range: 0x3948f5 - 0x3948fc
int64_t function_3948f5(void) {
    // 0x3948f5
    int64_t result; // 0x3948f5
    return result;
}

// Address range: 0x394947 - 0x39494c
int64_t function_394947(void) {
    // 0x394947
    return function_ffffffffc3fd49b4();
}

// Address range: 0x39495c - 0x39496d
int64_t function_39495c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39495c
    int64_t v1; // 0x39495c
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char v3 = __asm_in_137((int16_t)a3); // 0x394962
    __asm_out_135(-67, v3);
    return (v1 & 0xffffff00 | (int64_t)v3) + 0x5e42a6ea & 0xffffffff;
}

// Address range: 0x39497d - 0x394986
int64_t function_39497d(int64_t a1, int64_t a2, int32_t a3) {
    // 0x39497d
    int64_t result; // 0x39497d
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x3bfdb5 - 0x3bfde5
int64_t function_3bfdb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3bfdb5
    int64_t v1; // 0x3bfdb5
    uint32_t v2 = (int32_t)v1; // 0x3bfdb5
    uint32_t v3 = v2 + 0x68850f; // 0x3bfdb5
    int64_t result = v3; // 0x3bfdb5
    if (v2 > 0xff977af0) {
        // 0x3bfdbe
        return a4 == 1 | v3 == 0 ? result | 52 : result;
    }
    // 0x3bfdd4
    *(int32_t *)0x3fffc75c019dc6ef = v3;
    return result;
}

// Address range: 0x3bfdf2 - 0x3bfdfe
int64_t function_3bfdf2(void) {
    // 0x3bfdf2
    return function_5f29bd2a();
}

// Address range: 0x3bfe2e - 0x3bfe32
int64_t function_3bfe2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bfe2e
    int64_t result; // 0x3bfe2e
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x3bfe6b - 0x3bfe6c
int64_t function_3bfe6b(void) {
    // 0x3bfe6b
    int64_t result; // 0x3bfe6b
    return result;
}

// Address range: 0x3bfe7e - 0x3bfea2
int64_t function_3bfe7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3bfe7e
    int64_t v1; // 0x3bfe7e
    int64_t v2 = v1;
    if (*(char *)(2 * v2 + a3) == (char)v2) {
        function_3bfe6b();
    }
    int32_t * v3 = (int32_t *)(a2 + 0x253e920c + v2); // 0x3bfe83
    *v3 = *v3 + (int32_t)v1;
    int32_t * v4 = (int32_t *)(v2 - 0x22b84c6e); // 0x3bfe99
    *v4 = *v4 + (int32_t)a4;
    return a2 & 0xe8979baf;
}

// Address range: 0x3bfeb9 - 0x3bfeba
int64_t function_3bfeb9(void) {
    // 0x3bfeb9
    int64_t result; // 0x3bfeb9
    return result;
}

// Address range: 0x3bfee3 - 0x3bfee6
int64_t function_3bfee3(void) {
    // 0x3bfee3
    int64_t result; // 0x3bfee3
    return result;
}

// Address range: 0x3bfef3 - 0x3bff5d
int64_t function_3bfef3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    char * v2 = (char *)(a4 - 113); // 0x3bfef3
    int64_t v3; // 0x3bfef3
    *v2 = *v2 + (char)v3;
    int64_t v4 = a4 - 1; // 0x3bfefb
    int64_t result = unknown_28415efc(); // 0x3bfefb
    if (v4 != 0) {
        result = function_3bfeb9();
    }
    // 0x3bfefe
    int64_t v5; // 0x3bfef3
    unsigned char v6 = *(char *)&v5; // 0x3bfefe
    unsigned char v7 = v6 + (char)result; // 0x3bfefe
    *(char *)v5 = v7;
    if (v7 >= v6) {
        // 0x3bff02
        if (v7 != 0) {
            // 0x3bff15
            return result;
        }
        // 0x3bff04
        bool v8; // 0x3bfef3
        int64_t v9 = v1 + (v8 ? -4 : 4); // 0x3bff04
        unknown_ffffffffdae0740b(v9);
        return function_3bff6b(v9, a2, a3, v4);
    }
    int64_t result2 = result + 0x4401e892 & 0xffffffff; // 0x3bff30
    char v10 = *(char *)result2; // 0x3bff35
    unsigned char v11 = (char)((int32_t)result > 0xbbfe176d) - v10 + (char)(v5 / 256); // 0x3bff35
    int64_t v12 = 256 * (int64_t)v11 | v5 & -0xff01; // 0x3bff35
    v5 = v12;
    char * v13 = (char *)v12; // 0x3bff37
    unsigned char v14 = *v13; // 0x3bff37
    unsigned char v15 = v14 + v11; // 0x3bff37
    *v13 = v15;
    int32_t v16 = *(int32_t *)&v1; // 0x3bff39
    int32_t v17 = v16 + (int32_t)v5; // 0x3bff39
    int32_t v18 = v17 + (int32_t)(v15 < v14); // 0x3bff39
    *(int32_t *)v1 = v18;
    int16_t v19 = a3; // 0x3bff3b
    *(char *)v1 = __asm_insb(v19);
    int32_t v20 = v18; // 0x3bff3c
    int32_t v21 = v17; // 0x3bff3c
    int32_t v22 = v16; // 0x3bff3c
    if (v18 == 0) {
        // 0x3bff15
        return result2;
    }
    bool v23 = v15 < v14; // 0x3bff3c
    unsigned char v24 = llvm_ctpop_i8((char)v20); // 0x3bff39
    int64_t v25; // 0x3bfef3
    int64_t v26 = v25 - 8; // 0x3bff3f
    *(int64_t *)v26 = 52;
    int64_t result3 = unknown_564a8d47(); // 0x3bff41
    *(char *)0x1a3a72ccdced182c = (char)result3;
    while (v24 % 2 != 0) {
        uint32_t v27 = v22;
        v23 = v23 ? v20 <= v27 : v21 < v27;
        v22 = *(int32_t *)&v1;
        v21 = v22 + (int32_t)v5;
        v20 = v21 + (int32_t)v23;
        *(int32_t *)v1 = v20;
        *(char *)v1 = __asm_insb(v19);
        if (v20 == 0) {
            // break -> 0x3bff15
            break;
        }
        v24 = llvm_ctpop_i8((char)v20);
        v26 -= 8;
        *(int64_t *)v26 = 52;
        result3 = unknown_564a8d47();
        *(char *)0x1a3a72ccdced182c = (char)result3;
    }
    // 0x3bff15
    return result3;
}

// Address range: 0x3bff68 - 0x3bff6b
int64_t function_3bff68(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a4 - 22); // 0x3bff68
    *v1 = *v1 | (char)(a4 / 256);
    int64_t result; // 0x3bff68
    return result;
}

// Address range: 0x3bff6b - 0x3bffc9
int64_t function_3bff6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bff6d
    unknown_76608174();
    int64_t v1 = unknown_ffffffffe8fb7181() + 0xb8d5a6c6; // 0x3bff80
    int64_t result = v1 & 0xffffffff; // 0x3bff80
    if (a4 != 0) {
        // 0x3bff89
        return result;
    }
    // 0x3bffc8
    *(int32_t *)a1 = (int32_t)v1;
    return result;
}

// Address range: 0x3bfffa - 0x3c0006
int64_t function_3bfffa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3bfffa
    int64_t v1; // 0x3bfffa
    return v1 & -256 | (int64_t)*(char *)0xaf500b309d0640a;
}

// Address range: 0x3c0017 - 0x3c0018
int64_t function_3c0017(void) {
    // 0x3c0017
    int64_t result; // 0x3c0017
    return result;
}

// Address range: 0x3c002d - 0x3c002e
int64_t function_3c002d(int64_t a1) {
    // 0x3c002d
    int64_t result; // 0x3c002d
    return result;
}

// Address range: 0x3c0033 - 0x3c0042
int64_t function_3c0033(int64_t a1) {
    // 0x3c0033
    int64_t v1; // 0x3c0033
    __asm_out_133(-97, (int32_t)v1 - 0x3456bc8e);
    return function_3c0017();
}

// Address range: 0x3c004f - 0x3c0050
int64_t function_3c004f(void) {
    // 0x3c004f
    int64_t result; // 0x3c004f
    return result;
}

// Address range: 0x3c0069 - 0x3c006e
int64_t function_3c0069(int64_t a1, int64_t a2) {
    // 0x3c0069
    int64_t v1; // 0x3c0069
    *(int32_t *)a2 = 2 * (int32_t)v1;
    return function_3c004f();
}

// Address range: 0x3c008c - 0x3c00b7
int64_t function_3c008c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c008c
    int64_t v1; // 0x3c008c
    *(int32_t *)a1 = (int32_t)(v1 | a2);
    int32_t * v2 = (int32_t *)(4 * a3 + 0x13d01e8 + v1); // 0x3c0093
    *v2 = *v2 & -0x1eccfe18;
    unknown_2ed40dad();
    return a1 & 0xffffffff;
}

// Address range: 0x3c00d1 - 0x3c00d2
int64_t function_3c00d1(void) {
    // 0x3c00d1
    int64_t result; // 0x3c00d1
    return result;
}

// Address range: 0x3c00de - 0x3c00e5
int64_t function_3c00de(void) {
    // 0x3c00de
    unknown_ffffffff9c4688e4();
    return function_3c00d1();
}

// Address range: 0x3c0167 - 0x3c016a
int64_t function_3c0167(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c0167
    int64_t result; // 0x3c0167
    return result;
}

// Address range: 0x3c01b3 - 0x3c01b7
int64_t function_3c01b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c01b3
    int64_t result; // 0x3c01b3
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3c01c8 - 0x3c021a
int64_t function_3c01c8(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint64_t v2 = unknown_ffffffffa45123cf(); // 0x3c01c9
    char v3 = v2 | a2; // 0x3c01da
    *(char *)a2 = v3;
    if (v3 < 1) {
        int64_t v4 = v2 - a1; // 0x3c01d2
        int64_t v5 = (v2 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < a1) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - a1 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v4) % 2 == 0)) | 512) + 0xab7fc764; // 0x3c020c
        *(char *)0x22b48d3a01e85416 = (char)v5;
        return v5 & 0xffffffff;
    }
    // 0x3c01de
    bool v6; // 0x3c01c8
    int64_t v7 = (v6 ? -8 : 8) + a1; // 0x3c01d2
    *(char *)v7 = *(char *)&v1;
    int64_t v8 = v6 ? -1 : 1; // 0x3c01de
    int64_t v9 = __asm_hlt(v7 + v8, v1 + v8, a3 & -0xff01 | (int64_t)&g2); // 0x3c01e1
    return (v9 + 166) % 256 | v9 & -256;
}

// Address range: 0x3c021b - 0x3c0222
int64_t function_3c021b(int64_t a1, int64_t a2) {
    // 0x3c021b
    int64_t v1; // 0x3c021b
    return v1 & 0xffffffff;
}

// Address range: 0x3c026d - 0x3c0277
int64_t function_3c026d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c026d
    int64_t v1; // 0x3c026d
    int64_t result = v1;
    bool v2; // 0x3c026d
    if (a4 == 1 || v2) {
        // 0x3c0271
        return (result + 115 + (v2 ? 23 : 24)) % 256 | result & -256;
    }
    // 0x3c02a4
    return result;
}

// Address range: 0x3c027b - 0x3c027e
int64_t function_3c027b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c027b
    int64_t result; // 0x3c027b
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x3c0298 - 0x3c0299
int64_t function_3c0298(int64_t a1) {
    // 0x3c0298
    int64_t result; // 0x3c0298
    return result;
}

// Address range: 0x3c029b - 0x3c02a0
int64_t function_3c029b(void) {
    // 0x3c029b
    return function_c574b53();
}

// Address range: 0x3c02a6 - 0x3c02a7
int64_t function_3c02a6(void) {
    // 0x3c02a6
    int64_t result; // 0x3c02a6
    return result;
}

// Address range: 0x3c02c5 - 0x3c035c
int64_t function_3c02c5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3c02c5
    int64_t v1; // 0x3c02c5
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 - 0x4c054c62); // 0x3c02c5
    *v3 = *v3 + (char)(a3 / 256);
    int64_t v4; // bp-8, 0x3c02c5
    char * v5 = (char *)&v4; // bp-16158, 0x3c02d1
    int64_t v6 = a2 + 0xc23da154; // 0x3c02d5
    int32_t * v7 = (int32_t *)(v6 & 0xffffffff); // 0x3c02da
    *v7 = *v7 + (int32_t)v6;
    __asm_outsb((int16_t)a3, *(char *)&v4);
    uint64_t v8 = v6 + a4; // 0x3c02e4
    int32_t * v9 = (int32_t *)(a3 + 11); // 0x3c02e6
    *v9 = *v9 + (int32_t)a3;
    int32_t v10 = *(int32_t *)((v8 % 256 | v6 & 0xffffff00) + 0x6d00019d); // 0x3c02e9
    char v11 = *(char *)((int64_t)(v10 + (int32_t)(int64_t)&v4) + 0x42bff210); // 0x3c02fc
    uint64_t v12 = a1 + 61 + v8 & a3; // 0x3c0302
    int64_t v13 = v12 % 256 | a3 & -256; // 0x3c0302
    int64_t v14 = a1 + 0x1506bc07 + v13; // 0x3c030b
    v5 = (char *)(256 * (int64_t)(v11 & (char)(v2 / 256)) | v2 & -0xff01);
    unknown_3ac2a319();
    unknown_ffffffffe83d4024();
    uint32_t v15 = (int32_t)a1; // 0x3c0326
    uint32_t v16 = *(int32_t *)(a4 + 77) + v15; // 0x3c0326
    int32_t v17 = __readgsdword(v13 + 0x6601e85a); // 0x3c0329
    int64_t v18 = v17 + (int32_t)(int64_t)&v5 + (int32_t)(v16 < v15); // 0x3c0329
    int32_t * v19 = (int32_t *)(v14 & 0xffffffff); // 0x3c0336
    *v19 = *v19 + (int32_t)v14;
    unknown_ffffffff9eb3283e();
    int64_t v20 = v18 - 8; // 0x3c0342
    *(int64_t *)v20 = -24;
    __asm_in_136(16);
    char * v21 = (char *)(int64_t)(-123 * v16); // 0x3c0348
    *v21 = *v21 | (char)v12 + 103;
    *(int64_t *)(v18 - 16) = v20;
    *(int64_t *)(v18 - 24) = 0x259e3b61;
    unknown_32451356();
    return __asm_sti();
}

// Address range: 0x3c05b5 - 0x3c05ca
int64_t function_3c05b5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c05b5
    bool v1; // 0x3c05b5
    __asm_int3((v1 ? -1 : 1) + a1);
    int32_t * v2 = (int32_t *)(a3 - 0x2fffc789); // 0x3c05bd
    int64_t v3; // 0x3c05b5
    *v2 = *v2 + (int32_t)v3;
    return unknown_ffffffff83b6fecb();
}

// Address range: 0x3c05fa - 0x3c05ff
int64_t function_3c05fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c05fa
    int64_t result; // 0x3c05fa
    bool v1; // 0x3c05fa
    *(char *)a3 = (char)result - (char)((uint64_t)result / 256) + (char)v1;
    return result;
}

// Address range: 0x3c0613 - 0x3c0643
int64_t function_3c0613(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 121); // 0x3c0613
    uint32_t v2 = *v1; // 0x3c0613
    uint32_t v3 = v2 + (int32_t)a4; // 0x3c0613
    *v1 = v3;
    int64_t v4; // 0x3c0613
    *(int32_t *)v4 = *(int32_t *)&v4 - (v3 < v2 ? 61 : 60);
    int64_t v5; // 0x3c0613
    char * v6 = (char *)(v5 + 0x48c69600); // 0x3c0619
    *v6 = *v6 + (char)v5;
    char * v7 = (char *)(a3 + 1); // 0x3c061f
    *v7 = *v7 + (char)(v5 / 256);
    unknown_ffffffff883cdd28();
    *(int32_t *)(a3 + 0x1e80099) = (int32_t)v5;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_3c3deec0();
}

// Address range: 0x3c064a - 0x3c0727
int64_t function_3c064a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2; // 0x3c064a
    unsigned char v3 = *(char *)(v2 + 0x38a2cd03); // 0x3c064a
    int64_t v4 = unknown_ffffffffccb69157(); // 0x3c0651
    int64_t v5 = (int64_t)&v1; // 0x3c065b
    int64_t v6 = v4 - (v3 > (char)v2 ? 0x4901e809 : 0x4901e808); // 0x3c065c
    uint16_t v7 = (int16_t)v6; // 0x3c0661
    uint16_t v8 = (int16_t)*(char *)(a1 + 47); // 0x3c0661
    uint16_t v9 = v7 % v8; // 0x3c0661
    int64_t v10 = v6 & 0xffff0000 | (int64_t)(v7 / v8 % 256) | (int64_t)(256 * v9); // 0x3c0661
    int64_t v11 = (a3 | a1) & a4;
    uint32_t v12 = (int32_t)v11; // 0x3c0667
    int64_t v13 = v11 & 0xffffffff; // 0x3c0667
    char * v14 = (char *)(v13 + 0x49dc000a); // 0x3c06a1
    unsigned char v15 = *v14; // 0x3c06a1
    unsigned char v16 = v15 + (char)(v12 / 256); // 0x3c06a1
    *v14 = v16;
    int32_t v17 = *(int32_t *)v13; // 0x3c06a7
    int32_t v18 = v16 < v15; // 0x3c06a7
    int32_t v19 = v17 + v12 + v18; // 0x3c06a7
    int32_t v20 = v19 + v18; // 0x3c06a7
    if (((v20 ^ v12) & (v20 ^ v17)) < 0) {
        int64_t v21 = unknown_1dc9b7b1(); // 0x3c06ab
        if (v19 < 0 == ((v20 ^ v12) & (v20 ^ v17)) < 0 == (v19 != 0)) {
            // 0x3c071a
            return (a4 / 256 + 1 + v21) % 256 | v21 & -256;
        }
        int32_t * v22 = (int32_t *)(a4 - 0x63e08d0b); // 0x3c06b9
        *v22 = *v22 + (int32_t)v2;
        int32_t * v23 = (int32_t *)v10; // 0x3c06c8
        *v23 = *v23 + (int32_t)v5;
        *(int32_t *)(v10 - 0xf3b8a9d) = (int32_t)v10;
        *(int16_t *)(a4 + 0x1e8976d) = (int16_t)0.0;
        abort();
        // UNREACHABLE
    }
    int32_t * v24 = (int32_t *)(a4 + 103); // 0x3c0670
    *v24 = *v24 + (int32_t)v5;
    char v25 = a4; // 0x3c0675
    char * v26 = (char *)v10; // 0x3c0675
    *v26 = v25;
    unknown_5a51a602();
    __asm_int3(a1);
    int64_t result = unknown_ffffffffcbdcd184(); // 0x3c067e
    char * v27 = (char *)(result + 0x2500cb0f); // 0x3c0683
    *v27 = *v27 + (char)v9;
    *v26 = *v26 - (*(char *)(result + 0x1e8218d) ^ v25);
    return result;
}

// Address range: 0x3c074c - 0x3c075e
int64_t function_3c074c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c074c
    int64_t v1; // 0x3c074c
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 + 0x16d4e639); // 0x3c074c
    *v3 = *v3 + (int32_t)a2;
    return (v2 + 209) % 256 | v2 & -256;
}

// Address range: 0x3c075e - 0x3c075f
int64_t function_3c075e(int64_t a1) {
    // 0x3c075e
    int64_t result; // 0x3c075e
    return result;
}

// Address range: 0x3c07c5 - 0x3c07d0
int64_t function_3c07c5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c07c5
    int64_t v1; // 0x3c07c5
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 / 256 % 256 | a3 & -256); // 0x3c07c7
    *v3 = *v3 + (char)v2;
    return function_ffffffffc3cd6f72();
}

// Address range: 0x3c07f7 - 0x3c07fa
int64_t function_3c07f7(void) {
    // 0x3c07f7
    return __asm_sti();
}

// Address range: 0x3c0809 - 0x3c0845
int64_t function_3c0809(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3c0809
    int64_t result; // 0x3c0809
    // 0x3c080b
    return result;
    int64_t v1 = result & 0xffffffff ^ 0x2a01e8af; // 0x3c0819
    int32_t * v2 = (int32_t *)(a1 + 0x1e81c8d); // 0x3c0822
    int32_t v3 = *v2; // 0x3c0822
    int32_t v4 = a2; // 0x3c0822
    int32_t v5 = v3 + v4; // 0x3c0822
    *v2 = v5;
    __asm_out_135(109, (char)v1);
    int32_t v6 = *(int32_t *)(a3 + 0x123a0db3); // 0x3c082b
    uint32_t result2 = v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0 == (v5 != 0) ? v6 : (int32_t)v1; // 0x3c082b
    int32_t * v7 = (int32_t *)(result + 112); // 0x3c0834
    *v7 = *v7 + v4;
    return result2;
}

// Address range: 0x3c08f4 - 0x3c08f6
int64_t function_3c08f4(void) {
    // 0x3c08f4
    int64_t v1; // 0x3c08f4
    return function_3c0968(v1, v1, v1, v1);
}

// Address range: 0x3c0924 - 0x3c0927
int64_t function_3c0924(void) {
    // 0x3c0924
    int64_t result; // 0x3c0924
    return result;
}

// Address range: 0x3c095a - 0x3c095f
int64_t function_3c095a(void) {
    // 0x3c095a
    return function_ffffffffc23df15f();
}

// Address range: 0x3c0968 - 0x3c0975
int64_t function_3c0968(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3c0968
    int64_t result; // 0x3c0968
    if (v1 != 0) {
        char * v2 = (char *)(result + 0x6805843b); // 0x3c0968
        *v2 = *v2 >> v1;
    }
    char * v3 = (char *)(2 * result - 0x3b48fec3); // 0x3c096e
    *v3 = *v3 | (char)(a4 / 256);
    return result;
}

// Address range: 0x3c0976 - 0x3c097c
int64_t function_3c0976(void) {
    // 0x3c0976
    return unknown_ffffffff99808d4c();
}

// Address range: 0x3c097c - 0x3c097e
int64_t function_3c097c(void) {
    // 0x3c097c
    int64_t result; // 0x3c097c
    return result;
}

// Address range: 0x3c09a4 - 0x3c09a6
int64_t function_3c09a4(void) {
    // 0x3c09a4
    int64_t result; // 0x3c09a4
    return result;
}

// Address range: 0x3c09a6 - 0x3c09aa
int64_t function_3c09a6(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x3c09a6
    return result;
}
