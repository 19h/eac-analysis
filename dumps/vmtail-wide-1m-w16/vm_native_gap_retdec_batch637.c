/*
 * Targeted RetDec C for native executable gap queue batch 637.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x120d46-0x120f46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x121146-0x121346 rank=- name=- kind=- bytes=- uncovered=-
 *   0x121546-0x121746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x386da8-0x386fa8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x412d42-0x412f42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x412f42-0x413142 rank=- name=- kind=- bytes=- uncovered=-
 *   0x413142-0x413342 rank=- name=- kind=- bytes=- uncovered=-
 *   0x413342-0x413542 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_120d46(void);
int64_t function_120d57(int64_t a1, int64_t a2);
int64_t function_120d99(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_120dc8(void);
int64_t function_120ddd(int64_t a1);
int64_t function_120de4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_120e33(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_120e69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_120eb8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_120f24(void);
int64_t function_12111e();
int64_t function_121146(void);
int64_t function_1211b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_121276(void);
int64_t function_12127b(void);
int64_t function_1212c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1212ee(void);
int64_t function_121524();
int64_t function_121546(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1215d1(void);
int64_t function_1215da(void);
int64_t function_1215e0(void);
int64_t function_1215ee(void);
int64_t function_12160f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12161b(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_12173c(void);
int64_t function_386da8(int64_t a1, int64_t a2);
int64_t function_386dd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_386f9b(int64_t a1);
int64_t function_386fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_412d00();
int64_t function_412d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_412e19(int64_t a1, int64_t a2);
int64_t function_412e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_412e79(int64_t a1);
int64_t function_412e80(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_412ea9(int64_t a1);
int64_t function_412ee7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_412ef3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_412f6e(void);
int64_t function_412f8a(void);
int64_t function_412fba(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_41303e(int64_t a1);
int64_t function_4130e0(int64_t a1);
int64_t function_413154(int64_t a1);
int64_t function_413184(void);
int64_t function_4131b1(void);
int64_t function_4131c3(int64_t a1);
int64_t function_4131df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41321a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_413296(int64_t a1);
int64_t function_4132d4(void);
int64_t function_413301(void);
int64_t function_413308(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_413346(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41334a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_413370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4134b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4cc3d500();
int64_t function_564ab42f();
int64_t function_cc59c();
int64_t function_ffffffff986f6786();
int64_t unknown_1fa6a12();
int64_t unknown_209d94c2();
int64_t unknown_284ca0a8();
int64_t unknown_2b085ffc();
int64_t unknown_3aa3703e();
int64_t unknown_796066b();
int64_t unknown_ffffffff825ecd71();
int64_t unknown_ffffffff9306afde();
int64_t unknown_ffffffff9c1c9e1b();
int64_t unknown_ffffffffbc6f272f();
int64_t unknown_ffffffffc36413a2();
int64_t unknown_ffffffffc5367424();
int64_t unknown_ffffffffc5d6444b();
int64_t unknown_ffffffffd3c7f052();
int64_t unknown_ffffffffe81cee3c();
int64_t unknown_fffffffff72412d1();

// Address range: 0x120d46 - 0x120d56
int64_t function_120d46(void) {
    // 0x120d46
    int64_t v1; // 0x120d46
    return v1 & -256 | (int64_t)*(char *)0x1e8008907325c0a;
}

// Address range: 0x120d57 - 0x120d59
int64_t function_120d57(int64_t a1, int64_t a2) {
    // 0x120d57
    int64_t result; // 0x120d57
    return result;
}

// Address range: 0x120d99 - 0x120dae
int64_t function_120d99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc36413a2(); // 0x120d99
    *(int32_t *)v1 = (int32_t)v1;
    int64_t result = unknown_284ca0a8(); // 0x120da0
    int64_t v2; // 0x120d99
    char * v3 = (char *)(v2 + 86); // 0x120da7
    *v3 = *v3 + (char)a3;
    return result;
}

// Address range: 0x120dc8 - 0x120dcc
int64_t function_120dc8(void) {
    // 0x120dc8
    int64_t result; // 0x120dc8
    return result;
}

// Address range: 0x120ddd - 0x120dde
int64_t function_120ddd(int64_t a1) {
    // 0x120ddd
    int64_t result; // 0x120ddd
    return result;
}

// Address range: 0x120de4 - 0x120dec
int64_t function_120de4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x120de4
    int64_t result; // 0x120de4
    return result;
}

// Address range: 0x120e33 - 0x120e4d
int64_t function_120e33(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x120e33
    char * v3 = (char *)(v2 - 92); // 0x120e34
    *v3 = *v3 | (char)(a3 / 256);
    __asm_wait();
    int64_t v4 = unknown_3aa3703e(); // 0x120e38
    uint32_t v5 = (int32_t)a4 % 32; // 0x120e3e
    int32_t v6; // 0x120e33
    if (v5 == 0) {
        // .thread
        __asm_out(0, (int32_t)v4);
        v6 = 0;
    } else {
        int32_t * v7 = (int32_t *)v4; // 0x120e3e
        uint32_t v8 = *v7; // 0x120e3e
        uint32_t v9 = 32 - v5;
        *v7 = v8 >> v9 | v8 << v5;
        __asm_out(0, (int32_t)v4);
        uint32_t v10 = *v7; // 0x120e43
        uint32_t v11 = v10 >> v9 | v10 << v5; // 0x120e43
        *v7 = v11;
        v6 = v11 % 2 != 0;
    }
    int64_t result = unknown_ffffffffc5d6444b(); // 0x120e45
    *(int32_t *)v1 = v6 - (int32_t)a1 + *(int32_t *)&v1;
    return result;
}

// Address range: 0x120e69 - 0x120e87
int64_t function_120e69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a3;
    uint32_t v2 = v1 + (int32_t)a2; // 0x120e6e
    *(int32_t *)a3 = v2;
    unsigned char v3 = (char)a4 % 32; // 0x120e70
    int64_t v4; // 0x120e69
    if (v3 != 0) {
        unsigned char v5 = *(char *)&v4; // 0x120e70
        *(char *)v4 = v5 << v3 | (char)(v2 < v1) << v3 - 1 | (char)((int16_t)v5 >> (int16_t)(9 - v3));
    }
    char * v6 = (char *)(a4 + 0xad85f10); // 0x120e72
    *v6 = 2 * *v6;
    int16_t v7 = a3; // 0x120e78
    __asm_out_133(v7, (int32_t)v4);
    return v4 & -256 | (int64_t)__asm_in(v7);
}

// Address range: 0x120eb8 - 0x120ec2
int64_t function_120eb8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x120eb8
    int64_t result; // 0x120eb8
    return result;
}

// Address range: 0x120f24 - 0x120f2d
int64_t function_120f24(void) {
    // 0x120f24
    int64_t result; // 0x120f24
    bool v1; // 0x120f24
    if (true == !v1) {
        result = function_4cc3d500();
    }
    // 0x120f2a
    return result;
}

// Address range: 0x121146 - 0x121148
int64_t function_121146(void) {
    // 0x121146
    int64_t result; // 0x121146
    bool v1; // 0x121146
    if (true == !v1) {
        result = function_12111e();
    }
    // 0x121148
    return result;
}

// Address range: 0x1211b0 - 0x1211bc
int64_t function_1211b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1211b0
    float80_t v1; // 0x1211b0
    *(int16_t *)(a4 + 0x1e87795) = (int16_t)v1;
    int64_t result; // 0x1211b0
    return result;
}

// Address range: 0x121276 - 0x121277
int64_t function_121276(void) {
    // 0x121276
    int64_t result; // 0x121276
    return result;
}

// Address range: 0x12127b - 0x12127c
int64_t function_12127b(void) {
    // 0x12127b
    int64_t result; // 0x12127b
    return result;
}

// Address range: 0x1212c6 - 0x1212ee
int64_t function_1212c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    unknown_796066b();
    int64_t result = unknown_fffffffff72412d1(); // 0x1212cb
    if (a4 != 1) {
        // 0x121357
        return result;
    }
    unsigned char v2 = (char)result; // 0x1212d5
    if (v2 != 37) {
        function_121276();
    }
    uint32_t v3 = (int32_t)a3;
    *(int32_t *)a3 = v3 / 4 | 0x80000000 * v3 | 0x40000000 * (int32_t)(v2 < 37);
    int64_t v4 = v1;
    *(char *)v4 = *(char *)&v1 + (char)v4;
    return function_12127b();
}

// Address range: 0x1212ee - 0x1212f3
int64_t function_1212ee(void) {
    // 0x1212ee
    int64_t result; // 0x1212ee
    return result;
}

// Address range: 0x121546 - 0x12155a
int64_t function_121546(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x121546
    function_121524();
    int64_t v1 = a4 - 1; // 0x12154b
    int64_t result = __asm_iretd(); // 0x12154d
    int64_t v2; // 0x121546
    char * v3 = (char *)((v2 & -0xff01) - 24); // 0x12154f
    *v3 = *v3 - (char)v1;
    int32_t * v4 = (int32_t *)(result - 60); // 0x121552
    *v4 = *v4 + (int32_t)v1;
    return result;
}

// Address range: 0x1215d1 - 0x1215d2
int64_t function_1215d1(void) {
    // 0x1215d1
    int64_t result; // 0x1215d1
    return result;
}

// Address range: 0x1215da - 0x1215db
int64_t function_1215da(void) {
    // 0x1215da
    int64_t result; // 0x1215da
    return result;
}

// Address range: 0x1215e0 - 0x1215e1
int64_t function_1215e0(void) {
    // 0x1215e0
    int64_t result; // 0x1215e0
    return result;
}

// Address range: 0x1215ee - 0x1215f0
int64_t function_1215ee(void) {
    // 0x1215ee
    return function_1215e0();
}

// Address range: 0x12160f - 0x12161b
int64_t function_12160f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x12160f
    return unknown_ffffffff9c1c9e1b(a1, a2, a3);
}

// Address range: 0x12161b - 0x121700
int64_t function_12161b(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3;
    int64_t v2 = a6;
    uint64_t v3 = a4 - 1; // 0x12161b
    bool v4; // 0x12161b
    if (v3 != 0 && !v4) {
        function_1215d1();
    }
    // 0x12161d
    unknown_ffffffffc5367424();
    unsigned char v5 = *(char *)(a2 - 2) ^ (char)v3; // 0x121623
    int64_t v6 = v3 & -256 | (int64_t)v5; // 0x121623
    unknown_ffffffffbc6f272f();
    int64_t v7; // 0x12161b
    if (v6 > a3) {
        // 0x121634
        unknown_ffffffffe81cee3c();
        char * v8 = (char *)(a3 + 0x1e8ad3a); // 0x12163d
        *v8 = *v8 + 78;
        int32_t * v9 = (int32_t *)(a2 - 103); // 0x121644
        *v9 = *v9 ^ (int32_t)(v3 & 0xffffff00 | a2 % 256);
        char * v10 = (char *)(v1 - 37); // 0x121649
        *v10 = *v10 + (char)v1;
        unknown_ffffffffd3c7f052();
        unknown_1fa6a12();
        __asm_int3();
        int64_t v11 = __asm_hlt(); // 0x12165d
        v2 = v11;
        __asm_out_134(-24, (char)v11);
        int32_t * v12 = (int32_t *)(8 * v7 - 0x7349ab40); // 0x121661
        *v12 = *v12 + (int32_t)v11;
        char * v13 = (char *)v11; // 0x121668
        *v13 = *v13 - (char)a5;
        return unknown_ffffffff825ecd71();
    }
    int32_t v14 = a2;
    int64_t v15; // 0x12161b
    int32_t v16 = v15; // 0x1216ac
    *(int32_t *)a2 = v16 + v14;
    char v17 = v3 / 256; // 0x1216b5
    *(char *)v1 = *(char *)&v1 + v17;
    __asm_int(-18);
    int64_t v18 = (int64_t)(-36 * *(int32_t *)&v7); // 0x1216b9
    int64_t v19 = unknown_209d94c2(v18); // 0x1216bc
    unsigned char v20 = v5 % 32; // 0x1216c1
    if (v20 != 0) {
        char * v21 = (char *)(v6 + 58 + v19); // 0x1216c1
        *v21 = *v21 >> v20;
    }
    char * v22 = (char *)(v6 + 94); // 0x1216c5
    *v22 = *v22 | v17;
    int32_t * v23 = (int32_t *)(v18 - 0x72005f68); // 0x1216cc
    *v23 = *v23 + v16;
    v2 = v19;
    int64_t v24 = unknown_ffffffff9306afde(); // 0x1216d8
    __asm_int(35);
    int32_t v25 = v24; // 0x1216df
    uint32_t v26 = v25 + v14; // 0x1216df
    int64_t v27 = v6; // 0x1216df
    v27 = (v27 & -0xff01 | (int64_t)&g3) - 1;
    while (v26 != 0 && v27 != 0) {
        // 0x1216e1
        v27 = (v27 & -0xff01 | (int64_t)&g3) - 1;
    }
    uint64_t v28 = v27 - 256 * v24;
    int32_t * v29 = (int32_t *)(v24 + 8); // 0x1216ea
    *v29 = *v29 + (int32_t)(int64_t)&v2;
    *(int32_t *)0x1594fe2 = *(int32_t *)0x1594fe2 & v25;
    int64_t v30 = unknown_2b085ffc(v18 - 1, (int64_t)v26 - 1, 14 * v7 & 0xfffffffe, v28 & 0xff00 | v27 & -0xff01); // 0x1216f6
    unsigned char v31 = (char)(v28 / 256); // 0x1216fb
    char v32 = v31 - 113; // 0x1216fb
    return 256 * (16 * (int64_t)(v31 % 16 != 0) | (int64_t)(v31 > 112) | 64 * (int64_t)(v32 == 0) | 128 * (int64_t)(v32 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v32) % 2 == 0)) | v30 & -0xff01 | 512;
}

// Address range: 0x12173c - 0x12173e
int64_t function_12173c(void) {
    // 0x12173c
    int64_t result; // 0x12173c
    return result;
}

// Address range: 0x386da8 - 0x386dd7
int64_t function_386da8(int64_t a1, int64_t a2) {
    // 0x386da8
    int64_t v1; // 0x386da8
    return function_cc59c(v1);
}

// Address range: 0x386dd7 - 0x386f47
int64_t function_386dd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x386dd7
    return function_cc59c(310);
}

// Address range: 0x386f9b - 0x386f9f
int64_t function_386f9b(int64_t a1) {
    // 0x386f9b
    int64_t result; // 0x386f9b
    return result;
}

// Address range: 0x386fa0 - 0x386fa6
int64_t function_386fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x386fa0
    int64_t v1; // 0x386fa0
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result + 1); // 0x386fa2
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x412d42 - 0x412e11
int64_t function_412d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x412d42
    int64_t v1; // 0x412d42
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x412d42
    if ((*(int32_t *)(a4 + 44) & (int32_t)v1) >= 0) {
        v2 = function_412d00();
    }
    int16_t v3 = a3; // 0x412d4e
    int32_t v4 = __asm_insd(v3); // 0x412d4e
    bool v5; // 0x412d42
    int32_t * v6 = (int32_t *)((v5 ? -4 : 4) + a1); // 0x412d4e
    *v6 = v4;
    int64_t v7 = v2; // 0x412d4e
    int64_t v8 = a4; // 0x412d4e
    while (true) {
        int32_t * v9 = (int32_t *)((int64_t)(-119 * *(int32_t *)v7) + 0xf4616); // 0x412d57
        uint32_t v10 = *v9; // 0x412d57
        *v9 = v10 - 0x3f4f7152;
        int64_t v11 = v7 & 0xffffffff; // 0x412d5d
        __asm_outsb(v3, *(char *)*(int64_t *)(v11 + 8));
        int64_t v12 = v8; // 0x412d60
        int64_t v13 = *(int64_t *)v11;
        bool v14 = v10 < 0x3f4f7152;
        int64_t v15 = v11 + 8; // 0x412d61
        int64_t v16; // 0x412d42
        *(int64_t *)v15 = v16;
        int64_t v17 = v15 - (int64_t)&g4; // 0x412d61
        v12--;
        *v6 = __asm_insd(v3);
        int64_t v18 = v17 - 8; // 0x412d68
        *(int64_t *)v18 = v15;
        uint32_t v19 = (int32_t)0x3f4f7152; // 0x412d6e
        int32_t v20 = v19 - 0x13aaed89; // 0x412d6e
        bool v21 = v14 ? v20 + (int32_t)v14 <= v19 : v19 > 0x13aaed88; // 0x412d6e
        int64_t v22 = v17 + 1953; // 0x412d73
        *(int64_t *)v22 = v12;
        int64_t v23 = __asm_int1(); // 0x412d74
        v7 = v23;
        v8 = v12;
        while (v20 != (int32_t)v14 && !v21) {
            // 0x412d61
            v16 = v18;
            int64_t v24 = v13 & -0xff01 | (int64_t)".2"; // 0x412d6c
            char * v25 = (char *)(v24 + 0x175e052f); // 0x412d79
            unsigned char v26 = *v25; // 0x412d79
            *v25 = v26 / 2;
            int64_t v27 = (v23 | v12) & 0xffffffff; // 0x412d42
            v13 = v24;
            v14 = v26 % 2 != 0;
            v15 = v22 - 8;
            *(int64_t *)v15 = v18;
            v17 = v15 - (int64_t)&g4;
            v12--;
            *v6 = __asm_insd(v3);
            v18 = v17 - 8;
            *(int64_t *)v18 = v15;
            v19 = (int32_t)v27;
            v20 = v19 - 0x13aaed89;
            v21 = v14 ? v20 + (int32_t)v14 <= v19 : v19 > 0x13aaed88;
            v22 = v17 + 1953;
            *(int64_t *)v22 = v12;
            v23 = __asm_int1();
            v7 = v23;
            v8 = v12;
        }
    }
}

// Address range: 0x412e19 - 0x412e2c
int64_t function_412e19(int64_t a1, int64_t a2) {
    // 0x412e19
    int64_t v1; // 0x412e19
    int32_t * v2 = (int32_t *)((2 * v1 & 0x1fffffffe) + 29); // 0x412e26
    bool v3; // 0x412e19
    *v2 = (int32_t)v3 + (int32_t)v1 + *v2;
    return function_412e79(v1 & -256 | (int64_t)*(char *)0x13868e169a9e8d2e);
}

// Address range: 0x412e3d - 0x412e79
int64_t function_412e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x64d84bc7; // 0x412e46
    bool v2; // 0x412e3d
    *(char *)0x64d84bc7 = v1 + (char)a4 + (char)(bool)v2;
    *(char *)a1 = -57;
    *(char *)-0x29fb88d6ff9f6f16 = 53;
    return 0x1a6ee335;
}

// Address range: 0x412e79 - 0x412e7d
int64_t function_412e79(int64_t a1) {
    // 0x412e79
    int64_t result; // 0x412e79
    return result;
}

// Address range: 0x412e80 - 0x412e85
int64_t function_412e80(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a1 - 125); // 0x412e80
    *v1 = *v1 + (char)(a4 / 256);
    int64_t result; // 0x412e80
    return result;
}

// Address range: 0x412ea9 - 0x412eb0
int64_t function_412ea9(int64_t a1) {
    // 0x412ea9
    int64_t result; // 0x412ea9
    return result;
}

// Address range: 0x412ee7 - 0x412ef1
int64_t function_412ee7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x412ee7
    int64_t result; // 0x412ee7
    int32_t * v1 = (int32_t *)(result - 127); // 0x412ee7
    *v1 = *v1 & (int32_t)a4;
    int64_t v2; // 0x412ee7
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)result;
    return result;
}

// Address range: 0x412ef3 - 0x412f55
int64_t function_412ef3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x412ef3
    int64_t v1; // 0x412ef3
    int64_t v2 = v1;
    int64_t v3 = a2;
    uint32_t v4 = *(int32_t *)(a2 + 0x5f387b00 + v2) & (int32_t)a4; // 0x412ef3
    char * v5 = (char *)(a3 - 39); // 0x412efa
    *v5 = 2 * *v5;
    int16_t v6 = a3; // 0x412efe
    *(int32_t *)a1 = __asm_insd(v6);
    *(char *)a1 = __asm_insb(v6);
    int32_t v7 = __asm_in_136(-22); // 0x412f29
    float80_t v8; // 0x412ef3
    bool v9; // 0x412ef3
    *(int16_t *)(v3 + (v9 ? -1 : 1)) = (int16_t)v8;
    unsigned char v10 = *(char *)&v3 ^ 30; // 0x412f2f
    char v11 = *(char *)(((int64_t)v10 | (int64_t)(v7 & -256)) + 91); // 0x412f36
    int32_t v12 = *(int32_t *)((v2 - (int64_t)(v4 & 0xff00) & 0xff00 | v2 & -0xff01) - 0x45e26d87); // 0x412f3b
    int64_t v13 = *(int64_t *)(a1 + 15); // 0x412f41
    int64_t v14; // 0x412ef3
    *(int64_t *)((int64_t)((int32_t)(int64_t)&v14 - v12) - 8) = v13;
    char * v15 = (char *)(256 * (int64_t)(v11 + (char)(a3 / 256) + (char)(v10 < 218)) | a3 & -0xff01); // 0x412f44
    *v15 = *v15 & (char)(v4 / 256);
    return 0xfe47f3bf;
}

// Address range: 0x412f6e - 0x412f73
int64_t function_412f6e(void) {
    // 0x412f6e
    int64_t v1; // 0x412f6e
    return v1 | 55;
}

// Address range: 0x412f8a - 0x412f8b
int64_t function_412f8a(void) {
    // 0x412f8a
    int64_t result; // 0x412f8a
    return result;
}

// Address range: 0x412fba - 0x412fcc
int64_t function_412fba(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    char v1 = __asm_insb((int16_t)a3); // 0x412fba
    char * v2 = (char *)a1; // 0x412fba
    *v2 = v1;
    char v3 = a3 / 256; // 0x412fbf
    bool v4; // 0x412fba
    char v5 = v4; // 0x412fbf
    char v6 = v5 + v3; // 0x412fbf
    unsigned char v7 = (char)v4; // 0x412fbf
    int64_t result; // 0x412fba
    if (v6 < v3 == ((v6 ^ v3) & (v7 - v5 ^ v3)) < 0) {
        result = function_412f8a();
    }
    // 0x412fc5
    *v2 = __asm_insb((int16_t)(256 * (int64_t)v7 | a3 % 256));
    char * v8 = (char *)(a4 - 95); // 0x412fc6
    int64_t v9; // 0x412fba
    *v8 = *v8 ^ (char)((uint64_t)v9 / 256);
    return result;
}

// Address range: 0x41303e - 0x41303f
int64_t function_41303e(int64_t a1) {
    // 0x41303e
    int64_t result; // 0x41303e
    return result;
}

// Address range: 0x4130e0 - 0x4130e1
int64_t function_4130e0(int64_t a1) {
    // 0x4130e0
    int64_t result; // 0x4130e0
    return result;
}

// Address range: 0x413154 - 0x413157
int64_t function_413154(int64_t a1) {
    // 0x413154
    int64_t result; // 0x413154
    return result;
}

// Address range: 0x413184 - 0x41318a
int64_t function_413184(void) {
    // 0x413184
    int64_t v1; // 0x413184
    char * v2 = (char *)(v1 + 5); // 0x413184
    bool v3; // 0x413184
    *v2 = *v2 - (v3 ? 31 : 30);
    return function_4131c3((int64_t)&g5);
}

// Address range: 0x4131b1 - 0x4131b7
int64_t function_4131b1(void) {
    // 0x4131b1
    return function_564ab42f();
}

// Address range: 0x4131c3 - 0x4131db
int64_t function_4131c3(int64_t a1) {
    // 0x4131c3
    int64_t v1; // 0x4131c3
    int32_t * v2 = (int32_t *)(v1 + 0x299d9926); // 0x4131c5
    *v2 = *v2 ^ 103;
    return v1 & -37;
}

// Address range: 0x4131df - 0x4131eb
int64_t function_4131df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a6 - 0x7a64b22a); // 0x4131df
    *v1 = *v1 | 0x3e36063d;
    int64_t result; // 0x4131df
    return result;
}

// Address range: 0x41321a - 0x413236
int64_t function_41321a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41321a
    __asm_int(109);
    return function_ffffffff986f6786();
}

// Address range: 0x413296 - 0x413299
int64_t function_413296(int64_t a1) {
    // 0x413296
    int64_t result; // 0x413296
    return result;
}

// Address range: 0x4132d4 - 0x4132d5
int64_t function_4132d4(void) {
    // 0x4132d4
    int64_t result; // 0x4132d4
    return result;
}

// Address range: 0x413301 - 0x413302
int64_t function_413301(void) {
    // 0x413301
    int64_t result; // 0x413301
    return result;
}

// Address range: 0x413308 - 0x413346
int64_t function_413308(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x413308
    bool v4; // 0x413308
    unsigned char v5 = (char)v3 - (v4 ? 4 : 3); // 0x41330a
    uint64_t v6 = a4 & 0xffffff00;
    __asm_out_134(-104, -50);
    int32_t v7 = a1;
    *(int32_t *)a1 = 2048 * v7;
    unsigned char v8 = v5 % 32;
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)((v6 | 206) - 0x1f1efec0); // 0x413319
        uint32_t v10 = *v9; // 0x413319
        uint32_t v11 = (int32_t)v8; // 0x413319
        *v9 = v10 >> v11 | (int32_t)((v7 & 0x200000) != 0) << 32 - v11 | (int32_t)((int64_t)v10 << (int64_t)(33 - v11));
    }
    int64_t v12 = a3 & 0xffffffff; // 0x413312
    unsigned char v13 = (char)(v3 / 256); // 0x41331f
    unsigned char v14 = *(char *)(v12 - 116); // 0x41331f
    unsigned char v15 = v13 - v14; // 0x41331f
    int64_t v16 = v3 & 0xffff0000 | (int64_t)v5 | 256 * (int64_t)v15; // 0x41331f
    char * v17 = (char *)v16; // 0x413322
    *v17 = *v17 - (char)(v6 / 256) + (char)(v14 > v13);
    __asm_out_133((int16_t)v1, 0x423ff18f);
    char * v18 = (char *)(v12 - 47); // 0x413328
    unsigned char v19 = *v18; // 0x413328
    unsigned char v20 = v19 + v15; // 0x413328
    *v18 = v20;
    uint32_t v21 = *(int32_t *)&v1 + 0x423ff18f; // 0x41332b
    uint32_t v22 = v21 + (int32_t)(v20 < v19); // 0x41332b
    bool v23 = v20 < v19 ? v22 < 0x423ff190 : v21 < 0x423ff18f; // 0x41332b
    unsigned char v24 = (char)(v22 / 256); // 0x41332f
    unsigned char v25 = *(char *)(int64_t)(v22 & -256 | 161) + v24; // 0x41332f
    unsigned char v26 = v25 + (char)v23; // 0x41332f
    int32_t v27 = v23 ? v26 <= v24 : v25 < v24 ? 224 : 225; // 0x413334
    int32_t v28 = *(int32_t *)&v2; // 0x413338
    int64_t v29 = v2 + (v4 ? -4 : 4); // 0x413338
    v2 = v29;
    __asm_in_135(17);
    if ((((256 * (int32_t)v26 | v22 & -0x10000 | v27) - v28 ^ v22) & (v28 ^ v22)) < 0) {
        function_4132d4();
    }
    // 0x41333d
    *(int32_t *)0x7216ad45 = *(int32_t *)0x7216ad45 & (int32_t)v3;
    return function_41334a(v29, v12, v1, v16);
}

// Address range: 0x413346 - 0x41334a
int64_t function_413346(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x413346
    int64_t v1; // 0x413346
    return (v1 | (int64_t)&g1) & -0xff01 | 256 * a4 + (int64_t)&g1 & 0xff00;
}

// Address range: 0x41334a - 0x41336e
int64_t function_41334a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4; // 0x41334e
    unsigned char v2 = *(char *)(a1 - 123); // 0x41334e
    int64_t v3; // 0x41334a
    if (v2 > v1) {
        v3 = function_413301();
    }
    char * v4 = (char *)(a3 - 122); // 0x413356
    *v4 = *v4 - (char)(v3 / 256);
    *(char *)a1 = (char)v3;
    int64_t v5; // 0x41334a
    int64_t v6 = v3 & -256 | (int64_t)*(char *)&v5; // 0x41335a
    char * v7 = (char *)(v6 - 0x169add5c); // 0x41335c
    *v7 = *v7 + (char)v5;
    char * v8 = (char *)(v6 + 31); // 0x413362
    unsigned char v9 = *v8; // 0x413362
    unsigned char v10 = (char)(v5 / 256); // 0x413362
    char v11 = v9 - v10; // 0x413362
    *v8 = v11;
    if (v9 < v10 || v11 == 0) {
        // 0x413367
        *(char *)((a4 & -256 | (int64_t)(v1 - v2)) + 33) = 111;
    }
    // 0x41336c
    return 2 * v6 & 0xfffffffe | (int64_t)(v9 < v10);
}

// Address range: 0x413370 - 0x413486
int64_t function_413370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    __readgsbyte(a3);
    int64_t v2; // 0x413370
    int32_t * v3 = (int32_t *)(v2 + 113); // 0x413376
    uint32_t v4 = *v3; // 0x413376
    uint32_t v5 = (int32_t)v2; // 0x413376
    *v3 = v4 - v5;
    char * v6 = (char *)(v2 + 0x64451371); // 0x413379
    *v6 = *v6 + (char)a6 + (char)(v4 < v5);
    int64_t v7 = v2 & 0xffffffff | 0x100000000 * a3; // 0x413382
    int64_t v8 = (int64_t)*(int32_t *)(v2 - 9); // 0x413382
    int64_t v9 = v7 / v8; // 0x413382
    int32_t v10 = v9; // 0x413385
    int64_t v11; // 0x413370
    int32_t v12 = *(int32_t *)&v11; // 0x413385
    bool v13; // 0x413370
    v11 = (v13 ? -4 : 4) + a1;
    int32_t * v14 = (int32_t *)(a2 + 51); // 0x413386
    int32_t v15 = *v14 << 31; // 0x413386
    *v14 = v15;
    if (v15 != 0 == ((v10 - v12 ^ v10) & (v12 ^ v10)) < 0 != v15 != 0) {
        // 0x41338c
        return v9 & 0xffffff00 | (int64_t)*(char *)0x526ef2fd36322a81;
    }
    int32_t * v16 = (int32_t *)(v1 + 31); // 0x41340f
    uint32_t v17 = v10 | 0x1e61c5c; // 0x41340f
    *v16 = *v16 & v17;
    int32_t v18 = __asm_insd((int16_t)(v17 + 0xfaf2 + (v17 < 0xb82f050e ? 0xc543 : 0xc544)) ^ 0x16d2); // 0x41342f
    *(int32_t *)v11 = v18;
    *(char *)v11 = (char)(v7 % v8) + 74;
    float80_t v19; // 0x413370
    *(float32_t *)(a5 + 120) = (float32_t)v19;
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x4134b8 - 0x413542
int64_t function_4134b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4134b8
    int64_t v1; // 0x4134b8
    uint64_t v2 = v1;
    int64_t v3 = v1 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3); // 0x4134bf
    int64_t v4 = v3 + 0x2b5e42d7; // 0x4134c2
    char v5 = *(char *)(a3 - 0x3a52c567 + 8 * a3); // 0x4134c7
    int64_t v6 = 256 * (int64_t)((char)(v2 / 256) - v5 + (char)((int32_t)v3 < 0xd4a1bd29)) | v2 & -0xff01; // 0x4134c7
    *(int64_t *)v1 = a3;
    unsigned char v7 = (char)v4; // 0x4134d4
    int64_t v8; // 0x4134b8
    unsigned char v9 = *(char *)&v8; // 0x4134d4
    unsigned char v10 = v7 - v9; // 0x4134d4
    int64_t v11 = v4 & 0xffffff00; // 0x4134d4
    int64_t result = v11 | (int64_t)v10; // 0x4134d4
    int32_t * v12 = (int32_t *)(v6 + 2 * a1); // 0x4134d6
    int32_t v13 = *v12; // 0x4134d6
    int32_t v14 = a2; // 0x4134d6
    int32_t v15 = v9 > v7; // 0x4134d6
    int32_t v16 = v13 + v14 + v15; // 0x4134d6
    int32_t v17 = v16 + v15; // 0x4134d6
    *v12 = v16;
    if (((v17 ^ v13) & (v17 ^ v14)) < 0) {
        // 0x413541
        *(int64_t *)(v1 - 8) = v6;
        return result;
    }
    // 0x4134dc
    __asm_out(-75, (int32_t)result);
    return v11 | (int64_t)(*(char *)(v6 - 27) | v10);
}
