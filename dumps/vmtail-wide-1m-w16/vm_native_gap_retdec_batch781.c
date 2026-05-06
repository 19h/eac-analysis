/*
 * Targeted RetDec C for native executable gap queue batch 781.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2b9fa9-0x2ba1a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ba1a9-0x2ba3a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ba3a9-0x2ba5a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ba5a9-0x2ba7a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d3869-0x2d3a69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d3a69-0x2d3c69 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d3e69-0x2d4069 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d4069-0x2d4269 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_124433b();
int64_t function_262adb1();
int64_t function_2b9fa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b9fd1(void);
int64_t function_2b9fde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ba006(void);
int64_t function_2ba05a(int64_t a1);
int64_t function_2ba090(int64_t a1);
int64_t function_2ba166(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ba19b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ba1ca(void);
int64_t function_2ba1d4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ba24c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ba25a(int64_t a1);
int64_t function_2ba29c(void);
int64_t function_2ba2c0(void);
int64_t function_2ba2d1(int64_t a1);
int64_t function_2ba3c8(int64_t a1);
int64_t function_2ba3d4(int64_t a1);
int64_t function_2ba3dc(void);
int64_t function_2ba3df(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ba400(void);
int64_t function_2ba403(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ba45a(void);
int64_t function_2ba467(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ba4a0(int64_t a1);
int64_t function_2ba4a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ba4bb(int64_t a1);
int64_t function_2ba4ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ba557(int64_t a1);
int64_t function_2ba589(void);
int64_t function_2ba5b3(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2ba68e(void);
int64_t function_2ba6a9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ba6e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ba797(void);
int64_t function_2d3869(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2d38af(int64_t a1);
int64_t function_2d391c(int64_t a1);
int64_t function_2d39be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d39de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d3a07(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d3a0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d3a28(void);
int64_t function_2d3a4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d3b43(int64_t a1);
int64_t function_2d3b4e(void);
int64_t function_2d3b8e(void);
int64_t function_2d3b92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d3bc3(void);
int64_t function_2d3c4d(void);
int64_t function_2d3e69(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d3e91(void);
int64_t function_2d3e92(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d3f03(int64_t a1, int64_t a2);
int64_t function_2d3f57(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d4078(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2d421f(void);
int64_t function_2d4238(int64_t a1);
int64_t function_2d424d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b07d7e4();
int64_t function_94ea503();
int64_t function_ffffffffd6380eba();
int64_t function_ffffffffd83e96de();
int64_t function_ffffffffe84d9ce2();
int64_t unknown_1102759e();
int64_t unknown_28fc2771();
int64_t unknown_32cf7b3();
int64_t unknown_34ff13d2();
int64_t unknown_35e4d66f();
int64_t unknown_38cbe6c9();
int64_t unknown_3a3c2e5d();
int64_t unknown_3d2d87c2();
int64_t unknown_3d2d8dc9();
int64_t unknown_418f900b();
int64_t unknown_459c1779();
int64_t unknown_4eca07b3();
int64_t unknown_683c5b6e();
int64_t unknown_786effad();
int64_t unknown_837c1fc();
int64_t unknown_f94784();
int64_t unknown_ffffffff8037c9be();
int64_t unknown_ffffffff8271199e();
int64_t unknown_ffffffff89eb9813();
int64_t unknown_ffffffff9129cd9f();
int64_t unknown_ffffffff9938f629();
int64_t unknown_ffffffffb2ce5816();
int64_t unknown_ffffffffb619d854();
int64_t unknown_ffffffffb923b560();
int64_t unknown_ffffffffc82778da();
int64_t unknown_ffffffffca5becd8();
int64_t unknown_ffffffffcc7e415e();
int64_t unknown_ffffffffd8d9655f();
int64_t unknown_ffffffffde444494();
int64_t unknown_ffffffffe36e3bf3();
int64_t unknown_ffffffffe84c9374();
int64_t unknown_ffffffffe914265f();
int64_t unknown_fffffffffa9c4587();

// Address range: 0x2b9fa9 - 0x2b9fcb
int64_t function_2b9fa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b9fa9
    int64_t v1; // 0x2b9fa9
    uint64_t v2 = v1;
    unknown_32cf7b3();
    char * v3 = (char *)(a2 + 0x32267879); // 0x2b9fb4
    *v3 = *v3 - (char)(v2 / 256);
    __asm_in((int16_t)a3);
    int64_t v4 = unknown_3d2d87c2(); // 0x2b9fbc
    int64_t v5; // 0x2b9fa9
    uint32_t v6 = *(int32_t *)&v5; // 0x2b9fc1
    uint32_t v7 = v6 + (int32_t)v2; // 0x2b9fc1
    *(int32_t *)a1 = v7;
    int64_t result = (v4 + 232 + (int64_t)(v7 < v6)) % 256 | v4 & -256; // 0x2b9fc3
    int32_t * v8 = (int32_t *)(a3 + 0x79010cc); // 0x2b9fc5
    *v8 = *v8 + (int32_t)result;
    return result;
}

// Address range: 0x2b9fd1 - 0x2b9fd2
int64_t function_2b9fd1(void) {
    // 0x2b9fd1
    int64_t result; // 0x2b9fd1
    return result;
}

// Address range: 0x2b9fde - 0x2ba001
int64_t function_2b9fde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x2b9fe3
    int64_t v2; // 0x2b9fde
    __asm_out(v1, (char)v2);
    uint64_t v3 = unknown_418f900b(); // 0x2b9fe4
    char * v4 = (char *)(a2 - 0x7f79f5f); // 0x2b9fea
    *v4 = *v4 + (char)v3;
    int64_t v5; // 0x2b9fde
    *(int32_t *)a4 = *(int32_t *)&v5 - (int32_t)v2;
    unsigned char v6 = (char)(v3 / 256) - (char)a3; // 0x2b9ffa
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x2b9ffa
    *(int32_t *)a1 = __asm_insd(v1);
    int64_t result = 256 * (int64_t)v6 | v3 & -0xff01; // 0x2b9ffd
    if (v7 % 2 != 0) {
        result = function_2b9fd1();
    }
    // 0x2b9fff
    return result;
}

// Address range: 0x2ba006 - 0x2ba008
int64_t function_2ba006(void) {
    // 0x2ba006
    int64_t result; // 0x2ba006
    return result;
}

// Address range: 0x2ba05a - 0x2ba05d
int64_t function_2ba05a(int64_t a1) {
    // 0x2ba05a
    int64_t result; // 0x2ba05a
    return result;
}

// Address range: 0x2ba090 - 0x2ba093
int64_t function_2ba090(int64_t a1) {
    // 0x2ba090
    int64_t result; // 0x2ba090
    return result;
}

// Address range: 0x2ba166 - 0x2ba193
int64_t function_2ba166(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2ba166
    unknown_683c5b6e();
    bool v1; // 0x2ba166
    int64_t v2 = v1 ? -4 : 4; // 0x2ba16d
    int64_t v3 = v2 + a2; // 0x2ba16d
    unknown_459c1779();
    *(int32_t *)a1 = *(int32_t *)v3;
    int64_t v4 = v3 + v2; // 0x2ba17b
    int64_t v5 = unknown_f94784(v2 + a1 + (v1 ? -1 : 1), v4); // 0x2ba17e
    unsigned char v6 = *(char *)(v4 + 106); // 0x2ba183
    int64_t v7; // 0x2ba166
    return (v5 + 7 + (int64_t)(v6 > -1 - (char)(((int32_t)a4 - (int32_t)v7 + (int32_t)v7) / 256))) % 256 | v5 & -256;
}

// Address range: 0x2ba19b - 0x2ba1a7
int64_t function_2ba19b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ba19b
    *(int32_t *)a2 = (int32_t)a4;
    int32_t * v1 = (int32_t *)(3 * a1); // 0x2ba1a2
    *v1 = *v1 + (int32_t)a1;
    return __asm_sti();
}

// Address range: 0x2ba1ca - 0x2ba1cb
int64_t function_2ba1ca(void) {
    // 0x2ba1ca
    int64_t result; // 0x2ba1ca
    return result;
}

// Address range: 0x2ba1d4 - 0x2ba1e9
int64_t function_2ba1d4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ba1d4
    int64_t result; // 0x2ba1d4
    bool v1; // 0x2ba1d4
    if (!v1 && !v1) {
        // 0x2ba1d6
        return result;
    }
    int64_t v2; // 0x2ba1d4
    if (!v1) {
        v2 = function_2ba1ca();
    }
    // 0x2ba1e2
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    return v2 + 0xce40a88 & 0xffffffff;
}

// Address range: 0x2ba24c - 0x2ba24f
int64_t function_2ba24c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ba24c
    int64_t result; // 0x2ba24c
    return result;
}

// Address range: 0x2ba25a - 0x2ba25d
int64_t function_2ba25a(int64_t a1) {
    // 0x2ba25a
    int64_t result; // 0x2ba25a
    return result;
}

// Address range: 0x2ba29c - 0x2ba29d
int64_t function_2ba29c(void) {
    // 0x2ba29c
    int64_t result; // 0x2ba29c
    return result;
}

// Address range: 0x2ba2c0 - 0x2ba2c1
int64_t function_2ba2c0(void) {
    // 0x2ba2c0
    int64_t result; // 0x2ba2c0
    return result;
}

// Address range: 0x2ba2d1 - 0x2ba2e2
int64_t function_2ba2d1(int64_t a1) {
    // 0x2ba2d1
    int64_t v1; // 0x2ba2d1
    int64_t v2 = v1;
    bool v3; // 0x2ba2d1
    if (v3) {
        // 0x2ba2df
        int64_t result; // 0x2ba2d1
        return result;
    }
    uint64_t v4 = v1 / 256; // 0x2ba2d4
    char v5 = v4; // 0x2ba2d4
    int64_t result2; // 0x2ba2d1
    if (((v5 - (char)v2 ^ v5) & (char)(v4 ^ v2)) < 0) {
        result2 = function_2ba2c0();
    }
    // 0x2ba2d8
    *(int32_t *)0x6aa6bba9 = *(int32_t *)0x6aa6bba9 + (int32_t)v1;
    // 0x2ba2df
    return result2;
}

// Address range: 0x2ba3c8 - 0x2ba3c9
int64_t function_2ba3c8(int64_t a1) {
    // 0x2ba3c8
    int64_t result; // 0x2ba3c8
    return result;
}

// Address range: 0x2ba3d4 - 0x2ba3da
int64_t function_2ba3d4(int64_t a1) {
    // 0x2ba3d4
    return unknown_ffffffffc82778da(a1);
}

// Address range: 0x2ba3dc - 0x2ba3dd
int64_t function_2ba3dc(void) {
    // 0x2ba3dc
    int64_t result; // 0x2ba3dc
    return result;
}

// Address range: 0x2ba3df - 0x2ba3e6
int64_t function_2ba3df(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ba3df
    int64_t v1; // 0x2ba3df
    return (int64_t)(*(int32_t *)(a2 - 0x2ea7fe18) | (int32_t)v1);
}

// Address range: 0x2ba400 - 0x2ba401
int64_t function_2ba400(void) {
    // 0x2ba400
    int64_t result; // 0x2ba400
    return result;
}

// Address range: 0x2ba403 - 0x2ba458
int64_t function_2ba403(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2ba403
    int64_t v1; // 0x2ba403
    int32_t * v2 = (int32_t *)(v1 + 0x62602e0a); // 0x2ba403
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x2ba403
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 - (char)v4;
    unknown_ffffffff89eb9813();
    int64_t v5; // 0x2ba403
    *(char *)a2 = *(char *)&v5 + (char)v1;
    uint64_t v6 = v1 - a4; // 0x2ba414
    int64_t v7 = (int64_t)(0x273bd001 * *(int32_t *)(a3 - 24)); // 0x2ba416
    unsigned char v8 = (char)(v6 / 256) + 1 + *(char *)(v7 - 39); // 0x2ba420
    int64_t v9 = unknown_ffffffff9938f629(); // 0x2ba423
    char * v10 = (char *)(v9 + 0x1e87505); // 0x2ba428
    *v10 = *v10 + (char)v9;
    int64_t v11 = v9 & -163; // 0x2ba432
    v3 = v11;
    char * v12 = (char *)v11; // 0x2ba434
    *v12 = *v12 - 110;
    char * v13 = (char *)((256 * (int64_t)v8 | v6 & 0xffff00ff) + 0x2b01e800); // 0x2ba439
    uint64_t v14 = a4 / 256; // 0x2ba439
    *v13 = *v13 + (char)v14;
    int64_t v15 = 2 * v14;
    if ((char)v15 < 0 == (char)(v15 ^ v14) < 0) {
        v3 = function_2ba3dc();
    }
    char * v16 = (char *)v7; // 0x2ba443
    *v16 = *v16 + v8;
    int64_t v17 = v3 & 0xffffffff ^ 0xc0099ac; // 0x2ba447
    int32_t * v18 = (int32_t *)(((v17 + 24) % 256 | v17 & 0xffffff00) + 10); // 0x2ba44e
    *v18 = *v18 + (int32_t)v1;
    return function_94ea503();
}

// Address range: 0x2ba45a - 0x2ba467
int64_t function_2ba45a(void) {
    // 0x2ba45a
    return unknown_ffffffffb923b560();
}

// Address range: 0x2ba467 - 0x2ba4a0
int64_t function_2ba467(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2ba467
    bool v1; // 0x2ba467
    if (v1) {
        function_2ba400();
    }
    if (v1 || false) {
        // 0x2ba497
        return unknown_ffffffff8271199e();
    }
    int64_t v2 = unknown_28fc2771(); // 0x2ba46b
    int64_t v3; // 0x2ba467
    char * v4 = (char *)(a3 + 12 + 4 * v3); // 0x2ba470
    *v4 = *v4 + (char)v3;
    int32_t * v5 = (int32_t *)(a3 + 0x69a23a6b); // 0x2ba47b
    *v5 = *v5 + (int32_t)v3;
    int64_t result = (v2 ^ a2) & 0xffffff00 | a2 & 212; // 0x2ba481
    uint32_t v6 = (int32_t)a4 % 32; // 0x2ba483
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(result + 0x1e8e76c); // 0x2ba483
        *v7 = *v7 >> v6;
    }
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x2ba4a0 - 0x2ba4a4
int64_t function_2ba4a0(int64_t a1) {
    // 0x2ba4a0
    int64_t result; // 0x2ba4a0
    char * v1 = (char *)(result + 19); // 0x2ba4a0
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x2ba4a4 - 0x2ba4b7
int64_t function_2ba4a4(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 42); // 0x2ba4a4
    int64_t v2; // 0x2ba4a4
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    unknown_786effad();
    return function_ffffffffe84d9ce2();
}

// Address range: 0x2ba4bb - 0x2ba4c3
int64_t function_2ba4bb(int64_t a1) {
    // 0x2ba4bb
    return function_ffffffffd83e96de();
}

// Address range: 0x2ba4ea - 0x2ba4ee
int64_t function_2ba4ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ba4ea
    int64_t v1; // 0x2ba4ea
    int64_t v2 = v1;
    char v3 = *(char *)(a4 + 14); // 0x2ba4ea
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3);
}

// Address range: 0x2ba557 - 0x2ba57a
int64_t function_2ba557(int64_t a1) {
    // 0x2ba557
    int64_t v1; // 0x2ba557
    int64_t v2 = v1;
    *(int32_t *)0x108f577c = *(int32_t *)0x108f577c - 0x17f1a49b;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3; // 0x2ba557
    *(int32_t *)v3 = *(int32_t *)&v3 - (int32_t)v1;
    int64_t result; // 0x2ba557
    *(int32_t *)result = *(int32_t *)&result ^ -0x17f1a49b;
    *(int32_t *)0x3da5403a = *(int32_t *)0x3da5403a | 0xb61b48d;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x2ba589 - 0x2ba58e
int64_t function_2ba589(void) {
    // 0x2ba589
    return function_262adb1();
}

// Address range: 0x2ba5b3 - 0x2ba670
int64_t function_2ba5b3(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x2ba5b3
    int3_t v1; // 0x2ba5b3
    int3_t v2 = v1;
    int64_t v3; // 0x2ba5b3
    *(int32_t *)a1 = (int32_t)v3;
    bool v4; // 0x2ba5b3
    int64_t v5 = v4 ? -4 : 4; // 0x2ba5b3
    int64_t v6 = v5 + a1; // 0x2ba5b3
    int64_t result; // 0x2ba5b3
    int64_t v7 = result & 0xffffffff; // 0x2ba5b4
    int32_t * v8 = (int32_t *)(v3 - 102); // 0x2ba5b7
    int32_t v9 = v3; // 0x2ba5b7
    *v8 = *v8 + v9;
    char * v10 = (char *)((v5 + a2 & (a4 / 256 & 216 | 0xffffff00) | 39) + 2 * v3); // 0x2ba5c0
    *v10 = *v10 + (char)(a3 / 256);
    int32_t * v11 = (int32_t *)(a3 + 0xcb1c58f + unknown_3d2d8dc9(v6, v7)); // 0x2ba5c8
    uint32_t v12 = *v11; // 0x2ba5c8
    uint32_t v13 = (int32_t)v6; // 0x2ba5c8
    int32_t v14 = v12 + v13; // 0x2ba5c8
    *v11 = v14;
    int32_t v15 = a4; // 0x2ba5cf
    int32_t v16 = 0x200000 * v15; // 0x2ba5cf
    result = unknown_ffffffffca5becd8();
    int64_t v17; // bp+24196, 0x2ba5b3
    *(int64_t *)((int64_t)&v17 - 8) = 64 * (int64_t)(v16 == 0) | (int64_t)((v15 & 2048) != 0) | 128 * (int64_t)(v16 < 0) | 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 16 * (int64_t)(v12 % 16 + v13 % 16 > 15) | 2048 * (int64_t)(((v14 ^ v12) & (v14 ^ v13)) < 0) | 6;
    __frontend_reg_store_fpr(v2 - 2, __frontend_reg_load_fpr(v2));
    if (v16 != 0) {
        // 0x2ba615
        return result;
    }
    // 0x2ba655
    __asm_in_133(-59);
    int64_t result2 = unknown_ffffffffcc7e415e(); // 0x2ba657
    uint32_t v18 = *(int32_t *)&result; // 0x2ba662
    uint32_t v19 = v18 + v9; // 0x2ba662
    *(int32_t *)v7 = v19;
    int32_t * v20 = (int32_t *)((int64_t)v16 + 0x13a7b8ff); // 0x2ba664
    *v20 = *v20 - (v19 < v18 ? 0x1e8369f : 0x1e8369e);
    __asm_out((int16_t)a3, (char)result2);
    return result2;
}

// Address range: 0x2ba68e - 0x2ba699
int64_t function_2ba68e(void) {
    // 0x2ba68e
    int64_t result; // 0x2ba68e
    int32_t * v1 = (int32_t *)(result + 55); // 0x2ba68e
    *v1 = *v1 + 0x4423eae2;
    return result;
}

// Address range: 0x2ba6a9 - 0x2ba6b4
int64_t function_2ba6a9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ba6a9
    return function_ffffffffd6380eba();
}

// Address range: 0x2ba6e1 - 0x2ba704
int64_t function_2ba6e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    uint64_t v2 = a4 - 1; // 0x2ba6e2
    bool v3; // 0x2ba6e1
    if (v2 == 0 || v3) {
        // 0x2ba6e4
        int64_t v4; // 0x2ba6e1
        *(int32_t *)a2 = (int32_t)v4 + (int32_t)a2;
        int16_t v5 = 256 * (int16_t)v4 >> 8; // 0x2ba6e6
        uint16_t v6 = v5 * v5; // 0x2ba6e6
        uint32_t v7 = *(int32_t *)&v1; // 0x2ba6e8
        uint32_t v8 = v7 + (int32_t)v2; // 0x2ba6e8
        *(int32_t *)v1 = v8;
        char * v9 = (char *)(v4 + 0x33605e8); // 0x2ba6ea
        *v9 = (char)(v8 < v7) - (char)v2 + *v9;
        __asm_int(56);
        return (v4 & 0xffff0000 | (int64_t)(v6 & 0x7f00) | (v2 / 256 + (int64_t)v6) % 256) + v4 & 0xffffffff;
    }
    // 0x2ba6f8
    float80_t v10; // 0x2ba6e1
    *(int32_t *)a1 = (int32_t)v10;
    return function_3b07d7e4();
}

// Address range: 0x2ba797 - 0x2ba798
int64_t function_2ba797(void) {
    // 0x2ba797
    int64_t result; // 0x2ba797
    return result;
}

// Address range: 0x2d3869 - 0x2d387b
int64_t function_2d3869(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2d3869
    int64_t v1; // 0x2d3869
    uint64_t v2 = 2 * v1; // 0x2d3869
    char * v3 = (char *)(a2 + 21); // 0x2d386d
    unsigned char v4 = *v3; // 0x2d386d
    unsigned char v5 = v4 + (char)(a3 / 256); // 0x2d386d
    *v3 = v5;
    char v6 = *(char *)(a4 + 114); // 0x2d3870
    return (256 * (int64_t)((char)(v2 / 256) - v6 + (char)(v5 < v4)) | v2 & 0xffff0089) ^ 178;
}

// Address range: 0x2d38af - 0x2d38b0
int64_t function_2d38af(int64_t a1) {
    // 0x2d38af
    int64_t result; // 0x2d38af
    return result;
}

// Address range: 0x2d391c - 0x2d391f
int64_t function_2d391c(int64_t a1) {
    // 0x2d391c
    int64_t result; // 0x2d391c
    return result;
}

// Address range: 0x2d39be - 0x2d39da
int64_t function_2d39be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 - 0x4eb4bc3); // 0x2d39be
    *v2 = *v2 & (char)a4;
    int32_t v3 = *(int32_t *)&v1 | (int32_t)a1; // 0x2d39c6
    *(int32_t *)a2 = v3;
    int64_t v4 = a4 - 1; // 0x2d39c8
    int64_t v5; // 0x2d39be
    if (v4 != 0 == v3 == 0) {
        // 0x2d39dc
        return 2 * v5 & 0xfffffffe;
    }
    unsigned char v6 = *(char *)-0xfc0002d; // 0x2d39ca
    unsigned char v7 = v6 + (char)((uint64_t)v5 / 256); // 0x2d39ca
    *(char *)-0xfc0002d = v7;
    int64_t result = __asm_int1(); // 0x2d39d2
    uint32_t v8 = (int32_t)v4 % 32; // 0x2d39d3
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)(v1 + 0x68ee0570); // 0x2d39d3
        uint32_t v10 = *v9; // 0x2d39d3
        *v9 = v10 >> v8 | (int32_t)(v7 < v6) << 32 - v8 | (int32_t)((int64_t)v10 << (int64_t)(33 - v8));
    }
    return result;
}

// Address range: 0x2d39de - 0x2d3a07
int64_t function_2d39de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d39de
    int64_t result; // 0x2d39de
    bool v1; // 0x2d39de
    if (v1) {
        // 0x2d39e1
        int64_t v2; // 0x2d39de
        int64_t v3 = (int32_t)v2 >> 31; // 0x2d39e1
        *(int32_t *)(v3 - 24) = (int32_t)a2;
        *(int32_t *)0x7dfc71ef = *(int32_t *)0x7dfc71ef + (int32_t)a1;
        int64_t v4 = unknown_837c1fc(); // 0x2d39f6
        char * v5 = (char *)(v3 + 0x1e84b02); // 0x2d39fb
        *v5 = (char)v4 + (char)((2 * v2 & 256) != 0) + *v5;
        int16_t * v6 = (int16_t *)(v3 - 99); // 0x2d3a01
        *v6 = *v6 ^ (int16_t)v2;
        result = v4;
    }
    // 0x2d3a06
    return result;
}

// Address range: 0x2d3a07 - 0x2d3a0b
int64_t function_2d3a07(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d3a07
    int64_t v1; // 0x2d3a07
    int64_t v2 = v1;
    return v2 & -0x10000 | (int64_t)__asm_in_134((int16_t)a3) | (v2 & 0xff00) + a3 & 0xff00;
}

// Address range: 0x2d3a0f - 0x2d3a27
int64_t function_2d3a0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d3a0f
    int64_t v1; // 0x2d3a0f
    *(int32_t *)0x1e8d428a8343449 = (int32_t)v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    bool v2; // 0x2d3a0f
    return v1 + 0x8a35fcf7 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x2d3a28 - 0x2d3a32
int64_t function_2d3a28(void) {
    unsigned char v1 = *(char *)-0x178973b7; // 0x2d3a28
    *(char *)-0x178973b7 = v1 / 128 | 2 * v1;
    int64_t result; // 0x2d3a28
    return result;
}

// Address range: 0x2d3a4e - 0x2d3a9a
int64_t function_2d3a4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffb619d854(); // 0x2d3a4e
    bool v2; // 0x2d3a4e
    if (a4 == 1 || v2) {
        // 0x2d3a56
        unknown_ffffffffd8d9655f();
        return a3 & 0xffffffff;
    }
    char v3 = a3;
    *(char *)a3 = (char)v1 + v3;
    *(char *)(v1 - 58) = v3;
    int64_t v4; // 0x2d3a4e
    int32_t * v5 = (int32_t *)(v4 + 94); // 0x2d3a91
    *v5 = *v5 + (int32_t)a2;
    return (int64_t)((*(int32_t *)-0x1eff666cb5fe1743 & -0x17690c51) - 0x10008000);
}

// Address range: 0x2d3b43 - 0x2d3b46
int64_t function_2d3b43(int64_t a1) {
    // 0x2d3b43
    int64_t result; // 0x2d3b43
    return result;
}

// Address range: 0x2d3b4e - 0x2d3b4f
int64_t function_2d3b4e(void) {
    // 0x2d3b4e
    int64_t result; // 0x2d3b4e
    return result;
}

// Address range: 0x2d3b8e - 0x2d3b91
int64_t function_2d3b8e(void) {
    // 0x2d3b8e
    int64_t result; // 0x2d3b8e
    return result;
}

// Address range: 0x2d3b92 - 0x2d3ba8
int64_t function_2d3b92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 0x1e8013d); // 0x2d3b92
    int64_t v2; // 0x2d3b92
    *v1 = *v1 ^ (int32_t)v2;
    unknown_1102759e();
    return function_124433b();
}

// Address range: 0x2d3bc3 - 0x2d3bc4
int64_t function_2d3bc3(void) {
    // 0x2d3bc3
    int64_t result; // 0x2d3bc3
    return result;
}

// Address range: 0x2d3c4d - 0x2d3c58
int64_t function_2d3c4d(void) {
    // 0x2d3c4d
    int64_t result; // 0x2d3c4d
    return result;
}

// Address range: 0x2d3e69 - 0x2d3e7b
int64_t function_2d3e69(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_35e4d66f(); // 0x2d3e69
    int64_t v2; // 0x2d3e69
    __asm_outsb((int16_t)a3, (char)v2);
    int64_t v3 = v1 & 0xf5000afb | 0xafff504; // 0x2d3e6f
    return (a4 / 256 + 211 + v3) % 256 | v3 & 0xffffff00;
}

// Address range: 0x2d3e91 - 0x2d3e92
int64_t function_2d3e91(void) {
    // 0x2d3e91
    int64_t result; // 0x2d3e91
    return result;
}

// Address range: 0x2d3e92 - 0x2d3e97
int64_t function_2d3e92(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d3e92
    return function_2d3e91();
}

// Address range: 0x2d3f03 - 0x2d3f08
int64_t function_2d3f03(int64_t a1, int64_t a2) {
    // 0x2d3f03
    int64_t result; // 0x2d3f03
    return result;
}

// Address range: 0x2d3f57 - 0x2d3f99
int64_t function_2d3f57(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d3f57
    unknown_3a3c2e5d();
    int32_t v1 = __asm_in((int16_t)a3); // 0x2d3f64
    int64_t v2 = -79; // bp-8, 0x2d3f65
    bool v3; // 0x2d3f57
    int64_t v4 = v3 ? -4 : 4; // 0x2d3f67
    int64_t v5 = v4 + a2; // 0x2d3f67
    *(char *)-0x16fe865c = *(char *)-0x16fe865c | (char)v1;
    int32_t * v6 = (int32_t *)(v5 - 0x1fa4629c + (int64_t)v1); // 0x2d3f6e
    int64_t v7; // 0x2d3f57
    *v6 = *v6 + (int32_t)v7;
    int64_t v8; // 0x2d3f57
    *(int32_t *)a3 = *(int32_t *)&v8 + (int32_t)a3;
    *(char *)-0x17d551c5fbe7123d = (char)__asm_hlt(v4 + a1, v5);
    __readgsdword(a3 - 0x49c1fc28);
    unknown_ffffffffde444494();
    return *(int64_t *)((v7 + (int64_t)&v2 & 0xffffffff) + 8);
}

// Address range: 0x2d4078 - 0x2d420a
int64_t function_2d4078(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x2d4078
    int64_t v1; // 0x2d4078
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a1;
    bool v5; // 0x2d4078
    *(char *)v2 = (char)v2 + (char)a4 + (char)v5;
    unknown_ffffffff9129cd9f();
    unknown_fffffffffa9c4587();
    int64_t v6; // 0x2d4078
    int32_t v7 = *(int32_t *)&v6; // 0x2d4086
    int64_t v8 = a2 + 4; // 0x2d4086
    v6 = v8;
    int32_t * v9 = (int32_t *)(((int64_t)__asm_in_134((int16_t)a3) | (int64_t)(v7 & -256)) + 6); // 0x2d408f
    *v9 = *v9 + (int32_t)v8;
    int64_t v10 = v6; // 0x2d40fd
    char v11 = *(char *)v10; // 0x2d40fd
    uint64_t v12 = (256 * (int64_t)(v11 + (char)(a4 / 256)) | a4 & -0xff01) - 1; // 0x2d40ff
    if (v12 == 0) {
        // 0x2d4101
        __asm_int(-100);
        return v10 & 0xffffffff;
    }
    int64_t v13 = __asm_iretd(); // 0x2d4131
    int32_t * v14 = (int32_t *)(v1 + 0x4532f868); // 0x2d4132
    int32_t v15 = 2 * *v14; // 0x2d4132
    *v14 = v15;
    if (v15 >= 0) {
        int64_t result = unknown_ffffffffe84c9374(); // 0x2d416e
        *(int32_t *)-0x4a346c86 = *(int32_t *)-0x4a346c86 + (int32_t)v4;
        return result;
    }
    int64_t v16 = v3; // 0x2d413a
    char * v17 = (char *)v6;
    __asm_outsb((int16_t)v16, *v17);
    if (v15 == 0) {
        int64_t v18 = v13 & -256 | (int64_t)*v17; // 0x2d413d
        v6++;
        char * v19 = (char *)(2 * v18 + 0x81f013d); // 0x2d413f
        unsigned char v20 = *v19; // 0x2d413f
        *v19 = v20 / 2 | 128 * v20;
        int64_t v21 = 0x3d00e008; // bp-8, 0x2d4151
        int32_t * v22 = (int32_t *)(v4 + 0x7d2626b9); // 0x2d4157
        *v22 = *v22 + (int32_t)v18;
        uint32_t result2 = *(int32_t *)(v18 & 0xffffffff); // 0x2d415d
        int32_t * v23 = (int32_t *)(v3 - 26); // 0x2d415f
        *v23 = *v23 ^ (int32_t)(int64_t)&v21;
        *(char *)v4 = (char)result2;
        return result2;
    }
    int64_t v24 = v13; // 0x2d419f
    v3 = v16;
    if (llvm_ctpop_i8((char)v15) % 2 != 0) {
        int32_t * v25 = (int32_t *)v13; // 0x2d41a3
        *v25 = *v25 + (int32_t)v16;
        *(char *)v4 = *(char *)&v4 | (char)(v13 / 256);
        unknown_ffffffffb2ce5816();
        unknown_4eca07b3();
        unknown_ffffffff8037c9be();
        v24 = unknown_38cbe6c9();
        char * v26 = (char *)(v3 - 32); // 0x2d41c8
        *v26 = *v26 + (char)v24;
    }
    int64_t v27 = v12 & 0xffffffff; // 0x2d41d1
    char * v28 = (char *)(unknown_34ff13d2() - 22); // 0x2d41d3
    *v28 = *v28 + (char)v3;
    __asm_hlt(v4, v6);
    int32_t * v29 = (int32_t *)((v24 & 0xffffffff) + 6); // 0x2d41e3
    int32_t v30 = v12; // 0x2d41e3
    *v29 = *v29 + v30;
    unknown_ffffffffe36e3bf3();
    *(char *)v3 = *(char *)&v3 + (char)(v12 / 256);
    int64_t v31 = unknown_ffffffffe914265f(); // 0x2d41f4
    int32_t * v32 = (int32_t *)(v27 - 10); // 0x2d41f9
    uint32_t v33 = *v32; // 0x2d41f9
    uint32_t v34 = v33 + v30; // 0x2d41f9
    *v32 = v34;
    char v35 = __asm_in_135(-117); // 0x2d41fc
    char * v36 = (char *)v27; // 0x2d41fe
    char v37 = *v36; // 0x2d41fe
    char v38 = v34 < v33; // 0x2d41fe
    char v39 = v35 + v38; // 0x2d41fe
    char v40 = v37 - v39; // 0x2d41fe
    *v36 = v40;
    if (((v40 - v38 ^ v37) & (v39 ^ v37)) < 0) {
        // 0x2d4207
        return function_2d4238(v27);
    }
    // 0x2d4202
    return v31 & -256 | (int64_t)v35;
}

// Address range: 0x2d421f - 0x2d4225
int64_t function_2d421f(void) {
    // 0x2d421f
    int64_t v1; // 0x2d421f
    return v1 + 0xbfff8000 & 0xffffffff;
}

// Address range: 0x2d4238 - 0x2d4239
int64_t function_2d4238(int64_t a1) {
    // 0x2d4238
    int64_t result; // 0x2d4238
    return result;
}

// Address range: 0x2d424d - 0x2d4255
int64_t function_2d424d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d424d
    int64_t v1; // 0x2d424d
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result;
    *(int32_t *)v1 = (int32_t)a4;
    return result;
}
