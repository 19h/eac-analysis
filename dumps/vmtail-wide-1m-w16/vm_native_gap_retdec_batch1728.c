/*
 * Targeted RetDec C for native executable gap queue batch 1728.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x664e3-0x666e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x666e3-0x668e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x668e3-0x66ae3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x66ae3-0x66c36 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1885-0x1a1a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1a85-0x1a1c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1c85-0x1a1e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dfe5a-0x1e005a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e005a-0x1e025a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e025a-0x1e045a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e045a-0x1e05a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x295ab8-0x295cb8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x295db8-0x295eb8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x295eb8-0x2960b8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2960b8-0x2961e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b4da4-0x3b4fa4 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g8;
extern int g9;
extern int g10;
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

int64_t function_1a1885(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a1898(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a19bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a1ae7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1a1c7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dfe5a(void);
int64_t function_1dfe6b(void);
int64_t function_1dfe6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dfe7a(void);
int64_t function_1dfe7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dff1e(void);
int64_t function_1dff32(void);
int64_t function_1dff4f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1dff8d(void);
int64_t function_1dff96(void);
int64_t function_1e0013(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e0053(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result, int64_t a7);
int64_t function_1e01bb(int64_t a1);
int64_t function_1e022c(int64_t a1, int64_t a2);
int64_t function_1e027b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e035f(void);
int64_t function_1e0375(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e0391(int64_t a1);
int64_t function_1e03d4(void);
int64_t function_1e0447(int64_t a1);
int64_t function_1e0458(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e04cc(void);
int64_t function_1e050f(void);
int64_t function_1e0523(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e0567(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e0581(void);
int64_t function_27690ac3();
int64_t function_290263();
int64_t function_295ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_295b14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_295b28(int64_t a1);
int64_t function_295b66(int64_t a1);
int64_t function_295b7c(int64_t a1);
int64_t function_295b85(int64_t a1);
int64_t function_295bae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_295bee(int64_t a1);
int64_t function_295bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_295c69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_295db8(void);
int64_t function_295dd5(void);
int64_t function_295e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_295e84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_295f04(void);
int64_t function_295f28(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_296081(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29608e(void);
int64_t function_29609d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2960c1(void);
int64_t function_2960d7(int64_t a1);
int64_t function_2960ef(void);
int64_t function_296113(void);
int64_t function_29612c(void);
int64_t function_296161(void);
int64_t function_2961a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3306841f();
int64_t function_3b4d3c();
int64_t function_3b4da4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3b4e7a(void);
int64_t function_3b4e86(void);
int64_t function_3b4e91(int64_t a1);
int64_t function_3b4ee7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5e3693a1();
int64_t function_664c7();
int64_t function_664d6();
int64_t function_664e3(void);
int64_t function_664ee(void);
int64_t function_66503(int64_t a1);
int64_t function_66507(void);
int64_t function_66509(void);
int64_t function_6650a(int64_t a1, int64_t a2);
int64_t function_6651c(void);
int64_t function_6654c(void);
int64_t function_6654f(int64_t a1);
int64_t function_66561(void);
int64_t function_66564(int64_t a1, int64_t a2);
int64_t function_6659c(int64_t a1);
int64_t function_665b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_665bf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_665f3(void);
int64_t function_6660b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_66683(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6669f(int64_t a1);
int64_t function_6670b(void);
int64_t function_66750(void);
int64_t function_66752(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_66767(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6682a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_6688c(int64_t a1);
int64_t function_668a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_668b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_668e0(void);
int64_t function_668e9(void);
int64_t function_66961(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6697d(void);
int64_t function_669af(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int32_t a5);
int64_t function_66a00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_66a36(void);
int64_t function_66a4b(int64_t a1);
int64_t function_66b3b(int64_t a1);
int64_t function_66b6a(int64_t a1);
int64_t function_66be0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_66c32(int64_t result);
int64_t function_b1fe75a();
int64_t function_c57b8();
int64_t function_ef476e();
int64_t function_ffffffff971f3c5a();
int64_t function_ffffffffa52f7ed6();
int64_t function_ffffffffa647da19();
int64_t function_ffffffffb23ec211();
int64_t function_ffffffffbd7963fc();
int64_t function_ffffffffc14163af();
int64_t unknown_2a746a46();
int64_t unknown_306052b0();
int64_t unknown_33b98d61();
int64_t unknown_3c24e18c();
int64_t unknown_4ca8befb();
int64_t unknown_646c4f26();
int64_t unknown_689137c0();
int64_t unknown_74e2dbff();
int64_t unknown_ffffffff96488001();
int64_t unknown_ffffffffa870bf46();
int64_t unknown_ffffffffb1580c70();
int64_t unknown_ffffffffdb8eefb2();
int64_t unknown_fffffffff3c79b5b();
int64_t unknown_fffffffff7257b85();

// Address range: 0x664e3 - 0x664ed
int64_t function_664e3(void) {
    // 0x664e3
    int64_t result; // 0x664e3
    char * v1 = (char *)(result + (int64_t)&g9); // 0x664e3
    *v1 = *v1 + (char)result;
    __asm_out(-87, (int32_t)result);
    return result;
}

// Address range: 0x664ee - 0x664f2
int64_t function_664ee(void) {
    // 0x664ee
    return function_664c7();
}

// Address range: 0x66503 - 0x66506
int64_t function_66503(int64_t a1) {
    // 0x66503
    int64_t result; // 0x66503
    return result;
}

// Address range: 0x66507 - 0x66509
int64_t function_66507(void) {
    // 0x66507
    int64_t v1; // 0x66507
    return function_6650a(v1, v1);
}

// Address range: 0x66509 - 0x6650a
int64_t function_66509(void) {
    // 0x66509
    int64_t result; // 0x66509
    return result;
}

// Address range: 0x6650a - 0x6651b
int64_t function_6650a(int64_t a1, int64_t a2) {
    // 0x6650a
    int64_t v1; // 0x6650a
    int32_t * v2 = (int32_t *)(v1 + 2 * a1); // 0x6650e
    uint32_t v3 = *v2; // 0x6650e
    uint32_t v4 = v3 + (int32_t)v1; // 0x6650e
    *v2 = v4;
    int32_t * v5 = (int32_t *)(a2 - 73); // 0x66511
    *v5 = *v5 + 52 + (int32_t)(v4 < v3);
    int64_t result; // 0x6650a
    int64_t v6; // 0x6650a
    if ((*(int32_t *)&v6 || 2 * (int32_t)v1) == 0) {
        int64_t v7 = function_664d6(); // 0x66517
        v6 = v7;
        result = v7;
    } else {
        // 0x6650a
        result = v6;
    }
    // 0x66519
    return result;
}

// Address range: 0x6651c - 0x6651d
int64_t function_6651c(void) {
    // 0x6651c
    int64_t result; // 0x6651c
    return result;
}

// Address range: 0x6654c - 0x6654d
int64_t function_6654c(void) {
    // 0x6654c
    int64_t result; // 0x6654c
    return result;
}

// Address range: 0x6654f - 0x66556
int64_t function_6654f(int64_t a1) {
    // 0x6654f
    int64_t result; // 0x6654f
    return result;
}

// Address range: 0x66561 - 0x66564
int64_t function_66561(void) {
    // 0x66561
    int64_t result; // 0x66561
    return result;
}

// Address range: 0x66564 - 0x66591
int64_t function_66564(int64_t a1, int64_t a2) {
    // 0x66564
    int64_t v1; // 0x66564
    bool v2; // 0x66564
    if (v2 || false) {
        v1 = function_6654f((int64_t)&g10);
    }
    // 0x6656e
    *(char *)-0x60966acd7e94bb1e = (char)v1;
    int64_t v3 = __asm_int3(); // 0x66577
    int32_t * v4 = (int32_t *)(a1 + 0x32430f29); // 0x6657d
    uint32_t v5 = *v4; // 0x6657d
    int64_t v6; // 0x66564
    int32_t v7 = (int64_t)&v6; // 0x6657d
    int32_t v8 = v2; // 0x6657d
    uint32_t v9 = v5 + v7; // 0x6657d
    uint32_t v10 = v9 + v8; // 0x6657d
    int32_t v11 = v10 + v8; // 0x6657d
    *v4 = v10;
    int64_t v12 = v3; // 0x66583
    if (((v11 ^ v5) & (v11 ^ v7)) >= 0) {
        v12 = function_6651c();
    }
    int64_t v13 = v12;
    int64_t v14 = v2 ? v10 <= v5 : v9 < v5 ? 7 : 6; // 0x66586
    return v13 & 0x6aff4300 | v13 + v14 & 143 | -0x6aff4390;
}

// Address range: 0x6659c - 0x665a1
int64_t function_6659c(int64_t a1) {
    // 0x6659c
    int64_t v1; // 0x6659c
    *(char *)a1 = (char)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x665b4 - 0x665bf
int64_t function_665b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x665b4
    int64_t result; // 0x665b4
    bool v1; // 0x665b4
    if (true == !v1) {
        result = function_6654c();
    }
    // 0x665b6
    return result;
}

// Address range: 0x665bf - 0x665ca
int64_t function_665bf(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_iretd(); // 0x665bf
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    __asm_out_133(0, (char)v1);
    return function_27690ac3();
}

// Address range: 0x665f3 - 0x665f4
int64_t function_665f3(void) {
    // 0x665f3
    int64_t result; // 0x665f3
    return result;
}

// Address range: 0x6660b - 0x6664d
int64_t function_6660b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x6660b
    bool v1; // 0x6660b
    bool v2 = v1;
    int64_t v3; // 0x6660b
    if (!v2 || v1 || v1 != v2) {
        // 0x66635
        return v3 & 0xffffffff;
    }
    char * v4 = (char *)(a1 + 87); // 0x66610
    *v4 = -1 - *v4;
    *(int32_t *)(a6 + 0x3181c589) = (int32_t)v3;
    __asm_out_133(73, (char)v3 - 94);
    return __asm_int3();
}

// Address range: 0x66683 - 0x6668f
int64_t function_66683(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x66683
    float80_t v1; // 0x66683
    *(int16_t *)(a4 + 0x5841a70) = (int16_t)v1;
    int64_t v2; // 0x66683
    *(char *)a1 = (char)v2;
    return a3 & 0xffffffff;
}

// Address range: 0x6669f - 0x666ac
int64_t function_6669f(int64_t a1) {
    // 0x6669f
    return function_ffffffffa647da19();
}

// Address range: 0x6670b - 0x6670c
int64_t function_6670b(void) {
    // 0x6670b
    int64_t result; // 0x6670b
    return result;
}

// Address range: 0x66750 - 0x66751
int64_t function_66750(void) {
    // 0x66750
    int64_t result; // 0x66750
    return result;
}

// Address range: 0x66752 - 0x66764
int64_t function_66752(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x66752
    int64_t v1; // 0x66752
    __asm_out_134((int16_t)a3, (char)v1);
    int32_t * v2 = (int32_t *)(a2 - 74); // 0x66753
    bool v3; // 0x66752
    *v2 = (int32_t)v3 - (int32_t)a4 + *v2;
    int64_t v4 = v1 & a3;
    if ((v4 & 256) == 0 == (v4 + (a4 & 0xff00) & 0xff00 || a4 & -0xff01) == 1) {
        function_6670b();
    }
    // 0x6675f
    return function_ffffffffc14163af();
}

// Address range: 0x66767 - 0x667f2
int64_t function_66767(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x66767
    int64_t v1; // 0x66767
    uint64_t v2 = v1;
    bool v3; // 0x66767
    if (v3) {
        // 0x66769
        return function_3306841f();
    }
    if (a4 != 0) {
        int64_t v4 = a4 - 1; // 0x6679e
        if (v4 != 0) {
            function_66750();
        }
        int32_t * v5 = (int32_t *)(a1 - 0x7fc8c504); // 0x667a1
        *v5 = *v5 & 0x3ac295f4;
        __asm_in(24);
        __asm_iretd();
        int64_t result = __asm_hlt(); // 0x667bb
        uint32_t v6 = (int32_t)v4 % 32; // 0x667bc
        if (v6 != 0) {
            *(int32_t *)0x5ce23e7a = *(int32_t *)0x5ce23e7a >> v6;
        }
        return result;
    }
    int64_t v7 = v1 & 0xffffffff; // 0x667c3
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v8 = v3 ? -4 : 4; // 0x667c5
    int64_t v9 = v8 + a1; // 0x667c5
    int64_t v10 = v1 & 0xffffffff ^ 0x4053ecb7; // 0x667c6
    *(char *)v9 = (char)v10;
    int64_t v11 = v9 + (v3 ? -1 : 1); // 0x667cb
    char * v12 = (char *)(v11 + 0x6bb800d8); // 0x667cc
    *v12 = *v12 & (char)a3;
    char v13 = *(char *)(v7 + 0x6f170187); // 0x667d3
    char * v14 = (char *)v11; // 0x667d9
    *v14 = *v14 + (char)v2;
    int32_t * v15 = (int32_t *)(256 * (int64_t)(v13 + (char)(v2 / 256)) | v2 & -0xff01); // 0x667dd
    *v15 = *v15 & -0x253d1f86;
    int32_t * v16 = (int32_t *)(v7 + 10); // 0x667e3
    *v16 = *v16 & (int32_t)(v8 + a2);
    int64_t v17 = v10 + 0x7bd662ad; // 0x667eb
    *v14 = (char)v17;
    return v17 & 0xffffffff;
}

// Address range: 0x6682a - 0x66885
int64_t function_6682a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = -0x5ef05fef; // bp-8, 0x6682a
    int64_t v3; // 0x6682a
    *(int32_t *)(a1 - 89 + 4 * v3) = -0x6f92266;
    char v4 = *(char *)&v1 + (char)a3; // 0x66837
    *(char *)a5 = v4;
    if (v4 == 0) {
        int32_t * v5 = (int32_t *)(v3 + 63); // 0x6687f
        *v5 = 0x200000 * *v5;
        return a2 & 0xffffffff;
    }
    char * v6 = (char *)(a2 - 0x7c6d77c1); // 0x6683e
    *v6 = *v6 + (char)(a3 / 256);
    int32_t * v7 = (int32_t *)((int64_t)&v2 - 52 + 8 * unknown_ffffffffb1580c70()); // 0x66854
    *v7 = *v7 & (int32_t)v3;
    return function_668b9(v3 & 0xffffffff, a2, a3, a4, v1, (int64_t)&g10);
}

// Address range: 0x6688c - 0x66892
int64_t function_6688c(int64_t a1) {
    // 0x6688c
    int64_t result; // 0x6688c
    return result;
}

// Address range: 0x668a4 - 0x668a9
int64_t function_668a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x668a4
    int64_t result; // 0x668a4
    return result;
}

// Address range: 0x668b9 - 0x668dd
int64_t function_668b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)*(int32_t *)(a3 - 0x4d3f84af); // 0x668b9
    int64_t v2 = -40 * v1; // 0x668b9
    int32_t v3 = *(int32_t *)(a4 - 0x6ec49ec7); // 0x668c1
    int64_t v4; // 0x668b9
    uint32_t v5 = (int32_t)v4 - v3 + (int32_t)(v2 != -0x2800000000 * v1 >> 32); // 0x668c1
    int32_t * v6 = (int32_t *)(v2 & 0xfffffff8); // 0x668cc
    uint32_t v7 = *v6; // 0x668cc
    *v6 = v7 / 2 | 0x80000000 * v7;
    __asm_frstor(*(int864_t *)(v4 + 0x78141434));
    return 256 * ((int64_t)(v5 / 256) + (int64_t)v5) & 0xff00 | (int64_t)(v5 & -0xff01);
}

// Address range: 0x668e0 - 0x668e5
int64_t function_668e0(void) {
    // 0x668e0
    int64_t v1; // 0x668e0
    unsigned char v2 = (char)v1;
    char v3 = v2 + 120; // 0x668e0
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v3 == 0) | (int64_t)(v2 < 136) | 128 * (int64_t)(v3 < 0) | 16 * (int64_t)(v2 % 16 > 23) | 4 * (int64_t)(llvm_ctpop_i8(v3) % 2 == 0)) | 512;
}

// Address range: 0x668e9 - 0x668ec
int64_t function_668e9(void) {
    // 0x668e9
    int64_t result; // 0x668e9
    return result;
}

// Address range: 0x66961 - 0x6697a
int64_t function_66961(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x66961
    int64_t v1; // 0x66961
    uint64_t result = v1;
    int64_t v2 = a2;
    char * v3 = (char *)(a3 - 69); // 0x66961
    char v4 = *v3; // 0x66961
    char v5 = result / 256; // 0x66961
    char v6 = v4 + v5; // 0x66961
    *v3 = v6;
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x66966
        return function_5e3693a1();
    }
    // 0x66976
    *(char *)a1 = *(char *)&v2;
    return result;
}

// Address range: 0x6697d - 0x6697f
int64_t function_6697d(void) {
    // 0x6697d
    int64_t result; // 0x6697d
    return result;
}

// Address range: 0x669af - 0x66a00
int64_t function_669af(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int32_t a5) {
    // 0x669af
    int64_t v1; // 0x669af
    int64_t v2 = v1;
    bool v3; // 0x669af
    *(char *)v2 = (char)v3;
    int32_t * v4 = (int32_t *)(a4 + 104); // 0x669b1
    uint32_t v5 = *v4; // 0x669b1
    uint32_t v6 = v5 + (int32_t)v1; // 0x669b1
    *v4 = v6;
    char * v7 = (char *)((v2 - (v6 < v5 ? 179 : 178)) % 256 | v2 & -256); // 0x669b6
    *v7 = *v7 + (char)(a3 / 256);
    unknown_ffffffffdb8eefb2();
    int64_t result = v1 & 0xffffffff; // 0x669ef
    if (v1 != __readfsqword(40)) {
        // 0x669f1
        __stack_chk_fail();
        result = (int64_t)&g10;
    }
    // 0x669f6
    return result;
}

// Address range: 0x66a00 - 0x66a36
int64_t function_66a00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x66a00
    __readfsqword(40);
    return function_290263();
}

// Address range: 0x66a36 - 0x66a3c
int64_t function_66a36(void) {
    // 0x66a36
    int64_t result; // 0x66a36
    return result;
}

// Address range: 0x66a4b - 0x66a56
int64_t function_66a4b(int64_t a1) {
    // 0x66a4b
    int64_t result; // 0x66a4b
    return result;
}

// Address range: 0x66b3b - 0x66b44
int64_t function_66b3b(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x5a7af1cf); // 0x66b3b
    int64_t result; // 0x66b3b
    *v1 = *v1 | (int32_t)result;
    return result;
}

// Address range: 0x66b6a - 0x66b6b
int64_t function_66b6a(int64_t a1) {
    // 0x66b6a
    int64_t result; // 0x66b6a
    return result;
}

// Address range: 0x66be0 - 0x66c31
int64_t function_66be0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x66be0
    int64_t result; // 0x66be0
    bool v1; // 0x66be0
    if (v1) {
        // 0x66c28
        return result;
    }
    // 0x66be2
    int64_t v2; // 0x66be0
    *(int32_t *)a1 = (int32_t)v2 + (int32_t)a1;
    char * v3 = (char *)(a1 + 103); // 0x66be4
    *v3 = *v3 + (char)v2;
    *(char *)0xa42676640c053f3 = (char)a4;
    result = a4 & 0xffffffff;
    if (v2 != __readfsqword(40)) {
        // 0x66c23
        __stack_chk_fail();
        result = (int64_t)&g10;
    }
    // 0x66c28
    return result;
}

// Address range: 0x66c32 - 0x66c36
int64_t function_66c32(int64_t result) {
    // 0x66c32
    return result;
}

// Address range: 0x1a1885 - 0x1a1898
int64_t function_1a1885(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a1885
    int64_t v1; // 0x1a1885
    return function_c57b8(a1, a2, a3, a4, a6, v1);
}

// Address range: 0x1a1898 - 0x1a19bc
int64_t function_1a1898(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a1898
    return function_c57b8(a1, a2, a3, a4, a5, 0x1cce05ca);
}

// Address range: 0x1a19bc - 0x1a1ae7
int64_t function_1a19bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a19bc
    int64_t v1; // bp-40, 0x1a19bc
    int64_t v2 = (int64_t)&v1; // 0x1a1a31
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1a1a3a
    *v3 = 0x190164b1;
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x1a1a3d
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x1a1a41
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x1a1a44
    *v6 = v4;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x1a1a50
    *v3 = v7;
    *v5 = v4;
    *(int64_t *)(v2 + 8) = *v3;
    *v5 = 0x5ee06f00;
    *v6 = v7;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v5 = v4;
    *v6 = v2;
    *(int64_t *)(v2 - 32) = *v5;
    *v3 = v1;
    *v5 = v1;
    int64_t v8; // 0x1a19bc
    return function_c57b8(a1, a2, a3, a4, v8, v8);
}

// Address range: 0x1a1ae7 - 0x1a1c7b
int64_t function_1a1ae7(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x35c2a762; // bp-32, 0x1a1b99
    int64_t v2 = (int64_t)&v1; // 0x1a1be3
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1a1c02
    *v3 = a3;
    int64_t v4 = v2 + 16; // 0x1a1c0b
    *(int64_t *)v4 = v1;
    *(int64_t *)(v2 + 32) = 310;
    *v3 = v2;
    v1 = v4;
    int64_t v5 = v2 + 8; // 0x1a1c55
    v1 = *(int64_t *)v5;
    *v3 = v5;
    int64_t v6; // 0x1a1ae7
    return function_c57b8(a1, a2, v6, v6, v6, v6);
}

// Address range: 0x1a1c7b - 0x1a1da0
int64_t function_1a1c7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a1c7b
    int64_t v1; // 0x1a1c7b
    return function_c57b8(310, a2, a3, 0x2df9f5c2, a5, v1);
}

// Address range: 0x1dfe5a - 0x1dfe60
int64_t function_1dfe5a(void) {
    // 0x1dfe5a
    int64_t result; // 0x1dfe5a
    *(int32_t *)result = 0x353a4f47;
    return result;
}

// Address range: 0x1dfe6b - 0x1dfe6c
int64_t function_1dfe6b(void) {
    // 0x1dfe6b
    int64_t result; // 0x1dfe6b
    return result;
}

// Address range: 0x1dfe6e - 0x1dfe71
int64_t function_1dfe6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1dfe6e
    int64_t result; // 0x1dfe6e
    *(char *)a4 = (char)result + (char)a3;
    return result;
}

// Address range: 0x1dfe7a - 0x1dfe7c
int64_t function_1dfe7a(void) {
    // 0x1dfe7a
    int64_t result; // 0x1dfe7a
    return result;
}

// Address range: 0x1dfe7e - 0x1dfee5
int64_t function_1dfe7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dfe7e
    int64_t v1; // 0x1dfe7e
    unsigned char v2 = (char)v1;
    bool v3; // 0x1dfe7e
    char v4 = v1 + 58 + (int64_t)v3; // 0x1dfe85
    char v5 = v4 + v2; // 0x1dfe85
    *(char *)a2 = v5;
    int64_t v6; // 0x1dfe7e
    *(int32_t *)a1 = *(int32_t *)&v6;
    int64_t v7 = v3 ? -4 : 4; // 0x1dfe87
    int64_t v8 = v7 + a2; // 0x1dfe87
    v6 = v8;
    if (v5 < 0 == ((v5 ^ v2) & (v5 ^ v4)) < 0 == (v5 != 0)) {
        function_1dfe6b();
    }
    uint64_t v9 = __asm_wait(v7 + a1, v8); // 0x1dfe9e
    int32_t * v10 = (int32_t *)v9; // 0x1dfeb6
    *v10 = *v10 + (v5 < v2 ? -23 : -24);
    int32_t * v11 = (int32_t *)(v9 + 0x50f07e66); // 0x1dfeb9
    *v11 = *v11 + (int32_t)a4;
    __asm_outsd((int16_t)a3, *(int32_t *)v6);
    *(char *)v9 = -25;
    unsigned char v12 = *(char *)(v9 % 256 + 0xff00013d); // 0x1dfecf
    int64_t v13 = (v9 & 0xffffff00 | (int64_t)v12) ^ 0xc8d35c22; // 0x1dfed0
    __asm_rcl(*(int32_t *)v13);
    int64_t result = v13 & 0xffff00ff | 0xe700; // 0x1dfed9
    int32_t * v14 = (int32_t *)result; // 0x1dfee0
    *v14 = *v14 + (int32_t)result;
    return result;
}

// Address range: 0x1dff1e - 0x1dff21
int64_t function_1dff1e(void) {
    // 0x1dff1e
    int64_t result; // 0x1dff1e
    return result;
}

// Address range: 0x1dff32 - 0x1dff37
int64_t function_1dff32(void) {
    // 0x1dff32
    return function_b1fe75a();
}

// Address range: 0x1dff4f - 0x1dff5a
int64_t function_1dff4f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1dff4f
    return function_ffffffff971f3c5a();
}

// Address range: 0x1dff8d - 0x1dff8e
int64_t function_1dff8d(void) {
    // 0x1dff8d
    int64_t result; // 0x1dff8d
    return result;
}

// Address range: 0x1dff96 - 0x1dff98
int64_t function_1dff96(void) {
    // 0x1dff96
    return function_1dff8d();
}

// Address range: 0x1e0013 - 0x1e0047
int64_t function_1e0013(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e0013
    int64_t v1; // 0x1e0013
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x1e0013
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x1e0018
    int64_t v4; // 0x1e0013
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    *(char *)v4 = *(char *)&v4 + (char)a4;
    int64_t v6 = v4;
    *(int32_t *)v6 = *(int32_t *)&v4 + (int32_t)v6;
    *(char *)-0x1670f3da = *(char *)-0x1670f3da + (char)(v1 / 256);
    int32_t v7 = *(int32_t *)v3; // 0x1e0025
    unsigned char v8 = *(char *)((int64_t)(v7 | (int32_t)v3) - 52); // 0x1e0027
    uint64_t v9 = v4;
    int64_t v10 = v9 % 256 * (int64_t)v8 | v9 & -0x10000; // 0x1e0027
    v4 = v10;
    char * v11 = (char *)(v1 + 5); // 0x1e0036
    v4 = v10;
    while (true) {
        uint32_t v12 = *(int32_t *)v4; // 0x1e002f
        v4 = 0xd6f9d1ce;
        *v11 = *v11 | (char)a3;
        *(char *)0xd6f9d1ce = *(char *)0xd6f9d1ce + 22;
        *(int32_t *)(int64_t)v12 = -0x29062e32;
    }
}

// Address range: 0x1e0053 - 0x1e01b0
int64_t function_1e0053(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result, int64_t a7) {
    // 0x1e0053
    int64_t v1; // 0x1e0053
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a1;
    *(int32_t *)v3 = 2 * (int32_t)v3;
    uint32_t v5 = *(int32_t *)0x5091b3fd0c677dc7; // 0x1e00b4
    char * v6 = (char *)((int64_t)v5 + 61 + 2 * v4); // 0x1e00bd
    *v6 = *v6 + (char)v5;
    int32_t * v7 = (int32_t *)(v2 + 115); // 0x1e00c1
    uint32_t v8 = *v7; // 0x1e00c1
    int32_t v9 = a3; // 0x1e00c1
    uint32_t v10 = v8 + v9; // 0x1e00c1
    *v7 = v10;
    if (v10 < v8) {
        int64_t v11 = __asm_wait(v4, a2); // 0x1e00c6
        if (((v10 ^ v8) & (v10 ^ v9)) < 0) {
            // 0x1e00c9
            *(char *)v4 = __asm_insb((int16_t)a3);
            return __asm_int1();
        }
        int32_t * v12 = (int32_t *)(v4 + 0x54dabf51); // 0x1e00a2
        *v12 = (int32_t)v11;
        *(char *)0x1d4d78af = *(char *)0x1d4d78af + (char)(v2 / 256);
        return (int64_t)*v12;
    }
    // 0x1e00fe
    if (llvm_ctpop_i8((char)v10) % 2 != 0) {
        // 0x1e0173
        return __asm_in_135((int16_t)(a4 ^ a3));
    }
    // 0x1e0100
    __asm_hlt();
    if (*(int32_t *)&v4 <= (int32_t)a2) {
        // 0x1e0107
        return result;
    }
    // 0x1e0184
    unknown_3c24e18c();
    *(char *)0x1f9dcc92 = *(char *)0x1f9dcc92 + (char)(v2 / 256);
    int64_t v13 = __asm_hlt(); // 0x1e0191
    int32_t * v14 = (int32_t *)(v4 - 0x106042c); // 0x1e0192
    uint32_t v15 = *v14; // 0x1e0192
    uint32_t v16 = v15 + (int32_t)v13; // 0x1e0192
    *v14 = v16;
    char * v17 = (char *)(4 * v4 + 0xb80068bb); // 0x1e019f
    *v17 = *v17 + (char)a3;
    return (v13 + 104 + (int64_t)(v16 < v15)) % 256 | v13 & -256;
}

// Address range: 0x1e01bb - 0x1e01bc
int64_t function_1e01bb(int64_t a1) {
    // 0x1e01bb
    int64_t result; // 0x1e01bb
    return result;
}

// Address range: 0x1e022c - 0x1e0231
int64_t function_1e022c(int64_t a1, int64_t a2) {
    // 0x1e022c
    int64_t result; // 0x1e022c
    return result;
}

// Address range: 0x1e027b - 0x1e035e
int64_t function_1e027b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(a1 - 0x7db38507); // 0x1e027b
    *v2 = *v2 + (char)a3;
    int64_t v3; // 0x1e027b
    __asm_paddq(v3, *(int64_t *)(a4 + 0x542cbb8b));
    unsigned char v4 = *(char *)0xa528490; // 0x1e0289
    unsigned char v5 = (char)((uint64_t)v3 / 256); // 0x1e0289
    char v6 = v4 + v5; // 0x1e0289
    *(char *)0xa528490 = v6;
    int64_t v7 = 0x100000000 * v3 >> 32; // 0x1e028f
    int64_t v8 = -0x2ffe17fe * v7; // 0x1e028f
    int64_t v9 = v8 & 0xfffffffe; // 0x1e028f
    int16_t v10 = a3; // 0x1e0295
    int32_t v11 = __asm_in_135(v10); // 0x1e0295
    uint64_t v12 = (int64_t)v11; // 0x1e0295
    if (v8 != -0x2ffe17fe00000000 * v7 >> 32) {
        // 0x1e02d9
        *(int32_t *)(v9 - 0x25164400) = (int32_t)v1;
        return v12 & -0xff01 | (int64_t)&g3;
    }
    int64_t v13 = v3 & 0xffffffff; // 0x1e0288
    unsigned char v14 = llvm_ctpop_i8(v6); // 0x1e0289
    __asm_out_133(-51, (char)v11);
    *(char *)v13 = __asm_insb(v10);
    *(int32_t *)v13 = *(int32_t *)&v1;
    bool v15; // 0x1e027b
    int64_t v16 = ((1024 * (int64_t)v15 | 0x4000 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v6 == 0) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 + v5 % 16 > 15)) & (int64_t)&g1) == 0 ? 4 : -4; // 0x1e030c
    int64_t v17 = v1 + v16; // 0x1e030c
    v1 = v17;
    if (v14 % 2 == 0) {
        // 0x1e035b
        return __asm_wait(v16 + v13, v17);
    }
    // 0x1e030f
    *(int32_t *)v9 = (int32_t)a4;
    return v12 & -256 | (int64_t)*(char *)(v12 % 256 + v9);
}

// Address range: 0x1e035f - 0x1e0360
int64_t function_1e035f(void) {
    // 0x1e035f
    int64_t result; // 0x1e035f
    return result;
}

// Address range: 0x1e0375 - 0x1e0391
int64_t function_1e0375(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e0375
    int64_t v1; // 0x1e0375
    bool v2; // 0x1e0375
    if (v2) {
        v1 = function_1e035f();
    }
    // 0x1e0377
    int64_t v3; // 0x1e0375
    int32_t * v4 = (int32_t *)(v3 - 0xf64cb51); // 0x1e0377
    *v4 = *v4 + (int32_t)v1;
    int64_t result = unknown_fffffffff7257b85(); // 0x1e038b
    if (((char)v1 ^ -2) < 146) {
        result = function_1e0375(a1, a2, a3, a4, (int64_t)&g10);
    }
    int32_t * v5 = (int32_t *)(4 * result + v3); // 0x1e038d
    *v5 = *v5 + (int32_t)a4;
    return result;
}

// Address range: 0x1e0391 - 0x1e0392
int64_t function_1e0391(int64_t a1) {
    // 0x1e0391
    int64_t result; // 0x1e0391
    return result;
}

// Address range: 0x1e03d4 - 0x1e03da
int64_t function_1e03d4(void) {
    // 0x1e03d4
    int64_t result; // 0x1e03d4
    return result;
}

// Address range: 0x1e0447 - 0x1e0448
int64_t function_1e0447(int64_t a1) {
    // 0x1e0447
    int64_t result; // 0x1e0447
    return result;
}

// Address range: 0x1e0458 - 0x1e046b
int64_t function_1e0458(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_33b98d61(); // 0x1e0458
    unsigned char v2 = *(char *)v1; // 0x1e045d
    char * v3 = (char *)(v1 - 24); // 0x1e045f
    *v3 = *v3 + (char)a4 + (char)(v2 < (char)v1);
    int64_t v4; // 0x1e0458
    uint32_t v5 = *(int32_t *)&v4; // 0x1e0462
    int64_t v6; // 0x1e0458
    uint32_t v7 = v5 + (int32_t)v6; // 0x1e0462
    *(int32_t *)a3 = v7;
    return v1 + 0x131998 + (int64_t)(v7 < v5);
}

// Address range: 0x1e04cc - 0x1e04d1
int64_t function_1e04cc(void) {
    // 0x1e04cc
    return function_ffffffffa52f7ed6();
}

// Address range: 0x1e050f - 0x1e0511
int64_t function_1e050f(void) {
    // 0x1e050f
    int64_t v1; // 0x1e050f
    return function_1e0567(v1, v1, v1, v1);
}

// Address range: 0x1e0523 - 0x1e0565
int64_t function_1e0523(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e0523
    int64_t v1; // 0x1e0523
    uint64_t v2 = v1;
    __asm_out(-73, (int32_t)v1);
    bool v3; // 0x1e0523
    if (v3) {
        int64_t v4 = v3 ? -4 : 4; // 0x1e0563
        return __asm_sti(v4 + a1, v4 + a2);
    }
    // 0x1e0544
    *(char *)-0x40faceb5 = *(char *)-0x40faceb5 + (char)(v2 / 256);
    char * v5 = (char *)((a3 & -0xff01 | (int64_t)&g5) + 6); // 0x1e0552
    *v5 = *v5 + (char)a4;
    int64_t result = v1 & 0x91473460; // 0x1e0555
    int32_t * v6 = (int32_t *)(8 * v2 - 127 + result); // 0x1e0557
    *v6 = *v6 - 61;
    return result;
}

// Address range: 0x1e0567 - 0x1e0580
int64_t function_1e0567(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e0567
    int64_t v1; // 0x1e0567
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x1e0567
    if (v3 != 0) {
        *(int32_t *)v2 = (int32_t)v2 >> v3;
    }
    int64_t v4; // bp-8, 0x1e0567
    return v1 + 0xffffff83 + (int64_t)&v4 & 0xffffffff;
}

// Address range: 0x1e0581 - 0x1e0598
int64_t function_1e0581(void) {
    // 0x1e0581
    int64_t v1; // 0x1e0581
    bool v2; // 0x1e0581
    int32_t v3 = *(int32_t *)(v1 + 0x1e1c61b2 + (int64_t)v2 & 0xffffffff); // 0x1e0586
    int64_t v4 = -0x669ffec3 * (int64_t)v3; // 0x1e0586
    return (v4 + 186) % 256 | v4 & 0xffffff00;
}

// Address range: 0x295ab8 - 0x295b05
int64_t function_295ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x295ab8
    int64_t result2; // 0x295ab8
    uint64_t v1 = result2;
    int64_t v2 = a2;
    bool v3; // 0x295ab8
    if (v3) {
        int32_t v4 = result2; // 0x295ac5
        int32_t * v5 = (int32_t *)(a2 - 103); // 0x295ac7
        *v5 = *v5 + (int32_t)a2;
        *(int32_t *)a1 = v4;
        int64_t v6 = ((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a1; // 0x295acf
        *(char *)-0x11f5d526 = *(char *)-0x11f5d526 + (char)(v1 / 256);
        *(int32_t *)((int64_t)((v4 >> 31) - 34) - 0xf684b40) = (int32_t)v1;
        int64_t result = unknown_74e2dbff(v6); // 0x295af9
        *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)v6;
        return result;
    }
    // 0x295aba
    *(char *)a1 = (char)result2;
    return result2;
}

// Address range: 0x295b14 - 0x295b26
int64_t function_295b14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x329dcd48); // 0x295b14
    uint32_t v2 = *v1; // 0x295b14
    uint32_t v3 = v2 + (int32_t)a2; // 0x295b14
    *v1 = v3;
    int64_t v4; // 0x295b14
    char * v5 = (char *)(v4 - 0x2a7afec6); // 0x295b1a
    *v5 = *v5 + (char)a4 + (char)(v3 < v2);
    return unknown_646c4f26(a1, a2, a3, a4);
}

// Address range: 0x295b28 - 0x295b2b
int64_t function_295b28(int64_t a1) {
    // 0x295b28
    return function_295b7c((int64_t)&g10);
}

// Address range: 0x295b66 - 0x295b67
int64_t function_295b66(int64_t a1) {
    // 0x295b66
    int64_t result; // 0x295b66
    return result;
}

// Address range: 0x295b7c - 0x295b7d
int64_t function_295b7c(int64_t a1) {
    // 0x295b7c
    int64_t result; // 0x295b7c
    return result;
}

// Address range: 0x295b85 - 0x295b86
int64_t function_295b85(int64_t a1) {
    // 0x295b85
    int64_t result; // 0x295b85
    return result;
}

// Address range: 0x295bae - 0x295bc6
int64_t function_295bae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x295bae
    int64_t v1; // 0x295bae
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 0x2c391d43); // 0x295bae
    *v3 = *v3 + (int32_t)a2;
    char * v4 = (char *)(v2 + 0x70ddc00); // 0x295bb4
    *v4 = *v4 + (char)v2;
    int32_t * v5 = (int32_t *)(a3 + 1); // 0x295bbc
    *v5 = *v5 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x295bee - 0x295bef
int64_t function_295bee(int64_t a1) {
    // 0x295bee
    int64_t result; // 0x295bee
    return result;
}

// Address range: 0x295bf8 - 0x295c65
int64_t function_295bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff96488001(); // 0x295bfb
    int64_t v1; // 0x295bf8
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = 2 * v2; // 0x295c0b
    *(int32_t *)v1 = v3;
    bool v4; // 0x295bf8
    if (v3 < v2 || v3 == 0) {
        int64_t v5 = a2 + a1 & 0xffffffff; // 0x295c47
        *(char *)v5 = (char)result;
        return unknown_fffffffff3c79b5b((v4 ? -1 : 1) + v5);
    }
    int32_t v6 = v1; // 0x295c19
    int32_t v7 = v6 >> 1; // 0x295c19
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x295c19
    *(int64_t *)0x1e8c73f = 0x4000 * (int64_t)v4 | 16 * (int64_t)((v2 & 8) != 0) | (int64_t)(v6 % 2 != 0) | 128 * (int64_t)(v6 < 0) | 64 * (int64_t)(v7 == 0) | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 4 * (int64_t)(v8 % 2 == 0) | 2;
    return result;
}

// Address range: 0x295c69 - 0x295c7c
int64_t function_295c69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x295c69
    bool v1; // 0x295c69
    int64_t v2 = v1 ? 0xe8975d78 : 0xe8975d77; // 0x295c6f
    int32_t * v3 = (int32_t *)(a3 - 59); // 0x295c74
    int64_t v4; // 0x295c69
    *v3 = *v3 + (int32_t)v4;
    return (v4 & 0xffff0000 | 256 * (64 * (int64_t)v1 | 128 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1) | 671) - v2 & 0xffffff2f;
}

// Address range: 0x295db8 - 0x295dbf
int64_t function_295db8(void) {
    // 0x295db8
    return unknown_689137c0();
}

// Address range: 0x295dd5 - 0x295dd6
int64_t function_295dd5(void) {
    // 0x295dd5
    int64_t result; // 0x295dd5
    return result;
}

// Address range: 0x295e3d - 0x295e4b
int64_t function_295e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_2a746a46(); // 0x295e40
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result = v1; // 0x295e46
    bool v2; // 0x295e3d
    if (!v2) {
        result = function_295dd5();
    }
    // 0x295e48
    return result;
}

// Address range: 0x295e84 - 0x295e88
int64_t function_295e84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x295e84
    int64_t result; // 0x295e84
    return result;
}

// Address range: 0x295f04 - 0x295f05
int64_t function_295f04(void) {
    // 0x295f04
    int64_t result; // 0x295f04
    return result;
}

// Address range: 0x295f28 - 0x29606b
int64_t function_295f28(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t v4; // 0x295f28
    int32_t * v5 = (int32_t *)(v4 - 0xe65439e); // 0x295f29
    bool v6; // 0x295f28
    *v5 = (int32_t)v6 - (int32_t)a1 + *v5;
    __asm_outsb((int16_t)a3, *(char *)&v2);
    char * v7 = (char *)(v1 - 0x6c4a9f42); // 0x295f36
    char v8 = *v7; // 0x295f36
    char v9 = a3 / 256; // 0x295f36
    char v10 = v8 + v9; // 0x295f36
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x295f36
    *v7 = v10;
    if (v11 % 2 != 0) {
        // 0x295f3e
        *(char *)v1 = *(char *)&v1 + (char)(unknown_ffffffffa870bf46() / 256);
        *(char *)v3 = *(char *)&v3 + v9;
        return v3 & 0xffffffff;
    }
    int64_t v12 = v1 - 1; // 0x295f82
    v1 = v12;
    if (v12 == 0) {
        if (((v10 ^ v8) & (v10 ^ v9)) < 0) {
            // 0x295fac
            int64_t result; // 0x295f28
            return result;
        }
        // 0x295f86
        abort();
        // UNREACHABLE
    }
    int64_t result2 = v4 & 0xe86603af; // 0x295ff0
    int32_t * v13 = (int32_t *)v12; // 0x295ff5
    *v13 = *v13 + (int32_t)v12;
    int64_t v14 = v1; // 0x295ffc
    if (v14 == 0) {
        // 0x295fac
        return result2;
    }
    int32_t v15 = *(int32_t *)&v2; // 0x296000
    *(int32_t *)v2 = v15 + (int32_t)(v14 - 256 * result2 & 0xff00 | v14 & 0xffff00ff);
    return result2;
}

// Address range: 0x296081 - 0x296086
int64_t function_296081(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x296081
    int64_t result; // 0x296081
    return result;
}

// Address range: 0x29608e - 0x29608f
int64_t function_29608e(void) {
    // 0x29608e
    int64_t result; // 0x29608e
    return result;
}

// Address range: 0x29609d - 0x2960a0
int64_t function_29609d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29609d
    int64_t v1; // 0x29609d
    int64_t result = v1;
    bool v2; // 0x29609d
    *(char *)result = (char)result + (char)a4 + (char)v2;
    return result;
}

// Address range: 0x2960c1 - 0x2960c2
int64_t function_2960c1(void) {
    // 0x2960c1
    int64_t result; // 0x2960c1
    return result;
}

// Address range: 0x2960d7 - 0x2960da
int64_t function_2960d7(int64_t a1) {
    // 0x2960d7
    int64_t result; // 0x2960d7
    return result;
}

// Address range: 0x2960ef - 0x2960f1
int64_t function_2960ef(void) {
    // 0x2960ef
    return function_2960c1();
}

// Address range: 0x296113 - 0x296118
int64_t function_296113(void) {
    // 0x296113
    return function_ffffffffb23ec211();
}

// Address range: 0x29612c - 0x296131
int64_t function_29612c(void) {
    // 0x29612c
    return function_ffffffffbd7963fc();
}

// Address range: 0x296161 - 0x296162
int64_t function_296161(void) {
    // 0x296161
    int64_t result; // 0x296161
    return result;
}

// Address range: 0x2961a0 - 0x2961cd
int64_t function_2961a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & -256 | (int64_t)(*(char *)(a1 - 126) | (char)a3); // 0x2961a5
    char * v2 = (char *)v1; // 0x2961aa
    int64_t v3; // 0x2961a0
    *v2 = *v2 + (char)(v3 / 256);
    __asm_out_137((int16_t)v1, (int32_t)v3 | 176);
    int32_t * v4 = (int32_t *)v1; // 0x2961bb
    *v4 = *v4 + (int32_t)a1;
    char v5 = *(char *)0x5e9d0ccc; // 0x2961c5
    *(char *)0x5e9d0ccc = v5 + (char)((uint64_t)v3 / 256);
    return function_296161();
}

// Address range: 0x3b4da4 - 0x3b4e4e
int64_t function_3b4da4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3b4da4
    unknown_306052b0();
    if ((*(char *)(a3 + 0x251485fb) || (char)(a3 / 256)) != 0) {
        // 0x3b4db3
        return function_3b4d3c() | 123;
    }
    // 0x3b4deb
    int64_t v1; // 0x3b4da4
    int32_t * v2 = (int32_t *)(v1 + 118); // 0x3b4ded
    *v2 = *v2 + (int32_t)v1;
    __asm_wait(a1, a2);
    int64_t v3 = __asm_int3(); // 0x3b4df7
    int32_t * v4 = (int32_t *)(a3 & -0xff01); // 0x3b4dfa
    *v4 = *v4 + (int32_t)a1;
    return v3 & -0xff01 | (int64_t)&g8;
}

// Address range: 0x3b4e7a - 0x3b4e7b
int64_t function_3b4e7a(void) {
    // 0x3b4e7a
    int64_t result; // 0x3b4e7a
    return result;
}

// Address range: 0x3b4e86 - 0x3b4e89
int64_t function_3b4e86(void) {
    // 0x3b4e86
    int64_t result; // 0x3b4e86
    return result;
}

// Address range: 0x3b4e91 - 0x3b4ed3
int64_t function_3b4e91(int64_t a1) {
    // 0x3b4e91
    bool v1; // 0x3b4e91
    if (!v1) {
        // 0x3b4ed1
        return function_3b4e7a();
    }
    // 0x3b4e93
    int64_t result; // 0x3b4e91
    return result;
}

// Address range: 0x3b4ee7 - 0x3b4eff
int64_t function_3b4ee7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x16a6545c); // 0x3b4ee7
    int64_t v2; // 0x3b4ee7
    *v1 = *v1 + (int32_t)v2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    unknown_4ca8befb();
    return function_ef476e();
}
