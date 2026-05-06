/*
 * Targeted RetDec C for native executable gap queue batch 1461.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2962a8-0x2964a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2966a8-0x2968a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c6864-0x2c6a64 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c6a64-0x2c6c64 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c6c64-0x2c6e64 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c6e64-0x2c7064 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c7064-0x2c7264 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c7264-0x2c7464 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c7464-0x2c7664 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c7664-0x2c7675 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44e425-0x44e525 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44e625-0x44e825 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44e825-0x44ea25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44ec25-0x44ee25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44ee25-0x44f025 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44f025-0x44f040 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_296296();
int64_t function_2962a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2962ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2962ea(void);
int64_t function_2962ec(void);
int64_t function_2962f2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_296307(int64_t a1);
int64_t function_29635b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_296454(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_296477(void);
int64_t function_2966a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2966cc(void);
int64_t function_2966f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_296825(int64_t a1);
int64_t function_296836(int64_t a1);
int64_t function_29684a(int64_t a1);
int64_t function_296883(void);
int64_t function_29689d(void);
int64_t function_2c6864(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2c68c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c69f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c6b51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c6c72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c6e0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c6f9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c70ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2c722b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c738c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c749a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c75e4(void);
int64_t function_2c761d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_44e425(int64_t a1, int64_t a2);
int64_t function_44e487(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_44e60b();
int64_t function_44e61a();
int64_t function_44e625(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44e6ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44e7e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44e801(void);
int64_t function_44e808(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44e8db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44e911(void);
int64_t function_44e91d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44e935(void);
int64_t function_44e946(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44e948(void);
int64_t function_44e95d(void);
int64_t function_44e962(void);
int64_t function_44e969(int64_t a1);
int64_t function_44e98a(void);
int64_t function_44e9a0(void);
int64_t function_44e9af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44e9bf(int64_t a1);
int64_t function_44e9da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44ec25(void);
int64_t function_44ec69(int64_t a1);
int64_t function_44ecfe(void);
int64_t function_44ed68(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ed89(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ee2d(void);
int64_t function_44ee4a(int64_t a1);
int64_t function_44eeba(int64_t a1, int64_t a2);
int64_t function_44eeec(void);
int64_t function_44ef01(int64_t a1);
int64_t function_44ef08(void);
int64_t function_44ef0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ef8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44eff3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44f07a();
int64_t function_691da37d();
int64_t function_7f56f2da();
int64_t function_cf3c7();
int64_t function_ffffffff8ffb6572();
int64_t function_ffffffff9d9526a7();
int64_t unknown_458cf390();
int64_t unknown_fffffffffa700bfb();

// Address range: 0x2962a8 - 0x2962ad
int64_t function_2962a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2962a8
    int64_t v1; // 0x2962a8
    return v1 & 0xffffffff;
}

// Address range: 0x2962ae - 0x2962c8
int64_t function_2962ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2962ae
    int64_t result; // 0x2962ae
    bool v1; // 0x2962ae
    if (a4 != 1 != v1) {
        // 0x2962b0
        return result;
    }
    // 0x2962b1
    int64_t v2; // 0x2962ae
    int32_t * v3 = (int32_t *)(v2 + 0x3d003a9e); // 0x2962b3
    *v3 = *v3 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(a4 + 0x7a0107b2); // 0x2962b9
    uint32_t v5 = *v4; // 0x2962b9
    uint32_t v6 = v5 + (int32_t)v2; // 0x2962b9
    *v4 = v6;
    int64_t v7 = v2 - (v6 < v5 ? 0x68e6fbb5 : 0x68e6fbb4); // 0x2962bf
    char v8 = v7; // 0x2962c4
    char v9 = 2 * v8; // 0x2962c4
    result = v7 & 0xffffff00 | (int64_t)v9;
    if (v9 < 0 != (v9 ^ v8) < 0) {
        result = function_296296();
    }
    // 0x2962b0
    return result;
}

// Address range: 0x2962ea - 0x2962eb
int64_t function_2962ea(void) {
    // 0x2962ea
    int64_t result; // 0x2962ea
    return result;
}

// Address range: 0x2962ec - 0x2962f2
int64_t function_2962ec(void) {
    // 0x2962ec
    int64_t result; // 0x2962ec
    int32_t * v1 = (int32_t *)(result + 47); // 0x2962ec
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2962f2 - 0x2962f8
int64_t function_2962f2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2962f2
    int64_t v1; // 0x2962f2
    *(char *)a1 = (char)v1;
    int64_t v2; // 0x2962f2
    *(int32_t *)a3 = *(int32_t *)&v2 >> 1;
    return function_2962ea();
}

// Address range: 0x296307 - 0x29630b
int64_t function_296307(int64_t a1) {
    // 0x296307
    int64_t result; // 0x296307
    return result;
}

// Address range: 0x29635b - 0x296438
int64_t function_29635b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29635b
    int64_t v1; // 0x29635b
    int64_t v2 = v1;
    __asm_int1();
    int32_t v3 = *(int32_t *)0x3dd1486d; // 0x2963ae
    *(int32_t *)0x3dd1486d = v3 - 0x3dd1486d;
    if ((0x3dd1486c - v3 & v3) >= 0) {
        // 0x29638a
        return unknown_458cf390();
    }
    // 0x2963b2
    bool v4; // 0x29635b
    int64_t v5 = v1 + a2 + (v4 ? 0xfffffffc : 4) & 0xffffffff; // 0x2963ac
    int64_t v6 = v4 ? -4 : 4; // 0x2963b2
    int64_t v7 = v6 + a1; // 0x2963b2
    int64_t v8 = v5 + v6; // 0x2963b2
    int64_t result = 128 * (int64_t)(*(int32_t *)v5 < (int32_t)a1) | 0x3dd14836; // 0x2963b3
    char v9 = *(char *)(result + 55); // 0x2963b8
    *(int32_t *)(result + 58) = (int32_t)a3;
    char v10 = *(char *)((v2 & -256 | (int64_t)(-1 - v9 + (char)v2)) + 0x3d0021c6); // 0x2963be
    unsigned char v11 = v10 | (char)a3; // 0x2963be
    int32_t * v12 = (int32_t *)(v7 + 15); // 0x2963c4
    int32_t v13 = *v12 + (int32_t)v7; // 0x2963c4
    *v12 = v13;
    if (v13 < 1) {
        // 0x296405
        __asm_outsb((int16_t)(a3 & 0xff00 | (int64_t)v11), *(char *)v8);
        return result;
    }
    int64_t v14 = a4 & 0xffffff00 | 115; // 0x2963d0
    int32_t * v15 = (int32_t *)(v8 + 0x684faa93); // 0x2963d2
    *v15 = *v15 + (int32_t)v14;
    char * v16 = (char *)v8; // 0x2963d8
    *v16 = *v16 + (v11 & -117);
    return result + v14 & 0xffffffa9;
}

// Address range: 0x296454 - 0x29645f
int64_t function_296454(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)0x40f32c5b; // 0x296454
    int64_t result; // 0x296454
    *(char *)0x40f32c5b = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x296477 - 0x29647c
int64_t function_296477(void) {
    // 0x296477
    return function_691da37d();
}

// Address range: 0x2966a8 - 0x2966b8
int64_t function_2966a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2966a8
    int64_t v1; // 0x2966a8
    int32_t * v2 = (int32_t *)(a4 - 56 + 2 * v1); // 0x2966ad
    *v2 = *v2 + (int32_t)v1;
    return v1 + 0xd820e888 & 0xffffffff;
}

// Address range: 0x2966cc - 0x2966cd
int64_t function_2966cc(void) {
    // 0x2966cc
    int64_t result; // 0x2966cc
    return result;
}

// Address range: 0x2966f2 - 0x29676c
int64_t function_2966f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2966f2
    int64_t v1; // 0x2966f2
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)a4; // 0x2966f2
    *(char *)v1 = v2 - v3;
    int64_t v4 = unknown_fffffffffa700bfb(); // 0x2966f5
    __asm_out_133(62, (int32_t)v4);
    char * v5 = (char *)(4 * a4 + 0x3500d001 + v4); // 0x2966fd
    *v5 = (char)(v2 < v3) + v3 + *v5;
    uint32_t v6 = (int32_t)__asm_sti(); // 0x296705
    int32_t v7 = v6 < 0x7bf4e401; // 0x29670a
    int32_t v8 = v6 + 0x40927b0c + v7; // 0x29670a
    int64_t result = v8; // 0x29670a
    if (v8 < 0 == (v8 + v7 & (v6 ^ -0x80000000)) < 0) {
        // 0x29676a
        return result & 0xffff00ff | 0xe800;
    }
    // 0x296711
    return result;
}

// Address range: 0x296825 - 0x296831
int64_t function_296825(int64_t a1) {
    // 0x296825
    return (int64_t)*(int32_t *)-0x42fec2409ae6ff87;
}

// Address range: 0x296836 - 0x296839
int64_t function_296836(int64_t a1) {
    // 0x296836
    int64_t result; // 0x296836
    return result;
}

// Address range: 0x29684a - 0x29684e
int64_t function_29684a(int64_t a1) {
    // 0x29684a
    int64_t result; // 0x29684a
    return result;
}

// Address range: 0x296883 - 0x296884
int64_t function_296883(void) {
    // 0x296883
    int64_t result; // 0x296883
    return result;
}

// Address range: 0x29689d - 0x2968a4
int64_t function_29689d(void) {
    // 0x29689d
    return function_296883();
}

// Address range: 0x2c6864 - 0x2c68c1
int64_t function_2c6864(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2c6864
    int64_t v1; // 0x2c6864
    int64_t v2 = (int64_t)&v1; // 0x2c6869
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x2c68a3
    v1 = v3;
    *(int64_t *)(v2 - 8) = v3;
    int64_t v4; // 0x2c6864
    return function_cf3c7(a1, a2, v4, a3, v4, v4);
}

// Address range: 0x2c68c1 - 0x2c69f9
int64_t function_2c68c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c68c1
    int64_t v1; // bp-56, 0x2c68c1
    int64_t v2 = (int64_t)&v1; // 0x2c69c4
    int64_t v3 = v2 + 16; // 0x2c69ca
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x2c69d8
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    int64_t v5; // 0x2c68c1
    return function_cf3c7(a1, a2, a3, a4, a5, v5);
}

// Address range: 0x2c69f9 - 0x2c6b51
int64_t function_2c69f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c69f9
    int64_t v1; // bp-72, 0x2c69f9
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2c69f9
    return function_cf3c7(a1, a2, v2, v2, a5, a6);
}

// Address range: 0x2c6b51 - 0x2c6c72
int64_t function_2c6b51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c6b51
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2c6c72 - 0x2c6e0e
int64_t function_2c6c72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c6c72
    *(int64_t *)(a5 - 16) = a5 + 8;
    *(int64_t *)(a5 - 24) = *(int64_t *)(a5 - 8);
    int64_t v1; // 0x2c6c72
    return function_cf3c7(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x2c6e0e - 0x2c6f9e
int64_t function_2c6e0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c6e0e
    int64_t v1; // bp-32, 0x2c6e0e
    v1 = (int64_t)&v1;
    int64_t v2; // bp-64, 0x2c6e0e
    v2 = (int64_t)&v2;
    int64_t v3; // 0x2c6e0e
    return function_cf3c7(a1, a2, a3, v3, a5, a6);
}

// Address range: 0x2c6f9e - 0x2c70ee
int64_t function_2c6f9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c6f9e
    int64_t v1; // bp-64, 0x2c6f9e
    v1 = (int64_t)&v1;
    int64_t v2; // 0x2c6f9e
    return function_cf3c7(a1, a2, a3, a4, a5, v2);
}

// Address range: 0x2c70ee - 0x2c722b
int64_t function_2c70ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2c70ee
    int64_t v1; // 0x2c70ee
    return function_cf3c7(a1, a2, a3, v1, v1, v1);
}

// Address range: 0x2c722b - 0x2c738c
int64_t function_2c722b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c722b
    int64_t v1; // bp-40, 0x2c722b
    v1 = (int64_t)&v1;
    int64_t v2; // 0x2c722b
    return function_cf3c7(a1, a2, a3, a4, a5, v2);
}

// Address range: 0x2c738c - 0x2c749a
int64_t function_2c738c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x71e22246; // bp-32, 0x2c73d7
    int64_t v2 = (int64_t)&v1; // 0x2c741e
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2c7426
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x2c742a
    *v3 = 0x7abb3e3f;
    *v4 = 0x28654dd6;
    *(int64_t *)(v2 - 24) = a7;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x2c744d
    *v5 = *v3;
    *v4 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v4 = v2;
    v1 = *v5;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2c749a - 0x2c75d6
int64_t function_2c749a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x6751b5af; // bp-40, 0x2c7579
    int64_t v2 = (int64_t)&v1; // 0x2c75b0
    *(int64_t *)(v2 - 8) = 0x6751b5af;
    *(int64_t *)(v2 - 16) = 0x6751b5af;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2c75e4 - 0x2c75e6
int64_t function_2c75e4(void) {
    // 0x2c75e4
    int64_t result; // 0x2c75e4
    return result;
}

// Address range: 0x2c761d - 0x2c7622
int64_t function_2c761d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2c761d
    int64_t v1; // 0x2c761d
    int64_t result = v1 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x2c761d
    char * v2 = (char *)(result + 57); // 0x2c761e
    *v2 = *v2 | (char)(a4 / 256);
    return result;
}

// Address range: 0x44e425 - 0x44e441
int64_t function_44e425(int64_t a1, int64_t a2) {
    // 0x44e425
    int64_t v1; // 0x44e425
    *(int32_t *)0x1ce145544dc54a9a = (int32_t)v1;
    return a2 & 0xffffffff;
}

// Address range: 0x44e487 - 0x44e48c
int64_t function_44e487(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x44e487
    int64_t result; // 0x44e487
    bool v1; // 0x44e487
    *(char *)a3 = (char)result + (char)(a3 / 256) + (char)v1;
    return result;
}

// Address range: 0x44e625 - 0x44e6a8
int64_t function_44e625(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 + 0x4e041a07 + a3); // 0x44e627
    int64_t v3; // 0x44e625
    *v2 = *v2 + (char)v3;
    char v4 = v3; // 0x44e62f
    unsigned char v5 = v4 - 110; // 0x44e62f
    __asm_out(-115, v5);
    int32_t v6 = *(int32_t *)&v1; // 0x44e633
    __asm_outsd((int16_t)a3, v6);
    int64_t v7 = v3 & -256 | (int64_t)v5; // 0x44e635
    if ((109 - v4 & v4) >= 0) {
        v7 = function_44e60b();
    }
    // 0x44e637
    if ((char)v7 == 32) {
        // 0x44e6a6
        *(char *)v1 = (char)v6 + (char)a3;
        return v7 & -256;
    }
    int64_t v8 = a1; // 0x44e63c
    if (a4 != 1) {
        v8 = function_44e61a();
    }
    // 0x44e63e
    *(int32_t *)0x3fcd4deb = *(int32_t *)0x3fcd4deb + 36;
    return v8 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x44e6ca - 0x44e7bd
int64_t function_44e6ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44e6ca
    int64_t v1; // 0x44e6ca
    int64_t result = v1;
    bool v2; // 0x44e6ca
    if (!v2) {
        // 0x44e6cc
        return result;
    }
    int64_t v3 = a1; // bp-8, 0x44e741
    int64_t v4 = v1 + a1 + (int64_t)((char)result > 186) & 0xffffffff; // 0x44e744
    int64_t v5 = (result + 25) % 256 | result & -256; // 0x44e748
    uint32_t v6 = (int32_t)v5; // 0x44e74a
    uint32_t v7 = *(int32_t *)v4; // 0x44e74a
    int64_t v8 = v4 + (v2 ? -4 : 4); // 0x44e74a
    if (v7 > v6) {
        // 0x44e7ac
        v3 = a3;
        return __asm_hlt(v8) | 91;
    }
    if (v7 < v6) {
        int32_t * v9 = (int32_t *)(v8 - 0x4aa1378); // 0x44e79b
        *v9 = *v9 ^ (int32_t)(int64_t)&v3;
        return v8 & 0xffffffff;
    }
    int64_t v10 = v5 - (v7 > v6 ? 0x111c74f0 : 0x111c74ef); // 0x44e6e3
    __asm_out_133(7, (int32_t)v10);
    int64_t v11 = v10 + 0xa6178f72; // 0x44e6eb
    char * v12 = (char *)(v11 & 0xffffffff); // 0x44e6f0
    *v12 = (char)v11;
    return v11 & 0xffffff00 | (int64_t)*v12;
}

// Address range: 0x44e7e5 - 0x44e7f1
int64_t function_44e7e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44e7e5
    int64_t result; // 0x44e7e5
    return result;
}

// Address range: 0x44e801 - 0x44e804
int64_t function_44e801(void) {
    // 0x44e801
    int64_t result; // 0x44e801
    return result;
}

// Address range: 0x44e808 - 0x44e8a2
int64_t function_44e808(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x44e808
    int64_t result; // 0x44e808
    bool v2; // 0x44e808
    if (v1 == 0 || v2) {
        // 0x44e80a
        return result;
    }
    char * v3 = (char *)v1; // 0x44e840
    *v3 = *v3 >> 1;
    return a5 & 0xf31ef00 | (int64_t)*(char *)((result & -256 | 203) + (a5 & 140));
}

// Address range: 0x44e8db - 0x44e900
int64_t function_44e8db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44e8db
    int64_t v1; // 0x44e8db
    int64_t v2 = v1;
    int64_t v3 = v2 & -256 | (int64_t)((char)v2 - *(char *)(a4 - 0xac70a52)); // 0x44e8db
    int32_t * v4 = (int32_t *)(v3 + a1); // 0x44e8e1
    *v4 = -1 - *v4;
    uint64_t v5 = v3 + 0xd52b6f0e; // 0x44e8e5
    char v6 = *(char *)(a3 + 0x768b4be7); // 0x44e8ec
    int64_t v7; // 0x44e8db
    unsigned char v8 = *(char *)&v7; // 0x44e8f2
    *(char *)a3 = v8 + 31;
    __asm_out_133(78, (int32_t)(256 * (int64_t)(v6 & (char)(v5 / 256)) | v5 & 0xffff0048));
    int32_t v9 = *(int32_t *)0x1dc1fef5; // 0x44e8f7
    *(int32_t *)0x1dc1fef5 = (int32_t)(v8 < 225) + (int32_t)v1 + v9;
    return function_44e948();
}

// Address range: 0x44e911 - 0x44e916
int64_t function_44e911(void) {
    // 0x44e911
    return function_ffffffff8ffb6572();
}

// Address range: 0x44e91d - 0x44e92f
int64_t function_44e91d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44e91d
    *(char *)(a2 + 0x629c4355) = (char)a3;
    char v1 = __asm_in_135(58); // 0x44e923
    float80_t v2; // 0x44e91d
    *(float64_t *)a3 = (float64_t)v2;
    __asm_out_136((int16_t)a3, v1);
    return function_ffffffff9d9526a7();
}

// Address range: 0x44e935 - 0x44e938
int64_t function_44e935(void) {
    // 0x44e935
    int64_t result; // 0x44e935
    return result;
}

// Address range: 0x44e946 - 0x44e948
int64_t function_44e946(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44e946
    int64_t result; // 0x44e946
    return result;
}

// Address range: 0x44e948 - 0x44e949
int64_t function_44e948(void) {
    // 0x44e948
    int64_t result; // 0x44e948
    return result;
}

// Address range: 0x44e95d - 0x44e962
int64_t function_44e95d(void) {
    // 0x44e95d
    return function_7f56f2da();
}

// Address range: 0x44e962 - 0x44e964
int64_t function_44e962(void) {
    // 0x44e962
    int64_t v1; // 0x44e962
    return function_44e9da(v1, v1, v1, v1, (int64_t)&g3);
}

// Address range: 0x44e969 - 0x44e96a
int64_t function_44e969(int64_t a1) {
    // 0x44e969
    int64_t result; // 0x44e969
    return result;
}

// Address range: 0x44e98a - 0x44e98b
int64_t function_44e98a(void) {
    // 0x44e98a
    int64_t result; // 0x44e98a
    return result;
}

// Address range: 0x44e9a0 - 0x44e9a1
int64_t function_44e9a0(void) {
    // 0x44e9a0
    int64_t result; // 0x44e9a0
    return result;
}

// Address range: 0x44e9af - 0x44e9bf
int64_t function_44e9af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44e9af
    int64_t v1; // 0x44e9af
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a4;
    return __asm_wait();
}

// Address range: 0x44e9bf - 0x44e9cb
int64_t function_44e9bf(int64_t a1) {
    // 0x44e9bf
    int64_t v1; // 0x44e9bf
    int32_t * v2 = (int32_t *)(v1 + 125); // 0x44e9c4
    *v2 = 1024 * *v2;
    bool v3; // 0x44e9bf
    return v1 - (v3 ? 0xdc3d942 : 0xdc3d941) & 0xffffffff;
}

// Address range: 0x44e9da - 0x44ea24
int64_t function_44e9da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44e9da
    int64_t v1; // 0x44e9da
    int64_t v2 = v1;
    __asm_out_133(0, (int32_t)v2);
    int64_t result = (v2 + 68) % 256 | v2 & -256; // 0x44e9e3
    if ((char)v2 >= 188) {
        // 0x44e9e7
        return result;
    }
    // 0x44ea20
    *(int64_t *)0x49663446 = a4;
    return result;
}

// Address range: 0x44ec25 - 0x44ec26
int64_t function_44ec25(void) {
    // 0x44ec25
    int64_t result; // 0x44ec25
    return result;
}

// Address range: 0x44ec69 - 0x44ec6d
int64_t function_44ec69(int64_t a1) {
    // 0x44ec69
    int64_t result; // 0x44ec69
    return result;
}

// Address range: 0x44ecfe - 0x44ecff
int64_t function_44ecfe(void) {
    // 0x44ecfe
    int64_t result; // 0x44ecfe
    return result;
}

// Address range: 0x44ed68 - 0x44ed75
int64_t function_44ed68(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44ed68
    int64_t result; // 0x44ed68
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x44ed89 - 0x44ee0f
int64_t function_44ed89(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int16_t v2; // 0x44ed89
    int64_t v3; // 0x44ed89
    bool v4; // 0x44ed89
    // 0x44ede5
    int64_t v5; // 0x44ed89
    v3 = 0x10000 * (int32_t)v5 >> 16;
    goto lab_0x44ede6;
  lab_0x44ede6:;
    // 0x44ede6
    int64_t v6; // 0x44ed89
    unsigned char v7 = (char)v6 % 32; // 0x44edf5
    if (v7 != 0) {
        *(char *)v1 = *(char *)&v1 >> v7;
    }
    int64_t v8; // 0x44ed89
    uint32_t v9 = (int32_t)v8; // 0x44edf7
    uint32_t v10 = *(int32_t *)(v6 + 29); // 0x44edf7
    uint32_t v11 = v9 - v10; // 0x44edf7
    *(char *)-0x6f6671cc183a7dbf = *(char *)0x725306ea572df96e;
    unsigned char v12 = *(char *)-0x70d729185dba7b70; // 0x44ee04
    int64_t v13; // 0x44ed89
    int64_t v14 = *(int64_t *)v13 & -256 | (int64_t)v12; // 0x44ee04
    int64_t result = v14; // 0x44ee0d
    if (v10 > v9 || v11 == 0) {
        // 0x44ed96
        return result;
    }
    // .dec_label_pc_44ed92_crit_edge
    v2 = v3;
    v4 = false;
    int64_t v15 = v14; // 0x44ed89
    int64_t v16 = v6; // 0x44ed89
    int64_t v17 = v11; // 0x44ed89
    int64_t v18 = v13 + 8; // 0x44ed89
    goto lab_0x44ed92;
  lab_0x44ed94:;
    // 0x44ed94
    int64_t v21; // 0x44ed89
    int64_t v24 = v21 - 1; // 0x44ed94
    int64_t v20; // 0x44ed89
    v3 = v20;
    v6 = v24;
    int64_t v22; // 0x44ed89
    v8 = v22;
    int64_t v23; // 0x44ed89
    v13 = v23;
    bool v19; // 0x44ed89
    if (v24 != 0 != v19) {
        int64_t result2 = result;
        return result2;
    }
    goto lab_0x44ede6;
  lab_0x44ed92:
    // 0x44ed92
    *(int32_t *)v1 = __asm_insd(v2);
    v19 = v4;
    v20 = v15;
    v21 = v16;
    v22 = v17;
    v23 = v18;
    goto lab_0x44ed94;
}

// Address range: 0x44ee2d - 0x44ee2e
int64_t function_44ee2d(void) {
    // 0x44ee2d
    int64_t result; // 0x44ee2d
    return result;
}

// Address range: 0x44ee4a - 0x44ee5a
int64_t function_44ee4a(int64_t a1) {
    // 0x44ee4a
    int64_t result; // 0x44ee4a
    *(int32_t *)(a1 + 65) = (int32_t)result;
    int32_t * v1 = (int32_t *)(result + 0x294c0402); // 0x44ee4d
    *v1 = *v1 ^ 102;
    return result;
}

// Address range: 0x44eeba - 0x44eebf
int64_t function_44eeba(int64_t a1, int64_t a2) {
    // 0x44eeba
    int64_t v1; // 0x44eeba
    return function_44ef0d(a1, a2, v1, v1);
}

// Address range: 0x44eeec - 0x44eef4
int64_t function_44eeec(void) {
    // 0x44eeec
    int32_t v1; // 0x44eeec
    int64_t result; // 0x44eeec
    *(int32_t *)result = (int32_t)(int64_t)&v1;
    return result;
}

// Address range: 0x44ef01 - 0x44ef04
int64_t function_44ef01(int64_t a1) {
    // 0x44ef01
    int64_t result; // 0x44ef01
    return result;
}

// Address range: 0x44ef08 - 0x44ef0a
int64_t function_44ef08(void) {
    // 0x44ef08
    int64_t result; // 0x44ef08
    return result;
}

// Address range: 0x44ef0d - 0x44ef87
int64_t function_44ef0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44ef0d
    *(int32_t *)(a3 + 46) = (int32_t)a4;
    int64_t v1; // 0x44ef0d
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    char * v2 = (char *)(a1 + 29); // 0x44ef11
    int64_t result; // 0x44ef0d
    char v3 = *v2 ^ (char)((uint64_t)result / 256); // 0x44ef11
    *v2 = v3;
    if (v3 == 0) {
        // 0x44ef83
        return result;
    }
    int32_t * v4 = (int32_t *)(result - 0x7d3e9135); // 0x44ef18
    *v4 = 0x8000000 * *v4;
    return result & -256 | (int64_t)*(char *)&v1;
}

// Address range: 0x44ef8a - 0x44efe2
int64_t function_44ef8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44ef8a
    int64_t v1; // 0x44ef8a
    *(char *)-0x403fffe1586e26f9 = (char)v1;
    bool v2; // 0x44ef8a
    *(int32_t *)a4 = (int32_t)v1 - (int32_t)a1 + (int32_t)v2;
    int64_t v3 = v1 + 8; // 0x44ef9a
    if (a4 != 0) {
        // 0x44efac
        return v3 & 0xffffffff;
    }
    unsigned char v4 = (char)*(int64_t *)v3 % 32; // 0x44efca
    if (v4 != 0) {
        char * v5 = (char *)(a1 - 64); // 0x44efca
        *v5 = *v5 >> v4;
    }
    return v1 + 0xb74d3e4d & 0xffffffff;
}

// Address range: 0x44eff3 - 0x44f03f
int64_t function_44eff3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44eff3
    int64_t v1; // 0x44eff3
    uint64_t v2 = v1;
    bool v3; // 0x44eff3
    unsigned char v4 = (char)v3 + (char)(v2 / 256) - *(char *)(a3 + 67); // 0x44eff3
    char v5 = __asm_in_135(104); // 0x44eff6
    int64_t result = v1 & -256 | (int64_t)v5; // 0x44eff6
    if (v4 == 0) {
        // 0x44effb
        return result;
    }
    int64_t v6 = 256 * (int64_t)v4 | v2 & -0xff01; // 0x44eff3
    char * v7 = (char *)(v6 + 0x201228b); // 0x44effc
    char v8 = *v7 | (char)a4; // 0x44effc
    *v7 = v8;
    if (a4 == 1 || v8 == 0) {
        if (a4 != 1) {
            // 0x44f006
            return 0x10000 * (int32_t)result >> 16 & -0x5e96ddad;
        }
        char * v9 = (char *)(v6 + 4 * a1); // 0x44f036
        *v9 = *v9 ^ 92;
    }
    char v10 = v5 | 68; // 0x44f03a
    int64_t result2 = result & -256 | (int64_t)v10; // 0x44f03c
    if (v10 >= 0) {
        result2 = function_44f07a();
    }
    // 0x44effb
    return result2;
}
