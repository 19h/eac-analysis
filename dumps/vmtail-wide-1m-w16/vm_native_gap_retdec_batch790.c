/*
 * Targeted RetDec C for native executable gap queue batch 790.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x13c268-0x13c468 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13c468-0x13c668 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13c668-0x13c868 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13c868-0x13ca68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13ca68-0x13cc68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20899e-0x208b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x208b9e-0x208d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x208d9e-0x208f9e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_13c205();
int64_t function_13c268(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13c33f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13c36e(int64_t a1, int64_t a2);
int64_t function_13c39d(void);
int64_t function_13c3a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13c3c0(void);
int64_t function_13c3c8(int64_t a1, int64_t a2, int32_t a3, int64_t a4, uint64_t a5);
int64_t function_13c404(void);
int64_t function_13c405(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_13c415(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13c460(int64_t a1);
int64_t function_13c476(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13c4d7(void);
int64_t function_13c4de(void);
int64_t function_13c4f3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13c522(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13c577(int64_t a1);
int64_t function_13c582(void);
int64_t function_13c593(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13c5a8(void);
int64_t function_13c5b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13c6df(void);
int64_t function_13c6f9(void);
int64_t function_13c739(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13c785(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13c7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13c7f2(void);
int64_t function_13c81b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_13c830(int64_t a1);
int64_t function_13c834(int64_t a1, int64_t a2);
int64_t function_13c859(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13c879(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13c898(void);
int64_t function_13c931(void);
int64_t function_13c936(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13ca3b(void);
int64_t function_13ca73(int64_t a1);
int64_t function_13cb29(int64_t a1);
int64_t function_13cb6b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13cc1f(void);
int64_t function_13cc59(int64_t a1);
int64_t function_20899e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_208abf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_208bf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_208d5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_71d1ca85();
int64_t function_aeccd16();
int64_t function_caf2a();
int64_t function_ffffffff87e8c546();
int64_t unknown_10913247();
int64_t unknown_3d78af3a();
int64_t unknown_4eacfeaa();
int64_t unknown_545bc81d();
int64_t unknown_6f15ad08();
int64_t unknown_7430e377();
int64_t unknown_7816e089();
int64_t unknown_7c19b05f();
int64_t unknown_ffffffff89c95d56();
int64_t unknown_ffffffffbf095f45();
int64_t unknown_ffffffffebd8b53f();
int64_t unknown_fffffffffba8b4ea();

// Address range: 0x13c268 - 0x13c30a
int64_t function_13c268(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13c268
    int64_t v1; // 0x13c268
    int64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = a3;
    bool v5; // 0x13c268
    if (v5 || false) {
        function_13c205();
    }
    char * v6 = (char *)(a2 - 0x39f831f8); // 0x13c26a
    unsigned char v7 = *v6; // 0x13c26a
    unsigned char v8 = v7 + (char)v3; // 0x13c26a
    *v6 = v8;
    unknown_7430e377();
    unsigned char v9 = (char)a4; // 0x13c279
    char v10 = v8 < v7; // 0x13c279
    unsigned char v11 = v10 + (char)v1; // 0x13c279
    unsigned char v12 = v9 - v11; // 0x13c279
    int64_t v13 = (a4 & -256 | (int64_t)v12) - 1; // 0x13c27b
    if (v12 == 0 || v13 == 0) {
        // 0x13c27d
        *(int32_t *)-0x27ea54e5 = *(int32_t *)-0x27ea54e5 - (int32_t)a2;
        int32_t v14 = a1; // 0x13c285
        uint32_t v15 = *(int32_t *)(v2 - 0xf28f699); // 0x13c285
        if (v13 == 0) {
            // 0x13c297
            return __asm_int1(v15 + v14);
        }
        int64_t v16 = 0x10000 * (int32_t)v1 >> 16; // 0x13c278
        char v17 = *(char *)&v4; // 0x13c283
        int64_t result = (v16 - (v15 > -1 - v14 ? 233 : 232)) % 256 | v16 & 0xffffff00; // 0x13c28e
        int32_t * v18 = (int32_t *)(result + 0x4b67e675); // 0x13c290
        int32_t v19 = *v18; // 0x13c290
        *v18 = v19 + (int32_t)(256 * (int64_t)(v17 | (char)(v3 / 256)) | v3 & 0xffff00ff);
        return result;
    }
    bool v20 = v8 < v7 ? v11 != -1 | v12 - v10 > v9 : v11 > v9; // 0x13c279
    uint32_t v21 = (int32_t)v20 + (int32_t)v3 - *(int32_t *)(v4 - 24); // 0x13c2d8
    int32_t * v22 = (int32_t *)((int64_t)v21 - 0x6056039c); // 0x13c2db
    uint32_t v23 = *v22; // 0x13c2db
    int32_t v24 = a1; // 0x13c2db
    uint32_t v25 = v23 + v24; // 0x13c2db
    *v22 = v25;
    int64_t result2 = v13 & 0xffffffff; // 0x13c2e1
    if (v25 < v23 || v25 == 0) {
        // 0x13c2e5
        *(int32_t *)0x3e3108230f01c8b3 = (int32_t)v13;
        __asm_out((int16_t)v4, (char)v13);
        int64_t v26 = (result2 & v2) + v2; // 0x13c2f9
        *(int32_t *)-0x174667fe = *(int32_t *)-0x174667fe + v24;
        int32_t * v27 = (int32_t *)(v26 & 0xffffffff); // 0x13c301
        *v27 = *v27 + (int32_t)a2;
        char * v28 = (char *)(a1 - 32); // 0x13c307
        *v28 = *v28 ^ (char)(v21 / 256);
        return v26 & 0xffffff00 | 17;
    }
    // 0x13c2a3
    return result2;
}

// Address range: 0x13c33f - 0x13c360
int64_t function_13c33f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13c33f
    int64_t v1; // 0x13c33f
    *(char *)a1 = (char)v1;
    bool v2; // 0x13c33f
    int64_t v3 = v2 ? -1 : 1; // 0x13c348
    int64_t v4 = v3 + a1; // 0x13c348
    int64_t v5 = v1 & -0xff01 | (int64_t)&g1; // 0x13c34e
    int32_t v6 = *(int32_t *)(v1 + 8 * v1); // 0x13c357
    int32_t * v7 = (int32_t *)v4; // 0x13c35c
    *v7 = *v7 + (int32_t)v5;
    return function_13c3c8(v4, v3 + a2, v6, 256 * v5 & 0xff00 | a4 - 1, 0x3af55e00);
}

// Address range: 0x13c36e - 0x13c373
int64_t function_13c36e(int64_t a1, int64_t a2) {
    // 0x13c36e
    int64_t result; // 0x13c36e
    char * v1 = (char *)(a1 - 57 + result); // 0x13c36e
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x13c39d - 0x13c39e
int64_t function_13c39d(void) {
    // 0x13c39d
    int64_t result; // 0x13c39d
    return result;
}

// Address range: 0x13c3a0 - 0x13c3a5
int64_t function_13c3a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13c3a0
    int64_t result; // 0x13c3a0
    return result;
}

// Address range: 0x13c3c0 - 0x13c3c1
int64_t function_13c3c0(void) {
    // 0x13c3c0
    int64_t result; // 0x13c3c0
    return result;
}

// Address range: 0x13c3c8 - 0x13c404
int64_t function_13c3c8(int64_t a1, int64_t a2, int32_t a3, int64_t a4, uint64_t a5) {
    // 0x13c3c8
    int64_t v1; // 0x13c3c8
    int64_t v2 = v1;
    unsigned char v3 = (char)a4 % 32; // 0x13c3c8
    if (v3 != 0) {
        bool v4; // 0x13c3c8
        *(char *)v2 = (char)v4 << 8 - v3 | (char)v2 >> v3 | (char)((int16_t)v2 % 256 << (int16_t)(9 - v3));
    }
    *(int32_t *)-0x3b788411 = *(int32_t *)-0x3b788411 | (int32_t)a1;
    int32_t * v5 = (int32_t *)(a2 + 0x4bfd4b06 + 2 * v1); // 0x13c3dc
    uint32_t v6 = *v5; // 0x13c3dc
    *v5 = v6 / 0x800000 | 1024 * v6 | 512;
    unknown_fffffffffba8b4ea();
    char * v7 = (char *)(a1 + 0x6b8ae1ba); // 0x13c3f7
    *v7 = *v7 + (char)(a5 / 256);
    int32_t * v8 = (int32_t *)(a1 + 0x702b3a07); // 0x13c3fd
    *v8 = *v8 + (int32_t)a2;
    return a1 & 0xffffffff;
}

// Address range: 0x13c404 - 0x13c405
int64_t function_13c404(void) {
    // 0x13c404
    int64_t result; // 0x13c404
    return result;
}

// Address range: 0x13c405 - 0x13c415
int64_t function_13c405(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x13c405
    int64_t v1; // 0x13c405
    int64_t v2 = v1;
    *(char *)a3 = (char)v2 + (char)v1;
    char * v3 = (char *)(v2 + 0x10013d00 + 8 * v2); // 0x13c409
    *v3 = *v3 + (char)(a3 / 256);
    return function_13c39d();
}

// Address range: 0x13c415 - 0x13c453
int64_t function_13c415(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13c415
    int64_t v1; // 0x13c415
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 103); // 0x13c415
    *v3 = *v3 | (char)a3;
    __asm_out_133(1, (char)v1);
    char v4 = a4; // 0x13c41c
    char v5 = *(char *)(a3 - 89); // 0x13c41c
    char v6 = v5 + v4; // 0x13c41c
    int64_t result = __asm_hlt(a1); // 0x13c41f
    if (((v6 ^ v4) & (v6 ^ v5)) >= 0) {
        // 0x13c422
        *(char *)-0xd583d7 = *(char *)-0xd583d7 + (char)(v2 / 256);
        __asm_sti();
        return function_13c3c0();
    }
    int32_t * v7 = (int32_t *)(result + 6); // 0x13c434
    int32_t v8 = *v7; // 0x13c434
    int32_t v9 = a1; // 0x13c434
    int32_t v10 = v8 + v9; // 0x13c434
    *v7 = v10;
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0 != v10 != 0) {
        // 0x13c441
        return result;
    }
    int64_t result2 = function_13c404(); // 0x13c437
    if (((v10 ^ v8) & (v10 ^ v9)) < 0) {
        // 0x13c441
        return result2;
    }
    char * v11 = (char *)(v2 - 34); // 0x13c450
    *v11 = *v11 ^ (char)v2;
    return result2;
}

// Address range: 0x13c460 - 0x13c461
int64_t function_13c460(int64_t a1) {
    // 0x13c460
    int64_t result; // 0x13c460
    return result;
}

// Address range: 0x13c476 - 0x13c49b
int64_t function_13c476(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = unknown_6f15ad08(); // 0x13c47b
    char * v2 = (char *)(a4 + 82); // 0x13c485
    *v2 = *v2 + (char)(v1 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x13c4d7 - 0x13c4de
int64_t function_13c4d7(void) {
    // 0x13c4d7
    return function_ffffffff87e8c546();
}

// Address range: 0x13c4de - 0x13c4ee
int64_t function_13c4de(void) {
    char v1 = *(char *)-0x58a6fc11; // 0x13c4e7
    int64_t result; // 0x13c4de
    *(char *)-0x58a6fc11 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x13c4f3 - 0x13c51e
int64_t function_13c4f3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13c4f3
    int64_t v1; // 0x13c4f3
    uint64_t v2 = v1;
    *(char *)a1 = (char)(v2 / 256) + (char)a1;
    int32_t * v3 = (int32_t *)(a1 - 0x693d7971); // 0x13c516
    *v3 = *v3 + (int32_t)a3;
    return v2 & -256 | (int64_t)__asm_in(18);
}

// Address range: 0x13c522 - 0x13c56d
int64_t function_13c522(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x13c522
    int64_t result = v2 & 0xffffffff; // 0x13c522
    int32_t * v3 = (int32_t *)(result + 0x4bf90994); // 0x13c523
    bool v4; // 0x13c522
    *v3 = *v3 + (v4 ? 9 : 8);
    *(char *)-0x626c3ace = *(char *)-0x626c3ace & (char)a1;
    int64_t v5; // 0x13c522
    if (a4 == 1 | *(char *)&v5 == (char)v2) {
        // 0x13c56b
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
        return result;
    }
    // 0x13c578
    return result;
}

// Address range: 0x13c577 - 0x13c578
int64_t function_13c577(int64_t a1) {
    // 0x13c577
    int64_t result; // 0x13c577
    return result;
}

// Address range: 0x13c582 - 0x13c583
int64_t function_13c582(void) {
    // 0x13c582
    int64_t result; // 0x13c582
    return result;
}

// Address range: 0x13c593 - 0x13c59c
int64_t function_13c593(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13c593
    *(char *)(a3 - 42) = (char)a4;
    bool v1; // 0x13c593
    return (a1 + 151 + (int64_t)(bool)v1) % 256 | a1 & 0xffffff00;
}

// Address range: 0x13c5a8 - 0x13c5a9
int64_t function_13c5a8(void) {
    // 0x13c5a8
    int64_t result; // 0x13c5a8
    return result;
}

// Address range: 0x13c5b3 - 0x13c6a4
int64_t function_13c5b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13c5b3
    *(int32_t *)0x72fe5d8e = *(int32_t *)0x72fe5d8e + (int32_t)a1;
    bool v1; // 0x13c5b3
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = a1; // 0x13c5b3
    int64_t v4 = a3;
    int32_t v5 = 2 * (int32_t)a2; // 0x13c5c0
    int64_t v6; // 0x13c5b3
    int64_t v7 = v6 & 0x8538667f | 0x7ac79980; // 0x13c5c2
    if (v5 < 0) {
        v7 = function_13c582();
    }
    int64_t v8 = v5; // 0x13c5c0
    int64_t v9 = v4 & 0xffffffff; // 0x13c5c4
    *(char *)v3 = *(char *)v8;
    int32_t v10 = v7;
    uint32_t v11 = (int32_t)a4 + v10; // 0x13c5c9
    int64_t v12; // 0x13c5b3
    int64_t v13; // 0x13c5b3
    int64_t v14; // 0x13c5b3
    while (llvm_ctpop_i8((char)v11) % 2 != 0) {
        int64_t v15 = v3 + v2; // 0x13c5c6
        int64_t v16 = v2 + v8; // 0x13c5c6
        unsigned char v17 = *(char *)0x6a05c04a; // 0x13c615
        unknown_545bc81d(v15, v16);
        char v18 = *(char *)0x6bee46ba; // 0x13c61e
        *(char *)0x6bee46ba = v18 + (char)(v17 > (char)(v4 / 256)) + (char)(v12 / 256);
        int64_t v19 = __asm_int1((int32_t)v15); // 0x13c624
        *(char *)0x5714462b = -1 - *(char *)0x5714462b;
        *(int32_t *)v15 = *(int32_t *)v19 + (int32_t)v19;
        v3 = v15 + (v1 ? -4 : 4);
        int32_t * v20 = (int32_t *)(v12 + 1); // 0x13c631
        *v20 = *v20 + (int32_t)v12;
        unknown_ffffffffbf095f45(v3);
        int64_t v21; // 0x13c5b3
        int64_t v22 = *(int64_t *)(v21 + 16); // 0x13c644
        int64_t v23 = v21 + 24; // 0x13c644
        v13 = v22;
        v14 = v23;
        if ((int32_t)*(int64_t *)(v21 + 8) >= 0x49b62c2c) {
            goto lab_0x13c650;
        }
        int32_t * v24 = (int32_t *)(v9 - 0x531f2088); // 0x13c5ea
        *v24 = *v24 + (int32_t)v3;
        int32_t * v25 = (int32_t *)(v16 + 0x3af58fb2); // 0x13c600
        int32_t v26 = *v25 + (int32_t)v16; // 0x13c600
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x13c600
        *v25 = v26;
        int64_t v28 = (int64_t)(61 * *(int32_t *)v3); // 0x13c606
        v21 = v23;
        int64_t result = v28; // 0x13c609
        if (v27 % 2 == 0) {
            // 0x13c5dc
            return result;
        }
        v4 = v22;
        v5 = 2 * (int32_t)v16;
        v7 = v28 & 0x8538667f | 0x7ac79980;
        if (v5 < 0) {
            v7 = function_13c582();
        }
        // 0x13c5c4
        v8 = v5;
        v9 = v4 & 0xffffffff;
        *(char *)v3 = *(char *)v8;
        v10 = v7;
        v11 = 0x6a05c04a + v10;
    }
    // 0x13c5cd
    __asm_out_134((int16_t)v4, v10);
    v13 = v4;
    v14 = 0x6501e892;
    if (v11 >= 0) {
        // 0x13c5dc
        return 0x9814c824;
    }
  lab_0x13c650:;
    int64_t v29 = v14;
    int64_t result2 = unknown_ffffffff89c95d56(); // 0x13c650
    char v30 = *(char *)&v12; // 0x13c655
    char v31 = v13; // 0x13c655
    char v32 = v30 + v31; // 0x13c655
    *(char *)v12 = v32;
    int64_t * v33 = (int64_t *)(v29 - 8);
    if (((v32 ^ v30) & (v32 ^ v31)) < 0) {
        // 0x13c659
        *v33 = -0x41ff76b0;
        return result2;
    }
    // 0x13c69f
    *v33 = v9;
    *(int64_t *)(v29 + 3854) = v29 + 3862;
    return result2;
}

// Address range: 0x13c6df - 0x13c6e1
int64_t function_13c6df(void) {
    // 0x13c6df
    int64_t result; // 0x13c6df
    return result;
}

// Address range: 0x13c6f9 - 0x13c6fa
int64_t function_13c6f9(void) {
    // 0x13c6f9
    int64_t result; // 0x13c6f9
    return result;
}

// Address range: 0x13c739 - 0x13c784
int64_t function_13c739(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13c739
    int64_t result; // 0x13c739
    return result;
}

// Address range: 0x13c785 - 0x13c7b0
int64_t function_13c785(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a4 % 32; // 0x13c788
    if (v2 != 0) {
        *(char *)0x49b1928f = *(char *)0x49b1928f >> v2;
    }
    uint64_t v3 = __asm_wait(); // 0x13c791
    int32_t * v4 = (int32_t *)a4; // 0x13c793
    int32_t v5 = a3; // 0x13c793
    *v4 = *v4 ^ v5;
    float80_t v6; // 0x13c785
    *(float64_t *)a4 = (float64_t)v6;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    *(char *)0x150c49a8 = *(char *)0x150c49a8 + (char)(v3 / 256);
    int64_t v7; // 0x13c785
    int32_t * v8 = (int32_t *)(8 * v7 - 20 + v7); // 0x13c7a7
    *v8 = *v8 + 1;
    int32_t * v9 = (int32_t *)((v7 + 0xc0aaf054 & 0xffffffff) + 4 * (int64_t)(0x10000 * (int32_t)a1 >> 16)); // 0x13c7ac
    *v9 = *v9 + v5;
    return v1 & 0xffffffff;
}

// Address range: 0x13c7b0 - 0x13c7b5
int64_t function_13c7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13c7b0
    int64_t result; // 0x13c7b0
    return result;
}

// Address range: 0x13c7f2 - 0x13c7f3
int64_t function_13c7f2(void) {
    // 0x13c7f2
    int64_t result; // 0x13c7f2
    return result;
}

// Address range: 0x13c81b - 0x13c82e
int64_t function_13c81b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = (char)(a4 / 256); // 0x13c81b
    unsigned char v2 = v1 + (char)a3; // 0x13c81b
    int64_t v3; // 0x13c81b
    uint32_t v4 = (int32_t)v3;
    *(int32_t *)v3 = 0x80000000 * v4 | 0x40000000 * (int32_t)(v2 < v1) | v4 / 4;
    int64_t v5; // 0x13c81b
    *(char *)a3 = *(char *)&v5 | 61;
    int32_t * v6 = (int32_t *)(v3 + 0x3058b50a); // 0x13c823
    *v6 = *v6 + (int32_t)(256 * (int64_t)v2 | a4 & 0xffff00ff);
    return function_13c7f2();
}

// Address range: 0x13c830 - 0x13c833
int64_t function_13c830(int64_t a1) {
    // 0x13c830
    int64_t result; // 0x13c830
    return result;
}

// Address range: 0x13c834 - 0x13c84d
int64_t function_13c834(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_3d78af3a(); // 0x13c834
    int64_t v2; // 0x13c834
    int32_t * v3 = (int32_t *)(v2 + 0x48d3f8a1); // 0x13c839
    *v3 = *v3 + (int32_t)v1;
    int64_t v4 = unknown_10913247(a2 & 0xffffffff); // 0x13c841
    char * v5 = (char *)(v4 + 4); // 0x13c846
    *v5 = *v5 | (char)v4;
    return (v4 + 183) % 256 | v4 & -256;
}

// Address range: 0x13c859 - 0x13c879
int64_t function_13c859(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_7c19b05f(); // 0x13c859
    *(char *)0x55bbf36b01e8e1f4 = (char)v1;
    int64_t v2 = v1 & -0xff01 | (int64_t)&g3; // 0x13c868
    int32_t * v3 = (int32_t *)a4; // 0x13c86a
    bool v4; // 0x13c859
    *v3 = *v3 + (int32_t)v4 + (int32_t)v2;
    int64_t v5; // 0x13c859
    int64_t v6 = v2 + v5; // 0x13c86c
    int32_t * v7 = (int32_t *)(a4 - 0x7f3b45fe); // 0x13c86e
    *v7 = *v7 + (int32_t)a3;
    __asm_out_135(47, (int32_t)v6);
    return v6 & 0xffffffff;
}

// Address range: 0x13c879 - 0x13c896
int64_t function_13c879(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13c879
    return unknown_7816e089();
}

// Address range: 0x13c898 - 0x13c89d
int64_t function_13c898(void) {
    // 0x13c898
    return function_71d1ca85();
}

// Address range: 0x13c931 - 0x13c932
int64_t function_13c931(void) {
    // 0x13c931
    int64_t result; // 0x13c931
    return result;
}

// Address range: 0x13c936 - 0x13ca08
int64_t function_13c936(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x13c936
    int64_t v1; // 0x13c936
    *(char *)a1 = (char)v1;
    bool v2; // 0x13c936
    __asm_iretd((v2 ? -1 : 1) + a1);
    int64_t v3 = unknown_ffffffffebd8b53f(); // 0x13c939
    int64_t v4; // 0x13c936
    char v5 = *(char *)&v4 | (char)v4; // 0x13c93e
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x13c93e
    *(char *)v4 = v5;
    if (v6 % 2 == 0) {
        if (a4 != 1 && (int32_t)v3 != 0x1c43695e) {
            function_13c931();
        }
        // 0x13c949
        return __asm_in_136(-11);
    }
    int64_t result = unknown_4eacfeaa(); // 0x13c9b5
    int32_t * v7 = (int32_t *)result; // 0x13c9ba
    *v7 = *v7 + 98;
    return result;
}

// Address range: 0x13ca3b - 0x13ca44
int64_t function_13ca3b(void) {
    // 0x13ca3b
    int64_t result; // 0x13ca3b
    return result;
}

// Address range: 0x13ca73 - 0x13ca74
int64_t function_13ca73(int64_t a1) {
    // 0x13ca73
    int64_t result; // 0x13ca73
    return result;
}

// Address range: 0x13cb29 - 0x13cb2e
int64_t function_13cb29(int64_t a1) {
    // 0x13cb29
    return function_aeccd16(a1);
}

// Address range: 0x13cb6b - 0x13cb74
int64_t function_13cb6b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x535c522f); // 0x13cb6b
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x13cb6b
    *(char *)a1 = (char)v2;
    bool v3; // 0x13cb6b
    return function_aeccd16((v3 ? -1 : 1) + a1);
}

// Address range: 0x13cc1f - 0x13cc20
int64_t function_13cc1f(void) {
    // 0x13cc1f
    int64_t result; // 0x13cc1f
    return result;
}

// Address range: 0x13cc59 - 0x13cc5c
int64_t function_13cc59(int64_t a1) {
    // 0x13cc59
    int64_t result; // 0x13cc59
    // 0x13cc5b
    return result;
}

// Address range: 0x20899e - 0x208abf
int64_t function_20899e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x20899e
    int64_t v1; // 0x20899e
    v1 = (int64_t)&v1 + 16;
    return function_caf2a(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x208abf - 0x208bf3
int64_t function_208abf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x208abf
    return function_caf2a(a1, a2, a3, a4, a5, a6, a5);
}

// Address range: 0x208bf3 - 0x208d5e
int64_t function_208bf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x208bf3
    int64_t v1; // 0x208bf3
    return function_caf2a(a1, a2, a3, v1, a5, a6, 0x207074);
}

// Address range: 0x208d5e - 0x208eca
int64_t function_208d5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x208d5e
    return function_caf2a(a1, a2, a3, a4, a5, a6, 169);
}
