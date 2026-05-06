/*
 * Targeted RetDec C for native executable gap queue batch 630.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x24ecbc-0x24eebc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24eebc-0x24f0bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24f0bc-0x24f2bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24f2bc-0x24f4bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24f4bc-0x24f6bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x352c8a-0x352e8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x352e8a-0x35308a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35308a-0x35328a rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g8;
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

int64_t function_20d9a48();
int64_t function_24ecbc(void);
int64_t function_24ed13(void);
int64_t function_24ed25(void);
int64_t function_24ed3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ed5c(int64_t a1, int64_t a2);
int64_t function_24ed6b(void);
int64_t function_24ed6c(void);
int64_t function_24ed7a(int64_t a1);
int64_t function_24ed9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24edc6(int64_t a1);
int64_t function_24edda(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ede9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_24ee02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ee0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24ee23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24ee59(void);
int64_t function_24ee63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ee72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ee83(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_24ee8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24eea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ef6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ef81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24efc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24efef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_24f116(void);
int64_t function_24f11f(int64_t result);
int64_t function_24f130(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f141(int64_t a1);
int64_t function_24f177(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_24f193(void);
int64_t function_24f1a1(void);
int64_t function_24f207(void);
int64_t function_24f214(int64_t a1);
int64_t function_24f254(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f262(void);
int64_t function_24f27b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f292(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_24f30e(void);
int64_t function_24f38a(void);
int64_t function_24f397(void);
int64_t function_24f427(void);
int64_t function_24f43e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24f450(void);
int64_t function_24f451(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f4b9(void);
int64_t function_24f4bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f4c4(int64_t a1);
int64_t function_24f4d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24f51a(int64_t a1);
int64_t function_24f521(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24f54d(void);
int64_t function_24f5c5(void);
int64_t function_24f5cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f5fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f642(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f672(int64_t a1);
int64_t function_352c8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_352dea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_352f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3530d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_588207dd();
int64_t function_cf3c7();
int64_t function_ffffffffaaa9f72e();
int64_t unknown_182ffada();
int64_t unknown_2264f40();
int64_t unknown_28d7af22();
int64_t unknown_3a4dc1a8();
int64_t unknown_3b128062();
int64_t unknown_3d26d6b3();
int64_t unknown_3daf1616();
int64_t unknown_3db17b5e();
int64_t unknown_3fa334ce();
int64_t unknown_481f4dbe();
int64_t unknown_5c3d0da0();
int64_t unknown_60a66749();
int64_t unknown_645aa457();
int64_t unknown_65a15982();
int64_t unknown_6829d7d7();
int64_t unknown_ffffffff951760e4();
int64_t unknown_ffffffff9eaf6b17();
int64_t unknown_ffffffffb03259f5();
int64_t unknown_ffffffffb415e34f();
int64_t unknown_ffffffffcbf927c8();
int64_t unknown_fffffffff48cdc86();

// Address range: 0x24ecbc - 0x24ecbd
int64_t function_24ecbc(void) {
    // 0x24ecbc
    int64_t result; // 0x24ecbc
    return result;
}

// Address range: 0x24ed13 - 0x24ed14
int64_t function_24ed13(void) {
    // 0x24ed13
    int64_t result; // 0x24ed13
    return result;
}

// Address range: 0x24ed25 - 0x24ed2a
int64_t function_24ed25(void) {
    // 0x24ed25
    int64_t v1; // 0x24ed25
    return function_24ed9a(v1, v1, v1, v1);
}

// Address range: 0x24ed3a - 0x24ed54
int64_t function_24ed3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ed3a
    unknown_2264f40();
    int32_t * v1 = (int32_t *)(a2 - 0x1b89f84a); // 0x24ed3f
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x24ed3a
    int32_t * v3 = (int32_t *)((v2 + (a4 & 0xff00) & 0xff00 | a4 & -0xff01) + 11); // 0x24ed4e
    *v3 = *v3 + (int32_t)v2;
    __asm_in((int16_t)a3);
    return __asm_sti();
}

// Address range: 0x24ed5c - 0x24ed69
int64_t function_24ed5c(int64_t a1, int64_t a2) {
    // 0x24ed5c
    unknown_3b128062(a1, a2);
    return function_24ed6c();
}

// Address range: 0x24ed6b - 0x24ed6c
int64_t function_24ed6b(void) {
    // 0x24ed6b
    int64_t result; // 0x24ed6b
    return result;
}

// Address range: 0x24ed6c - 0x24ed71
int64_t function_24ed6c(void) {
    // 0x24ed6c
    int64_t v1; // 0x24ed6c
    __asm_out(-42, (int32_t)v1);
    int64_t result; // 0x24ed6c
    bool v2; // 0x24ed6c
    if (v2) {
        result = function_24ed13();
    }
    // 0x24ed71
    return result;
}

// Address range: 0x24ed7a - 0x24ed7d
int64_t function_24ed7a(int64_t a1) {
    // 0x24ed7a
    int64_t result; // 0x24ed7a
    return result;
}

// Address range: 0x24ed9a - 0x24eda1
int64_t function_24ed9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ed9a
    *(char *)a3 = (char)a4;
    int64_t result; // 0x24ed9a
    return result;
}

// Address range: 0x24edc6 - 0x24edc7
int64_t function_24edc6(int64_t a1) {
    // 0x24edc6
    int64_t result; // 0x24edc6
    return result;
}

// Address range: 0x24edda - 0x24eddf
int64_t function_24edda(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24edda
    return function_24ee02(a1, a2, a3, a4);
}

// Address range: 0x24ede9 - 0x24ee02
int64_t function_24ede9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x24ede9
    *(char *)(a3 - 0x176602d9) = (char)((int64_t)&g7 >> 8);
    int64_t v1; // 0x24ede9
    *(int32_t *)0x5726b773 = *(int32_t *)0x5726b773 + (int32_t)v1;
    return (v1 & -0xff01 | (int64_t)&g7) & (a4 / 256 | -256);
}

// Address range: 0x24ee02 - 0x24ee0b
int64_t function_24ee02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ee02
    int64_t result; // 0x24ee02
    int32_t * v1 = (int32_t *)(result + 0x1a83124a); // 0x24ee02
    *v1 = *v1 + (int32_t)result;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x24ee0f - 0x24ee22
int64_t function_24ee0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24ee0f
    int64_t v1; // 0x24ee0f
    uint64_t v2 = v1;
    int64_t result = v2 / 2 % 128 | v2 & -256; // 0x24ee0f
    int32_t * v3 = (int32_t *)(result + 5); // 0x24ee11
    int32_t v4 = *v3 + (int32_t)v1; // 0x24ee11
    *v3 = v4;
    if (v4 == 0) {
        // 0x24ee79
        return result;
    }
    // 0x24ee19
    *(char *)(a3 + 0x1e8cd57 + a5) = (char)(v1 / 256);
    return __asm_int3();
}

// Address range: 0x24ee23 - 0x24ee2c
int64_t function_24ee23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24ee23
    int64_t result; // 0x24ee23
    return result;
}

// Address range: 0x24ee59 - 0x24ee5c
int64_t function_24ee59(void) {
    // 0x24ee59
    int64_t result; // 0x24ee59
    return result;
}

// Address range: 0x24ee63 - 0x24ee65
int64_t function_24ee63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ee63
    int64_t v1; // 0x24ee63
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x24ee72 - 0x24ee79
int64_t function_24ee72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ee72
    int64_t v1; // 0x24ee72
    unsigned char v2 = (char)v1 + (char)a3; // 0x24ee72
    int64_t result; // 0x24ee72
    if (a4 != 1 == v2 == 0) {
        int64_t v3 = function_24ee8b(a1, a2, a3 & -256 | (int64_t)v2, (int64_t)&g8); // 0x24ee74
        result = v3;
    }
    // 0x24ee77
    return result;
}

// Address range: 0x24ee83 - 0x24ee88
int64_t function_24ee83(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x24ee83
    int64_t v1; // 0x24ee83
    uint16_t v2 = (int16_t)v1; // 0x24ee83
    uint16_t v3 = (int16_t)(a3 / 256) % 256; // 0x24ee83
    return v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3));
}

// Address range: 0x24ee8b - 0x24eea0
int64_t function_24ee8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ee8b
    bool v1; // 0x24ee8b
    int32_t v2 = *(int32_t *)((a3 + 84 + (int64_t)(bool)v1) % 256 | a3 & 0xffffff00); // 0x24ee91
    int32_t * v3 = (int32_t *)(a1 + 22); // 0x24ee94
    *v3 = *v3 + (int32_t)a1;
    return 61 * v2;
}

// Address range: 0x24eea0 - 0x24eee0
int64_t function_24eea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24eea0
    unknown_3a4dc1a8();
    unknown_3d26d6b3();
    int32_t * v1 = (int32_t *)(a4 + 0x3a30a6f9); // 0x24eeb2
    *v1 = *v1 + (int32_t)a1;
    __asm_in_133(-94);
    return unknown_182ffada() + 5 & 0xffffffff;
}

// Address range: 0x24ef6c - 0x24ef71
int64_t function_24ef6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ef6c
    int64_t result; // 0x24ef6c
    return result;
}

// Address range: 0x24ef81 - 0x24ef8a
int64_t function_24ef81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ef81
    int64_t v1; // 0x24ef81
    char v2 = *(char *)(v1 - 0x398bfe18 + 8 * v1); // 0x24ef81
    int64_t result = function_24efef(a1, a2, a3, a4 & -256 | (int64_t)(v2 ^ (char)a4), (int64_t)&g8); // 0x24ef88
    return result;
}

// Address range: 0x24efc2 - 0x24efef
int64_t function_24efc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    unknown_ffffffffcbf927c8();
    int64_t v2; // 0x24efc2
    char * v3 = (char *)(v2 - 0x1c6502b); // 0x24efc7
    *v3 = *v3 + (char)a3;
    __asm_hlt();
    char * v4 = (char *)(a2 + 101); // 0x24efce
    *v4 = -*v4;
    unknown_6829d7d7();
    unknown_ffffffff951760e4();
    *(char *)a1 = (char)a5;
    bool v5; // 0x24efc2
    int64_t v6 = v5 ? -1 : 1; // 0x24efe6
    int64_t v7 = v6 + a1; // 0x24efe6
    int32_t v8 = __asm_in_135(2); // 0x24efe8
    int64_t v9 = v7 + v6; // 0x24efea
    int64_t v10; // 0x24efc2
    if (*(char *)v7 < (char)v8) {
        // 0x24efc2
        v10 = v1;
    } else {
        uint32_t v11 = 56 * *(int32_t *)&v1; // 0x24efd6
        function_24efc2(v9, a2, v1, 256 * (v2 + (int64_t)(v11 / 256)) & 0xff00 | (int64_t)(v11 & -0xff08), (int64_t)&g8);
        v10 = v1;
    }
    // 0x24efed
    *(int32_t *)v9 = __asm_insd((int16_t)v10);
    return v2 & 0xffffffff;
}

// Address range: 0x24efef - 0x24f108
int64_t function_24efef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffb03259f5(); // 0x24efef
    __asm_out_134((int16_t)a3, (int32_t)v2);
    *(int32_t *)(a1 - 87) = (int32_t)a2;
    if (a5 % 2 != 0) {
        // 0x24effb
        return __asm_in_135(122);
    }
    if ((char)a5 < 0 != (a5 & (int64_t)L"\n2") != 0) {
        uint64_t result = unknown_28d7af22(); // 0x24f01c
        char * v3 = (char *)(result + 5); // 0x24f021
        *v3 = *v3 + (char)(result / 256);
        return result;
    }
    int32_t v4 = *(int32_t *)(a1 - 24) ^ (int32_t)a4; // 0x24f033
    int32_t * v5 = (int32_t *)v2; // 0x24f036
    uint32_t v6 = *v5; // 0x24f036
    uint32_t v7 = v4 % 32; // 0x24f036
    int32_t v8 = 0; // 0x24f036
    if (v7 != 0) {
        uint32_t v9 = v6 >> 32 - v7 | v6 << v7; // 0x24f036
        *v5 = v9;
        v8 = 0x80000000 * (int32_t)(v9 % 2 != 0);
    }
    uint32_t v10 = *(int32_t *)-0x11b40dda; // 0x24f038
    *(int32_t *)-0x11b40dda = v10 / 2 | v8;
    if (v4 < 0) {
        // 0x24f045
        __asm_int(-110);
        unknown_ffffffffb415e34f();
        return __asm_wait();
    }
    int64_t v11; // 0x24efef
    if (v10 % 2 == 0) {
        int64_t result2 = unknown_3db17b5e() + 2 * v11 & 0xffffffff; // 0x24f05f
        __asm_rcl(*(char *)result2);
        return result2;
    }
    unsigned char v12 = llvm_ctpop_i8((char)v4); // 0x24f033
    int64_t v13 = v2 & 0xffffffff; // 0x24f0ad
    *(char *)v13 = *(char *)&v1;
    int64_t v14 = (a5 & (int64_t)&g1) == 0 ? 1 : -1; // 0x24f0ae
    int64_t v15 = v13 + v14; // 0x24f0ae
    int64_t v16 = v1 + v14; // 0x24f0ae
    v1 = v16;
    if (v12 % 2 != 0) {
        int32_t * v17 = (int32_t *)((8 * a1 & 0x7fffffff8) + 0xaf9d61f7); // 0x24f0e1
        *v17 = *v17 & (int32_t)a3;
        *(int64_t *)0xaf9d61ef = 72;
        int32_t * v18 = (int32_t *)(v15 - 120); // 0x24f0f3
        *v18 = *v18 - 1;
        *(int32_t *)0xb1013d00 = *(int32_t *)0xb1013d00 + (int32_t)v11;
        return 0xe807fb04;
    }
    int64_t v19 = a1 + 0x801ae848 + v11 & 0xffffff00 | (int64_t)*(char *)v16; // 0x24f0ba
    int64_t v20 = v16 + v14; // 0x24f0ba
    *(int64_t *)0xaf9d61ef = v19;
    *(char *)v15 = *(char *)v20;
    int64_t v21 = v20 + v14; // 0x24f0bc
    char * v22 = (char *)v19; // 0x24f0bd
    *v22 = *v22 - 24;
    int32_t * v23 = (int32_t *)(v21 + 0x13d00bc); // 0x24f0c0
    *v23 = *v23 + (int32_t)v11;
    return __asm_iretd(v15 + v14, v21);
}

// Address range: 0x24f116 - 0x24f117
int64_t function_24f116(void) {
    // 0x24f116
    int64_t result; // 0x24f116
    return result;
}

// Address range: 0x24f11f - 0x24f122
int64_t function_24f11f(int64_t result) {
    // 0x24f11f
    return result;
}

// Address range: 0x24f130 - 0x24f135
int64_t function_24f130(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24f130
    int64_t result; // 0x24f130
    return result;
}

// Address range: 0x24f141 - 0x24f16a
int64_t function_24f141(int64_t a1) {
    int64_t v1 = unknown_60a66749(); // 0x24f143
    int64_t v2; // 0x24f141
    char v3 = *(char *)-0x4cc2fa7 + (char)(v2 / 256); // 0x24f152
    *(char *)-0x4cc2fa7 = v3;
    int64_t v4 = v1 + 0xdb47c2bc & 0xffffff00; // 0x24f158
    if (v3 != 0) {
        v4 = function_24f116();
    }
    // 0x24f15a
    *(int32_t *)0x7731c7894ab87c0a = (int32_t)v4 & -256 | 123;
    return (uint64_t)v2 % 256;
}

// Address range: 0x24f177 - 0x24f17a
int64_t function_24f177(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x24f177
    int64_t result; // 0x24f177
    *(char *)a4 = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x24f193 - 0x24f194
int64_t function_24f193(void) {
    // 0x24f193
    int64_t result; // 0x24f193
    return result;
}

// Address range: 0x24f1a1 - 0x24f1a3
int64_t function_24f1a1(void) {
    // 0x24f1a1
    return function_24f193();
}

// Address range: 0x24f207 - 0x24f208
int64_t function_24f207(void) {
    // 0x24f207
    int64_t result; // 0x24f207
    return result;
}

// Address range: 0x24f214 - 0x24f215
int64_t function_24f214(int64_t a1) {
    // 0x24f214
    int64_t result; // 0x24f214
    return result;
}

// Address range: 0x24f254 - 0x24f25a
int64_t function_24f254(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24f254
    int64_t result; // 0x24f254
    *(char *)a2 = (char)result - (char)a4;
    return result;
}

// Address range: 0x24f262 - 0x24f263
int64_t function_24f262(void) {
    // 0x24f262
    int64_t result; // 0x24f262
    return result;
}

// Address range: 0x24f27b - 0x24f289
int64_t function_24f27b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_65a15982(); // 0x24f27c
    int16_t v2 = (256 * (int16_t)v1 >> 8) * (256 * (int16_t)a4 >> 8); // 0x24f281
    return v1 & -0x10000 | (int64_t)(v2 & -256) | (int64_t)((v2 + 50) % 256);
}

// Address range: 0x24f292 - 0x24f2c1
int64_t function_24f292(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_5c3d0da0(); // 0x24f29a
    int64_t v2; // 0x24f292
    int64_t * v3 = (int64_t *)(v2 - 46); // 0x24f29f
    *v3 = *v3 - 111;
    int64_t v4 = (0x100000000 * v1 >> 32) * (int64_t)*(int32_t *)v1; // 0x24f2a4
    *(char *)-0x17d924b4 = *(char *)-0x17d924b4 + (char)v4;
    char * v5 = (char *)(a4 + 72); // 0x24f2ae
    char v6 = *v5 | (char)(a4 / 256); // 0x24f2ae
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x24f2ae
    *v5 = v6;
    int64_t v8 = v4 & 0xffffffff; // 0x24f2b2
    if (v7 % 2 == 0) {
        v8 = function_24f262();
    }
    int64_t v9 = unknown_481f4dbe(); // 0x24f2b8
    int32_t * v10 = (int32_t *)((v2 & -0xff01 | (int64_t)"addrinfo") - 28); // 0x24f2bd
    *v10 = *v10 + (int32_t)a4;
    return v9 & -256 | (int64_t)__asm_in((int16_t)v8);
}

// Address range: 0x24f30e - 0x24f312
int64_t function_24f30e(void) {
    // 0x24f30e
    int64_t result; // 0x24f30e
    return result;
}

// Address range: 0x24f38a - 0x24f38c
int64_t function_24f38a(void) {
    // 0x24f38a
    int64_t result; // 0x24f38a
    return result;
}

// Address range: 0x24f397 - 0x24f39c
int64_t function_24f397(void) {
    // 0x24f397
    return function_20d9a48();
}

// Address range: 0x24f427 - 0x24f42a
int64_t function_24f427(void) {
    // 0x24f427
    int64_t result; // 0x24f427
    return result;
}

// Address range: 0x24f43e - 0x24f44e
int64_t function_24f43e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24f43e
    int64_t v1; // 0x24f43e
    int16_t v2 = 256 * (int16_t)v1 >> 8; // 0x24f445
    int32_t * v3 = (int32_t *)(a4 + 53); // 0x24f447
    int64_t v4; // 0x24f43e
    *v3 = *v3 + (int32_t)(int64_t)&v4;
    __asm_outsb((int16_t)a3, *(char *)a5);
    return v1 & -0x10000 | (int64_t)(v2 * v2);
}

// Address range: 0x24f450 - 0x24f451
int64_t function_24f450(void) {
    // 0x24f450
    int64_t result; // 0x24f450
    return result;
}

// Address range: 0x24f451 - 0x24f478
int64_t function_24f451(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_645aa457(); // 0x24f451
    *(char *)-0x3fd922b4 = *(char *)-0x3fd922b4 - 35;
    char v2 = *(char *)(a2 - 124); // 0x24f45e
    bool v3; // 0x24f451
    char v4 = v2 & (128 * (char)v3 | 64 * (char)v3 | 16 * (char)v3 | (char)v3 | 4 * (char)v3 | 2); // 0x24f45e
    int64_t v5 = 256 * (int64_t)v4 | v1 & -0xff01; // 0x24f466
    if (v4 < 0) {
        v5 = function_24f450();
    }
    // 0x24f468
    *(int32_t *)a3 = (int32_t)a3 + (int32_t)a1;
    int32_t * v6 = (int32_t *)(v5 + 0x1e8a405); // 0x24f46c
    *v6 = *v6 + 50;
    return function_24f4bb(a1, v3 ? 0x7ea04c41 : 0x7ea04c43, 256 * a4 & 0xff00 | a3, a4);
}

// Address range: 0x24f4b9 - 0x24f4bb
int64_t function_24f4b9(void) {
    // 0x24f4b9
    int64_t v1; // 0x24f4b9
    return (v1 ^ v1) & 0xffffffff;
}

// Address range: 0x24f4bb - 0x24f4c3
int64_t function_24f4bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24f4bb
    int64_t result; // 0x24f4bb
    return result;
}

// Address range: 0x24f4c4 - 0x24f4d0
int64_t function_24f4c4(int64_t a1) {
    // 0x24f4c4
    return unknown_3fa334ce(a1);
}

// Address range: 0x24f4d0 - 0x24f518
int64_t function_24f4d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x24f4d0
    int64_t v1; // 0x24f4d0
    uint64_t v2 = v1;
    if (llvm_ctpop_i8((char)(v2 / 256) - *(char *)(v2 - 0x21d4c241)) % 2 != 0) {
        // 0x24f4dd
        __asm_int1();
        return function_ffffffffaaa9f72e(0xd794a66b);
    }
    // 0x24f509
    __asm_in_136((int16_t)a3);
    *(int32_t *)a6 = (int32_t)a6 + (int32_t)a5;
    __asm_int(14);
    return unknown_ffffffff9eaf6b17();
}

// Address range: 0x24f51a - 0x24f51b
int64_t function_24f51a(int64_t a1) {
    // 0x24f51a
    int64_t result; // 0x24f51a
    return result;
}

// Address range: 0x24f521 - 0x24f53b
int64_t function_24f521(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24f521
    int64_t v1; // 0x24f521
    int32_t * v2 = (int32_t *)(v1 + a2); // 0x24f532
    *v2 = *v2 + (int32_t)v1;
    return (int64_t)*(int32_t *)-0x25c50b6d287f06f4;
}

// Address range: 0x24f54d - 0x24f54f
int64_t function_24f54d(void) {
    // 0x24f54d
    int64_t result; // 0x24f54d
    return result;
}

// Address range: 0x24f5c5 - 0x24f5c7
int64_t function_24f5c5(void) {
    // 0x24f5c5
    int64_t v1; // 0x24f5c5
    return function_24f642(v1, v1, v1, v1);
}

// Address range: 0x24f5cf - 0x24f5dc
int64_t function_24f5cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24f5cf
    int64_t v1; // 0x24f5cf
    __asm_outsb((int16_t)a3, (char)v1);
    return function_588207dd();
}

// Address range: 0x24f5fa - 0x24f61e
int64_t function_24f5fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24f5fa
    int64_t v1; // 0x24f5fa
    char v2 = *(char *)-0x639f23ff + (char)(v1 / 256); // 0x24f5fa
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x24f5fa
    *(char *)-0x639f23ff = v2;
    if (v3 % 2 == 0) {
        function_24f672(a1);
    }
    uint32_t v4 = (int32_t)a2;
    uint32_t v5 = (int32_t)a4 + v4; // 0x24f602
    *(int32_t *)a2 = v5;
    int32_t * v6 = (int32_t *)(a2 + 0x8739734); // 0x24f60a
    *v6 = *v6 >> 1;
    int64_t result = unknown_3daf1616((int32_t)((int64_t)(v5 < v4) + a1 - v1)); // 0x24f610
    int32_t * v7 = (int32_t *)result; // 0x24f615
    *v7 = *v7 + (int32_t)result;
    return result;
}

// Address range: 0x24f642 - 0x24f64b
int64_t function_24f642(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24f642
    int64_t result; // 0x24f642
    __asm_out_137(13, (char)result);
    return result;
}

// Address range: 0x24f672 - 0x24f6a2
int64_t function_24f672(int64_t a1) {
    uint32_t v1 = *(int32_t *)0x4d1a17b; // 0x24f674
    uint32_t v2 = (int32_t)a1; // 0x24f674
    int32_t v3 = v1 + v2; // 0x24f674
    char v4 = llvm_ctpop_i8((char)v3); // 0x24f674
    *(int32_t *)0x4d1a17b = v3;
    bool v5; // 0x24f672
    int64_t v6 = v5 ? -4 : 4; // 0x24f67e
    int64_t v7 = 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5; // 0x24f67d
    bool v8 = v3 < 0; // 0x24f674
    bool v9 = v3 == 0; // 0x24f674
    bool v10 = v1 % 16 + v2 % 16 > 15; // 0x24f674
    int64_t v11 = 2048 * (int64_t)(((v3 ^ v1) & (v3 ^ v2)) < 0); // 0x24f674
    bool v12 = v3 < v1; // 0x24f674
    int64_t v13; // 0x24f672
    int64_t v14; // 0x24f672
    *(int64_t *)(v14 - 8) = v13;
    int64_t v15 = v13 & -256; // 0x24f67b
    int64_t v16 = v14 - 16; // 0x24f67d
    *(int64_t *)v16 = v7 | 128 * (int64_t)v8 | 64 * (int64_t)v9 | v11 | 16 * (int64_t)v10 | 4 * (int64_t)(v4 % 2 == 0) | (int64_t)v12 | 2;
    int64_t v17; // 0x24f672
    *(int32_t *)a1 = *(int32_t *)v17;
    int64_t v18 = a1 + v6; // 0x24f67e
    int64_t v19 = v17 + v6; // 0x24f67e
    int64_t v20; // 0x24f672
    unsigned char v21 = (char)v20; // 0x24f67f
    unsigned char v22 = *(char *)v18; // 0x24f67f
    char v23 = v21 - v22; // 0x24f67f
    char v24 = llvm_ctpop_i8(v23); // 0x24f67f
    int64_t v25 = v18 + (v5 ? -1 : 1); // 0x24f67f
    int64_t v26 = unknown_fffffffff48cdc86(v25, v19); // 0x24f680
    v8 = v23 < 0;
    v9 = v23 == 0;
    v10 = v21 % 16 - v22 % 16 > 15;
    v12 = v22 > v21;
    while (((v23 ^ v21) & (v22 ^ v21)) < 0) {
        // 0x24f67a
        *(int64_t *)(v16 - 8) = v15;
        v15 &= -256;
        v16 -= 16;
        *(int64_t *)v16 = v7 | 128 * (int64_t)v8 | 64 * (int64_t)v9 | 2048 | 16 * (int64_t)v10 | 4 * (int64_t)(v24 % 2 == 0) | (int64_t)v12 | 2;
        *(int32_t *)v25 = *(int32_t *)v19;
        v18 = v25 + v6;
        v19 += v6;
        v21 = (char)v26;
        v22 = *(char *)v18;
        v23 = v21 - v22;
        v24 = llvm_ctpop_i8(v23);
        v25 = v18 + (v5 ? -1 : 1);
        v26 = unknown_fffffffff48cdc86(v25, v19);
        v8 = v23 < 0;
        v9 = v23 == 0;
        v10 = v21 % 16 - v22 % 16 > 15;
        v12 = v22 > v21;
    }
    char v27 = *(char *)(v19 - 0x12a3faf8); // 0x24f691
    int32_t * v28 = (int32_t *)v19; // 0x24f699
    *v28 = (int32_t)v16 + 8 + *v28;
    int64_t v29 = v26 & 0xe8ee00af | (int64_t)&g6; // 0x24f69b
    char * v30 = (char *)(v29 + 5); // 0x24f69d
    unsigned char v31 = *v30; // 0x24f69d
    int64_t v32; // 0x24f672
    unsigned char v33 = (char)(((int32_t)v26 >> 31) / 256) + (char)(-1 - (int32_t)v15 < (int32_t)v32) - v27 + v31; // 0x24f69d
    *v30 = v33;
    return (v29 - (v33 < v31 ? 248 : 247)) % 256 | v29 & -256;
}

// Address range: 0x352c8a - 0x352dea
int64_t function_352c8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x352c8a
    int64_t v1; // bp-24, 0x352c8a
    int64_t v2 = (int64_t)&v1; // 0x352ceb
    *(int64_t *)(v2 + 16) = a7;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x352d5d
    *v3 = v2;
    v1 = 0x34d924;
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x352d74
    *(int64_t *)(v2 + 40) = *v4;
    *v4 = a2;
    v1 = a5;
    *v4 = a1;
    *v3 = a6;
    *v4 = v2 + 24;
    int64_t v5; // 0x352c8a
    return function_cf3c7(*v4, *v4, a3, a4, a5, a6, v5);
}

// Address range: 0x352dea - 0x352f51
int64_t function_352dea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x352dea
    int64_t v1; // 0x352dea
    return function_cf3c7(a1, a2, a3, a4, a5, v1, 0x48c8763f);
}

// Address range: 0x352f51 - 0x3530d2
int64_t function_352f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x352f51
    bool v1; // 0x352f51
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2);
}

// Address range: 0x3530d2 - 0x353280
int64_t function_3530d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3530d2
    int64_t v1; // 0x3530d2
    bool v2; // 0x3530d2
    return function_cf3c7(a1, a2, 0x2758e400, a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}
