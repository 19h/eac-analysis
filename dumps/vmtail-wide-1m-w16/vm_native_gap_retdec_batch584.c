/*
 * Targeted RetDec C for native executable gap queue batch 584.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1296dc-0x1298dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1298dc-0x129adc rank=- name=- kind=- bytes=- uncovered=-
 *   0x129adc-0x129cdc rank=- name=- kind=- bytes=- uncovered=-
 *   0x129cdc-0x129edc rank=- name=- kind=- bytes=- uncovered=-
 *   0x129edc-0x12a0dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ba1ce-0x1ba3ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ba3ce-0x1ba5ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ba5ce-0x1ba7ce rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
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

int64_t function_1296dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_129703(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_129709(int64_t a1, int64_t a2, int64_t a3);
int64_t function_129735(void);
int64_t function_129792(void);
int64_t function_1297a3(void);
int64_t function_1297ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1297b5(void);
int64_t function_1297bd(int64_t a1);
int64_t function_1297e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_129995(int64_t a1);
int64_t function_1299a2(void);
int64_t function_1299d0(void);
int64_t function_1299d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_129a59(void);
int64_t function_129a8b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_129ae6(void);
int64_t function_129aeb(void);
int64_t function_129b2b(void);
int64_t function_129b4c(void);
int64_t function_129b7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_129b9d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_129bb5(int64_t a1, int64_t a2);
int64_t function_129bbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_129c24(void);
int64_t function_129c4d(int64_t a1);
int64_t function_129cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_129cff(int64_t a1);
int64_t function_129d74(int64_t a1);
int64_t function_129d9e(void);
int64_t function_129dbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_129e65(void);
int64_t function_129ea8(void);
int64_t function_129ead(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_129f5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_129f78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12a044(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_12a0ca(void);
int64_t function_158a4e6();
int64_t function_1ba1ce(int64_t a1, int64_t result, uint64_t a3, int64_t a4);
int64_t function_1ba24f(int64_t a1, int64_t a2);
int64_t function_1ba316(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1ba39f(int64_t a1);
int64_t function_1ba3a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ba413(void);
int64_t function_1ba464(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1ba48e(int64_t a1, int64_t a2);
int64_t function_1ba4a3(void);
int64_t function_1ba4aa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ba4b6(int64_t a1, int64_t a2);
int64_t function_1ba4c1(void);
int64_t function_1ba4c7(int64_t a1, int64_t a2, int32_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_1ba57e(void);
int64_t function_1ba5a3(int64_t a1);
int64_t function_1ba5b5(int64_t a1);
int64_t function_1ba5d4(void);
int64_t function_1ba60b(int64_t a1);
int64_t function_1ba6ae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ba6e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ba766(void);
int64_t function_1ba77d(void);
int64_t function_1ba7ca(void);
int64_t function_1fb4436();
int64_t function_422a13d();
int64_t function_ffffffff992da76c();
int64_t function_ffffffffc323ab49();
int64_t function_ffffffffe713d441();
int64_t unknown_10e5771b();
int64_t unknown_164a731c();
int64_t unknown_1a267fe3();
int64_t unknown_3d1485de();
int64_t unknown_3de1f0e7();
int64_t unknown_5824d2cc();
int64_t unknown_c0ddcb4();
int64_t unknown_dd2e7c();
int64_t unknown_ffffffff898a7ede();
int64_t unknown_ffffffff9579bced();
int64_t unknown_ffffffff9cf84384();
int64_t unknown_ffffffffb4682dc3();
int64_t unknown_ffffffffc89c5dd3();
int64_t unknown_ffffffffdfde3f8d();
int64_t unknown_ffffffffe61f06b7();

// Address range: 0x1296dc - 0x1296f0
int64_t function_1296dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1296dc
    int64_t v1; // 0x1296dc
    uint64_t v2 = v1;
    *(char *)-0x6abd431d = *(char *)-0x6abd431d + (char)(v1 / 256);
    *(int32_t *)v1 = (int32_t)v1;
    char v3 = *(char *)((v1 & 0xffffffff) - 112); // 0x1296e4
    char v4 = *(char *)((256 * (int64_t)(v3 & (char)(v2 / 256)) | v2 & -0xff01) - 74); // 0x1296e7
    char v5 = v4 & (char)(a4 / 256); // 0x1296e7
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x1296e7
    int64_t v7 = __asm_int3((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x1296ea
    float80_t v8; // 0x1296dc
    *(float32_t *)(8 * v7 + a2) = (float32_t)v8;
    return v7 & -0xff01 | 0x4000 * (int64_t)(v5 == 0) | 0x8000 * (int64_t)(v5 < 0) | 1024 * (int64_t)(v6 % 2 == 0) | 512;
}

// Address range: 0x129703 - 0x129708
int64_t function_129703(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x129703
    int64_t v1; // 0x129703
    int64_t result = v1 & 0xffffffff; // 0x129703
    char * v2 = (char *)(result - 36); // 0x129704
    *v2 = *v2 - (char)(a3 / 256);
    return result;
}

// Address range: 0x129709 - 0x12970c
int64_t function_129709(int64_t a1, int64_t a2, int64_t a3) {
    // 0x129709
    int64_t result; // 0x129709
    return result;
}

// Address range: 0x129735 - 0x129741
int64_t function_129735(void) {
    // 0x129735
    int64_t v1; // 0x129735
    int32_t * v2 = (int32_t *)(v1 - 0x6994e9ee); // 0x129735
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffffe713d441();
}

// Address range: 0x129792 - 0x129794
int64_t function_129792(void) {
    // 0x129792
    return function_129792();
}

// Address range: 0x1297a3 - 0x1297a4
int64_t function_1297a3(void) {
    // 0x1297a3
    int64_t result; // 0x1297a3
    return result;
}

// Address range: 0x1297ad - 0x1297b5
int64_t function_1297ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1297ad
    return __asm_int3(a1, a2, a3, a4);
}

// Address range: 0x1297b5 - 0x1297b9
int64_t function_1297b5(void) {
    // 0x1297b5
    int64_t result; // 0x1297b5
    return result;
}

// Address range: 0x1297bd - 0x1297c2
int64_t function_1297bd(int64_t a1) {
    // 0x1297bd
    int64_t result; // 0x1297bd
    return result;
}

// Address range: 0x1297e0 - 0x1298dc
int64_t function_1297e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 0x59dfbed7); // 0x1297e0
    int64_t v2; // 0x1297e0
    *v1 = *v1 + (char)v2;
    if (a4 != 0) {
        char * v3 = (char *)((v2 & 0xffffffff) - 82); // 0x1297fa
        *v3 = *v3 + (char)v2;
        char v4 = *(char *)0x49f8f04; // 0x1297fd
        *(char *)0x49f8f04 = v4 + (char)(((int64_t)&g4 & -256 | 230) >> 8);
        return function_1297a3();
    }
    // 0x12984e
    bool v5; // 0x1297e0
    int64_t v6 = v5 ? -1 : 1; // 0x1297e6
    int64_t v7 = v6 + a2; // 0x1297e6
    int64_t v8; // 0x1297e0
    *(char *)v8 = *(char *)&v8 + (char)a3;
    unsigned char v9 = *(char *)0xffffa5bc; // 0x12985c
    int32_t v10 = *(int32_t *)&v8; // 0x12985d
    *(int32_t *)v8 = v10 + (int32_t)(*(char *)v7 < v9);
    char v11 = *(char *)0x4ce83266 + (char)(v8 / 256); // 0x12985f
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x12985f
    *(char *)0x4ce83266 = v11;
    int64_t result = 0xc8dfb440; // 0x129865
    if (v12 % 2 == 0) {
        int64_t v13 = v6 + 0xffffa5bc; // 0x12985c
        int32_t * v14 = (int32_t *)(a3 + 0xdfb0480); // 0x129881
        *v14 = *v14 ^ (int32_t)v13;
        result = unknown_ffffffffdfde3f8d(v13, v7 + v6);
    }
    // 0x12981a
    return result;
}

// Address range: 0x129995 - 0x129996
int64_t function_129995(int64_t a1) {
    // 0x129995
    int64_t result; // 0x129995
    return result;
}

// Address range: 0x1299a2 - 0x1299a5
int64_t function_1299a2(void) {
    // 0x1299a2
    int64_t result; // 0x1299a2
    return result;
}

// Address range: 0x1299d0 - 0x1299d1
int64_t function_1299d0(void) {
    // 0x1299d0
    int64_t result; // 0x1299d0
    return result;
}

// Address range: 0x1299d8 - 0x1299f8
int64_t function_1299d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = unknown_ffffffff898a7ede(); // 0x1299d8
    char * v2 = (char *)(a3 - 118); // 0x1299dd
    char v3 = *v2; // 0x1299dd
    char v4 = v1 / 256; // 0x1299dd
    char v5 = v3 + v4; // 0x1299dd
    *v2 = v5;
    __asm_int(-65);
    int64_t v6 = a1 & 0xffffffff; // 0x1299e6
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0 == (v5 != 0)) {
        v6 = function_1299d0();
    }
    // 0x1299e8
    int64_t v7; // 0x1299d8
    int32_t * v8 = (int32_t *)(v7 - 0x73d00eae); // 0x1299e8
    *v8 = *v8 + (int32_t)v6;
    int64_t v9 = (a5 & (int64_t)&g2) == 0 ? 4 : -4; // 0x1299ef
    return function_1fb4436((v1 & 0xffffffff) + v9);
}

// Address range: 0x129a59 - 0x129a63
int64_t function_129a59(void) {
    // 0x129a59
    int64_t result; // 0x129a59
    return result;
}

// Address range: 0x129a8b - 0x129a90
int64_t function_129a8b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x129a8b
    int64_t result; // 0x129a8b
    return result;
}

// Address range: 0x129ae6 - 0x129aeb
int64_t function_129ae6(void) {
    // 0x129ae6
    return function_422a13d();
}

// Address range: 0x129aeb - 0x129af2
int64_t function_129aeb(void) {
    // 0x129aeb
    int64_t result; // 0x129aeb
    return result;
}

// Address range: 0x129b2b - 0x129b2e
int64_t function_129b2b(void) {
    // 0x129b2b
    int64_t result; // 0x129b2b
    return result;
}

// Address range: 0x129b4c - 0x129b4d
int64_t function_129b4c(void) {
    // 0x129b4c
    int64_t result; // 0x129b4c
    return result;
}

// Address range: 0x129b7d - 0x129b82
int64_t function_129b7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x129b7d
    int64_t result; // 0x129b7d
    return result;
}

// Address range: 0x129b9d - 0x129bb3
int64_t function_129b9d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x129b9d
    int64_t result; // 0x129b9d
    *(int32_t *)a1 = 2 * (int32_t)result;
    *(int32_t *)(result - 99) = (int32_t)a3;
    return result;
}

// Address range: 0x129bb5 - 0x129bbc
int64_t function_129bb5(int64_t a1, int64_t a2) {
    // 0x129bb5
    int64_t v1; // 0x129bb5
    int64_t v2 = v1;
    return 257 * v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x129bbc - 0x129bfa
int64_t function_129bbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x129bbc
    __asm_hlt();
    int64_t v1 = unknown_ffffffffb4682dc3(); // 0x129bbd
    // 0x129bc4
    *(int32_t *)v1 = (int32_t)v1;
    int64_t result = unknown_5824d2cc(); // 0x129bc6
    int32_t * v2 = (int32_t *)result; // 0x129bcb
    *v2 = 1 << (int32_t)result % 32 | *v2;
    return result;
    // 0x129bd6
    int64_t v3; // 0x129bbc
    uint32_t v4 = *(int32_t *)(v3 + 46) - 0x4efe17d7; // 0x129be1
    __asm_out_133(1, v4);
    __asm_outsb((int16_t)a3, (char)v3);
    int32_t * v5 = (int32_t *)(v3 - 0x77ffe400); // 0x129bee
    *v5 = *v5 + (int32_t)v3;
    char v6 = *(char *)((int64_t)v4 - 0x17ff8000 + (int64_t)(v4 < 0xb101e829)); // 0x129bf4
    return __asm_in((int16_t)(a3 & 0xff00 | (int64_t)(v6 | (char)a3)));
}

// Address range: 0x129c24 - 0x129c27
int64_t function_129c24(void) {
    // 0x129c24
    int64_t result; // 0x129c24
    return result;
}

// Address range: 0x129c4d - 0x129c50
int64_t function_129c4d(int64_t a1) {
    // 0x129c4d
    int64_t v1; // 0x129c4d
    return v1 & -256 | (int64_t)__asm_in_134((char)a1);
}

// Address range: 0x129cd4 - 0x129cf6
int64_t function_129cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x129cd4
    int64_t result; // 0x129cd4
    bool v1; // 0x129cd4
    if (v1 || false) {
        // 0x129cdf
        *(int32_t *)a4 = (int32_t)a4 - (int32_t)result + (int32_t)v1;
        int64_t v2 = unknown_3de1f0e7() + 2 * result; // 0x129ce8
        uint32_t v3 = (int32_t)a3; // 0x129cea
        uint32_t v4 = (int32_t)result; // 0x129cea
        int32_t v5 = v4 + v3; // 0x129cea
        unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x129cea
        __asm_rcl(*(int32_t *)(v2 & 0xffffffff));
        return 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | v2 & 0xffff00ff | 512;
    }
    // 0x129cd6
    return result;
}

// Address range: 0x129cff - 0x129d00
int64_t function_129cff(int64_t a1) {
    // 0x129cff
    int64_t result; // 0x129cff
    return result;
}

// Address range: 0x129d74 - 0x129d8a
int64_t function_129d74(int64_t a1) {
    // 0x129d74
    return unknown_dd2e7c() | 231;
}

// Address range: 0x129d9e - 0x129da0
int64_t function_129d9e(void) {
    // 0x129d9e
    int64_t result; // 0x129d9e
    return result;
}

// Address range: 0x129dbb - 0x129e1d
int64_t function_129dbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a1; // 0x129dc5
    int64_t v2; // 0x129dbb
    int32_t v3 = v2; // 0x129dc5
    int32_t v4 = v3 + v1; // 0x129dc5
    if (v4 < 0 == ((v4 ^ v1) & (v4 ^ v3)) < 0) {
        int32_t * v5 = (int32_t *)((int64_t)v4 + 66); // 0x129e0a
        *v5 = *v5 + (int32_t)a2;
        int64_t v6 = (int64_t)*(int32_t *)(v2 - 122); // 0x129e0f
        int32_t * v7 = (int32_t *)(int64_t)(*(int32_t *)-0x6f872efec2ff0964 & -256 | 155); // 0x129e13
        int32_t v8 = *v7; // 0x129e13
        *v7 = v8 + (int32_t)v2 + (int32_t)(58 * v6 != 0x3a00000000 * v6 >> 32);
        return unknown_10e5771b(v4);
    }
    int32_t v9 = a4;
    unknown_ffffffffc89c5dd3(v4);
    int64_t v10 = unknown_3d1485de(); // 0x129dd8
    int32_t v11 = v10; // 0x129ddd
    int32_t v12 = v11 + v9; // 0x129ddd
    *(int32_t *)a4 = v12;
    int64_t v13 = v10; // 0x129ddf
    if (v12 < 0 != ((v12 ^ v9) & (v12 ^ v11)) < 0) {
        char * v14 = (char *)(a2 - 0x40e47cb1 + v2); // 0x129de1
        *v14 = *v14 | (char)v10;
        v13 = v10 + 0x4c3907fc & 0xffffffff;
    }
    unsigned char v15 = *(char *)-0x721ca6c3fe178aba; // 0x129df1
    *(char *)-0x72eb79d7 = *(char *)-0x72eb79d7 - 107;
    char * v16 = (char *)(a4 - 0x1749ff60); // 0x129e03
    *v16 = *v16 & v15;
    return v13 & -256 | (int64_t)v15;
}

// Address range: 0x129e65 - 0x129e66
int64_t function_129e65(void) {
    // 0x129e65
    int64_t result; // 0x129e65
    return result;
}

// Address range: 0x129ea8 - 0x129ea9
int64_t function_129ea8(void) {
    // 0x129ea8
    int64_t result; // 0x129ea8
    return result;
}

// Address range: 0x129ead - 0x129eb8
int64_t function_129ead(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x129ead
    int64_t v1; // 0x129ead
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)(a2 + 113); // 0x129eae
    *v2 = *v2 + (char)a4;
    bool v3; // 0x129ead
    unknown_ffffffffe61f06b7((v3 ? -4 : 4) + a1);
    return function_129ea8();
}

// Address range: 0x129f5c - 0x129f66
int64_t function_129f5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_int3((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x129f60
    uint32_t v1 = (int32_t)a4 % 32; // 0x129f61
    if (v1 != 0) {
        int64_t v2; // 0x129f5c
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)result = v3 >> 32 - v1 | v3 << v1;
    }
    return result;
}

// Address range: 0x129f78 - 0x129f93
int64_t function_129f78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x129f78
    int64_t v1; // 0x129f78
    int64_t result = v1;
    uint32_t v2 = *(int32_t *)0x1e801e8; // 0x129f8c
    *(int32_t *)0x1e801e8 = v2 + 0x1e801e8;
    unsigned char v3 = (char)a4 % 32; // 0x129f8e
    if (v3 != 0) {
        *(char *)result = (char)result << v3 | (char)((int16_t)result % 256 >> (int16_t)(9 - v3)) | (char)(v2 > 0xfe17fe17) << v3 - 1;
    }
    return result;
}

// Address range: 0x12a044 - 0x12a0c4
int64_t function_12a044(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x12a044
    int64_t v1; // 0x12a044
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v4; // 0x12a044
    *(char *)a1 = *(char *)&v4 + (char)(v1 / 256);
    int64_t v5 = v2 & -70; // 0x12a048
    uint32_t v6 = (int32_t)a1 - *(int32_t *)(v1 + (int64_t)&g1); // 0x12a04a
    v4 = v6;
    int32_t * v7 = (int32_t *)(a3 + 0x182c5b3a + 8 * v1); // 0x12a055
    uint32_t v8 = *v7; // 0x12a055
    int32_t v9 = v8 - v6; // 0x12a055
    *v7 = v9;
    if (a4 != 1 && v9 != 0) {
        // 0x12a0c1
        return (v2 & 186) * (int64_t)*(char *)(8 * v3 + v5) | v2 & -0x10000;
    }
    // 0x12a05e
    *(int32_t *)v4 = *(int32_t *)&v3;
    bool v10; // 0x12a044
    int64_t v11 = v10 ? -4 : 4; // 0x12a05e
    v4 += v11;
    v3 += v11;
    int32_t * v12 = (int32_t *)(a4 + (int64_t)&g3 - 1); // 0x12a05f
    *v12 = (int32_t)(v8 < v6) + (int32_t)v1 + *v12;
    char * v13 = (char *)(v1 - 0x43000000); // 0x12a06e
    int64_t v14 = v5; // 0x12a06a
    int64_t v15; // 0x12a044
    int64_t v16 = (int64_t)&v15; // 0x12a06a
    while (true) {
        int64_t v17 = v14;
        *(int32_t *)v4 = *(int32_t *)v3;
        v4 += v11;
        v3 += v11;
        char * v18 = (char *)v17; // 0x12a06c
        *v18 = *v18 + (char)v17;
        *v13 = *v13 + (char)v1;
        *v18 = *v18 + (char)(a5 / 256);
        v14 = v16 & 0xffffffff;
        v16 = v17 & 0xffffffff;
    }
}

// Address range: 0x12a0ca - 0x12a0cc
int64_t function_12a0ca(void) {
    // 0x12a0ca
    int64_t result; // 0x12a0ca
    return result;
}

// Address range: 0x1ba1ce - 0x1ba200
int64_t function_1ba1ce(int64_t a1, int64_t result, uint64_t a3, int64_t a4) {
    // 0x1ba1ce
    int64_t v1; // 0x1ba1ce
    int64_t v2 = v1;
    if (llvm_ctpop_i8(*(char *)(a1 + 66) + (char)v1) % 2 != 0) {
        // 0x1ba1d3
        return (v2 + 129 + (int64_t)((int32_t)a1 > (int32_t)v2)) % 256 | v2 & -256;
    }
    // 0x1ba1d8
    *(char *)a3 = (char)v2 + (char)a3;
    char * v3 = (char *)(v2 - 0x17d8d5ba); // 0x1ba1da
    *v3 = *v3 | (char)(a3 / 256);
    int64_t v4 = unknown_ffffffff9579bced(); // 0x1ba1e2
    int32_t * v5 = (int32_t *)(v4 + 0x342f200); // 0x1ba1ed
    *v5 = *v5 + (int32_t)v4;
    return result;
}

// Address range: 0x1ba24f - 0x1ba272
int64_t function_1ba24f(int64_t a1, int64_t a2) {
    // 0x1ba24f
    int64_t v1; // 0x1ba24f
    *(char *)0x6f0903f00013d8c = (char)v1;
    int64_t v2 = __asm_int3((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x1ba258
    bool v3; // 0x1ba24f
    *(int32_t *)((v3 ? -1 : 1) + a1) = (int32_t)v2;
    int64_t v4; // 0x1ba24f
    *(int32_t *)v4 = -*(int32_t *)&v4;
    return v2 + 0x3d7e9000 & 0xffffffff;
}

// Address range: 0x1ba316 - 0x1ba334
int64_t function_1ba316(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = unknown_164a731c(); // 0x1ba316
    int32_t * v1 = (int32_t *)(a1 + 0x30c278f7); // 0x1ba322
    int64_t v2; // 0x1ba316
    *v1 = *v1 + (int32_t)v2;
    *(int64_t *)0x54002821 = a4 - 256 * result & 0xff00 | a4 & -0xff01;
    int64_t v3; // 0x1ba316
    *(char *)a3 = *(char *)&v3 & (char)(a3 / 256);
    return result;
}

// Address range: 0x1ba39f - 0x1ba3a2
int64_t function_1ba39f(int64_t a1) {
    // 0x1ba39f
    int64_t result; // 0x1ba39f
    return result;
}

// Address range: 0x1ba3a5 - 0x1ba3a8
int64_t function_1ba3a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ba3a5
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x1ba3a5
    return result;
}

// Address range: 0x1ba413 - 0x1ba414
int64_t function_1ba413(void) {
    // 0x1ba413
    int64_t result; // 0x1ba413
    return result;
}

// Address range: 0x1ba464 - 0x1ba485
int64_t function_1ba464(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1ba464
    int64_t v1; // 0x1ba464
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    int64_t v3; // 0x1ba464
    int32_t * v4 = (int32_t *)(v3 - 0x70bb7bf6); // 0x1ba46c
    *v4 = *v4 - (int32_t)a4;
    int64_t v5 = 256 * (int64_t)(*(char *)&v3 | (char)(a3 / 256)) | a3 & -0xff01; // 0x1ba473
    int32_t * v6 = (int32_t *)(a4 + 0x7aa2d600); // 0x1ba475
    *v6 = *v6 & (int32_t)v5;
    int64_t v7; // 0x1ba464
    *(char *)a1 = *(char *)&v7;
    int64_t v8 = a2 - 1; // 0x1ba47b
    char v9 = *(char *)-0x683c207d; // 0x1ba47c
    *(char *)-0x683c207d = v9 + (char)((uint64_t)v1 / 256);
    int64_t result = __asm_wait(a1 - 1, v8, v5); // 0x1ba482
    __asm_outsd((int16_t)v5, *(int32_t *)v8);
    return result;
}

// Address range: 0x1ba48e - 0x1ba4a3
int64_t function_1ba48e(int64_t a1, int64_t a2) {
    // 0x1ba48e
    int64_t v1; // 0x1ba48e
    uint32_t v2 = (int32_t)v1;
    bool v3; // 0x1ba48e
    *(int32_t *)a1 = v2 / 8 | 0x40000000 * v2 | 0x20000000 * (int32_t)v3;
    *(char *)0x10314398 = *(char *)0x10314398 + (char)(v1 / 256);
    return a2 + 0xe2ec999f & 0xffffffff;
}

// Address range: 0x1ba4a3 - 0x1ba4a8
int64_t function_1ba4a3(void) {
    // 0x1ba4a3
    int64_t v1; // 0x1ba4a3
    int64_t v2 = v1;
    bool v3; // 0x1ba4a3
    return (v2 + 33 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x1ba4aa - 0x1ba4b4
int64_t function_1ba4aa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1ba4aa
    int64_t v1; // 0x1ba4aa
    return v1 + 0x78ec4711 & 0xffffffff;
}

// Address range: 0x1ba4b6 - 0x1ba4c0
int64_t function_1ba4b6(int64_t a1, int64_t a2) {
    // 0x1ba4b6
    int64_t v1; // 0x1ba4b6
    return function_1ba4c7(a1, v1, (int32_t)a2 >> 31, v1, v1, a1);
}

// Address range: 0x1ba4c1 - 0x1ba4c6
int64_t function_1ba4c1(void) {
    // 0x1ba4c1
    return function_158a4e6();
}

// Address range: 0x1ba4c7 - 0x1ba540
int64_t function_1ba4c7(int64_t a1, int64_t a2, int32_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x1ba4c7
    int64_t v1; // 0x1ba4c7
    int64_t v2 = v1;
    int64_t v3 = (v2 + 58) % 256 | v2 & -256; // 0x1ba4c7
    unsigned char v4 = (char)(a4 / 256); // 0x1ba4c9
    unsigned char v5 = *(char *)(a4 + 20 + v1) + (char)((char)v2 > 197); // 0x1ba4c9
    bool v6 = (char)v2 > 197 ? v5 != -1 | (char)((char)v2 > 197) + v4 - v5 > v4 : v5 > v4; // 0x1ba4c9
    char * v7 = (char *)v3; // 0x1ba4cd
    unsigned char v8 = (char)a4; // 0x1ba4cd
    *v7 = *v7 + v8 + (char)v6;
    int32_t * v9 = (int32_t *)(v1 + 95); // 0x1ba4d1
    *v9 = *v9 | (int32_t)v1;
    unsigned char v10 = v8 % 32; // 0x1ba4d5
    if (v10 != 0) {
        char * v11 = (char *)(v1 + 0x3d089600); // 0x1ba4d5
        *v11 = *v11 << v10;
    }
    int64_t v12 = a3;
    int32_t * v13 = (int32_t *)v3; // 0x1ba4db
    int32_t v14 = v3; // 0x1ba4db
    *v13 = *v13 + v14;
    __asm_out_133(-12, v14);
    __asm_wait(a1, a2, v12);
    int32_t v15 = a1;
    int32_t v16 = v15 & a3; // 0x1ba4e4
    *(int32_t *)v12 = v16;
    if (v16 == 0) {
        int32_t * v17 = (int32_t *)(v1 - 8); // 0x1ba537
        *v17 = *v17 + (int32_t)v1;
        return v1 & -256 | 88;
    }
    char * v18 = (char *)(a2 - 0x78fec2be); // 0x1ba4ee
    *v18 = *v18 + (char)a5;
    *(int32_t *)(v1 & -256 | 234) = 0x89f013d;
    uint64_t v19 = *(int64_t *)0x472c0050; // 0x1ba50f
    *(int32_t *)0x827daed3 = v15;
    unsigned char v20 = *(char *)((v19 & 0xffffffff) + 223); // 0x1ba522
    char * v21 = (char *)((int64_t)*(int32_t *)0x827daed3 + 0x3e511a9b); // 0x1ba523
    *v21 = *v21 + (char)(v19 / 256);
    return (int64_t)(v20 / 128 | 2 * v20) | 0x8140ad00;
}

// Address range: 0x1ba57e - 0x1ba584
int64_t function_1ba57e(void) {
    // 0x1ba57e
    __asm_hlt();
    return function_ffffffff992da76c();
}

// Address range: 0x1ba5a3 - 0x1ba5a6
int64_t function_1ba5a3(int64_t a1) {
    // 0x1ba5a3
    int64_t result; // 0x1ba5a3
    return result;
}

// Address range: 0x1ba5b5 - 0x1ba5b6
int64_t function_1ba5b5(int64_t a1) {
    // 0x1ba5b5
    int64_t result; // 0x1ba5b5
    return result;
}

// Address range: 0x1ba5d4 - 0x1ba5d9
int64_t function_1ba5d4(void) {
    // 0x1ba5d4
    return function_ffffffffc323ab49();
}

// Address range: 0x1ba60b - 0x1ba60c
int64_t function_1ba60b(int64_t a1) {
    // 0x1ba60b
    int64_t result; // 0x1ba60b
    return result;
}

// Address range: 0x1ba6ae - 0x1ba6e7
int64_t function_1ba6ae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1ba6ae
    unknown_c0ddcb4();
    int64_t v1; // 0x1ba6ae
    *(int32_t *)a3 = (int32_t)v1;
    return unknown_1a267fe3();
}

// Address range: 0x1ba6e8 - 0x1ba6f8
int64_t function_1ba6e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ba6e8
    int64_t result; // 0x1ba6e8
    return result;
}

// Address range: 0x1ba766 - 0x1ba768
int64_t function_1ba766(void) {
    // 0x1ba766
    return function_1ba766();
}

// Address range: 0x1ba77d - 0x1ba786
int64_t function_1ba77d(void) {
    // 0x1ba77d
    return unknown_ffffffff9cf84384();
}

// Address range: 0x1ba7ca - 0x1ba7cc
int64_t function_1ba7ca(void) {
    // 0x1ba7ca
    int64_t result; // 0x1ba7ca
    return result;
}
