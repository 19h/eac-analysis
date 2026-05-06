/*
 * Targeted RetDec C for native executable gap queue batch 1079.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe3166-0xe3366 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe3366-0xe3566 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe3566-0xe3766 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe3766-0xe3966 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe3966-0xe3b66 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe3b66-0xe3d66 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe3d66-0xe3f66 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe3f66-0xe4166 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41ac40-0x41ae40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41ae40-0x41b040 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41b040-0x41b240 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41b240-0x41b440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41b440-0x41b640 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41b640-0x41b840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41b840-0x41ba40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41ba40-0x41bc40 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1f63d65();
int64_t function_2b64045a();
int64_t function_41ac40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41ac56(void);
int64_t function_41ac5c(int64_t a1);
int64_t function_41ac6c(void);
int64_t function_41ac7f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_41ad38(void);
int64_t function_41ad64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41ade2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41ae00(void);
int64_t function_41ae0c(int64_t a1, int64_t a2);
int64_t function_41ae19(int64_t a1, int64_t a2);
int64_t function_41ae3c(void);
int64_t function_41ae46(void);
int64_t function_41ae8a(void);
int64_t function_41ae97(void);
int64_t function_41aed1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41afd0(int64_t a1);
int64_t function_41b03a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41b055(void);
int64_t function_41b0c5(void);
int64_t function_41b0d9(void);
int64_t function_41b0ea(int64_t a1);
int64_t function_41b137(int64_t a1);
int64_t function_41b155(void);
int64_t function_41b15a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41b202(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41b210(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41b273(void);
int64_t function_41b275(int64_t a1);
int64_t function_41b2a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41b2fc(void);
int64_t function_41b309(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_41b43e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_41b460(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41b468(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41b5c9(void);
int64_t function_41b5d9(void);
int64_t function_41b5ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41b618(int64_t a1);
int64_t function_41b62a(int64_t a1);
int64_t function_41b642(void);
int64_t function_41b653(void);
int64_t function_41b666(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41b68f(void);
int64_t function_41b6e4(int64_t a1, int64_t a2);
int64_t function_41b6fc(void);
int64_t function_41b709(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41b768(void);
int64_t function_41b76b(int64_t a1);
int64_t function_41b79a(int64_t a1);
int64_t function_41b7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41b7d0(int64_t result);
int64_t function_41b7e0(void);
int64_t function_41b7ed(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_41b864(int64_t a1);
int64_t function_41b866(int64_t a1);
int64_t function_41b89a(int64_t a1);
int64_t function_41b8e2(void);
int64_t function_41b8fb(void);
int64_t function_41b903(void);
int64_t function_41b916(int64_t a1);
int64_t function_41b928(void);
int64_t function_41b95d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_41b96b(int64_t a1);
int64_t function_41b98b(void);
int64_t function_41b9ae(void);
int64_t function_41b9c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41bae8(int64_t a1, int64_t a2);
int64_t function_41bb20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41bb49(void);
int64_t function_41bb6d(void);
int64_t function_41bbd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_41bc08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41bc18(void);
int64_t function_41bc26(int64_t a1);
int64_t function_41bc2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41bc58();
int64_t function_423844fe();
int64_t function_63503b24();
int64_t function_e3166(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e3173(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e31cc(void);
int64_t function_e31d6(void);
int64_t function_e31dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_e3235(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e324b(void);
int64_t function_e3251(void);
int64_t function_e3275(int64_t a1);
int64_t function_e3282(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_e33d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e3438(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_e3482(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_e34e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e34f3(void);
int64_t function_e3503(void);
int64_t function_e3516(void);
int64_t function_e353f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_e3614(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e367a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e36ea(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e375d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e376b(void);
int64_t function_e3783(void);
int64_t function_e378a(int64_t a1);
int64_t function_e378d(int64_t a1);
int64_t function_e385b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e3961(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_e3a2e(int64_t a1);
int64_t function_e3a37(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e3ad8(void);
int64_t function_e3ae5(void);
int64_t function_e3b13(int64_t a1);
int64_t function_e3b3e(void);
int64_t function_e3b4e(void);
int64_t function_e3b55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e3c11(void);
int64_t function_e3c78(void);
int64_t function_e3cac(int64_t a1);
int64_t function_e3cfe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e3e0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e3e45(int64_t a1);
int64_t function_e3e4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e3eba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_e3fb3(void);
int64_t function_e3fb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e3fc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e407c(void);
int64_t function_e4090(void);
int64_t function_e40a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e40b7(int64_t a1);
int64_t function_e40df(int64_t a1, int64_t a2);
int64_t function_e40e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e412f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff8b422755();
int64_t function_ffffffffab1bd022();
int64_t function_ffffffffb2a3432f();
int64_t function_ffffffffb44b9281();
int64_t function_ffffffffc5a1ea8d();
int64_t function_fffffffff6a67984();
int64_t unknown_10293768();
int64_t unknown_1689a93b();
int64_t unknown_17b278a0();
int64_t unknown_2618d28a();
int64_t unknown_330ee049();
int64_t unknown_3a370d48();
int64_t unknown_3a96e2ab();
int64_t unknown_3aae98c3();
int64_t unknown_3abff2ec();
int64_t unknown_3d101bc1();
int64_t unknown_3dcb3e90();
int64_t unknown_47102063();
int64_t unknown_4b1453b2();
int64_t unknown_505657c();
int64_t unknown_5291123b();
int64_t unknown_6383d683();
int64_t unknown_68cdb491();
int64_t unknown_6b8a6e09();
int64_t unknown_79293ac6();
int64_t unknown_7b20fc96();
int64_t unknown_7d813255();
int64_t unknown_7dc415e6();
int64_t unknown_afead5();
int64_t unknown_bd232fa();
int64_t unknown_ffffffff8cf1bbb1();
int64_t unknown_ffffffff8d5fe5e5();
int64_t unknown_ffffffff907d656d();
int64_t unknown_ffffffff91e0ad7c();
int64_t unknown_ffffffffa453eeef();
int64_t unknown_ffffffffa8359512();
int64_t unknown_ffffffffac0f9b81();
int64_t unknown_ffffffffac319f90();
int64_t unknown_ffffffffbeb1ab74();
int64_t unknown_ffffffffcee71574();
int64_t unknown_ffffffffcfd8c5a1();
int64_t unknown_ffffffffd30d4c25();
int64_t unknown_ffffffffd3a0256c();
int64_t unknown_ffffffffd3e048e6();
int64_t unknown_ffffffffd507d37b();
int64_t unknown_ffffffffda453994();
int64_t unknown_ffffffffe409173b();
int64_t unknown_ffffffffe90864d3();
int64_t unknown_fffffffff243b451();
int64_t unknown_fffffffffc35c3ba();

// Address range: 0xe3166 - 0xe3172
int64_t function_e3166(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe3166
    return unknown_ffffffff907d656d(a1, a2, a3);
}

// Address range: 0xe3173 - 0xe31a4
int64_t function_e3173(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe3173
    char v1; // 0xe3173
    unsigned char v2 = v1;
    int64_t v3 = unknown_505657c(); // 0xe3176
    uint32_t v4 = (int32_t)a4 % 32; // 0xe317b
    if (v4 != 0) {
        *(int32_t *)-0x17efe67e = *(int32_t *)-0x17efe67e >> v4;
    }
    int32_t * v5 = (int32_t *)(v3 + 55); // 0xe3181
    uint32_t v6 = *v5; // 0xe3181
    uint32_t v7 = v6 + (int32_t)a2; // 0xe3181
    *v5 = v7;
    int64_t v8; // 0xe3173
    char * v9 = (char *)(8 * v8 + 0xae3f6d8); // 0xe3184
    char v10 = v8 / 256; // 0xe3184
    *v9 = *v9 + v10 + (char)(v7 < v6);
    unknown_68cdb491();
    unsigned char v11 = (char)a4; // 0xe3190
    char v12 = v2 + v11; // 0xe3190
    unsigned char v13 = llvm_ctpop_i8(v12); // 0xe3190
    *(char *)0x62d0229f = *(char *)0x62d0229f + v10;
    int64_t v14; // 0xe3173
    return (int64_t)&v14 & -0xff08 | 256 * (64 * (int64_t)(v12 == 0) | (int64_t)(v12 < v2) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v2 % 16 + v11 % 16 > 15) | 4 * (int64_t)(v13 % 2 == 0)) | 512;
}

// Address range: 0xe31cc - 0xe31d1
int64_t function_e31cc(void) {
    // 0xe31cc
    return function_ffffffffab1bd022();
}

// Address range: 0xe31d6 - 0xe31d9
int64_t function_e31d6(void) {
    // 0xe31d6
    int64_t result; // 0xe31d6
    return result;
}

// Address range: 0xe31dc - 0xe322e
int64_t function_e31dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xe31dc
    int64_t v1; // 0xe31dc
    if ((char)(v1 || a4) == 0) {
        // 0xe31e0
        return v1 | a4 % 256;
    }
    int64_t result = unknown_ffffffffd30d4c25(); // 0xe321f
    unsigned char v2 = *(char *)-0x17c4eaf6; // 0xe3227
    *(char *)-0x17c4eaf6 = v2 / 128 | 2 * v2;
    return result;
}

// Address range: 0xe3235 - 0xe324a
int64_t function_e3235(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe3235
    unknown_1689a93b();
    int64_t v1; // 0xe3235
    return (int64_t)&v1;
}

// Address range: 0xe324b - 0xe3251
int64_t function_e324b(void) {
    // 0xe324b
    return unknown_fffffffff243b451();
}

// Address range: 0xe3251 - 0xe3253
int64_t function_e3251(void) {
    // 0xe3251
    int64_t result; // 0xe3251
    return result;
}

// Address range: 0xe3275 - 0xe3280
int64_t function_e3275(int64_t a1) {
    // 0xe3275
    int64_t v1; // 0xe3275
    return 0x10000 * (int32_t)v1 + 0x5e00000 >> 16;
}

// Address range: 0xe3282 - 0xe33cd
int64_t function_e3282(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0xe3282
    int64_t v3 = v2 & 0xffffffff; // 0xe3283
    int64_t v4 = unknown_2618d28a(v3); // 0xe3284
    int32_t * v5 = (int32_t *)(v2 - 105); // 0xe328e
    *v5 = *v5 + (int32_t)a2;
    int64_t v6; // 0xe3282
    float80_t v7; // 0xe3282
    *(int64_t *)(v6 - 0x4285f951) = (int64_t)v7;
    bool v8; // 0xe3282
    int64_t v9 = (v8 ? -1 : 1) + v3; // 0xe3297
    unsigned char v10 = *(char *)(v9 - 24) | (char)(a3 / 256); // 0xe3298
    int64_t v11 = 256 * (int64_t)v10 | a3 & -0xff01; // 0xe3298
    int32_t v12 = v9; // 0xe329b
    int32_t v13 = v11; // 0xe329b
    int32_t v14 = v13 + v12; // 0xe329b
    if (((v14 ^ v12) & (v14 ^ v13)) < 0) {
        // 0xe32a1
        unknown_3a96e2ab(v14);
        *(int32_t *)v6 = *(int32_t *)&v6 - (int32_t)a4;
        return (int64_t)*(int32_t *)-0x63fe17af8102b9c9;
    }
    int64_t v15 = v14; // 0xe329b
    uint64_t v16 = v2 + 8; // 0xe329e
    int64_t result = v16 & 0xffffffff; // 0xe329e
    char * v17 = (char *)(v15 + 1); // 0xe3319
    unsigned char v18 = *v17; // 0xe3319
    char v19 = v18 / 128; // 0xe3319
    *v17 = v19 | 2 * v18;
    if (v14 < 0 == (v18 / 64 % 2 != v19)) {
        // 0xe331e
        return result;
    }
    int32_t * v20 = (int32_t *)(result + 5); // 0xe3362
    uint32_t v21 = *v20; // 0xe3362
    uint32_t v22 = v21 + (int32_t)v16; // 0xe3362
    *v20 = v22;
    int64_t v23 = (v4 + v2 & 0xffffffff) - 8; // 0xe3365
    *(int64_t *)v23 = -0x2720b3e9;
    char * v24 = (char *)(a4 - 0x61d9fef9); // 0xe336a
    *v24 = 2 * *v24 | (char)(v22 < v21);
    int32_t * v25 = (int32_t *)(v6 - 105); // 0xe3371
    *v25 = *v25 + (int32_t)v6;
    int64_t v26 = v6;
    int64_t v27 = (v26 & 0xff00) + v26 & 0xff00 | v26 & -0xff01; // 0xe3375
    v6 = v27;
    int64_t v28 = v11 & -256; // 0xe337e
    int64_t v29 = v28 | 232; // 0xe337e
    int32_t * v30 = (int32_t *)(v27 + 122); // 0xe3380
    *v30 = *v30 + (int32_t)v1;
    if (result != 0) {
        int32_t * v31 = (int32_t *)(4 * v6 + v29); // 0xe3389
        *v31 = *v31 >> 1;
        int64_t v32 = unknown_ffffffffda453994(); // 0xe338e
        char * v33 = (char *)((v6 / 256 % 256 | v28) + 0x7901e898); // 0xe339a
        *v33 = *v33 & v10;
        *(int32_t *)(v15 - 0x4c115283) = (int32_t)v23;
        return v32 & 0x6ca3b854 | 0x935c47ab;
    }
    // 0xe33aa
    unknown_4b1453b2();
    char * v34 = (char *)(v1 - 0x51da61c2); // 0xe33b1
    *v34 = *v34 + (char)v2;
    int64_t v35 = unknown_3d101bc1(); // 0xe33ba
    int32_t * v36 = (int32_t *)(v29 - 26); // 0xe33c0
    uint32_t v37 = *v36; // 0xe33c0
    int32_t v38 = v29; // 0xe33c0
    uint32_t v39 = v37 + v38; // 0xe33c0
    *v36 = v39;
    int32_t * v40 = (int32_t *)(v1 + 0x1b00eeb5 + 2 * v6); // 0xe33c5
    *v40 = *v40 + v38;
    __asm_outsd((int16_t)v29, *(int32_t *)&v1);
    return (v35 + v16 / 256 + (int64_t)(v39 < v37)) % 256 | v35 & -256;
}

// Address range: 0xe33d5 - 0xe3435
int64_t function_e33d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe33d5
    int64_t v1; // 0xe33d5
    int32_t * v2 = (int32_t *)(v1 - 0x28b4d100); // 0xe33d5
    *v2 = 2 * *v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0xe33e1
    int64_t result; // 0xe33d5
    bool v4 = (int32_t)result < 0xe509da01; // 0xe33e1
    if (v3 != 0) {
        int32_t * v5 = (int32_t *)(result + a4); // 0xe33e1
        uint32_t v6 = *v5; // 0xe33e1
        uint32_t v7 = v3 - 1; // 0xe33e1
        *v5 = v6 << v3 | (int32_t)((int64_t)v6 >> (int64_t)(33 - v3)) | (int32_t)((int32_t)result < 0xe509da01) << v7;
        v4 = (v6 & 0x80000000 >> v7) != 0;
    }
    __asm_fldenv(*(int224_t *)(a4 - 108));
    if (v3 != 0) {
        int32_t * v8 = (int32_t *)(v1 - 0x39cef48d); // 0xe33e7
        uint32_t v9 = *v8; // 0xe33e7
        *v8 = v9 >> v3 | (int32_t)v4 << 32 - v3 | (int32_t)((int64_t)v9 << (int64_t)(33 - v3));
    }
    if (a4 == 0) {
        // 0xe3430
        *(char *)64 = *(char *)64 + (char)a3;
        bool v10; // 0xe33d5
        int32_t * v11 = (int32_t *)((v10 ? -4 : 4) + a1); // 0xe3433
        *v11 = -*v11;
        return result;
    }
    int32_t * v12 = (int32_t *)(a3 + 1); // 0xe33f3
    *v12 = *v12 + (int32_t)v1;
    int64_t v13 = result;
    *(char *)v13 = *(char *)&result + (char)v13;
    return result;
}

// Address range: 0xe3438 - 0xe346a
int64_t function_e3438(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = unknown_3abff2ec(); // 0xe343a
    int64_t v4; // 0xe3438
    int64_t v5 = (((char)v4 < (char)v4 ? 186 : 185) + v3) % 256 | v3 & -256; // 0xe343f
    char v6 = *(char *)(a2 + 0x3d000d8f); // 0xe3441
    int32_t * v7 = (int32_t *)(a1 + 0x3c96cb0a); // 0xe3447
    *v7 = *v7 + (int32_t)v5;
    *(char *)v2 = *(char *)&v2 & (char)v4;
    *(int32_t *)(v5 + 5) = -0xca6cd5c;
    __asm_iretd(v2);
    int32_t v8 = *(int32_t *)&v1; // 0xe345f
    *(int32_t *)v1 = v8 + (int32_t)(256 * (int64_t)(v6 | (char)(a3 / 256)) | a3 & 0xffff00ff);
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0xe3482 - 0xe34b9
int64_t function_e3482(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0xe3482
    int64_t v1; // 0xe3482
    int32_t * v2 = (int32_t *)(v1 - 0x79a20cfd); // 0xe3482
    *v2 = *v2 + (int32_t)a3;
    int64_t v3 = unknown_3dcb3e90(); // 0xe348a
    uint64_t v4 = a3 + a1; // 0xe3491
    uint32_t v5 = (int32_t)a1; // 0xe3493
    uint32_t v6 = *(int32_t *)(a2 + 85) + v5; // 0xe3493
    char v7 = *(char *)(v1 - 0x17a82300); // 0xe3498
    uint64_t v8 = (v3 + v1 & 0xffff00ff | (int64_t)(int32_t)&g1) + ((a4 - a3 / 256) % 256 | a4 & 0xffffff00); // 0xe349e
    __asm_out_133(-126, (int32_t)v8);
    char * v9 = (char *)((int64_t)v6 + 0x7601e8d6); // 0xe34a5
    *v9 = (char)(v8 / 256) ^ 48 | *v9;
    int32_t * v10 = (int32_t *)(256 * (int64_t)(v7 + (char)(v4 / 256) + (char)(v6 < v5)) | v4 & 0xffff00ff); // 0xe34ab
    *v10 = *v10 + v6;
    return (int64_t)*(int32_t *)0x1901e88788f19b44;
}

// Address range: 0xe34e9 - 0xe34ef
int64_t function_e34e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 10); // 0xe34e9
    int64_t result; // 0xe34e9
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xe34f3 - 0xe34f6
int64_t function_e34f3(void) {
    // 0xe34f3
    int64_t result; // 0xe34f3
    return result;
}

// Address range: 0xe3503 - 0xe3505
int64_t function_e3503(void) {
    // 0xe3503
    int64_t v1; // 0xe3503
    return function_e353f(v1, v1, v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0xe3516 - 0xe3518
int64_t function_e3516(void) {
    // 0xe3516
    int64_t result; // 0xe3516
    return result;
}

// Address range: 0xe353f - 0xe35b2
int64_t function_e353f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xe353f
    __asm_in_134(82);
    int64_t v1 = unknown_330ee049(); // 0xe3543
    *(int32_t *)a3 = (int32_t)a3 + (int32_t)a1;
    int64_t v2 = v1 & 0x66810254; // 0xe354a
    int64_t v3 = v2 | 0x997efdab; // 0xe354a
    char * v4 = (char *)(a1 - 109); // 0xe354f
    int64_t v5; // 0xe353f
    *v4 = *v4 + (char)(v5 / 256);
    char * v6 = (char *)v3; // 0xe3552
    *v6 = *v6 + (char)v3;
    uint64_t v7 = v2 | 0xf97ffdff; // 0xe3554
    int32_t * v8 = (int32_t *)(v5 + 0xffffffb1 & 0xffffffff); // 0xe3559
    int32_t v9 = *v8 + 0x3dc0c18; // 0xe3559
    *v8 = v9;
    if (v9 >= 0) {
        // 0xe3563
        __asm_out_135((int16_t)a3, -1);
        return v7 / 2;
    }
    int32_t * v10 = (int32_t *)(a5 + 0x3601e896); // 0xe359d
    *v10 = *v10 + (int32_t)v5;
    int64_t result = v7 & 0xffffff51; // 0xe35a4
    char * v11 = (char *)(result + 0x1e88397); // 0xe35ac
    *v11 = *v11 + (char)(v7 / 256);
    return result;
}

// Address range: 0xe3614 - 0xe363d
int64_t function_e3614(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe3635
    return unknown_ffffffffe409173b();
}

// Address range: 0xe367a - 0xe36bc
int64_t function_e367a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe367a
    int64_t v1; // 0xe367a
    *(char *)a1 = (char)v1;
    __asm_out((int16_t)a3, (int32_t)v1);
    int64_t v2 = unknown_6383d683(a5); // 0xe367d
    bool v3; // 0xe367a
    int64_t v4 = (v3 ? -4 : 4) + a5; // 0xe3687
    if (llvm_ctpop_i8((char)((int32_t)v2 - *(int32_t *)a5)) % 2 == 0) {
        // 0xe36b4
        return unknown_fffffffffc35c3ba(v4);
    }
    // 0xe368a
    unknown_ffffffffac319f90(v4);
    return unknown_ffffffff8cf1bbb1();
}

// Address range: 0xe36ea - 0xe36fe
int64_t function_e36ea(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe36ea
    int64_t v1; // 0xe36ea
    *(int32_t *)0x26b00fd01e88382 = (int32_t)v1;
    *(char *)0x39101f7e = *(char *)0x39101f7e + 123;
    return a3 & 0xffffffff;
}

// Address range: 0xe375d - 0xe376b
int64_t function_e375d(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe375d
    return unknown_47102063(a1, a2, a3);
}

// Address range: 0xe376b - 0xe376c
int64_t function_e376b(void) {
    // 0xe376b
    int64_t result; // 0xe376b
    return result;
}

// Address range: 0xe3783 - 0xe3788
int64_t function_e3783(void) {
    // 0xe3783
    return function_ffffffffb44b9281();
}

// Address range: 0xe378a - 0xe378b
int64_t function_e378a(int64_t a1) {
    // 0xe378a
    int64_t result; // 0xe378a
    return result;
}

// Address range: 0xe378d - 0xe378f
int64_t function_e378d(int64_t a1) {
    // 0xe378d
    int64_t result; // 0xe378d
    return result;
}

// Address range: 0xe385b - 0xe3960
int64_t function_e385b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xe385b
    int64_t v1; // 0xe385b
    int64_t v2 = v1 & 0x67dd7c6a; // 0xe3860
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    unsigned char v3 = *(char *)v2 ^ (char)v2; // 0xe3866
    __asm_out_136(-61, v3);
    char v4 = a3; // 0xe3873
    if (*(char *)0x5ecd0186 <= v4) {
        // 0xe3875
        return v1 & 0x67dd7c00 | (int64_t)v3;
    }
    int64_t v5 = unknown_ffffffffd3e048e6(); // 0xe38e0
    unsigned char v6 = (char)(a3 / 256) + v4; // 0xe38e5
    *(char *)a1 = (char)v5;
    bool v7; // 0xe385b
    unknown_ffffffffa453eeef((v7 ? -1 : 1) + a1);
    int32_t * v8 = (int32_t *)(a4 - 0x584c900); // 0xe38ee
    int32_t v9 = *v8; // 0xe38ee
    *v8 = (int32_t)(v6 < v4) - (int32_t)(a3 & 0xffffff00 | (int64_t)v6) + v9;
    return unknown_bd232fa();
}

// Address range: 0xe3961 - 0xe39e7
int64_t function_e3961(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0xe3961
    int64_t v1; // 0xe3961
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a7;
    uint64_t v5 = unknown_10293768(a7); // 0xe3962
    char * v6 = (char *)(v2 + 90 + 2 * v2); // 0xe3967
    *v6 = *v6 | (char)(v5 / 256);
    char * v7 = (char *)(int64_t)(0xe519c * *(int32_t *)(v2 - 0x21bdfe18)); // 0xe3975
    *v7 = *v7 - 22;
    v4 = a3;
    int64_t v8 = unknown_ffffffffac0f9b81(); // 0xe397b
    char * v9 = (char *)(a3 - 0x58f65c51); // 0xe3980
    *v9 = *v9 + (char)(a3 / 256);
    int32_t * v10 = (int32_t *)((v8 & 0xffffffff) + 0x69d26ed8); // 0xe398f
    *v10 = *v10 + (int32_t)v1;
    int32_t v11 = a2; // 0xe3995
    *(int32_t *)a2 = v11;
    char v12 = (char)v2 & -78; // 0xe3997
    int64_t v13; // 0xe3961
    *(char *)a6 = *(char *)&v13 | v12;
    *(char *)a7 = v12;
    bool v14; // 0xe3961
    int64_t v15 = (v14 ? -1 : 1) + a7; // 0xe399a
    uint64_t v16 = unknown_ffffffffcfd8c5a1(v15); // 0xe399b
    int64_t v17 = a4 - 1; // 0xe39a0
    *(char *)a2 = *(char *)&v3 + (char)(v16 / 256);
    int32_t * v18 = (int32_t *)(a4 + 126); // 0xe39a4
    *v18 = *v18 | v11;
    char v19 = v16; // 0xe39a7
    unsigned char v20 = v19 - 37; // 0xe39a7
    if (((v20 ^ v19) & v19 + 91) < 0) {
        // 0xe39e3
        return function_e3a37(v15, v3, a3, v17);
    }
    // 0xe39ab
    __asm_out_133(-24, (int32_t)(v16 & 0xffffff00 | (int64_t)v20));
    int32_t * v21 = (int32_t *)v17; // 0xe39ad
    *v21 = *v21 + (int32_t)(int64_t)&v4;
    char v22 = __asm_in_134(91); // 0xe39b0
    unsigned char v23 = *(char *)&v3; // 0xe39b2
    int64_t result = (v16 | (int64_t)v22) & -256 | (int64_t)v23; // 0xe39b2
    char * v24 = (char *)result; // 0xe39b3
    *v24 = *v24 - v23;
    return result;
}

// Address range: 0xe3a2e - 0xe3a2f
int64_t function_e3a2e(int64_t a1) {
    // 0xe3a2e
    int64_t result; // 0xe3a2e
    return result;
}

// Address range: 0xe3a37 - 0xe3a6c
int64_t function_e3a37(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe3a37
    unknown_ffffffff91e0ad7c();
    int64_t v1; // 0xe3a37
    char * v2 = (char *)(v1 - 55); // 0xe3a3c
    *v2 = *v2 + (char)v1;
    int64_t v3 = unknown_3a370d48(); // 0xe3a41
    uint32_t v4 = (int32_t)a4; // 0xe3a4d
    uint32_t v5 = v4 % 32; // 0xe3a4d
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)v3; // 0xe3a4d
        uint32_t v7 = *v6; // 0xe3a4d
        *v6 = v7 >> 32 - v5 | v7 << v5;
    }
    int64_t v8 = unknown_7d813255(); // 0xe3a4f
    int64_t v9 = (v8 + 198) % 256 | v8 & -256; // 0xe3a54
    int64_t v10; // 0xe3a37
    int64_t result = (int64_t)(*(int32_t *)&v10 + (int32_t)v9) - v1 & 0xffffffff; // 0xe3a5f
    int32_t * v11 = (int32_t *)(result - 0x343f7f6); // 0xe3a61
    *v11 = *v11 + v4;
    return result;
}

// Address range: 0xe3ad8 - 0xe3ade
int64_t function_e3ad8(void) {
    // 0xe3ad8
    int64_t result; // 0xe3ad8
    return result;
}

// Address range: 0xe3ae5 - 0xe3ae8
int64_t function_e3ae5(void) {
    // 0xe3ae5
    int64_t result; // 0xe3ae5
    return result;
}

// Address range: 0xe3b13 - 0xe3b1f
int64_t function_e3b13(int64_t a1) {
    // 0xe3b13
    int64_t v1; // 0xe3b13
    return v1 ^ -0x7dfe1751;
}

// Address range: 0xe3b3e - 0xe3b3f
int64_t function_e3b3e(void) {
    // 0xe3b3e
    int64_t result; // 0xe3b3e
    return result;
}

// Address range: 0xe3b4e - 0xe3b4f
int64_t function_e3b4e(void) {
    // 0xe3b4e
    int64_t result; // 0xe3b4e
    return result;
}

// Address range: 0xe3b55 - 0xe3be7
int64_t function_e3b55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0xe3b55
    char * v3 = (char *)(v2 - 0x17d0f5f6); // 0xe3b55
    char v4 = *v3; // 0xe3b55
    bool v5; // 0xe3b55
    *v3 = 2 * v4 | (char)v5;
    int64_t v6; // 0xe3b55
    unsigned char v7 = *(char *)&v6; // 0xe3b5c
    unsigned char v8 = v7 + (char)a4; // 0xe3b5c
    unsigned char v9 = v8 + (char)(v4 < 0); // 0xe3b5c
    bool v10 = v4 < 0 ? v9 <= v7 : v8 < v7; // 0xe3b5c
    *(char *)v6 = v9;
    int32_t v11 = a5; // 0xe3b5f
    uint32_t v12 = v11 - (v10 ? 0x2b2ec37 : 0x2b2ec36); // 0xe3b5f
    v6 = v12;
    if ((-1 - v12 + (int32_t)v10 & v11) < 0) {
        v6 = function_e3b4e();
    }
    // 0xe3b66
    unknown_ffffffffcee71574();
    int32_t v13 = *(int32_t *)&v1 - 0x1e868d4; // 0xe3b75
    *(int32_t *)v1 = v13;
    int64_t v14 = __asm_hlt(); // 0xe3b7b
    v6 = v14;
    if (v13 == 0) {
        int32_t * v15 = (int32_t *)(v14 + 0x1e8c800); // 0xe3b80
        int32_t v16 = *v15 & -23; // 0xe3b80
        *v15 = v16;
        if (v16 == 0) {
            v6 = function_e3b3e();
        }
        // 0xe3b8a
        return unknown_17b278a0();
    }
    uint32_t v17 = llvm_bswap_i32((int32_t)a3); // 0xe3b73
    int32_t * v18 = (int32_t *)(v2 - 0x5421b400); // 0xe3bd4
    *v18 = *v18 / 2;
    char * v19 = (char *)((int64_t)v17 + 0x76721413); // 0xe3bda
    *v19 = *v19 + (char)v6;
    unknown_7dc415e6();
    __asm_sti();
    return -0x52968883;
}

// Address range: 0xe3c11 - 0xe3c12
int64_t function_e3c11(void) {
    // 0xe3c11
    int64_t result; // 0xe3c11
    return result;
}

// Address range: 0xe3c78 - 0xe3c80
int64_t function_e3c78(void) {
    // 0xe3c78
    return function_e3c11();
}

// Address range: 0xe3cac - 0xe3cb2
int64_t function_e3cac(int64_t a1) {
    // 0xe3cac
    bool v1; // 0xe3cac
    return function_1f63d65((v1 ? -4 : 4) + a1);
}

// Address range: 0xe3cfe - 0xe3de2
int64_t function_e3cfe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xe3cfe
    if (a4 == 1) {
        // 0xe3d00
        int64_t result; // 0xe3cfe
        return result;
    }
    // 0xe3d66
    __asm_int3();
    unknown_ffffffffbeb1ab74(0x3c0580d0);
    return (int64_t)*(int32_t *)(a2 + a1 & 0xffffffff);
}

// Address range: 0xe3e0b - 0xe3e31
int64_t function_e3e0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_insb((int16_t)a3); // 0xe3e0b
    char * v2 = (char *)a1; // 0xe3e0b
    *v2 = v1;
    uint64_t v3 = unknown_ffffffffa8359512(); // 0xe3e0c
    int64_t v4; // 0xe3e0b
    *(int32_t *)a3 = *(int32_t *)&v4 | -119;
    int64_t v5; // 0xe3e0b
    *v2 = *(char *)&v5 + (char)(v3 / 256);
    int64_t v6; // 0xe3e0b
    *(int32_t *)a2 = *(int32_t *)&v6 | (int32_t)v3;
    int16_t v7 = 256 * (int16_t)v3 >> 8; // 0xe3e18
    int64_t v8; // 0xe3e0b
    *(int32_t *)a4 = *(int32_t *)&v8 + (int32_t)a3;
    return (v3 & 0xffff0000 | (int64_t)(v7 * v7)) + 0x9e8ffe18 & 0xffffffff;
}

// Address range: 0xe3e45 - 0xe3e4d
int64_t function_e3e45(int64_t a1) {
    // 0xe3e45
    int32_t v1; // 0xe3e45
    *(int32_t *)0x4c10265d = (int32_t)(int64_t)&v1;
    int64_t result; // 0xe3e45
    return result;
}

// Address range: 0xe3e4d - 0xe3e7f
int64_t function_e3e4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe3e4d
    int64_t v1; // 0xe3e4d
    char * v2 = (char *)(v1 + 6); // 0xe3e4d
    *v2 = *v2 + (char)v1;
    int16_t v3 = a3; // 0xe3e50
    __asm_out_135(v3, (char)v1);
    float80_t v4; // 0xe3e4d
    *(int16_t *)(a4 + 0x1e8de68) = (int16_t)v4;
    *(char *)a1 = __asm_insb(v3);
    unknown_ffffffffd3a0256c(*(int32_t *)(a3 + 0x38d383) & (int32_t)a1);
    int64_t v5; // 0xe3e4d
    __asm_outsb(v3, *(char *)&v5);
    return unknown_ffffffffd507d37b();
}

// Address range: 0xe3eba - 0xe3ed8
int64_t function_e3eba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xe3eba
    int64_t v1; // 0xe3eba
    char * v2 = (char *)(v1 - 0x24f7c5d1); // 0xe3eba
    *v2 = *v2 + (char)v1;
    unknown_79293ac6();
    int64_t v3; // 0xe3eba
    *(char *)a1 = *(char *)&v3 + (char)(a4 / 256);
    return unknown_ffffffffe90864d3();
}

// Address range: 0xe3fb3 - 0xe3fb4
int64_t function_e3fb3(void) {
    // 0xe3fb3
    int64_t result; // 0xe3fb3
    return result;
}

// Address range: 0xe3fb4 - 0xe3fc4
int64_t function_e3fb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x7c164bfd); // 0xe3fbc
    int64_t v2; // 0xe3fb4
    *v1 = *v1 + (int32_t)v2;
    return v2 ^ -0x17b19d66;
}

// Address range: 0xe3fc7 - 0xe3fde
int64_t function_e3fc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0xa71c5ed); // 0xe3fc7
    int64_t v2; // 0xe3fc7
    int32_t v3 = *v1 + (int32_t)v2; // 0xe3fc7
    *v1 = v3;
    if (a4 != 1 && v3 != 0) {
        function_e3fb3();
    }
    // 0xe3fcf
    return (0x100000000 * unknown_afead5() >> 32 & -256 | 114) * (0x100000000 * v2 >> 32) & 0xfffffffe;
}

// Address range: 0xe407c - 0xe407f
int64_t function_e407c(void) {
    // 0xe407c
    int64_t result; // 0xe407c
    return result;
}

// Address range: 0xe4090 - 0xe4096
int64_t function_e4090(void) {
    // 0xe4090
    return unknown_7b20fc96();
}

// Address range: 0xe40a0 - 0xe40b7
int64_t function_e40a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe40a0
    int64_t result; // 0xe40a0
    uint32_t v1 = (int32_t)result;
    uint32_t v2 = v1 + (int32_t)a3; // 0xe40a0
    *(int32_t *)result = v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0xe40a2
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(result + 0x11fae001); // 0xe40a2
        uint32_t v5 = *v4; // 0xe40a2
        *v4 = v5 >> v3 | (int32_t)(v2 < v1) << 32 - v3 | (int32_t)((int64_t)v5 << (int64_t)(33 - v3));
    }
    *(int32_t *)(a3 + 0x1e8ba84) = (int32_t)a1;
    return result;
}

// Address range: 0xe40b7 - 0xe40c4
int64_t function_e40b7(int64_t a1) {
    // 0xe40b7
    int64_t v1; // 0xe40b7
    int32_t * v2 = (int32_t *)(v1 - 0x3289435c); // 0xe40b7
    *v2 = *v2 + (int32_t)a1;
    return unknown_3aae98c3(a1);
}

// Address range: 0xe40df - 0xe40e2
int64_t function_e40df(int64_t a1, int64_t a2) {
    // 0xe40df
    int64_t result; // 0xe40df
    return result;
}

// Address range: 0xe40e2 - 0xe411e
int64_t function_e40e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe40e2
    int64_t v1; // 0xe40e2
    int64_t v2 = v1 + 0x3b3a603a; // 0xe40e2
    int32_t * v3 = (int32_t *)(2 * a2 - 97); // 0xe40e9
    *v3 = *v3 + (int32_t)v2;
    int64_t v4; // 0xe40e2
    uint32_t v5 = *(int32_t *)&v4 ^ (int32_t)a4; // 0xe40ed
    int64_t v6 = v5; // 0xe40ed
    bool v7; // 0xe40e2
    int64_t v8 = (v7 ? -1 : 1) + a1; // 0xe40f1
    int64_t v9; // 0xe40e2
    *(char *)v9 = *(char *)&v9 | (char)v1;
    int32_t * v10 = (int32_t *)((v2 & 0xffffff05 | 250) - 0x3433d574); // 0xe40fa
    *v10 = *v10 + (int32_t)v1;
    int32_t * v11 = (int32_t *)(2 * v1 + v6); // 0xe4112
    int32_t v12 = *v11; // 0xe4112
    int32_t v13 = v12 + v5; // 0xe4112
    *v11 = v13;
    int64_t v14 = v6; // 0xe4117
    if (v13 < 0 == ((v13 ^ v12) & (v13 ^ v5)) < 0 == (v13 != 0)) {
        v14 = unknown_3aae98c3(v8);
    }
    int64_t result = v14 & -256 | (int64_t)__asm_in_134(-75); // 0xe4119
    *(int32_t *)v8 = (int32_t)result;
    return result;
}

// Address range: 0xe412f - 0xe413b
int64_t function_e412f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe412f
    return a4 & 0xffffffff;
}

// Address range: 0x41ac40 - 0x41ac42
int64_t function_41ac40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41ac40
    return __asm_in((int16_t)a3);
}

// Address range: 0x41ac56 - 0x41ac57
int64_t function_41ac56(void) {
    // 0x41ac56
    int64_t result; // 0x41ac56
    return result;
}

// Address range: 0x41ac5c - 0x41ac63
int64_t function_41ac5c(int64_t a1) {
    // 0x41ac5c
    __asm_in_134((char)a1);
    return __asm_hlt();
}

// Address range: 0x41ac6c - 0x41ac78
int64_t function_41ac6c(void) {
    // 0x41ac6c
    int64_t v1; // 0x41ac6c
    return v1 & -256 | (int64_t)*(char *)0x3a265fb6744d8d99;
}

// Address range: 0x41ac7f - 0x41ad1f
int64_t function_41ac7f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    char * v2 = (char *)(a1 + 12); // 0x41ac7f
    *v2 = *v2 - (char)(a4 / 256);
    int64_t v3; // 0x41ac7f
    if ((*(int32_t *)-0x1661849c264997dc || (int32_t)v3) == 0) {
        int32_t v4 = *(int32_t *)0x244eb973586c565f; // 0x41acce
        *(int32_t *)-0x502623fd96802da9 = v4;
        *(int32_t *)(a1 - v3 & 0xffffffff) = v4;
        unsigned char v5 = (char)a4 % 32; // 0x41acee
        if (v5 != 0) {
            *(char *)v1 = *(char *)&v1 >> v5;
        }
        return a4 & 0xffffffff;
    }
    int64_t v6 = a5 & 0xffffffff ^ 0xa95f91a9; // 0x41ac94
    if (a4 != 0) {
        unsigned char v7 = *(char *)v6; // 0x41aca4
        unknown_6b8a6e09();
        return function_63503b24((int32_t)((a3 & 0xffffff00 | (int64_t)v7) ^ a1));
    }
    int32_t v8 = v6; // 0x41ad06
    if (((v8 + 0x56a38fd3 ^ v8) & (v8 ^ -0x80000000)) < 0) {
        // 0x41ad0d
        return (int64_t)(96 * *(int32_t *)17);
    }
    uint64_t v9 = v6 + 36; // 0x41acbb
    *(char *)0x70363b1db06074b9 = (char)v9;
    return v9 % 256 | v6 & 0xffffff00;
}

// Address range: 0x41ad38 - 0x41ad39
int64_t function_41ad38(void) {
    // 0x41ad38
    int64_t result; // 0x41ad38
    return result;
}

// Address range: 0x41ad64 - 0x41ad9f
int64_t function_41ad64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41ad64
    bool v1; // 0x41ad64
    while (!v1) {
        // continue -> 0x41ad9a
    }
    // 0x41ad9d
    int64_t result; // 0x41ad64
    int64_t v2; // 0x41ad64
    if (!((v1 | *(int64_t *)v2 == 1))) {
        result = function_41ad38();
    }
    // 0x41ad9f
    return result;
}

// Address range: 0x41ade2 - 0x41adf3
int64_t function_41ade2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41ade2
    int64_t v1; // 0x41ade2
    uint64_t v2 = v1;
    unsigned char v3 = (char)v1;
    unsigned char v4 = (char)a3; // 0x41ade6
    *(char *)v1 = v3 - v4;
    char v5 = *(char *)(a4 + 67); // 0x41ade9
    return 256 * (int64_t)((char)(v3 < v4) + (char)(v2 / 256) - v5) | v2 & -0xff01;
}

// Address range: 0x41ae00 - 0x41ae06
int64_t function_41ae00(void) {
    // 0x41ae00
    int64_t result; // 0x41ae00
    return result;
}

// Address range: 0x41ae0c - 0x41ae19
int64_t function_41ae0c(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x79749108); // 0x41ae0c
    int64_t v2; // 0x41ae0c
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffb2a3432f();
}

// Address range: 0x41ae19 - 0x41ae29
int64_t function_41ae19(int64_t a1, int64_t a2) {
    // 0x41ae19
    int64_t v1; // 0x41ae19
    return v1 & 0x882eb62f | 0x77d149d0;
}

// Address range: 0x41ae3c - 0x41ae3d
int64_t function_41ae3c(void) {
    // 0x41ae3c
    int64_t result; // 0x41ae3c
    return result;
}

// Address range: 0x41ae46 - 0x41ae47
int64_t function_41ae46(void) {
    // 0x41ae46
    int64_t result; // 0x41ae46
    return result;
}

// Address range: 0x41ae8a - 0x41ae8c
int64_t function_41ae8a(void) {
    // 0x41ae8a
    int64_t v1; // 0x41ae8a
    return function_41aed1(v1, v1, v1, v1, (int64_t)&g5, (int64_t)&g5);
}

// Address range: 0x41ae97 - 0x41aea6
int64_t function_41ae97(void) {
    // 0x41ae97
    int64_t v1; // 0x41ae97
    int64_t v2 = v1;
    *(int32_t *)(v2 + 73) = (int32_t)v2;
    __asm_hlt();
    return function_ffffffff8b422755();
}

// Address range: 0x41aed1 - 0x41afb3
int64_t function_41aed1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4 - 1; // 0x41aed6
    int64_t result; // 0x41aed1
    bool v2; // 0x41aed1
    if (v1 == 0 || v2) {
        int32_t * v3 = (int32_t *)(result + 0x55491a8b); // 0x41aed8
        *v3 = 0x20000 * *v3;
        return result;
    }
    char v4 = a2;
    *(char *)0x26ba5c86107c5dac = (char)result;
    int64_t v5 = (a3 - v1) % 256 | a3 & -256; // 0x41af13
    int16_t v6 = v5; // 0x41af17
    __asm_outsd(v6, (int32_t)a2);
    __asm_outsb(v6, v4);
    int64_t v7 = a1 + 0xb98af20c; // 0x41af1a
    int16_t * v8 = (int16_t *)(v5 - 0x4977ff7c); // 0x41af26
    *v8 = *v8 + ((char)v7 < 175 ? -39 : -40);
    unsigned char v9 = v4 ^ -90; // 0x41af2f
    if (v9 != 0) {
        // 0x41af64
        return v7 & 0xffffff00 | (int64_t)v9;
    }
    int32_t * v10 = (int32_t *)((result & 0xffffffff & result) - 0x39928611); // 0x41af3f
    *v10 = *v10 - (int32_t)((v2 ? 0xffffffff : 1) + a2);
    unsigned char v11 = (char)v1 % 32; // 0x41af45
    if (v11 != 0) {
        char * v12 = (char *)(v5 + 107); // 0x41af45
        *v12 = *v12 << v11;
    }
    // 0x41af64
    return 0x1aee3542;
}

// Address range: 0x41afd0 - 0x41afd7
int64_t function_41afd0(int64_t a1) {
    // 0x41afd0
    return __asm_in_137((char)a1);
}

// Address range: 0x41b03a - 0x41b054
int64_t function_41b03a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41b03a
    int64_t v1; // 0x41b03a
    int64_t v2 = (int64_t)&v1; // 0x41b045
    v1 = (0x100000000000000 * v2 | -0x3400000000000000) >> 56;
    return v2 & -256 | (int64_t)(*(char *)(a3 + 104) + (char)v2);
}

// Address range: 0x41b055 - 0x41b062
int64_t function_41b055(void) {
    // 0x41b055
    int64_t v1; // 0x41b055
    return v1 & 0xffffffff;
}

// Address range: 0x41b0c5 - 0x41b0c6
int64_t function_41b0c5(void) {
    // 0x41b0c5
    int64_t result; // 0x41b0c5
    return result;
}

// Address range: 0x41b0d9 - 0x41b0dc
int64_t function_41b0d9(void) {
    // 0x41b0d9
    int64_t result; // 0x41b0d9
    return result;
}

// Address range: 0x41b0ea - 0x41b0ed
int64_t function_41b0ea(int64_t a1) {
    // 0x41b0ea
    int64_t result; // 0x41b0ea
    return result;
}

// Address range: 0x41b137 - 0x41b141
int64_t function_41b137(int64_t a1) {
    // 0x41b137
    int64_t result; // 0x41b137
    char * v1 = (char *)(result - 0x7665e210 + 2 * result); // 0x41b137
    bool v2; // 0x41b137
    *v1 = (char)v2 - (char)(result / 256) + *v1;
    return result;
}

// Address range: 0x41b155 - 0x41b156
int64_t function_41b155(void) {
    // 0x41b155
    int64_t result; // 0x41b155
    return result;
}

// Address range: 0x41b15a - 0x41b1d4
int64_t function_41b15a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41b15a
    int64_t v1; // 0x41b15a
    if ((char)v1 != -(char)a5) {
        // 0x41b164
        return 0xe5602543;
    }
    // 0x41b18c
    *(char *)((v1 & -0xff01 | (int64_t)&g2) - 16) = (char)a4;
    *(char *)a1 = __asm_insb(-1);
    if ((*(int32_t *)(a2 - 0x29c901d7) & (int32_t)v1) < 0) {
        // 0x41b164
        return 0xe5602543;
    }
    int32_t v2 = *(int32_t *)(2 * a4 - 0x273ffb5); // 0x41b1a4
    if (llvm_ctpop_i8((char)(v2 ^ (int32_t)a2)) % 2 == 0) {
        function_41b155();
    }
    // 0x41b1b1
    return __asm_sti();
}

// Address range: 0x41b202 - 0x41b20c
int64_t function_41b202(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41b202
    return __asm_wait(a1, a2, a3, a4, a5);
}

// Address range: 0x41b210 - 0x41b22a
int64_t function_41b210(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41b210
    int64_t v1; // 0x41b210
    *(char *)(v1 + 0x72d228e1) = (char)v1;
    unknown_ffffffff8d5fe5e5();
    return function_ffffffffc5a1ea8d();
}

// Address range: 0x41b273 - 0x41b274
int64_t function_41b273(void) {
    // 0x41b273
    int64_t result; // 0x41b273
    return result;
}

// Address range: 0x41b275 - 0x41b278
int64_t function_41b275(int64_t a1) {
    // 0x41b275
    int64_t result; // 0x41b275
    return result;
}

// Address range: 0x41b2a0 - 0x41b2d9
int64_t function_41b2a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4; // 0x41b2a0
    unsigned char v2 = v1 % 32; // 0x41b2a0
    int64_t v3; // 0x41b2a0
    if (v2 == 0) {
        bool v4; // 0x41b2a0
        if (v4) {
            v3 = function_41b273();
            goto lab_0x41b2a5;
        } else {
            goto lab_0x41b2a5;
        }
    } else {
        char * v5 = (char *)(a1 - 30); // 0x41b2a0
        unsigned char v6 = *v5; // 0x41b2a0
        unsigned char v7 = v6 >> 8 - v2 | v6 << v2; // 0x41b2a0
        *v5 = v7;
        if (v7 % 2 == 0) {
            goto lab_0x41b2a5;
        } else {
            v3 = function_41b273();
            goto lab_0x41b2a5;
        }
    }
  lab_0x41b2a5:;
    // 0x41b2a5
    int64_t v8; // 0x41b2a0
    __asm_fbld(*(float80_t *)(v8 + 80));
    int32_t * v9 = (int32_t *)(v3 + 112); // 0x41b2be
    *v9 = *v9 - (*(char *)(a3 - 0x10f3cd77 + 8 * a4) > v1 ? 92 : 91);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_2b64045a();
}

// Address range: 0x41b2fc - 0x41b2fd
int64_t function_41b2fc(void) {
    // 0x41b2fc
    int64_t result; // 0x41b2fc
    return result;
}

// Address range: 0x41b309 - 0x41b43d
int64_t function_41b309(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x41b309
    int64_t v1; // 0x41b309
    *(char *)a2 = (char)(v1 & a2);
    char * v2 = (char *)(a2 + 83); // 0x41b313
    char v3 = a4; // 0x41b313
    *v2 = *v2 ^ v3;
    char * v4 = (char *)(a1 + 9); // 0x41b321
    *v4 = *v4 - (char)((uint64_t)v1 / 256);
    uint64_t v5 = a3 / 256; // 0x41b327
    if ((char)(v5 || a3) != 0) {
        // 0x41b39a
        return function_423844fe();
    }
    int64_t v6 = v5 % 256 | a3; // 0x41b327
    *(char *)a1 = __asm_insb((int16_t)v6);
    char * v7 = (char *)(2 * a2 + 45 + v6); // 0x41b32c
    *v7 = *v7 | v3;
    __asm_psrlq(v1, v1);
    if (*(char *)0x53f10c1d < (char)(a4 / 256)) {
        // 0x41b392
        __asm_int3();
        // 0x41b39a
        return function_423844fe();
    }
    if ((char)v1 != -45) {
        function_41b2fc();
    }
    int32_t * v8 = (int32_t *)(8 * a1 + a4); // 0x41b347
    *v8 = *v8 | 0x674d40ab;
    return function_fffffffff6a67984();
}

// Address range: 0x41b43e - 0x41b458
int64_t function_41b43e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x41b43e
    int64_t v1; // 0x41b43e
    uint64_t v2 = v1;
    __asm_int1();
    int64_t v3 = a4 - 98; // 0x41b44b
    __writefsbyte(v3, __readfsbyte(v3) + (char)v1);
    uint64_t v4 = a4 % 64; // 0x41b451
    if (v4 != 0) {
        *(int64_t *)v2 = v2 >> 64 - v4 | v2 << v4;
    }
    return function_41b468(a1, a2, a3, a4, (int64_t)&g5, (int64_t)&g5);
}

// Address range: 0x41b460 - 0x41b465
int64_t function_41b460(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41b460
    int64_t result; // 0x41b460
    return result;
}

// Address range: 0x41b468 - 0x41b5c9
int64_t function_41b468(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41b468
    int64_t v1; // 0x41b468
    int64_t v2 = v1;
    int64_t v3 = a6;
    char * v4 = (char *)(a2 + 0x37ec5ca6); // 0x41b468
    unsigned char v5 = *v4; // 0x41b468
    unsigned char v6 = v5 + (char)(v1 / 256); // 0x41b468
    *v4 = v6;
    int64_t v7 = 2 * v2 & 254 | v2 & -256 | (int64_t)(v6 < v5); // 0x41b4cb
    int64_t v8 = a4 & -0x10000 | (int64_t)"tdi2"; // 0x41b4d4
    int32_t v9 = *(int32_t *)0x5ac24ccb ^ (int32_t)v7; // 0x41b4d6
    *(int32_t *)0x5ac24ccb = v9;
    uint16_t v10 = (256 * (int16_t)v1 >> 8) * (int16_t)*(char *)v7; // 0x41b4dc
    char v11 = v10 / 256; // 0x41b4dc
    int64_t result = v1 & -0x10000 | (int64_t)v10; // 0x41b4dc
    uint32_t v12 = (int32_t)result;
    bool v13; // 0x41b468
    int64_t v14; // 0x41b468
    int64_t v15; // 0x41b468
    int64_t v16; // 0x41b468
    if (v9 != 0) {
        uint32_t v17 = v12 - 0x6935e5b6 + (int32_t)(v11 != 0 == (v11 != -1)); // 0x41b54e
        v14 = v17;
        v15 = a3;
        v13 = v11 != 0 == (v11 != -1) ? v17 <= v12 : v12 > 0x6935e5b5;
    } else {
        uint32_t v18 = v12 / 0x80000000; // 0x41b4e0
        int64_t v19 = v18; // 0x41b4e0
        v14 = result;
        v15 = v19;
        v16 = (int64_t)&v3;
        v13 = v11 != 0 == (v11 != -1);
        if (v8 != 0) {
            // 0x41b4ed
            *(int32_t *)v19 = (int32_t)a2;
            int16_t v20 = v18; // 0x41b4ea
            int32_t v21 = __asm_insd(v20); // 0x41b4ea
            int32_t * v22 = (int32_t *)a1; // 0x41b4ea
            *v22 = v21;
            if (v9 < 0 != (v11 != 0 == (v11 != -1))) {
                // 0x41b4c8
                return result;
            }
            // 0x41b4a7
            *v22 = __asm_insd(v20);
            return result;
        }
    }
    int64_t v23 = v14 + 0x78d2db35 + (int64_t)v13; // 0x41b553
    int64_t result2 = v23 & 0xffffffff; // 0x41b553
    char v24 = v23; // 0x41b558
    *(char *)a1 = v24;
    int32_t v25 = v16; // 0x41b559
    int32_t v26 = v1; // 0x41b559
    int32_t v27 = v25 + v26; // 0x41b559
    if (v27 < 0 != ((v27 ^ v25) & (v27 ^ v26)) < 0) {
        // 0x41b4c8
        return result2;
    }
    // 0x41b5ae
    bool v28; // 0x41b468
    int64_t v29 = (v28 ? -1 : 1) + a1; // 0x41b558
    int32_t * v30 = (int32_t *)v15; // 0x41b5ae
    uint32_t v31 = *v30; // 0x41b5ae
    *v30 = v31 / 0x40000000 | 4 * v31;
    int32_t * v32 = (int32_t *)(v7 + 42); // 0x41b5b8
    *v32 = -1 - *v32;
    *(int64_t *)((int64_t)v27 - 8) = result2;
    unsigned char v33 = llvm_ctpop_i8(v24 & 120); // 0x41b5bc
    int64_t result4 = __asm_hlt(); // 0x41b5be
    if (v33 % 2 != 0) {
        int64_t result3 = __asm_iretd(v29); // 0x41b5c6
        *(char *)v29 = __asm_insb((int16_t)v15);
        return result3;
    }
    // 0x41b57d
    float80_t v34; // 0x41b468
    *(int32_t *)v8 = (int32_t)v34;
    *(char *)v29 = (char)result4;
    char * v35 = (char *)(v1 - 118); // 0x41b587
    char v36 = *v35 ^ (char)((int64_t)"tdi2" >> 8); // 0x41b587
    *v35 = v36;
    if (v36 >= 0) {
        // 0x41b4c8
        return result4;
    }
    uint32_t result5 = 0x6eb7efcc * *(int32_t *)(v15 + 91); // 0x41b5b1
    char * v37 = (char *)(v7 - 0x5b95cc05); // 0x41b593
    *v37 = *v37 + (char)result5;
    return result5;
}

// Address range: 0x41b5c9 - 0x41b5cc
int64_t function_41b5c9(void) {
    // 0x41b5c9
    int64_t result; // 0x41b5c9
    return result;
}

// Address range: 0x41b5d9 - 0x41b5da
int64_t function_41b5d9(void) {
    // 0x41b5d9
    int64_t result; // 0x41b5d9
    return result;
}

// Address range: 0x41b5ff - 0x41b60d
int64_t function_41b5ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41b5ff
    int64_t v1; // 0x41b5ff
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | a3);
    return function_41b5d9();
}

// Address range: 0x41b618 - 0x41b61d
int64_t function_41b618(int64_t a1) {
    // 0x41b618
    float80_t v1; // 0x41b618
    *(float64_t *)a1 = (float64_t)v1;
    int64_t result; // 0x41b618
    return result;
}

// Address range: 0x41b62a - 0x41b62b
int64_t function_41b62a(int64_t a1) {
    // 0x41b62a
    int64_t result; // 0x41b62a
    return result;
}

// Address range: 0x41b642 - 0x41b645
int64_t function_41b642(void) {
    // 0x41b642
    int64_t result; // 0x41b642
    return result;
}

// Address range: 0x41b653 - 0x41b654
int64_t function_41b653(void) {
    // 0x41b653
    int64_t result; // 0x41b653
    return result;
}

// Address range: 0x41b666 - 0x41b679
int64_t function_41b666(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_int1(); // 0x41b667
    bool v2; // 0x41b666
    if (v2) {
        v1 = function_41b653();
    }
    uint64_t v3 = v1;
    *(char *)v3 = (char)v3;
    int64_t v4; // 0x41b666
    char v5 = *(char *)&v4; // 0x41b676
    return 256 * (int64_t)(v5 + (char)(v3 / 256)) | v3 & -0xff01;
}

// Address range: 0x41b68f - 0x41b690
int64_t function_41b68f(void) {
    // 0x41b68f
    int64_t result; // 0x41b68f
    return result;
}

// Address range: 0x41b6e4 - 0x41b6e8
int64_t function_41b6e4(int64_t a1, int64_t a2) {
    // 0x41b6e4
    int64_t v1; // 0x41b6e4
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x41b6fc - 0x41b6fe
int64_t function_41b6fc(void) {
    // 0x41b6fc
    return function_41b68f();
}

// Address range: 0x41b709 - 0x41b768
int64_t function_41b709(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41b709
    int64_t v1; // 0x41b709
    uint64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x41b709
    if (!v4 && !v4) {
        // 0x41b70e
        return __asm_hlt();
    }
    if (true == !v4) {
        // 0x41b73e
        int64_t result; // 0x41b709
        return result;
    }
    // 0x41b72a
    v3 = v1 & 0xffffffff;
    *(char *)(a4 + 0x62bd0a1e) = (char)(v2 / 256);
    int64_t result2; // 0x41b709
    if (!v4) {
        uint32_t v5 = *(int32_t *)&result2; // 0x41b735
        result2 = v5;
        *(int32_t *)(a4 + 19) = v5 / 0x80000000;
        // 0x41b73e
        return result2;
    }
    int64_t v6 = __asm_int3(); // 0x41b755
    result2 = v6;
    if (v4 || false) {
        // 0x41b73f
        return v6 & 0x6a7d0015 | 0x2f00;
    }
    // 0x41b759
    *(int32_t *)v6 = *(int32_t *)&v3 ^ (int32_t)v6;
    return v2 & 0xffffffff;
}

// Address range: 0x41b768 - 0x41b76b
int64_t function_41b768(void) {
    // 0x41b768
    int64_t result; // 0x41b768
    return result;
}

// Address range: 0x41b76b - 0x41b76e
int64_t function_41b76b(int64_t a1) {
    // 0x41b76b
    int64_t v1; // 0x41b76b
    bool v2; // 0x41b76b
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x41b79a - 0x41b79d
int64_t function_41b79a(int64_t a1) {
    // 0x41b79a
    int64_t result; // 0x41b79a
    return result;
}

// Address range: 0x41b7b0 - 0x41b7bb
int64_t function_41b7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41b7b0
    int64_t result; // 0x41b7b0
    bool v1; // 0x41b7b0
    if (v1) {
        // 0x41b7ce
        return result;
    }
    int32_t * v2 = (int32_t *)(a2 - 0x30268307 + a6); // 0x41b7b2
    *v2 = *v2 | (int32_t)result;
    return result;
}

// Address range: 0x41b7d0 - 0x41b7d7
int64_t function_41b7d0(int64_t result) {
    // 0x41b7d0
    return result;
}

// Address range: 0x41b7e0 - 0x41b7e1
int64_t function_41b7e0(void) {
    // 0x41b7e0
    int64_t result; // 0x41b7e0
    return result;
}

// Address range: 0x41b7ed - 0x41b81b
int64_t function_41b7ed(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x41b7ed
    int32_t * v3 = (int32_t *)(v2 + 20); // 0x41b7f6
    bool v4; // 0x41b7ed
    *v3 = *v3 + (v4 ? -0x7dbaa7a9 : -0x7dbaa7aa);
    char v5 = *(char *)0x115850 ^ (char)(a3 / 256); // 0x41b7fd
    *(char *)0x115850 = v5;
    int64_t v6 = v2 & -0xff01 | 256 * (64 * (int64_t)v4 | 128 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4) | 512; // 0x41b803
    if (v5 == 0) {
        v6 = function_41b7e0();
    }
    // 0x41b805
    *(char *)v1 = *(char *)&v1 + (char)(v6 / 256);
    return (int64_t)((int32_t)v6 - *(int32_t *)(v2 - 0x32ebbde5));
}

// Address range: 0x41b864 - 0x41b865
int64_t function_41b864(int64_t a1) {
    // 0x41b864
    int64_t result; // 0x41b864
    return result;
}

// Address range: 0x41b866 - 0x41b871
int64_t function_41b866(int64_t a1) {
    // 0x41b866
    int64_t result; // 0x41b866
    return result;
}

// Address range: 0x41b89a - 0x41b89b
int64_t function_41b89a(int64_t a1) {
    // 0x41b89a
    int64_t result; // 0x41b89a
    return result;
}

// Address range: 0x41b8e2 - 0x41b8e8
int64_t function_41b8e2(void) {
    // 0x41b8e2
    int64_t result; // 0x41b8e2
    return result;
}

// Address range: 0x41b8fb - 0x41b900
int64_t function_41b8fb(void) {
    // 0x41b8fb
    int64_t result; // 0x41b8fb
    return result;
}

// Address range: 0x41b903 - 0x41b909
int64_t function_41b903(void) {
    // 0x41b903
    int64_t v1; // 0x41b903
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 - 0x39bf0be8); // 0x41b903
    return 256 * (int64_t)(v3 ^ (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x41b916 - 0x41b917
int64_t function_41b916(int64_t a1) {
    // 0x41b916
    int64_t result; // 0x41b916
    return result;
}

// Address range: 0x41b928 - 0x41b92f
int64_t function_41b928(void) {
    // 0x41b928
    int64_t result; // 0x41b928
    return result;
}

// Address range: 0x41b95d - 0x41b96b
int64_t function_41b95d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x41b95d
    int64_t result; // 0x41b95d
    unsigned char v1 = *(char *)(result + 97); // 0x41b962
    char * v2 = (char *)(result + 116); // 0x41b965
    *v2 = 128 * (char)(v1 < (char)(a3 / 256)) | *v2 / 2;
    return result;
}

// Address range: 0x41b96b - 0x41b96e
int64_t function_41b96b(int64_t a1) {
    // 0x41b96b
    int64_t v1; // 0x41b96b
    return v1 ^ 97;
}

// Address range: 0x41b98b - 0x41b98c
int64_t function_41b98b(void) {
    // 0x41b98b
    int64_t result; // 0x41b98b
    return result;
}

// Address range: 0x41b9ae - 0x41b9af
int64_t function_41b9ae(void) {
    // 0x41b9ae
    int64_t result; // 0x41b9ae
    return result;
}

// Address range: 0x41b9c4 - 0x41bae7
int64_t function_41b9c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x41b9c4
    unsigned char v3 = (char)v2; // 0x41b9c4
    unsigned char v4 = 2 * v3; // 0x41b9c4
    if (v4 < v3 || v4 == 0) {
        int64_t result = unknown_5291123b(); // 0x41ba18
        char v5 = result; // 0x41ba24
        *(char *)a1 = v5;
        *(char *)0x23a928cd19cd5851 = v5;
        return result;
    }
    char * v6 = (char *)(v2 + 4); // 0x41b9c8
    char v7 = *v6 + (char)a4; // 0x41b9c8
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x41b9c8
    *v6 = v7;
    __asm_out_135(-0x1ea5, v4);
    if (v8 % 2 != 0) {
        // 0x41b9d8
        return v2 & -256 | (int64_t)v4;
    }
    char * v9 = (char *)(v1 - 83); // 0x41ba31
    *v9 = 2 * *v9;
    int64_t v10 = __asm_int1() + 0x6c7c223c; // 0x41ba37
    int32_t v11 = (int32_t)v10 & -0x574bee8d; // 0x41ba3d
    int64_t result2 = v10 & -0xff01 | 0x4000 * (int64_t)(v11 == 0) | 0x8000 * (int64_t)(v11 < 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v11) % 2 == 0) | 512; // 0x41ba45
    __asm_frstor(*(int864_t *)(result2 - 51));
    *(char *)a1 = *(char *)&v1;
    return result2;
}

// Address range: 0x41bae8 - 0x41bae9
int64_t function_41bae8(int64_t a1, int64_t a2) {
    // 0x41bae8
    int64_t result; // 0x41bae8
    return result;
}

// Address range: 0x41bb20 - 0x41bb2a
int64_t function_41bb20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41bb20
    int64_t v1; // 0x41bb20
    return v1 & -30;
}

// Address range: 0x41bb49 - 0x41bb4b
int64_t function_41bb49(void) {
    // 0x41bb49
    int64_t result; // 0x41bb49
    return result;
}

// Address range: 0x41bb6d - 0x41bb6e
int64_t function_41bb6d(void) {
    // 0x41bb6d
    int64_t result; // 0x41bb6d
    return result;
}

// Address range: 0x41bbd7 - 0x41bc07
int64_t function_41bbd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x41bbd7
    int64_t result; // 0x41bbd7
    bool v1; // 0x41bbd7
    if (v1 || v1) {
        // 0x41bbfd
        *(char *)(result + 0x2f01f607) = (char)a6;
        return result;
    }
    // 0x41bbe5
    __asm_pavgw(result, *(int64_t *)(result - 0x6bf89994));
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_41bb6d();
}

// Address range: 0x41bc08 - 0x41bc18
int64_t function_41bc08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a2; // 0x41bc0b
    int64_t v2; // 0x41bc08
    uint32_t v3 = (int32_t)v2; // 0x41bc0b
    int64_t result = __asm_int3(); // 0x41bc0d
    if (v1 == v3) {
        // 0x41bc56
        return result;
    }
    int32_t * v4 = (int32_t *)a5; // 0x41bc11
    uint32_t v5 = *v4; // 0x41bc11
    uint32_t v6 = v5 + (int32_t)a4; // 0x41bc11
    uint32_t v7 = v6 + (int32_t)(v1 < v3); // 0x41bc11
    bool v8 = v1 < v3 ? v7 <= v5 : v6 < v5; // 0x41bc11
    *v4 = v7;
    int64_t v9; // 0x41bc08
    char v10 = *(char *)&v9; // 0x41bc13
    return result & -256 | (int64_t)(v10 + (char)result + (char)v8);
}

// Address range: 0x41bc18 - 0x41bc26
int64_t function_41bc18(void) {
    // 0x41bc18
    int64_t v1; // 0x41bc18
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_41bc2d(0xf9f60273, v1, v1, v1);
}

// Address range: 0x41bc26 - 0x41bc2d
int64_t function_41bc26(int64_t a1) {
    // 0x41bc26
    int64_t result; // 0x41bc26
    return result;
}

// Address range: 0x41bc2d - 0x41bc3d
int64_t function_41bc2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41bc2d
    int64_t v1; // 0x41bc2d
    if ((char)v1 <= (char)v1) {
        function_41bc58();
    }
    // 0x41bc31
    int64_t v2; // 0x41bc2d
    int64_t v3 = (int64_t)&v2; // 0x41bc39
    return v3 & -256 | (int64_t)(*(char *)(a4 + 91) + (char)v3);
}
