/*
 * Targeted RetDec C for native executable gap queue batch 1593.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x125f46-0x126146 rank=- name=- kind=- bytes=- uncovered=-
 *   0x126146-0x126346 rank=- name=- kind=- bytes=- uncovered=-
 *   0x126346-0x126546 rank=- name=- kind=- bytes=- uncovered=-
 *   0x126546-0x126746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x126746-0x126851 rank=- name=- kind=- bytes=- uncovered=-
 *   0x28596e-0x285b6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x285b6e-0x285d6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x285d6e-0x285f6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x285f6e-0x28616e rank=- name=- kind=- bytes=- uncovered=-
 *   0x28616e-0x286264 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b32b4-0x3b34b4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54ff7a-0x55017a rank=- name=- kind=- bytes=- uncovered=-
 *   0x55017a-0x55037a rank=- name=- kind=- bytes=- uncovered=-
 *   0x55037a-0x55057a rank=- name=- kind=- bytes=- uncovered=-
 *   0x55057a-0x55077a rank=- name=- kind=- bytes=- uncovered=-
 *   0x55077a-0x550870 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_125f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_12600d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12615d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1262a3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1263dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_126515(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_126652(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1267cd(void);
int64_t function_1267f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_126803(int64_t a1, int64_t a2, int64_t a3);
int64_t function_126804(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28593f();
int64_t function_28596e(void);
int64_t function_285a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_285a3d(int64_t a1);
int64_t function_285a5c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_285a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_285a83(int64_t a1, int64_t a2, int64_t a3);
int64_t function_285a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_285ad7(void);
int64_t function_285b18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_285b70(void);
int64_t function_285b79(void);
int64_t function_285ba1(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_285bf8(int64_t a1);
int64_t function_285bf9(int64_t a1, int64_t a2);
int64_t function_285c27(void);
int64_t function_285c59(int64_t a1);
int64_t function_285c63(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_285c9f(void);
int64_t function_285cd6(int64_t a1);
int64_t function_285cd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_285d36(void);
int64_t function_285d4f(void);
int64_t function_285d60(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_285d92(void);
int64_t function_285d9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_285db1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_285e16(void);
int64_t function_285e1d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_285f01(int64_t a1);
int64_t function_28604b(int64_t a1);
int64_t function_2860ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2860ed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2861b8(int64_t a1);
int64_t function_28620f(void);
int64_t function_2a945da3();
int64_t function_3b32a4();
int64_t function_3b32b4(void);
int64_t function_3b32b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b32d2(void);
int64_t function_3b32ec(void);
int64_t function_3b32fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3312(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3b3318(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3350(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b33f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_542650();
int64_t function_54ff7a(int64_t a1);
int64_t function_54ff80(int64_t result);
int64_t function_54ff90(int64_t result);
int64_t function_54ffa0(int64_t a1, int64_t a2);
int64_t function_54ffb0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_54ffe0(int64_t a1, int64_t c, uint64_t a3);
int64_t function_550030(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_5500c0(int64_t a1, int64_t a2);
int64_t function_5500d0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_550100(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_550140(int64_t a1, int64_t wstr, uint64_t a3, int64_t n);
int64_t function_5501c0(int64_t a1, int64_t a2);
int64_t function_5501d0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_550200(void);
int64_t function_550210(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_5502a0(int64_t a1, int64_t a2);
int64_t function_5502b0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_5502e0(void);
int64_t function_5502f0(int64_t a1, int64_t wstr, int64_t result, int64_t n);
int64_t function_550370(int64_t a1, int64_t a2);
int64_t function_550380(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_5503b0(int64_t a1, int64_t a2, int64_t result);
int64_t function_550400(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_550490(int64_t a1, int64_t a2);
int64_t function_5504a0(int64_t a1, int64_t wstr, int64_t a3);
int64_t function_5504d0(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_550510(int64_t a1, uint64_t a2, uint64_t a3, int64_t wstr, uint64_t a5, uint64_t a6);
int64_t function_5506f0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, uint64_t a5);
int64_t function_550830(void);
int64_t function_550840(int64_t a1);
int64_t function_550850(int64_t a1);
int64_t function_550860(int64_t a1);
int64_t function_599ba();
int64_t function_c57b8();
int64_t function_ffffffff9b8bdae9();
int64_t function_ffffffffa68d105b();
int64_t function_ffffffffa84c55cb();
int64_t function_ffffffffdb3d8e66();
int64_t unknown_1648df12();
int64_t unknown_25f12e95();
int64_t unknown_2b8ecb7e();
int64_t unknown_468b733d();
int64_t unknown_559b4766();
int64_t unknown_6e224aa9();
int64_t unknown_ffffffff819eb9bb();
int64_t unknown_ffffffffa1f922f2();
int64_t unknown_ffffffffb4459755();
int64_t unknown_ffffffffce35eaff();
int64_t unknown_fffffffff4ec9e0e();
int64_t unknown_ffffffffff20751f();

// Address range: 0x125f46 - 0x12600d
int64_t function_125f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x125f46
    int64_t v1; // 0x125f46
    char * v2 = (char *)(v1 - 121); // 0x125f46
    *v2 = *v2 + (char)a4;
    int64_t v3; // bp+16, 0x125f46
    v3 = (int64_t)&v3 + 16;
    return function_c57b8(a1, a2, a3, a4, v1, v1, v1);
}

// Address range: 0x12600d - 0x12615d
int64_t function_12600d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x12600d
    int64_t v1; // bp-48, 0x12600d
    int64_t v2 = (int64_t)&v1; // 0x126113
    v1 = 169;
    *(int64_t *)(v2 + 32) = 169;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x126123
    int64_t v4 = *v3; // 0x126123
    v1 = v4;
    *(int64_t *)(v2 - 8) = v4;
    int64_t v5 = v2 + 16; // 0x126135
    *v3 = *(int64_t *)v5;
    v1 = v5;
    int64_t v6; // 0x12600d
    return function_c57b8(a1, a2, a3, a4, v6, v6, a5);
}

// Address range: 0x12615d - 0x1262a3
int64_t function_12615d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1; // bp-32, 0x1261a9
    int64_t v2 = a1 - 24; // 0x1261db
    int64_t * v3 = (int64_t *)v2; // 0x1261db
    int64_t * v4 = (int64_t *)(a1 - 32); // 0x1261df
    int64_t v5 = *(int64_t *)(a1 + 24); // 0x1261e8
    int64_t v6 = a1 - 16; // 0x1261e8
    int64_t * v7 = (int64_t *)v6; // 0x1261e8
    *v7 = v5;
    int64_t v8 = a1 - 8; // 0x126200
    *v3 = v8;
    *v3 = 0x63df1568;
    int64_t * v9 = (int64_t *)(a1 - 40); // 0x126228
    *v9 = *(int64_t *)a1;
    *v4 = v5;
    *(int64_t *)v8 = *v3;
    *v3 = 0x13741d9;
    *v4 = *v9;
    *(int64_t *)(a1 + 8) = *v3;
    *v4 = v2;
    *v3 = v8;
    *v3 = *v7;
    *v4 = v6;
    return function_c57b8(a1, a2, a3, a6, a5, a6, (int64_t)&v1);
}

// Address range: 0x1262a3 - 0x1263dd
int64_t function_1262a3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1262a3
    int64_t v1; // 0x1262a3
    bool v2; // 0x1262a3
    return function_c57b8(a1, a2, a3, v1, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x1263dd - 0x126515
int64_t function_1263dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1263dd
    return function_c57b8(a1, a2, a3, a4, 169, a6, 0x1211a3);
}

// Address range: 0x126515 - 0x126652
int64_t function_126515(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x126515
    int64_t v1; // bp-24, 0x126515
    int64_t v2 = (int64_t)&v1; // 0x126621
    *(int64_t *)(v2 - 8) = *(int64_t *)(v2 + 8);
    v1 = v2 + 16;
    int64_t v3; // 0x126515
    return function_c57b8(a1, a2, a3, a4, a5, v3, 310);
}

// Address range: 0x126652 - 0x126781
int64_t function_126652(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x126652
    int64_t v1; // 0x126652
    return function_c57b8(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x1267cd - 0x1267d0
int64_t function_1267cd(void) {
    // 0x1267cd
    int64_t result; // 0x1267cd
    return result;
}

// Address range: 0x1267f4 - 0x1267fc
int64_t function_1267f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x1267f4
    *v1 = *v1 | (char)a4;
    return function_126804(a1, a2, a3, a4, (int64_t)&g3);
}

// Address range: 0x126803 - 0x126804
int64_t function_126803(int64_t a1, int64_t a2, int64_t a3) {
    // 0x126803
    int64_t v1; // 0x126803
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x126804 - 0x126850
int64_t function_126804(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x126804
    char * v3 = (char *)(v2 - 119); // 0x126804
    *v3 = *v3 | (char)a4;
    return (int64_t)&v1;
}

// Address range: 0x28596e - 0x285977
int64_t function_28596e(void) {
    // 0x28596e
    int64_t result; // 0x28596e
    bool v1; // 0x28596e
    if (true == !v1) {
        result = function_28593f();
    }
    // 0x285970
    return result;
}

// Address range: 0x285a00 - 0x285a3c
int64_t function_285a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x285a00
    int64_t v1; // 0x285a00
    char v2 = *(char *)(v1 & -256 | 133) | (char)a4; // 0x285a02
    *(char *)(a2 - 66) = (char)(v2 >= 0);
    int64_t v3 = unknown_fffffffff4ec9e0e(); // 0x285a08
    if (v2 == 0) {
        // 0x285a37
        return unknown_468b733d();
    }
    int64_t v4 = a4 & -256 | (int64_t)v2; // 0x285a02
    *(int32_t *)v3 = (int32_t)v1;
    *(char *)v4 = v2;
    bool v5; // 0x285a00
    int64_t v6 = v5 ? -4 : 4; // 0x285a18
    int64_t v7 = unknown_ffffffffff20751f(v6 + a1, v6 + (v1 + a2 & 0xffffffff)); // 0x285a19
    return (int64_t)(*(int32_t *)v4 & (int32_t)v7);
}

// Address range: 0x285a3d - 0x285a43
int64_t function_285a3d(int64_t a1) {
    // 0x285a3d
    int64_t v1; // 0x285a3d
    int64_t v2 = v1;
    return (v2 + 241) % 256 | v2 & -256;
}

// Address range: 0x285a5c - 0x285a75
int64_t function_285a5c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x285a5c
    int64_t v1; // 0x285a5c
    bool v2; // 0x285a5c
    uint64_t v3 = v1 + 0x181b8d022 + (int64_t)v2; // 0x285a63
    return v3 & 0xffffff00 | (int64_t)*(char *)(v3 % 256 + v1);
}

// Address range: 0x285a75 - 0x285a83
int64_t function_285a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x285a75
    int64_t v1; // 0x285a75
    char * v2 = (char *)(v1 + 10); // 0x285a75
    unsigned char v3 = *v2; // 0x285a75
    bool v4; // 0x285a75
    *v2 = v3 / 4 | 128 * v3 | 64 * (char)v4;
    __asm_out(7, (int32_t)v1);
    int32_t * v5 = (int32_t *)(v1 - 106); // 0x285a7b
    int32_t v6 = *v5; // 0x285a7b
    int32_t v7 = a4; // 0x285a7b
    int32_t v8 = v6 + v7; // 0x285a7b
    *v5 = v8;
    int64_t result; // 0x285a75
    if (v8 < 0 == ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        result = function_285a75(a1, a2, a3, a4);
    }
    // 0x285a80
    return result;
}

// Address range: 0x285a83 - 0x285a88
int64_t function_285a83(int64_t a1, int64_t a2, int64_t a3) {
    // 0x285a83
    int64_t result; // 0x285a83
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a2;
    return result;
}

// Address range: 0x285a8e - 0x285aa2
int64_t function_285a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x285a8e
    __asm_iretd();
    int64_t result = unknown_25f12e95(); // 0x285a8f
    int64_t v1; // 0x285a8e
    *(char *)(8 * v1 + 96 + result) = 8;
    int64_t v2; // 0x285a8e
    *(int32_t *)a3 = *(int32_t *)&v2 / 0x4000000;
    return result;
}

// Address range: 0x285ad7 - 0x285ada
int64_t function_285ad7(void) {
    // 0x285ad7
    int64_t result; // 0x285ad7
    return result;
}

// Address range: 0x285b18 - 0x285b6b
int64_t function_285b18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x285b18
    int64_t result; // 0x285b18
    uint64_t v1 = result;
    if (a4 == 1) {
        // 0x285b1a
        return result;
    }
    char * v2 = (char *)(result + 0x1f013d00); // 0x285b4e
    *v2 = *v2 - (char)result;
    int32_t * v3 = (int32_t *)(a4 + 93); // 0x285b54
    int32_t v4 = a2; // 0x285b54
    *v3 = *v3 + v4;
    char * v5 = (char *)(a1 + 0x3a00b3c4); // 0x285b57
    *v5 = *v5 - (char)result;
    int32_t * v6 = (int32_t *)(v1 - 41 + 8 * v1); // 0x285b5e
    *v6 = *v6 - v4;
    *(char *)0x53195c6c = *(char *)0x53195c6c + (char)(v1 / 256);
    int64_t v7; // 0x285b18
    return (int64_t)&v7;
}

// Address range: 0x285b70 - 0x285b75
int64_t function_285b70(void) {
    // 0x285b70
    return function_ffffffffa84c55cb();
}

// Address range: 0x285b79 - 0x285b7a
int64_t function_285b79(void) {
    // 0x285b79
    int64_t result; // 0x285b79
    return result;
}

// Address range: 0x285ba1 - 0x285bbb
int64_t function_285ba1(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x285ba1
    *(int64_t *)a1 = a2;
    int32_t * v1 = (int32_t *)(a3 + 0x3a808b1a); // 0x285bab
    int64_t v2; // 0x285ba1
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(v2 + 40); // 0x285bb1
    unsigned char v4 = *v3; // 0x285bb1
    unsigned char v5 = v4 + (char)(a3 / 256); // 0x285bb1
    *v3 = v5;
    if (v5 < v4 || v5 == 0) {
        function_285b79();
    }
    // 0x285bb6
    return function_2a945da3();
}

// Address range: 0x285bf8 - 0x285bf9
int64_t function_285bf8(int64_t a1) {
    // 0x285bf8
    int64_t result; // 0x285bf8
    return result;
}

// Address range: 0x285bf9 - 0x285c06
int64_t function_285bf9(int64_t a1, int64_t a2) {
    // 0x285bf9
    int64_t v1; // 0x285bf9
    *(char *)a1 = (char)v1;
    bool v2; // 0x285bf9
    int64_t v3 = v2 ? -1 : 1; // 0x285bff
    int64_t v4 = v3 + a1; // 0x285bff
    int64_t v5 = v3 + a2; // 0x285bff
    *(int32_t *)v4 = *(int32_t *)v5;
    int64_t v6 = v2 ? -4 : 4; // 0x285c00
    return function_ffffffffa68d105b(v4 + v6, v5 + v6);
}

// Address range: 0x285c27 - 0x285c29
int64_t function_285c27(void) {
    // 0x285c27
    int64_t v1; // 0x285c27
    return function_285c63(v1, v1, v1, v1);
}

// Address range: 0x285c59 - 0x285c5c
int64_t function_285c59(int64_t a1) {
    // 0x285c59
    int64_t result; // 0x285c59
    return result;
}

// Address range: 0x285c63 - 0x285c77
int64_t function_285c63(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 58 + a4); // 0x285c63
    *v1 = *v1 + (int32_t)a2;
    char * v2 = (char *)(a1 - 103); // 0x285c67
    *v2 = *v2 ^ (char)(a4 / 256);
    int64_t result; // 0x285c63
    char * v3 = (char *)(a3 - 24 + 4 * result); // 0x285c6a
    char v4 = result / 256; // 0x285c6a
    *v3 = *v3 + v4;
    int32_t * v5 = (int32_t *)(a1 - 0x7fffd732); // 0x285c6e
    *v5 = *v5 + (int32_t)a4;
    char * v6 = (char *)(a3 + 114); // 0x285c74
    *v6 = *v6 + v4;
    return result;
}

// Address range: 0x285c9f - 0x285ca5
int64_t function_285c9f(void) {
    // 0x285c9f
    return function_ffffffff9b8bdae9();
}

// Address range: 0x285cd6 - 0x285cd9
int64_t function_285cd6(int64_t a1) {
    // 0x285cd6
    int64_t result; // 0x285cd6
    return result;
}

// Address range: 0x285cd9 - 0x285cdc
int64_t function_285cd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x285cd9
    int64_t result; // 0x285cd9
    return result;
}

// Address range: 0x285d36 - 0x285d37
int64_t function_285d36(void) {
    // 0x285d36
    int64_t result; // 0x285d36
    return result;
}

// Address range: 0x285d4f - 0x285d56
int64_t function_285d4f(void) {
    // 0x285d4f
    unknown_ffffffffb4459755();
    return function_285d36();
}

// Address range: 0x285d60 - 0x285d68
int64_t function_285d60(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a2 + 0x337fa0dc); // 0x285d60
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x285d60
    return function_285db1(a1, a2, a3, v2);
}

// Address range: 0x285d92 - 0x285d93
int64_t function_285d92(void) {
    // 0x285d92
    int64_t result; // 0x285d92
    return result;
}

// Address range: 0x285d9b - 0x285da3
int64_t function_285d9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x285d9b
    int64_t v1; // 0x285d9b
    __asm_out_133(-67, (char)v1);
    char * v2 = (char *)(result - 5 + 2 * a4); // 0x285d9e
    *v2 = *v2 | (char)result;
    return result;
}

// Address range: 0x285db1 - 0x285dbe
int64_t function_285db1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x285db1
    *(int32_t *)0x73bd1a6b = *(int32_t *)0x73bd1a6b ^ (int32_t)a1;
    int64_t result; // 0x285db1
    int32_t * v1 = (int32_t *)(result + 52); // 0x285db8
    *v1 = *v1 & -48;
    int64_t v2; // 0x285db1
    *(char *)a4 = *(char *)&v2 + (char)a4;
    return result;
}

// Address range: 0x285e16 - 0x285e19
int64_t function_285e16(void) {
    // 0x285e16
    int64_t result; // 0x285e16
    return result;
}

// Address range: 0x285e1d - 0x285e21
int64_t function_285e1d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x285e1d
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x285e1d
    return result;
}

// Address range: 0x285f01 - 0x285f04
int64_t function_285f01(int64_t a1) {
    // 0x285f01
    int64_t result; // 0x285f01
    return result;
}

// Address range: 0x28604b - 0x28604e
int64_t function_28604b(int64_t a1) {
    // 0x28604b
    int64_t result; // 0x28604b
    return result;
}

// Address range: 0x2860ae - 0x2860cb
int64_t function_2860ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 34); // 0x2860ae
    *v1 = *v1 | 8;
    int64_t v2; // 0x2860ae
    int64_t v3; // 0x2860ae
    *(char *)a4 = *(char *)&v2 & (char)v3;
    unknown_ffffffff819eb9bb();
    __asm_in_134((int16_t)a5);
    int32_t result = __asm_in_135(-62); // 0x2860bb
    *(int32_t *)0x160744501e80091 = result;
    float80_t v4; // 0x2860ae
    *(float64_t *)a5 = (float64_t)v4;
    return result;
}

// Address range: 0x2860ed - 0x2861ab
int64_t function_2860ed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(9 * a3); // 0x2860ed
    int64_t v3; // 0x2860ed
    uint32_t v4 = (int32_t)v3; // 0x2860ed
    *v2 = *v2 + v4;
    int32_t v5 = v4 + 0x15563ca; // 0x2860f0
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x2860f0
    *(int32_t *)(a1 + 6) = v5 & -0xff01 | 256 * (64 * (int32_t)(v5 == 0) | (int32_t)(v4 < 0xfeaa9c36) | 128 * (int32_t)(v5 < 0) | 16 * (int32_t)(v4 % 16 > 21) | 4 * (int32_t)(v6 % 2 == 0)) | 512;
    int64_t result = unknown_ffffffffce35eaff(); // 0x2860f9
    int32_t * v7 = (int32_t *)(a4 + 0x1e82c43); // 0x2860fe
    int32_t v8 = *v7; // 0x2860fe
    int32_t v9 = a1; // 0x2860fe
    int32_t v10 = v8 + v9; // 0x2860fe
    *v7 = v10;
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0) {
        // 0x286106
        return result;
    }
    // 0x286162
    *(char *)v1 = *(char *)&v1 | 98;
    float80_t v11; // 0x2860ed
    *(float64_t *)(result - 0x64ba83f9) = (float64_t)v11;
    unknown_2b8ecb7e();
    int64_t v12 = __asm_fnstenv(a1 + 5, a2 + 5); // 0x286182
    *(int224_t *)(v12 - 89) = (int224_t)v12;
    int32_t v13 = *(int32_t *)((int64_t)(0x48a17701 * *(int32_t *)(v3 - 0x17e51a00)) - 24); // 0x286185
    uint32_t v14 = *(int32_t *)(v12 + 1); // 0x28618c
    int32_t v15 = *(int32_t *)(v1 + 8 * v12); // 0x28618f
    int64_t v16 = v12 & -256 | (int64_t)*(char *)0x47d537f49901e8bf; // 0x286192
    int32_t * v17 = (int32_t *)(int64_t)((int32_t)(-0x278180ff * v13 < v14) - v15 + (int32_t)v1); // 0x28619b
    *v17 = *v17 + (int32_t)v16;
    *(char *)(a1 - 115 + v16) = (char)(a4 / 256);
    return unknown_6e224aa9();
}

// Address range: 0x2861b8 - 0x2861bd
int64_t function_2861b8(int64_t a1) {
    // 0x2861b8
    int64_t result; // 0x2861b8
    return result;
}

// Address range: 0x28620f - 0x286213
int64_t function_28620f(void) {
    // 0x28620f
    int64_t result; // 0x28620f
    int32_t * v1 = (int32_t *)(result + 8); // 0x28620f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3b32b4 - 0x3b32b5
int64_t function_3b32b4(void) {
    // 0x3b32b4
    int64_t result; // 0x3b32b4
    return result;
}

// Address range: 0x3b32b5 - 0x3b32c9
int64_t function_3b32b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 24); // 0x3b32bf
    *v1 = *v1 ^ (char)a3;
    int64_t v2; // 0x3b32b5
    int64_t v3 = 2 * v2; // 0x3b32c2
    return (v3 + 8) % 256 | v3 & 0xffffff00;
}

// Address range: 0x3b32d2 - 0x3b32d7
int64_t function_3b32d2(void) {
    // 0x3b32d2
    return function_ffffffffdb3d8e66();
}

// Address range: 0x3b32ec - 0x3b32fa
int64_t function_3b32ec(void) {
    // 0x3b32ec
    unknown_ffffffffa1f922f2();
    int64_t v1; // 0x3b32ec
    char * v2 = (char *)(v1 + 99); // 0x3b32f3
    char v3 = *v2 + (char)v1; // 0x3b32f3
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x3b32f3
    *v2 = v3;
    if (v4 % 2 != 0) {
        function_3b32a4();
    }
    // 0x3b32f8
    return function_3b3312(v1, v1, v1);
}

// Address range: 0x3b32fa - 0x3b3312
int64_t function_3b32fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b32fa
    int64_t v1; // 0x3b32fa
    __asm_outsb((int16_t)a3, (char)v1);
    *(char *)a3 = (char)(v1 | v1);
    bool v2; // 0x3b32fa
    int64_t v3 = v2 ? -4 : 4; // 0x3b3309
    return unknown_1648df12(v3 + a1 + (v2 ? -8 : 8), v3 + a2);
}

// Address range: 0x3b3312 - 0x3b3317
int64_t function_3b3312(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3b3312
    int64_t result; // 0x3b3312
    char * v1 = (char *)(result + 21); // 0x3b3312
    *v1 = *v1 - (char)(a3 / 256);
    return result;
}

// Address range: 0x3b3318 - 0x3b334d
int64_t function_3b3318(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b3318
    int64_t v1; // 0x3b3318
    int64_t result = v1;
    bool v2; // 0x3b3318
    if (v2) {
        // 0x3b331a
        *(int32_t *)result = (int32_t)result + (int32_t)v1;
        return result;
    }
    // 0x3b333f
    *(int64_t *)(v1 - 8) = 0x626d1a19;
    int32_t * v3 = (int32_t *)a2; // 0x3b3344
    uint32_t v4 = *v3; // 0x3b3344
    *v3 = 16 * v4 | v4 / 0x20000000;
    int64_t result2; // 0x3b3318
    int32_t * v5; // 0x3b3349
    if (v2) {
        // 0x3b3349
        v5 = (int32_t *)(result2 + 10);
        *v5 = *v5 + (int32_t)v1;
        return result2;
    }
    uint32_t v6 = (int32_t)v1; // 0x3b3338
    bool v7; // 0x3b3318
    bool v8; // 0x3b3318
    int64_t v9; // 0x3b3318
    bool v10; // 0x3b3318
    bool v11; // 0x3b3318
    int64_t v12 = v9 & -0xff01 | 256 * (4 * (int64_t)v8 | (int64_t)((v4 & 0x10000000) != 0) | 128 * (int64_t)v10 | 64 * (int64_t)v11 | 16 * (int64_t)v7) | 512; // 0x3b3331
    uint32_t v13 = (int32_t)a2; // 0x3b3338
    uint32_t v14 = v13 + v6; // 0x3b3338
    unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x3b3338
    int64_t v16 = v14; // 0x3b3338
    *(int64_t *)0xf7f97228 = 0x626d1a19;
    int32_t * v17 = (int32_t *)v16; // 0x3b3344
    uint32_t v18 = *v17; // 0x3b3344
    *v17 = 16 * v18 | 8 * (int32_t)(v14 < v13) | v18 / 0x20000000;
    v8 = v15 % 2 == 0;
    v10 = v14 < 0;
    v11 = v14 == 0;
    v7 = v13 % 16 + v6 % 16 > 15;
    result2 = v12;
    while (((v14 ^ v13) & (v14 ^ v6)) >= 0) {
        // 0x3b3331
        v12 = v12 & -0xff01 | 256 * (4 * (int64_t)v8 | (int64_t)((v18 & 0x10000000) != 0) | 128 * (int64_t)v10 | 64 * (int64_t)v11 | 16 * (int64_t)v7) | 512;
        v13 = (int32_t)v16;
        v14 = v13 + v6;
        v15 = llvm_ctpop_i8((char)v14);
        v16 = v14;
        *(int64_t *)0xf7f97228 = 0x626d1a19;
        v17 = (int32_t *)v16;
        v18 = *v17;
        *v17 = 16 * v18 | 8 * (int32_t)(v14 < v13) | v18 / 0x20000000;
        v8 = v15 % 2 == 0;
        v10 = v14 < 0;
        v11 = v14 == 0;
        v7 = v13 % 16 + v6 % 16 > 15;
        result2 = v12;
    }
    // 0x3b3349
    v5 = (int32_t *)(result2 + 10);
    *v5 = *v5 + (int32_t)v1;
    return result2;
}

// Address range: 0x3b3350 - 0x3b3367
int64_t function_3b3350(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 118 + a3); // 0x3b3352
    int64_t v2; // 0x3b3350
    *v1 = *v1 | (int32_t)v2;
    return unknown_559b4766();
}

// Address range: 0x3b33f1 - 0x3b3481
int64_t function_3b33f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 + 0x1e8e640 + 8 * a3); // 0x3b33f1
    uint32_t v3 = *v2; // 0x3b33f1
    bool v4; // 0x3b33f1
    *v2 = 16 * v3 | 8 * (int32_t)v4 | v3 / 0x20000000;
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t v5 = v4 ? -4 : 4; // 0x3b3451
    int64_t v6 = v5 + a1; // 0x3b3451
    int64_t v7 = v1 + v5; // 0x3b3451
    v1 = v7;
    int64_t result = __asm_sti(v6, v7); // 0x3b345a
    int64_t v8; // 0x3b33f1
    char * v9 = (char *)(v8 + 0x1e88a36); // 0x3b345b
    char v10 = *v9 | (char)result; // 0x3b345b
    *v9 = v10;
    if (v10 < 0) {
        // 0x3b3400
        return result;
    }
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)result; // 0x3b343a
        *v11 = *v11 - 1;
        return v6 + 0xe8d05232 + result & 0xffffffff;
    }
    // 0x3b3467
    *(int64_t *)-0x5c2e2f4 = a6;
    char * v12 = (char *)(v1 - 93); // 0x3b346f
    *v12 = *v12 | (char)a4;
    unsigned char v13 = *(char *)-0x178d6f63; // 0x3b3472
    *(char *)-0x178d6f63 = v13 / 128 | 2 * v13;
    int64_t v14 = __asm_hlt(v6 + ((a7 & (int64_t)&g1) == 0 ? 4 : -4)); // 0x3b347e
    return v14 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x54ff7a - 0x54ff7e
int64_t function_54ff7a(int64_t a1) {
    // 0x54ff7a
    int64_t v1; // 0x54ff7a
    return v1 & 0xffffffff;
}

// Address range: 0x54ff80 - 0x54ff84
int64_t function_54ff80(int64_t result) {
    // 0x54ff80
    return result;
}

// Address range: 0x54ff90 - 0x54ff94
int64_t function_54ff90(int64_t result) {
    // 0x54ff90
    return result;
}

// Address range: 0x54ffa0 - 0x54ffac
int64_t function_54ffa0(int64_t a1, int64_t a2) {
    // 0x54ffa0
    int64_t v1; // 0x54ffa0
    return function_599ba(a1, a2, v1, *(int64_t *)(a2 - 24));
}

// Address range: 0x54ffb0 - 0x54ffda
int64_t function_54ffb0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x54ffb0
    return function_599ba(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x54ffe0 - 0x550027
int64_t function_54ffe0(int64_t a1, int64_t c, uint64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x54fff0
    int64_t result = -1; // 0x54fff7
    if (v1 > a3) {
        int32_t * v2 = wmemchr((int32_t *)(4 * a3 + a1), (int32_t)c, (int32_t)(v1 - a3)); // 0x550007
        result = v2 != NULL ? (int64_t)v2 - a1 >> 2 : -1;
    }
    // 0x55001d
    return result;
}

// Address range: 0x550030 - 0x5500bd
int64_t function_550030(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x550044
    if (v1 < a4) {
        // 0x550097
        return -1;
    }
    uint64_t v2 = v1 - a4; // 0x55004d
    int64_t result = v2 > a3 ? a3 : v2; // 0x550059
    if (a4 == 0) {
        // 0x550097
        return result;
    }
    int64_t wstr = 4 * result + a1; // 0x550060
    int32_t * wstr2 = (int32_t *)a2; // 0x550079
    int32_t n = a4; // 0x550079
    int64_t v3 = result; // 0x550080
    if (wmemcmp((int32_t *)wstr, wstr2, n) == 0) {
        // 0x550097
        return result;
    }
    int64_t wstr3 = wstr; // 0x550080
    int64_t result2 = -1; // 0x55008d
    while (v3 != 0) {
        // 0x55008f
        v3--;
        wstr3 -= 4;
        result2 = v3;
        if (wmemcmp((int32_t *)wstr3, wstr2, n) == 0) {
            // break -> 0x550097
            break;
        }
        result2 = -1;
    }
    // 0x550097
    return result2;
}

// Address range: 0x5500c0 - 0x5500cc
int64_t function_5500c0(int64_t a1, int64_t a2) {
    // 0x5500c0
    int64_t v1; // 0x5500c0
    return function_550030(a1, a2, v1, *(int64_t *)(a2 - 24));
}

// Address range: 0x5500d0 - 0x5500fa
int64_t function_5500d0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x5500d0
    return function_550030(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x550100 - 0x550135
int64_t function_550100(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(a1 - 24); // 0x55010a
    if (v1 == 0) {
        // 0x550133
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x550113
    int64_t result = v2 > a3 ? a3 : v2;
    while (result != -1) {
        int64_t v3 = result - 1; // 0x550120
        if (*(int32_t *)(a1 + 4 + 4 * v3) == (int32_t)a2) {
            // break -> 0x550133
            break;
        }
        result = v3;
    }
    // 0x550133
    return result;
}

// Address range: 0x550140 - 0x5501b2
int64_t function_550140(int64_t a1, int64_t wstr, uint64_t a3, int64_t n) {
    // 0x550140
    if (n == 0) {
        // 0x550190
        return -1;
    }
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x550160
    if (v1 <= a3) {
        // 0x550190
        return -1;
    }
    int64_t v2 = a3; // 0x550170
    int32_t c = *(int32_t *)(4 * v2 + a1); // 0x550179
    int64_t result = v2; // 0x55018b
    while (wmemchr((int32_t *)wstr, c, (int32_t)n) == NULL) {
        // 0x550170
        v2++;
        result = -1;
        if (v2 == v1) {
            // break -> 0x550190
            break;
        }
        c = *(int32_t *)(4 * v2 + a1);
        result = v2;
    }
    // 0x550190
    return result;
}

// Address range: 0x5501c0 - 0x5501cc
int64_t function_5501c0(int64_t a1, int64_t a2) {
    // 0x5501c0
    int64_t v1; // 0x5501c0
    return function_550140(a1, a2, v1, *(int64_t *)(a2 - 24));
}

// Address range: 0x5501d0 - 0x5501fa
int64_t function_5501d0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x5501d0
    return function_550140(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x550200 - 0x550205
int64_t function_550200(void) {
    // 0x550200
    int64_t v1; // 0x550200
    return function_54ffe0(v1, v1, v1);
}

// Address range: 0x550210 - 0x550295
int64_t function_550210(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 - 24); // 0x55021d
    if (a4 == 0 || v1 == 0) {
        // 0x550269
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x55022b
    int64_t result = v2 > a3 ? a3 : v2; // 0x550238
    int32_t * wstr = (int32_t *)a2; // 0x55025f
    int32_t n = a4; // 0x55025f
    if (wmemchr(wstr, *(int32_t *)(4 * result + a1), n) != NULL) {
        // 0x550269
        return result;
    }
    int64_t v3 = result; // 0x550267
    int64_t result2 = -1; // 0x55024f
    while (v3 != 0) {
        // 0x550251
        v3--;
        result2 = v3;
        if (wmemchr(wstr, *(int32_t *)(4 * v3 + a1), n) != NULL) {
            // break -> 0x550269
            break;
        }
        result2 = -1;
    }
    // 0x550269
    return result2;
}

// Address range: 0x5502a0 - 0x5502ac
int64_t function_5502a0(int64_t a1, int64_t a2) {
    // 0x5502a0
    int64_t v1; // 0x5502a0
    return function_550210(a1, a2, v1, *(int64_t *)(a2 - 24));
}

// Address range: 0x5502b0 - 0x5502da
int64_t function_5502b0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x5502b0
    return function_550210(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x5502e0 - 0x5502e5
int64_t function_5502e0(void) {
    // 0x5502e0
    int64_t v1; // 0x5502e0
    return function_550100(v1, v1, v1);
}

// Address range: 0x5502f0 - 0x550370
int64_t function_5502f0(int64_t a1, int64_t wstr, int64_t result, int64_t n) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x550302
    if (v1 <= result) {
        // 0x550350
        return -1;
    }
    // 0x55030b
    if (n == 0) {
        // 0x550350
        return result;
    }
    int64_t v2 = result; // 0x550330
    int32_t c = *(int32_t *)(4 * v2 + a1); // 0x550339
    int64_t result2 = v2; // 0x55034b
    while (wmemchr((int32_t *)wstr, c, (int32_t)n) != NULL) {
        // 0x550330
        v2++;
        result2 = -1;
        if (v2 == v1) {
            // break -> 0x550350
            break;
        }
        c = *(int32_t *)(4 * v2 + a1);
        result2 = v2;
    }
    // 0x550350
    return result2;
}

// Address range: 0x550370 - 0x55037c
int64_t function_550370(int64_t a1, int64_t a2) {
    // 0x550370
    int64_t v1; // 0x550370
    return function_5502f0(a1, a2, v1, *(int64_t *)(a2 - 24));
}

// Address range: 0x550380 - 0x5503aa
int64_t function_550380(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x550380
    return function_5502f0(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x5503b0 - 0x5503f5
int64_t function_5503b0(int64_t a1, int64_t a2, int64_t result) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x5503ba
    if (v1 <= result) {
        // 0x5503de
        return -1;
    }
    int32_t v2 = a2; // 0x5503c3
    if (*(int32_t *)(4 * result + a1) != v2) {
        // 0x5503de
        return result;
    }
    int64_t v3 = result; // 0x5503c6
    v3++;
    int64_t result2 = -1; // 0x5503dc
    while (v3 != v1) {
        // 0x5503d0
        result2 = v3;
        if (*(int32_t *)(4 * v3 + a1) != v2) {
            // break -> 0x5503de
            break;
        }
        v3++;
        result2 = -1;
    }
    // 0x5503de
    return result2;
}

// Address range: 0x550400 - 0x550485
int64_t function_550400(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 - 24); // 0x550414
    if (v1 == 0) {
        // 0x55045e
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x55041d
    int64_t result = v2 > a3 ? a3 : v2; // 0x550429
    if (a4 == 0) {
        // 0x55045e
        return result;
    }
    int32_t * wstr = (int32_t *)a2; // 0x550443
    int32_t n = a4; // 0x550443
    if (wmemchr(wstr, *(int32_t *)(4 * result + a1), n) == NULL) {
        // 0x55045e
        return result;
    }
    int64_t v3 = result; // 0x55044b
    int64_t result2 = -1; // 0x550454
    while (v3 != 0) {
        // 0x550456
        v3--;
        result2 = v3;
        if (wmemchr(wstr, *(int32_t *)(4 * v3 + a1), n) == NULL) {
            // break -> 0x55045e
            break;
        }
        result2 = -1;
    }
    // 0x55045e
    return result2;
}

// Address range: 0x550490 - 0x55049c
int64_t function_550490(int64_t a1, int64_t a2) {
    // 0x550490
    int64_t v1; // 0x550490
    return function_550400(a1, a2, v1, *(int64_t *)(a2 - 24));
}

// Address range: 0x5504a0 - 0x5504ca
int64_t function_5504a0(int64_t a1, int64_t wstr, int64_t a3) {
    // 0x5504a0
    return function_550400(a1, wstr, a3, (int64_t)wcslen((int32_t *)wstr));
}

// Address range: 0x5504d0 - 0x550510
int64_t function_5504d0(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(a1 - 24); // 0x5504da
    if (v1 == 0) {
        // 0x550501
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x5504e3
    int64_t result = v2 > a3 ? a3 : v2; // 0x5504e9
    int32_t v3 = *(int32_t *)(4 * result + a1); // 0x5504fc
    if (v3 != (int32_t)a2) {
        // 0x550501
        return result;
    }
    int64_t v4 = result; // 0x5504ff
    int64_t result2 = -1; // 0x5504f7
    while (v4 != 0) {
        // 0x5504f9
        v4--;
        result2 = v4;
        if (*(int32_t *)(4 * v4 + a1) != v3) {
            // break -> 0x550501
            break;
        }
        result2 = -1;
    }
    // 0x550501
    return result2;
}

// Address range: 0x550510 - 0x5506e7
int64_t function_550510(int64_t a1, uint64_t a2, uint64_t a3, int64_t wstr, uint64_t a5, uint64_t a6) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x550519
    if (v1 >= a2) {
        uint64_t v2 = v1 - a2; // 0x550525
        uint64_t v3 = v2 > a3 ? a3 : v2; // 0x55052b
        uint64_t v4 = *(int64_t *)(wstr - 24); // 0x55052f
        int64_t n = v3 < v4 ? v3 : v4; // 0x550539
        if (n != 0) {
            int32_t result = wmemcmp((int32_t *)(4 * a2 + a1), (int32_t *)wstr, (int32_t)n); // 0x550577
            if (result != 0) {
                // 0x550580
                return result;
            }
        }
        uint64_t v5 = v3 - v4; // 0x550542
        int64_t result2 = 0x7fffffff; // 0x550551
        if (v5 <= 0x7fffffff) {
            int64_t v6 = v5 + 0x80000000; // 0x550556
            result2 = v6 < 0 == ((v6 ^ v5) & (v5 ^ -0x8000000000000000)) < 0 ? v5 & 0xffffffff : 0x80000000;
        }
        // 0x550560
        return result2;
    }
    // 0x550587
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v1);
    if (!((((int64_t)"basic_string::compare" < 0x696172745f726168 || (int64_t)"basic_string::compare" == 0x696172745f726168) ^ true))) {
        int64_t v7 = *(int64_t *)v1; // 0x5505c6
        uint64_t v8 = *(int64_t *)(v7 - 24); // 0x5505c9
        if (v8 >= a5) {
            uint64_t v9 = a2 < 0x696172745f726168 - (int64_t)"basic_string::compare" ? a2 : 0x696172745f726168 - (int64_t)"basic_string::compare"; // 0x5505d8
            uint64_t v10 = v8 - a5; // 0x5505dc
            uint64_t v11 = v10 > a6 ? a6 : v10; // 0x5505e5
            int64_t n2 = v9 < v11 ? v9 : v11; // 0x5505ec
            if (n2 != 0) {
                int32_t result3 = wmemcmp((int32_t *)(4 * (int64_t)"basic_string::compare" + 0x6f705f5f203a7325), (int32_t *)(v7 + 4 * a5), (int32_t)n2); // 0x55062b
                if (result3 != 0) {
                    // 0x550634
                    return result3;
                }
            }
            uint64_t v12 = v9 - v11; // 0x5505f5
            int64_t result4 = 0x7fffffff; // 0x550604
            if (v12 <= 0x7fffffff) {
                int64_t v13 = v12 + 0x80000000; // 0x550609
                result4 = v13 < 0 == ((v13 ^ v12) & (v12 ^ -0x8000000000000000)) < 0 ? v12 & 0xffffffff : 0x80000000;
            }
            // 0x550560
            return result4;
        }
        // 0x55063b
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a5, v8);
    }
    // 0x550656
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", (int64_t)"basic_string::compare", 0x696172745f726168);
    int32_t v14 = wcslen((int32_t *)"basic_string::compare"); // 0x550693
    int64_t v15 = v14; // 0x550693
    int64_t n3 = v14 > -1 ? v15 : 0x696172745f726168; // 0x5506a6
    if (n3 != 0) {
        int32_t result5 = wmemcmp((int32_t *)0x6f705f5f203a7325, (int32_t *)"basic_string::compare", (int32_t)n3); // 0x5506b5
        if (result5 != 0) {
            // 0x550560
            return result5;
        }
    }
    uint64_t v16 = 0x696172745f726168 - v15; // 0x5506be
    int64_t result6 = 0x7fffffff; // 0x5506cd
    if (v16 <= 0x7fffffff) {
        int64_t v17 = v16 + 0x80000000; // 0x5506d2
        result6 = v17 < 0 == ((v17 ^ v16) & -0x169e8d8ba08d9e98 - v15) < 0 ? v16 & 0xffffffff : 0x80000000;
    }
    // 0x550560
    return result6;
}

// Address range: 0x5506f0 - 0x550824
int64_t function_5506f0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, uint64_t a5) {
    uint64_t wstr2 = *(int64_t *)(a1 - 24); // 0x5506fe
    if (wstr2 >= a2) {
        uint64_t v1 = wstr2 - a2; // 0x550707
        uint64_t v2 = v1 > a3 ? a3 : v1; // 0x550713
        int32_t * wstr = (int32_t *)a4; // 0x550717
        uint64_t v3 = (int64_t)wcslen(wstr); // 0x550717
        int64_t n = v2 < v3 ? v2 : v3; // 0x550725
        if (n != 0) {
            int32_t result = wmemcmp((int32_t *)(4 * a2 + a1), wstr, (int32_t)n); // 0x550760
            if (result != 0) {
                // 0x550769
                return result;
            }
        }
        uint64_t v4 = v2 - v3; // 0x55072e
        int64_t result2 = 0x7fffffff; // 0x55073d
        if (v4 <= 0x7fffffff) {
            int64_t v5 = v4 + 0x80000000; // 0x550742
            result2 = v5 < 0 == ((v5 ^ v4) & (v4 ^ -0x8000000000000000)) < 0 ? v4 & 0xffffffff : 0x80000000;
        }
        // 0x55074c
        return result2;
    }
    // 0x550772
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, wstr2);
    if (((int64_t)"basic_string::compare" < 0x696172745f726168 || (int64_t)"basic_string::compare" == 0x696172745f726168) ^ true) {
        int64_t result3 = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", (int64_t)"basic_string::compare", 0x696172745f726168); // 0x550816
        *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = (int64_t)"basic_string::compare";
        return result3;
    }
    uint64_t v6 = a2 < 0x696172745f726168 - (int64_t)"basic_string::compare" ? a2 : 0x696172745f726168 - (int64_t)"basic_string::compare"; // 0x5507a7
    int64_t n2 = v6 > a5 ? a5 : v6; // 0x5507b1
    if (n2 != 0) {
        int32_t result4 = wmemcmp((int32_t *)(4 * (int64_t)"basic_string::compare" + 0x6f705f5f203a7325), (int32_t *)wstr2, (int32_t)n2); // 0x5507ec
        if (result4 != 0) {
            // 0x5507fa
            return result4;
        }
    }
    uint64_t v7 = v6 - a5; // 0x5507ba
    int64_t result5 = 0x7fffffff; // 0x5507c9
    if (v7 <= 0x7fffffff) {
        int64_t v8 = v7 + 0x80000000; // 0x5507ce
        result5 = v8 < 0 == ((v8 ^ v7) & (v7 ^ -0x8000000000000000)) < 0 ? v7 & 0xffffffff : 0x80000000;
    }
    // 0x55074c
    return result5;
}

// Address range: 0x550830 - 0x550838
int64_t function_550830(void) {
    // 0x550830
    return (int64_t)&g2;
}

// Address range: 0x550840 - 0x550848
int64_t function_550840(int64_t a1) {
    // 0x550840
    *(int32_t *)(a1 + 16) = -1;
    int64_t result; // 0x550840
    return result;
}

// Address range: 0x550850 - 0x550858
int64_t function_550850(int64_t a1) {
    // 0x550850
    *(int32_t *)(a1 + 16) = 0;
    int64_t result; // 0x550850
    return result;
}

// Address range: 0x550860 - 0x550865
int64_t function_550860(int64_t a1) {
    // 0x550860
    return a1 + 24;
}
