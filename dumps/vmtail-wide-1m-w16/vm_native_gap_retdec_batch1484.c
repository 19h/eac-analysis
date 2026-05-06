/*
 * Targeted RetDec C for native executable gap queue batch 1484.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d0601-0x1d0801 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d0801-0x1d0a01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d0a01-0x1d0c01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d0c01-0x1d0e01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d0e01-0x1d1001 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d1001-0x1d1201 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d1201-0x1d1223 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d1307-0x2d1507 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d1507-0x2d1707 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d1707-0x2d1907 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37411b-0x37431b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37431b-0x37451b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37471b-0x37491b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37491b-0x374b1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x374b1b-0x374d1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x374d1b-0x374d29 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1d0601(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1d0753(void);
int64_t function_1d0758(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1d0769(void);
int64_t function_1d07ae(void);
int64_t function_1d0840(void);
int64_t function_1d084d(void);
int64_t function_1d0863(void);
int64_t function_1d086e(void);
int64_t function_1d0886(int64_t a1);
int64_t function_1d088c(int64_t a1, int64_t a2);
int64_t function_1d08b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d098d(void);
int64_t function_1d09ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1d0a06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d0a24(int64_t a1);
int64_t function_1d0a44(int64_t a1);
int64_t function_1d0a87(int64_t a1);
int64_t function_1d0aad(int64_t a1);
int64_t function_1d0ada(int64_t a1);
int64_t function_1d0b56(void);
int64_t function_1d0bbb(void);
int64_t function_1d0bbc(int64_t a1, int64_t a2);
int64_t function_1d0bd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d0c4b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d0c5d(int64_t a1);
int64_t function_1d0c5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d0c6f(void);
int64_t function_1d0cab(void);
int64_t function_1d0cb0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d0cdc(void);
int64_t function_1d0ce9(void);
int64_t function_1d0d1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d0e86(void);
int64_t function_1d0ebd(void);
int64_t function_1d0ebe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_1d11ce(void);
int64_t function_2d1307(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d13e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d1552(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d1678(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d183f(int64_t a1);
int64_t function_2d1855(int64_t a1);
int64_t function_2d189e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37411b(void);
int64_t function_374124(int64_t a1, int64_t a2);
int64_t function_374179(void);
int64_t function_374191(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3741d6(void);
int64_t function_3741e6(void);
int64_t function_374278(void);
int64_t function_3742e3(void);
int64_t function_3742f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37430a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37438d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3743b0(int64_t a1, int64_t a2);
int64_t function_3743cb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3743d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3743e9(void);
int64_t function_37445c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_374464(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3744ba(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3744d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37471b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_37484b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_374966(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_374ab3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_374c14(void);
int64_t function_374cf7(void);
int64_t function_374d26(void);
int64_t function_55697250();
int64_t function_c4258();
int64_t function_cf3c7();
int64_t function_ffffffff95a352bb();
int64_t function_ffffffffe84fd3cf();
int64_t function_ffffffffe898e0d1();
int64_t function_ffffffffe8b41a11();
int64_t unknown_1d7986cb();
int64_t unknown_1d7ad1f5();
int64_t unknown_291125ff();
int64_t unknown_302ba7d4();
int64_t unknown_3b099ec4();
int64_t unknown_3bbe721d();
int64_t unknown_47c9430();
int64_t unknown_5718976b();
int64_t unknown_6c471eed();
int64_t unknown_6e3996c0();
int64_t unknown_ffffffff84b23ca1();
int64_t unknown_ffffffff8ba938e0();
int64_t unknown_ffffffff9589fdc9();
int64_t unknown_ffffffff9a64dabd();
int64_t unknown_ffffffffab2a8f64();
int64_t unknown_ffffffffb472afbe();
int64_t unknown_ffffffffcbc70e91();
int64_t unknown_ffffffffd08b0e73();
int64_t unknown_ffffffffd193cc55();
int64_t unknown_ffffffffd86c49b9();
int64_t unknown_ffffffffeb10f09e();
int64_t unknown_fffffffff0a78332();
int64_t unknown_fffffffff927b0b3();

// Address range: 0x1d0601 - 0x1d0753
int64_t function_1d0601(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1d0601
    int64_t v1; // 0x1d0601
    __asm_out((int16_t)a3, (int32_t)v1);
    return function_c4258(a1, 0x1ce069, a3, a4, a5, a6, a7);
}

// Address range: 0x1d0753 - 0x1d0758
int64_t function_1d0753(void) {
    // 0x1d0753
    int64_t result; // 0x1d0753
    return result;
}

// Address range: 0x1d0758 - 0x1d0767
int64_t function_1d0758(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1d0758
    int64_t v1; // 0x1d0758
    int64_t v2 = v1;
    *(int32_t *)v2 = *(int32_t *)(int32_t *)&g1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x1d075d
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x1d0758
    int32_t v5 = *(int32_t *)&v4; // 0x1d0760
    return v5 ^ (int32_t)((v2 + a4 / 256) % 256 | v2 & 0xffffff00);
}

// Address range: 0x1d0769 - 0x1d076a
int64_t function_1d0769(void) {
    // 0x1d0769
    int64_t result; // 0x1d0769
    return result;
}

// Address range: 0x1d07ae - 0x1d07b2
int64_t function_1d07ae(void) {
    // 0x1d07ae
    int64_t v1; // 0x1d07ae
    bool v2; // 0x1d07ae
    return (v2 | v2 ? v1 : v1) & 0xffffffff;
}

// Address range: 0x1d0840 - 0x1d0845
int64_t function_1d0840(void) {
    // 0x1d0840
    int64_t v1; // 0x1d0840
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x1d084d - 0x1d084e
int64_t function_1d084d(void) {
    // 0x1d084d
    int64_t result; // 0x1d084d
    return result;
}

// Address range: 0x1d0863 - 0x1d0865
int64_t function_1d0863(void) {
    // 0x1d0863
    return function_1d084d();
}

// Address range: 0x1d086e - 0x1d086f
int64_t function_1d086e(void) {
    // 0x1d086e
    int64_t result; // 0x1d086e
    return result;
}

// Address range: 0x1d0886 - 0x1d0889
int64_t function_1d0886(int64_t a1) {
    // 0x1d0886
    int64_t result; // 0x1d0886
    return result;
}

// Address range: 0x1d088c - 0x1d0896
int64_t function_1d088c(int64_t a1, int64_t a2) {
    // 0x1d088c
    int64_t result; // 0x1d088c
    *(int32_t *)a1 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x1d08b4 - 0x1d0946
int64_t function_1d08b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1d08b4
    int64_t v1; // 0x1d08b4
    int64_t v2 = v1;
    int64_t v3 = unknown_ffffffff9a64dabd(); // 0x1d08b4
    int64_t v4 = v3 & 0xffffffff; // 0x1d08c3
    if ((int32_t)v3 == -0x706570ff) {
        // 0x1d0941
        return function_ffffffff95a352bb();
    }
    // 0x1d08c6
    float80_t v5; // 0x1d08b4
    *(int32_t *)a4 = (int32_t)v5;
    uint32_t v6 = (int32_t)a3; // 0x1d08d0
    int32_t * v7 = (int32_t *)(a3 & 0xffffffff); // 0x1d08d0
    *v7 = *(int32_t *)&v4 | v6;
    __asm_out_133(61, (char)a3);
    uint32_t v8 = *(int32_t *)&v4; // 0x1d08d6
    int32_t v9 = v8 + v6; // 0x1d08d6
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x1d08d6
    *v7 = v9;
    *(char *)(((v2 & 0xff00) + a4 & 0xff00 | v2 & -0xff01) + 51 + v4) = 0;
    int64_t result = a3 & 0xffff00ff | 256 * (64 * (int64_t)(v9 == 0) | (int64_t)(v9 < v8) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v8 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v10 % 2 == 0)) | 512; // 0x1d08df
    if (a4 != 1 && v9 != 0) {
        result = function_1d086e();
    }
    // 0x1d08e1
    return result;
}

// Address range: 0x1d098d - 0x1d0998
int64_t function_1d098d(void) {
    // 0x1d098d
    int64_t v1; // 0x1d098d
    int32_t * v2 = (int32_t *)(v1 + 0x3a8eaf07); // 0x1d098d
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffffe898e0d1();
}

// Address range: 0x1d09ba - 0x1d09e4
int64_t function_1d09ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1d09ba
    int64_t v1; // 0x1d09ba
    uint64_t v2 = v1;
    int64_t v3 = unknown_6e3996c0() & 0xffffffff ^ 0xd1ecc4fb; // 0x1d09c4
    int64_t result = unknown_1d7986cb(v3); // 0x1d09c5
    char * v4 = (char *)(result + 0x3600c00); // 0x1d09ca
    *v4 = *v4 + (char)result;
    char * v5 = (char *)(v2 - 0x62fe1800); // 0x1d09d0
    *v5 = *v5 + (char)(a4 / 256);
    char * v6 = (char *)(v3 - 41); // 0x1d09d6
    *v6 = *v6 + (char)(v2 / 256);
    char * v7 = (char *)(9 * a4); // 0x1d09da
    *v7 = *v7 + (char)v2;
    return result;
}

// Address range: 0x1d0a06 - 0x1d0a0e
int64_t function_1d0a06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d0a06
    int64_t v1; // 0x1d0a06
    return (int64_t)((int32_t)v1 - *(int32_t *)(a4 - 0x1f73ca92));
}

// Address range: 0x1d0a24 - 0x1d0a27
int64_t function_1d0a24(int64_t a1) {
    // 0x1d0a24
    int64_t result; // 0x1d0a24
    return result;
}

// Address range: 0x1d0a44 - 0x1d0a48
int64_t function_1d0a44(int64_t a1) {
    // 0x1d0a44
    int64_t result; // 0x1d0a44
    return result;
}

// Address range: 0x1d0a87 - 0x1d0a8a
int64_t function_1d0a87(int64_t a1) {
    // 0x1d0a87
    int64_t result; // 0x1d0a87
    return result;
}

// Address range: 0x1d0aad - 0x1d0ab3
int64_t function_1d0aad(int64_t a1) {
    // 0x1d0aad
    return __asm_hlt(a1);
}

// Address range: 0x1d0ada - 0x1d0ae3
int64_t function_1d0ada(int64_t a1) {
    // 0x1d0ada
    unknown_ffffffff8ba938e0(a1);
    return __asm_int3();
}

// Address range: 0x1d0b56 - 0x1d0b57
int64_t function_1d0b56(void) {
    // 0x1d0b56
    int64_t result; // 0x1d0b56
    return result;
}

// Address range: 0x1d0bbb - 0x1d0bbc
int64_t function_1d0bbb(void) {
    // 0x1d0bbb
    int64_t result; // 0x1d0bbb
    return result;
}

// Address range: 0x1d0bbc - 0x1d0bcf
int64_t function_1d0bbc(int64_t a1, int64_t a2) {
    // 0x1d0bbc
    float80_t v1; // 0x1d0bbc
    *(int64_t *)(a2 - 0x2acd5143) = (int64_t)v1;
    unknown_ffffffff9589fdc9();
    bool v2; // 0x1d0bbc
    if (!v2) {
        function_1d0b56();
    }
    // 0x1d0bca
    return function_ffffffffe84fd3cf();
}

// Address range: 0x1d0bd3 - 0x1d0c05
int64_t function_1d0bd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x1e8c44d); // 0x1d0bd3
    int64_t v2; // 0x1d0bd3
    *v1 = *v1 + (char)v2;
    if (a4 == 0) {
        function_1d0bbb();
    }
    int64_t v3 = unknown_1d7ad1f5(); // 0x1d0bef
    char * v4 = (char *)(v3 + 0x3601c00); // 0x1d0bf4
    *v4 = *v4 + (char)v3;
    int32_t * v5 = (int32_t *)(v2 + 0x31012900); // 0x1d0bfc
    *v5 = *v5 + (int32_t)v2;
    return function_1d0c6f();
}

// Address range: 0x1d0c4b - 0x1d0c5c
int64_t function_1d0c4b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 88); // 0x1d0c4b
    int64_t v2; // 0x1d0c4b
    *v1 = *v1 + (int32_t)v2;
    int64_t result = v2 | 136; // 0x1d0c50
    *(int32_t *)-0x5e6fe17b7f62730 = (int32_t)result;
    return result;
}

// Address range: 0x1d0c5d - 0x1d0c5e
int64_t function_1d0c5d(int64_t a1) {
    // 0x1d0c5d
    int64_t result; // 0x1d0c5d
    return result;
}

// Address range: 0x1d0c5f - 0x1d0c6f
int64_t function_1d0c5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d0c5f
    *(char *)a3 = (char)a4;
    int64_t result; // 0x1d0c5f
    __asm_out_134(-24, (int32_t)result);
    int32_t * v1 = (int32_t *)(a4 + 0x3182bb0a); // 0x1d0c69
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1d0c6f - 0x1d0c72
int64_t function_1d0c6f(void) {
    // 0x1d0c6f
    int64_t result; // 0x1d0c6f
    return result;
}

// Address range: 0x1d0cab - 0x1d0cae
int64_t function_1d0cab(void) {
    // 0x1d0cab
    int64_t result; // 0x1d0cab
    return result;
}

// Address range: 0x1d0cb0 - 0x1d0cc3
int64_t function_1d0cb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d0cb0
    unknown_ffffffffd86c49b9();
    float80_t v1; // 0x1d0cb0
    *(int64_t *)((a3 & -256 | 60) + 0x359d9bbc) = (int64_t)v1;
    return function_ffffffffe8b41a11();
}

// Address range: 0x1d0cdc - 0x1d0cdf
int64_t function_1d0cdc(void) {
    // 0x1d0cdc
    int64_t result; // 0x1d0cdc
    return result;
}

// Address range: 0x1d0ce9 - 0x1d0cec
int64_t function_1d0ce9(void) {
    // 0x1d0ce9
    int64_t result; // 0x1d0ce9
    return result;
}

// Address range: 0x1d0d1d - 0x1d0da3
int64_t function_1d0d1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d0d1d
    int64_t v1; // 0x1d0d1d
    int64_t v2 = v1;
    bool v3; // 0x1d0d1d
    *(char *)v2 = (char)v2 - 27 + (char)v3;
    char * v4 = (char *)(a4 + 30); // 0x1d0d2b
    *v4 = *v4 + (char)a4;
    int64_t v5; // 0x1d0d1d
    __asm_outsd((int16_t)a3, *(int32_t *)&v5);
    int16_t v6 = 0x3ac3 * (int16_t)v1; // 0x1d0d99
    int64_t v7; // 0x1d0d1d
    int16_t v8 = (int16_t)*(char *)&v7; // 0x1d0d99
    uint16_t v9 = v6 / v8; // 0x1d0d99
    int64_t v10 = 256 * (v6 % v8) | v9 % 256; // 0x1d0d9b
    return 256 * (int64_t)v9 + v10 & 0xff00 | v10 & 0xffff00ff;
}

// Address range: 0x1d0e86 - 0x1d0e87
int64_t function_1d0e86(void) {
    // 0x1d0e86
    int64_t result; // 0x1d0e86
    return result;
}

// Address range: 0x1d0ebd - 0x1d0ebe
int64_t function_1d0ebd(void) {
    // 0x1d0ebd
    int64_t result; // 0x1d0ebd
    return result;
}

// Address range: 0x1d0ebe - 0x1d10ed
int64_t function_1d0ebe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x1d0ebe
    int64_t v1; // 0x1d0ebe
    uint64_t v2 = v1;
    int64_t v3 = a6;
    int64_t v4 = a2;
    int64_t v5 = a1;
    int64_t v6 = unknown_3b099ec4(); // 0x1d0ebe
    int32_t * v7 = (int32_t *)(v6 + 0x1e85d0e); // 0x1d0ec3
    *v7 = *v7 - 0x358ae7f2;
    unsigned char v8 = *(char *)v6; // 0x1d0ecd
    unsigned char v9 = (char)v6; // 0x1d0ecd
    if (((v8 - v9 ^ v8) & (v8 ^ v9)) >= 0) {
        int64_t result = a3 & 0xffffffff; // 0x1d0ed3
        if (*(int32_t *)&v5 >= (int32_t)v6) {
            result = function_1d0ebd();
        }
        int32_t * v10 = (int32_t *)(a4 + 66); // 0x1d0ed5
        *v10 = *v10 + (int32_t)v1;
        return result;
    }
    int32_t * v11 = (int32_t *)(v4 + 30); // 0x1d0f46
    int32_t v12 = v6; // 0x1d0f46
    *v11 = (int32_t)(v8 < v9) - v12 + *v11;
    uint32_t v13 = *(int32_t *)(a3 + 77); // 0x1d0f49
    int64_t v14 = v13; // 0x1d0f49
    int64_t v15 = a4 & -256 | 253; // 0x1d0f4c
    unknown_ffffffffd193cc55(v13);
    __asm_in((int16_t)(v12 >> 31));
    unknown_ffffffffab2a8f64();
    int64_t v16 = __asm_hlt((int64_t)&g2); // 0x1d0f63
    char * v17 = (char *)(v16 - 0x17d53a); // 0x1d0f65
    unsigned char v18 = *v17; // 0x1d0f65
    unsigned char v19 = (char)v16; // 0x1d0f65
    *v17 = v18 - v19;
    *(char *)v14 = *(char *)&v4;
    bool v20; // 0x1d0ebe
    int64_t v21 = v20 ? -1 : 1; // 0x1d0f6c
    uint64_t v22 = v21 + v14; // 0x1d0f6c
    int64_t v23 = v4 + v21; // 0x1d0f6c
    unknown_ffffffffd08b0e73(v22, v23, a8);
    __asm_wait();
    int32_t * v24 = (int32_t *)(v23 - 0x4d524895); // 0x1d0f73
    *v24 = *v24 - (v18 < v19 ? 0x1e8be0b : 0x1e8be0a);
    int64_t v25 = v22 / 2048 % 0x200000; // 0x1d0f7e
    v5 = v25;
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    unknown_ffffffffcbc70e91((int32_t)v25);
    char * v26 = (char *)(v15 + 12); // 0x1d0f90
    char v27 = *v26 + (char)a8; // 0x1d0f90
    *v26 = v27;
    v4 = 0xa09d8c6;
    int64_t result2 = unknown_ffffffffeb10f09e(); // 0x1d0f98
    if (v27 == 0) {
        // 0x1d0fb2
        *(int32_t *)0x7101e89ec600131f = (int32_t)result2;
        return result2;
    }
    char * v28 = (char *)(8 * v15 + 0xa09d8c6); // 0x1d0fa5
    *v28 = *v28 | -20;
    int32_t v29 = v1;
    uint32_t v30 = v29 + 8; // 0x1d0faa
    uint32_t v31 = v30 + v29; // 0x1d0faa
    unsigned char v32 = (char)result2; // 0x1d0fac
    unsigned char v33 = v31 < v30 ? -3 : -4; // 0x1d0fac
    unsigned char v34 = -123 - v33 + v32 + (char)(v31 < v30 | v33 > v32); // 0x1d0fae
    unsigned char v35 = llvm_ctpop_i8(v34); // 0x1d0fae
    int64_t v36 = v34; // 0x1d0fae
    if (v35 % 2 != 0) {
        int64_t result3 = result2 & -256 | v36;
        *(int32_t *)0x7101e89ec600131f = (int32_t)result3;
        return result3;
    }
    int64_t v37 = v31; // 0x1d0faa
    unsigned char v38 = *(char *)0xc8bec88; // 0x1d1016
    int3_t v39; // 0x1d0ebe
    float80_t v40 = __frontend_reg_load_fpr(v39); // 0x1d1019
    __frontend_reg_store_fpr(v39, (float80_t)*(float32_t *)(v4 - 65) / v40);
    uint32_t v41 = *(int32_t *)0xc8becd8; // 0x1d101d
    *(int32_t *)0xc8becd8 = v41 - 122;
    int32_t v42 = v41 > 121 ? 0x1e801e9 : 0x1e801e8; // 0x1d1020
    uint64_t result4 = unknown_47c9430(); // 0x1d102a
    if ((int32_t)((int64_t)v38 * v36 || result2 & 0xffff0000) - v42 != 0x10d60a01) {
        // 0x1d1031
        __asm_out((int16_t)a8, (int32_t)result4);
        char * v43 = (char *)a8; // 0x1d1032
        *v43 = *v43 + (char)result4;
        *(int64_t *)(v37 - 8) = 0x421dba90;
        return result4;
    }
    int64_t v44 = v15 - 1; // 0x1d102f
    int32_t * v45 = (int32_t *)(v15 + 61); // 0x1d108d
    int32_t v46 = v44; // 0x1d108d
    char * v47 = (char *)(2 * v44); // 0x1d1090
    char * v48 = (char *)(v2 - 0x50dab8a8);
    int32_t * v49 = (int32_t *)v44;
    *v45 = *v45 + v46;
    char v50 = *v47; // 0x1d1090
    int32_t v51 = (int32_t)(256 * (int64_t)(v50 & (char)(result4 / 256)) | result4 & 0xffff00ff) - 0x147ff01 | 0x6a263a74; // 0x1d109a
    *(int32_t *)-0x44de3ce1fe1764c7 = v51;
    int32_t v52 = v29; // 0x1d10a8
    int64_t v53 = v37; // 0x1d10a8
    if (v51 >= 0) {
        goto lab_0x1d10aa;
      lab_0x1d10aa:
        // 0x1d10aa
        unknown_fffffffff927b0b3();
        uint32_t v54 = 2 * v52; // 0x1d10b5
        *(int64_t *)(v53 - 8) = v5;
        int64_t v55 = unknown_ffffffffb472afbe(); // 0x1d10b8
        char v56 = __asm_in((int16_t)a8); // 0x1d10bd
        int32_t * v57 = (int32_t *)((int64_t)v54 - 0xefe17ff); // 0x1d10be
        *v57 = *v57 + (v54 < v52 ? 0xc8becd9 : 0xc8becd8);
        return v55 & -256 | (int64_t)v56;
    }
    char v58 = *v48; // 0x1d10c5
    *v48 = v58 - (char)v2;
    int64_t * v59 = (int64_t *)(v53 - 8); // 0x1d10cc
    *v59 = v5;
    unknown_302ba7d4();
    while (v2 < (int64_t)v58) {
        // 0x1d1072
        *(char *)a8 = -4;
        int64_t v60 = v5 - 4; // 0x1d1074
        int64_t v61 = v4 - 4; // 0x1d1074
        v5 = v60;
        v4 = v61;
        int64_t v62 = __asm_sti(v60, v61); // 0x1d1075
        int64_t v63 = *v59; // 0x1d1076
        v53 += 8;
        uint32_t v64 = *v49; // 0x1d107a
        uint32_t v65 = v64 + (int32_t)v60; // 0x1d107a
        *v49 = v65;
        int32_t v66 = v62;
        *(int32_t *)0x4c421885 = *(int32_t *)0x4c421885 + (int32_t)v5;
        int3_t v67; // 0x1d0ebe
        *(int64_t *)(v5 + 0x3a8925e8) = (int64_t)__frontend_reg_load_fpr(v67);
        uint32_t v68 = 0x10000 * v66 >> 16; // 0x1d108a
        *v45 = *v45 + v46;
        char v69 = *v47; // 0x1d1090
        uint32_t v70 = (256 * (int32_t)(v69 & (char)(v68 / 256)) | v68 & -0xff01) - 0x147ff01 | 0x6a263a74; // 0x1d109a
        *(int32_t *)-0x44de3ce1fe1764c7 = v70;
        v67++;
        if (v70 >= 0) {
            // 0x1d108d
            v52 = (int32_t)(v63 | v62) + v66 - v68 + (int32_t)(v65 < v64);
            goto lab_0x1d10aa;
        }
        v58 = *v48;
        *v48 = v58 - (char)v2;
        v59 = (int64_t *)(v53 - 8);
        *v59 = v5;
        unknown_302ba7d4();
    }
    // 0x1d10d5
    *(int16_t *)a8 = (int16_t)__asm_sldt();
    *(int32_t *)-0x3959dec8 = *(int32_t *)-0x3959dec8 + 0xc8becd8;
    return v4 & 0xffffffff;
}

// Address range: 0x1d11ce - 0x1d11d4
int64_t function_1d11ce(void) {
    // 0x1d11ce
    int64_t result; // 0x1d11ce
    return result;
}

// Address range: 0x2d1307 - 0x2d13e4
int64_t function_2d1307(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2d1307
    int64_t v1; // 0x2d1307
    int64_t v2 = v1;
    int64_t v3 = a7;
    *(char *)v2 = 2 * (char)v2;
    char * v4 = (char *)(v2 - 125); // 0x2d1309
    char v5 = a4; // 0x2d1309
    *v4 = *v4 + v5;
    char * v6 = (char *)((v2 & -256 | (int64_t)__asm_in((int16_t)a3)) - 119); // 0x2d130d
    *v6 = *v6 | v5;
    int64_t v7 = (int64_t)&v3; // 0x2d1359
    int64_t v8 = v7 - 16; // 0x2d136a
    *(int64_t *)v8 = v8;
    *(int64_t *)(v7 + 32) = v3;
    int64_t v9 = v7 + 8; // 0x2d13a1
    int64_t * v10 = (int64_t *)v9; // 0x2d13a5
    *(int64_t *)(v7 - 8) = *v10;
    v3 = v9;
    *v10 = v7 + 24;
    return function_cf3c7(a1);
}

// Address range: 0x2d13e4 - 0x2d1552
int64_t function_2d13e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x4b205130; // bp-40, 0x2d144d
    int64_t v2 = (int64_t)&v1; // 0x2d147d
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x2d1485
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2d1485
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2d1489
    *v5 = a1;
    int64_t v6 = v2 - 24; // 0x2d1495
    int64_t * v7 = (int64_t *)v6; // 0x2d1495
    *v7 = a5;
    *v7 = v6;
    bool v8; // 0x2d13e4
    *v5 = 0x4000 * (int64_t)(bool)v8 | 2048 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | (int64_t)v8 | 4 * (int64_t)v8 | 2;
    int64_t v9 = v2 + 8; // 0x2d14f2
    int64_t * v10 = (int64_t *)v9; // 0x2d14f2
    *v10 = *v4;
    *v4 = 0x271e5c53;
    *v5 = v3;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v9;
    v1 = *v10;
    *v4 = v9;
    return function_cf3c7(*v5);
}

// Address range: 0x2d1552 - 0x2d1678
int64_t function_2d1552(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d1552
    return function_cf3c7(a1);
}

// Address range: 0x2d1678 - 0x2d17ee
int64_t function_2d1678(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2d1678
    int64_t v1; // 0x2d1678
    int64_t * v2 = (int64_t *)v1; // 0x2d179a
    *v2 = 0x207064af;
    *(int64_t *)(v1 - 16) = 310;
    *(int64_t *)(v1 + 32) = *v2;
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x2d17b6
    int64_t v4 = *v3; // 0x2d17b6
    *v2 = v4;
    *(int64_t *)(v1 - 8) = v4;
    *v3 = v1 + 24;
    return function_cf3c7(a1);
}

// Address range: 0x2d183f - 0x2d1844
int64_t function_2d183f(int64_t a1) {
    char * v1 = (char *)(a1 + 104); // 0x2d183f
    int64_t v2; // 0x2d183f
    *v1 = *v1 | (char)v2;
    return function_2d189e(a1, v2, (int64_t)&g2);
}

// Address range: 0x2d1855 - 0x2d1858
int64_t function_2d1855(int64_t a1) {
    // 0x2d1855
    int64_t result; // 0x2d1855
    return result;
}

// Address range: 0x2d189e - 0x2d1906
int64_t function_2d189e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d189e
    int64_t result; // 0x2d189e
    return result;
}

// Address range: 0x37411b - 0x374124
int64_t function_37411b(void) {
    // 0x37411b
    return function_374179();
}

// Address range: 0x374124 - 0x37414d
int64_t function_374124(int64_t a1, int64_t a2) {
    // 0x374124
    unknown_fffffffff0a78332();
    int64_t result = __asm_wait(); // 0x374138
    int64_t v1; // 0x374124
    *(char *)a2 = (char)(result | v1);
    int32_t * v2 = (int32_t *)((v1 & 0xffffffff) + 102); // 0x37413f
    *v2 = *v2 & -90;
    *(char *)a1 = __asm_insb((int16_t)v1);
    return result;
}

// Address range: 0x374179 - 0x374188
int64_t function_374179(void) {
    // 0x374179
    int64_t result; // 0x374179
    *(char *)-0x39a0e80 = *(char *)-0x39a0e80 + (char)(result / 256);
    *(char *)(result - 0x3829aef8) = (char)result;
    return result;
}

// Address range: 0x374191 - 0x3741ca
int64_t function_374191(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 22); // 0x374191
    int64_t v2; // 0x374191
    *v1 = *v1 + (int32_t)v2;
    *(char *)a3 = (char)a4;
    int64_t v3 = unknown_ffffffff84b23ca1(); // 0x37419b
    int64_t v4; // 0x374191
    int64_t v5 = (int64_t)&v4; // 0x3741a1
    __asm_out_133(-73, (char)v5);
    *(int32_t *)0xd22eeb2 = *(int32_t *)0xd22eeb2 + (int32_t)a1;
    uint32_t v6 = *(int32_t *)0x77a8e407; // 0x3741ba
    uint32_t v7 = (int32_t)a3; // 0x3741ba
    int32_t v8 = v6 + v7; // 0x3741ba
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x3741ba
    *(int32_t *)0x77a8e407 = v8;
    bool v10; // 0x374191
    *(int64_t *)((v3 & 0xffffffff) - 8) = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 256 * (int64_t)v10 | (int64_t)(v8 < v6) | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v6 % 16 + v7 % 16 > 15) | 2048 * (int64_t)(((v8 ^ v6) & (v8 ^ v7)) < 0) | 4 * (int64_t)(v9 % 2 == 0) | 2;
    return (int64_t)*(int32_t *)(v2 + v5 & 0xffffffff);
}

// Address range: 0x3741d6 - 0x3741da
int64_t function_3741d6(void) {
    // 0x3741d6
    int64_t result; // 0x3741d6
    return result;
}

// Address range: 0x3741e6 - 0x3741e7
int64_t function_3741e6(void) {
    // 0x3741e6
    int64_t result; // 0x3741e6
    return result;
}

// Address range: 0x374278 - 0x374279
int64_t function_374278(void) {
    // 0x374278
    int64_t result; // 0x374278
    return result;
}

// Address range: 0x3742e3 - 0x3742e5
int64_t function_3742e3(void) {
    // 0x3742e3
    return function_374278();
}

// Address range: 0x3742f2 - 0x37430a
int64_t function_3742f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3742f2
    int64_t v1; // 0x3742f2
    char * v2 = (char *)(v1 - 124); // 0x3742f2
    *v2 = *v2 | (char)a3;
    int32_t * v3 = (int32_t *)(8 * a1 - 95 + v1); // 0x3742f5
    *v3 = *v3 / 2;
    int64_t v4 = unknown_291125ff() + 0x107c793; // 0x3742fe
    int32_t * v5 = (int32_t *)(v1 - 102); // 0x374303
    *v5 = *v5 + (int32_t)v4;
    return v4 & 0xffffffff;
}

// Address range: 0x37430a - 0x374327
int64_t function_37430a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x374313
    if (v1 != 0) {
        char * v2 = (char *)(2 * a3 + a2); // 0x374313
        *v2 = *v2 >> v1;
    }
    int64_t result = unknown_3bbe721d(); // 0x374317
    __asm_out_133(-123, (char)result);
    return result;
}

// Address range: 0x37438d - 0x3743b0
int64_t function_37438d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37438d
    int64_t v1; // 0x37438d
    uint64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)0x62e304018011bd04 = (int32_t)v3;
    *(int32_t *)v3 = (int32_t)(v3 ^ v2);
    *(char *)0x2966fbab = *(char *)0x2966fbab + (char)(v2 / 256);
    int64_t v4; // 0x37438d
    *(int32_t *)a4 = *(int32_t *)&v4 + (int32_t)a2;
    return v3 & -256 | (int64_t)__asm_in_135(-117);
}

// Address range: 0x3743b0 - 0x3743c2
int64_t function_3743b0(int64_t a1, int64_t a2) {
    // 0x3743b0
    int64_t v1; // 0x3743b0
    *(char *)(v1 - 103) = (char)v1;
    int64_t v2; // 0x3743b0
    *(int32_t *)a1 = *(int32_t *)&v2 - 24;
    int64_t result; // 0x3743b0
    int64_t v3 = result;
    *(int32_t *)v3 = *(int32_t *)&result + (int32_t)v3;
    return result;
}

// Address range: 0x3743cb - 0x3743d5
int64_t function_3743cb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3743cb
    int64_t v1; // 0x3743cb
    uint64_t v2 = v1;
    unsigned char v3 = (char)(v2 / 256); // 0x3743ce
    unsigned char v4 = *(char *)(a2 + 2) + v3; // 0x3743ce
    return 256 * (int64_t)v4 | v2 & -0x10000 | (v2 - (v4 < v3 ? 96 : 95)) % 256;
}

// Address range: 0x3743d7 - 0x3743e9
int64_t function_3743d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 126); // 0x3743d7
    *v1 = *v1 + (int32_t)a1;
    char * v2 = (char *)(a2 - 0x1bc745c9); // 0x3743da
    int64_t v3; // 0x3743d7
    *v2 = *v2 + (char)v3;
    return v3 & 0xffffffff;
}

// Address range: 0x3743e9 - 0x3743ea
int64_t function_3743e9(void) {
    // 0x3743e9
    int64_t result; // 0x3743e9
    return result;
}

// Address range: 0x37445c - 0x374464
int64_t function_37445c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37445c
    *(char *)a3 = (char)a3;
    int64_t result; // 0x37445c
    return result;
}

// Address range: 0x374464 - 0x374481
int64_t function_374464(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_5718976b(); // 0x374464
    char * v1 = (char *)(a2 + 37); // 0x37446a
    int64_t v2; // 0x374464
    bool v3; // 0x374464
    *v1 = (char)v3 + (char)v2 + *v1;
    int32_t v4 = *(int32_t *)(a2 + 0x359101e8); // 0x37446e
    unsigned char v5 = *(char *)(a1 - 0x172ab85f + (v3 ? -4 : 4)); // 0x374474
    int32_t * v6 = (int32_t *)(int64_t)(v4 | (int32_t)a2); // 0x37447a
    *v6 = *v6 + (int32_t)(a4 & 0xffffff00 | (int64_t)v5);
    __asm_out_134(-27, (int32_t)result);
    return result;
}

// Address range: 0x3744ba - 0x3744c3
int64_t function_3744ba(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3744ba
    int64_t v1; // 0x3744ba
    int16_t v2 = 256 * (int16_t)v1 >> 8; // 0x3744ba
    int64_t v3 = (v1 & 0xffff0000 | (int64_t)(v2 * v2)) + v1; // 0x3744bc
    __asm_out_133(106, (char)v3);
    return v3 & 0xffffffff;
}

// Address range: 0x3744d6 - 0x3744f2
int64_t function_3744d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3744d6
    int64_t v1; // 0x3744d6
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3744d6
    int64_t v3 = v2 ? -4 : 4; // 0x3744d6
    char * v4 = (char *)(2 * v1); // 0x3744d7
    *v4 = *v4 + (char)v1;
    int64_t v5; // 0x3744d6
    unsigned char v6 = *(char *)&v5; // 0x3744da
    unsigned char v7 = v6 + (char)v1; // 0x3744da
    char * v8 = (char *)a3; // 0x3744da
    *v8 = v7;
    unsigned char v9 = *(char *)&v5; // 0x3744dc
    unsigned char v10 = v9 + (char)a4; // 0x3744dc
    unsigned char v11 = v10 + (char)(v7 < v6); // 0x3744dc
    bool v12 = v7 < v6 ? v11 <= v9 : v10 < v9; // 0x3744dc
    *v8 = v11;
    int64_t v13; // 0x3744d6
    *(char *)v13 = *(char *)&v13 - (char)v1 + (char)v12;
    int32_t v14 = *(int32_t *)&v5; // 0x3744e1
    char * v15 = (char *)(v1 - 104); // 0x3744e4
    *v15 = *v15 + (char)(v1 / 256);
    int64_t result = unknown_6c471eed(v3 + a1, v3 + a2, v14 * (int32_t)v1 >> 31); // 0x3744e7
    int32_t * v16 = (int32_t *)(result + 10); // 0x3744ec
    *v16 = *v16 + (int32_t)v1;
    return result;
}

// Address range: 0x37471b - 0x37484b
int64_t function_37471b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x37471b
    int64_t v1; // 0x37471b
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 127); // 0x374727
    *v3 = *v3 + (char)a4;
    return function_c4258(0x6737ba, a2, a7, a4 - 1, a5, a6, v1);
}

// Address range: 0x37484b - 0x374966
int64_t function_37484b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x37484b
    return function_c4258(a1, a2, a3, a4, a5, a6, 0x19a1d31);
}

// Address range: 0x374966 - 0x374ab3
int64_t function_374966(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x374966
    int64_t v1; // bp-40, 0x374966
    v1 = (int64_t)&v1;
    int64_t v2; // 0x374966
    return function_c4258(a1, a2, a3, a4, a5, v2, 0x3738ca);
}

// Address range: 0x374ab3 - 0x374c06
int64_t function_374ab3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x374ab3
    return function_c4258(a1, a2, a3, a4, a5, a6, 0x373af4);
}

// Address range: 0x374c14 - 0x374c19
int64_t function_374c14(void) {
    // 0x374c14
    return function_55697250();
}

// Address range: 0x374cf7 - 0x374cfa
int64_t function_374cf7(void) {
    // 0x374cf7
    int64_t result; // 0x374cf7
    return result;
}

// Address range: 0x374d26 - 0x374d27
int64_t function_374d26(void) {
    // 0x374d26
    int64_t result; // 0x374d26
    return result;
}
