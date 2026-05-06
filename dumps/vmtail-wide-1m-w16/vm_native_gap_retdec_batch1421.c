/*
 * Targeted RetDec C for native executable gap queue batch 1421.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x160e00-0x161000 rank=- name=- kind=- bytes=- uncovered=-
 *   0x161000-0x161200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x161200-0x161400 rank=- name=- kind=- bytes=- uncovered=-
 *   0x161400-0x161600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x161600-0x161800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x161800-0x161a00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x161a00-0x161c00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x161c00-0x161df6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1abd1c-0x1abe1c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1abf1c-0x1ac11c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ac11c-0x1ac31c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ac71c-0x1ac91c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ac91c-0x1acb1c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1acb1c-0x1acd1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x23fa34-0x23fc34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23fc34-0x23fe34 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_160e00(int64_t a1, int64_t a2);
int64_t function_160e8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_160fe7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_161168(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1612f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_161468(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1615db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16170f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_161852(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_161990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_161afe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_161c0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1abd1c(void);
int64_t function_1abd1d(int64_t a1, int64_t a2);
int64_t function_1abd6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1abd79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1abf1c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1abf3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1abf74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1abf81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ac00d(int64_t a1);
int64_t function_1ac01e(void);
int64_t function_1ac044(void);
int64_t function_1ac04d(void);
int64_t function_1ac06f(void);
int64_t function_1ac09a(void);
int64_t function_1ac0dc(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_1ac187(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1ac1f2(int64_t a1);
int64_t function_1ac291(int64_t a1);
int64_t function_1ac2d6(int64_t a1);
int64_t function_1ac2e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ac6ee();
int64_t function_1ac71c(void);
int64_t function_1ac730(void);
int64_t function_1ac743(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ac77f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ac7b1(int64_t a1, int64_t a2);
int64_t function_1ac907(void);
int64_t function_1ac990(void);
int64_t function_1ac9b6(int64_t a1, int64_t a2);
int64_t function_1ac9d1(void);
int64_t function_1ac9d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ac9d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ac9f2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1aca53(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1aca86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1acb26(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1acc14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1acc6c(int64_t a1, int64_t a2);
int64_t function_1b365745();
int64_t function_23fa34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23fa51(void);
int64_t function_23fa61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23fb76(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23fb87(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23fbe9(void);
int64_t function_23fc02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23fc23(void);
int64_t function_23fc26(int64_t a1);
int64_t function_23fc4b(void);
int64_t function_23fc5d(int64_t a1, int64_t a2);
int64_t function_23fc68(void);
int64_t function_23fc8a(void);
int64_t function_23fc8f(int64_t a1, int64_t a2, int32_t a3, uint64_t a4);
int64_t function_23fca1(int64_t a1, int64_t a2);
int64_t function_23fd04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23fd8d(void);
int64_t function_23fdac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_23fe0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4169ff7a();
int64_t function_cdc60();
int64_t function_ffffffffd7f2c0f2();
int64_t function_ffffffffe8a535f4();
int64_t unknown_10b507a();
int64_t unknown_1e8e43b5();
int64_t unknown_1e945bd4();
int64_t unknown_2cd2928b();
int64_t unknown_304bc379();
int64_t unknown_380c8e13();
int64_t unknown_3ab19d08();
int64_t unknown_4cbecb05();
int64_t unknown_6411151a();
int64_t unknown_681cb259();
int64_t unknown_6a1cc2f4();
int64_t unknown_792d249a();
int64_t unknown_7f14005a();
int64_t unknown_ffffffff8415b623();
int64_t unknown_ffffffff8b02d498();
int64_t unknown_ffffffffad949002();
int64_t unknown_ffffffffb212d219();
int64_t unknown_ffffffffb28f4798();
int64_t unknown_ffffffffb3c0f3cf();
int64_t unknown_ffffffffb46134b0();
int64_t unknown_ffffffffcea0bb39();
int64_t unknown_ffffffffd8e80985();
int64_t unknown_ffffffffe84e1ddc();
int64_t unknown_fffffffffc3f0ebd();

// Address range: 0x160e00 - 0x160e8e
int64_t function_160e00(int64_t a1, int64_t a2) {
    // 0x160e00
    int64_t v1; // 0x160e00
    return function_cdc60(v1, v1, v1, v1, v1, v1, v1);
}

// Address range: 0x160e8e - 0x160fe7
int64_t function_160e8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x160e8e
    int64_t v1; // 0x160e8e
    bool v2; // 0x160e8e
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x160fe7 - 0x161168
int64_t function_160fe7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2; // bp-32, 0x161053
    int64_t v2 = a2 - 8; // 0x16107d
    int64_t v3 = a2 - 16; // 0x161082
    int64_t * v4 = (int64_t *)v3; // 0x16109b
    *v4 = v3;
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x1610a7
    *(int64_t *)v2 = v5;
    *v4 = a1;
    int64_t * v6 = (int64_t *)(a2 - 24); // 0x1610c5
    *v6 = a2;
    int64_t v7 = *v4; // 0x1610c9
    *(int64_t *)(a2 - 32) = v7;
    *v4 = 0x4a198072;
    *v6 = v5;
    *(int64_t *)a2 = *v4;
    *v4 = 0x4e02ae61;
    *v6 = *(int64_t *)(a2 + 8);
    *(int64_t *)(a2 + 16) = *v4;
    *v6 = v2;
    *v4 = a2;
    int64_t v8; // 0x160fe7
    return function_cdc60(v7, a2, a3, a4, a5, v8, (int64_t)&v1);
}

// Address range: 0x161168 - 0x1612f0
int64_t function_161168(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x1453b7; // bp-24, 0x1611a2
    int64_t v2 = (int64_t)&v1; // 0x1611df
    int64_t v3 = v2 - 8; // 0x161207
    int64_t * v4 = (int64_t *)v3; // 0x16121d
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x161221
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x161221
    *v6 = v5;
    int64_t v7 = v2 - 24; // 0x161225
    int64_t * v8 = (int64_t *)v7; // 0x161225
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x161231
    *v8 = v3;
    *v8 = v1;
    *v9 = 0x2820a9b1;
    *(int64_t *)(v2 - 40) = v5;
    *v4 = *v8;
    *v8 = a2;
    *v9 = v7;
    *v8 = v7;
    *v6 = v1;
    *(int64_t *)(v2 + 16) = v1;
    int64_t v10 = *v4; // 0x1612b9
    *v6 = v10;
    *v8 = v10;
    *v4 = v1;
    *v6 = v1;
    int64_t v11; // 0x161168
    return function_cdc60(a1, *v8, a3, a4, v11, v11, v1);
}

// Address range: 0x1612f0 - 0x161468
int64_t function_1612f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1612f0
    bool v1; // 0x1612f0
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x1612f0
    int64_t v3; // bp-56, 0x1612f0
    int64_t v4 = (int64_t)&v3; // 0x1613d2
    v3 = v2;
    int64_t v5 = v4 + 16; // 0x1613de
    *(int64_t *)v5 = v2;
    *(int64_t *)(v4 - 8) = 0x1588588f;
    *(int64_t *)(v4 - 16) = 0x146132;
    *(int64_t *)(v4 + 32) = v3;
    v3 = a6;
    int64_t v6 = v3; // 0x16145e
    v3 = v5;
    return function_cdc60(a1, a2, a3, a4, a5, v6, 0x519b6380);
}

// Address range: 0x161468 - 0x1615db
int64_t function_161468(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x161468
    int64_t v1; // bp-56, 0x161468
    int64_t v2 = (int64_t)&v1; // 0x161595
    int64_t v3 = v2 + 8; // 0x1615b1
    v1 = v3;
    *(int64_t *)v3 = v2 + 24;
    int64_t v4; // 0x161468
    return function_cdc60(a1, a2, a3, a4, a5, v4, 0x36992c44);
}

// Address range: 0x1615db - 0x16170f
int64_t function_1615db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1615db
    int64_t v1; // bp-40, 0x1615db
    v1 = (int64_t)&v1 + 16;
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0x146629);
}

// Address range: 0x16170f - 0x161852
int64_t function_16170f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x146be1; // bp-40, 0x1617e6
    int64_t v2 = (int64_t)&v1; // 0x161822
    *(int64_t *)(v2 - 8) = v2 + 8;
    int64_t v3; // 0x16170f
    return function_cdc60(a1, a2, a3, a4, 0x146be1, v3, v1);
}

// Address range: 0x161852 - 0x161990
int64_t function_161852(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x161852
    return function_cdc60(a1, a2, a3, a4, a5, a6, 169);
}

// Address range: 0x161990 - 0x161afe
int64_t function_161990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x161990
    int64_t v1; // bp-56, 0x161990
    v1 = (int64_t)&v1 + 16;
    bool v2; // 0x161990
    return function_cdc60(0x2f46f38b, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x161afe - 0x161c0c
int64_t function_161afe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x161afe
    int64_t v1; // 0x161afe
    return function_cdc60(a1, a2, v1, a4, a5, a6, 0x14a181);
}

// Address range: 0x161c0c - 0x161d5d
int64_t function_161c0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x161c0c
    int64_t v1; // bp-16, 0x161c0c
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x161c0c
    return function_cdc60(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x1abd1c - 0x1abd1d
int64_t function_1abd1c(void) {
    // 0x1abd1c
    int64_t result; // 0x1abd1c
    return result;
}

// Address range: 0x1abd1d - 0x1abd2b
int64_t function_1abd1d(int64_t a1, int64_t a2) {
    int64_t result = unknown_ffffffff8415b623(a1, a2); // 0x1abd1d
    int32_t * v1 = (int32_t *)(result - 0x1d4709ab); // 0x1abd22
    bool v2; // 0x1abd1d
    *v1 = (int32_t)v2 - (int32_t)a2 + *v1;
    return result;
}

// Address range: 0x1abd6b - 0x1abd6c
int64_t function_1abd6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1abd6b
    int64_t result; // 0x1abd6b
    return result;
}

// Address range: 0x1abd79 - 0x1abd7e
int64_t function_1abd79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1abd79
    int64_t result; // 0x1abd79
    bool v1; // 0x1abd79
    if (a4 != 1 == v1) {
        result = function_1abd6b(a1, a2, a3, a4);
    }
    // 0x1abd7b
    return result;
}

// Address range: 0x1abf1c - 0x1abf29
int64_t function_1abf1c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1abf1c
    int64_t v1; // 0x1abf1c
    return v1 & 0xffffffff;
}

// Address range: 0x1abf3c - 0x1abf55
int64_t function_1abf3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x5451d28b); // 0x1abf3d
    uint32_t v2 = *v1; // 0x1abf3d
    *v1 = v2 / 0x20000000 | 8 * v2;
    int64_t v3; // 0x1abf3c
    bool v4; // 0x1abf3c
    if (!v4) {
        v3 = function_ffffffffe8a535f4();
    }
    int32_t * v5 = (int32_t *)(v3 + 0x3ffbe759); // 0x1abf4a
    *v5 = *v5 + (int32_t)a4;
    return function_ffffffffd7f2c0f2();
}

// Address range: 0x1abf74 - 0x1abf81
int64_t function_1abf74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1abf74
    unknown_10b507a(a1, a2, a3, a4);
    return function_1b365745();
}

// Address range: 0x1abf81 - 0x1abfca
int64_t function_1abf81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1abf81
    int64_t v1; // 0x1abf81
    uint64_t v2 = v1;
    char * v3 = (char *)(a2 - 53); // 0x1abf82
    unsigned char v4 = *v3 + (char)a3; // 0x1abf82
    *v3 = v4;
    int64_t v5 = unknown_2cd2928b(); // 0x1abf85
    uint32_t v6 = (int32_t)v1 % 32; // 0x1abf8d
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)v5; // 0x1abf8d
        uint32_t v8 = *v7; // 0x1abf8d
        *v7 = v8 >> 32 - v6 | v8 << v6;
    }
    int64_t v9 = unknown_792d249a(); // 0x1abf94
    if (v4 >= 0) {
        uint64_t v10 = v9 - v2 / 256; // 0x1abf9d
        __asm_out(-0x4cc3, (char)v10);
        return v10 % 256 | v9 & -256;
    }
    uint32_t v11 = *(int32_t *)0x54029c14; // 0x1abfb7
    *(int32_t *)0x54029c14 = v11 + 0x7a00b33d;
    if (v6 != 0) {
        int32_t * v12 = (int32_t *)v9; // 0x1abfbd
        uint32_t v13 = *v12; // 0x1abfbd
        *v12 = (int32_t)(v11 > 0x85ff4cc2) << v6 - 1 | v13 << v6 | (int32_t)((int64_t)v13 >> (int64_t)(33 - v6));
    }
    int32_t * v14 = (int32_t *)(v2 + 0x62523afd); // 0x1abfc0
    uint32_t v15 = *v14; // 0x1abfc0
    *v14 = v15 / 0x80000 | 0x2000 * v15;
    *(int32_t *)a1 = (int32_t)a2;
    return a2 & 0xffffffa8 | 87;
}

// Address range: 0x1ac00d - 0x1ac010
int64_t function_1ac00d(int64_t a1) {
    // 0x1ac00d
    int64_t result; // 0x1ac00d
    return result;
}

// Address range: 0x1ac01e - 0x1ac01f
int64_t function_1ac01e(void) {
    // 0x1ac01e
    int64_t result; // 0x1ac01e
    return result;
}

// Address range: 0x1ac044 - 0x1ac045
int64_t function_1ac044(void) {
    // 0x1ac044
    int64_t result; // 0x1ac044
    return result;
}

// Address range: 0x1ac04d - 0x1ac052
int64_t function_1ac04d(void) {
    // 0x1ac04d
    int64_t result; // 0x1ac04d
    return result;
}

// Address range: 0x1ac06f - 0x1ac071
int64_t function_1ac06f(void) {
    // 0x1ac06f
    return function_1ac044();
}

// Address range: 0x1ac09a - 0x1ac09d
int64_t function_1ac09a(void) {
    // 0x1ac09a
    int64_t result; // 0x1ac09a
    return result;
}

// Address range: 0x1ac0dc - 0x1ac158
int64_t function_1ac0dc(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x1ac0dc
    int64_t v1; // 0x1ac0dc
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int32_t v4 = v1;
    bool v5; // 0x1ac0dc
    int64_t v6 = (0x10000 * v4 >> 16) - v4 + (int32_t)v5; // 0x1ac0df
    char * v7 = (char *)v6; // 0x1ac0e2
    *v7 = *v7 - 85;
    uint64_t v8 = a4 / 256 + v6; // 0x1ac0e5
    int32_t * v9 = (int32_t *)(2 * (v8 % 256 | v6 & 0xffffff00)); // 0x1ac0e7
    *v9 = *v9 + (int32_t)v2;
    *(char *)v3 = *(char *)&v3 & (char)v8;
    int64_t v10 = __asm_int3(); // 0x1ac0ee
    char * v11 = (char *)(v10 - 105); // 0x1ac0f0
    *v11 = *v11 + (char)v2;
    int64_t v12 = v10 & 0xffffffff; // 0x1ac0f3
    int32_t v13 = a1; // 0x1ac0f4
    __asm_out_133((int16_t)a3, v13);
    int32_t * v14 = (int32_t *)((a1 & 0xffffffff) + 0x2200700a); // 0x1ac0f8
    *v14 = *v14 + (int32_t)v1;
    *(int32_t *)v12 = v13;
    int64_t v15 = v12 + (v5 ? -4 : 4); // 0x1ac0fe
    char * v16 = (char *)(v2 - 0x17277489); // 0x1ac0ff
    *v16 = *v16 + (char)(a3 / 256);
    int32_t * v17 = (int32_t *)(a4 + 0x2f0200f0); // 0x1ac105
    uint32_t v18 = *v17; // 0x1ac105
    uint32_t v19 = v18 + (int32_t)a3; // 0x1ac105
    *v17 = v19;
    int64_t v20 = (a4 + a3 + (int64_t)(v19 < v18)) % 256 | a3 & -256; // 0x1ac10b
    int64_t v21 = unknown_ffffffffb212d219(v15) + 0xffd7c67b & 0xffffffff; // 0x1ac11a
    *(int32_t *)v15 = __asm_insd((int16_t)v20);
    *(int64_t *)0x23af3fae9dfe720f = v21;
    int32_t * v22 = (int32_t *)(v20 + 8 * v21); // 0x1ac130
    *v22 = *v22 + (int32_t)v3;
    int64_t v23 = unknown_ffffffffcea0bb39(); // 0x1ac133
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v15;
    *(char *)v15 = (char)v23;
    int64_t v24; // 0x1ac0dc
    return 256 * (v2 / 256 + (int64_t)(-1 - (int32_t)v1 < (int32_t)(int64_t)&v24) + 133 * v15) & 0xff00 | v2 & 0xffff00ff;
}

// Address range: 0x1ac187 - 0x1ac1e8
int64_t function_1ac187(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1ac187
    int64_t v1; // 0x1ac187
    int64_t v2 = v1;
    int64_t v3 = (v2 + 24) % 256 | v2 & -256; // 0x1ac18a
    int32_t * v4 = (int32_t *)(v1 - 0x140ddb50 + 8 * v1); // 0x1ac18c
    int32_t v5 = a2; // 0x1ac18c
    *v4 = *v4 + v5;
    int32_t v6 = *(int32_t *)(v3 + v1); // 0x1ac193
    int32_t * v7 = (int32_t *)(v3 + 0x78071287); // 0x1ac19d
    *v7 = *v7 + v5;
    uint32_t v8 = *(int32_t *)-0x3926a19f6d8fae5f; // 0x1ac1b0
    int32_t * v9 = (int32_t *)(int64_t)v8; // 0x1ac1bb
    *v9 = *v9 + (int32_t)v1;
    int64_t v10 = a3 & -256 | 130; // 0x1ac1bd
    int32_t * v11 = (int32_t *)(4 * v10 + 0xe28b5c2); // 0x1ac1bf
    int32_t v12 = a1; // 0x1ac1bf
    *v11 = *v11 | v12;
    __asm_iretd();
    int64_t v13 = unknown_ffffffffb3c0f3cf(); // 0x1ac1c9
    int32_t * v14 = (int32_t *)(a1 + 7); // 0x1ac1d0
    *v14 = *v14 ^ 8;
    int64_t result = unknown_ffffffffe84e1ddc(); // 0x1ac1d6
    *(int32_t *)-0x17bb391e = *(int32_t *)-0x17bb391e + v12;
    int32_t * v15 = (int32_t *)v10; // 0x1ac1e1
    uint32_t v16 = *v15; // 0x1ac1e1
    uint32_t v17 = v16 + (int32_t)v1 - v8; // 0x1ac1e1
    *v15 = v17;
    unsigned char v18 = (char)(0x4cd537a1 * v6 + (int32_t)v13) % 32; // 0x1ac1e3
    if (v18 != 0) {
        char * v19 = (char *)result; // 0x1ac1e3
        unsigned char v20 = *v19; // 0x1ac1e3
        *v19 = (char)(v17 < v16) << v18 - 1 | v20 << v18 | (char)((int16_t)v20 >> (int16_t)(9 - v18));
    }
    return result;
}

// Address range: 0x1ac1f2 - 0x1ac1f5
int64_t function_1ac1f2(int64_t a1) {
    // 0x1ac1f2
    int64_t result; // 0x1ac1f2
    return result;
}

// Address range: 0x1ac291 - 0x1ac294
int64_t function_1ac291(int64_t a1) {
    // 0x1ac291
    int64_t result; // 0x1ac291
    return result;
}

// Address range: 0x1ac2d6 - 0x1ac2d9
int64_t function_1ac2d6(int64_t a1) {
    // 0x1ac2d6
    int64_t result; // 0x1ac2d6
    return result;
}

// Address range: 0x1ac2e7 - 0x1ac2f6
int64_t function_1ac2e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ac2e7
    return unknown_6a1cc2f4(a1, a2, a3, a4, a5);
}

// Address range: 0x1ac71c - 0x1ac71d
int64_t function_1ac71c(void) {
    // 0x1ac71c
    int64_t result; // 0x1ac71c
    return result;
}

// Address range: 0x1ac730 - 0x1ac731
int64_t function_1ac730(void) {
    // 0x1ac730
    int64_t result; // 0x1ac730
    return result;
}

// Address range: 0x1ac743 - 0x1ac762
int64_t function_1ac743(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ac743
    int64_t v1; // 0x1ac743
    int64_t v2 = v1 + 0xb8e44870 & 0xffffffff; // 0x1ac74f
    if (a4 != 1) {
        v2 = function_1ac730();
    }
    // 0x1ac751
    if ((v2 & 0xffffffff) == 0) {
        function_1ac6ee();
    }
    // 0x1ac754
    unknown_7f14005a();
    return 0;
}

// Address range: 0x1ac77f - 0x1ac786
int64_t function_1ac77f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ac77f
    int64_t result; // 0x1ac77f
    return result;
}

// Address range: 0x1ac7b1 - 0x1ac7b6
int64_t function_1ac7b1(int64_t a1, int64_t a2) {
    // 0x1ac7b1
    int64_t result; // 0x1ac7b1
    return result;
}

// Address range: 0x1ac907 - 0x1ac90d
int64_t function_1ac907(void) {
    // 0x1ac907
    int64_t result; // 0x1ac907
    return result;
}

// Address range: 0x1ac990 - 0x1ac991
int64_t function_1ac990(void) {
    // 0x1ac990
    int64_t result; // 0x1ac990
    return result;
}

// Address range: 0x1ac9b6 - 0x1ac9c4
int64_t function_1ac9b6(int64_t a1, int64_t a2) {
    // 0x1ac9b6
    return unknown_fffffffffc3f0ebd();
}

// Address range: 0x1ac9d1 - 0x1ac9d3
int64_t function_1ac9d1(void) {
    // 0x1ac9d1
    int64_t v1; // 0x1ac9d1
    return function_1ac9d6(v1, v1, v1, v1);
}

// Address range: 0x1ac9d5 - 0x1ac9d6
int64_t function_1ac9d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ac9d5
    int64_t result; // 0x1ac9d5
    return result;
}

// Address range: 0x1ac9d6 - 0x1ac9dd
int64_t function_1ac9d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ac9d6
    int64_t v1; // 0x1ac9d6
    int16_t v2 = v1; // 0x1ac9d6
    int16_t v3 = (int16_t)*(char *)(a4 + 48); // 0x1ac9d6
    int64_t v4 = (char)v1 < (char)v1 ? 6 : 5; // 0x1ac9db
    return v1 & -0x10000 | (int64_t)(256 * (v2 % v3)) | (v4 + (int64_t)(v2 / v3)) % 256;
}

// Address range: 0x1ac9f2 - 0x1aca0e
int64_t function_1ac9f2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1ac9f2
    int64_t v1; // 0x1ac9f2
    int32_t * v2 = (int32_t *)(8 * a4 + 0x33a8da3 + v1); // 0x1ac9f2
    *v2 = *v2 + (int32_t)v1;
    unknown_4cbecb05();
    *(int32_t *)a1 = __asm_insd((int16_t)(a4 / 256 % 256 | a3));
    int64_t result = unknown_3ab19d08(); // 0x1aca07
    if ((a5 & 65) == 0) {
        result = function_1ac990();
    }
    // 0x1aca09
    return result;
}

// Address range: 0x1aca53 - 0x1aca6f
int64_t function_1aca53(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aca53
    unknown_681cb259();
    return (uint64_t)(a4 + 118) % 256 | a4 & 0xffffff00;
}

// Address range: 0x1aca86 - 0x1aca8a
int64_t function_1aca86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1aca86
    int64_t result; // 0x1aca86
    return result;
}

// Address range: 0x1acb26 - 0x1acb2c
int64_t function_1acb26(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1acb26
    int64_t v1; // 0x1acb26
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 + (int32_t)v1; // 0x1acb26
    *(int32_t *)a3 = v3;
    int64_t v4 = __asm_sti(a1, a2, a3, a4); // 0x1acb28
    return (v4 + 113 + (int64_t)(v3 < v2)) % 256 | v4 & -256;
}

// Address range: 0x1acc14 - 0x1acc67
int64_t function_1acc14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1acc14
    int64_t v1; // 0x1acc14
    int64_t v2 = v1 + (a4 & 0xffffff00 | 8); // 0x1acc5e
    int32_t * v3 = (int32_t *)((unknown_6411151a() & 0xffffffff) - 0x51f52710); // 0x1acc60
    *v3 = *v3 + (int32_t)a5;
    __asm_out((int16_t)a5, (char)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x1acc6c - 0x1acc85
int64_t function_1acc6c(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0x312a206f); // 0x1acc71
    int64_t v2; // 0x1acc6c
    int32_t v3 = v2; // 0x1acc71
    *v1 = *v1 + v3;
    int64_t v4; // 0x1acc6c
    int32_t * v5 = (int32_t *)((int64_t)*(int32_t *)&v4 - 0x634d256a); // 0x1acc79
    *v5 = *v5 ^ v3;
    return unknown_ffffffffd8e80985();
}

// Address range: 0x23fa34 - 0x23fa50
int64_t function_23fa34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23fa34
    int64_t v1; // 0x23fa34
    char * v2 = (char *)(v1 - 24); // 0x23fa34
    bool v3; // 0x23fa34
    *v2 = 2 * *v2 | (char)v3;
    *(int32_t *)(a3 - 0x297249a9 + 4 * a4) = (int32_t)v1;
    *(int32_t *)-0x5fc481b5 = *(int32_t *)-0x5fc481b5 + (int32_t)a1;
    return v1 + 0x17fe1771 & 0xffffffff;
}

// Address range: 0x23fa51 - 0x23fa52
int64_t function_23fa51(void) {
    // 0x23fa51
    int64_t result; // 0x23fa51
    return result;
}

// Address range: 0x23fa61 - 0x23fae6
int64_t function_23fa61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23fa61
    int64_t v1; // 0x23fa61
    bool v2; // 0x23fa61
    if (!v2) {
        v1 = function_23fa51();
    }
    int32_t * v3 = (int32_t *)(v1 + 49); // 0x23fa69
    uint32_t v4 = *v3; // 0x23fa69
    uint32_t v5 = v4 + (int32_t)v1; // 0x23fa69
    *v3 = v5;
    unknown_304bc379();
    char v6 = *(char *)-0x67fe17cfc517fc28; // 0x23fa78
    char v7 = v5 < v4; // 0x23fa81
    char v8 = v6 + 18 + v7; // 0x23fa81
    if ((v8 + v7 & (v6 ^ -128)) >= 0) {
        int64_t result = unknown_ffffffffb46134b0(); // 0x23faaa
        char * v9 = (char *)((v1 + 0x1e8cb36 & 0xffffffff) + 0x1e80147); // 0x23faaf
        *v9 = *v9 ^ (char)a3;
        return result;
    }
    int32_t * v10 = (int32_t *)(a3 + 0x1008109d); // 0x23fa88
    *v10 = *v10 + (int32_t)a2;
    __asm_out_134(47, v8);
    return unknown_ffffffff8b02d498();
}

// Address range: 0x23fb76 - 0x23fb85
int64_t function_23fb76(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23fb76
    int64_t result; // 0x23fb76
    return result;
}

// Address range: 0x23fb87 - 0x23fb9f
int64_t function_23fb87(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x7315d27); // 0x23fb88
    *v1 = -*v1;
    char * v2 = (char *)(a4 + 88); // 0x23fb8e
    int64_t v3; // 0x23fb87
    *v2 = *v2 | (char)v3;
    return unknown_ffffffffb28f4798();
}

// Address range: 0x23fbe9 - 0x23fbea
int64_t function_23fbe9(void) {
    // 0x23fbe9
    int64_t result; // 0x23fbe9
    return result;
}

// Address range: 0x23fc02 - 0x23fc16
int64_t function_23fc02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23fc02
    int64_t v1; // 0x23fc02
    int32_t * v2 = (int32_t *)(v1 + a3); // 0x23fc04
    *v2 = *v2 + (int32_t)a3;
    *(char *)-0x67dce0ed = *(char *)-0x67dce0ed + (char)(v1 / 256);
    int64_t v3; // bp-8, 0x23fc02
    return (int64_t)&v3;
}

// Address range: 0x23fc23 - 0x23fc24
int64_t function_23fc23(void) {
    // 0x23fc23
    int64_t result; // 0x23fc23
    return result;
}

// Address range: 0x23fc26 - 0x23fc29
int64_t function_23fc26(int64_t a1) {
    // 0x23fc26
    int64_t result; // 0x23fc26
    return result;
}

// Address range: 0x23fc4b - 0x23fc51
int64_t function_23fc4b(void) {
    // 0x23fc4b
    int64_t v1; // 0x23fc4b
    bool v2; // 0x23fc4b
    if (v2 || v2) {
        v1 = function_23fbe9();
    }
    // 0x23fc4d
    int64_t v3; // 0x23fc4b
    return function_23fc8f(v3, v3, (int32_t)v1 >> 31, v3);
}

// Address range: 0x23fc5d - 0x23fc60
int64_t function_23fc5d(int64_t a1, int64_t a2) {
    // 0x23fc5d
    return function_23fc23();
}

// Address range: 0x23fc68 - 0x23fc6b
int64_t function_23fc68(void) {
    // 0x23fc68
    int64_t result; // 0x23fc68
    return result;
}

// Address range: 0x23fc8a - 0x23fc8d
int64_t function_23fc8a(void) {
    // 0x23fc8a
    int64_t v1; // 0x23fc8a
    return v1 ^ 169;
}

// Address range: 0x23fc8f - 0x23fc9e
int64_t function_23fc8f(int64_t a1, int64_t a2, int32_t a3, uint64_t a4) {
    int64_t v1 = __asm_wait(); // 0x23fc90
    uint64_t v2 = a4 / 256; // 0x23fc91
    int64_t result = (v2 + 1 + v1) % 256 | v1 & -256; // 0x23fc91
    char * v3 = (char *)result; // 0x23fc95
    *v3 = *v3 & (char)v2;
    char v4 = *(char *)0x17a5a39f; // 0x23fc98
    int64_t v5; // 0x23fc8f
    *(char *)0x17a5a39f = v4 + (char)((uint64_t)v5 / 256);
    return result;
}

// Address range: 0x23fca1 - 0x23fca8
int64_t function_23fca1(int64_t a1, int64_t a2) {
    // 0x23fca1
    int64_t result; // 0x23fca1
    char v1 = result;
    *(char *)result = v1 + 38;
    *(char *)a1 = v1;
    return result;
}

// Address range: 0x23fd04 - 0x23fd61
int64_t function_23fd04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_hlt(); // 0x23fd12
    int64_t v2; // 0x23fd04
    uint32_t v3 = *(int32_t *)(v2 + 116); // 0x23fd13
    int64_t v4; // 0x23fd04
    __asm_fbld(*(float80_t *)&v4);
    if ((256 * v2 + a4 & 0xff00 || a4 & -0xff01) != 1) {
        // 0x23fd60
        return v2 & 0xffffffff;
    }
    uint32_t v5 = (int32_t)a2; // 0x23fd13
    int32_t v6 = v5 - v3; // 0x23fd13
    int64_t result = v1 & -0xff01 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v3 > v5) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v5 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v6) % 2 == 0)) | 512; // 0x23fd16
    if (v3 > v5) {
        // 0x23fd65
        return result;
    }
    int64_t v7 = result + v2; // 0x23fd28
    int32_t * v8 = (int32_t *)(v7 & 0xffffffff); // 0x23fd2a
    *v8 = *v8 + (int32_t)v2;
    return v7 & 0x149b8756 | 0xeb6478a9;
}

// Address range: 0x23fd8d - 0x23fd92
int64_t function_23fd8d(void) {
    // 0x23fd8d
    return function_4169ff7a();
}

// Address range: 0x23fdac - 0x23fe0b
int64_t function_23fdac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x23fdac
    int64_t v1; // 0x23fdac
    uint32_t v2 = (int32_t)v1; // 0x23fdac
    uint32_t v3 = *(int32_t *)(a4 - 42) + v2; // 0x23fdac
    int64_t v4 = unknown_1e8e43b5(); // 0x23fdaf
    float80_t v5; // 0x23fdac
    *(int32_t *)(a2 + 0x1e86969) = (int32_t)v5;
    char v6 = v4; // 0x23fdc0
    *(char *)a1 = v6;
    bool v7; // 0x23fdac
    int64_t v8 = (v7 ? -1 : 1) + a1; // 0x23fdc0
    int32_t v9 = *(int32_t *)0xcb1c540; // 0x23fdc1
    *(int32_t *)0xcb1c540 = (int32_t)(v3 < v2) - (int32_t)a5 + v9;
    int32_t * v10 = (int32_t *)(v1 + 0x638b689f); // 0x23fdc6
    *v10 = *v10 + (int32_t)v4;
    int64_t v11 = unknown_1e945bd4(v8, 0xcb1c53e); // 0x23fdce
    if (v6 < 0) {
        char * v12 = (char *)(v11 + 0x4d97400); // 0x23fdd5
        *v12 = *v12 + (char)v11;
        uint64_t v13 = a5 / 256; // 0x23fddb
        uint64_t v14 = v11 + v13; // 0x23fddb
        int64_t v15 = v11 & -256; // 0x23fddb
        int32_t * v16 = (int32_t *)(v1 - 0x66ff4300); // 0x23fddd
        *v16 = *v16 + v3;
        char * v17 = (char *)((v14 % 256 | v15) + 8 * v1); // 0x23fde3
        *v17 = *v17 + (char)v1;
        uint64_t v18 = v14 + v13; // 0x23fdec
        int64_t v19; // 0x23fdac
        int32_t * v20 = (int32_t *)((int64_t)&v19 + 0x83a9bab + (v18 % 256 | v15)); // 0x23fdee
        *v20 = *v20 + (int32_t)v1;
        *(int32_t *)v8 = *(int32_t *)0xcb1c53e;
        __asm_out((int16_t)((int32_t)v11 >> 31), (char)v18);
    }
    // 0x23fdf9
    return unknown_ffffffffad949002();
}

// Address range: 0x23fe0c - 0x23fe1e
int64_t function_23fe0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23fe0c
    int64_t v1; // 0x23fe0c
    *(char *)a1 = (char)v1;
    bool v2; // 0x23fe0c
    int64_t v3 = v2 ? -1 : 1; // 0x23fe0c
    int64_t v4 = v3 + a2; // 0x23fe0c
    unknown_380c8e13(v3 + a1, v4);
    int32_t * v5 = (int32_t *)(v4 + 0x61e0dca0); // 0x23fe12
    *v5 = *v5 + (int32_t)a4;
    return (int64_t)*(int32_t *)v4;
}
