/*
 * Targeted RetDec C for native executable gap queue batch 734.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6c090-0x6c290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6c290-0x6c490 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6c490-0x6c690 rank=- name=- kind=- bytes=- uncovered=-
 *   0xffdee-0xfffee rank=- name=- kind=- bytes=- uncovered=-
 *   0xfffee-0x1001ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1001ee-0x1003ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1003ee-0x1005ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1005ee-0x1007ee rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_10007d(void);
int64_t function_1000d8(void);
int64_t function_100151(int64_t a1);
int64_t function_1001eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_100202(void);
int64_t function_100283(void);
int64_t function_1002b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1002e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10037f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1003d0(void);
int64_t function_1003ea(int64_t a1);
int64_t function_10043a(void);
int64_t function_1004b3(int64_t a1);
int64_t function_100500(int64_t a1);
int64_t function_10051c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1005f2(void);
int64_t function_100692(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1006ec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1006f2(void);
int64_t function_100703(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_10072a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1007d7(int64_t a1);
int64_t function_1007da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28626cf3();
int64_t function_3a52ff9a();
int64_t function_51fa03e8();
int64_t function_631a36e9();
int64_t function_6c090(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_6c0a8(void);
int64_t function_6c0ab(void);
int64_t function_6c0db(void);
int64_t function_6c0e1(int64_t a1);
int64_t function_6c0e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6c196(void);
int64_t function_6c1ae(void);
int64_t function_6c1c1(void);
int64_t function_6c1db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6c208(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6c20f(void);
int64_t function_6c21c(void);
int64_t function_6c260(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t function_6c283(void);
int64_t function_6c297(int64_t a1);
int64_t function_6c2a7(void);
int64_t function_6c2d5(void);
int64_t function_6c2da(void);
int64_t function_6c2e7(int64_t a1);
int64_t function_6c302(void);
int64_t function_6c312(void);
int64_t function_6c356(void);
int64_t function_6c372(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6c39a(void);
int64_t function_6c3c0(void);
int64_t function_6c3c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6c3ea(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_6c486(void);
int64_t function_6c4a7(int64_t a1);
int64_t function_6c4bb(int64_t a1);
int64_t function_6c4c4(void);
int64_t function_6c4e2(void);
int64_t function_6c523(void);
int64_t function_6c526(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6c538(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6c5e5(void);
int64_t function_6c5e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_7b1a3a09();
int64_t function_ffdee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_ffeca(void);
int64_t function_ffed5(int64_t a1);
int64_t function_fff1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fff4b(void);
int64_t function_fff51(int64_t a1);
int64_t function_fff9e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ffffffff8715737b();
int64_t unknown_181a9046();
int64_t unknown_1ad233bf();
int64_t unknown_205fec0a();
int64_t unknown_3b67af36();
int64_t unknown_5007e878();
int64_t unknown_621393b0();
int64_t unknown_72ed0d35();
int64_t unknown_880154();
int64_t unknown_ffffffffab3a59f5();
int64_t unknown_ffffffffaf0591b7();
int64_t unknown_ffffffffb1d5e422();
int64_t unknown_ffffffffb44d584b();
int64_t unknown_ffffffffc84141f6();
int64_t unknown_ffffffffe83cfafe();

// Address range: 0x6c090 - 0x6c0a8
int64_t function_6c090(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 16); // 0x6c093
    *v1 = *v1 & 61;
    return a5 & -256 | a4 % 256;
}

// Address range: 0x6c0a8 - 0x6c0ab
int64_t function_6c0a8(void) {
    // 0x6c0a8
    int64_t result; // 0x6c0a8
    return result;
}

// Address range: 0x6c0ab - 0x6c0ae
int64_t function_6c0ab(void) {
    // 0x6c0ab
    int64_t result; // 0x6c0ab
    return result;
}

// Address range: 0x6c0db - 0x6c0dc
int64_t function_6c0db(void) {
    // 0x6c0db
    int64_t result; // 0x6c0db
    return result;
}

// Address range: 0x6c0e1 - 0x6c0e6
int64_t function_6c0e1(int64_t a1) {
    // 0x6c0e1
    int64_t result; // 0x6c0e1
    return result;
}

// Address range: 0x6c0e6 - 0x6c0fb
int64_t function_6c0e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6c0e6
    __asm_in_133(-84);
    if (a4 != 1) {
        function_6c0db();
    }
    // 0x6c0f7
    return function_6c0db();
}

// Address range: 0x6c196 - 0x6c197
int64_t function_6c196(void) {
    // 0x6c196
    int64_t result; // 0x6c196
    return result;
}

// Address range: 0x6c1ae - 0x6c1b0
int64_t function_6c1ae(void) {
    // 0x6c1ae
    return function_6c1ae();
}

// Address range: 0x6c1c1 - 0x6c1c2
int64_t function_6c1c1(void) {
    // 0x6c1c1
    int64_t result; // 0x6c1c1
    return result;
}

// Address range: 0x6c1db - 0x6c1e3
int64_t function_6c1db(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 0x388367dd); // 0x6c1db
    *v1 = *v1 | (char)a3;
    return function_6c196();
}

// Address range: 0x6c208 - 0x6c20f
int64_t function_6c208(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 2 * a3; // 0x6c208
    int32_t v2; // 0x6c208
    *(int32_t *)(v1 & 0xfffffffe) = (int32_t)(int64_t)&v2;
    int64_t v3; // 0x6c208
    return function_6c260(a1, a2, (int32_t)v1, v3);
}

// Address range: 0x6c20f - 0x6c210
int64_t function_6c20f(void) {
    // 0x6c20f
    int64_t result; // 0x6c20f
    return result;
}

// Address range: 0x6c21c - 0x6c221
int64_t function_6c21c(void) {
    // 0x6c21c
    return function_631a36e9();
}

// Address range: 0x6c260 - 0x6c26e
int64_t function_6c260(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x6c265
    bool v2; // 0x6c260
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)(a4 + 0x7b068f24); // 0x6c265
        int32_t v4 = *v3; // 0x6c265
        *v3 = v4 << v1;
        v2 = (v4 & 0x80000000 >> v1 - 1) != 0;
    }
    int32_t * v5 = (int32_t *)(a4 - 56); // 0x6c26b
    int64_t result; // 0x6c260
    *v5 = (int32_t)v2 - (int32_t)result + *v5;
    return result;
}

// Address range: 0x6c283 - 0x6c287
int64_t function_6c283(void) {
    // 0x6c283
    return function_6c20f();
}

// Address range: 0x6c297 - 0x6c2a0
int64_t function_6c297(int64_t a1) {
    // 0x6c297
    int64_t result; // 0x6c297
    float80_t v1; // 0x6c297
    *(int32_t *)(result - 0x5517c7a0) = (int32_t)v1;
    return result;
}

// Address range: 0x6c2a7 - 0x6c2a8
int64_t function_6c2a7(void) {
    // 0x6c2a7
    int64_t result; // 0x6c2a7
    return result;
}

// Address range: 0x6c2d5 - 0x6c2d7
int64_t function_6c2d5(void) {
    // 0x6c2d5
    int64_t result; // 0x6c2d5
    return result;
}

// Address range: 0x6c2da - 0x6c2df
int64_t function_6c2da(void) {
    // 0x6c2da
    int64_t result; // 0x6c2da
    return result;
}

// Address range: 0x6c2e7 - 0x6c2ea
int64_t function_6c2e7(int64_t a1) {
    // 0x6c2e7
    int64_t result; // 0x6c2e7
    return result;
}

// Address range: 0x6c302 - 0x6c307
int64_t function_6c302(void) {
    // 0x6c302
    return function_51fa03e8();
}

// Address range: 0x6c312 - 0x6c313
int64_t function_6c312(void) {
    // 0x6c312
    int64_t result; // 0x6c312
    return result;
}

// Address range: 0x6c356 - 0x6c359
int64_t function_6c356(void) {
    // 0x6c356
    int64_t result; // 0x6c356
    return result;
}

// Address range: 0x6c372 - 0x6c38e
int64_t function_6c372(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6c372
    bool v1; // 0x6c372
    bool v2 = v1;
    uint32_t v3 = *(int32_t *)-0x477fce3eae7cc924; // 0x6c372
    int32_t * v4 = (int32_t *)(a3 + 91); // 0x6c37b
    uint32_t v5 = *v4; // 0x6c37b
    int32_t v6 = v2; // 0x6c37b
    uint32_t v7 = v3 + v6; // 0x6c37b
    int32_t v8 = v5 - v7; // 0x6c37b
    bool v9 = v2 ? v7 != -1 | v5 < v8 - v6 : v5 < v7; // 0x6c37b
    *v4 = v8;
    int32_t * v10 = (int32_t *)(a1 - 0x6501e38d + 4 * (int64_t)v3); // 0x6c37e
    *v10 = *v10 - 0x56011bb2 + (int32_t)v9;
    return function_6c312();
}

// Address range: 0x6c39a - 0x6c39f
int64_t function_6c39a(void) {
    // 0x6c39a
    return function_7b1a3a09();
}

// Address range: 0x6c3c0 - 0x6c3c1
int64_t function_6c3c0(void) {
    // 0x6c3c0
    int64_t result; // 0x6c3c0
    return result;
}

// Address range: 0x6c3c1 - 0x6c3e5
int64_t function_6c3c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_hlt(); // 0x6c3ca
    int64_t v1; // 0x6c3c1
    int32_t * v2 = (int32_t *)(v1 - 10); // 0x6c3cb
    *v2 = *v2 & (int32_t)a3;
    int32_t * v3 = (int32_t *)(a2 - 103); // 0x6c3d6
    *v3 = *v3 & 0x315d2a66;
    *(char *)0x22c8fec4 = *(char *)0x22c8fec4 + (char)a4;
    int64_t v4; // 0x6c3c1
    *(int64_t *)(v1 & 0xffffffff) = (int64_t)&v4;
    return result;
}

// Address range: 0x6c3ea - 0x6c472
int64_t function_6c3ea(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x6c3ea
    int64_t v1; // 0x6c3ea
    int64_t v2 = v1;
    int64_t v3 = a2;
    if ((v1 & 1024) != 0) {
        function_6c3c0();
    }
    int64_t v4 = __asm_wait(); // 0x6c3ef
    *(char *)-0x4f82f5f699f8b15a = (char)v4;
    *(char *)v2 = (char)v2 + (char)(a4 / 256);
    char * v5 = (char *)(v1 + 0x739ab4ab); // 0x6c40c
    char v6 = a4; // 0x6c40c
    *v5 = *v5 - v6;
    if ((*(char *)(a1 + 0x52989163) & -127) != 0) {
        // 0x6c448
        return __asm_int3(a1);
    }
    int64_t v7 = a3 & -0xff01; // 0x6c3f1
    char * v8 = (char *)(v1 - 48); // 0x6c41b
    unsigned char v9 = *v8; // 0x6c41b
    *v8 = *(char *)(a2 - 44) + (char)(a3 / 256);
    int64_t v10 = 256 * (int64_t)v9 | v7; // 0x6c41b
    char * v11 = (char *)(v10 + 51); // 0x6c41e
    char v12 = *v11 + v6; // 0x6c41e
    *v11 = v12;
    int64_t v13 = (v4 & 0xffffffff) - 1; // 0x6c426
    if (v13 != 0 && v12 != 0) {
        // 0x6c448
        return __asm_int3(a1);
    }
    int64_t v14 = a4 & 0xffffffff; // 0x6c412
    float80_t v15; // 0x6c3ea
    *(int64_t *)((2 * a1 & 0x1fffffffe) - 0x705f31f7) = (int64_t)v15;
    __asm_out_134(94, (char)a1);
    *(int32_t *)v14 = *(int32_t *)&v3;
    bool v16; // 0x6c3ea
    int64_t v17 = v16 ? -4 : 4; // 0x6c459
    int64_t v18 = v3 + v17; // 0x6c459
    v3 = v18;
    int64_t v19 = v13; // 0x6c45a
    v19--;
    while ((char)(a1 - (*(char *)v10 > v9 ? 136 : 135)) != 0 && v19 != 0) {
        // 0x6c45f
        v19--;
    }
    // 0x6c465
    __asm_iretd(v17 + v14, v18, v7 | (int64_t)&g4, v19);
    return unknown_ffffffffc84141f6();
}

// Address range: 0x6c486 - 0x6c487
int64_t function_6c486(void) {
    // 0x6c486
    int64_t result; // 0x6c486
    return result;
}

// Address range: 0x6c4a7 - 0x6c4a8
int64_t function_6c4a7(int64_t a1) {
    // 0x6c4a7
    int64_t result; // 0x6c4a7
    return result;
}

// Address range: 0x6c4bb - 0x6c4be
int64_t function_6c4bb(int64_t a1) {
    // 0x6c4bb
    int64_t result; // 0x6c4bb
    return result;
}

// Address range: 0x6c4c4 - 0x6c4c5
int64_t function_6c4c4(void) {
    // 0x6c4c4
    int64_t result; // 0x6c4c4
    return result;
}

// Address range: 0x6c4e2 - 0x6c4e7
int64_t function_6c4e2(void) {
    // 0x6c4e2
    return function_6c486();
}

// Address range: 0x6c523 - 0x6c525
int64_t function_6c523(void) {
    // 0x6c523
    return function_6c4c4();
}

// Address range: 0x6c526 - 0x6c52b
int64_t function_6c526(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6c526
    int64_t v1; // 0x6c526
    return v1 & 0xffffffff;
}

// Address range: 0x6c538 - 0x6c5a1
int64_t function_6c538(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6c538
    int64_t v1; // 0x6c538
    if (a4 == 1) {
        // 0x6c53b
        return v1 & 0xffffffff;
    }
    // 0x6c5a0
    *(char *)a1 = __asm_insb((int16_t)v1);
    return a3 & 0xffffffff;
}

// Address range: 0x6c5e5 - 0x6c5e6
int64_t function_6c5e5(void) {
    // 0x6c5e5
    int64_t result; // 0x6c5e5
    return result;
}

// Address range: 0x6c5e6 - 0x6c676
int64_t function_6c5e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6c5e6
    bool v1; // 0x6c5e6
    if (v1) {
        // 0x6c5e8
        int64_t result; // 0x6c5e6
        return result;
    }
    char v2 = a4 ^ a2; // 0x6c666
    *(char *)a2 = v2;
    if (a4 != 1 == v2 == 0) {
        // 0x6c6ce
        return (int64_t)*(int32_t *)0x15a672111ebfab42;
    }
    // 0x6c66b
    return __asm_wait();
}

// Address range: 0xffdee - 0xffe50
int64_t function_ffdee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    unknown_ffffffffab3a59f5();
    unknown_ffffffffe83cfafe();
    uint32_t v2 = __asm_in(-94); // 0xffe02
    uint64_t v3 = (int64_t)(v2 & -256); // 0xffe04
    int64_t v4 = (a4 / 256 ^ (int64_t)v2) % 256 | v3; // 0xffe04
    int64_t v5 = a3 + a1; // 0xffe06
    *(int32_t *)-0x17fffec2ff7ffffe = (int32_t)v4;
    int32_t * v6 = (int32_t *)((v5 & 0xffffffff) + 0x308c115f); // 0xffe11
    uint32_t v7 = *v6; // 0xffe11
    uint32_t v8 = v7 + (int32_t)a4; // 0xffe11
    *v6 = v8;
    unsigned char v9 = (char)(v3 / 256); // 0xffe17
    char v10 = v8 < v7; // 0xffe17
    unsigned char v11 = *(char *)(v4 + 0x7f38840b) + v10; // 0xffe17
    unsigned char v12 = v9 - v11; // 0xffe17
    bool v13 = v8 < v7 ? v11 != -1 | v12 - v10 > v9 : v11 > v9; // 0xffe17
    int64_t v14 = (256 * (int64_t)v12 | v4 & 0xffff00ff) + 0xd1211f96 + (int64_t)v13; // 0xffe1e
    int64_t v15 = v14 & 0xffffffff; // 0xffe1e
    char * v16 = (char *)(a2 - 94); // 0xffe23
    unsigned char v17 = (char)a4; // 0xffe23
    *v16 = *v16 + v17;
    unsigned char v18 = v17 % 32; // 0xffe26
    if (v18 != 0) {
        char * v19 = (char *)(v15 + 0x20013da9); // 0xffe26
        *v19 = *v19 >> v18;
    }
    int64_t v20; // 0xffdee
    int32_t v21 = *(int32_t *)(8 * v20 + 0x68ba2660); // 0xffe2c
    *(char *)a1 = *(char *)&v1;
    bool v22; // 0xffdee
    *(char *)(a1 + 0x2c1b80f4 + (v22 ? -1 : 1)) = -1;
    int64_t v23 = v15 + 0xffcc6419; // 0xffe42
    __asm_out((int16_t)(v21 + (int32_t)v5), (int32_t)v23);
    return v23 & 0xffffff00 | (v14 + 116) % 256;
}

// Address range: 0xffeca - 0xffecd
int64_t function_ffeca(void) {
    // 0xffeca
    int64_t result; // 0xffeca
    return result;
}

// Address range: 0xffed5 - 0xffed8
int64_t function_ffed5(int64_t a1) {
    // 0xffed5
    int64_t v1; // 0xffed5
    return v1 | 116;
}

// Address range: 0xfff1a - 0xfff32
int64_t function_fff1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfff1a
    int64_t v1; // 0xfff1a
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)((uint64_t)v1 / 256);
    return function_3a52ff9a();
}

// Address range: 0xfff4b - 0xfff51
int64_t function_fff4b(void) {
    // 0xfff4b
    int64_t v1; // 0xfff4b
    return v1 & 0x709a9f52;
}

// Address range: 0xfff51 - 0xfff53
int64_t function_fff51(int64_t a1) {
    // 0xfff51
    int64_t result; // 0xfff51
    return result;
}

// Address range: 0xfff9e - 0x10000e
int64_t function_fff9e(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)0xd1275a5; // 0xfff9e
    int64_t v2; // 0xfff9e
    char v3 = v2 / 256; // 0xfff9e
    char v4 = v1 + v3; // 0xfff9e
    *(char *)0xd1275a5 = v4;
    bool v5 = ((v4 ^ v1) & (v4 ^ v3)) < 0; // 0xfff9e
    int64_t v6 = a2; // 0xfff9e
    bool v7 = v4 < 0; // 0xfff9e
    int64_t v8; // 0xfff9e
    int64_t result = v8;
    while (v7 == v5) {
        // 0xfffb3
        int64_t v9; // 0xfff9e
        int64_t v10 = v9;
        float80_t v11; // 0xfff9e
        *(int32_t *)(v10 - 0x4b3c50eb) = (int32_t)v11;
        int32_t * v12 = (int32_t *)result; // 0xfffc0
        *v12 = *v12 - 0x42017d55;
        int64_t v13; // 0xfff9e
        int64_t v14 = __asm_int3(*(int64_t *)v13); // 0xfffc6
        int64_t v15; // 0xfff9e
        uint32_t v16 = *(int32_t *)v6 ^ (int32_t)v15; // 0xfffc7
        int64_t v17 = v16; // 0xfffc7
        unsigned char v18 = *(char *)(v2 + 101 + v14); // 0xfffd1
        v6 = *(int64_t *)(v13 + 8);
        __asm_int(-87);
        int64_t v19 = v14 + 0xd770928f + (int64_t)(v18 > (char)v10) & 0xffffffff ^ 109; // 0xfffe1
        uint32_t v20 = (int32_t)v10 - *(int32_t *)(v10 & 0xffffffff); // 0xfffe2
        v9 = v19;
        v5 = (0x54fbfa00 - v20 & v20) < 0;
        v13 += 16;
        v15 = v17;
        v7 = false;
        if (v20 < 0x54fbfa01) {
            char * v21 = (char *)(v17 + 72); // 0xffff2
            *v21 = (char)((char)v20 < 89) + (char)v2 + *v21;
            int32_t * v22 = (int32_t *)(v17 + 0x3d008e45); // 0xffff5
            *v22 = *v22 | (int32_t)v6;
            int32_t * v23 = (int32_t *)v19; // 0xffffb
            *v23 = *v23 + ((v20 + 167) % 256 | v20 & -256);
            *(int64_t *)0x625f1971 = v19;
            char * v24 = (char *)(a3 + 3); // 0x100004
            *v24 = *v24 | (char)v16;
            return function_28626cf3();
        }
        result = v20;
    }
    // 0xfffa8
    return result;
}

// Address range: 0x10007d - 0x100080
int64_t function_10007d(void) {
    // 0x10007d
    int64_t result; // 0x10007d
    return result;
}

// Address range: 0x1000d8 - 0x1000db
int64_t function_1000d8(void) {
    // 0x1000d8
    int64_t result; // 0x1000d8
    return result;
}

// Address range: 0x100151 - 0x100152
int64_t function_100151(int64_t a1) {
    // 0x100151
    int64_t result; // 0x100151
    return result;
}

// Address range: 0x1001eb - 0x1001f6
int64_t function_1001eb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1001eb
    int64_t v1; // 0x1001eb
    int64_t v2 = v1;
    bool v3; // 0x1001eb
    int64_t v4 = v3 ? -4 : 4; // 0x1001eb
    return v2 & 0xffffffff & __asm_iretd(v4 + a1, v4 + a2, v1 & 0xffffffff, v2);
}

// Address range: 0x100202 - 0x100206
int64_t function_100202(void) {
    // 0x100202
    int64_t result; // 0x100202
    return result;
}

// Address range: 0x100283 - 0x100284
int64_t function_100283(void) {
    // 0x100283
    int64_t result; // 0x100283
    return result;
}

// Address range: 0x1002b8 - 0x1002c4
int64_t function_1002b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1002b8
    int64_t v1; // 0x1002b8
    return function_ffffffff8715737b(v1 & 0xffffffff);
}

// Address range: 0x1002e7 - 0x10037e
int64_t function_1002e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_72ed0d35(); // 0x10032f
    int32_t * v1 = (int32_t *)(a2 + 0xa01e863); // 0x100335
    int32_t v2 = *v1 ^ (int32_t)a2; // 0x100335
    *v1 = v2;
    if (a4 != 1 == v2 == 0) {
        // 0x1002fd
        return result;
    }
    // 0x10033d
    unknown_ffffffffb44d584b();
    return unknown_880154();
}

// Address range: 0x10037f - 0x1003c9
int64_t function_10037f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10037f
    int64_t v1; // 0x10037f
    int64_t v2 = v1;
    bool v3; // 0x10037f
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3 + (int32_t)v3;
    char * v4 = (char *)(v2 + 0x286ac00); // 0x100381
    *v4 = *v4 + (char)v2;
    int32_t * v5 = (int32_t *)(v1 - 0x68ff3500); // 0x100389
    *v5 = *v5 + (int32_t)v1;
    int64_t v6 = __asm_wait(); // 0x10038f
    *(int32_t *)a1 = (int32_t)v1;
    char * v7 = (char *)(a1 + 0x1000abd4 + (v3 ? -4 : 4)); // 0x1003a0
    *v7 = ((char)v6 ^ 118 | (char)v1) + *v7;
    __asm_in_135((int16_t)a3);
    unknown_621393b0();
    return unknown_1ad233bf() & -256 | (int64_t)*(char *)0x7c98076ba0a9ad12;
}

// Address range: 0x1003d0 - 0x1003d3
int64_t function_1003d0(void) {
    // 0x1003d0
    int64_t result; // 0x1003d0
    return result;
}

// Address range: 0x1003ea - 0x1003eb
int64_t function_1003ea(int64_t a1) {
    // 0x1003ea
    int64_t result; // 0x1003ea
    return result;
}

// Address range: 0x10043a - 0x100449
int64_t function_10043a(void) {
    // 0x10043a
    int64_t v1; // 0x10043a
    *(int32_t *)v1 = 0x11280091;
    return unknown_181a9046();
}

// Address range: 0x1004b3 - 0x1004b7
int64_t function_1004b3(int64_t a1) {
    // 0x1004b3
    int64_t result; // 0x1004b3
    return result;
}

// Address range: 0x100500 - 0x100518
int64_t function_100500(int64_t a1) {
    // 0x100500
    return unknown_205fec0a() & 0xffffffff ^ 0x400d01e8;
}

// Address range: 0x10051c - 0x1005b9
int64_t function_10051c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10051c
    unknown_ffffffffb1d5e422();
    int32_t * v1 = (int32_t *)(a2 + 0xe88f28d4 & 0xffffffff); // 0x100521
    *v1 = 2 * *v1;
    __asm_fbld(*(float80_t *)(4 * a1 + a3));
    bool v2; // 0x10051c
    int64_t v3 = v2 ? -1 : 1; // 0x10052d
    int64_t v4 = v3 + a2; // 0x10052d
    int64_t v5 = unknown_3b67af36(a5, v4); // 0x100530
    unsigned char v6 = *(char *)a5; // 0x100571
    int64_t v7 = v3 + a5; // 0x100571
    uint64_t v8 = unknown_5007e878(v7); // 0x100572
    int32_t v9 = *(int32_t *)v8; // 0x100577
    char * v10 = (char *)(v8 + 0x226ca00); // 0x100579
    *v10 = *v10 + (char)v8;
    int64_t v11; // 0x10051c
    char * v12 = (char *)(v11 + 0x4001e800); // 0x10057f
    *v12 = *v12 + (char)(v8 / 256);
    uint64_t v13 = (int64_t)(v9 + (int32_t)a3 + (int32_t)(v6 > (char)v5) & -256) + a4;
    int64_t v14 = a4 & -0xff01; // 0x100585
    uint32_t v15 = *(int32_t *)-0x6639b9859e07ff67; // 0x100587
    int32_t * v16 = (int32_t *)(v7 + 102 + 8 * v4); // 0x100592
    *v16 = *v16 + (int32_t)v11;
    char v17 = *(char *)(((v13 / 256 + (int64_t)v15) % 256 | (int64_t)(v15 & -256)) - 0x37ab8cfd); // 0x100596
    int32_t * v18 = (int32_t *)(v11 + 0x520089f9); // 0x1005a3
    *v18 = *v18 + (int32_t)(v13 & 0xff00 | v14);
    int64_t v19 = (v14 | (int64_t)&g3) + 127; // 0x1005ab
    __writegsbyte(v19, __readgsbyte(v19) & v17);
    return unknown_ffffffffaf0591b7();
}

// Address range: 0x1005f2 - 0x1005f5
int64_t function_1005f2(void) {
    // 0x1005f2
    int64_t result; // 0x1005f2
    return result;
}

// Address range: 0x100692 - 0x10069c
int64_t function_100692(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100692
    int64_t v1; // 0x100692
    int32_t * v2 = (int32_t *)(v1 + 17); // 0x100692
    *v2 = *v2 + (int32_t)a4;
    return function_1006f2();
}

// Address range: 0x1006ec - 0x1006f1
int64_t function_1006ec(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1006ec
    int64_t result; // 0x1006ec
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x1006f2 - 0x1006f9
int64_t function_1006f2(void) {
    // 0x1006f2
    int64_t result; // 0x1006f2
    return result;
}

// Address range: 0x100703 - 0x100725
int64_t function_100703(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x100703
    int64_t v1; // 0x100703
    *(char *)a4 = (char)v1 + (char)(a4 / 256);
    *(int32_t *)0x68f5d3ab1421d2 = (int32_t)v1;
    char v2 = *(char *)0x2ed6e623; // 0x10071c
    *(char *)0x2ed6e623 = v2 + (char)((uint64_t)v1 / 256);
    return __asm_int1();
}

// Address range: 0x10072a - 0x100742
int64_t function_10072a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10072a
    int64_t v1; // 0x10072a
    bool v2; // 0x10072a
    return (v2 ? v1 : v1) & 0xffffffff;
}

// Address range: 0x1007d7 - 0x1007da
int64_t function_1007d7(int64_t a1) {
    // 0x1007d7
    int64_t result; // 0x1007d7
    return result;
}

// Address range: 0x1007da - 0x1007e5
int64_t function_1007da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1007da
    int64_t v1; // 0x1007da
    *(char *)-0x13c567e153c0fe18 = (char)v1;
    return __asm_in_135((int16_t)a3);
}
