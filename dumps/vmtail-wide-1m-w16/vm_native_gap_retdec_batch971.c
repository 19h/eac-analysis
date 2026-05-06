/*
 * Targeted RetDec C for native executable gap queue batch 971.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x15f200-0x15f400 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15f400-0x15f600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15f600-0x15f800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15f800-0x15fa00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15fa00-0x15fc00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x15fc00-0x15fe00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20ce40-0x20d040 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20d040-0x20d240 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20d240-0x20d440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20d440-0x20d640 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20d640-0x20d840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20d840-0x20da40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20da40-0x20dc40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20dc40-0x20de40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dc2f9-0x4dc3f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dc8f9-0x4dc979 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_15f200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15f2ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15f439(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15f582(int64_t a1, int64_t a2, int64_t a3);
int64_t function_15f6f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15f84a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15f96b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15faca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15fc28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_15fdcb(int64_t a1);
int64_t function_209705b();
int64_t function_20ce40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20ce6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20ce85(void);
int64_t function_20ceaa(void);
int64_t function_20cec7(int64_t a1);
int64_t function_20cecc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20cf37(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_20d00b(void);
int64_t function_20d02f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20d041(int64_t a1, int64_t a2);
int64_t function_20d04a(void);
int64_t function_20d078(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20d0ce(void);
int64_t function_20d0d2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_20d154(int64_t a1);
int64_t function_20d164(int64_t a1, int64_t a2);
int64_t function_20d17c(void);
int64_t function_20d196(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d1bc(void);
int64_t function_20d1cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_20d1fc(void);
int64_t function_20d20e(void);
int64_t function_20d222(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d236(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d2a6(void);
int64_t function_20d2e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d318(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20d32e(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_20d336(int64_t a1, int64_t a2);
int64_t function_20d37d(void);
int64_t function_20d39f(void);
int64_t function_20d3a7(void);
int64_t function_20d415(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d41f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d44c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d4ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d501(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20d52f(void);
int64_t function_20d55a(void);
int64_t function_20d55f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20d58a(int64_t a1);
int64_t function_20d5bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20d646(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d65e(void);
int64_t function_20d678(void);
int64_t function_20d67a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20d684(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d6d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d6de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d6ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20d6f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d717(void);
int64_t function_20d729(void);
int64_t function_20d72a(int64_t a1);
int64_t function_20d78d(void);
int64_t function_20d793(int64_t a1);
int64_t function_20d7e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d80b(void);
int64_t function_20d815(int64_t a1);
int64_t function_20d84a(void);
int64_t function_20d860(void);
int64_t function_20d86c(void);
int64_t function_20d885(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20d89a(void);
int64_t function_20d8a3(int64_t a1);
int64_t function_20d8a5(int64_t a1);
int64_t function_20d8b2(void);
int64_t function_20d8d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d8f9(void);
int64_t function_20d909(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20d9ab(void);
int64_t function_20d9b5(void);
int64_t function_20d9cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20d9f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20da7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20da88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20daf7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20db4e(void);
int64_t function_20db59(int64_t a1);
int64_t function_20db75(void);
int64_t function_20db8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_20dc44(int64_t a1);
int64_t function_20dc89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20dd16(int64_t a1);
int64_t function_20ddd5(void);
int64_t function_20ddd9(int64_t a1);
int64_t function_20ddf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20de1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2410daed();
int64_t function_353ad3a6();
int64_t function_4dc2f9(void);
int64_t function_4dc33e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4dc35a(void);
int64_t function_4dc360(int64_t a1);
int64_t function_4dc36f(void);
int64_t function_4dc37e(void);
int64_t function_4dc388(void);
int64_t function_4dc38d(void);
int64_t function_4dc8f9(void);
int64_t function_4dc91d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int256_t a5);
int64_t function_55c4305b();
int64_t function_5a217faf();
int64_t function_b9b6b9a();
int64_t function_cdc60();
int64_t function_ffffffffd7fdd5cd();
int64_t function_ffffffffe8ef3e10();
int64_t function_ffffffffe9c2e2fe();
int64_t function_ffffffffef9b8509();
int64_t function_fffffffff33cd0c3();
int64_t function_fffffffff73c36cf();
int64_t unknown_104126d();
int64_t unknown_10f4d08d();
int64_t unknown_1c44e555();
int64_t unknown_1c605c3c();
int64_t unknown_20070789();
int64_t unknown_214cb9c5();
int64_t unknown_24aedd35();
int64_t unknown_271b7e65();
int64_t unknown_31b54635();
int64_t unknown_3a75740e();
int64_t unknown_4262789a();
int64_t unknown_4703c717();
int64_t unknown_503e303f();
int64_t unknown_629e0b4d();
int64_t unknown_62a89f3b();
int64_t unknown_6ac8b41e();
int64_t unknown_75b0b4c();
int64_t unknown_ce4bf7b();
int64_t unknown_ffffffff8212dd4e();
int64_t unknown_ffffffff8727bc4c();
int64_t unknown_ffffffff8faba36c();
int64_t unknown_ffffffff9311bf24();
int64_t unknown_ffffffff942d0858();
int64_t unknown_ffffffffa0a8f578();
int64_t unknown_ffffffffa3776229();
int64_t unknown_ffffffffa822dbcb();
int64_t unknown_ffffffffabd9bc3d();
int64_t unknown_ffffffffb91b6f22();
int64_t unknown_ffffffffbf2219d7();
int64_t unknown_ffffffffc67fad55();
int64_t unknown_ffffffffe0e9f68f();
int64_t unknown_ffffffffe5fe12cb();
int64_t unknown_ffffffffe8306c4d();
int64_t unknown_ffffffffe8e7c43c();
int64_t unknown_ffffffffef867048();
int64_t unknown_fffffffff1be7358();
int64_t unknown_fffffffffcb998a5();

// Address range: 0x15f200 - 0x15f2ed
int64_t function_15f200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15f200
    int64_t v1; // bp-8, 0x15f200
    int64_t v2 = (int64_t)&v1; // 0x15f21c
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x15f22b
    v1 = v3;
    int64_t v4 = v2 - 8; // 0x15f22f
    int64_t * v5 = (int64_t *)v4; // 0x15f22f
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x15f246
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x15f24f
    int64_t v8 = *v7; // 0x15f24f
    *v5 = v8;
    int64_t v9 = v2 - 24; // 0x15f25a
    int64_t * v10 = (int64_t *)v9; // 0x15f26a
    *v6 = v3;
    v1 = v3;
    *v10 = 0x9544e81;
    int64_t * v11 = (int64_t *)(v2 - 32); // 0x15f2a0
    *v11 = v8;
    *v7 = *v6;
    *v6 = *v5;
    *v10 = v4;
    *v6 = *v5;
    *v10 = a4;
    *v11 = v9;
    *v10 = v4;
    int64_t v12; // 0x15f200
    return function_cdc60(a1, a2, a3, *v10, v12, v12, 0x6fca85c5);
}

// Address range: 0x15f2ed - 0x15f439
int64_t function_15f2ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15f2ed
    return function_cdc60(a1, 310, a3, a4, a5, a6, a7);
}

// Address range: 0x15f439 - 0x15f582
int64_t function_15f439(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15f439
    int64_t v1; // bp-48, 0x15f439
    int64_t v2 = (int64_t)&v1; // 0x15f4df
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x15f4e7
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x15f4e7
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x15f4eb
    *v5 = a1;
    *v5 = a4;
    *v4 = v3;
    *(int64_t *)(v2 + 24) = v3;
    *v5 = v2;
    *v4 = v2 + 8;
    int64_t v6; // 0x15f439
    return function_cdc60(*v5, a2, a3, *v5, v6, v6, v1);
}

// Address range: 0x15f582 - 0x15f6f1
int64_t function_15f582(int64_t a1, int64_t a2, int64_t a3) {
    // 0x15f582
    int64_t v1; // bp-32, 0x15f582
    int64_t v2 = (int64_t)&v1; // 0x15f61c
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x15f624
    int64_t * v4 = (int64_t *)v3; // 0x15f62c
    *v4 = 0x44194415;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x15f643
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x15f64f
    *v4 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x15f66a
    *v7 = v3;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x15f673
    int64_t v9 = *v8; // 0x15f673
    *v5 = v9;
    *v7 = v9;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x15f68e
    *v10 = 0x75501c54;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x15f6a1
    *v11 = v6;
    *v4 = *v7;
    *v7 = 0x2085b6de;
    *v10 = 0x79f3fb62;
    *v11 = v9;
    *v8 = *v7;
    int64_t v12 = *v5; // 0x15f6c0
    *v7 = v12;
    *v10 = v12;
    int64_t v13 = *v4; // 0x15f6d6
    *v5 = v13;
    *v7 = v13;
    int64_t v14; // 0x15f582
    return function_cdc60(a1, a2, a3, v14, v14, v14, 0x13c204);
}

// Address range: 0x15f6f1 - 0x15f84a
int64_t function_15f6f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15f6f1
    int64_t v1; // bp-40, 0x15f6f1
    v1 = (int64_t)&v1;
    int64_t v2; // bp-8, 0x15f6f1
    int64_t v3 = (int64_t)&v2; // 0x15f80a
    int64_t * v4 = (int64_t *)(v3 - 16); // 0x15f819
    *v4 = a4;
    *v4 = v3;
    int64_t v5; // 0x15f6f1
    return function_cdc60(a1, a2, a3, *v4, v5, v5, v2);
}

// Address range: 0x15f84a - 0x15f96b
int64_t function_15f84a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15f84a
    int64_t v1; // bp-64, 0x15f84a
    v1 = (int64_t)&v1;
    int64_t v2; // 0x15f84a
    return function_cdc60(a1, a2, a3, v2, v2, v2, 0x13cb8e);
}

// Address range: 0x15f96b - 0x15faca
int64_t function_15f96b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15f96b
    int64_t v1; // bp-40, 0x15f96b
    int64_t v2 = (int64_t)&v1; // 0x15fa18
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x15fa20
    *(int64_t *)(v2 - 24) = a4;
    bool v4; // 0x15f96b
    *v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    *(int64_t *)(v2 + 16) = v1;
    v1 = 0x5ebb35c0;
    *(int64_t *)(v2 - 16) = 0x13d8a1;
    *v3 = 0x13d8a1;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x15faa9
    *v5 = a4;
    v1 = v2 + 24;
    int64_t v6 = *v5; // 0x15fabc
    *v3 = v6;
    int64_t v7; // 0x15f96b
    return function_cdc60(a1, a2, 0x13d8a1, v6, v7, v7, v1);
}

// Address range: 0x15faca - 0x15fc28
int64_t function_15faca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15faca
    int64_t v1; // bp-48, 0x15faca
    v1 = (int64_t)&v1;
    int64_t v2; // bp-56, 0x15faca
    int64_t v3 = (int64_t)&v2; // 0x15fbf4
    v2 = a5;
    int64_t v4 = v2; // 0x15fc1e
    v2 = v3 + 16;
    return function_cdc60(a1, a2, a3, a4, v4, a6, v1);
}

// Address range: 0x15fc28 - 0x15fd7a
int64_t function_15fc28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x15fc28
    bool v1; // 0x15fc28
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x15fc28
    int64_t v3 = v2; // bp-16, 0x15fd14
    int64_t v4; // bp-40, 0x15fc28
    v4 = (int64_t)&v4;
    int64_t v5 = (int64_t)&v3; // 0x15fd50
    int64_t v6 = *(int64_t *)(v5 + 8); // 0x15fd5c
    v3 = v6;
    *(int64_t *)(v5 - 8) = v6;
    return function_cdc60(a1, a2, a3, a4, a5, 0x13fe9b, v2);
}

// Address range: 0x15fdcb - 0x15fdce
int64_t function_15fdcb(int64_t a1) {
    // 0x15fdcb
    int64_t result; // 0x15fdcb
    return result;
}

// Address range: 0x20ce40 - 0x20ce59
int64_t function_20ce40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff942d0858(); // 0x20ce52
    int64_t v1; // 0x20ce40
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a4;
    return result;
}

// Address range: 0x20ce6e - 0x20ce74
int64_t function_20ce6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20ce6e
    int64_t result; // 0x20ce6e
    *(int32_t *)a3 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x20ce85 - 0x20ce8f
int64_t function_20ce85(void) {
    // 0x20ce85
    int64_t v1; // 0x20ce85
    __asm_out(121, (int32_t)v1);
    return unknown_10f4d08d();
}

// Address range: 0x20ceaa - 0x20ceaf
int64_t function_20ceaa(void) {
    // 0x20ceaa
    return function_209705b();
}

// Address range: 0x20cec7 - 0x20cecb
int64_t function_20cec7(int64_t a1) {
    // 0x20cec7
    int64_t result; // 0x20cec7
    __asm_out_133(-44, (char)result);
    return result;
}

// Address range: 0x20cecc - 0x20cf36
int64_t function_20cecc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20cecc
    int64_t v1; // 0x20cecc
    uint32_t v2 = (int32_t)v1; // 0x20cecf
    if (v2 != 0x23d90001) {
        int64_t result = unknown_ffffffffa3776229(); // 0x20cf23
        if (v2 > 0x23d90001) {
            // 0x20cf18
            return result;
        }
        unsigned char v3 = (char)result; // 0x20cf2a
        unsigned char v4 = (v2 >= 0x23d90001 ? 124 : 123) + v3; // 0x20cf2a
        bool v5 = v2 >= 0x23d90001 ? v4 <= v3 : v3 > 132; // 0x20cf2a
        return (result & 0xffffff00 | (int64_t)v4) - (v5 ? 0xe89274d0 : 0xe89274cf) & 0xffffffff;
    }
    // 0x20ced6
    unknown_62a89f3b();
    int64_t v6 = -0x3f6cc3ed; // bp-8, 0x20cede
    int64_t v7 = (int64_t)&v6; // 0x20cede
    while (true) {
        // 0x20cee3
        v7 -= 8;
        *(int64_t *)v7 = a3;
    }
}

// Address range: 0x20cf37 - 0x20cfd4
int64_t function_20cf37(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_503e303f(); // 0x20cf39
    *(int32_t *)a1 = (int32_t)v1;
    char v2 = *(char *)v1; // 0x20cf44
    bool v3; // 0x20cf37
    unknown_75b0b4c((v3 ? -4 : 4) + a1);
    int64_t v4; // 0x20cf37
    int32_t * v5 = (int32_t *)(4 * v4 - 82 + v4); // 0x20cf4b
    int32_t v6 = v4; // 0x20cf4b
    *v5 = *v5 + v6;
    if ((unknown_ffffffffc67fad55() & 0xd8e601e8) == 0) {
        int64_t v7 = unknown_104126d(); // 0x20cf66
        float80_t v8; // 0x20cf37
        *(int16_t *)v7 = (int16_t)v8;
        int32_t * v9 = (int32_t *)(256 * (int64_t)((char)(a3 / 256) - v2) | a3 & -0xff01); // 0x20cf73
        *v9 = *v9 + 0x486e019d;
        return v7 & 0x17911dc5 | 0xe86ee23a;
    }
    int64_t v10 = __asm_hlt(); // 0x20cfb4
    int32_t v11 = *(int32_t *)0x1e87519; // 0x20cfb7
    int64_t v12 = unknown_214cb9c5(v10 & 0xffffffff); // 0x20cfbc
    char * v13 = (char *)(v12 + 0x2c33c00); // 0x20cfc4
    *v13 = *v13 + (char)v12;
    int32_t * v14 = (int32_t *)((int64_t)(v11 + (int32_t)v4) + 0x4a010c00); // 0x20cfcc
    uint32_t v15 = *v14; // 0x20cfcc
    uint32_t v16 = v15 + v6; // 0x20cfcc
    *v14 = v16;
    return (v12 + a4 / 256 + (v16 < v15 ? 25 : 26)) % 256 | v12 & -256;
}

// Address range: 0x20d00b - 0x20d00e
int64_t function_20d00b(void) {
    // 0x20d00b
    int64_t v1; // 0x20d00b
    return v1 & -256 | (int64_t)__asm_in(-60);
}

// Address range: 0x20d02f - 0x20d032
int64_t function_20d02f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20d02f
    int64_t result; // 0x20d02f
    return result;
}

// Address range: 0x20d041 - 0x20d044
int64_t function_20d041(int64_t a1, int64_t a2) {
    // 0x20d041
    int64_t result; // 0x20d041
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x20d04a - 0x20d04d
int64_t function_20d04a(void) {
    // 0x20d04a
    int64_t result; // 0x20d04a
    return result;
}

// Address range: 0x20d078 - 0x20d089
int64_t function_20d078(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 98); // 0x20d07d
    *v1 = *v1 | -39;
    return unknown_20070789();
}

// Address range: 0x20d0ce - 0x20d0cf
int64_t function_20d0ce(void) {
    // 0x20d0ce
    int64_t result; // 0x20d0ce
    return result;
}

// Address range: 0x20d0d2 - 0x20d153
int64_t function_20d0d2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x20d0d2
    int64_t v1; // 0x20d0d2
    int64_t v2 = v1 & -0xff01 | (int64_t)&g3; // 0x20d0d2
    int32_t * v3 = (int32_t *)v2; // 0x20d0da
    int32_t v4 = v2; // 0x20d0da
    *v3 = *v3 + v4;
    int64_t v5 = __asm_int1(); // 0x20d0e1
    if (v4 < -0x600b00fe) {
        // 0x20d150
        return __asm_int1();
    }
    int64_t result = v5 & -256 | (int64_t)(*(char *)v5 + (char)v5); // 0x20d100
    if (a3 < 0x1e80b00) {
        result = function_20d0ce();
    }
    // 0x20d103
    __asm_rcl((int32_t)a3);
    return result;
}

// Address range: 0x20d154 - 0x20d163
int64_t function_20d154(int64_t a1) {
    // 0x20d154
    return unknown_ce4bf7b();
}

// Address range: 0x20d164 - 0x20d16a
int64_t function_20d164(int64_t a1, int64_t a2) {
    // 0x20d164
    int64_t result; // 0x20d164
    return result;
}

// Address range: 0x20d17c - 0x20d17d
int64_t function_20d17c(void) {
    // 0x20d17c
    int64_t result; // 0x20d17c
    return result;
}

// Address range: 0x20d196 - 0x20d1b1
int64_t function_20d196(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d196
    __asm_in(-102);
    char v1 = *(char *)-0xec63f60; // 0x20d199
    int64_t v2; // 0x20d196
    *(char *)-0xec63f60 = v1 + (char)((uint64_t)v2 / 256);
    int64_t v3 = function_20d17c(); // 0x20d1ab
    return (v3 + 159) % 256 | v3 & -256;
}

// Address range: 0x20d1bc - 0x20d1bd
int64_t function_20d1bc(void) {
    // 0x20d1bc
    int64_t result; // 0x20d1bc
    return result;
}

// Address range: 0x20d1cf - 0x20d1d9
int64_t function_20d1cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x20d1cf
    int64_t result; // 0x20d1cf
    int32_t * v1 = (int32_t *)(result + 67); // 0x20d1cf
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x20d1fc - 0x20d1fd
int64_t function_20d1fc(void) {
    // 0x20d1fc
    int64_t result; // 0x20d1fc
    return result;
}

// Address range: 0x20d20e - 0x20d210
int64_t function_20d20e(void) {
    // 0x20d20e
    return function_20d1bc();
}

// Address range: 0x20d222 - 0x20d236
int64_t function_20d222(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d222
    int64_t v1; // 0x20d222
    int64_t v2 = v1;
    int64_t v3 = a4;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    unsigned char v4 = (char)a4 % 32; // 0x20d226
    if (v4 != 0) {
        *(char *)v3 = *(char *)&v3 >> v4;
    }
    int64_t v5; // 0x20d222
    return (int64_t)&v5;
}

// Address range: 0x20d236 - 0x20d256
int64_t function_20d236(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d236
    unknown_ffffffffabd9bc3d();
    int64_t v1; // 0x20d236
    char v2 = v1 | (uint64_t)v1 / 256; // 0x20d23c
    *(char *)a3 = v2;
    int64_t v3; // 0x20d236
    __asm_out_133(-11, *(char *)&v3);
    unknown_ffffffffef867048();
    int64_t v4; // 0x20d236
    *(int32_t *)a1 = -1 - *(int32_t *)&v4;
    if (v2 != 0) {
        function_20d1fc();
    }
    unsigned char v5 = llvm_ctpop_i8(v2); // 0x20d23c
    return 0x8000 * (int64_t)(v2 < 0) | 0x4000 * (int64_t)(v2 == 0) | 1024 * (int64_t)(v5 % 2 == 0) | unknown_1c44e555() & -0xff01 | 768;
}

// Address range: 0x20d2a6 - 0x20d2a7
int64_t function_20d2a6(void) {
    // 0x20d2a6
    int64_t result; // 0x20d2a6
    return result;
}

// Address range: 0x20d2e5 - 0x20d30f
int64_t function_20d2e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d2e5
    int64_t v1; // 0x20d2e5
    bool v2; // 0x20d2e5
    if (!v2) {
        v1 = function_20d2a6();
    }
    int64_t v3 = v1;
    uint32_t v4 = (int32_t)a4 % 32; // 0x20d2ed
    bool v5 = !v2; // 0x20d2ed
    if (v4 != 0) {
        int32_t * v6 = (int32_t *)(a4 - 0x51478fc6); // 0x20d2ed
        uint32_t v7 = *v6; // 0x20d2ed
        *v6 = v7 >> v4;
        v5 = (v7 & 1 << v4 - 1) != 0;
    }
    __asm_out_134((int16_t)a3, (char)v3);
    int32_t * v8 = (int32_t *)(4 * a1 - 0xc2c6aad + ((v3 + 152 + (int64_t)v5) % 256 | v3 & 0xffffff00)); // 0x20d308
    int64_t v9; // 0x20d2e5
    *v8 = *v8 + (int32_t)v9;
    return -0x17f08f846b2523fa;
}

// Address range: 0x20d318 - 0x20d323
int64_t function_20d318(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20d318
    unknown_6ac8b41e(a1, a2, a3);
    int64_t v1; // 0x20d318
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_ffffffffe9c2e2fe();
}

// Address range: 0x20d32e - 0x20d335
int64_t function_20d32e(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x20d32e
    int64_t v1; // 0x20d32e
    int64_t result = v1;
    *(char *)result = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x20d336 - 0x20d34d
int64_t function_20d336(int64_t a1, int64_t a2) {
    // 0x20d336
    unknown_1c605c3c();
    return unknown_fffffffffcb998a5();
}

// Address range: 0x20d37d - 0x20d380
int64_t function_20d37d(void) {
    // 0x20d37d
    int64_t v1; // 0x20d37d
    int64_t v2 = v1;
    return 256 * v2 & 0xff00 | v2;
}

// Address range: 0x20d39f - 0x20d3a4
int64_t function_20d39f(void) {
    // 0x20d39f
    return unknown_fffffffffcb998a5();
}

// Address range: 0x20d3a7 - 0x20d3ae
int64_t function_20d3a7(void) {
    // 0x20d3a7
    return function_b9b6b9a();
}

// Address range: 0x20d415 - 0x20d41a
int64_t function_20d415(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d415
    int64_t result; // 0x20d415
    float80_t v1; // 0x20d415
    *(float32_t *)(8 * a3 - 49 + result) = (float32_t)v1;
    return result;
}

// Address range: 0x20d41f - 0x20d42a
int64_t function_20d41f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d41f
    int64_t result; // 0x20d41f
    *(int32_t *)a4 = (int32_t)(result | a1);
    return result;
}

// Address range: 0x20d44c - 0x20d45a
int64_t function_20d44c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x3d00f609; // bp-8, 0x20d44c
    int64_t result; // 0x20d44c
    *(int32_t *)a1 = (int32_t)(int64_t)&v1 + (int32_t)result;
    int32_t * v2 = (int32_t *)(a3 + 11); // 0x20d453
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x20d4ba - 0x20d4bf
int64_t function_20d4ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d4ba
    int64_t v1; // 0x20d4ba
    return v1 | 232;
}

// Address range: 0x20d501 - 0x20d514
int64_t function_20d501(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffff8212dd4e(); // 0x20d503
    uint32_t v1 = (int32_t)a4 % 32; // 0x20d508
    if (v1 != 0) {
        int64_t v2; // 0x20d501
        int32_t * v3 = (int32_t *)(v2 - 24); // 0x20d508
        uint32_t v4 = *v3; // 0x20d508
        *v3 = v4 >> v1 | v4 << 32 - v1;
    }
    int32_t * v5 = (int32_t *)(result - 0x687925fe); // 0x20d50b
    *v5 = *v5 + (int32_t)a1;
    return result;
}

// Address range: 0x20d52f - 0x20d534
int64_t function_20d52f(void) {
    // 0x20d52f
    return function_ffffffffd7fdd5cd();
}

// Address range: 0x20d55a - 0x20d55b
int64_t function_20d55a(void) {
    // 0x20d55a
    int64_t result; // 0x20d55a
    return result;
}

// Address range: 0x20d55f - 0x20d587
int64_t function_20d55f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_271b7e65(); // 0x20d55f
    char * v2 = (char *)(a3 - 0x70d44bfd); // 0x20d564
    *v2 = *v2 + 98;
    int64_t v3 = v1 | 126; // 0x20d56b
    *(int32_t *)a1 = (int32_t)v3;
    int64_t v4; // 0x20d55f
    char * v5 = (char *)(v3 + 8 * v4); // 0x20d56e
    char v6 = *v5 + 1; // 0x20d56e
    *v5 = v6;
    *(char *)a3 = (char)a4;
    int64_t v7; // 0x20d55f
    int64_t v8 = (int64_t)*(int32_t *)&v7; // 0x20d574
    int64_t result = v3; // 0x20d578
    if (v6 < 0 == (-36 * v8 != -0x2400000000 * v8 >> 32)) {
        result = function_20d55a();
    }
    // 0x20d57c
    __asm_int(-24);
    int32_t * v9 = (int32_t *)(a2 + 0x1d543a0a); // 0x20d580
    *v9 = *v9 + (int32_t)v4;
    return result;
}

// Address range: 0x20d58a - 0x20d58b
int64_t function_20d58a(int64_t a1) {
    // 0x20d58a
    int64_t result; // 0x20d58a
    return result;
}

// Address range: 0x20d5bc - 0x20d5d1
int64_t function_20d5bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20d5bc
    int64_t v1; // 0x20d5bc
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v1 + (int32_t)v2;
    *(char *)0x4b00173a1ed70107 = (char)v1;
    return v1 | 58;
}

// Address range: 0x20d646 - 0x20d64d
int64_t function_20d646(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d646
    if (a4 == 1) {
        // 0x20d648
        return function_5a217faf();
    }
    // 0x20d6c3
    int64_t result; // 0x20d646
    return result;
}

// Address range: 0x20d65e - 0x20d663
int64_t function_20d65e(void) {
    // 0x20d65e
    return function_fffffffff73c36cf();
}

// Address range: 0x20d678 - 0x20d67a
int64_t function_20d678(void) {
    // 0x20d678
    int64_t v1; // 0x20d678
    return function_20d684(v1, v1, v1, v1);
}

// Address range: 0x20d67a - 0x20d684
int64_t function_20d67a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)-0x6ce8ff7d; // 0x20d67b
    int64_t v2; // 0x20d67a
    *(char *)-0x6ce8ff7d = v1 + (char)((uint64_t)v2 / 256);
    return a4 & 0xffffffff;
}

// Address range: 0x20d684 - 0x20d69e
int64_t function_20d684(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d684
    int64_t v1; // 0x20d684
    int32_t * v2 = (int32_t *)(v1 - 14); // 0x20d686
    *v2 = *v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(a2 - 0x17f62499); // 0x20d689
    *v3 = *v3 | 1 << (int32_t)a1 % 32;
    int64_t v4; // 0x20d684
    *(int32_t *)v4 = (int32_t)a3;
    __asm_out(-56, (int32_t)v4);
    int64_t v5; // 0x20d684
    __asm_outsb((int16_t)*(int32_t *)&v4, *(char *)&v5);
    return v4 + 0xfe17eeed & 0xffffffff;
}

// Address range: 0x20d6d6 - 0x20d6dd
int64_t function_20d6d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d6d6
    int64_t v1; // 0x20d6d6
    int32_t * v2 = (int32_t *)(v1 + 45); // 0x20d6d8
    *v2 = *v2 & (int32_t)a1;
    return function_20d6f6(a1, a2, a3, a4);
}

// Address range: 0x20d6de - 0x20d6e6
int64_t function_20d6de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x6f0baf1b; // 0x20d6de
    int64_t result; // 0x20d6de
    *(char *)-0x6f0baf1b = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x20d6ee - 0x20d6f6
int64_t function_20d6ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20d6ee
    int64_t v1; // 0x20d6ee
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a3;
    return v1 & -256 | v1 % 256;
}

// Address range: 0x20d6f6 - 0x20d713
int64_t function_20d6f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 3); // 0x20d6fb
    *v1 = *v1 | (char)a4;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    bool v2; // 0x20d6f6
    int64_t v3 = v2 ? -4 : 4; // 0x20d710
    return function_20d6de(v3 + a1, v3 + a2, a3, a4);
}

// Address range: 0x20d717 - 0x20d71c
int64_t function_20d717(void) {
    // 0x20d717
    return function_353ad3a6();
}

// Address range: 0x20d729 - 0x20d72a
int64_t function_20d729(void) {
    // 0x20d729
    int64_t result; // 0x20d729
    return result;
}

// Address range: 0x20d72a - 0x20d72e
int64_t function_20d72a(int64_t a1) {
    // 0x20d72a
    return function_20d729();
}

// Address range: 0x20d78d - 0x20d790
int64_t function_20d78d(void) {
    // 0x20d78d
    int64_t result; // 0x20d78d
    return result;
}

// Address range: 0x20d793 - 0x20d794
int64_t function_20d793(int64_t a1) {
    // 0x20d793
    int64_t result; // 0x20d793
    return result;
}

// Address range: 0x20d7e9 - 0x20d7eb
int64_t function_20d7e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d7e9
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x20d7e9
    return result;
}

// Address range: 0x20d80b - 0x20d810
int64_t function_20d80b(void) {
    // 0x20d80b
    return function_ffffffffe8ef3e10();
}

// Address range: 0x20d815 - 0x20d818
int64_t function_20d815(int64_t a1) {
    // 0x20d815
    int64_t result; // 0x20d815
    return result;
}

// Address range: 0x20d84a - 0x20d84d
int64_t function_20d84a(void) {
    // 0x20d84a
    int64_t result; // 0x20d84a
    return result;
}

// Address range: 0x20d860 - 0x20d861
int64_t function_20d860(void) {
    // 0x20d860
    int64_t result; // 0x20d860
    return result;
}

// Address range: 0x20d86c - 0x20d86d
int64_t function_20d86c(void) {
    // 0x20d86c
    int64_t result; // 0x20d86c
    return result;
}

// Address range: 0x20d885 - 0x20d895
int64_t function_20d885(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x1e803eb); // 0x20d885
    *v1 = 2 * *v1;
    return function_20d86c();
}

// Address range: 0x20d89a - 0x20d89b
int64_t function_20d89a(void) {
    // 0x20d89a
    int64_t result; // 0x20d89a
    return result;
}

// Address range: 0x20d8a3 - 0x20d8a4
int64_t function_20d8a3(int64_t a1) {
    // 0x20d8a3
    int64_t result; // 0x20d8a3
    return result;
}

// Address range: 0x20d8a5 - 0x20d8a6
int64_t function_20d8a5(int64_t a1) {
    // 0x20d8a5
    int64_t result; // 0x20d8a5
    return result;
}

// Address range: 0x20d8b2 - 0x20d8b6
int64_t function_20d8b2(void) {
    // 0x20d8b2
    int64_t result; // 0x20d8b2
    return result;
}

// Address range: 0x20d8d8 - 0x20d8df
int64_t function_20d8d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d8d8
    int64_t result; // 0x20d8d8
    return result;
}

// Address range: 0x20d8f9 - 0x20d8fa
int64_t function_20d8f9(void) {
    // 0x20d8f9
    int64_t result; // 0x20d8f9
    return result;
}

// Address range: 0x20d909 - 0x20d9a5
int64_t function_20d909(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    function_20d89a();
    *(char *)a1 = (char)unknown_ffffffffb91b6f22() ^ -34;
    bool v2; // 0x20d909
    int64_t v3 = (v2 ? 0x5701e803 : 0x5701e805) + a4; // 0x20d922
    *(int16_t *)(a3 + 0x91e7f3f) = (int16_t)0.0;
    char * v4 = (char *)((a5 - 256 * a3 & 0xff00 | a5 & -0xff01) - 0x74fe17c8); // 0x20d92d
    *v4 = *v4 | 88;
    int32_t * v5 = (int32_t *)(v3 & 0xffffffff); // 0x20d939
    *v5 = *v5 + (int32_t)a3;
    uint32_t v6 = (int32_t)((v2 ? 0xffffffff : 1) + a1); // 0x20d93d
    int64_t v7; // 0x20d909
    uint32_t v8 = *(int32_t *)(v7 + 89); // 0x20d93d
    if (v8 <= v6) {
        function_20d8f9();
    }
    uint32_t v9 = v6 - v8; // 0x20d93d
    v1 = -0xa8cfe18;
    int32_t * v10 = (int32_t *)(unknown_ffffffffe8306c4d() + 0x9dbaf55); // 0x20d94c
    *v10 = *v10 + v9;
    uint32_t v11 = (int32_t)unknown_fffffffff1be7358() - 0x2555c9c2; // 0x20d95d
    if (v11 == 0) {
        int32_t v12 = *(int32_t *)((int64_t)v9 + 0x13db5cb); // 0x20d957
        unknown_ffffffff8faba36c();
        int64_t result = unknown_ffffffffa0a8f578(); // 0x20d972
        *(int64_t *)((int64_t)(v12 | (int32_t)(int64_t)&v1) - 8) = 0x3d00b009;
        return result;
    }
    int64_t result2 = v11; // 0x20d95d
    uint32_t v13 = (int32_t)v3 % 32; // 0x20d9a3
    if (v13 != 0) {
        int32_t * v14 = (int32_t *)result2; // 0x20d9a3
        uint32_t v15 = *v14; // 0x20d9a3
        *v14 = v15 >> 32 - v13 | v15 << v13;
    }
    return result2;
}

// Address range: 0x20d9ab - 0x20d9b0
int64_t function_20d9ab(void) {
    // 0x20d9ab
    return function_2410daed();
}

// Address range: 0x20d9b5 - 0x20d9b6
int64_t function_20d9b5(void) {
    // 0x20d9b5
    int64_t result; // 0x20d9b5
    return result;
}

// Address range: 0x20d9cb - 0x20d9d0
int64_t function_20d9cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20d9cb
    int64_t result; // 0x20d9cb
    return result;
}

// Address range: 0x20d9f5 - 0x20da4d
int64_t function_20d9f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20d9f5
    int64_t v1; // 0x20d9f5
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 - 0x3320e066); // 0x20d9f5
    *v3 = *v3 + (int32_t)v2;
    int16_t v4 = a3; // 0x20d9fc
    __asm_in_135(v4);
    int64_t v5 = unknown_ffffffffe5fe12cb(); // 0x20d9ff
    int64_t v6 = a2 & 0xffffffff; // 0x20da05
    *(int64_t *)v6 = a5;
    int64_t v7 = a4 - 1; // 0x20da0f
    int64_t v8 = v6; // 0x20da0f
    if ((int32_t)a2 != 0x2f8c001 && v7 != 0) {
        v8 = function_20d9b5();
    }
    // 0x20da11
    __asm_out(-22, (int32_t)v8);
    __asm_outsd(v4, *(int32_t *)(v5 & 0xffffffff));
    int32_t v9 = *(int32_t *)(a1 + 0x1e894aea); // 0x20da16
    int32_t v10 = v9 & (int32_t)((v2 - a3) % 256 | v2 & 0xffffff00); // 0x20da16
    char * v11 = (char *)(a3 - 0x77b3ad5e + v7); // 0x20da21
    *v11 = *v11 + (char)v10;
    int32_t * v12 = (int32_t *)(a3 - 0x6b534bc3); // 0x20da2e
    int32_t v13 = a1; // 0x20da2e
    *v12 = *v12 + v13;
    unknown_ffffffffe8e7c43c();
    uint32_t v14 = *(int32_t *)0x53c65542; // 0x20da3b
    uint32_t v15 = v14 + v13; // 0x20da3b
    *(int32_t *)0x53c65542 = v15;
    int32_t * v16 = (int32_t *)((int64_t)(v10 & -256) + 0x3a19a3d8); // 0x20da41
    *v16 = *v16 + (int32_t)a3 + (int32_t)(v15 < v14);
    return unknown_629e0b4d();
}

// Address range: 0x20da7f - 0x20da87
int64_t function_20da7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20da7f
    int64_t result; // 0x20da7f
    int32_t * v1 = (int32_t *)(result - 127); // 0x20da7f
    *v1 = *v1 + (int32_t)a4;
    *(char *)result = (char)a3;
    return result;
}

// Address range: 0x20da88 - 0x20da9e
int64_t function_20da88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20da88
    unknown_ffffffffe0e9f68f();
    unsigned char v1 = (char)a4 % 32; // 0x20da8e
    if (v1 != 0) {
        bool v2; // 0x20da88
        *(char *)a2 = (char)a2 << v1 | (char)((int16_t)a2 % 256 >> (int16_t)(9 - v1)) | (char)v2 << v1 - 1;
    }
    __asm_iretd();
    int64_t v3; // 0x20da88
    int16_t v4 = (int16_t)(*(int32_t *)(v3 - 86) + (int32_t)a3); // 0x20da99
    __asm_out_134(v4, (char)unknown_4262789a());
    return (int64_t)(__asm_in_136(v4) & -256) | (int64_t)__asm_in_135(v4);
}

// Address range: 0x20daf7 - 0x20db3b
int64_t function_20daf7(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_fnstenv(); // 0x20daff
    *(int224_t *)(a3 - 0x6cfe17ad) = (int224_t)v1;
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x20daf7
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x20db06
    int64_t v4; // 0x20daf7
    char * v5 = (char *)(8 * v4 + 58 + v3); // 0x20db07
    *v5 = *v5 + (char)v1;
    *(int32_t *)v3 = __asm_insd((int16_t)a3);
    unknown_4703c717();
    int64_t v6; // 0x20daf7
    __asm_frstor(*(int864_t *)((int64_t)*(int32_t *)&v6 + 111));
    int64_t v7 = v2 ? -1 : 1; // 0x20db2c
    unknown_24aedd35(v3 + v7, v7 + 0x1e8b38d);
    return -0x2b17fce1;
}

// Address range: 0x20db4e - 0x20db4f
int64_t function_20db4e(void) {
    // 0x20db4e
    int64_t result; // 0x20db4e
    return result;
}

// Address range: 0x20db59 - 0x20db5a
int64_t function_20db59(int64_t a1) {
    // 0x20db59
    int64_t result; // 0x20db59
    return result;
}

// Address range: 0x20db75 - 0x20db76
int64_t function_20db75(void) {
    // 0x20db75
    int64_t result; // 0x20db75
    return result;
}

// Address range: 0x20db8f - 0x20dbcf
int64_t function_20db8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x20db8f
    int64_t v1; // 0x20db8f
    int64_t v2 = v1;
    int64_t v3 = a4;
    int32_t * v4 = (int32_t *)(a2 - 0x622e99ba); // 0x20db8f
    uint32_t v5 = *v4; // 0x20db8f
    int32_t v6 = v1; // 0x20db8f
    uint32_t v7 = v5 + v6; // 0x20db8f
    *v4 = v7;
    int32_t * v8 = (int32_t *)(a4 - 0x4fe1130b); // 0x20db97
    *v8 = *v8 + v6;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v9; // 0x20db8f
    unsigned char v10 = *(char *)&v9; // 0x20dba1
    uint32_t v11 = *(int32_t *)&v3; // 0x20dba6
    int64_t v12; // 0x20db8f
    int32_t v13 = v1 - (((int64_t)&v12 | a3) & 0xffffff00 | (int64_t)v10); // 0x20dba6
    uint32_t v14 = v11 + v13; // 0x20dba6
    *(int32_t *)a4 = v14;
    int64_t result = __asm_int1(); // 0x20dba8
    if (v14 < v11 || v14 == 0) {
        // 0x20dbab
        return result;
    }
    int64_t v15 = (v2 - (v7 < v5 ? 233 : 232)) % 256 | v2 & 0xffffff00; // 0x20db95
    int64_t v16 = function_20db4e(); // 0x20dbac
    int32_t * v17 = (int32_t *)(8 * v16 + v15); // 0x20dbb7
    *v17 = *v17 + v13;
    *(int32_t *)a1 = (int32_t)v16;
    unknown_ffffffffa822dbcb(*(int64_t *)v15);
    return function_55c4305b();
}

// Address range: 0x20dc44 - 0x20dc54
int64_t function_20dc44(int64_t a1) {
    int64_t result = unknown_ffffffff8727bc4c(a1); // 0x20dc46
    char v1 = *(char *)0x3f590852; // 0x20dc4b
    int64_t v2; // 0x20dc44
    *(char *)0x3f590852 = v1 + (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x20dc89 - 0x20dd15
int64_t function_20dc89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20dc89
    int64_t v1; // 0x20dc89
    int64_t v2 = v1 & 0xffffffff ^ 0x85c6111e; // 0x20dc89
    int32_t * v3 = (int32_t *)v2; // 0x20dc8e
    *v3 = *v3 - (int32_t)v2;
    int64_t v4 = unknown_ffffffffbf2219d7(); // 0x20dc90
    int64_t result = __asm_sti(); // 0x20dc9a
    int16_t v5 = a3; // 0x20dc9c
    *(int32_t *)a1 = __asm_insd(v5);
    if ((*(char *)((v4 + 167) % 256 | v4 & 0xffffff00) & (char)result) != 0) {
        // 0x20dca2
        return result;
    }
    // 0x20dd06
    int64_t v6; // 0x20dc89
    __asm_outsb(v5, *(char *)&v6);
    int64_t result2 = unknown_3a75740e(); // 0x20dd08
    *(int64_t *)((result & 0xffffffff) - 8) = result2;
    int32_t * v7 = (int32_t *)(v1 - 0x178bd5b1); // 0x20dd0e
    *v7 = *v7 | 1;
    return result2;
}

// Address range: 0x20dd16 - 0x20dd1a
int64_t function_20dd16(int64_t a1) {
    // 0x20dd16
    int64_t result; // 0x20dd16
    return result;
}

// Address range: 0x20ddd5 - 0x20ddd6
int64_t function_20ddd5(void) {
    // 0x20ddd5
    int64_t result; // 0x20ddd5
    return result;
}

// Address range: 0x20ddd9 - 0x20ddda
int64_t function_20ddd9(int64_t a1) {
    // 0x20ddd9
    int64_t result; // 0x20ddd9
    return result;
}

// Address range: 0x20ddf2 - 0x20ddfd
int64_t function_20ddf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20ddf2
    int64_t result; // 0x20ddf2
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x20de1e - 0x20de3f
int64_t function_20de1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20de1e
    bool v1; // 0x20de1e
    if (llvm_ctpop_i8((v1 ? 77 : 76) + (char)unknown_ffffffff9311bf24()) % 2 == 0) {
        function_20ddd5();
    }
    // 0x20de27
    int64_t v2; // 0x20de1e
    int32_t * v3 = (int32_t *)(v2 + 61); // 0x20de27
    *v3 = *v3 - 0x4700917e;
    int64_t result = unknown_31b54635(); // 0x20de2f
    char * v4 = (char *)result; // 0x20de3a
    *v4 = *v4 | (char)result;
    return result;
}

// Address range: 0x4dc2f9 - 0x4dc2fe
int64_t function_4dc2f9(void) {
    // 0x4dc2f9
    return function_fffffffff33cd0c3();
}

// Address range: 0x4dc33e - 0x4dc345
int64_t function_4dc33e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4dc33e
    int64_t v1; // 0x4dc33e
    __asm_out_137((int16_t)a3, (int32_t)v1);
    return function_ffffffffef9b8509();
}

// Address range: 0x4dc35a - 0x4dc35b
int64_t function_4dc35a(void) {
    // 0x4dc35a
    int64_t result; // 0x4dc35a
    return result;
}

// Address range: 0x4dc360 - 0x4dc363
int64_t function_4dc360(int64_t a1) {
    // 0x4dc360
    int64_t result; // 0x4dc360
    return result;
}

// Address range: 0x4dc36f - 0x4dc372
int64_t function_4dc36f(void) {
    // 0x4dc36f
    return function_4dc35a();
}

// Address range: 0x4dc37e - 0x4dc381
int64_t function_4dc37e(void) {
    // 0x4dc37e
    int64_t result; // 0x4dc37e
    return result;
}

// Address range: 0x4dc388 - 0x4dc389
int64_t function_4dc388(void) {
    // 0x4dc388
    int64_t result; // 0x4dc388
    return result;
}

// Address range: 0x4dc38d - 0x4dc390
int64_t function_4dc38d(void) {
    // 0x4dc38d
    return function_4dc388();
}

// Address range: 0x4dc8f9 - 0x4dc8fa
int64_t function_4dc8f9(void) {
    // 0x4dc8f9
    int64_t result; // 0x4dc8f9
    return result;
}

// Address range: 0x4dc91d - 0x4dc977
int64_t function_4dc91d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int256_t a5) {
    // 0x4dc91d
    int64_t result; // 0x4dc91d
    __asm_out_137((int16_t)a3, (int32_t)result);
    if ((char)(result & a4 / 256) < 0) {
        // 0x4dc933
        return (int64_t)(*(int32_t *)(result - 0x3c000000) + 0x3bce09fa);
    }
    // 0x4dc922
    return result;
}
