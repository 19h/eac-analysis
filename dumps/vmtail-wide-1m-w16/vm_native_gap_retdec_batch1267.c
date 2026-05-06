/*
 * Targeted RetDec C for native executable gap queue batch 1267.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x206234-0x206434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x206434-0x206634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x206634-0x206834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x206834-0x206a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x206a34-0x206c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x206c34-0x206e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x207034-0x207234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38b1a8-0x38b3a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38b3a8-0x38b5a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38b5a8-0x38b7a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38b7a8-0x38b9a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38b9a8-0x38bba8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38bba8-0x38bda8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38bda8-0x38bfa8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38bfa8-0x38c1a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b26b4-0x3b28b4 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
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

int64_t function_2061c3();
int64_t function_206234(void);
int64_t function_20623f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_206248(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2062a1(int64_t a1);
int64_t function_2062d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206372(void);
int64_t function_206380(void);
int64_t function_20639e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2063c8(void);
int64_t function_2063e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206509(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206556(int64_t a1, int64_t a2);
int64_t function_206575(void);
int64_t function_206590(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2065e0(void);
int64_t function_20661a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20662f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206746(void);
int64_t function_20675c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2067f4(void);
int64_t function_2067ff(void);
int64_t function_206855(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_206892(int64_t a1);
int64_t function_2068aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_206935(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206984(void);
int64_t function_2069a6(void);
int64_t function_2069cf(int64_t a1);
int64_t function_2069d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206a01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_206a2e(void);
int64_t function_206a35(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206a59(int64_t a1, int64_t a2, int64_t a3);
int64_t function_206a9c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_206ac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206afb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_206bab(int64_t a1);
int64_t function_206bc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_206c41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_206cd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_206d41(void);
int64_t function_206d4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_206d5c(int64_t a1);
int64_t function_206d65(void);
int64_t function_206e0a(int64_t a1);
int64_t function_207034(int64_t a1, int64_t a2);
int64_t function_2070e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_207106(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20711e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_207180(void);
int64_t function_20719c(void);
int64_t function_2071ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_223a9f88();
int64_t function_38b1a8(void);
int64_t function_38b275(int64_t a1, int64_t a2);
int64_t function_38b298(int64_t a1, int64_t a2);
int64_t function_38b2a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_38b369(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_38b3c5(int64_t a1);
int64_t function_38b3e4(void);
int64_t function_38b3ed(int64_t a1);
int64_t function_38b3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38b405(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38b4ed(void);
int64_t function_38b4f6(void);
int64_t function_38b4fa(void);
int64_t function_38b544(void);
int64_t function_38b55e(int64_t a1);
int64_t function_38b580(void);
int64_t function_38b596(void);
int64_t function_38b5a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_38b5bb(int64_t a1);
int64_t function_38b5d8(int64_t a1);
int64_t function_38b5e8(int64_t a1);
int64_t function_38b601(void);
int64_t function_38b62f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38b661(int64_t a1);
int64_t function_38b693(void);
int64_t function_38b702(int64_t a1);
int64_t function_38b74d(void);
int64_t function_38b77f(void);
int64_t function_38b787(int64_t a1);
int64_t function_38b78c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38b792(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38b7a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38b802(void);
int64_t function_38b851(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38b873(int64_t a1, int64_t a2);
int64_t function_38b880(void);
int64_t function_38b889(void);
int64_t function_38b8bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38b8dc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_38b97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_38ba27(int64_t a1, int64_t a2);
int64_t function_38ba3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38ba91(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38ba9d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38bad3(void);
int64_t function_38bae5(void);
int64_t function_38bb18(int64_t a1);
int64_t function_38bb23(void);
int64_t function_38bb4c(void);
int64_t function_38bb81(void);
int64_t function_38bba1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38bc0e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_38bd23(void);
int64_t function_38bd38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38bdef(void);
int64_t function_38bdf5(int64_t a1);
int64_t function_38be1e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_38be46(int64_t a1);
int64_t function_38be4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38bea2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38bee1(void);
int64_t function_38bef3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38bf15(void);
int64_t function_38bf26(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38bf4d(void);
int64_t function_38bf56(int64_t a1);
int64_t function_38bf5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38bf92(int64_t a1);
int64_t function_38bfc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38c123(void);
int64_t function_38c135(void);
int64_t function_38c14f(void);
int64_t function_38c156(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38c17e(void);
int64_t function_3b26b4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b2717(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b272e(int64_t a1);
int64_t function_3b2757(void);
int64_t function_3b27a6(int64_t a1);
int64_t function_3b27ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b2856(void);
int64_t function_3b2883(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40eee4f7();
int64_t function_4fd2cc80();
int64_t function_7144bab0();
int64_t function_8adfb9d();
int64_t function_ac2794();
int64_t function_ef86482();
int64_t function_ffffffff9037a664();
int64_t function_ffffffff923ab358();
int64_t function_ffffffff9c3aa424();
int64_t function_ffffffffa58abb38();
int64_t function_ffffffffc6dfc749();
int64_t function_ffffffffdb2259d1();
int64_t function_ffffffffe83c5365();
int64_t function_ffffffffeecc6c50();
int64_t function_fffffffff53aa362();
int64_t unknown_15d62b3();
int64_t unknown_29474d15();
int64_t unknown_3021a9f9();
int64_t unknown_32fb5905();
int64_t unknown_3abdd6b7();
int64_t unknown_3d2254c0();
int64_t unknown_4a3aa4de();
int64_t unknown_4e5e20b9();
int64_t unknown_4eece365();
int64_t unknown_67ec0f02();
int64_t unknown_6dd4539c();
int64_t unknown_72dbc057();
int64_t unknown_7839f3bb();
int64_t unknown_bebe2b4();
int64_t unknown_d93d65();
int64_t unknown_ffffffff8116f46b();
int64_t unknown_ffffffff9b108db3();
int64_t unknown_ffffffffa4482942();
int64_t unknown_ffffffffa5eaf7d3();
int64_t unknown_ffffffffaab67e5b();
int64_t unknown_ffffffffb8b0db64();
int64_t unknown_ffffffffbd921570();
int64_t unknown_ffffffffc8263025();
int64_t unknown_ffffffffd861ccf6();
int64_t unknown_ffffffffd8cad230();
int64_t unknown_ffffffffe839efdd();

// Address range: 0x206234 - 0x20623f
int64_t function_206234(void) {
    // 0x206234
    unknown_ffffffffa4482942();
    return function_2061c3();
}

// Address range: 0x20623f - 0x206247
int64_t function_20623f(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x20623f
    int64_t result; // 0x20623f
    __asm_out(v1, (char)result);
    *(char *)a1 = __asm_insb(v1);
    return result;
}

// Address range: 0x206248 - 0x206274
int64_t function_206248(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(a1 + 0x1cb7cbf); // 0x20624a
    *v2 = (int32_t)a3;
    uint32_t v3 = (int32_t)a4 % 32; // 0x206253
    int64_t v4; // 0x206248
    if (v3 != 0) {
        uint32_t v5 = (int32_t)v4;
        *(int32_t *)v4 = v5 >> v3 | v5 << 32 - v3;
    }
    int64_t v6 = unknown_15d62b3(((v4 & (int64_t)&g1) != 0 ? -4 : 4) + a1); // 0x20625a
    int64_t v7 = ((v4 & (int64_t)&g1) != 0 ? -1 : 1) + a2; // 0x206263
    __asm_outsb((int16_t)*v2, *(char *)v7);
    char v8 = v1;
    unsigned char v9 = v8 % 32; // 0x206266
    char v10 = v8; // 0x206266
    if (v9 != 0) {
        unsigned char v11 = *(char *)&v1; // 0x206266
        *(char *)v1 = v11 << 8 - v9 | v11 >> v9;
        v10 = v1;
    }
    unsigned char v12 = *(char *)v6; // 0x206268
    int64_t result = v6 & -256 | (int64_t)*(char *)(a5 - 63); // 0x20626a
    char * v13 = (char *)result; // 0x20626d
    *v13 = v10 + (char)(v12 > -1 - (char)v6) + *v13;
    int32_t * v14 = (int32_t *)(v7 + 107); // 0x20626f
    *v14 = 8 * *v14;
    return result;
}

// Address range: 0x2062a1 - 0x2062a2
int64_t function_2062a1(int64_t a1) {
    // 0x2062a1
    int64_t result; // 0x2062a1
    return result;
}

// Address range: 0x2062d6 - 0x206301
int64_t function_2062d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2062d6
    int64_t v1; // 0x2062d6
    if ((int32_t)v1 < 0x28200001) {
        // 0x2062fa
        int64_t v2; // 0x2062d6
        return (int64_t)&v2;
    }
    char * v3 = (char *)(v1 + 97); // 0x2062ef
    *v3 = *v3 + (char)(v1 / 256);
    return (v1 & 0xffffff00 | (int64_t)*(char *)0x5d5d260d1a29f3e4) ^ 0xe33d001d;
}

// Address range: 0x206372 - 0x206374
int64_t function_206372(void) {
    // 0x206372
    int64_t result; // 0x206372
    return result;
}

// Address range: 0x206380 - 0x206381
int64_t function_206380(void) {
    // 0x206380
    int64_t result; // 0x206380
    return result;
}

// Address range: 0x20639e - 0x2063aa
int64_t function_20639e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x20639e
    int64_t v1; // 0x20639e
    int64_t v2 = v1;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x20639e
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2063c8 - 0x2063cb
int64_t function_2063c8(void) {
    // 0x2063c8
    int64_t result; // 0x2063c8
    return result;
}

// Address range: 0x2063e0 - 0x2063e5
int64_t function_2063e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 20); // 0x2063e0
    int64_t v2; // 0x2063e0
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return function_206380();
}

// Address range: 0x206509 - 0x206516
int64_t function_206509(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x206509
    int64_t v1; // 0x206509
    uint64_t result = v1;
    char * v2 = (char *)(a4 - 61); // 0x206509
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x206556 - 0x20655f
int64_t function_206556(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x247f11dc); // 0x206556
    int64_t result; // 0x206556
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x206575 - 0x20657a
int64_t function_206575(void) {
    // 0x206575
    return function_8adfb9d();
}

// Address range: 0x206590 - 0x2065ae
int64_t function_206590(int64_t a1, int64_t a2, int64_t a3) {
    // 0x206590
    int64_t v1; // 0x206590
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 - 0x6455dd3d); // 0x206597
    *v3 = *v3 + (char)a3;
    char v4 = *(char *)0x90e62a4; // 0x20659d
    *(char *)0x90e62a4 = v4 + (char)((uint64_t)v1 / 256);
    int64_t v5; // 0x206590
    *(int32_t *)a3 = *(int32_t *)&v5 + (int32_t)a1;
    __asm_int1();
    return function_ac2794();
}

// Address range: 0x2065e0 - 0x2065e9
int64_t function_2065e0(void) {
    // 0x2065e0
    return 0xffe048d4;
}

// Address range: 0x20661a - 0x206625
int64_t function_20661a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20661a
    int64_t result; // 0x20661a
    return result;
}

// Address range: 0x20662f - 0x206639
int64_t function_20662f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20662f
    int64_t v1; // 0x20662f
    char * v2 = (char *)(v1 - 71); // 0x20662f
    *v2 = *v2 + (char)a4;
    return function_ffffffffc6dfc749();
}

// Address range: 0x206746 - 0x206747
int64_t function_206746(void) {
    // 0x206746
    int64_t result; // 0x206746
    return result;
}

// Address range: 0x20675c - 0x2067dc
int64_t function_20675c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20675c
    int64_t v1; // 0x20675c
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    bool v5; // 0x20675c
    if (v5) {
        // 0x206760
        int64_t result; // 0x20675c
        return result;
    }
    int32_t v6 = a3 ^ a1; // 0x2067bd
    *(int32_t *)a3 = v6;
    int64_t v7; // 0x20675c
    if (v6 >= 0) {
        v7 = function_206746();
    }
    // 0x2067c6
    __asm_out_134(104, (int32_t)v7);
    unsigned char v8 = *(char *)&v3 | (char)(v2 / 256); // 0x2067c8
    if (v8 == 0) {
        int64_t result2 = v7 & -195; // 0x2067a0
        int32_t * v9 = (int32_t *)result2; // 0x2067a2
        *v9 = *v9 + (int32_t)result2;
        return result2;
    }
    int64_t v10 = 256 * (int64_t)v8 | v2 & -0xff01; // 0x2067c8
    int64_t v11 = (a4 & 0xffffff00 | 27) + 0xffffffff; // 0x2067ca
    int64_t result3 = v11 & 0xffffff1a; // 0x2067ca
    *(char *)v4 = *(char *)&v4 + (char)(v3 / 256);
    int32_t * v12 = (int32_t *)(v10 + 72); // 0x2067d7
    int32_t v13 = *v12 + (int32_t)(v7 < 0xffffffffba4f0001) - (int32_t)v10; // 0x2067d7
    *v12 = v13;
    if ((v7 & 0xffffffff) == 1 || v13 == 0) {
        // 0x206760
        return result3;
    }
    int32_t * v14 = (int32_t *)result3; // 0x2067ba
    *v14 = *v14 + (int32_t)v11;
    return result3;
}

// Address range: 0x2067f4 - 0x2067fc
int64_t function_2067f4(void) {
    // 0x2067f4
    return 0xcb39c8b7;
}

// Address range: 0x2067ff - 0x206800
int64_t function_2067ff(void) {
    // 0x2067ff
    int64_t result; // 0x2067ff
    return result;
}

// Address range: 0x206855 - 0x206872
int64_t function_206855(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    if (a4 == 0) {
        function_2067ff();
    }
    // 0x20685b
    __asm_int1();
    return unknown_d93d65();
}

// Address range: 0x206892 - 0x206899
int64_t function_206892(int64_t a1) {
    // 0x206892
    int64_t result; // 0x206892
    return result;
}

// Address range: 0x2068aa - 0x206934
int64_t function_2068aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int32_t v3 = (int32_t)a3 + (int32_t)a1; // 0x2068aa
    *(int32_t *)a1 = v3;
    int64_t v4 = a4 - 1; // 0x2068ad
    if (v4 != 0 && v3 != 0) {
        // 0x206912
        __asm_int1();
        *(int32_t *)v1 = *(int32_t *)&v1 >> 1;
        *(char *)0x3b1bb800013d5352 = (char)*(int32_t *)&v2;
        char * v5 = (char *)(a4 + 57 + 4 * v4); // 0x206929
        *v5 = *v5 - (char)(v1 / 256);
        return a5 + 0x909e3f54 & 0xffffffff;
    }
    int64_t result = unknown_4e5e20b9(); // 0x2068b3
    int64_t v6; // 0x2068aa
    uint32_t v7 = (int32_t)(v6 | v4) % 32; // 0x2068bd
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)result; // 0x2068bd
        *v8 = *v8 >> v7;
    }
    return result;
}

// Address range: 0x206935 - 0x20693a
int64_t function_206935(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x206935
    return a4 & 0xffffffff;
}

// Address range: 0x206984 - 0x206985
int64_t function_206984(void) {
    // 0x206984
    int64_t result; // 0x206984
    return result;
}

// Address range: 0x2069a6 - 0x2069a8
int64_t function_2069a6(void) {
    // 0x2069a6
    int64_t result; // 0x2069a6
    return result;
}

// Address range: 0x2069cf - 0x2069d3
int64_t function_2069cf(int64_t a1) {
    // 0x2069cf
    int64_t v1; // 0x2069cf
    *(int32_t *)a1 = (int32_t)v1 / 2;
    return function_206a01(a1, v1, v1, v1, v1);
}

// Address range: 0x2069d4 - 0x206a01
int64_t function_2069d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2069d4
    float80_t v3; // 0x2069d4
    *(float32_t *)(v2 + 7) = (float32_t)v3;
    int64_t v4 = (int64_t)__asm_in_135(31) & 0x22f67b2b;
    int64_t v5 = v4 | v2 & 0x22f67b00; // 0x2069d9
    int32_t * v6 = (int32_t *)v5; // 0x2069e2
    *v6 = *v6 & (int32_t)v2;
    *(char *)a1 = (char)v4;
    int64_t result = v5; // 0x2069ec
    if (a4 != 1) {
        result = function_206984();
    }
    int64_t v7 = a3 & -0xff01 | (int64_t)&g2; // 0x2069de
    int64_t v8 = v7 & -256 | (int64_t)(*(char *)&v1 & (char)v7); // 0x2069e0
    bool v9; // 0x2069d4
    int64_t v10 = (v9 ? -1 : 1) + a1; // 0x2069ea
    int32_t * v11 = (int32_t *)(v2 - 0x260bfa1 + 2 * v10); // 0x2069ee
    *v11 = 0x1000 * *v11;
    char * v12 = (char *)(result + 40); // 0x2069f6
    *v12 = *v12 - (char)v2;
    int32_t * v13 = (int32_t *)v8; // 0x2069f9
    *v13 = *v13 + (int32_t)v10;
    *(char *)v10 = __asm_insb((int16_t)v8);
    int64_t v14 = v1;
    *(int32_t *)v14 = *(int32_t *)&v1 + (int32_t)v14;
    return result;
}

// Address range: 0x206a01 - 0x206a14
int64_t function_206a01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x206a01
    int64_t v1; // 0x206a01
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x206a01
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    int64_t v4 = v2;
    return 2 * v4 & 254 | v4 & -256;
}

// Address range: 0x206a2e - 0x206a33
int64_t function_206a2e(void) {
    // 0x206a2e
    return function_ffffffff923ab358();
}

// Address range: 0x206a35 - 0x206a48
int64_t function_206a35(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x3d7e9a00); // 0x206a35
    *v1 = *v1 - (int32_t)a2;
    int32_t * v2 = (int32_t *)(a1 - 0x555acdf7); // 0x206a3b
    *v2 = *v2 + (int32_t)a4;
    int64_t v3; // 0x206a35
    int64_t result = function_206a9c(a1, a2, a3 & -0xff01 | (int64_t)&g5, v3 + (a4 & 0xff00) & 0xff00 | a4 & -0xff01); // 0x206a46
    return result;
}

// Address range: 0x206a59 - 0x206a91
int64_t function_206a59(int64_t a1, int64_t a2, int64_t a3) {
    // 0x206a59
    int64_t v1; // 0x206a59
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a3;
    bool v5; // 0x206a59
    int64_t v6 = (v3 + 154 + (int64_t)v5) % 256 | v3 & 0xffffff00; // 0x206a59
    *(char *)(a2 + 0xad03f46) = -24;
    int32_t * v7 = (int32_t *)(a2 + 0x5b006c8f); // 0x206a62
    *v7 = *v7 + (int32_t)a3;
    *(char *)-0x1d21690 = *(char *)-0x1d21690 + (char)(v2 / 256);
    int32_t v8 = __readgsdword(v6 - 0x57237fad); // 0x206a75
    *(int32_t *)a1 = *(int32_t *)v6;
    char v9 = (v8 & (int32_t)a2) / 256; // 0x206a7f
    *(char *)-0x1831197a = *(char *)-0x1831197a + v9;
    *(char *)v4 = *(char *)&v4 + v9;
    return v2 & 0xffffffff;
}

// Address range: 0x206a9c - 0x206ac4
int64_t function_206a9c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x206a9c
    int64_t v1; // 0x206a9c
    char * v2 = (char *)(v1 + a3); // 0x206a9c
    *v2 = *v2 - (char)(a3 / 256);
    int32_t * v3 = (int32_t *)(a3 + 0x13d00bd); // 0x206aad
    uint32_t v4 = *v3; // 0x206aad
    uint32_t v5 = v4 + (int32_t)a2; // 0x206aad
    *v3 = v5;
    int16_t v6; // 0x206a9c
    uint32_t v7 = *(int32_t *)&v6; // 0x206ab8
    *(int32_t *)(int64_t)v6 = v7 / 16 | 0x20000000 * v7 | 0x10000000 * (int32_t)(v5 < v4);
    *(int32_t *)-0x729de0b1 = *(int32_t *)-0x729de0b1 | (int32_t)a4;
    return (int64_t)v6 & 0xffffffff;
}

// Address range: 0x206ac7 - 0x206aee
int64_t function_206ac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x206ac7
    int64_t v1; // 0x206ac7
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(a1 - 0x74d82f65); // 0x206acc
    *v4 = *v4 + 0x3d00934a;
    char * v5 = (char *)(2 * v2); // 0x206ad4
    unsigned char v6 = *v5; // 0x206ad4
    char v7 = v2 / 256; // 0x206ad4
    unsigned char v8 = v6 + v7; // 0x206ad4
    *v5 = v8;
    int64_t result = ((v3 | 112) + 112 + (int64_t)(v8 < v6)) % 128 | v3 & -256; // 0x206ad7
    *(char *)-0x3dc7961b = *(char *)-0x3dc7961b + v7;
    __asm_out_134(67, (int32_t)result);
    return result;
}

// Address range: 0x206afb - 0x206ba9
int64_t function_206afb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    unsigned char v2 = (char)a3; // 0x206b33
    bool v3; // 0x206afb
    char v4 = v3; // 0x206b33
    unsigned char v5 = *(char *)(a1 + 0x2b01e87d) + v4; // 0x206b33
    unsigned char v6 = v2 - v5; // 0x206b33
    bool v7 = v3 ? v5 != -1 | v6 - v4 > v2 : v5 > v2; // 0x206b33
    int64_t v8; // 0x206afb
    if ((int32_t)v8 != -(int32_t)(a4 - 256 * (v8 + (int64_t)v7) & 0xff00 || a4 & 0xffff00ff)) {
        // 0x206b9b
        float80_t v9; // 0x206afb
        *(int16_t *)v8 = (int16_t)v9;
        int64_t result = v8 & 0xe8283625; // 0x206b9e
        int32_t * v10 = (int32_t *)(result + 0x5ba3e4f4); // 0x206ba3
        *v10 = *v10 + (int32_t)a1;
        return result;
    }
    int32_t * v11 = (int32_t *)(v8 + 0x1e8c700); // 0x206b46
    *v11 = *v11 + (int32_t)(int64_t)&v1;
    int64_t result2 = unknown_ffffffffaab67e5b(); // 0x206b55
    uint32_t v12 = (int32_t)a4 % 32; // 0x206b5a
    if (v12 != 0) {
        int32_t * v13 = (int32_t *)((v8 & 0xff00 | a3 & -0x10000 | (int64_t)v6) + 31); // 0x206b5a
        uint32_t v14 = *v13; // 0x206b5a
        *v13 = v14 >> v12 | v14 << 32 - v12;
    }
    return result2;
}

// Address range: 0x206bab - 0x206bb7
int64_t function_206bab(int64_t a1) {
    // 0x206bab
    unknown_ffffffff9b108db3(a1);
    return function_ffffffffeecc6c50();
}

// Address range: 0x206bc2 - 0x206bd1
int64_t function_206bc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x206bc2
    int64_t v1; // 0x206bc2
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x206bc2
    *(char *)a3 = *(char *)&v2 + (char)v1;
    bool v3; // 0x206bc2
    return function_ffffffff9037a664((v3 ? -4 : 4) + a1);
}

// Address range: 0x206c41 - 0x206cc5
int64_t function_206c41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x206c41
    int64_t v1; // 0x206c41
    bool v2; // 0x206c41
    int64_t v3 = 2 * v1 + (int64_t)v2; // 0x206c41
    int32_t * v4 = (int32_t *)((v3 & 0xffffffff) + 0x6d5c520a); // 0x206c43
    *v4 = *v4 + (int32_t)a4;
    int64_t v5 = -1 - (int32_t)v1 < (int32_t)v3 ? 219 : 218; // 0x206c4d
    unknown_72dbc057();
    int64_t result = __asm_hlt(a1); // 0x206c56
    if ((char)(v3 - v5) < 0) {
        // 0x206c59
        return result;
    }
    int64_t result2 = unknown_3d2254c0(); // 0x206cba
    *(int32_t *)0x22254ef = *(int32_t *)0x22254ef + (int32_t)a3;
    return result2;
}

// Address range: 0x206cd1 - 0x206d05
int64_t function_206cd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x206cd1
    int64_t v1; // 0x206cd1
    uint64_t v2 = v1 & 0xffffffff ^ 0xe6579333; // 0x206cd1
    char * v3 = (char *)(a3 + 61 + 4 * v2); // 0x206cd6
    *v3 = *v3 + (char)(v2 / 256);
    int32_t * v4 = (int32_t *)(a1 - 0x4cf5ef70); // 0x206cda
    *v4 = *v4 + (int32_t)v1;
    *(int32_t *)0x62fa1a32 = *(int32_t *)0x62fa1a32 + (int32_t)a4;
    return unknown_3021a9f9() + v1 & 0xffffffff;
}

// Address range: 0x206d41 - 0x206d42
int64_t function_206d41(void) {
    // 0x206d41
    int64_t result; // 0x206d41
    return result;
}

// Address range: 0x206d4c - 0x206d57
int64_t function_206d4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0x9d8c444); // 0x206d4e
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x206d4c
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x206d5c - 0x206d65
int64_t function_206d5c(int64_t a1) {
    // 0x206d5c
    int64_t v1; // 0x206d5c
    bool v2; // 0x206d5c
    if (v2) {
        v1 = function_206d41();
    }
    // 0x206d5e
    return v1 & 0xffffffff ^ 0xe747d7ea;
}

// Address range: 0x206d65 - 0x206d6c
int64_t function_206d65(void) {
    // 0x206d65
    return unknown_ffffffff8116f46b();
}

// Address range: 0x206e0a - 0x206e0b
int64_t function_206e0a(int64_t a1) {
    // 0x206e0a
    int64_t result; // 0x206e0a
    return result;
}

// Address range: 0x207034 - 0x207036
int64_t function_207034(int64_t a1, int64_t a2) {
    // 0x207034
    int64_t result; // 0x207034
    return result;
}

// Address range: 0x2070e9 - 0x207106
int64_t function_2070e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2070e9
    float80_t v1; // 0x2070e9
    *(int64_t *)(a4 - 0x60fde7aa) = (int64_t)v1;
    unknown_ffffffffd861ccf6();
    int64_t v2; // 0x2070e9
    *(int32_t *)a1 = *(int32_t *)&v2;
    bool v3; // 0x2070e9
    int64_t v4 = v3 ? -4 : 4; // 0x2070f5
    return unknown_32fb5905(2 * v4 + a1, v4 + a2);
}

// Address range: 0x207106 - 0x207111
int64_t function_207106(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x207106
    int64_t v1; // 0x207106
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a4;
    return function_ffffffffdb2259d1();
}

// Address range: 0x20711e - 0x207121
int64_t function_20711e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20711e
    int64_t result; // 0x20711e
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a2;
    return result;
}

// Address range: 0x207180 - 0x207183
int64_t function_207180(void) {
    // 0x207180
    int64_t result; // 0x207180
    return result;
}

// Address range: 0x20719c - 0x20719d
int64_t function_20719c(void) {
    // 0x20719c
    int64_t result; // 0x20719c
    return result;
}

// Address range: 0x2071ed - 0x20721e
int64_t function_2071ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2071ed
    int64_t v1; // 0x2071ed
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 0x1a0788e4); // 0x2071ed
    *v3 = *v3 + (int32_t)a4;
    int64_t v4 = (v2 + 254) % 256 | v2 & -256; // 0x2071f3
    int32_t * v5 = (int32_t *)v4; // 0x2071f5
    int32_t v6 = (int32_t)v4 + (int32_t)((char)v2 < 2) + *v5; // 0x2071f5
    *v5 = v6;
    if (v6 < 1) {
        function_20719c();
    }
    // 0x2071f9
    __asm_hlt(a5);
    int64_t result = __asm_sti(); // 0x20720a
    *(char *)0x65225a92 = *(char *)0x65225a92 + 66;
    *(char *)a5 = (char)result;
    int64_t v7; // 0x2071ed
    __asm_outsb((int16_t)a3, *(char *)&v7);
    return result;
}

// Address range: 0x38b1a8 - 0x38b1a9
int64_t function_38b1a8(void) {
    // 0x38b1a8
    int64_t result; // 0x38b1a8
    return result;
}

// Address range: 0x38b275 - 0x38b288
int64_t function_38b275(int64_t a1, int64_t a2) {
    // 0x38b275
    int64_t v1; // 0x38b275
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x38b275
    uint32_t v3 = v2 | -0x28fec300; // 0x38b279
    return ((int64_t)(v3 / 256) + (int64_t)v2) % 256 | (int64_t)(v3 & -256);
}

// Address range: 0x38b298 - 0x38b2a1
int64_t function_38b298(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 0x1f5bcbd8); // 0x38b298
    int64_t result; // 0x38b298
    *v1 = *v1 - (char)result;
    return result;
}

// Address range: 0x38b2a3 - 0x38b345
int64_t function_38b2a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x38b2a3
    int64_t v3 = 0x10000 * (int32_t)v2 >> 16; // 0x38b2a3
    char * v4 = (char *)(a6 + 0x13d0008); // 0x38b2a4
    *v4 = -*v4;
    int32_t v5 = *(int32_t *)&v1; // 0x38b2ab
    *(int32_t *)a1 = 2 * v5 | (int32_t)(v5 < 0);
    int64_t v6 = a3 & -256 | 183; // 0x38b2b2
    char * v7 = (char *)(v6 + 39); // 0x38b2b6
    unsigned char v8 = *v7; // 0x38b2b6
    char v9 = a3 / 256; // 0x38b2b6
    unsigned char v10 = v8 + v9; // 0x38b2b6
    *v7 = v10;
    char * v11 = (char *)(v2 + 0x192a00f4); // 0x38b2b9
    *v11 = *v11 + v9 + (char)(v10 < v8);
    int32_t * v12 = (int32_t *)(2 * v2 - 31); // 0x38b2cd
    int32_t v13 = a2; // 0x38b2cd
    *v12 = *v12 + v13;
    int32_t v14 = v6; // 0x38b2d1
    int32_t * v15 = (int32_t *)(v6 + 0x19f62eef);
    int64_t v16 = a4;
    int32_t * v17 = (int32_t *)(v1 + 8 * v3); // 0x38b2d1
    *v17 = *v17 + v14;
    int64_t v18 = unknown_ffffffffe839efdd(); // 0x38b2d7
    *v15 = *v15 + v14;
    int64_t v19 = v16 & -0xff01; // 0x38b2e7
    while ((v18 & 0xbe281d6e) == 0) {
        // 0x38b2d1
        v16 = v19;
        v17 = (int32_t *)(v1 + 8 * v18);
        *v17 = *v17 + v14;
        v18 = unknown_ffffffffe839efdd();
        *v15 = *v15 + v14;
        v19 = v16 & -0xff01;
    }
    int64_t v20 = (int64_t)((int32_t)v2 - *(int32_t *)(8 * v2 + 0x2baa3ff + v3)); // 0x38b2c4
    int32_t * v21 = (int32_t *)(v20 + 0x23f2eb5f); // 0x38b2e9
    *v21 = *v21 + (int32_t)v18;
    int32_t * v22 = (int32_t *)(v6 + 0x5fb84fe); // 0x38b2f4
    *v22 = *v22 + (int32_t)v1;
    __asm_int(22);
    *(int32_t *)-0x173876cdb18e1ad1 = (int32_t)unknown_67ec0f02();
    unknown_ffffffffc8263025();
    int64_t result = unknown_ffffffffd8cad230() + 0x1706a506 & 0xffffffff; // 0x38b331
    int32_t * v23 = (int32_t *)(v20 + a2 & 0xffffffff); // 0x38b336
    *v23 = *v23 + v13;
    uint32_t v24 = (int32_t)v16 % 32; // 0x38b33a
    if (v24 != 0) {
        int32_t * v25 = (int32_t *)(result + 0x1e81b00); // 0x38b33a
        *v25 = *v25 << v24;
    }
    return result;
}

// Address range: 0x38b369 - 0x38b3a0
int64_t function_38b369(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    uint64_t result = unknown_ffffffffbd921570(); // 0x38b369
    int64_t v2; // 0x38b369
    bool v3; // 0x38b369
    if (v3) {
        char * v4 = (char *)(v2 - 0x46fe1800); // 0x38b38d
        *v4 = *v4 + (char)(a4 / 256);
        char * v5 = (char *)(v2 + 0x68543aa4); // 0x38b393
        *v5 = *v5 + (char)result;
        float80_t v6; // 0x38b369
        *(float32_t *)(8 * a2 + 25 + a4) = (float32_t)v6;
        int64_t v7 = v1;
        *(char *)v7 = *(char *)&v1 + (char)v7;
        return result;
    }
    int64_t result2 = result & -256 | (int64_t)*(char *)(result % 256 + v2); // 0x38b384
    char * v8 = (char *)result2; // 0x38b388
    *v8 = *v8 - 22;
    return result2;
}

// Address range: 0x38b3c5 - 0x38b3c8
int64_t function_38b3c5(int64_t a1) {
    // 0x38b3c5
    int64_t result; // 0x38b3c5
    return result;
}

// Address range: 0x38b3e4 - 0x38b3e5
int64_t function_38b3e4(void) {
    // 0x38b3e4
    int64_t result; // 0x38b3e4
    return result;
}

// Address range: 0x38b3ed - 0x38b3f1
int64_t function_38b3ed(int64_t a1) {
    // 0x38b3ed
    int64_t result; // 0x38b3ed
    int32_t * v1 = (int32_t *)(result - 93); // 0x38b3ed
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x38b3f8 - 0x38b405
int64_t function_38b3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38b3f8
    int64_t result; // 0x38b3f8
    if (a4 != 1) {
        result = function_38b3e4();
    }
    // 0x38b3fc
    int64_t v1; // 0x38b3f8
    char * v2 = (char *)(v1 - 96); // 0x38b3fe
    *v2 = 8 * *v2;
    return result;
}

// Address range: 0x38b405 - 0x38b466
int64_t function_38b405(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_wait(); // 0x38b405
    int32_t v1 = a2;
    __asm_outsd((int16_t)a3, v1);
    bool v2; // 0x38b405
    if (v2 || v2) {
        // 0x38b465
        return result;
    }
    int32_t * v3 = (int32_t *)(a3 - 0x497f2bf6); // 0x38b40b
    *v3 = *v3 + v1;
    int64_t v4; // 0x38b405
    int32_t * v5 = (int32_t *)(v4 - 24); // 0x38b411
    *v5 = *v5 ^ (int32_t)v4;
    return result;
}

// Address range: 0x38b4ed - 0x38b4f6
int64_t function_38b4ed(void) {
    // 0x38b4ed
    int64_t result; // 0x38b4ed
    int32_t * v1 = (int32_t *)(result - 0x29f8786c); // 0x38b4ed
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x38b4f6 - 0x38b4f9
int64_t function_38b4f6(void) {
    // 0x38b4f6
    int64_t result; // 0x38b4f6
    return result;
}

// Address range: 0x38b4fa - 0x38b4ff
int64_t function_38b4fa(void) {
    // 0x38b4fa
    return function_ef86482();
}

// Address range: 0x38b544 - 0x38b552
int64_t function_38b544(void) {
    // 0x38b544
    return function_4fd2cc80();
}

// Address range: 0x38b55e - 0x38b561
int64_t function_38b55e(int64_t a1) {
    // 0x38b55e
    int64_t result; // 0x38b55e
    return result;
}

// Address range: 0x38b580 - 0x38b586
int64_t function_38b580(void) {
    // 0x38b580
    int64_t v1; // 0x38b580
    uint64_t v2 = v1;
    return v2 / 2 % 128 | v2 & -256;
}

// Address range: 0x38b596 - 0x38b597
int64_t function_38b596(void) {
    // 0x38b596
    int64_t result; // 0x38b596
    return result;
}

// Address range: 0x38b5a3 - 0x38b5bb
int64_t function_38b5a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x38b5a3
    int64_t v1; // 0x38b5a3
    int64_t result = v1;
    __writegsbyte(result, __readgsbyte(result) + (char)(a3 / 256));
    *(int32_t *)-0x74bbff4c0b4cff4d = (int32_t)result;
    return result;
}

// Address range: 0x38b5bb - 0x38b5be
int64_t function_38b5bb(int64_t a1) {
    // 0x38b5bb
    int64_t result; // 0x38b5bb
    return result;
}

// Address range: 0x38b5d8 - 0x38b5e0
int64_t function_38b5d8(int64_t a1) {
    // 0x38b5d8
    int64_t v1; // 0x38b5d8
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return 0x480390f1;
}

// Address range: 0x38b5e8 - 0x38b5e9
int64_t function_38b5e8(int64_t a1) {
    // 0x38b5e8
    int64_t result; // 0x38b5e8
    return result;
}

// Address range: 0x38b601 - 0x38b603
int64_t function_38b601(void) {
    // 0x38b601
    return function_38b596();
}

// Address range: 0x38b62f - 0x38b645
int64_t function_38b62f(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_7839f3bb(); // 0x38b635
    int64_t v1; // 0x38b62f
    *(int32_t *)(a1 - 0x39b6a568 + v1) = (int32_t)a1;
    return result;
}

// Address range: 0x38b661 - 0x38b662
int64_t function_38b661(int64_t a1) {
    // 0x38b661
    int64_t result; // 0x38b661
    return result;
}

// Address range: 0x38b693 - 0x38b698
int64_t function_38b693(void) {
    // 0x38b693
    return function_223a9f88();
}

// Address range: 0x38b702 - 0x38b705
int64_t function_38b702(int64_t a1) {
    // 0x38b702
    int64_t result; // 0x38b702
    return result;
}

// Address range: 0x38b74d - 0x38b74e
int64_t function_38b74d(void) {
    // 0x38b74d
    int64_t result; // 0x38b74d
    return result;
}

// Address range: 0x38b77f - 0x38b782
int64_t function_38b77f(void) {
    // 0x38b77f
    int64_t result; // 0x38b77f
    return result;
}

// Address range: 0x38b787 - 0x38b788
int64_t function_38b787(int64_t a1) {
    // 0x38b787
    int64_t result; // 0x38b787
    return result;
}

// Address range: 0x38b78c - 0x38b791
int64_t function_38b78c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38b78c
    int64_t result; // 0x38b78c
    return result;
}

// Address range: 0x38b792 - 0x38b7a5
int64_t function_38b792(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38b792
    int64_t result; // 0x38b792
    bool v1; // 0x38b792
    if (a4 == 1 || v1) {
        // 0x38b794
        return result;
    }
    // 0x38b79e
    int64_t v2; // 0x38b792
    int32_t * v3 = (int32_t *)(v2 - 71); // 0x38b7a0
    int32_t v4 = *v3; // 0x38b7a0
    int32_t v5 = v2; // 0x38b7a0
    int32_t v6 = v4 + v5; // 0x38b7a0
    *v3 = v6;
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        result = function_38b74d();
    }
    // 0x38b794
    return result;
}

// Address range: 0x38b7a7 - 0x38b7b9
int64_t function_38b7a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38b7a7
    int64_t result; // 0x38b7a7
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a3;
    char * v2 = (char *)(result - 0x2a798b6d + 8 * result); // 0x38b7b1
    *v2 = *v2 & (char)(result / 256);
    return result;
}

// Address range: 0x38b802 - 0x38b807
int64_t function_38b802(void) {
    // 0x38b802
    return function_40eee4f7();
}

// Address range: 0x38b851 - 0x38b869
int64_t function_38b851(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38b851
    unknown_4eece365();
    return a4 & 0xffffffff;
}

// Address range: 0x38b873 - 0x38b880
int64_t function_38b873(int64_t a1, int64_t a2) {
    // 0x38b873
    int64_t v1; // 0x38b873
    __asm_out_136(-44, (char)v1);
    return function_7144bab0();
}

// Address range: 0x38b880 - 0x38b883
int64_t function_38b880(void) {
    // 0x38b880
    int64_t result; // 0x38b880
    return result;
}

// Address range: 0x38b889 - 0x38b88c
int64_t function_38b889(void) {
    // 0x38b889
    int64_t result; // 0x38b889
    return result;
}

// Address range: 0x38b8bd - 0x38b8d6
int64_t function_38b8bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x38b8bd
    unsigned char v3 = *(char *)(v2 % 256 + v2); // 0x38b8bd
    uint32_t v4 = (int32_t)a4 % 32; // 0x38b8bf
    int64_t v5; // 0x38b8bd
    char v6; // 0x38b8bd
    if (v4 == 0) {
        // 0x38b8bd
        v5 = a2;
        v6 = a2;
    } else {
        uint32_t v7 = (int32_t)a3;
        *(int32_t *)a3 = v7 << 32 - v4 | v7 >> v4;
        v5 = v1;
        v6 = *(char *)&v1;
    }
    *(char *)v5 = v6 + v3;
    int64_t result = (int64_t)v3 | (int64_t)(int32_t)(int16_t)&g6; // 0x38b8d0
    int16_t v8 = a3; // 0x38b8d1
    __asm_out_133(v8, (int32_t)result);
    __asm_outsb(v8, *(char *)&v1);
    return result;
}

// Address range: 0x38b8dc - 0x38b8f1
int64_t function_38b8dc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x38b8dc
    int64_t v1; // 0x38b8dc
    bool v2; // 0x38b8dc
    int64_t v3 = a4 - v1 + (int64_t)v2 & 0xffffffff; // 0x38b8dc
    char * v4 = (char *)(2 * v1 - 0x7075fec3 + v3); // 0x38b8de
    *v4 = *v4 + (char)(a3 / 256);
    char * v5 = (char *)v3; // 0x38b8e5
    *v5 = *v5 & (char)v1;
    int32_t * v6 = (int32_t *)(a2 + 0x6c82f6ea); // 0x38b8e7
    *v6 = *v6 | (int32_t)v1;
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x38b97e - 0x38b9be
int64_t function_38b97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x38b97e
    bool v1; // 0x38b97e
    if (v1) {
        // 0x38b9a8
        return v1 ? 0xffffffff : 0;
    }
    // 0x38b980
    int64_t result; // 0x38b97e
    return result;
}

// Address range: 0x38ba27 - 0x38ba29
int64_t function_38ba27(int64_t a1, int64_t a2) {
    // 0x38ba27
    int64_t v1; // 0x38ba27
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x38ba3d - 0x38ba67
int64_t function_38ba3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38ba3d
    int64_t result; // 0x38ba3d
    int32_t * v1 = (int32_t *)(result - 4); // 0x38ba3d
    *v1 = *v1 + (int32_t)result;
    if (a4 != 0) {
        // 0x38ba42
        return result;
    }
    char * v2 = (char *)(a1 - 0x2ffb9f80); // 0x38ba55
    *v2 = *v2 - 124;
    return a3 & 0xffffffff;
}

// Address range: 0x38ba91 - 0x38ba9b
int64_t function_38ba91(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x1e82cdf + 8 * a3); // 0x38ba91
    int64_t result; // 0x38ba91
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x38ba9d - 0x38babf
int64_t function_38ba9d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38ba9d
    int64_t v1; // 0x38ba9d
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    unknown_bebe2b4();
    return function_ffffffffa58abb38();
}

// Address range: 0x38bad3 - 0x38bad6
int64_t function_38bad3(void) {
    // 0x38bad3
    int64_t v1; // 0x38bad3
    int64_t v2 = v1;
    return (v2 & 0xff00) + v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x38bae5 - 0x38bae6
int64_t function_38bae5(void) {
    // 0x38bae5
    int64_t result; // 0x38bae5
    return result;
}

// Address range: 0x38bb18 - 0x38bb23
int64_t function_38bb18(int64_t a1) {
    // 0x38bb18
    int64_t result; // 0x38bb18
    int16_t v1 = (int16_t)result ^ -0x17de; // 0x38bb1f
    char v2 = __asm_insb(v1); // 0x38bb1f
    char * v3 = (char *)a1; // 0x38bb1f
    *v3 = v2;
    if (result == 0) {
        // ._crit_edge
        return result;
    }
    *v3 = __asm_insb(v1);
    int64_t v4; // 0x38bb18
    int64_t v5 = v4 - 1; // 0x38bb20
    while (v5 != 0) {
        // .lr.ph
        *v3 = __asm_insb(v1);
        v5--;
    }
    // ._crit_edge
    return result;
}

// Address range: 0x38bb23 - 0x38bb28
int64_t function_38bb23(void) {
    // 0x38bb23
    return function_fffffffff53aa362();
}

// Address range: 0x38bb4c - 0x38bb4e
int64_t function_38bb4c(void) {
    // 0x38bb4c
    return function_38bae5();
}

// Address range: 0x38bb81 - 0x38bb86
int64_t function_38bb81(void) {
    // 0x38bb81
    return function_ffffffff9c3aa424();
}

// Address range: 0x38bba1 - 0x38bbd0
int64_t function_38bba1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38bba1
    int64_t v1; // 0x38bba1
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x38bba1
    unknown_3abdd6b7((v2 ? -4 : 4) + a1);
    return unknown_ffffffffa5eaf7d3();
}

// Address range: 0x38bc0e - 0x38bcdf
int64_t function_38bc0e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x38bc0e
    __asm_in((int16_t)a3);
    int64_t result = unknown_29474d15(); // 0x38bc0f
    int64_t v1; // 0x38bc0e
    char * v2 = (char *)(8 * a3 + 0x7801e8e7 + v1); // 0x38bc1a
    char v3 = *v2; // 0x38bc1a
    char v4 = result; // 0x38bc1a
    char v5 = v3 + v4; // 0x38bc1a
    *v2 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x38bc44
        return result;
    }
    int32_t * v6 = (int32_t *)(result + 8 * a4); // 0x38bc2c
    uint32_t v7 = *v6; // 0x38bc2c
    uint32_t v8 = (int32_t)v1; // 0x38bc2c
    uint32_t v9 = v7 + v8; // 0x38bc2c
    *v6 = v9;
    if (v9 < v7 || v9 == 0) {
        char v10 = *(char *)(8 * a1 + 19 + (v1 & -256 | 47)); // 0x38bc33
        int32_t * v11 = (int32_t *)(a2 - 0x179bbde1); // 0x38bc37
        int32_t v12 = *v11; // 0x38bc37
        *v11 = v12 | (int32_t)(a3 & 0xffffff00 | (int64_t)(v10 ^ (char)(a3 % 256)));
        int32_t * v13 = (int32_t *)(a2 + 0x6382da0c); // 0x38bc3d
        *v13 = *v13 + (int32_t)a1;
        return result;
    }
    int32_t * v14 = (int32_t *)(a2 + 0x592e2a40); // 0x38bc88
    int32_t v15 = a4; // 0x38bc88
    *v14 = *v14 + v15;
    uint32_t v16 = *(int32_t *)result ^ v15; // 0x38bc8e
    int32_t * v17 = (int32_t *)(a2 - 0x6001965c); // 0x38bc90
    uint32_t v18 = *v17; // 0x38bc90
    int32_t v19 = v18 - v8; // 0x38bc90
    *v17 = v19;
    int64_t result2 = unknown_6dd4539c(); // 0x38bc96
    if (v18 < v8 || v19 == 0) {
        int32_t * v20 = (int32_t *)((a1 & 0xffffffff) + 0x4b1c53a + 8 * (int64_t)v16); // 0x38bca4
        *v20 = *v20 + (int32_t)result2;
        return result2;
    }
    int64_t result3 = unknown_4a3aa4de(); // 0x38bcd8
    char * v21 = (char *)result3; // 0x38bcdd
    unsigned char v22 = *v21; // 0x38bcdd
    unsigned char v23 = (char)v16 % 32; // 0x38bcdd
    if (v23 != 0) {
        *v21 = v22 << v23 | (char)((int16_t)v22 >> (int16_t)(9 - v23));
    }
    // 0x38bc44
    return result3;
}

// Address range: 0x38bd23 - 0x38bd24
int64_t function_38bd23(void) {
    // 0x38bd23
    int64_t result; // 0x38bd23
    return result;
}

// Address range: 0x38bd38 - 0x38bd49
int64_t function_38bd38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38bd38
    int64_t result; // 0x38bd38
    bool v1; // 0x38bd38
    if (a4 != 1 && !v1) {
        result = function_38bd23();
    }
    // 0x38bd41
    return result;
}

// Address range: 0x38bdef - 0x38bdf0
int64_t function_38bdef(void) {
    // 0x38bdef
    int64_t result; // 0x38bdef
    return result;
}

// Address range: 0x38bdf5 - 0x38bdf6
int64_t function_38bdf5(int64_t a1) {
    // 0x38bdf5
    int64_t result; // 0x38bdf5
    return result;
}

// Address range: 0x38be1e - 0x38be46
int64_t function_38be1e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x38be1e
    int64_t v1; // 0x38be1e
    int64_t v2 = v1;
    int64_t v3 = v2 & 216 | a4 / 256 % 256 | v2 & 0xffffff00; // 0x38be20
    int32_t * v4 = (int32_t *)(a1 + 0x620f790 + 4 * a3); // 0x38be22
    *v4 = *v4 + (int32_t)a2;
    *(int32_t *)a2 = (int32_t)v3;
    char v5 = *(char *)-0x2dbf5ec9; // 0x38be30
    *(char *)-0x2dbf5ec9 = v5 + (char)((uint64_t)v1 / 256);
    *(int64_t *)(v3 + 0x28bb) = 0x345400;
    return function_38bdef();
}

// Address range: 0x38be46 - 0x38be4e
int64_t function_38be46(int64_t a1) {
    // 0x38be46
    return a1 & 0xffffffff;
}

// Address range: 0x38be4e - 0x38be5d
int64_t function_38be4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38be4e
    int64_t v1; // 0x38be4e
    int32_t * v2 = (int32_t *)(v1 + 67 + v1); // 0x38be4e
    uint32_t v3 = *v2; // 0x38be4e
    *v2 = (int32_t)v1;
    bool v4; // 0x38be4e
    return 256 * ((int64_t)v4 - a3 + (int64_t)(v3 / 256)) & 0xff00 | (int64_t)(v3 & -0xff01);
}

// Address range: 0x38bea2 - 0x38bed6
int64_t function_38bea2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38bea2
    int64_t result; // 0x38bea2
    uint64_t v1 = result;
    int64_t v2 = a4;
    char v3 = v1 / 256; // 0x38bea2
    *(char *)0x18c113a9 = *(char *)0x18c113a9 + v3;
    if ((*(char *)(v1 + 118) & (char)v1) != 0) {
        char v4 = *(char *)(a1 + 20); // 0x38bece
        return a4 & 0xffffff00 | (int64_t)((v4 | (char)a4) ^ -97);
    }
    // 0x38beae
    *(char *)a3 = (char)a3 - v3;
    *(char *)v2 = *(char *)&v2 & (char)result;
    *(char *)(a2 + 0x63498b89) = v3;
    return result;
}

// Address range: 0x38bee1 - 0x38bee2
int64_t function_38bee1(void) {
    // 0x38bee1
    int64_t result; // 0x38bee1
    return result;
}

// Address range: 0x38bef3 - 0x38bf0a
int64_t function_38bef3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38bef3
    int64_t v1; // 0x38bef3
    int32_t v2 = v1; // 0x38bef3
    *(int32_t *)a1 = v2;
    bool v3; // 0x38bef3
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x38bef3
    __asm_out((int16_t)a3, (char)v1);
    char v5 = *(char *)-0x74ca4904; // 0x38bef5
    *(char *)-0x74ca4904 = v5 + (char)((uint64_t)v1 / 256);
    float80_t v6; // 0x38bef3
    *(float32_t *)(v4 + 41) = (float32_t)v6;
    *(int32_t *)a3 = (int32_t)v4;
    __asm_out_134(-119, v2);
    return function_38bee1();
}

// Address range: 0x38bf15 - 0x38bf16
int64_t function_38bf15(void) {
    // 0x38bf15
    int64_t result; // 0x38bf15
    return result;
}

// Address range: 0x38bf26 - 0x38bf2b
int64_t function_38bf26(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38bf26
    int64_t result; // 0x38bf26
    *(int32_t *)a1 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x38bf4d - 0x38bf4e
int64_t function_38bf4d(void) {
    // 0x38bf4d
    int64_t result; // 0x38bf4d
    return result;
}

// Address range: 0x38bf56 - 0x38bf57
int64_t function_38bf56(int64_t a1) {
    // 0x38bf56
    int64_t result; // 0x38bf56
    return result;
}

// Address range: 0x38bf5c - 0x38bf81
int64_t function_38bf5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38bf5c
    int64_t v1; // 0x38bf5c
    unsigned char v2 = (char)v1;
    *(char *)a4 = v2 / 128 | 2 * v2;
    uint64_t v3 = unknown_ffffffffb8b0db64(); // 0x38bf5e
    int64_t v4; // 0x38bf5c
    int64_t v5 = v4;
    *(int32_t *)v5 = *(int32_t *)&v4 + (int32_t)v5;
    char v6 = *(char *)(v3 + 0x37958914); // 0x38bf74
    return 256 * (int64_t)((char)(v3 / 256) - v6) | v3 & -0xff01;
}

// Address range: 0x38bf92 - 0x38bf93
int64_t function_38bf92(int64_t a1) {
    // 0x38bf92
    int64_t result; // 0x38bf92
    return result;
}

// Address range: 0x38bfc7 - 0x38c04c
int64_t function_38bfc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38bfc7
    int64_t v1; // 0x38bfc7
    uint64_t v2 = v1;
    *(char *)0x5fd7fd4d = *(char *)0x5fd7fd4d + (char)(v2 / 256);
    return 256 * v2 & 0xff00 | v1;
}

// Address range: 0x38c123 - 0x38c12b
int64_t function_38c123(void) {
    // 0x38c123
    int64_t result; // 0x38c123
    return result;
}

// Address range: 0x38c135 - 0x38c138
int64_t function_38c135(void) {
    // 0x38c135
    int64_t result; // 0x38c135
    return result;
}

// Address range: 0x38c14f - 0x38c150
int64_t function_38c14f(void) {
    // 0x38c14f
    int64_t result; // 0x38c14f
    return result;
}

// Address range: 0x38c156 - 0x38c15e
int64_t function_38c156(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38c156
    int64_t v1; // 0x38c156
    int32_t * v2 = (int32_t *)(v1 + 0x154c800a); // 0x38c156
    *v2 = *v2 + (int32_t)a4;
    return function_38c14f();
}

// Address range: 0x38c17e - 0x38c181
int64_t function_38c17e(void) {
    // 0x38c17e
    int64_t result; // 0x38c17e
    return result;
}

// Address range: 0x3b26b4 - 0x3b26d8
int64_t function_3b26b4(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 72); // 0x3b26b9
    *v1 = 0x400000 * *v1;
    int64_t v2; // 0x3b26b4
    int64_t v3; // 0x3b26b4
    *(char *)a2 = *(char *)&v2 & (char)v3;
    int64_t v4 = v3 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x3b26bf
    *(int32_t *)a1 = (int32_t)v4;
    int64_t v5 = v4 + 0x327e9247; // 0x3b26c1
    int64_t v6 = v5 & 0xffffffff; // 0x3b26c1
    *(int32_t *)0x4d3bd5f2 = *(int32_t *)0x4d3bd5f2 + (int32_t)v3;
    __readfsdword(v6 + 103);
    return v5 & 0xffffff00 | (int64_t)(*(char *)v6 & (char)v5);
}

// Address range: 0x3b2717 - 0x3b272a
int64_t function_3b2717(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b2717
    int64_t v1; // 0x3b2717
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a3;
    *(int16_t *)(v1 - 2) = (int16_t)v1;
    int64_t v2 = v1 + 0x340802e0; // 0x3b271e
    int64_t result = v2 & 0xffffffff; // 0x3b271e
    char * v3 = (char *)result; // 0x3b2723
    *v3 = *v3 ^ (char)v2;
    return result;
}

// Address range: 0x3b272e - 0x3b2736
int64_t function_3b272e(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 73); // 0x3b272e
    int64_t v2; // 0x3b272e
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffe83c5365();
}

// Address range: 0x3b2757 - 0x3b2758
int64_t function_3b2757(void) {
    // 0x3b2757
    int64_t result; // 0x3b2757
    return result;
}

// Address range: 0x3b27a6 - 0x3b27a7
int64_t function_3b27a6(int64_t a1) {
    // 0x3b27a6
    int64_t result; // 0x3b27a6
    return result;
}

// Address range: 0x3b27ba - 0x3b27d4
int64_t function_3b27ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b27ba
    int64_t v1; // 0x3b27ba
    int32_t * v2 = (int32_t *)(a4 - 128 + 4 * v1); // 0x3b27bc
    uint32_t v3 = *v2; // 0x3b27bc
    *v2 = v3 / 0x40000000 | 4 * v3;
    char v4 = *(char *)-0x34f76038; // 0x3b27c1
    *(char *)-0x34f76038 = v4 + (char)((uint64_t)v1 / 256);
    return function_3b2757();
}

// Address range: 0x3b2856 - 0x3b2857
int64_t function_3b2856(void) {
    // 0x3b2856
    int64_t result; // 0x3b2856
    return result;
}

// Address range: 0x3b2883 - 0x3b28a7
int64_t function_3b2883(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b2883
    int64_t v1; // 0x3b2883
    int64_t v2 = v1;
    uint32_t v3 = *(int32_t *)(v2 + 96); // 0x3b2888
    int64_t v4 = v2 + 0xe8ab59f4 + (int64_t)((int32_t)v2 < 0x765e5801) & 0xffffffff; // 0x3b288b
    int32_t * v5 = (int32_t *)v4; // 0x3b2890
    int32_t v6 = *v5; // 0x3b2890
    int32_t v7 = v6 + v3; // 0x3b2890
    *v5 = v7;
    int64_t result = v4; // 0x3b2895
    if (v7 < 0 == ((v7 ^ v6) & (v7 ^ v3)) < 0) {
        result = function_3b2856();
    }
    // 0x3b2897
    *(char *)-0x1d8df05d = *(char *)-0x1d8df05d + (char)(v3 / 256);
    return result;
}
