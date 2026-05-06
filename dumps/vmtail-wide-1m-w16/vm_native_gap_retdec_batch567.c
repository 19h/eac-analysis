/*
 * Targeted RetDec C for native executable gap queue batch 567.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd91c7-0xd93c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd93c7-0xd95c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd95c7-0xd97c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37f530-0x37f730 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37f730-0x37f930 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37fa30-0x37fb30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37fb30-0x37fd30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37fd30-0x37ff30 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_22076a8();
int64_t function_37f51e();
int64_t function_37f530(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37f5f2(int64_t a1);
int64_t function_37f5f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37f68f(void);
int64_t function_37f6ad(int64_t a1);
int64_t function_37f6ba(void);
int64_t function_37f6c2(void);
int64_t function_37f6ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_37f757(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37f7c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37f800(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_37f865(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37f8b6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_37fa30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37fa58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37faad(void);
int64_t function_37fad1(int64_t a1);
int64_t function_37fb11(void);
int64_t function_37fb2c(void);
int64_t function_37fb4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37fb80(void);
int64_t function_37fbbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37fc2d(void);
int64_t function_37fcc6(void);
int64_t function_37fcdb(void);
int64_t function_37fcdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37fcf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37fd1f(void);
int64_t function_37fd4a(int64_t a1, int64_t a2);
int64_t function_37fd5d(void);
int64_t function_37fd81(void);
int64_t function_37fd8f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37fe19(void);
int64_t function_37fe1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37fe93(void);
int64_t function_37fed7(int64_t a1);
int64_t function_37fef9(void);
int64_t function_37ff18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d9a8950();
int64_t function_5e8abcf();
int64_t function_d91c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d91ec(int64_t a1);
int64_t function_d9210(void);
int64_t function_d921e(void);
int64_t function_d924c(int64_t a1);
int64_t function_d937d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d93b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d93eb(void);
int64_t function_d9403(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d949c(void);
int64_t function_d94a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d94ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d9575(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d95b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d95bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d95c5(int64_t a1);
int64_t function_d95d9(void);
int64_t function_d95fe(void);
int64_t function_d9618(int64_t a1);
int64_t function_d963a(void);
int64_t function_d9645(void);
int64_t function_d964b(void);
int64_t function_d9675(void);
int64_t function_d9689(int64_t a1);
int64_t function_d9691(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d96b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffffa5f00565();
int64_t function_ffffffffab991055();
int64_t function_ffffffffeaa7eedf();
int64_t unknown_1385b6c3();
int64_t unknown_197c92ad();
int64_t unknown_2183cf9();
int64_t unknown_360b8816();
int64_t unknown_388aa116();
int64_t unknown_3941852c();
int64_t unknown_3a6cdb0f();
int64_t unknown_3a99eed9();
int64_t unknown_3c2d0709();
int64_t unknown_3ccc7280();
int64_t unknown_3d39e0b4();
int64_t unknown_3d39e5c4();
int64_t unknown_3dd67b06();
int64_t unknown_48181ef7();
int64_t unknown_62aea52();
int64_t unknown_64414fa3();
int64_t unknown_6d7820b();
int64_t unknown_7164b8ca();
int64_t unknown_7317e3f5();
int64_t unknown_778d2121();
int64_t unknown_ffffffff89034fe6();
int64_t unknown_ffffffff8e2d0930();
int64_t unknown_ffffffff9b00a29b();
int64_t unknown_ffffffffa2e7dcc9();
int64_t unknown_ffffffffaa1933cf();
int64_t unknown_ffffffffafd54241();
int64_t unknown_ffffffffb042d0db();
int64_t unknown_ffffffffb1b492e4();
int64_t unknown_ffffffffe69d866b();
int64_t unknown_ffffffffe6df0cef();
int64_t unknown_ffffffffe8b664c8();
int64_t unknown_ffffffffe8fe1260();
int64_t unknown_ffffffffe8ffd46c();
int64_t unknown_ffffffffe90fe926();
int64_t unknown_fffffffff4665723();

// Address range: 0xd91c7 - 0xd91ce
int64_t function_d91c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd91c7
    return __asm_sti(a1, a2, a3, a4);
}

// Address range: 0xd91ec - 0xd91ed
int64_t function_d91ec(int64_t a1) {
    // 0xd91ec
    int64_t result; // 0xd91ec
    return result;
}

// Address range: 0xd9210 - 0xd9211
int64_t function_d9210(void) {
    // 0xd9210
    int64_t result; // 0xd9210
    return result;
}

// Address range: 0xd921e - 0xd921f
int64_t function_d921e(void) {
    // 0xd921e
    int64_t result; // 0xd921e
    return result;
}

// Address range: 0xd924c - 0xd924f
int64_t function_d924c(int64_t a1) {
    // 0xd924c
    int64_t result; // 0xd924c
    bool v1; // 0xd924c
    if (!v1) {
        result = function_d921e();
    }
    // 0xd924e
    return result;
}

// Address range: 0xd937d - 0xd9384
int64_t function_d937d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd937d
    return function_3d9a8950();
}

// Address range: 0xd93b4 - 0xd93bf
int64_t function_d93b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd93b4
    int64_t result; // 0xd93b4
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0xd93eb - 0xd93f9
int64_t function_d93eb(void) {
    // 0xd93eb
    return unknown_2183cf9();
}

// Address range: 0xd9403 - 0xd9413
int64_t function_d9403(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 51); // 0xd9403
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0xd9403
    int64_t v3; // 0xd9403
    int64_t v4 = v3 - (*(char *)&v2 > (char)a3 ? 0x81fdf99 : 0x81fdf98); // 0xd9408
    int64_t result = v4 & 0xffffffff; // 0xd9408
    *(int32_t *)result = (int32_t)v4;
    return result;
}

// Address range: 0xd949c - 0xd949d
int64_t function_d949c(void) {
    // 0xd949c
    int64_t result; // 0xd949c
    return result;
}

// Address range: 0xd94a4 - 0xd94ad
int64_t function_d94a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd94a4
    return unknown_197c92ad(a1, a2, a3, a4);
}

// Address range: 0xd94ae - 0xd94c4
int64_t function_d94ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)-0x72f082ad & (int32_t)a1; // 0xd94b3
    *(int32_t *)-0x72f082ad = v1;
    int64_t result; // 0xd94ae
    if (v1 == 0) {
        result = function_d949c();
    }
    // 0xd94bb
    *(int32_t *)0xf4f70300 = *(int32_t *)0xf4f70300 - 0xb08fd00;
    return result;
}

// Address range: 0xd9575 - 0xd95a9
int64_t function_d9575(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd9575
    int128_t v1; // 0xd9575
    *(int32_t *)(a2 - 118) = (int32_t)__asm_movss(v1);
    char v2 = *(char *)(a3 - 0x1765a98b + unknown_3ccc7280()); // 0xd957f
    int32_t * v3 = (int32_t *)(8 * a1 + 0x133c0a88 + a4); // 0xd9586
    int32_t v4 = *v3; // 0xd9586
    *v3 = v4 + (int32_t)(a3 & 0xffffff00 | (int64_t)(v2 | (char)a3));
    int64_t v5 = __asm_sti((int64_t)&g4, (int64_t)&g4, (int64_t)&g4, (int64_t)&g4); // 0xd958d
    int64_t v6; // 0xd9575
    int64_t v7; // 0xd9575
    int32_t * v8 = (int32_t *)(8 * v7 + 0x566e6603 + (int64_t)&v6); // 0xd9596
    *v8 = *v8 & (int32_t)a2;
    int64_t result = unknown_64414fa3(); // 0xd959d
    *(int32_t *)(result + 0x1e8dc00) = (int32_t)v5;
    return result;
}

// Address range: 0xd95b4 - 0xd95bb
int64_t function_d95b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd95b4
    int64_t v1; // 0xd95b4
    int32_t * v2 = (int32_t *)(v1 - 108); // 0xd95b4
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0xd95b4
    *(int32_t *)a1 = *(int32_t *)&v3 + (int32_t)a4;
    return unknown_ffffffffaa1933cf((int64_t)&g4);
}

// Address range: 0xd95bb - 0xd95c5
int64_t function_d95bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd95bb
    return __asm_hlt(a1, a2, a3, a4);
}

// Address range: 0xd95c5 - 0xd95d6
int64_t function_d95c5(int64_t a1) {
    // 0xd95c5
    int64_t v1; // 0xd95c5
    int32_t * v2 = (int32_t *)(v1 - 82); // 0xd95c5
    *v2 = 0x10000 * *v2;
    int64_t result = unknown_ffffffffaa1933cf(a1); // 0xd95c9
    int32_t * v3 = (int32_t *)(result + 0x1e88c00); // 0xd95ce
    *v3 = *v3 & 91;
    return result;
}

// Address range: 0xd95d9 - 0xd95db
int64_t function_d95d9(void) {
    // 0xd95d9
    return unknown_62aea52();
}

// Address range: 0xd95fe - 0xd9601
int64_t function_d95fe(void) {
    // 0xd95fe
    int64_t result; // 0xd95fe
    return result;
}

// Address range: 0xd9618 - 0xd9625
int64_t function_d9618(int64_t a1) {
    // 0xd9618
    int64_t v1; // 0xd9618
    return v1 & -256 | (int64_t)*(char *)0x1e823067a915000;
}

// Address range: 0xd963a - 0xd963b
int64_t function_d963a(void) {
    // 0xd963a
    int64_t result; // 0xd963a
    return result;
}

// Address range: 0xd9645 - 0xd9646
int64_t function_d9645(void) {
    // 0xd9645
    int64_t result; // 0xd9645
    return result;
}

// Address range: 0xd964b - 0xd9651
int64_t function_d964b(void) {
    // 0xd964b
    return unknown_62aea52();
}

// Address range: 0xd9675 - 0xd9676
int64_t function_d9675(void) {
    // 0xd9675
    int64_t result; // 0xd9675
    return result;
}

// Address range: 0xd9689 - 0xd9691
int64_t function_d9689(int64_t a1) {
    // 0xd9689
    int64_t v1; // 0xd9689
    int32_t * v2 = (int32_t *)(v1 - 113); // 0xd9689
    int32_t v3 = *v2 + (int32_t)v1; // 0xd9689
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0xd9689
    *v2 = v3;
    int64_t result; // 0xd9689
    if (v4 % 2 != 0) {
        result = function_d9645();
    }
    // 0xd968e
    return result;
}

// Address range: 0xd9691 - 0xd96a7
int64_t function_d9691(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 + a1; // 0xd9692
    *(int64_t *)a3 = v1;
    int64_t v2 = unknown_ffffffff9b00a29b(); // 0xd969b
    if (v1 != 0) {
        v2 = function_d9675();
    }
    int32_t v3 = (int32_t)v2 + (int32_t)a4; // 0xd969d
    __asm_out(-41, (char)v3);
    int64_t result = 0x10000 * v3 >> 16; // 0xd96a2
    if (v3 >= 0) {
        result = function_d963a();
    }
    // 0xd96a4
    return result;
}

// Address range: 0xd96b0 - 0xd9754
int64_t function_d96b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd96b0
    int64_t v1; // 0xd96b0
    *(int32_t *)a1 = (int32_t)(v1 | v1);
    int32_t * v2 = (int32_t *)((2 * v1 & 0xffffffff) + 52); // 0xd96b4
    uint32_t v3 = (int32_t)a2; // 0xd96b4
    *v2 = *v2 + v3;
    unknown_7164b8ca();
    int16_t v4 = a3; // 0xd96d8
    __asm_out_133(v4, (int32_t)unknown_3a99eed9(0x1e350dab));
    uint64_t v5 = *(int64_t *)(0xb43da5f7 - (int64_t)&g1); // 0xd96d9
    int64_t v6; // 0xd96b0
    __asm_outsd(v4, *(int32_t *)&v6);
    uint32_t v7 = v5 % 2 != 0 ? 0x1e350dac : 0x1e350dab; // 0xd96db
    int32_t v8 = v3 - v7; // 0xd96db
    int32_t v9 = v5 % 2 != 0; // 0xd96db
    unsigned char v10 = llvm_ctpop_i8((char)v8); // 0xd96db
    *(int64_t *)(0xb43da5f7 - (int64_t)&g1) = 512 * (int64_t)((v5 & 512) != 0) | 256 * (int64_t)((v5 & 256) != 0) | 1024 * (int64_t)((v5 & 1024) != 0) | 0x4000 * (int64_t)((v5 & 0x4000) != 0) | (int64_t)(v5 % 2 != 0 | v7 > v3) | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v3 % 16 + v9 - v7 % 16 > 15) | 2048 * (int64_t)((-1 - v8 + v9 & v3) < 0) | 4 * (int64_t)(v10 % 2 == 0) | 2;
    unknown_ffffffff89034fe6();
    unknown_48181ef7();
    __asm_in(-104);
    int32_t * v11 = (int32_t *)(int64_t)v8; // 0xd96fa
    *v11 = *v11 | 0x1e350dab;
    *(int32_t *)0x1e350dab = __asm_insd(v4);
    int32_t * v12 = (int32_t *)(unknown_3dd67b06() + 0xb43da5f7 & 0xffffffff); // 0xd9707
    *v12 = *v12 + (int32_t)a3;
    unknown_3a6cdb0f();
    return unknown_360b8816() + 0xfec2ff4e & 0xffffffff;
}

// Address range: 0x37f530 - 0x37f549
int64_t function_37f530(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x37f534
    int64_t v2 = __asm_wait(); // 0x37f534
    if (v1 != 0) {
        v2 = function_37f51e();
    }
    int32_t * v3 = (int32_t *)(a3 - 126); // 0x37f536
    int32_t * v4 = (int32_t *)(a3 - 0x1793a033); // 0x37f53b
    bool v5; // 0x37f530
    int64_t v6 = 0x4000 * (int64_t)(bool)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5; // 0x37f539
    uint32_t v7 = *v3; // 0x37f536
    uint32_t v8 = (int32_t)v1; // 0x37f536
    int32_t v9 = v7 + v8; // 0x37f536
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x37f536
    *v3 = v9;
    int64_t v11; // bp-8, 0x37f530
    int64_t v12 = (int64_t)&v11 - 8; // 0x37f539
    *(int64_t *)v12 = v6 | (int64_t)(v9 < v7) | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v7 % 16 + v8 % 16 > 15) | 2048 * (int64_t)(((v9 ^ v7) & (v9 ^ v8)) < 0) | 4 * (int64_t)(v10 % 2 == 0) | 2;
    int64_t result = v12 & 0xffffffff; // 0x37f53a
    *v4 = *v4 + (int32_t)a1;
    int64_t v13 = v1 + a1 & 0xffff00ff | (int64_t)&g3; // 0x37f543
    int3_t v14; // 0x37f530
    int3_t v15 = v14 - 1; // 0x37f545
    __frontend_reg_store_fpr(v15, (float80_t)*(int64_t *)v13);
    int64_t v16 = v13 - 1; // 0x37f547
    int64_t v17 = v2 & 0xffffffff; // 0x37f547
    while (v16 != 0) {
        int64_t v18 = result;
        v7 = *v3;
        v8 = (int32_t)v16;
        v9 = v7 + v8;
        v10 = llvm_ctpop_i8((char)v9);
        *v3 = v9;
        v12 = v17 - 8;
        *(int64_t *)v12 = v6 | (int64_t)(v9 < v7) | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v7 % 16 + v8 % 16 > 15) | 2048 * (int64_t)(((v9 ^ v7) & (v9 ^ v8)) < 0) | 4 * (int64_t)(v10 % 2 == 0) | 2;
        result = v12 & 0xffffffff;
        *v4 = *v4 + (int32_t)a1;
        v13 = v16 + a1 & 0xffff00ff | (int64_t)&g3;
        v15--;
        __frontend_reg_store_fpr(v15, (float80_t)*(int64_t *)v13);
        v16 = v13 - 1;
        v17 = v18 & 0xffffffff;
    }
    // 0x37f549
    return result;
}

// Address range: 0x37f5f2 - 0x37f5f6
int64_t function_37f5f2(int64_t a1) {
    // 0x37f5f2
    int64_t result; // 0x37f5f2
    return result;
}

// Address range: 0x37f5f9 - 0x37f610
int64_t function_37f5f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37f5f9
    return unknown_3c2d0709();
}

// Address range: 0x37f68f - 0x37f694
int64_t function_37f68f(void) {
    // 0x37f68f
    return function_5e8abcf();
}

// Address range: 0x37f6ad - 0x37f6af
int64_t function_37f6ad(int64_t a1) {
    // 0x37f6ad
    int64_t result; // 0x37f6ad
    return result;
}

// Address range: 0x37f6ba - 0x37f6bb
int64_t function_37f6ba(void) {
    // 0x37f6ba
    int64_t result; // 0x37f6ba
    return result;
}

// Address range: 0x37f6c2 - 0x37f6c3
int64_t function_37f6c2(void) {
    // 0x37f6c2
    int64_t result; // 0x37f6c2
    return result;
}

// Address range: 0x37f6ca - 0x37f756
int64_t function_37f6ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a1;
    bool v2; // 0x37f6ca
    int64_t v3 = 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2; // bp-8, 0x37f6ca
    int64_t v4; // 0x37f6ca
    int32_t * v5 = (int32_t *)(v4 + 0x3a85c26e); // 0x37f6cd
    int32_t v6 = *v5 + (int32_t)(int64_t)&v3; // 0x37f6cd
    *v5 = v6;
    if (v6 >= 0) {
        int64_t v7 = function_37f6ba(); // 0x37f6d3
        *(char *)v1 = __asm_insb((int16_t)a3);
        __asm_out_134(90, (int32_t)v7);
        function_37f6c2();
    } else {
        // 0x37f6da
        *(char *)v1 = __asm_insb((int16_t)a3);
        __asm_out_134(90, (int32_t)v4);
    }
    uint64_t v8 = v1 + v4; // 0x37f6da
    int64_t v9 = v8 & 0xffffffff; // 0x37f6da
    int32_t * v10 = (int32_t *)(a3 - 106); // 0x37f6e3
    *v10 = *v10 + (int32_t)a2;
    int64_t v11 = unknown_7317e3f5(); // 0x37f6ef
    unsigned char v12 = *(char *)v9; // 0x37f6f4
    *(int32_t *)0x2a811301e8cad93a = (int32_t)v11;
    *(int32_t *)v1 = *(int32_t *)&v1 + 0x771aa05c + (int32_t)(v12 % 2 != 0);
    unknown_6d7820b();
    *(char *)(v4 - 0x714d3559) = -1;
    char * v13 = (char *)(unknown_388aa116() + 5); // 0x37f715
    *v13 = *v13 + (char)(a3 / 256);
    *(char *)(v9 + 56) = (char)a3;
    unknown_778d2121();
    *(char *)(v9 + 14) = -1;
    int64_t v14 = unknown_3941852c(); // 0x37f726
    uint64_t v15 = v3; // 0x37f72b
    int64_t v16; // 0x37f6ca
    v3 = (int64_t)&v16;
    int32_t * v17 = (int32_t *)(v14 - 24); // 0x37f72d
    int32_t v18 = *v17; // 0x37f72d
    *v17 = 2 * v18 | (int32_t)(v15 % 2 != 0);
    char * v19 = (char *)(v1 + 9); // 0x37f731
    *v19 = (char)(v18 < 0) - (char)(v8 / 256) + *v19;
    int64_t v20 = (v14 + 44) % 256 | v14 & -256; // 0x37f734
    int32_t * v21 = (int32_t *)(v20 + 105); // 0x37f73d
    *v21 = *v21 + ((int32_t)a4 & -256 | 232);
    v1 += ((v15 & (int64_t)&g2) == 0 ? 4 : -4);
    int32_t * v22 = (int32_t *)(a3 - 24); // 0x37f745
    uint32_t v23 = *v22; // 0x37f745
    *v22 = v23 / 128 | 0x2000000 * v23;
    uint32_t result = (int32_t)v4 - 0xf4f28f8 + (int32_t)v20; // 0x37f74a
    if (result == 0) {
        // 0x37f739
        return 0;
    }
    // 0x37f751
    float80_t v24; // 0x37f6ca
    *(int64_t *)a3 = (int64_t)v24;
    return result;
}

// Address range: 0x37f757 - 0x37f763
int64_t function_37f757(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37f757
    int64_t v1; // 0x37f757
    int32_t * v2 = (int32_t *)(v1 + 0x1e8034e); // 0x37f757
    bool v3; // 0x37f757
    *v2 = *v2 + (int32_t)v1 + (int32_t)v3;
    int64_t v4; // 0x37f757
    return (int64_t)*(int32_t *)&v4;
}

// Address range: 0x37f7c3 - 0x37f7de
int64_t function_37f7c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37f7c3
    unknown_ffffffffa2e7dcc9();
    int32_t * v1 = (int32_t *)(a3 + 67); // 0x37f7ca
    *v1 = *v1 + (int32_t)a1;
    int64_t v2 = a1 + 0x17f7e101; // 0x37f7cd
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) + 0x1000cbd4); // 0x37f7d3
    *v3 = *v3 + (int32_t)a2;
    *(int32_t *)a3 = (int32_t)v2;
    return (a4 + 167) % 256 | a4 & -256;
}

// Address range: 0x37f800 - 0x37f863
int64_t function_37f800(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a4 - 0x24f93a8f); // 0x37f800
    int64_t v3; // 0x37f800
    *v2 = *v2 + (int32_t)v3;
    uint32_t v4 = __readfsdword(a3 - 0x17c56df9) + (int32_t)a2; // 0x37f80d
    int64_t v5 = v4; // 0x37f80d
    int32_t * v6 = (int32_t *)v5; // 0x37f81a
    *v6 = *v6 + v4;
    unknown_fffffffff4665723();
    *(int32_t *)a1 = *v6;
    bool v7; // 0x37f800
    int64_t v8 = v7 ? -4 : 4; // 0x37f822
    int64_t v9 = v8 + a1; // 0x37f822
    int64_t v10 = v8 + v5; // 0x37f822
    unknown_ffffffff8e2d0930(v9, v10);
    uint32_t v11 = (int32_t)a4 % 32; // 0x37f82f
    if (v11 != 0) {
        uint32_t v12 = *(int32_t *)&v1; // 0x37f82f
        *(int32_t *)v1 = v12 >> v11 | v12 << 32 - v11;
    }
    // 0x37f850
    *(char *)v1 = (char)a4;
    unknown_ffffffffafd54241();
    int64_t v13 = __asm_int3(); // 0x37f842
    __asm_out_134(-41, (int32_t)v13);
    __asm_iretd(v9, v10, v13 & 0xffffffff);
    __asm_sti((int64_t)&g4, (int64_t)&g4, (int64_t)&g4, (int64_t)&g4);
    uint64_t v14 = a4 - 1; // 0x37f848
    uint32_t v15 = (int32_t)v3 & -256 | 176; // 0x37f84b
    uint32_t v16 = 2 * v15; // 0x37f84b
    int64_t result = __asm_int1(); // 0x37f84d
    char v17 = *(char *)(a4 + 96); // 0x37f850
    int32_t * v18 = (int32_t *)(v10 + 2 * (int64_t)v16); // 0x37f85a
    int32_t v19 = *v18; // 0x37f85a
    *v18 = v19 + (int32_t)(256 * (int64_t)((char)(v16 < v15) + (char)(v14 / 256) + v17) | v14 & 0xffff00ff);
    return result;
}

// Address range: 0x37f865 - 0x37f8b5
int64_t function_37f865(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x37f865
    *(char *)a1 = (char)v2;
    bool v3; // 0x37f865
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x37f865
    int64_t result2 = unknown_ffffffffe8ffd46c(v4); // 0x37f866
    *(int32_t *)-0x179a028e = *(int32_t *)-0x179a028e + (int32_t)v4;
    uint32_t v5 = (int32_t)a3; // 0x37f871
    int32_t v6 = v2; // 0x37f871
    uint32_t v7 = v6 + v5; // 0x37f871
    char * v8 = (char *)result2; // 0x37f873
    unsigned char v9 = *v8; // 0x37f873
    unsigned char v10 = (char)a4 % 32; // 0x37f873
    bool v11 = ((v7 ^ v5) & (v7 ^ v6)) < 0; // 0x37f873
    if (v10 != 0) {
        unsigned char v12 = v10 - 1; // 0x37f873
        char v13 = v9 << v10 | (char)(v7 < v5) << v12 | (char)((int16_t)v9 >> (int16_t)(9 - v10)); // 0x37f873
        *v8 = v13;
        v11 = v10 == 1 ? (v13 ^ v9 << v12) < 0 : ((v7 ^ v5) & (v7 ^ v6)) < 0;
    }
    if (v7 == 0 || v7 < 0 != v11) {
        char * v14 = (char *)((int64_t)v7 - 62); // 0x37f8a7
        *v14 = *v14 | (char)result2;
        int64_t result = unknown_3d39e0b4(); // 0x37f8ae
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a2;
        return result;
    }
    // 0x37f877
    return result2;
}

// Address range: 0x37f8b6 - 0x37f916
int64_t function_37f8b6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    char * v2 = (char *)(a3 + 0x551a00b3); // 0x37f8b6
    int64_t v3; // 0x37f8b6
    bool v4; // 0x37f8b6
    *v2 = (char)v4 + (char)(v3 / 256) + *v2;
    *(char *)a1 = (char)v3;
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x37f8bc
    int64_t v6 = unknown_1385b6c3(v5); // 0x37f8bd
    int64_t v7 = a3 & 129 | 126; // 0x37f8c5
    int64_t v8 = a3 & 0xffffff00; // 0x37f8c5
    int64_t v9 = v7 | v8; // 0x37f8c5
    char * v10 = (char *)(v9 + 0x5901e82f); // 0x37f8c7
    *v10 = *v10 + (char)(a4 / 256);
    char * v11 = (char *)(v6 & 0xffffffff); // 0x37f8cd
    *v11 = (char)v3;
    int64_t v12 = v9; // bp-8, 0x37f8cf
    uint32_t v13 = (int32_t)a4 % 32; // 0x37f8d1
    if (v13 != 0) {
        unsigned char v14 = *(char *)((v3 & -256 | (int64_t)*v11) + v7); // 0x37f8d0
        int32_t * v15 = (int32_t *)(v8 | (int64_t)v14); // 0x37f8d1
        uint32_t v16 = *v15; // 0x37f8d1
        *v15 = v16 >> 32 - v13 | v16 << v13;
    }
    int64_t v17 = (int64_t)&v12; // 0x37f8cf
    int64_t v18 = unknown_ffffffffb042d0db() + 0x1e80359; // 0x37f8da
    *(int32_t *)v5 = *(int32_t *)&v1;
    int64_t v19 = v4 ? -4 : 4; // 0x37f8e0
    int64_t v20 = v5 + v19; // 0x37f8e0
    int64_t v21 = v1 + v19; // 0x37f8e0
    v1 = v21;
    char * v22 = (char *)((v18 & 0xffffffff) + 0x580f8ff); // 0x37f8e1
    *v22 = *v22 ^ 18;
    int64_t v23 = unknown_ffffffffe6df0cef(v20, v21); // 0x37f8e9
    char v24 = *(char *)(v3 - 0x5d70b8ff) & (char)v6; // 0x37f8ee
    int64_t v25 = v23 & -0xff01 | 0x4000 * (int64_t)(v24 == 0) | 0x8000 * (int64_t)(v24 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v24) % 2 == 0) | 512; // 0x37f8f4
    int32_t * v26 = (int32_t *)((v6 & 0xffffff00 | (int64_t)v24) + 122); // 0x37f8f7
    uint32_t v27 = *v26; // 0x37f8f7
    uint32_t v28 = v27 + (int32_t)((256 * v23 ^ v18) & 0xff00 | v18 & 0xffff00ff); // 0x37f8f7
    *v26 = v28;
    bool v29 = v28 < v27 | v28 == 0; // 0x37f8fa
    int32_t v30 = v29 ? v25 : v17; // 0x37f8fd
    uint32_t v31 = v30 + 0x4001e8fa; // 0x37f8fd
    int64_t v32 = v1; // 0x37f902
    v1 = v31;
    int64_t result = v32 & 0xffffffff; // 0x37f902
    *(int64_t *)((v29 ? v17 : v25 & 0xffffc6ff) - 8) = v20;
    if ((v31 & (v30 ^ -0x80000000)) >= 0) {
        // 0x37f940
        return result;
    }
    // 0x37f906
    *(char *)v20 = *(char *)v1;
    return result;
}

// Address range: 0x37fa30 - 0x37fa41
int64_t function_37fa30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x534d4688); // 0x37fa30
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x37fa30
    int32_t * v2 = (int32_t *)(result - 24); // 0x37fa3a
    *v2 = *v2 | (int32_t)a3;
    return result;
}

// Address range: 0x37fa58 - 0x37fa75
int64_t function_37fa58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37fa58
    int64_t v1; // 0x37fa58
    *(int32_t *)a3 = 2 * (int32_t)v1;
    unknown_ffffffffe8fe1260();
    *(int32_t *)0x1067df66 = *(int32_t *)0x1067df66 + (int32_t)a1;
    unknown_ffffffffe69d866b();
    return function_ffffffffa5f00565(*(int32_t *)(a3 - 0x4f62f3fe));
}

// Address range: 0x37faad - 0x37fab2
int64_t function_37faad(void) {
    // 0x37faad
    return function_ffffffffeaa7eedf();
}

// Address range: 0x37fad1 - 0x37fad4
int64_t function_37fad1(int64_t a1) {
    // 0x37fad1
    int64_t result; // 0x37fad1
    return result;
}

// Address range: 0x37fb11 - 0x37fb12
int64_t function_37fb11(void) {
    // 0x37fb11
    int64_t result; // 0x37fb11
    return result;
}

// Address range: 0x37fb2c - 0x37fb2f
int64_t function_37fb2c(void) {
    // 0x37fb2c
    int64_t result; // 0x37fb2c
    return result;
}

// Address range: 0x37fb4f - 0x37fb73
int64_t function_37fb4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37fb4f
    int64_t v1; // 0x37fb4f
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint64_t v3 = (0x100000000 * __asm_wait() >> 32) * (int64_t)*(int32_t *)(a4 + 67); // 0x37fb56
    uint64_t v4 = v3 / 0x100000000; // 0x37fb56
    int64_t v5; // 0x37fb4f
    *(char *)a4 = *(char *)&v5 - (char)v3;
    char * v6 = (char *)(4 * a4 - 0x2efec300 + v4); // 0x37fb63
    *v6 = *v6 | (char)a4;
    int64_t v7; // 0x37fb4f
    char v8 = *(char *)&v7; // 0x37fb6b
    return function_37fbbb(a1, a2 & -256 | (int64_t)(v8 + (char)a2), v4, a4, a1);
}

// Address range: 0x37fb80 - 0x37fb82
int64_t function_37fb80(void) {
    // 0x37fb80
    return function_37fb11();
}

// Address range: 0x37fbbb - 0x37fbf2
int64_t function_37fbbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x68778ae); // 0x37fbbb
    *v1 = *v1 & (int32_t)a2;
    __asm_in_135((int16_t)a3);
    int64_t v2 = unknown_ffffffffe8b664c8(); // 0x37fbc2
    uint32_t v3 = *(int32_t *)-0x4cbc7c32; // 0x37fbc7
    uint32_t v4 = v3 + (int32_t)a1; // 0x37fbc7
    *(int32_t *)-0x4cbc7c32 = v4;
    int32_t v5 = *(int32_t *)-0x1dc61bb4; // 0x37fbd2
    *(int32_t *)-0x1dc61bb4 = v5 + (int32_t)v2 + (int32_t)(v4 < v3);
    unknown_ffffffffb1b492e4();
    int64_t v6 = (a5 & (int64_t)&g2) == 0 ? 4 : -4; // 0x37fbe6
    int64_t v7 = v6 + a1; // 0x37fbe6
    int64_t v8 = v6 + a2; // 0x37fbe6
    unknown_ffffffffe90fe926(v7, v8);
    int32_t * v9 = (int32_t *)(v8 + 15); // 0x37fbec
    *v9 = *v9 + (int32_t)v7;
    return 0x50800b3;
}

// Address range: 0x37fc2d - 0x37fc32
int64_t function_37fc2d(void) {
    // 0x37fc2d
    return function_ffffffffab991055();
}

// Address range: 0x37fcc6 - 0x37fcc9
int64_t function_37fcc6(void) {
    // 0x37fcc6
    int64_t result; // 0x37fcc6
    return result;
}

// Address range: 0x37fcdb - 0x37fcdd
int64_t function_37fcdb(void) {
    // 0x37fcdb
    int64_t v1; // 0x37fcdb
    return function_37fcf2(v1, v1, v1, v1);
}

// Address range: 0x37fcdf - 0x37fcf2
int64_t function_37fcdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37fcdf
    bool v1; // 0x37fcdf
    int64_t v2 = v1 ? -4 : 4; // 0x37fcdf
    int64_t v3 = v2 + a1; // 0x37fcdf
    int32_t * v4 = (int32_t *)(v3 + 8 * a2); // 0x37fce2
    int32_t v5 = *v4 - (int32_t)v3; // 0x37fce2
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x37fce2
    *v4 = v5;
    int32_t v7; // 0x37fcdf
    int64_t result; // 0x37fcdf
    if (v6 % 2 != 0) {
        // 0x37fcdf
        v7 = result;
    } else {
        int32_t * v8 = (int32_t *)(result - 0x45ffc71e); // 0x37fce9
        int32_t v9 = result;
        *v8 = *v8 + (256 * v9 & 0xff00 | (int32_t)(result ^ a4));
        *(int32_t *)(v3 + v2) = v9;
        v7 = v9;
    }
    // 0x37fcf1
    __asm_out_133((int16_t)a3, v7);
    return result;
}

// Address range: 0x37fcf2 - 0x37fd0a
int64_t function_37fcf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 0x1707c9c6); // 0x37fcf2
    int64_t v2; // 0x37fcf2
    *v1 = *v1 & (char)(v2 / 256);
    char v3 = v2; // 0x37fcfa
    *(char *)0x7f2457fadf9a0728 = v3;
    int64_t result = v2 + a4 & 0xffffffff; // 0x37fd06
    int64_t v4; // 0x37fcf2
    char v5 = *(char *)&v4; // 0x37fd07
    *(char *)result = v3 - 1 + (char)((int32_t)v2 == 0) + v5;
    return result;
}

// Address range: 0x37fd1f - 0x37fd20
int64_t function_37fd1f(void) {
    // 0x37fd1f
    int64_t result; // 0x37fd1f
    return result;
}

// Address range: 0x37fd4a - 0x37fd50
int64_t function_37fd4a(int64_t a1, int64_t a2) {
    // 0x37fd4a
    int64_t result; // 0x37fd4a
    return result;
}

// Address range: 0x37fd5d - 0x37fd63
int64_t function_37fd5d(void) {
    // 0x37fd5d
    int64_t result; // 0x37fd5d
    return result;
}

// Address range: 0x37fd81 - 0x37fd84
int64_t function_37fd81(void) {
    // 0x37fd81
    int64_t result; // 0x37fd81
    return result;
}

// Address range: 0x37fd8f - 0x37fdc8
int64_t function_37fd8f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37fd8f
    int64_t v1; // 0x37fd8f
    int32_t v2 = v1; // 0x37fd8f
    *(int32_t *)a1 = v2 + (int32_t)v1;
    int64_t v3; // 0x37fd8f
    int32_t v4 = *(int32_t *)&v3; // 0x37fd91
    int64_t v5; // 0x37fd8f
    int32_t v6 = *(int32_t *)&v5; // 0x37fd91
    bool v7; // 0x37fd8f
    int64_t v8 = v7 ? -4 : 4; // 0x37fd91
    int64_t v9 = v8 + a1; // 0x37fd91
    int64_t v10 = v8 + a2; // 0x37fd91
    v5 = v9;
    v3 = v10;
    int64_t result; // 0x37fd8f
    if (v4 - v6 >= 0) {
        // 0x37fd94
        return result;
    }
    int64_t v11 = result & 0xffffffff; // 0x37fdbc
    __asm_iretd(v9, v10, v11);
    int64_t result2 = unknown_3d39e5c4(); // 0x37fdbe
    int32_t * v12 = (int32_t *)(v11 - 2); // 0x37fdc3
    *v12 = *v12 + v2;
    *(char *)v11 = *(char *)&result & (char)(result / 256);
    return result2;
}

// Address range: 0x37fe19 - 0x37fe1e
int64_t function_37fe19(void) {
    // 0x37fe19
    return function_22076a8();
}

// Address range: 0x37fe1e - 0x37fe24
int64_t function_37fe1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37fe1e
    int64_t result; // 0x37fe1e
    char * v1 = (char *)(result - 76); // 0x37fe1e
    *v1 = *v1 | (char)a3;
    return result;
}

// Address range: 0x37fe93 - 0x37fe94
int64_t function_37fe93(void) {
    // 0x37fe93
    int64_t result; // 0x37fe93
    return result;
}

// Address range: 0x37fed7 - 0x37fed8
int64_t function_37fed7(int64_t a1) {
    // 0x37fed7
    int64_t result; // 0x37fed7
    return result;
}

// Address range: 0x37fef9 - 0x37fefb
int64_t function_37fef9(void) {
    // 0x37fef9
    int64_t result; // 0x37fef9
    return result;
}

// Address range: 0x37ff18 - 0x37ff2e
int64_t function_37ff18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37ff18
    int64_t result; // 0x37ff18
    return result;
}
