/*
 * Targeted RetDec C for native executable gap queue batch 1273.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1ca955-0x1cab55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cab55-0x1cad55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cad55-0x1caf55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1caf55-0x1cb155 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cb155-0x1cb355 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cb355-0x1cb555 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cb555-0x1cb755 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cb755-0x1cb955 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b8d75-0x2b8f75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e0280-0x3e0480 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e0480-0x3e0680 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e0680-0x3e0880 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e0880-0x3e0a80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e0a80-0x3e0c80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e0c80-0x3e0e80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e0e80-0x3e1080 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g6;
extern int g7;
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

int64_t function_131e47f9();
int64_t function_1ca955(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ca97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1caaf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cac1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1cad9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1caedc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1cb059(int64_t a1, int64_t a2);
int64_t function_1cb1d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cb347(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cb4e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cb662(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1cb7c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cb927(int64_t a1);
int64_t function_1cb931(int64_t a1);
int64_t function_1d431774();
int64_t function_26fecc6c();
int64_t function_2b8d75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b8e38(void);
int64_t function_2b8ebe(int64_t a1);
int64_t function_2b8f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0280(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e029a(void);
int64_t function_3e02c8(int64_t a1);
int64_t function_3e02da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e0318(void);
int64_t function_3e0336(void);
int64_t function_3e0340(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e03d5(void);
int64_t function_3e0447(int64_t a1);
int64_t function_3e0453(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3e053a(int64_t a1);
int64_t function_3e0563(void);
int64_t function_3e0572(void);
int64_t function_3e062c(int64_t a1);
int64_t function_3e06b2(void);
int64_t function_3e06df(void);
int64_t function_3e06e4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3e0721(void);
int64_t function_3e076c(void);
int64_t function_3e0771(void);
int64_t function_3e07ba(void);
int64_t function_3e07bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e0868(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3e0946(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e09c4(int64_t a1);
int64_t function_3e09d4(int64_t a1);
int64_t function_3e0a01(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e0a0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0a7d(int64_t a1);
int64_t function_3e0ae6(int64_t a1);
int64_t function_3e0aec(int64_t a1);
int64_t function_3e0b1c(void);
int64_t function_3e0b50(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0b52(void);
int64_t function_3e0b53(int64_t a1);
int64_t function_3e0b63(void);
int64_t function_3e0b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0b93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e0c5a(void);
int64_t function_3e0c9a(void);
int64_t function_3e0cac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0cb4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3e0cec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e0cf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0d18(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e0d6f(int64_t a1);
int64_t function_3e0dd8(void);
int64_t function_3e0e21(int64_t a1);
int64_t function_3e0e48(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0e99(int64_t a1);
int64_t function_3e0eec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e0efc(void);
int64_t function_3e0f06(void);
int64_t function_3e0f0d(void);
int64_t function_3e0f0f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e0f72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0fa0(int64_t a1);
int64_t function_3e0fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e0fe2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e0fec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e1058(int64_t a1);
int64_t function_599438e6();
int64_t function_69adcd96();
int64_t function_cc59c();
int64_t function_ffffffff967b475a();
int64_t unknown_20ab639f();
int64_t unknown_7383a328();
int64_t unknown_ffffffff8d8e2f82();

// Address range: 0x1ca955 - 0x1ca97e
int64_t function_1ca955(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ca955
    int64_t v1; // 0x1ca955
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x1ca957
    *v3 = *v3 + (char)a4;
    return function_cc59c(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x1ca97e - 0x1caaf8
int64_t function_1ca97e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1ca97e
    return function_cc59c(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x1caaf8 - 0x1cac1f
int64_t function_1caaf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1caaf8
    int64_t v1; // 0x1caaf8
    return function_cc59c(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x1cac1f - 0x1cad9b
int64_t function_1cac1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1cac1f
    int64_t v1; // 0x1cac1f
    return function_cc59c(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x1cad9b - 0x1caedc
int64_t function_1cad9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cad9b
    int64_t v1; // bp-40, 0x1cad9b
    int64_t v2 = (int64_t)&v1; // 0x1cae0d
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x1cae15
    int64_t * v4 = (int64_t *)v3; // 0x1cae15
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x1cae21
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x1cae25
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x1cae3b
    *v7 = v3;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x1cae44
    int64_t v9 = *v8; // 0x1cae44
    *v6 = v9;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x1cae5c
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x1cae5e
    *v10 = 0xf9960ab;
    *v11 = v5;
    *v4 = *v7;
    *v7 = 0x53b7d330;
    *v11 = v9;
    *v8 = *v7;
    int64_t v12 = *v6; // 0x1cae93
    *v7 = v12;
    *v10 = v12;
    *v10 = *v4;
    *v6 = v2;
    int64_t v13; // 0x1cad9b
    return function_cc59c(a1, a2, a3, a1, v13, v13);
}

// Address range: 0x1caedc - 0x1cb059
int64_t function_1caedc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x1c170d; // bp-24, 0x1caf1c
    int64_t v2 = (int64_t)&v1; // 0x1caf9b
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x1cafb2
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x1cafb2
    int64_t v5 = v2 - 16; // 0x1cafb6
    int64_t * v6 = (int64_t *)v5; // 0x1cafb6
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x1cafb9
    *v4 = 0x3d166cb7;
    *v6 = 0x49b99b2b;
    *v7 = a7;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = v3;
    *(int64_t *)(v2 + 24) = v3;
    *v4 = v1;
    *v7 = v5;
    *v6 = v2;
    return function_cc59c(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x1cb059 - 0x1cb1d6
int64_t function_1cb059(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 32); // 0x1cb0eb
    int64_t v2 = a2 - 8; // 0x1cb0eb
    *(int64_t *)v2 = v1;
    int64_t v3 = a2 - 16; // 0x1cb0ef
    int64_t * v4 = (int64_t *)v3; // 0x1cb0ef
    *v4 = v1;
    int64_t * v5 = (int64_t *)(a2 - 24); // 0x1cb104
    *v5 = v2;
    int64_t v6 = *(int64_t *)(a2 + 8); // 0x1cb10d
    int64_t * v7 = (int64_t *)(a2 - 32); // 0x1cb13a
    *(int64_t *)a2 = v1;
    *v5 = v6 - 0x7edc0525;
    *v7 = v3;
    *(int64_t *)(a2 + 16) = v6;
    *v7 = *v4;
    *v5 = v2;
    int64_t v8 = *v4; // 0x1cb1ae
    *v5 = v8;
    *v7 = v8;
    *(int64_t *)(a2 - 40) = v3;
    *(int64_t *)(a2 - 48) = *v7;
    int64_t v9; // 0x1cb059
    return function_cc59c(0x1c1958, a2, v9, v9, v9, v9);
}

// Address range: 0x1cb1d6 - 0x1cb347
int64_t function_1cb1d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1cb1d6
    int64_t v1; // bp-48, 0x1cb1d6
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1cb1d6
    return function_cc59c(a1, a2, a3, a4, v2, v2);
}

// Address range: 0x1cb347 - 0x1cb4e8
int64_t function_1cb347(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cb347
    bool v1; // 0x1cb347
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x1cb347
    int64_t v3 = v2; // bp-48, 0x1cb404
    int64_t v4 = (int64_t)&v3; // 0x1cb446
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x1cb44e
    *v5 = 0x68e0dcea;
    int64_t * v6 = (int64_t *)(v4 - 16); // 0x1cb45e
    *v6 = v2;
    *(int64_t *)(v4 + 8) = *v5;
    *v5 = a1;
    *v6 = a2;
    *(int64_t *)(v4 - 24) = v4;
    int64_t v7 = *v6; // 0x1cb482
    *(int64_t *)(v4 - 32) = v7;
    *v6 = v4;
    int64_t v8; // 0x1cb347
    return function_cc59c(*v5, v7, a3, 310, v8, v8);
}

// Address range: 0x1cb4e8 - 0x1cb662
int64_t function_1cb4e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1cb4e8
    bool v1; // 0x1cb4e8
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // bp-32, 0x1cb5db
    int64_t v3 = (int64_t)&v2; // 0x1cb626
    int64_t v4 = v3 - 8; // 0x1cb632
    *(int64_t *)(v3 - 16) = v4;
    *(int64_t *)v4 = v3 + 8;
    return function_cc59c(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x1cb662 - 0x1cb7c7
int64_t function_1cb662(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1cb662
    int64_t v1; // 0x1cb662
    return function_cc59c(a1, a2, a3, 0x1c24e7, v1, v1);
}

// Address range: 0x1cb7c7 - 0x1cb917
int64_t function_1cb7c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cb7c7
    int64_t v1; // bp-24, 0x1cb7c7
    int64_t v2 = (int64_t)&v1; // 0x1cb83e
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x1cb846
    int64_t * v4 = (int64_t *)v3; // 0x1cb84f
    *v4 = 0x2e390d56;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x1cb85b
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x1cb860
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x1cb86a
    *v6 = v7;
    *v5 = v3;
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x1cb891
    *v6 = v8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x1cb898
    *v9 = v8;
    *v5 = v7;
    v1 = *v6;
    *v6 = 0x7a9dc9f4;
    *v9 = v8;
    *(int64_t *)(v2 + 16) = *v6;
    *v6 = v2;
    *v6 = *v4;
    *v5 = v3;
    int64_t v10; // 0x1cb7c7
    return function_cc59c(a1, a2, a3, a4, v10, v10);
}

// Address range: 0x1cb927 - 0x1cb92a
int64_t function_1cb927(int64_t a1) {
    // 0x1cb927
    int64_t v1; // 0x1cb927
    return v1 & -136;
}

// Address range: 0x1cb931 - 0x1cb932
int64_t function_1cb931(int64_t a1) {
    // 0x1cb931
    int64_t result; // 0x1cb931
    return result;
}

// Address range: 0x2b8d75 - 0x2b8e1e
int64_t function_2b8d75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b8d75
    int64_t v1; // 0x2b8d75
    int64_t v2 = v1;
    int64_t v3 = a3;
    unsigned char v4 = *(char *)(a3 + 0x3d000968); // 0x2b8d7f
    int32_t * v5 = (int32_t *)(v1 - 14); // 0x2b8d85
    *v5 = *v5 + (int32_t)a4;
    uint32_t v6 = (int32_t)a1; // 0x2b8d88
    uint32_t v7 = v6 - 0x105b7f98; // 0x2b8d89
    if (v7 >= 1) {
        // 0x2b8d90
        *(char *)v3 = *(char *)&v3 + (char)a4;
        return unknown_20ab639f(((v2 ^ 8) + 252) % 256 | v2 & 0xffff0000 | 256 * (int64_t)v4);
    }
    int64_t v8 = v7; // 0x2b8d89
    if (v7 == 0) {
        int32_t * v9 = (int32_t *)v8; // 0x2b8e15
        *v9 = *v9 + (int32_t)(v6 > 0x105b7f97);
        return 0;
    }
    int64_t result = v8 & 0xffff00ff | (int64_t)&g6; // 0x2b8da9
    *(char *)result = (char)a4;
    return result;
}

// Address range: 0x2b8e38 - 0x2b8e3c
int64_t function_2b8e38(void) {
    // 0x2b8e38
    int64_t result; // 0x2b8e38
    return result;
}

// Address range: 0x2b8ebe - 0x2b8ebf
int64_t function_2b8ebe(int64_t a1) {
    // 0x2b8ebe
    int64_t result; // 0x2b8ebe
    return result;
}

// Address range: 0x2b8f13 - 0x2b8f2e
int64_t function_2b8f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 27); // 0x2b8f13
    *v1 = *v1 & (int32_t)a3;
    int64_t v2; // 0x2b8f13
    *(char *)a3 = *(char *)&v2 + (char)a4;
    int16_t v3 = a3; // 0x2b8f18
    int64_t v4; // 0x2b8f13
    __asm_out(v3, (int32_t)v4);
    int64_t v5; // 0x2b8f13
    __asm_outsd(v3, *(int32_t *)&v5);
    *(int32_t *)(a1 + 0x5eb2cd83) = (int32_t)v4;
    return v4 ^ 223;
}

// Address range: 0x3e0280 - 0x3e028b
int64_t function_3e0280(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e0280
    return a3 & 0xffffffff;
}

// Address range: 0x3e029a - 0x3e029d
int64_t function_3e029a(void) {
    // 0x3e029a
    int64_t result; // 0x3e029a
    return result;
}

// Address range: 0x3e02c8 - 0x3e02cd
int64_t function_3e02c8(int64_t a1) {
    // 0x3e02c8
    int64_t result; // 0x3e02c8
    return result;
}

// Address range: 0x3e02da - 0x3e02f9
int64_t function_3e02da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e02da
    int64_t v1; // 0x3e02da
    int64_t v2 = v1;
    bool v3; // 0x3e02da
    if (v3) {
        // 0x3e02dc
        return (v2 - (v3 ? 7 : 6)) % 256 | v2 & -256;
    }
    char * v4 = (char *)(v2 + 112); // 0x3e02ee
    *v4 = (char)v3 + (char)((uint64_t)v1 / 256) + *v4;
    return v2 & -194 ^ 245;
}

// Address range: 0x3e0318 - 0x3e0319
int64_t function_3e0318(void) {
    // 0x3e0318
    int64_t result; // 0x3e0318
    return result;
}

// Address range: 0x3e0336 - 0x3e0337
int64_t function_3e0336(void) {
    // 0x3e0336
    int64_t result; // 0x3e0336
    return result;
}

// Address range: 0x3e0340 - 0x3e03a1
int64_t function_3e0340(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e0340
    bool v1; // 0x3e0340
    if (!v1 && true) {
        // 0x3e0399
        return a1 & 0xffffffff;
    }
    bool v2; // 0x3e0340
    int64_t v3; // 0x3e0340
    int64_t v4; // 0x3e0340
    int64_t v5; // 0x3e0340
    if (!v1) {
        uint32_t v6 = (int32_t)v5; // 0x3e0364
        uint32_t v7 = *(int32_t *)(a1 - 7); // 0x3e0364
        v3 = v5 & 0xffffff35 ^ 0xc44f10c;
        v4 = v6 - v7;
        v2 = v7 > v6;
    }
    unsigned char v8 = (char)v3; // 0x3e0367
    unsigned char v9 = v2 ? 116 : 115; // 0x3e0367
    float80_t v10; // 0x3e0340
    *(int32_t *)(v4 + 0xb10b272) = (int32_t)v10;
    __writegsbyte(a1, (char)(v3 / 256));
    int64_t v11 = v3 & -256 | (int64_t)(v8 - v9); // 0x3e0375
    if (v9 >= v8) {
        v11 = function_3e0336();
    }
    // 0x3e0377
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result = v11; // 0x3e0385
    if ((int32_t)v5 < 0xd7012f8e) {
        result = function_3e0318();
    }
    int32_t * v12 = (int32_t *)(a3 + 0x608e07f2); // 0x3e038c
    int32_t v13 = *v12; // 0x3e038c
    *v12 = 2 * v13 | (int32_t)(v13 < 0);
    return result;
}

// Address range: 0x3e03d5 - 0x3e03d6
int64_t function_3e03d5(void) {
    // 0x3e03d5
    int64_t result; // 0x3e03d5
    return result;
}

// Address range: 0x3e0447 - 0x3e044a
int64_t function_3e0447(int64_t a1) {
    // 0x3e0447
    int64_t result; // 0x3e0447
    bool v1; // 0x3e0447
    if (v1) {
        result = function_3e03d5();
    }
    // 0x3e0449
    return result;
}

// Address range: 0x3e0453 - 0x3e0517
int64_t function_3e0453(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3e0453
    int64_t v1; // 0x3e0453
    int64_t v2 = v1;
    int64_t v3 = a1;
    unsigned char v4 = (char)v1; // 0x3e0453
    bool v5; // 0x3e0453
    unsigned char v6 = v5 ? -8 : -9; // 0x3e0453
    int64_t v7 = v5 | v6 > v4 ? 0x296fac21 : 0x296fac20; // 0x3e0496
    uint64_t v8 = (v1 & 0xffffff00 | (int64_t)(v4 - v6)) - v7; // 0x3e0496
    uint32_t v9 = (int32_t)a4 - 1; // 0x3e049b
    if (v9 == 0) {
        // 0x3e049e
        if (llvm_ctpop_i8((char)(a3 / 256) + (char)a3) % 2 != 0) {
            // 0x3e04a2
            return v8 & 0xffffffff;
        }
        // 0x3e0480
        *(int32_t *)a1 = (int32_t)a2;
        return v8 & 0xfffffff8 | 7;
    }
    // 0x3e04a3
    *(char *)v2 = (char)v2;
    int64_t v10 = (int64_t)v9 - 1; // 0x3e0515
    if (v10 == 0) {
        // 0x3e04a2
        return v8 & 0xffffffff;
    }
    // 0x3e04f7
    __asm_in(99);
    uint32_t v11 = ((int32_t)(v8 / 256 & v10) | (int32_t)(char)&g4) % 32; // 0x3e050a
    if (v11 != 0) {
        uint32_t v12 = *(int32_t *)&v3; // 0x3e050a
        *(int32_t *)v3 = v12 >> 32 - v11 | v12 << v11;
    }
    *(char *)v3 = (char)a2;
    return a2 & 0xffffffff;
}

// Address range: 0x3e053a - 0x3e053d
int64_t function_3e053a(int64_t a1) {
    // 0x3e053a
    int64_t result; // 0x3e053a
    return result;
}

// Address range: 0x3e0563 - 0x3e056c
int64_t function_3e0563(void) {
    // 0x3e0563
    return __asm_int1((int64_t)&g7);
}

// Address range: 0x3e0572 - 0x3e0573
int64_t function_3e0572(void) {
    // 0x3e0572
    int64_t result; // 0x3e0572
    return result;
}

// Address range: 0x3e062c - 0x3e0632
int64_t function_3e062c(int64_t a1) {
    // 0x3e062c
    int64_t result; // 0x3e062c
    while ((result & 0x4100) == 0) {
        // continue -> 0x3e062f
    }
    // 0x3e0631
    return result;
}

// Address range: 0x3e06b2 - 0x3e06b3
int64_t function_3e06b2(void) {
    // 0x3e06b2
    int64_t result; // 0x3e06b2
    return result;
}

// Address range: 0x3e06df - 0x3e06e0
int64_t function_3e06df(void) {
    // 0x3e06df
    int64_t result; // 0x3e06df
    return result;
}

// Address range: 0x3e06e4 - 0x3e06ff
int64_t function_3e06e4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x3e06e4
    uint32_t v3 = (int32_t)v2; // 0x3e06e6
    uint32_t v4 = (int32_t)a1; // 0x3e06e6
    int32_t * v5 = (int32_t *)(a2 + 108); // 0x3e06e9
    *v5 = v4 - v3 + (int32_t)(v4 > v3) + *v5;
    unsigned char v6 = (char)(a3 / 256); // 0x3e06ef
    int32_t v7; // 0x3e06f8
    if (v6 == -v6) {
        // 0x3e06f3
        function_3e06b2();
    } else {
        if (-1 - v6 >= v6) {
            // 0x3e06f5
            v7 = *(int32_t *)&v1;
            *(int32_t *)v1 = (int32_t)(-1 - v6 < v6) + (int32_t)a5 + v7;
            return function_26fecc6c();
        }
    }
    function_3e06df();
    // 0x3e06f5
    v7 = *(int32_t *)&v1;
    *(int32_t *)v1 = (int32_t)(-1 - v6 < v6) + (int32_t)a5 + v7;
    return function_26fecc6c();
}

// Address range: 0x3e0721 - 0x3e0723
int64_t function_3e0721(void) {
    // 0x3e0721
    int64_t result; // 0x3e0721
    return result;
}

// Address range: 0x3e076c - 0x3e076d
int64_t function_3e076c(void) {
    // 0x3e076c
    int64_t result; // 0x3e076c
    return result;
}

// Address range: 0x3e0771 - 0x3e0777
int64_t function_3e0771(void) {
    // 0x3e0771
    return function_599438e6();
}

// Address range: 0x3e07ba - 0x3e07bb
int64_t function_3e07ba(void) {
    // 0x3e07ba
    int64_t result; // 0x3e07ba
    return result;
}

// Address range: 0x3e07bd - 0x3e0867
int64_t function_3e07bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e07bd
    int64_t v1; // 0x3e07bd
    int64_t result = v1;
    int32_t * v2 = (int32_t *)(a1 - 64 + 8 * v1); // 0x3e07c2
    uint32_t v3 = *v2; // 0x3e07c2
    bool v4; // 0x3e07bd
    uint32_t v5 = v3 + (v4 ? -0x6e7cc00d : -0x6e7cc00e); // 0x3e07c2
    bool v6 = v4 ? v5 <= v3 : v3 > 0x6e7cc00d; // 0x3e07c2
    *v2 = v5;
    if (v5 >= 1) {
        unsigned char v7 = (char)result; // 0x3e07cc
        unsigned char v8 = v7 - 114 + (char)v6; // 0x3e07cc
        bool v9 = v6 ? v8 <= v7 : v7 > 113; // 0x3e07cc
        return ((int64_t)v8 + 188 + (int64_t)v9) % 256 | result & -256;
    }
    int32_t v10 = v5 + (int32_t)v4; // 0x3e07c2
    if (v5 != 0 == ((v10 ^ v3) & (v10 ^ -0x80000000)) < 0 == (v5 != 0)) {
        // 0x3e0864
        return result;
    }
    // 0x3e0825
    return (result - (v6 ? 4 : 3)) % 256 | result & -256;
}

// Address range: 0x3e0868 - 0x3e0908
int64_t function_3e0868(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3e0868
    int64_t v1; // 0x3e0868
    int64_t v2 = v1;
    int64_t v3 = a3;
    char * v4 = (char *)(a4 + 0x78c0e554 + 2 * v1); // 0x3e0868
    *v4 = *v4 + (char)(a3 / 256);
    int32_t * v5 = (int32_t *)(a2 - 125 + v1); // 0x3e0871
    uint32_t v6 = *v5; // 0x3e0871
    *v5 = v6 / 2 | 0x80000000 * v6;
    int32_t v7 = *(int32_t *)(a1 - 104 + v1); // 0x3e087a
    int32_t v8 = v7 & (int32_t)((v2 + 205 + (int64_t)(v6 % 2 != 0)) % 256 | v2 & 0xffffff00); // 0x3e087a
    int64_t result = 4 * a4 + a1 & 0xffffffff; // 0x3e087e
    __asm_in_133(25);
    int64_t v9; // 0x3e0868
    int64_t v10; // 0x3e0868
    if (v8 >= 0 == (v8 != 0)) {
        int64_t v11 = v3;
        *(char *)v11 = *(char *)&v3 & (char)v11;
        *(int32_t *)0xc49f12c = (int32_t)a1;
        char * v12 = (char *)(result - 19); // 0x3e08e7
        *v12 = *v12 - (char)v3;
        v9 = v3;
        v10 = a5;
    } else {
        int64_t v13 = (int64_t)*(int32_t *)-0x37af5eddbf68daf4; // 0x3e0886
        int32_t * v14 = (int32_t *)(a4 + 34); // 0x3e088f
        uint32_t v15 = *v14; // 0x3e088f
        uint32_t v16 = (int32_t)a1; // 0x3e088f
        int32_t v17 = v15 - v16; // 0x3e088f
        *v14 = v17;
        if (v15 >= v16 && v17 != 0) {
            // 0x3e08f5
            *(char *)a1 = *(char *)v13;
            return result;
        }
        if (a4 == 0) {
            // 0x3e08fd
            return v15 >= v16 ? a5 : v13;
        }
        // 0x3e0896
        int3_t v18; // 0x3e0868
        float80_t v19 = __frontend_reg_load_fpr(v18); // 0x3e0896
        __frontend_reg_store_fpr(v18, v19 + (float80_t)*(float32_t *)(8 * result - 39 + v3));
        char v20 = *(char *)(v1 - 43) ^ (char)v3; // 0x3e089b
        int64_t v21 = v3 & -256 | (int64_t)v20; // 0x3e089b
        v3 = v21;
        v9 = v21;
        v10 = a1;
        if (v20 < 0) {
            // 0x3e08a0
            return (256 * a4 | -0xff01) & unknown_ffffffff8d8e2f82();
        }
    }
    int16_t v22 = v9; // 0x3e08ec
    __asm_in_134(v22);
    *(int32_t *)v10 = __asm_insd(v22);
    return __asm_int1((int64_t)&g7);
}

// Address range: 0x3e0946 - 0x3e0968
int64_t function_3e0946(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e0946
    bool v1; // 0x3e0946
    bool v2 = v1;
    uint32_t v3 = (int32_t)a3; // 0x3e0946
    int64_t v4; // 0x3e0946
    uint32_t v5 = (int32_t)v2 + (int32_t)v4; // 0x3e0946
    if (v2 ? v5 != -1 || (int32_t)v2 + v3 - v5 > v3 : v5 > v3) {
        int64_t v6 = v4 & -252; // 0x3e0960
        *(int32_t *)a1 = (int32_t)v6;
        return v6 + 0xa2cb4e00 & 0xffffff04;
    }
    // 0x3e094a
    return v4 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x3e09c4 - 0x3e09c7
int64_t function_3e09c4(int64_t a1) {
    // 0x3e09c4
    int64_t result; // 0x3e09c4
    return result;
}

// Address range: 0x3e09d4 - 0x3e09d5
int64_t function_3e09d4(int64_t a1) {
    // 0x3e09d4
    int64_t result; // 0x3e09d4
    return result;
}

// Address range: 0x3e0a01 - 0x3e0a0b
int64_t function_3e0a01(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e0a01
    int64_t result; // 0x3e0a01
    return result;
}

// Address range: 0x3e0a0c - 0x3e0a7b
int64_t function_3e0a0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x3e0a0c
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x3e0a0c
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x3e0a0c
    int16_t v5 = a3; // 0x3e0a0d
    char v6 = __asm_insb(v5); // 0x3e0a0d
    char * v7 = (char *)v4; // 0x3e0a0d
    *v7 = v6;
    int64_t v8 = v2 + 0x47948840 + (int64_t)v3; // 0x3e0a0e
    int64_t result = v8 & 0xffffffff; // 0x3e0a0e
    int64_t v9 = v2 | v2;
    int32_t v10 = v9; // 0x3e0a13
    if (v10 >= 0) {
        // 0x3e0a43
        *v7 = v6 + 64;
        return result;
    }
    int64_t * v11 = (int64_t *)(v9 & 0xffffffff); // 0x3e0a17
    int64_t v12 = *v11; // 0x3e0a17
    *v11 = v1;
    int64_t v13 = (int64_t)(v10 == 0 ? *(int32_t *)(v2 + 79) : v10); // 0x3e0a19
    char * v14 = (char *)(result - 42 + 2 * result); // 0x3e0a1d
    *v14 = *v14 >> 1;
    int32_t * v15 = (int32_t *)(8 * v12 + v13); // 0x3e0a26
    *v15 = *v15 & (int32_t)v2;
    int64_t v16 = v13 - 8; // 0x3e0a29
    *(int64_t *)v16 = a3;
    int32_t * v17 = (int32_t *)v12; // 0x3e0a2e
    __asm_out_135(v5, (char)v8 & 54);
    if (*(int32_t *)&v1 - (int32_t)v16 >= 0) {
        // 0x3e0a35
        return __asm_in_136(v5);
    }
    int64_t result2 = v8 & 0xa8047802; // 0x3e0a65
    float64_t v18 = *(float64_t *)(result2 + 83); // 0x3e0a69
    *(float80_t *)(v4 + 0x2c5261cc) = (float80_t)v18 / (float80_t)*v17;
    __asm_outsd(v5, *v17);
    return result2;
}

// Address range: 0x3e0a7d - 0x3e0a85
int64_t function_3e0a7d(int64_t a1) {
    // 0x3e0a7d
    bool v1; // 0x3e0a7d
    return function_69adcd96((v1 ? -4 : 4) + a1);
}

// Address range: 0x3e0ae6 - 0x3e0ae9
int64_t function_3e0ae6(int64_t a1) {
    // 0x3e0ae6
    int64_t result; // 0x3e0ae6
    return result;
}

// Address range: 0x3e0aec - 0x3e0af5
int64_t function_3e0aec(int64_t a1) {
    // 0x3e0aec
    int64_t v1; // 0x3e0aec
    return v1 & 0x671ae7f8 | 0x98e51807;
}

// Address range: 0x3e0b1c - 0x3e0b1e
int64_t function_3e0b1c(void) {
    // 0x3e0b1c
    return function_3e0b52();
}

// Address range: 0x3e0b50 - 0x3e0b52
int64_t function_3e0b50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e0b50
    int64_t result; // 0x3e0b50
    return result;
}

// Address range: 0x3e0b52 - 0x3e0b53
int64_t function_3e0b52(void) {
    // 0x3e0b52
    int64_t result; // 0x3e0b52
    return result;
}

// Address range: 0x3e0b53 - 0x3e0b59
int64_t function_3e0b53(int64_t a1) {
    // 0x3e0b53
    int64_t result; // 0x3e0b53
    bool v1; // 0x3e0b53
    if (v1) {
        int64_t v2; // 0x3e0b53
        result = function_3e0b6e(v2, v2, v2, v2);
    }
    // 0x3e0b55
    return result;
}

// Address range: 0x3e0b63 - 0x3e0b64
int64_t function_3e0b63(void) {
    // 0x3e0b63
    int64_t result; // 0x3e0b63
    return result;
}

// Address range: 0x3e0b6e - 0x3e0b70
int64_t function_3e0b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = a4;
    unsigned char v2 = v1 % 32; // 0x3e0b6e
    if (v2 != 0) {
        *(char *)a4 = v1 >> v2;
    }
    int64_t result; // 0x3e0b6e
    return result;
}

// Address range: 0x3e0b93 - 0x3e0ba7
int64_t function_3e0b93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e0b93
    return __asm_wait() ^ 61;
}

// Address range: 0x3e0c5a - 0x3e0c5c
int64_t function_3e0c5a(void) {
    // 0x3e0c5a
    int64_t v1; // 0x3e0c5a
    return function_3e0cac(v1, v1, v1, v1);
}

// Address range: 0x3e0c9a - 0x3e0c9c
int64_t function_3e0c9a(void) {
    // 0x3e0c9a
    int64_t v1; // 0x3e0c9a
    return function_3e0cf7(v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x3e0cac - 0x3e0cb0
int64_t function_3e0cac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e0cac
    int64_t result; // 0x3e0cac
    return result;
}

// Address range: 0x3e0cb4 - 0x3e0cd8
int64_t function_3e0cb4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3e0cb4
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1 = a4 + a3; // 0x3e0cb5
    bool v2; // 0x3e0cb4
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x3e0cbb
    *(int32_t *)v3 = __asm_insd((int16_t)v1);
    int64_t v4 = __asm_int1((int64_t)&g7) - *(int64_t *)(v3 + 75); // 0x3e0cc8
    char * v5 = (char *)(v1 & 0xffffffff); // 0x3e0ccc
    *v5 = *v5 + (char)(a4 / 256);
    *(int64_t *)(35 * a4 & 0xffffffff) = a5;
    char * v6 = (char *)(v3 - 53); // 0x3e0cd2
    unsigned char v7 = *v6; // 0x3e0cd2
    *v6 = v7 / 128 | 2 * v7;
    return (v4 + 162) % 256 | v4 & -256;
}

// Address range: 0x3e0cec - 0x3e0cf6
int64_t function_3e0cec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a5; // 0x3e0ced
    bool v1; // 0x3e0cec
    if (true == !v1) {
        result = function_3e0cb4(a1, a2, a3, a4, (int64_t)&g7);
    }
    int32_t * v2 = (int32_t *)(4 * a2 + 0xee4260b + a4); // 0x3e0cef
    int64_t v3; // 0x3e0cec
    *v2 = *v2 & (int32_t)v3;
    return result;
}

// Address range: 0x3e0cf7 - 0x3e0d02
int64_t function_3e0cf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e0cf7
    int64_t v1; // 0x3e0cf7
    function_3e0cec(a1, a2, a3, v1, (int64_t)&g7);
    return function_131e47f9();
}

// Address range: 0x3e0d18 - 0x3e0d23
int64_t function_3e0d18(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 119); // 0x3e0d18
    int64_t v2; // 0x3e0d18
    bool v3; // 0x3e0d18
    *v1 = *v1 + (char)v2 + (char)v3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_ffffffff967b475a();
}

// Address range: 0x3e0d6f - 0x3e0d71
int64_t function_3e0d6f(int64_t a1) {
    // 0x3e0d6f
    int64_t result; // 0x3e0d6f
    return result;
}

// Address range: 0x3e0dd8 - 0x3e0dd9
int64_t function_3e0dd8(void) {
    // 0x3e0dd8
    int64_t result; // 0x3e0dd8
    return result;
}

// Address range: 0x3e0e21 - 0x3e0e25
int64_t function_3e0e21(int64_t a1) {
    // 0x3e0e21
    int64_t result; // 0x3e0e21
    return result;
}

// Address range: 0x3e0e48 - 0x3e0e68
int64_t function_3e0e48(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e0e48
    int64_t v1; // 0x3e0e48
    char * v2 = (char *)(v1 - 0xa9fbefc); // 0x3e0e48
    unsigned char v3 = *v2; // 0x3e0e48
    *v2 = 2 * v3;
    if (v3 / 64 % 2 == v3 / 128) {
        function_3e0dd8();
    }
    int32_t * v4 = (int32_t *)(v1 + 9); // 0x3e0e57
    *v4 = *v4 & (int32_t)a2;
    *(int64_t *)0x63cd9365 = a4;
    return 0x78546976;
}

// Address range: 0x3e0e99 - 0x3e0e9c
int64_t function_3e0e99(int64_t a1) {
    // 0x3e0e99
    int64_t result; // 0x3e0e99
    return result;
}

// Address range: 0x3e0eec - 0x3e0ef1
int64_t function_3e0eec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e0eec
    int64_t result; // 0x3e0eec
    return result;
}

// Address range: 0x3e0efc - 0x3e0efd
int64_t function_3e0efc(void) {
    // 0x3e0efc
    int64_t result; // 0x3e0efc
    return result;
}

// Address range: 0x3e0f06 - 0x3e0f0a
int64_t function_3e0f06(void) {
    // 0x3e0f06
    __asm_wait();
    int64_t v1; // 0x3e0f06
    return function_3e0f0f(v1, v1, v1);
}

// Address range: 0x3e0f0d - 0x3e0f0f
int64_t function_3e0f0d(void) {
    // 0x3e0f0d
    int64_t result; // 0x3e0f0d
    return result;
}

// Address range: 0x3e0f0f - 0x3e0f31
int64_t function_3e0f0f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e0f0f
    bool v1; // 0x3e0f0f
    bool v2 = v1;
    int64_t v3; // 0x3e0f0f
    __asm_outsd((int16_t)a3, (int32_t)v3);
    int64_t v4 = 0x100000000000000 * v3 >> 56; // 0x3e0f21
    unsigned char v5 = (char)unknown_7383a328(); // 0x3e0f23
    bool v6 = v2 ? (v2 ? -12 : -13) + v5 <= v5 : v5 > 12; // 0x3e0f23
    int32_t * v7 = (int32_t *)(v3 - 0x37ddffa3); // 0x3e0f25
    *v7 = *v7 + 1;
    unsigned char v8 = (char)v4; // 0x3e0f2b
    char v9 = v6; // 0x3e0f2b
    int64_t v10; // 0x3e0f0f
    unsigned char v11 = *(char *)&v10 + v9; // 0x3e0f2b
    unsigned char v12 = v8 - v11; // 0x3e0f2b
    int64_t result = v4 & 0xffffff00 | (int64_t)v12; // 0x3e0f2f
    if (!((v6 ? v11 != -1 || v12 - v9 > v8 : v11 > v8))) {
        result = function_3e0efc();
    }
    // 0x3e0f31
    return result;
}

// Address range: 0x3e0f72 - 0x3e0f8f
int64_t function_3e0f72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x3e0f72
    if (v1 != 0) {
        *(int32_t *)a3 = (int32_t)a3 >> v1;
    }
    int64_t v2; // 0x3e0f72
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) - 0x783045cf); // 0x3e0f75
    *v3 = *v3 ^ (int32_t)v2;
    char v4 = __asm_in_134((int16_t)a3); // 0x3e0f88
    int32_t v5 = *(int32_t *)(a3 + 52); // 0x3e0f89
    return v5 & (int32_t)(v2 & 0xffffff00 | (int64_t)v4);
}

// Address range: 0x3e0fa0 - 0x3e0fa4
int64_t function_3e0fa0(int64_t a1) {
    // 0x3e0fa0
    return __asm_int1(a1);
}

// Address range: 0x3e0fb0 - 0x3e0fb4
int64_t function_3e0fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x3e0fb0
    bool v2; // 0x3e0fb0
    if (v1 != 0 && !v2) {
        function_3e0f72(a1, a2, a3, v1);
    }
    // 0x3e0fb2
    return function_3e0fec(a1, a2, a3, v1, (int64_t)&g7);
}

// Address range: 0x3e0fe2 - 0x3e0fe9
int64_t function_3e0fe2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e0fe2
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_1d431774();
}

// Address range: 0x3e0fec - 0x3e0ff7
int64_t function_3e0fec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e0fec
    int64_t result; // 0x3e0fec
    int32_t v1 = result;
    __asm_outsd((int16_t)a3, v1);
    *(int32_t *)a2 = v1 + (int32_t)result;
    int64_t v2; // 0x3e0fec
    *(int32_t *)a1 = *(int32_t *)&v2;
    return result;
}

// Address range: 0x3e1058 - 0x3e1059
int64_t function_3e1058(int64_t a1) {
    // 0x3e1058
    int64_t result; // 0x3e1058
    return result;
}
