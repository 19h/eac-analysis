/*
 * Targeted RetDec C for native executable gap queue batch 652.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x22bc66-0x22be66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22be66-0x22c066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22c066-0x22c266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22c266-0x22c466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22c466-0x22c666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f6d9e-0x3f6f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f6f9e-0x3f719e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f719e-0x3f739e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1a5a7152();
int64_t function_20b69ae();
int64_t function_22bc66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22bca4(void);
int64_t function_22bcb2(int64_t a1, int64_t a2);
int64_t function_22bce6(void);
int64_t function_22bcfe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22bd4d(int64_t a1);
int64_t function_22bd51(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22bd62(void);
int64_t function_22bd7a(int64_t a1);
int64_t function_22bd80(void);
int64_t function_22bd88(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22bdb2(int64_t a1);
int64_t function_22bde9(int64_t a1);
int64_t function_22be0f(void);
int64_t function_22be28(void);
int64_t function_22be59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22be66(void);
int64_t function_22be9a(void);
int64_t function_22bf3f(void);
int64_t function_22bf4c(void);
int64_t function_22bf82(int64_t a1);
int64_t function_22bff4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22c036(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22c051(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22c088(void);
int64_t function_22c0af(void);
int64_t function_22c0fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22c1ca(int64_t a1);
int64_t function_22c1e7(void);
int64_t function_22c21e(void);
int64_t function_22c27b(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_22c2a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22c2e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22c2ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22c31a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22c450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22c58e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30ef186d();
int64_t function_3f6d97();
int64_t function_3f6d9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3f6e49(void);
int64_t function_3f6e8e(void);
int64_t function_3f6eb6(void);
int64_t function_3f6eb8(int64_t a1);
int64_t function_3f6ed3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3f6f9d(int64_t a1);
int64_t function_3f6fbd(void);
int64_t function_3f7046(void);
int64_t function_3f7059(int64_t a1);
int64_t function_3f7081(int64_t a1);
int64_t function_3f708d(void);
int64_t function_3f70c0(int64_t a1, int64_t a2);
int64_t function_3f70f5(void);
int64_t function_3f712a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f7142(void);
int64_t function_3f716e(void);
int64_t function_3f71ac(int64_t a1);
int64_t function_3f71c1(int64_t a1);
int64_t function_3f71d8(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3f71fd(void);
int64_t function_3f7220(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3f72db(int64_t a1);
int64_t function_3f72e1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f7302(int64_t a1);
int64_t function_cdc60();
int64_t function_ffffffff86b4bf19();
int64_t function_ffffffff97c6c414();
int64_t function_ffffffff9d9cfce3();
int64_t function_ffffffffa049ba31();
int64_t function_ffffffffa83fc240();
int64_t function_ffffffffa83feec3();
int64_t function_ffffffffeab5bbc3();
int64_t unknown_10f9bfef();
int64_t unknown_1d204a83();
int64_t unknown_3d610b13();
int64_t unknown_63175604();
int64_t unknown_ffffffff8c33b9f3();
int64_t unknown_ffffffffa0a29799();
int64_t unknown_ffffffffbe235304();
int64_t unknown_ffffffffe484b09c();
int64_t unknown_ffffffffebe44990();
int64_t unknown_fffffffff2f9f06c();

// Address range: 0x22bc66 - 0x22bc7f
int64_t function_22bc66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_fffffffff2f9f06c(); // 0x22bc66
    char v2 = *(char *)(a2 - 0x5272857d); // 0x22bc6b
    int32_t * v3 = (int32_t *)(v1 - 0x6e13f7f6); // 0x22bc74
    int32_t v4 = *v3; // 0x22bc74
    *v3 = v4 + (int32_t)(a4 & 0xffffff00 | (int64_t)(v2 + (char)a4));
    return v1 | 232;
}

// Address range: 0x22bca4 - 0x22bca5
int64_t function_22bca4(void) {
    // 0x22bca4
    int64_t result; // 0x22bca4
    return result;
}

// Address range: 0x22bcb2 - 0x22bcb6
int64_t function_22bcb2(int64_t a1, int64_t a2) {
    // 0x22bcb2
    int64_t result; // 0x22bcb2
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x22bce6 - 0x22bce7
int64_t function_22bce6(void) {
    // 0x22bce6
    int64_t result; // 0x22bce6
    return result;
}

// Address range: 0x22bcfe - 0x22bd31
int64_t function_22bcfe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_63175604(); // 0x22bcfe
    int64_t v2; // 0x22bcfe
    int32_t v3 = v2; // 0x22bd0e
    int32_t * v4 = (int32_t *)(a3 + 72); // 0x22bd10
    int32_t v5 = a1; // 0x22bd10
    *v4 = *v4 + v5;
    __asm_in((int16_t)a3);
    if ((int32_t)v1 + v3 < -0x54f2b975) {
        function_22bca4();
    }
    // 0x22bd1b
    return function_ffffffff86b4bf19(2 * v5 + v3);
}

// Address range: 0x22bd4d - 0x22bd50
int64_t function_22bd4d(int64_t a1) {
    // 0x22bd4d
    int64_t result; // 0x22bd4d
    return result;
}

// Address range: 0x22bd51 - 0x22bd54
int64_t function_22bd51(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22bd51
    float80_t v1; // 0x22bd51
    *(int16_t *)a3 = (int16_t)v1;
    int64_t result; // 0x22bd51
    return result;
}

// Address range: 0x22bd62 - 0x22bd64
int64_t function_22bd62(void) {
    // 0x22bd62
    return function_22bce6();
}

// Address range: 0x22bd7a - 0x22bd7b
int64_t function_22bd7a(int64_t a1) {
    // 0x22bd7a
    int64_t result; // 0x22bd7a
    return result;
}

// Address range: 0x22bd80 - 0x22bd83
int64_t function_22bd80(void) {
    // 0x22bd80
    int64_t result; // 0x22bd80
    return result;
}

// Address range: 0x22bd88 - 0x22bdaa
int64_t function_22bd88(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22bd88
    *(int32_t *)-0x830b900 = *(int32_t *)-0x830b900 + (int32_t)a2;
    bool v1; // 0x22bd88
    int64_t v2 = v1 ? -4 : 4;
    int64_t v3 = a1; // 0x22bd88
    int32_t * v4 = (int32_t *)v3; // 0x22bd8e
    int32_t v5 = *v4; // 0x22bd8e
    *v4 = 2 * v5 | (int32_t)(v5 < 0);
    int32_t * v6 = (int32_t *)(v3 - 0x64ca4eb3); // 0x22bd90
    *v6 = *v6 + (int32_t)v3;
    int64_t v7 = unknown_ffffffffe484b09c(); // 0x22bd96
    uint32_t v8 = *(int32_t *)a2; // 0x22bd9b
    int64_t v9 = a2 + v2; // 0x22bd9b
    int32_t * v10 = (int32_t *)v7; // 0x22bd9c
    int64_t v11; // 0x22bd88
    *v10 = *v10 + (int32_t)v11 + (int32_t)(v8 < *v4);
    int64_t result = (int64_t)*(int32_t *)v9; // 0x22bd9e
    int64_t v12 = v11 - 8; // 0x22bd9f
    *(int64_t *)v12 = v11;
    char * v13 = (char *)result; // 0x22bda0
    unsigned char v14 = *v13; // 0x22bda0
    char v15 = v14 / 128; // 0x22bda0
    *v13 = v15 | 2 * v14;
    v11 = v12;
    int64_t v16 = v9 + v2; // 0x22bda4
    v3 += v2;
    while (v14 / 64 % 2 == v15) {
        // 0x22bd8e
        v4 = (int32_t *)v3;
        v5 = *v4;
        *v4 = 2 * v5 | (int32_t)(v5 < 0);
        v6 = (int32_t *)(v3 - 0x64ca4eb3);
        *v6 = *v6 + (int32_t)v3;
        v7 = unknown_ffffffffe484b09c();
        v8 = *(int32_t *)v16;
        v9 = v16 + v2;
        v10 = (int32_t *)v7;
        *v10 = *v10 + (int32_t)v11 + (int32_t)(v8 < *v4);
        result = (int64_t)*(int32_t *)v9;
        v12 = v11 - 8;
        *(int64_t *)v12 = v11;
        v13 = (char *)result;
        v14 = *v13;
        v15 = v14 / 128;
        *v13 = v15 | 2 * v14;
        v11 = v12;
        v16 = v9 + v2;
        v3 += v2;
    }
    // 0x22bda6
    return result;
}

// Address range: 0x22bdb2 - 0x22bdb5
int64_t function_22bdb2(int64_t a1) {
    // 0x22bdb2
    int64_t result; // 0x22bdb2
    return result;
}

// Address range: 0x22bde9 - 0x22bdef
int64_t function_22bde9(int64_t a1) {
    // 0x22bde9
    return unknown_10f9bfef(a1);
}

// Address range: 0x22be0f - 0x22be10
int64_t function_22be0f(void) {
    // 0x22be0f
    int64_t result; // 0x22be0f
    return result;
}

// Address range: 0x22be28 - 0x22be3c
int64_t function_22be28(void) {
    // 0x22be28
    int64_t v1; // 0x22be28
    bool v2; // 0x22be28
    return v1 - (v2 ? 0x2068c989 : 0x2068c988) & 0xffffffff;
}

// Address range: 0x22be59 - 0x22be5e
int64_t function_22be59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22be59
    int64_t result; // 0x22be59
    bool v1; // 0x22be59
    if (a4 != 1 == v1) {
        result = function_22be0f();
    }
    // 0x22be5b
    return result;
}

// Address range: 0x22be66 - 0x22be67
int64_t function_22be66(void) {
    // 0x22be66
    int64_t result; // 0x22be66
    return result;
}

// Address range: 0x22be9a - 0x22beaa
int64_t function_22be9a(void) {
    uint32_t v1 = *(int32_t *)-0x68db5947 / 0x8000000; // 0x22be9c
    unsigned char v2 = llvm_ctpop_i8((char)v1); // 0x22be9c
    *(int32_t *)-0x68db5947 = v1;
    if (v2 % 2 == 0) {
        function_22be66();
    }
    // 0x22bea5
    return function_20b69ae();
}

// Address range: 0x22bf3f - 0x22bf46
int64_t function_22bf3f(void) {
    // 0x22bf3f
    return function_1a5a7152();
}

// Address range: 0x22bf4c - 0x22bf51
int64_t function_22bf4c(void) {
    // 0x22bf4c
    return function_ffffffffa049ba31();
}

// Address range: 0x22bf82 - 0x22bf83
int64_t function_22bf82(int64_t a1) {
    // 0x22bf82
    int64_t result; // 0x22bf82
    return result;
}

// Address range: 0x22bff4 - 0x22c01b
int64_t function_22bff4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22bff4
    __asm_in((int16_t)a3);
    float80_t v1; // 0x22bff4
    *(float32_t *)a3 = (float32_t)v1;
    unknown_ffffffffbe235304();
    char * v2 = (char *)(a3 - 0x15bbd5ad); // 0x22c003
    *v2 = 2 * *v2;
    int64_t v3; // 0x22bff4
    return unknown_3d610b13() + 2 * v3 & 0xffffffff;
}

// Address range: 0x22c036 - 0x22c03d
int64_t function_22c036(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22c036
    int64_t v1; // 0x22c036
    uint64_t v2 = v1;
    *(int32_t *)a3 = 2 * (int32_t)v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x22c051 - 0x22c068
int64_t function_22c051(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22c051
    int64_t v1; // 0x22c051
    int64_t v2 = v1;
    unsigned char v3 = *(char *)(char *)&g1; // 0x22c059
    *(char *)v2 = v3 / 128 | 2 * v3;
    int64_t v4 = 0x100000000 * a2 >> 32; // 0x22c05c
    __asm_out_133(69, (int32_t)v2);
    int64_t v5 = -0x5c52fec3 * v4 == -0x5c52fec300000000 * v4 >> 32 ? 249 : 250; // 0x22c064
    return (v2 - v5) % 256 | v2 & -256;
}

// Address range: 0x22c088 - 0x22c089
int64_t function_22c088(void) {
    // 0x22c088
    int64_t result; // 0x22c088
    return result;
}

// Address range: 0x22c0af - 0x22c0b0
int64_t function_22c0af(void) {
    // 0x22c0af
    int64_t result; // 0x22c0af
    return result;
}

// Address range: 0x22c0fe - 0x22c107
int64_t function_22c0fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22c0fe
    int64_t v1; // 0x22c0fe
    int32_t v2 = v1;
    int32_t v3 = 2 * v2; // 0x22c101
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x22c101
    *(int32_t *)v1 = v3;
    __asm_out_134((int16_t)(v2 >> 31), (int32_t)(256 * (64 * (int64_t)(v3 == 0) | (int64_t)(v3 < v2) | 128 * (int64_t)(v3 < 0) | 16 * (int64_t)((v2 & 8) != 0) | 4 * (int64_t)(v4 % 2 == 0)) | v1 & 0xffff00ff) | 512);
    return function_22c0af();
}

// Address range: 0x22c1ca - 0x22c1cb
int64_t function_22c1ca(int64_t a1) {
    // 0x22c1ca
    int64_t result; // 0x22c1ca
    return result;
}

// Address range: 0x22c1e7 - 0x22c1ec
int64_t function_22c1e7(void) {
    // 0x22c1e7
    return function_ffffffff9d9cfce3();
}

// Address range: 0x22c21e - 0x22c22c
int64_t function_22c21e(void) {
    uint64_t v1 = (int64_t)__asm_in_135(-66); // 0x22c21e
    char * v2 = (char *)(v1 + 0x10ba3488); // 0x22c221
    bool v3; // 0x22c21e
    *v2 = *v2 + (char)(bool)v3 + (char)(v1 / 256);
    return function_ffffffff97c6c414();
}

// Address range: 0x22c27b - 0x22c2a8
int64_t function_22c27b(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x22c27b
    int64_t v1; // 0x22c27b
    int32_t * v2 = (int32_t *)(((unknown_1d204a83() | v1) & 0xffffffff) + 38); // 0x22c284
    *v2 = *v2 + (int32_t)a1;
    bool v3; // 0x22c27b
    int64_t v4 = v3 ? -1 : 1; // 0x22c288
    int64_t v5 = v4 + a2; // 0x22c288
    unknown_ffffffffebe44990(v4 + a1, v5);
    int32_t * v6 = (int32_t *)v5; // 0x22c291
    *v6 = *v6 + (int32_t)v1;
    uint64_t v7 = unknown_ffffffffa0a29799(); // 0x22c293
    char * v8 = (char *)(a3 + 19); // 0x22c29a
    *v8 = *v8 - (char)(a3 / 256);
    char * v9 = (char *)(v1 | a4 & 0xff00); // 0x22c29d
    unsigned char v10 = *v9; // 0x22c29d
    unsigned char v11 = v10 + (char)(v7 / 256); // 0x22c29d
    *v9 = v11;
    int64_t result = (v7 + a4 / 256 + (int64_t)(v11 < v10)) % 256 | v7 & -256; // 0x22c29f
    int32_t * v12 = (int32_t *)result; // 0x22c2a1
    *v12 = *v12 + (int32_t)a4;
    return result;
}

// Address range: 0x22c2a9 - 0x22c2b0
int64_t function_22c2a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_wait(a1, a2, a3, a4, a5); // 0x22c2a9
    int32_t * v1 = (int32_t *)(result + 7); // 0x22c2ac
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x22c2e3 - 0x22c2e8
int64_t function_22c2e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22c2e3
    int64_t v1; // 0x22c2e3
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a1;
    return function_22c31a(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x22c2ed - 0x22c31a
int64_t function_22c2ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff8c33b9f3(); // 0x22c2ed
    char v2 = __asm_in_136(-11); // 0x22c2f2
    int64_t v3; // 0x22c2ed
    int32_t * v4 = (int32_t *)(a1 - 0x56fe1716 + 4 * v3); // 0x22c2f4
    *v4 = *v4 - (int32_t)a4;
    int64_t v5; // 0x22c2ed
    int64_t v6 = (v1 | (int64_t)v2) & -256 | (int64_t)*(char *)&v5; // 0x22c2fb
    int64_t result = (int64_t)(*(int32_t *)v6 + (int32_t)v6); // 0x22c2fc
    char * v7 = (char *)result; // 0x22c2fe
    *v7 = *v7 + 105;
    return result;
}

// Address range: 0x22c31a - 0x22c450
int64_t function_22c31a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 310; // bp-16, 0x22c3e7
    int64_t v2 = (int64_t)&v1; // 0x22c426
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x22c435
    v1 = v3;
    *(int64_t *)(v2 - 8) = v3;
    return function_cdc60();
}

// Address range: 0x22c450 - 0x22c554
int64_t function_22c450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22c450
    return function_cdc60();
}

// Address range: 0x22c58e - 0x22c664
int64_t function_22c58e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 127); // 0x22c58e
    *v1 = *v1 | (char)a4;
    int64_t v2; // bp-16, 0x22c58e
    int64_t v3 = (int64_t)&v2; // 0x22c5d2
    int64_t v4 = v3 + 8; // 0x22c5d6
    v2 = v4;
    int64_t result = *(int64_t *)(v3 + 40); // 0x22c5f3
    v2 = result;
    int64_t * v5 = (int64_t *)(v3 - 8); // 0x22c5f7
    *v5 = result;
    int64_t v6 = *(int64_t *)(v3 + 24); // 0x22c5ff
    v2 = v6;
    int64_t v7 = v3 - 16; // 0x22c629
    int64_t * v8 = (int64_t *)v7; // 0x22c639
    *v8 = v7;
    *v5 = result;
    *(int64_t *)(v3 + 16) = v2;
    v2 = 0x4c1927b9;
    *v5 = 0x1b5aa0a4;
    *v8 = v6;
    *(int64_t *)(v3 + 32) = v2;
    *v5 = *(int64_t *)v4;
    return result;
}

// Address range: 0x3f6d9e - 0x3f6e3d
int64_t function_3f6d9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3f6d9e
    int64_t v1; // 0x3f6d9e
    __asm_out((int16_t)a3, (char)v1);
    int32_t v2 = v1; // 0x3f6da1
    uint32_t v3 = v2 - 0x160109ab; // 0x3f6da1
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x3f6da1
    int64_t v5 = v3; // 0x3f6da6
    if (v4 % 2 != 0) {
        v5 = function_3f6d97();
    }
    int64_t result = v5;
    if (v2 < 0x160109ab) {
        int32_t * v6 = (int32_t *)(a4 - 32); // 0x3f6db6
        *v6 = *v6 ^ (int32_t)v1;
        if (a4 == 1) {
            // 0x3f6dc3
            return result;
        }
        // 0x3f6dd7
        return a1 & 0xffffffff;
    }
    if (v2 == 0x160109ab) {
        int32_t * v7 = (int32_t *)(a1 - 79); // 0x3f6dcc
        uint32_t v8 = *v7; // 0x3f6dcc
        uint32_t v9 = v8 + ((int32_t)result & -256 | 97); // 0x3f6dcc
        *v7 = v9;
        int32_t * v10 = (int32_t *)(v1 - 0x7d6e76d); // 0x3f6dcf
        *v10 = *v10 + (int32_t)a1 + (int32_t)(v9 < v8);
        // 0x3f6dd7
        return a1 & 0xffffffff;
    }
    unsigned char v11 = (char)a4 % 32; // 0x3f6e2d
    int64_t v12 = 0; // 0x3f6e2d
    if (v11 != 0) {
        unsigned char v13 = *(char *)0x8b9e8ce7; // 0x3f6e2d
        *(char *)0x8b9e8ce7 = v13 >> v11 | (char)((int16_t)v13 << (int16_t)(9 - v11));
        v12 = (v13 & 1 << v11 - 1) != 0;
    }
    int32_t v14 = *(int32_t *)0x1173d193b; // 0x3f6e33
    int64_t v15; // 0x3f6d9e
    *(int32_t *)0x1173d193b = v14 ^ (int32_t)((int64_t)&v15 | a1);
    int32_t v16 = *(int32_t *)(a4 - 0x64bff9a6); // 0x3f6e37
    return v16 ^ (int32_t)((result - a4 / 256 + v12) % 256 | result & 0xffffff00);
}

// Address range: 0x3f6e49 - 0x3f6e4b
int64_t function_3f6e49(void) {
    // 0x3f6e49
    int64_t result; // 0x3f6e49
    return result;
}

// Address range: 0x3f6e8e - 0x3f6e91
int64_t function_3f6e8e(void) {
    // 0x3f6e8e
    int64_t result; // 0x3f6e8e
    return result;
}

// Address range: 0x3f6eb6 - 0x3f6eb8
int64_t function_3f6eb6(void) {
    // 0x3f6eb6
    int64_t v1; // 0x3f6eb6
    return function_3f6ed3(v1, v1, v1, v1, (int64_t)&g2, (int64_t)&g2);
}

// Address range: 0x3f6eb8 - 0x3f6ebb
int64_t function_3f6eb8(int64_t a1) {
    // 0x3f6eb8
    int64_t result; // 0x3f6eb8
    return result;
}

// Address range: 0x3f6ed3 - 0x3f6f97
int64_t function_3f6ed3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x3f6ed3
    unsigned char v3 = *(char *)(v2 + a3 % 256); // 0x3f6ed9
    if (a4 == 1) {
        char v4 = *(char *)0x5c63d53e; // 0x3f6edc
        return (int64_t)v4 * (int64_t)v3 % 0x10000 | a3 & 0xffff0000;
    }
    int64_t v5 = v2 + 0x83c2e029; // 0x3f6ed3
    int64_t v6 = a3 & 0xffffff00 | (int64_t)v3; // 0x3f6ed9
    int32_t * v7 = (int32_t *)(v6 + 113); // 0x3f6f5c
    *v7 = 0x20000000 * *v7;
    int64_t v8 = v1 & 0xffffffff; // 0x3f6f60
    bool v9; // 0x3f6ed3
    int64_t v10 = v9 ? -4 : 4; // 0x3f6f61
    int64_t v11 = v10 + a2; // 0x3f6f61
    int32_t * v12 = (int32_t *)(v8 - 86); // 0x3f6f62
    *v12 = *v12 ^ (int32_t)(v6 + v10);
    unsigned char v13 = (char)v5; // 0x3f6f69
    int64_t v14; // 0x3f6ed3
    unsigned char v15 = *(char *)(v14 + v2) + v13; // 0x3f6f69
    int64_t v16 = v5 & 0xffffff00 | (int64_t)v15; // 0x3f6f69
    uint32_t v17 = *(int32_t *)&v1; // 0x3f6f6c
    *(int32_t *)v8 = 0x4000000 * v17 | v17 / 128 | 0x2000000 * (int32_t)(v15 < v13);
    char v18 = a5; // 0x3f6f70
    *(char *)v8 = *(char *)&v1 + v18;
    int32_t * v19 = (int32_t *)a5; // 0x3f6f72
    *v19 = *v19 + (int32_t)v11;
    char * v20 = (char *)v11; // 0x3f6f74
    unsigned char v21 = *v20; // 0x3f6f74
    unsigned char v22 = v21 + v18; // 0x3f6f74
    *v20 = v22;
    char v23 = *(char *)&v14; // 0x3f6f76
    *(char *)v14 = v23 + (char)v2 + (char)(v22 < v21);
    int32_t * v24 = (int32_t *)((a5 & -256 | 72) + 0x3923bd63); // 0x3f6f7d
    *v24 = *v24 & (int32_t)v2;
    *(char *)v14 = *(char *)&v14 | (char)v1;
    return (0x100000000 * v16 | (int64_t)(0x10000 * (int32_t)v1 >> 16)) / v16 & 0xffffffff;
}

// Address range: 0x3f6f9d - 0x3f6fa0
int64_t function_3f6f9d(int64_t a1) {
    // 0x3f6f9d
    int64_t result; // 0x3f6f9d
    return result;
}

// Address range: 0x3f6fbd - 0x3f6fbe
int64_t function_3f6fbd(void) {
    // 0x3f6fbd
    int64_t result; // 0x3f6fbd
    return result;
}

// Address range: 0x3f7046 - 0x3f7047
int64_t function_3f7046(void) {
    // 0x3f7046
    int64_t result; // 0x3f7046
    return result;
}

// Address range: 0x3f7059 - 0x3f705c
int64_t function_3f7059(int64_t a1) {
    // 0x3f7059
    int64_t result; // 0x3f7059
    return result;
}

// Address range: 0x3f7081 - 0x3f7085
int64_t function_3f7081(int64_t a1) {
    // 0x3f7081
    int64_t result; // 0x3f7081
    return result;
}

// Address range: 0x3f708d - 0x3f708e
int64_t function_3f708d(void) {
    // 0x3f708d
    int64_t result; // 0x3f708d
    return result;
}

// Address range: 0x3f70c0 - 0x3f70c2
int64_t function_3f70c0(int64_t a1, int64_t a2) {
    // 0x3f70c0
    int64_t result; // 0x3f70c0
    return result;
}

// Address range: 0x3f70f5 - 0x3f70fa
int64_t function_3f70f5(void) {
    // 0x3f70f5
    return function_ffffffffeab5bbc3();
}

// Address range: 0x3f712a - 0x3f712f
int64_t function_3f712a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f712a
    int64_t result; // 0x3f712a
    return result;
}

// Address range: 0x3f7142 - 0x3f7147
int64_t function_3f7142(void) {
    // 0x3f7142
    return function_30ef186d();
}

// Address range: 0x3f716e - 0x3f7170
int64_t function_3f716e(void) {
    // 0x3f716e
    int64_t v1; // 0x3f716e
    return function_3f71d8(v1, v1, v1);
}

// Address range: 0x3f71ac - 0x3f71ba
int64_t function_3f71ac(int64_t a1) {
    // 0x3f71ac
    return function_ffffffffa83fc240();
}

// Address range: 0x3f71c1 - 0x3f71c4
int64_t function_3f71c1(int64_t a1) {
    // 0x3f71c1
    int64_t result; // 0x3f71c1
    return result;
}

// Address range: 0x3f71d8 - 0x3f71e4
int64_t function_3f71d8(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a1 + 86); // 0x3f71d8
    *v1 = *v1 & (char)(a3 / 256);
    int64_t result; // 0x3f71d8
    int32_t * v2 = (int32_t *)(result - 0x489ac111); // 0x3f71db
    *v2 = *v2 | (int32_t)a2;
    __asm_out_133(30, (int32_t)result);
    return result;
}

// Address range: 0x3f71fd - 0x3f71fe
int64_t function_3f71fd(void) {
    // 0x3f71fd
    int64_t result; // 0x3f71fd
    return result;
}

// Address range: 0x3f7220 - 0x3f72da
int64_t function_3f7220(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x3f7220
    int64_t result; // 0x3f7220
    bool v1; // 0x3f7220
    if (v1) {
        // 0x3f7288
        return result;
    }
    uint32_t v2 = *(int32_t *)-0xabd8c35; // 0x3f7249
    unsigned char v3 = (char)(result / 256); // 0x3f724f
    char v4 = v2 < (int32_t)result; // 0x3f724f
    unsigned char v5 = v4 + (char)(a3 / 256); // 0x3f724f
    char v6 = v3 - v5; // 0x3f724f
    bool v7 = v2 < (int32_t)result ? v5 != -1 | v6 - v4 > v3 : v5 > v3; // 0x3f724f
    if (v6 == 0 || v7) {
        function_3f71fd();
    }
    // 0x3f7253
    __asm_outsb((int16_t)a3 & -256 | 181, (char)a2);
    *(char *)a1 = (char)(a4 / 256) + (char)a1;
    return (int64_t)*(int32_t *)0x6976255b581b2173;
}

// Address range: 0x3f72db - 0x3f72dd
int64_t function_3f72db(int64_t a1) {
    // 0x3f72db
    int64_t v1; // 0x3f72db
    return v1 & 0xffffffff;
}

// Address range: 0x3f72e1 - 0x3f72f6
int64_t function_3f72e1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f72e1
    if (*(char *)(a1 + 6) < (char)a3) {
        // 0x3f7362
        int64_t result; // 0x3f72e1
        return result;
    }
    // 0x3f72e6
    return function_ffffffffa83feec3();
}

// Address range: 0x3f7302 - 0x3f7307
int64_t function_3f7302(int64_t a1) {
    // 0x3f7302
    int64_t result; // 0x3f7302
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)(result ^ v1);
    return result;
}
