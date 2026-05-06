/*
 * Targeted RetDec C for native executable gap queue batch 735.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xdb1c7-0xdb3c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdb3c7-0xdb5c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdb5c7-0xdb7c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdb7c7-0xdb9c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdb9c7-0xdbbc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c7155-0x1c7355 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c7355-0x1c7555 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c7755-0x1c7955 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1c7142();
int64_t function_1c7155(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1c7184(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1c71a2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1c71f7(int64_t a1);
int64_t function_1c7234(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c7257(void);
int64_t function_1c7269(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c7285(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c72d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c7325(void);
int64_t function_1c7346(void);
int64_t function_1c737f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c73d6(int64_t a1);
int64_t function_1c73e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c73f7(int64_t a1);
int64_t function_1c7414(void);
int64_t function_1c7422(int64_t a1);
int64_t function_1c7455(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c7465(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c74c6(int64_t a1);
int64_t function_1c7748();
int64_t function_1c7755(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1c77c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c78b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c78fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_cf3c7();
int64_t function_db1c7(int64_t a1);
int64_t function_db1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_db344(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_db48c(int64_t a1, int64_t a2);
int64_t function_db5c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_db73a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_db882(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_db9ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dbbb8(void);
int64_t function_ffffffff8d7a735e();
int64_t function_ffffffffe7b67601();
int64_t unknown_10780c05();
int64_t unknown_1a425c28();
int64_t unknown_22601ced();
int64_t unknown_2a7e788a();
int64_t unknown_2e433275();
int64_t unknown_3d1e5aed();
int64_t unknown_4c06584();
int64_t unknown_5a41e77d();
int64_t unknown_64e967fa();
int64_t unknown_64ea3bdc();
int64_t unknown_7825395e();
int64_t unknown_ffffffff91ec01b1();
int64_t unknown_ffffffff92182b69();
int64_t unknown_ffffffffa0ba0b0e();
int64_t unknown_ffffffffb1e18bab();

// Address range: 0xdb1c7 - 0xdb1f1
int64_t function_db1c7(int64_t a1) {
    // 0xdb1c7
    int64_t v1; // 0xdb1c7
    return function_cf3c7(a1, v1, v1, v1, v1, v1);
}

// Address range: 0xdb1f1 - 0xdb344
int64_t function_db1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xdb1f1
    int64_t v1; // bp-24, 0xdb1f1
    int64_t v2 = (int64_t)&v1; // 0xdb242
    int64_t v3 = v2 - 8; // 0xdb24e
    v1 = 0xd9890;
    int64_t v4 = v2 - 16; // 0xdb268
    int64_t * v5 = (int64_t *)v4; // 0xdb268
    *v5 = v3;
    int64_t v6; // 0xdb1f1
    bool v7; // 0xdb1f1
    *(int64_t *)v3 = v6 & -256 | (int64_t)v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0xdb286
    int64_t v9 = *(int64_t *)(v2 + 24); // 0xdb295
    *v5 = v9;
    *v8 = v9;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0xdb29c
    *v10 = v9;
    *v8 = v3;
    *v5 = 0x7248ed2a;
    *v10 = v9;
    v1 = *v5;
    *v8 = 0x2c0a0c02;
    *v10 = *(int64_t *)(v2 + 8);
    *(int64_t *)(v2 + 16) = *v5;
    *v5 = a4;
    *v8 = v4;
    *v8 = v2;
    *v10 = *v5;
    return function_cf3c7(a1, a2, a3, *v5, a5, v6);
}

// Address range: 0xdb344 - 0xdb48c
int64_t function_db344(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdb344
    int64_t v1; // bp-32, 0xdb344
    int64_t v2 = (int64_t)&v1; // 0xdb3b1
    v1 = v2;
    int64_t v3 = v2 - 8; // 0xdb3b9
    int64_t * v4 = (int64_t *)v3; // 0xdb3c2
    *v4 = 0x3b3a3a86;
    int64_t v5 = v2 - 16; // 0xdb3ca
    int64_t * v6 = (int64_t *)v5; // 0xdb3ca
    *v6 = 0x3fbd3564;
    int64_t v7 = v2 - 24; // 0xdb3cf
    int64_t * v8 = (int64_t *)v7; // 0xdb3cf
    int64_t v9 = *(int64_t *)(v2 + 24); // 0xdb3de
    *v6 = v9;
    *v8 = v9;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0xdb3e7
    *v10 = v7;
    int64_t v11 = *v8; // 0xdb3f3
    *v8 = v3;
    bool v12; // 0xdb344
    *v10 = a3 & -256 | (int64_t)v12;
    *(int64_t *)(v2 - 40) = a4;
    *v8 = v11;
    *v4 = v11;
    *v10 = v1;
    *(int64_t *)(v2 + 8) = *v8;
    *v10 = *v6;
    *v8 = a2;
    *v6 = a4;
    *v8 = v5;
    *v6 = v2;
    int64_t v13; // 0xdb344
    return function_cf3c7(a1, *v8, *v10, *v6, v13, v13);
}

// Address range: 0xdb48c - 0xdb5c3
int64_t function_db48c(int64_t a1, int64_t a2) {
    int64_t v1 = 0x3eb01020; // bp-40, 0xdb4f5
    int64_t v2 = (int64_t)&v1; // 0xdb531
    int64_t v3 = *(int64_t *)(v2 + 16); // 0xdb539
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xdb539
    int64_t * v5 = (int64_t *)(v2 - 16); // 0xdb53d
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0xdb540
    *v4 = 0x29e8487e;
    bool v7; // 0xdb48c
    *v6 = 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = 0x1ac2b634;
    *v5 = v3;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v2;
    int64_t v8 = *v4; // 0xdb5a8
    *v5 = v8;
    *v6 = v8;
    int64_t v9; // 0xdb48c
    return function_cf3c7(a1, a2, v9, v9, v9, v9);
}

// Address range: 0xdb5c3 - 0xdb73a
int64_t function_db5c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xdb5c3
    bool v1; // 0xdb5c3
    return function_cf3c7(a1, a2, a3 & -256 | (int64_t)(bool)v1, a4, a5, a6);
}

// Address range: 0xdb73a - 0xdb882
int64_t function_db73a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdb73a
    int64_t v1; // bp-40, 0xdb73a
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0xdb73a
    return function_cf3c7(a1, a2, a3, a4, v2, v2);
}

// Address range: 0xdb882 - 0xdb9ef
int64_t function_db882(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xdb882
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0xdb9ef - 0xdbb38
int64_t function_db9ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdb9ef
    int64_t v1; // bp-64, 0xdb9ef
    v1 = (int64_t)&v1;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0xdbbb8 - 0xdbbbb
int64_t function_dbbb8(void) {
    // 0xdbbb8
    int64_t result; // 0xdbbb8
    return result;
}

// Address range: 0x1c7155 - 0x1c717d
int64_t function_1c7155(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1c7155
    unknown_7825395e();
    int64_t v1; // 0x1c7155
    *(int32_t *)a1 = (int32_t)(v1 & v1);
    uint64_t v2 = unknown_ffffffff92182b69(); // 0x1c7163
    char * v3 = (char *)(v2 + 5); // 0x1c7168
    *v3 = *v3 + (char)(a3 / 256);
    int32_t * v4 = (int32_t *)(((v2 / 256 + v2) % 256 | v2 & -256) + 0x655c6d0a); // 0x1c716f
    *v4 = *v4 + (int32_t)a4;
    unknown_5a41e77d();
    return v1 & 0xffffffff;
}

// Address range: 0x1c7184 - 0x1c71a2
int64_t function_1c7184(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = unknown_2a7e788a(); // 0x1c7184
    bool v1; // 0x1c7184
    if (!v1) {
        // 0x1c719f
        return result & -256 | (int64_t)__asm_in((int16_t)a3);
    }
    // 0x1c718c
    *(char *)a1 = (char)(a4 / 256) + (char)a1;
    return result;
}

// Address range: 0x1c71a2 - 0x1c71be
int64_t function_1c71a2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1c71a2
    int64_t v1; // 0x1c71a2
    char * v2 = (char *)(v1 + 72); // 0x1c71a2
    *v2 = *v2 + (char)a3;
    uint64_t v3 = (unknown_ffffffffb1e18bab() & 0xffffffe8) + v1; // 0x1c71b1
    uint64_t v4 = v3 / 256 | v3;
    char v5 = v4; // 0x1c71b3
    int64_t v6 = v4 % 256 | v3 & 0xffffff00; // 0x1c71b5
    if (v5 >= 0 == (v5 != 0)) {
        v6 = function_1c7142();
    }
    // 0x1c71ba
    return v6 ^ a4 / 256 % 256;
}

// Address range: 0x1c71f7 - 0x1c71f8
int64_t function_1c71f7(int64_t a1) {
    // 0x1c71f7
    int64_t result; // 0x1c71f7
    return result;
}

// Address range: 0x1c7234 - 0x1c723b
int64_t function_1c7234(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c7234
    return function_ffffffff8d7a735e((int32_t)a3 + (int32_t)a1);
}

// Address range: 0x1c7257 - 0x1c7258
int64_t function_1c7257(void) {
    // 0x1c7257
    int64_t result; // 0x1c7257
    return result;
}

// Address range: 0x1c7269 - 0x1c7285
int64_t function_1c7269(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 84); // 0x1c7269
    int32_t v2 = *v1; // 0x1c7269
    *v1 = 2 * v2 | (int32_t)(v2 < 0);
    int64_t v3; // 0x1c7269
    uint32_t v4 = *(int32_t *)&v3; // 0x1c726c
    int64_t v5; // 0x1c7269
    uint32_t v6 = *(int32_t *)&v5; // 0x1c726c
    bool v7; // 0x1c7269
    int64_t v8 = v7 ? -4 : 4; // 0x1c726c
    int64_t v9 = v8 + a2;
    v3 = v9;
    __asm_outsb((int16_t)a3, *(char *)v9);
    int64_t v10; // 0x1c7269
    int64_t v11 = v10 & 0xffffffff; // 0x1c726e
    v5 = v11;
    int64_t v12 = unknown_2e433275(v11); // 0x1c726f
    int64_t v13 = v4 > v6 ? v12 & 0xffff00ff | (int64_t)&g2 : v12;
    int32_t * v14 = (int32_t *)(v9 + 126); // 0x1c7278
    *v14 = *v14 + (int32_t)(v4 < v6) - (int32_t)v13;
    unknown_4c06584(v5 + v8);
    return function_1c7257();
}

// Address range: 0x1c7285 - 0x1c72bc
int64_t function_1c7285(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c7285
    int64_t v1; // 0x1c7285
    int64_t v2 = v1;
    uint64_t v3 = v1;
    *(int32_t *)v3 = (int32_t)v3 + (int32_t)a1;
    *(int64_t *)v2 = v2 & v1;
    unsigned char v4 = *(char *)-0x17a6024eb201fc55 / 2; // 0x1c729a
    int64_t v5 = v1 & -256 | (int64_t)v4; // 0x1c729a
    int32_t * v6 = (int32_t *)v5; // 0x1c729d
    *v6 = *v6 + (int32_t)v5;
    bool v7; // 0x1c7285
    int64_t v8 = v7 ? -1 : 1; // 0x1c72a1
    __asm_sti(v8 + a1, v8 + 0x9837c05f);
    unknown_ffffffff91ec01b1();
    char * v9 = (char *)(a3 - 86); // 0x1c72b0
    *v9 = v4 + (char)(v3 / 256) + *v9;
    int16_t v10; // 0x1c7285
    int64_t result = v10; // 0x1c72b3
    *(int32_t *)result = *(int32_t *)&v10 + ((int32_t)a4 & -256 | 153);
    return result;
}

// Address range: 0x1c72d7 - 0x1c7305
int64_t function_1c72d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c72d7
    int64_t v1; // 0x1c72d7
    int32_t v2 = v1; // 0x1c72d7
    *(int32_t *)a4 = (int32_t)v1 + v2;
    __asm_int1();
    int64_t v3 = unknown_3d1e5aed(); // 0x1c72e7
    int32_t * v4 = (int32_t *)(a1 - 0x41fe1731); // 0x1c72ec
    uint32_t v5 = *v4; // 0x1c72ec
    uint32_t v6 = v5 + v2; // 0x1c72ec
    *v4 = v6;
    char * v7 = (char *)(a4 & -0xff01 | (int64_t)&g1); // 0x1c72f3
    char v8 = *v7; // 0x1c72f3
    *v7 = v8 + (char)((int64_t)&g1 >> 8) + (char)(v6 < v5);
    float80_t v9; // 0x1c72d7
    *(int16_t *)(v1 - 77) = (int16_t)v9;
    *(char *)0xf0a36fc = *(char *)0xf0a36fc + (char)v1;
    return v3 ^ 163;
}

// Address range: 0x1c7325 - 0x1c7328
int64_t function_1c7325(void) {
    // 0x1c7325
    int64_t result; // 0x1c7325
    return result;
}

// Address range: 0x1c7346 - 0x1c7347
int64_t function_1c7346(void) {
    // 0x1c7346
    int64_t result; // 0x1c7346
    return result;
}

// Address range: 0x1c737f - 0x1c73a8
int64_t function_1c737f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x7d00f16a5f0e7307; // 0x1c737f
    int64_t v2; // 0x1c737f
    int64_t v3 = v2 & -256 | (int64_t)v1; // 0x1c737f
    __asm_out(84, v1);
    int32_t v4 = v3; // 0x1c738a
    uint32_t v5 = (int32_t)a4 % 32; // 0x1c738f
    int64_t v6; // 0x1c737f
    if (v5 == 0) {
        v6 = v3;
        if (((v4 + 0x6108ffff ^ v4) & (v4 ^ -0x80000000)) < 0) {
            v6 = function_1c7346();
            goto lab_0x1c7395;
        } else {
            goto lab_0x1c7395;
        }
    } else {
        v6 = v3;
        if (v5 != 1 == ((v4 + 0x6108ffff ^ v4) & (v4 ^ -0x80000000)) < 0) {
            v6 = function_1c7346();
            goto lab_0x1c7395;
        } else {
            goto lab_0x1c7395;
        }
    }
  lab_0x1c7395:;
    int64_t v7 = v6 + 0x2e22a8ec; // 0x1c7399
    char * v8 = (char *)(v2 - 55); // 0x1c739e
    *v8 = *v8 + (char)v7;
    return v7 & 0xffffffff;
}

// Address range: 0x1c73d6 - 0x1c73d9
int64_t function_1c73d6(int64_t a1) {
    // 0x1c73d6
    int64_t result; // 0x1c73d6
    return result;
}

// Address range: 0x1c73e7 - 0x1c73f6
int64_t function_1c73e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c73e7
    int64_t v1; // 0x1c73e7
    uint32_t v2 = (int32_t)v1; // 0x1c73e7
    *(char *)a4 = (char)(v2 == -0x57fe17ff);
    int64_t v3; // 0x1c73e7
    return (int64_t)((int32_t)(v2 < 0xa801e801) + v2 - *(int32_t *)&v3);
}

// Address range: 0x1c73f7 - 0x1c73fa
int64_t function_1c73f7(int64_t a1) {
    // 0x1c73f7
    int64_t result; // 0x1c73f7
    return result;
}

// Address range: 0x1c7414 - 0x1c7419
int64_t function_1c7414(void) {
    // 0x1c7414
    return function_ffffffffe7b67601();
}

// Address range: 0x1c7422 - 0x1c742a
int64_t function_1c7422(int64_t a1) {
    // 0x1c7422
    return unknown_1a425c28(a1);
}

// Address range: 0x1c7455 - 0x1c7465
int64_t function_1c7455(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c7455
    int64_t v1; // 0x1c7455
    int64_t result = v1 + 0xe8cb8b0e & 0xffffffff; // 0x1c7455
    int32_t * v2 = (int32_t *)(result + 8); // 0x1c745a
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x1c7465 - 0x1c746c
int64_t function_1c7465(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c7465
    *(int32_t *)-0x7a6b02d8 = *(int32_t *)-0x7a6b02d8 + (int32_t)a4;
    int64_t result; // 0x1c7465
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x1c74c6 - 0x1c74c9
int64_t function_1c74c6(int64_t a1) {
    // 0x1c74c6
    int64_t result; // 0x1c74c6
    return result;
}

// Address range: 0x1c7755 - 0x1c77bf
int64_t function_1c7755(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1c7755
    int64_t v1; // 0x1c7755
    char * v2 = (char *)(v1 - 0x1749bffd); // 0x1c775b
    *v2 = *v2 | 1;
    int64_t result = (int64_t)*(int32_t *)a5; // 0x1c7766
    if (a4 == 0) {
        result = function_1c7748();
    }
    // 0x1c7768
    return result;
}

// Address range: 0x1c77c1 - 0x1c789f
int64_t function_1c77c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    unsigned char v2 = *(char *)(9 * a3) | (char)a3; // 0x1c77c1
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x1c77c1
    int64_t v4 = a3 & -256 | (int64_t)v2; // 0x1c77c1
    if (v3 % 2 != 0) {
        // 0x1c77c6
        __asm_iretd(a1, a5, v4);
        unknown_64ea3bdc();
        unknown_22601ced();
        bool v5; // 0x1c77c1
        int64_t result = __asm_iretd(a1, (v5 ? -1 : 1) + a5, v4); // 0x1c77f0
        *(char *)v1 = *(char *)&v1 | (char)result;
        return result;
    }
    // 0x1c77f4
    unknown_64e967fa();
    __asm_iretd(a1, a2, v4);
    int64_t v6 = unknown_10780c05(); // 0x1c77ff
    char * v7 = (char *)(a2 - 0x2507a303); // 0x1c7804
    int64_t v8; // 0x1c77c1
    *v7 = *v7 | (char)((uint64_t)v8 / 256);
    uint64_t v9 = v6 + 31; // 0x1c780a
    int64_t result2 = v9 % 256 | v6 & -256; // 0x1c780a
    char * v10 = (char *)(result2 - 0x10fe1707); // 0x1c780c
    *v10 = *v10 + (char)v9;
    char v11 = *(char *)-0x31ed0e3; // 0x1c7816
    char v12 = v11 + v2; // 0x1c7816
    *(char *)-0x31ed0e3 = v12;
    if (v12 < 0 == ((v12 ^ v11) & (v12 ^ v2)) < 0 != v12 != 0) {
        // 0x1c789f
        return result2;
    }
    // 0x1c7837
    __asm_fldenv(*(int224_t *)(a5 - 50));
    return result2;
}

// Address range: 0x1c78b3 - 0x1c78c1
int64_t function_1c78b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 13); // 0x1c78b3
    int64_t v2; // 0x1c78b3
    *v1 = *v1 + (int32_t)v2;
    int32_t v3 = *(int32_t *)(a4 - 0x59fe17ca); // 0x1c78b8
    return __asm_iretd((int64_t)(v3 + (int32_t)a1), a2, a3);
}

// Address range: 0x1c78fb - 0x1c7915
int64_t function_1c78fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffa0ba0b0e(); // 0x1c7908
    int64_t v1; // 0x1c78fb
    *(char *)a2 = (char)(v1 ^ v1);
    *(int32_t *)a1 = (int32_t)result;
    int64_t v2; // 0x1c78fb
    *(char *)v2 = *(char *)&v2 + (char)(a3 / 256);
    return result;
}
