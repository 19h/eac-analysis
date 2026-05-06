/*
 * Targeted RetDec C for native executable gap queue batch 573.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x30041e-0x30061e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30061e-0x30081e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30081e-0x300a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x300a1e-0x300c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x343fd8-0x3440d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3441d8-0x3443d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3443d8-0x3445d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3445d8-0x3447d8 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_218efb6();
int64_t function_30041e(void);
int64_t function_300490(void);
int64_t function_3004db(void);
int64_t function_30051c(void);
int64_t function_300523(void);
int64_t function_300534(int64_t a1, int64_t a2);
int64_t function_300570(void);
int64_t function_3005ba(void);
int64_t function_3005de(void);
int64_t function_300631(int64_t a1);
int64_t function_300662(void);
int64_t function_3006ef(void);
int64_t function_300734(void);
int64_t function_300745(void);
int64_t function_300759(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30077a(int64_t a1);
int64_t function_30077d(int64_t a1, int64_t a2);
int64_t function_3007b1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3007e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30080d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_300824(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3008e7(int64_t a1);
int64_t function_3009f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_300a2a(int64_t a1);
int64_t function_300a2e(int64_t a1);
int64_t function_300a4c(int64_t a1);
int64_t function_300ab4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_300ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_300aba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_300af9(void);
int64_t function_300b0d(void);
int64_t function_300bc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_300bd9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_300c16(int64_t a1);
int64_t function_343fd8(void);
int64_t function_343ff2(int64_t a1);
int64_t function_34404b(void);
int64_t function_344076(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3440cd(void);
int64_t function_3441d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_344265(int64_t a1);
int64_t function_34426d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3442ac(void);
int64_t function_34433d(void);
int64_t function_34434a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_344384(int64_t a1, int64_t a2);
int64_t function_344389(int64_t a1);
int64_t function_3443a6(void);
int64_t function_3443b5(void);
int64_t function_34440e(void);
int64_t function_344426(void);
int64_t function_344438(void);
int64_t function_34443f(void);
int64_t function_344487(void);
int64_t function_3444b1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3444ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_344512(void);
int64_t function_344562(void);
int64_t function_344590(void);
int64_t function_3445cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_344655(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_344755(void);
int64_t function_511b7f();
int64_t function_ffffffffb03da422();
int64_t function_ffffffffb12fe73d();
int64_t function_ffffffffcda100e3();
int64_t function_ffffffffd0663257();
int64_t function_ffffffffe131ed2f();
int64_t unknown_3a37d276();
int64_t unknown_4062e972();
int64_t unknown_47effb8a();
int64_t unknown_5e345656();
int64_t unknown_ffffffff822f0c6b();
int64_t unknown_ffffffff84700a4e();
int64_t unknown_ffffffff9d524f65();
int64_t unknown_ffffffffbb33e243();
int64_t unknown_ffffffffbf87ca6c();
int64_t unknown_ffffffffdca8eac3();
int64_t unknown_ffffffffec13c616();
int64_t unknown_fffffffff58feaa8();
int64_t unknown_fffffffff73f1f22();
int64_t unknown_fffffffffef42032();

// Address range: 0x30041e - 0x30041f
int64_t function_30041e(void) {
    // 0x30041e
    int64_t result; // 0x30041e
    return result;
}

// Address range: 0x300490 - 0x300497
int64_t function_300490(void) {
    // 0x300490
    __asm_int(-59);
    return function_ffffffffb03da422();
}

// Address range: 0x3004db - 0x3004e2
int64_t function_3004db(void) {
    // 0x3004db
    return function_ffffffffe131ed2f();
}

// Address range: 0x30051c - 0x300523
int64_t function_30051c(void) {
    // 0x30051c
    unknown_fffffffff73f1f22();
    return function_300570();
}

// Address range: 0x300523 - 0x300524
int64_t function_300523(void) {
    // 0x300523
    int64_t result; // 0x300523
    return result;
}

// Address range: 0x300534 - 0x300557
int64_t function_300534(int64_t a1, int64_t a2) {
    // 0x300534
    unknown_ffffffffbb33e243();
    return unknown_ffffffff84700a4e();
}

// Address range: 0x300570 - 0x300572
int64_t function_300570(void) {
    // 0x300570
    int64_t result; // 0x300570
    return result;
}

// Address range: 0x3005ba - 0x3005bd
int64_t function_3005ba(void) {
    // 0x3005ba
    int64_t result; // 0x3005ba
    return result;
}

// Address range: 0x3005de - 0x3005e1
int64_t function_3005de(void) {
    // 0x3005de
    int64_t result; // 0x3005de
    return result;
}

// Address range: 0x300631 - 0x300635
int64_t function_300631(int64_t a1) {
    // 0x300631
    int64_t v1; // 0x300631
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x300662 - 0x300667
int64_t function_300662(void) {
    // 0x300662
    return function_ffffffffd0663257();
}

// Address range: 0x3006ef - 0x3006f0
int64_t function_3006ef(void) {
    // 0x3006ef
    int64_t result; // 0x3006ef
    return result;
}

// Address range: 0x300734 - 0x300735
int64_t function_300734(void) {
    // 0x300734
    int64_t result; // 0x300734
    return result;
}

// Address range: 0x300745 - 0x300746
int64_t function_300745(void) {
    // 0x300745
    int64_t result; // 0x300745
    return result;
}

// Address range: 0x300759 - 0x30075d
int64_t function_300759(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x300759
    bool v1; // 0x300759
    if (a4 != 1 == v1) {
        function_300734();
    }
    // 0x30075b
    return function_300745();
}

// Address range: 0x30077a - 0x30077d
int64_t function_30077a(int64_t a1) {
    // 0x30077a
    int64_t result; // 0x30077a
    return result;
}

// Address range: 0x30077d - 0x30078a
int64_t function_30077d(int64_t a1, int64_t a2) {
    // 0x30077d
    int64_t v1; // 0x30077d
    *(char *)a2 = (char)(v1 / 256 & v1);
    return function_218efb6();
}

// Address range: 0x3007b1 - 0x3007c9
int64_t function_3007b1(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_int1(); // 0x3007b5
    __asm_out((int16_t)a3, (char)v1);
    int64_t v2 = a1; // 0x3007b7
    while (*(int32_t *)v2 <= (int32_t)v1) {
        // 0x3007b8
        bool v3; // 0x3007b1
        v2 += (v3 ? -4 : 4);
    }
    int64_t result = unknown_ffffffffdca8eac3(v2); // 0x3007bd
    __writegsbyte(result, __readgsbyte(result) ^ (char)result);
    char * v4 = (char *)result; // 0x3007c5
    *v4 = *v4 + 60;
    return result;
}

// Address range: 0x3007e4 - 0x3007f8
int64_t function_3007e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3007e4
    int64_t v1; // 0x3007e4
    int32_t * v2 = (int32_t *)(v1 - 0x527d1fe2); // 0x3007e4
    bool v3; // 0x3007e4
    *v2 = (int32_t)v3 - (int32_t)v1 + *v2;
    *(char *)0x44e601e8 = 32 * *(char *)0x44e601e8;
    return 0x44e601e8;
}

// Address range: 0x30080d - 0x300821
int64_t function_30080d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30080d
    int64_t v1; // 0x30080d
    int32_t v2 = *(int32_t *)(v1 - 0x322a32c6); // 0x30080d
    return (0x10000 * (v2 | (int32_t)v1) >> 16) + 0x76adfe18;
}

// Address range: 0x300824 - 0x300831
int64_t function_300824(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a4 + 0x5673b9ee); // 0x30082a
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x300824
    return result;
}

// Address range: 0x3008e7 - 0x3008ea
int64_t function_3008e7(int64_t a1) {
    // 0x3008e7
    int64_t result; // 0x3008e7
    return result;
}

// Address range: 0x3009f2 - 0x300a28
int64_t function_3009f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3009f2
    int64_t v1; // 0x3009f2
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(char *)v2 = (char)v2 | 107;
    int64_t v4; // 0x3009f2
    int64_t v5 = ((int64_t)&v4 - v1 & 0xffffffff) - 8; // 0x300a01
    int64_t v6 = v5 - (int64_t)&g1; // 0x300a01
    int32_t * v7 = (int32_t *)(v1 - 0x6667c556); // 0x300a06
    uint32_t v8 = *v7; // 0x300a06
    uint32_t v9 = v8 + ((int32_t)a4 & -256 | 107); // 0x300a06
    *v7 = v9;
    *(int64_t *)(v6 - 8) = v3;
    int32_t v10 = v9 < v8 ? -0x68bd86c0 : -0x68bd86c1; // 0x300a0e
    *(int64_t *)(v6 - 16) = v3;
    *(int32_t *)0x92c101e8 = *(int32_t *)&v3;
    return (0x10000 * (int32_t)v2 >> 16) - v10;
}

// Address range: 0x300a2a - 0x300a2b
int64_t function_300a2a(int64_t a1) {
    // 0x300a2a
    int64_t result; // 0x300a2a
    return result;
}

// Address range: 0x300a2e - 0x300a2f
int64_t function_300a2e(int64_t a1) {
    // 0x300a2e
    int64_t result; // 0x300a2e
    return result;
}

// Address range: 0x300a4c - 0x300a4d
int64_t function_300a4c(int64_t a1) {
    // 0x300a4c
    int64_t result; // 0x300a4c
    return result;
}

// Address range: 0x300ab4 - 0x300ab7
int64_t function_300ab4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x300ab4
    int64_t v1; // 0x300ab4
    __asm_out_133((int16_t)a3, (int32_t)v1);
    return function_300aba(a1, a2, a3, v1);
}

// Address range: 0x300ab8 - 0x300aba
int64_t function_300ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x300ab8
    int64_t result; // 0x300ab8
    return result;
}

// Address range: 0x300aba - 0x300ad4
int64_t function_300aba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 101); // 0x300ac2
    uint32_t v2 = *v1; // 0x300ac2
    int64_t v3; // 0x300aba
    uint32_t v4 = v2 + (int32_t)v3; // 0x300ac2
    *v1 = v4;
    unsigned char v5 = (char)v3; // 0x300ac5
    unsigned char v6 = (char)v3 + v5; // 0x300ac5
    unsigned char v7 = v6 + (char)(v4 < v2); // 0x300ac5
    bool v8 = v4 < v2 ? v7 <= v5 : v6 < v5; // 0x300ac5
    int32_t * v9 = (int32_t *)(2 * v3 + 0x63127aa5 + (v3 & -256 | (int64_t)v7)); // 0x300ac7
    int32_t v10 = *v9; // 0x300ac7
    *v9 = v10 - ((int32_t)a4 & -0xff01 | (int32_t)&g2) + (int32_t)v8;
    return __asm_int1();
}

// Address range: 0x300af9 - 0x300afb
int64_t function_300af9(void) {
    // 0x300af9
    int64_t result; // 0x300af9
    return result;
}

// Address range: 0x300b0d - 0x300b12
int64_t function_300b0d(void) {
    // 0x300b0d
    return function_ffffffffb12fe73d();
}

// Address range: 0x300bc5 - 0x300bd9
int64_t function_300bc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x300bc5
    int64_t v1; // 0x300bc5
    int64_t result = v1;
    *(char *)result = (char)result + 126;
    return result;
}

// Address range: 0x300bd9 - 0x300be9
int64_t function_300bd9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x300bd9
    int64_t v1; // 0x300bd9
    int64_t result = v1;
    bool v2; // 0x300bd9
    *(char *)result = 2 * (char)result | (char)v2;
    return result;
}

// Address range: 0x300c16 - 0x300c1b
int64_t function_300c16(int64_t a1) {
    // 0x300c16
    int64_t v1; // 0x300c16
    return v1 & -161;
}

// Address range: 0x343fd8 - 0x343fd9
int64_t function_343fd8(void) {
    // 0x343fd8
    int64_t result; // 0x343fd8
    return result;
}

// Address range: 0x343ff2 - 0x343ff5
int64_t function_343ff2(int64_t a1) {
    // 0x343ff2
    int64_t result; // 0x343ff2
    return result;
}

// Address range: 0x34404b - 0x34404c
int64_t function_34404b(void) {
    // 0x34404b
    int64_t result; // 0x34404b
    return result;
}

// Address range: 0x344076 - 0x344099
int64_t function_344076(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x1fa5b666); // 0x344076
    *v1 = *v1 + (int32_t)a3;
    int64_t result = unknown_47effb8a(); // 0x344084
    int32_t * v2 = (int32_t *)(a4 - 0x2feec1b7); // 0x344089
    *v2 = *v2 + (int32_t)a1;
    int64_t v3; // 0x344076
    *(char *)a2 = *(char *)&v3 + (char)result;
    return result;
}

// Address range: 0x3440cd - 0x3440ce
int64_t function_3440cd(void) {
    // 0x3440cd
    int64_t result; // 0x3440cd
    return result;
}

// Address range: 0x3441d8 - 0x34424a
int64_t function_3441d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 0x14909a21); // 0x3441dd
    int64_t v2; // 0x3441d8
    uint32_t v3 = (int32_t)((int32_t)v2 < 0x3a9bef01) + (int32_t)a3 + v1; // 0x3441dd
    int64_t v4 = v2 ^ a4;
    int64_t v5 = v4 & 0xffffffff; // 0x3441e6
    __asm_outsd((int16_t)v3, (int32_t)a2);
    int64_t v6 = v2 & -0xff01 | (int64_t)&g5; // 0x3441e9
    char * v7 = (char *)v5; // 0x3441eb
    *v7 = *v7 + (char)v4;
    char * v8 = (char *)(v6 + 26); // 0x3441f4
    char v9 = *v8 | (char)((int64_t)&g5 >> 8); // 0x3441f4
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x3441f4
    *v8 = v9;
    if (v10 % 2 == 0) {
        // 0x344246
        return v5 | (int64_t)&g5 & 0xff00;
    }
    int64_t v11 = v3; // 0x3441dd
    *(char *)(v6 + v11) = (char)v2;
    char * v12 = (char *)(a1 - 111); // 0x3441fd
    *v12 = *v12 + 48;
    char v13 = *(char *)0x70302909; // 0x344202
    *(char *)0x70302909 = v13 + (char)((int64_t)&g5 >> 8);
    char v14 = *(char *)(v5 + 0x7480ca0b); // 0x344208
    int64_t v15 = 256 * (int64_t)(v14 | (char)(v3 / 256)) | v11 & 0xffff00ff; // 0x344208
    char * v16 = (char *)v15; // 0x34420e
    *v16 = *v16 + (char)((int64_t)&g5 >> 8);
    unknown_ffffffffec13c616();
    *(int32_t *)a1 = *(int32_t *)v5;
    bool v17; // 0x3441d8
    int64_t v18 = v17 ? -4 : 4; // 0x344215
    int64_t v19 = v18 + a1; // 0x344215
    uint32_t v20 = *(int32_t *)-0x51d77fd9; // 0x344220
    uint32_t v21 = v20 + (int32_t)v19; // 0x344220
    *(int32_t *)-0x51d77fd9 = v21;
    unsigned char v22 = *(char *)(v15 - 0x515af486); // 0x344226
    return unknown_fffffffffef42032(v19, v5 + v18, v15 & 0xffffff00 | (int64_t)v22) + 0x915b0079 + (int64_t)(v21 < v20) & 0xffffffff;
}

// Address range: 0x344265 - 0x34426d
int64_t function_344265(int64_t a1) {
    // 0x344265
    return unknown_ffffffff822f0c6b(a1);
}

// Address range: 0x34426d - 0x344282
int64_t function_34426d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34426d
    unknown_3a37d276();
    uint64_t v1 = function_511b7f(); // 0x344279
    return (v1 / 256 + v1) % 256 | v1 & -256;
}

// Address range: 0x3442ac - 0x3442ad
int64_t function_3442ac(void) {
    // 0x3442ac
    int64_t result; // 0x3442ac
    return result;
}

// Address range: 0x34433d - 0x34433e
int64_t function_34433d(void) {
    // 0x34433d
    int64_t result; // 0x34433d
    return result;
}

// Address range: 0x34434a - 0x344379
int64_t function_34434a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    __asm_in(-99);
    unknown_5e345656();
    int32_t * v2 = (int32_t *)(a3 - 0x2033d5ad); // 0x344355
    uint32_t v3 = *v2; // 0x344355
    *v2 = v3 / 2 | 0x80000000 * v3;
    int64_t v4 = unknown_ffffffff9d524f65(); // 0x34435f
    int64_t v5; // 0x34434a
    int32_t * v6 = (int32_t *)(2 * v5 + a3); // 0x344364
    int32_t v7 = *v6 + (int32_t)a2; // 0x344364
    *v6 = v7;
    int64_t v8 = v4; // 0x344367
    if (v7 >= 0) {
        v8 = function_34433d();
    }
    // 0x344369
    *(char *)v1 = *(char *)&v1 | (char)v8;
    unknown_4062e972();
    return function_3443b5();
}

// Address range: 0x344384 - 0x344389
int64_t function_344384(int64_t a1, int64_t a2) {
    // 0x344384
    int64_t v1; // 0x344384
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x344389 - 0x344390
int64_t function_344389(int64_t a1) {
    // 0x344389
    int64_t result; // 0x344389
    return result;
}

// Address range: 0x3443a6 - 0x3443a7
int64_t function_3443a6(void) {
    // 0x3443a6
    int64_t result; // 0x3443a6
    return result;
}

// Address range: 0x3443b5 - 0x3443bc
int64_t function_3443b5(void) {
    // 0x3443b5
    int64_t result; // 0x3443b5
    return result;
}

// Address range: 0x34440e - 0x34440f
int64_t function_34440e(void) {
    // 0x34440e
    int64_t result; // 0x34440e
    return result;
}

// Address range: 0x344426 - 0x344427
int64_t function_344426(void) {
    // 0x344426
    int64_t result; // 0x344426
    return result;
}

// Address range: 0x344438 - 0x34443c
int64_t function_344438(void) {
    // 0x344438
    return function_344426();
}

// Address range: 0x34443f - 0x344440
int64_t function_34443f(void) {
    // 0x34443f
    int64_t result; // 0x34443f
    return result;
}

// Address range: 0x344487 - 0x34448c
int64_t function_344487(void) {
    // 0x344487
    return function_ffffffffcda100e3();
}

// Address range: 0x3444b1 - 0x3444bd
int64_t function_3444b1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3444b1
    return function_34443f();
}

// Address range: 0x3444ce - 0x3444e3
int64_t function_3444ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3444ce
    int64_t result; // 0x3444ce
    uint64_t v1 = result;
    char * v2 = (char *)(a4 + 0xea50013 + v1); // 0x3444ce
    *v2 = *v2 + (char)(result / 256);
    *(char *)0x402bc0dc = *(char *)0x402bc0dc + (char)(v1 / 256);
    return result;
}

// Address range: 0x344512 - 0x344513
int64_t function_344512(void) {
    // 0x344512
    int64_t result; // 0x344512
    return result;
}

// Address range: 0x344562 - 0x344565
int64_t function_344562(void) {
    // 0x344562
    int64_t result; // 0x344562
    return result;
}

// Address range: 0x344590 - 0x344591
int64_t function_344590(void) {
    // 0x344590
    int64_t result; // 0x344590
    return result;
}

// Address range: 0x3445cb - 0x34464a
int64_t function_3445cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3445cb
    int64_t v1; // 0x3445cb
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = v1 | 221; // 0x3445cb
    int32_t * v5 = (int32_t *)(4 * v1 - 99 + v4); // 0x344638
    *v5 = *v5 + (int32_t)v4;
    *(int32_t *)-0x33c9d12c = *(int32_t *)-0x33c9d12c + (int32_t)a3;
    int32_t v6 = a1; // 0x344644
    int32_t v7 = v2 - (a3 & 0xff00) & 0xff00 | v2 & 0xffff00ff; // 0x344644
    int32_t v8 = v7 + v6; // 0x344644
    unsigned char v9 = *(char *)&v3; // 0x344647
    int64_t v10 = a4 & 0xffffff00; // 0x344647
    if (v8 < 0 == ((v8 ^ v6) & (v8 ^ v7)) < 0 != v8 != 0) {
        // 0x34464a
        return v10 | (int64_t)v9;
    }
    // 0x34460b
    *(int32_t *)(int64_t)v8 = __asm_insd((int16_t)a3);
    return v10 | (int64_t)(v9 + 12);
}

// Address range: 0x344655 - 0x344706
int64_t function_344655(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x344655
    int64_t v1; // 0x344655
    uint64_t v2 = v1;
    *(char *)-0x17c4a1283997f3c6 = (char)v1;
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a2;
    __asm_int(56);
    int64_t v3; // 0x344655
    *(int32_t *)a1 = *(int32_t *)&v3;
    bool v4; // 0x344655
    int64_t v5 = v4 ? -4 : 4; // 0x344662
    int64_t v6 = v5 + a1; // 0x344662
    int64_t v7 = v5 + a2; // 0x344662
    v3 = v7;
    uint64_t v8 = unknown_ffffffffbf87ca6c(v6, v7); // 0x344663
    char v9 = a3; // 0x344669
    uint64_t v10 = v8 / 256; // 0x344669
    char v11 = v10; // 0x344669
    char v12 = v11 + v9; // 0x344669
    if (((v12 ^ v9) & (v12 ^ v11)) < 0) {
        // 0x3446e8
        *(char *)0x5cde16ef = *(char *)0x5cde16ef + (char)(v2 / 256);
        *(int32_t *)v2 = (int32_t)v2 / 2;
        char * v13 = (char *)(v1 + 104 + 2 * v6); // 0x3446f0
        *v13 = *v13 - 24;
        int64_t result = ((v10 + a4) % 256 | a4 & 0xffffff00) + 0x914f01e8 & 0xffffffff; // 0x3446f6
        int32_t * v14 = (int32_t *)(v3 - 0x14fc826e); // 0x3446fa
        *v14 = *v14 + (int32_t)v6;
        char * v15 = (char *)(result - 0x15ffbbff); // 0x344700
        *v15 = *v15 + (char)v8;
        return result;
    }
    // 0x344672
    *(int32_t *)v6 = __asm_insd(488);
    __asm_out(488, (char)a4);
    int64_t v16 = 0x100000000 * a4 >> 32; // 0x344674
    int64_t result2 = (v10 + v16) % 256 | v16 & -256; // 0x344678
    uint32_t v17 = *(int32_t *)0x914f01e8; // 0x34467a
    uint32_t v18 = v17 + (int32_t)result2; // 0x34467a
    *(int32_t *)0x914f01e8 = v18;
    if (v18 >= v17) {
        // 0x344695
        *(int32_t *)result2 = -0x51efe18;
        return unknown_fffffffff58feaa8();
    }
    int32_t * v19 = (int32_t *)((v6 + v1 + (int64_t)(v18 < v17) & 0xffffffff) - 0x742b4186); // 0x3446ad
    *v19 = *v19 - 0x6eb0fe18;
    char v20 = *(char *)0x914f01e8; // 0x3446b3
    if (((v20 + 28 ^ v20) & (v20 ^ -128)) >= 0) {
        // 0x3446ba
        return result2;
    }
    // 0x344695
    *(int32_t *)result2 = -0x51efe18;
    return unknown_fffffffff58feaa8();
}

// Address range: 0x344755 - 0x344758
int64_t function_344755(void) {
    // 0x344755
    int64_t result; // 0x344755
    return result;
}
