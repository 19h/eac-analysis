/*
 * Targeted RetDec C for native executable gap queue batch 582.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3abe15-0x3ac015 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cdfff-0x3ce1ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ce1ff-0x3ce3ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ce3ff-0x3ce5ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ffad1-0x3ffcd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ffcd1-0x3ffed1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ffed1-0x4000d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4002d1-0x4004d1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_3abe15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3abff3(int64_t a1);
int64_t function_3cdfbe();
int64_t function_3cdfff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6);
int64_t function_3ce0b8(int64_t a1, int64_t result);
int64_t function_3ce0e2(int64_t a1);
int64_t function_3ce12f(void);
int64_t function_3ce158(int64_t a1);
int64_t function_3ce167(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ce1b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ce1c4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ce1c8(void);
int64_t function_3ce1db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ce1ea(void);
int64_t function_3ce1ed(void);
int64_t function_3ce1f4(int64_t a1, int64_t a2);
int64_t function_3ce203(void);
int64_t function_3ce22e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ce281(void);
int64_t function_3ce33d(void);
int64_t function_3ce348(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ce37c(int64_t a1);
int64_t function_3ce39d(int64_t a1);
int64_t function_3ce3c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ce44f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ce478(void);
int64_t function_3ce499(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ce4a6(void);
int64_t function_3ce4af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ce516(int64_t a1);
int64_t function_3ce564(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ce578(void);
int64_t function_3ce5b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ce5b6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ce5ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ffa6b();
int64_t function_3ffad1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3ffb58(void);
int64_t function_3ffb75(int64_t a1);
int64_t function_3ffbb9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3ffc16(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ffd79(int64_t a1);
int64_t function_3ffd99(void);
int64_t function_3ffe01(void);
int64_t function_3ffe84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ffee5(void);
int64_t function_3fff24(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4002d1(void);
int64_t function_4002da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_400304(void);
int64_t function_400330(void);
int64_t function_400331(int64_t a1, int64_t a2);
int64_t function_400338(int64_t a1, int64_t a2, int64_t a3);
int64_t function_400489(int64_t a1);
int64_t function_400495(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4b08175d();
int64_t function_c823b();
int64_t function_ffffffffc2600bf8();
int64_t unknown_1b3e3cba();
int64_t unknown_3d3da4bb();
int64_t unknown_70af90ba();
int64_t unknown_ffffffffa111d018();
int64_t unknown_ffffffffacda89f5();
int64_t unknown_ffffffffce4c73ae();

// Address range: 0x3abe15 - 0x3abf22
int64_t function_3abe15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3abe15
    return function_c823b();
}

// Address range: 0x3abff3 - 0x3abff6
int64_t function_3abff3(int64_t a1) {
    // 0x3abff3
    int64_t result; // 0x3abff3
    return result;
}

// Address range: 0x3cdfff - 0x3ce065
int64_t function_3cdfff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a2 + 0x7cb7217e); // 0x3cdfff
    int64_t v3; // 0x3cdfff
    int32_t v4 = v3; // 0x3cdfff
    *v2 = *v2 + v4;
    int64_t v5 = a4 - 256 * __asm_hlt() & 0xff00 | a4 & -0xff01; // 0x3ce008
    int32_t * v6 = (int32_t *)(a2 - 72); // 0x3ce00a
    *v6 = *v6 + (int32_t)v3;
    __asm_wait();
    int64_t v7 = unknown_ffffffffa111d018(); // 0x3ce012
    char v8 = *(char *)(v5 + 80); // 0x3ce017
    int32_t * v9 = (int32_t *)(v5 - 0x8fe1800); // 0x3ce01a
    int32_t v10 = *v9; // 0x3ce01a
    *v9 = v10 - v4;
    int64_t v11 = v7 & -256 | (int64_t)(v8 | (char)v7); // 0x3ce020
    if (v3 > (int64_t)v10) {
        v11 = function_3cdfbe();
    }
    uint32_t v12 = *(int32_t *)(2 * v11); // 0x3ce022
    int64_t v13 = (v11 & 0xffffffff | 0x100000000 * a3) / (int64_t)v12; // 0x3ce022
    char * v14 = (char *)(v13 & 0xffffffff); // 0x3ce025
    *v14 = *v14 - 100;
    int32_t * v15 = (int32_t *)(v3 - 0x52ffc000); // 0x3ce02c
    *v15 = *v15 + (int32_t)v3;
    char v16 = v13; // 0x3ce032
    *(char *)a1 = v16;
    char * v17 = (char *)(v3 + 20); // 0x3ce034
    *v17 = *v17 + v16;
    uint64_t v18 = v13 / 256; // 0x3ce03d
    uint64_t v19 = v18 + a4; // 0x3ce03d
    int64_t v20 = v5 & 0xffffff00; // 0x3ce03d
    int64_t result = v19 % 256 | v20; // 0x3ce03d
    int64_t v21 = v1;
    int32_t * v22 = (int32_t *)(v21 + 25 + 4 * v21); // 0x3ce03f
    int32_t v23 = v13; // 0x3ce03f
    uint32_t v24 = *v22 + v23; // 0x3ce03f
    *v22 = v24;
    if (v24 >= 1) {
        // 0x3ce045
        return (int64_t)*(int32_t *)result;
    }
    int32_t v25 = *(int32_t *)&v1; // 0x3ce04e
    int32_t v26 = v25 + v23; // 0x3ce04e
    *(int32_t *)v1 = v26;
    if (((v26 ^ v25) & (v26 ^ v23)) >= 0) {
        // 0x3ce049
        return result;
    }
    // 0x3ce052
    return (((v19 ^ 23) - v18) % 256 | v20) ^ 0xee9faede;
}

// Address range: 0x3ce0b8 - 0x3ce0bf
int64_t function_3ce0b8(int64_t a1, int64_t result) {
    int32_t * v1 = (int32_t *)(a1 - 119); // 0x3ce0b9
    int64_t v2; // 0x3ce0b8
    *v1 = *v1 + (int32_t)(int64_t)&v2;
    return result;
}

// Address range: 0x3ce0e2 - 0x3ce0e7
int64_t function_3ce0e2(int64_t a1) {
    // 0x3ce0e2
    int64_t result; // 0x3ce0e2
    return result;
}

// Address range: 0x3ce12f - 0x3ce130
int64_t function_3ce12f(void) {
    // 0x3ce12f
    int64_t result; // 0x3ce12f
    return result;
}

// Address range: 0x3ce158 - 0x3ce159
int64_t function_3ce158(int64_t a1) {
    // 0x3ce158
    int64_t result; // 0x3ce158
    return result;
}

// Address range: 0x3ce167 - 0x3ce1b8
int64_t function_3ce167(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ce167
    int64_t v1; // 0x3ce167
    bool v2; // 0x3ce167
    if (true == !v2) {
        v1 = function_3ce12f();
    }
    // 0x3ce169
    int64_t v3; // 0x3ce167
    *(char *)0x2f85fc74 = *(char *)0x2f85fc74 + (char)(v3 / 256);
    unsigned char v4 = *(char *)(a3 + a1) | (char)v1 - 120 & -31; // 0x3ce173
    int64_t v5 = v1 & -256 | (int64_t)v4; // 0x3ce173
    *(int32_t *)a1 = (int32_t)v5;
    char * v6 = (char *)(a4 + 0x793aadb5); // 0x3ce177
    *v6 = *v6 + (char)a3;
    *(int32_t *)0x1103a2a21 = *(int32_t *)0x1103a2a21 & (int32_t)v3;
    *(int32_t *)&g1 = __asm_insd((int16_t)a3);
    char * v7 = (char *)v5; // 0x3ce19b
    *v7 = *v7 - v4;
    int32_t * v8 = (int32_t *)(unknown_3d3da4bb() + 20); // 0x3ce1a2
    *v8 = *v8 - 0x1f4f41d9;
    return unknown_ffffffffce4c73ae();
}

// Address range: 0x3ce1b8 - 0x3ce1c2
int64_t function_3ce1b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ce1b8
    return function_3ce1ed();
}

// Address range: 0x3ce1c4 - 0x3ce1c8
int64_t function_3ce1c4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ce1c4
    int64_t result; // 0x3ce1c4
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3ce1c8 - 0x3ce1c9
int64_t function_3ce1c8(void) {
    // 0x3ce1c8
    int64_t result; // 0x3ce1c8
    return result;
}

// Address range: 0x3ce1db - 0x3ce1e1
int64_t function_3ce1db(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ce1db
    int64_t result; // 0x3ce1db
    char * v1 = (char *)(result + 31); // 0x3ce1db
    unsigned char v2 = *v1; // 0x3ce1db
    *v1 = v2 / 128 | 2 * v2;
    int64_t v3; // 0x3ce1db
    *(char *)a3 = *(char *)&v3 - (char)result;
    return result;
}

// Address range: 0x3ce1ea - 0x3ce1ec
int64_t function_3ce1ea(void) {
    // 0x3ce1ea
    int64_t result; // 0x3ce1ea
    return result;
}

// Address range: 0x3ce1ed - 0x3ce1f3
int64_t function_3ce1ed(void) {
    // 0x3ce1ed
    int64_t v1; // 0x3ce1ed
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(v1 - 0x497d08f2) | (char)v2);
}

// Address range: 0x3ce1f4 - 0x3ce1ff
int64_t function_3ce1f4(int64_t a1, int64_t a2) {
    // 0x3ce1f4
    int16_t v1; // 0x3ce1f4
    int64_t result = (uint16_t)v1; // 0x3ce1f4
    int32_t * v2 = (int32_t *)(result + 16); // 0x3ce1f9
    uint32_t v3 = *v2; // 0x3ce1f9
    bool v4; // 0x3ce1f4
    *v2 = v3 / 0x400000 | 1024 * (int32_t)v4 | 2048 * v3;
    return result;
}

// Address range: 0x3ce203 - 0x3ce206
int64_t function_3ce203(void) {
    // 0x3ce203
    int64_t result; // 0x3ce203
    return result;
}

// Address range: 0x3ce22e - 0x3ce250
int64_t function_3ce22e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x3ce22e
    uint32_t v3 = (int32_t)v2; // 0x3ce231
    int64_t v4; // 0x3ce22e
    if (v3 != -0x3164a0ff) {
        v4 = function_3ce1c8();
    }
    int64_t v5 = v4;
    int64_t v6 = (v5 - (v3 < 0xce9b5f01 ? 97 : 96)) % 256 | v5 & 0xffffff00; // 0x3ce239
    uint64_t v7 = v6 + 0x9a368ef; // 0x3ce23c
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v8 = (char *)(a1 + 0x3d39bea5); // 0x3ce243
    char v9 = *v8; // 0x3ce243
    *v8 = v9 + (char)((int32_t)v6 > 0xf65c9710) - (char)(v1 / 256);
    int32_t * v10 = (int32_t *)(a2 + 43); // 0x3ce249
    *v10 = *v10 + (int32_t)a1;
    *(char *)v1 = *(char *)&v1 + (char)(v7 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)v2;
    return v7 & 0xffffffff;
}

// Address range: 0x3ce281 - 0x3ce284
int64_t function_3ce281(void) {
    // 0x3ce281
    int64_t result; // 0x3ce281
    return result;
}

// Address range: 0x3ce33d - 0x3ce342
int64_t function_3ce33d(void) {
    // 0x3ce33d
    return function_ffffffffc2600bf8();
}

// Address range: 0x3ce348 - 0x3ce34b
int64_t function_3ce348(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ce348
    int64_t result; // 0x3ce348
    return result;
}

// Address range: 0x3ce37c - 0x3ce39d
int64_t function_3ce37c(int64_t a1) {
    // 0x3ce37c
    int64_t v1; // 0x3ce37c
    int32_t * v2 = (int32_t *)(v1 + 0x33ff342e); // 0x3ce394
    *v2 = *v2 + (int32_t)a1;
    __asm_sti();
    int64_t v3; // 0x3ce37c
    return (int64_t)&v3;
}

// Address range: 0x3ce39d - 0x3ce3a5
int64_t function_3ce39d(int64_t a1) {
    // 0x3ce39d
    int64_t result; // 0x3ce39d
    char * v1 = (char *)(2 * a1 + 0x6a0f013d + result); // 0x3ce39d
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x3ce3c2 - 0x3ce44e
int64_t function_3ce3c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ce3c2
    int64_t result; // 0x3ce3c2
    char * v1 = (char *)(result - 2); // 0x3ce3c2
    *v1 = *v1 + (char)a3;
    if (*(int32_t *)(a1 + 0x169a7f15) <= (int32_t)result) {
        // 0x3ce423
        return result;
    }
    int32_t * v2 = (int32_t *)(a5 - 0x24fdeffc); // 0x3ce43f
    int32_t v3 = a5; // 0x3ce43f
    *v2 = *v2 + v3;
    return 0x10000 * v3 >> 16;
}

// Address range: 0x3ce44f - 0x3ce468
int64_t function_3ce44f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ce44f
    int64_t result; // 0x3ce44f
    bool v1; // 0x3ce44f
    if (v1 || v1) {
        // 0x3ce451
        return result & 0xffffffff;
    }
    int32_t * v2 = (int32_t *)(a1 - 0x47d0f154); // 0x3ce462
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x3ce478 - 0x3ce480
int64_t function_3ce478(void) {
    char v1 = *(char *)0x38d237f; // 0x3ce478
    int64_t result; // 0x3ce478
    *(char *)0x38d237f = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x3ce499 - 0x3ce4a6
int64_t function_3ce499(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ce499
    return function_3ce4af(a1, a2, a3, a1, (int64_t)&g4);
}

// Address range: 0x3ce4a6 - 0x3ce4af
int64_t function_3ce4a6(void) {
    // 0x3ce4a6
    int64_t v1; // 0x3ce4a6
    int64_t result = v1;
    *(char *)result = (char)result;
    return result;
}

// Address range: 0x3ce4af - 0x3ce4d3
int64_t function_3ce4af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ce4af
    __asm_in((int16_t)a3);
    int64_t v1 = unknown_1b3e3cba() & 0x54617cc4 | 0xab9e833b; // 0x3ce4be
    __asm_out_133(2, (int32_t)v1);
    return v1 + 154 & 221 | v1 & 0xffffff00;
}

// Address range: 0x3ce516 - 0x3ce517
int64_t function_3ce516(int64_t a1) {
    // 0x3ce516
    int64_t result; // 0x3ce516
    return result;
}

// Address range: 0x3ce564 - 0x3ce566
int64_t function_3ce564(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ce564
    int64_t v1; // 0x3ce564
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x3ce578 - 0x3ce57b
int64_t function_3ce578(void) {
    // 0x3ce578
    int64_t result; // 0x3ce578
    return result;
}

// Address range: 0x3ce5b0 - 0x3ce5b4
int64_t function_3ce5b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ce5b0
    int64_t result; // 0x3ce5b0
    uint32_t v1 = (int32_t)result;
    bool v2; // 0x3ce5b0
    *(int32_t *)a4 = v1 / 0x80000 | 0x4000 * v1 | 0x2000 * (int32_t)v2;
    return result;
}

// Address range: 0x3ce5b6 - 0x3ce5cc
int64_t function_3ce5b6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ce5b6
    int64_t v1; // 0x3ce5b6
    int64_t v2 = v1;
    unsigned char v3 = (char)v1;
    *(char *)a3 = v3 / 128 | 2 * v3;
    char * v4 = (char *)(a1 - 0xd10f812); // 0x3ce5bd
    *v4 = *v4 | (char)v2;
    *(int32_t *)v1 = (int32_t)a2;
    return (v2 + 200) % 256 | v2 & -256;
}

// Address range: 0x3ce5ed - 0x3ce5f7
int64_t function_3ce5ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ce5ed
    return unknown_ffffffffacda89f5(a1, a2, a3, a4);
}

// Address range: 0x3ffad1 - 0x3ffb42
int64_t function_3ffad1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = *(char *)(a4 + 95) & (char)(a4 / 256); // 0x3ffad1
    int64_t v2 = 256 * (int64_t)v1 | a4 & -0xff01; // 0x3ffad1
    int64_t result; // 0x3ffad1
    if (v2 != 1) {
        result = function_3ffa6b();
    }
    // 0x3ffad6
    if (v1 != 0) {
        // 0x3ffad8
        return result;
    }
    // 0x3ffb39
    bool v3; // 0x3ffad1
    int64_t v4 = v3 ? -1 : 1; // 0x3ffb39
    int64_t v5 = v4 + a1; // 0x3ffb39
    int16_t v6 = a3; // 0x3ffb3a
    int32_t v7 = __asm_insd(v6); // 0x3ffb3a
    int32_t * v8 = (int32_t *)v5; // 0x3ffb3a
    *v8 = v7;
    if (*(char *)a1 <= (char)result) {
        // 0x3ffb3d
        return function_4b08175d();
    }
    // 0x3ffb1a
    int64_t v9; // 0x3ffad1
    char * v10 = (char *)(v9 + 43);
    int32_t * v11 = (int32_t *)(v2 + 81);
    int64_t v12 = __asm_sti(); // 0x3ffb1a
    uint32_t v13 = *(int32_t *)v12; // 0x3ffb1b
    char v14 = *v10; // 0x3ffb1d
    char v15 = v12;
    char v16 = v13 < (int32_t)v9; // 0x3ffb1d
    char v17 = v14 + v15; // 0x3ffb1d
    char v18 = v17 + v16; // 0x3ffb1d
    char v19 = v18 + v16; // 0x3ffb1d
    *v10 = v18;
    int32_t * v20 = v8; // 0x3ffb20
    int64_t result2 = v12; // 0x3ffb20
    char v21 = v15; // 0x3ffb20
    char v22 = v15; // 0x3ffb20
    if (((v19 ^ v14) & (v19 ^ v15)) < 0) {
      lab_0x3ffb22:
        // 0x3ffb22
        *v20 = __asm_insd(v6);
        char * v23 = (char *)(v2 + 28); // 0x3ffb25
        *v23 = *v23 + v21;
        return result2;
    }
    int64_t v24 = v5;
    unsigned char v25 = v14;
    bool v26 = v13 < (int32_t)v9 ? v18 <= v25 : v17 < v25; // 0x3ffb1d
    *v11 = (int32_t)v26 + (int32_t)v9 + *v11;
    int64_t v27; // 0x3ffad1
    int64_t v28 = v27 - 8; // 0x3ffb32
    *(int64_t *)v28 = a2;
    int64_t v29 = v24 + v4; // 0x3ffb39
    int32_t v30 = __asm_insd(v6); // 0x3ffb3a
    int32_t * v31 = (int32_t *)v29; // 0x3ffb3a
    *v31 = v30;
    while (*(char *)v24 > v22 + 117) {
        int64_t v32 = __asm_sti(); // 0x3ffb1a
        uint32_t v33 = *(int32_t *)v32; // 0x3ffb1b
        char v34 = *v10; // 0x3ffb1d
        v22 = v32;
        char v35 = v33 < (int32_t)v28; // 0x3ffb1d
        char v36 = v34 + v22; // 0x3ffb1d
        char v37 = v36 + v35; // 0x3ffb1d
        char v38 = v37 + v35; // 0x3ffb1d
        *v10 = v37;
        v20 = v31;
        result2 = v32;
        v21 = v22;
        if (((v38 ^ v34) & (v38 ^ v22)) < 0) {
            goto lab_0x3ffb22;
        }
        v24 = v29;
        v25 = v34;
        v26 = v33 < (int32_t)v28 ? v37 <= v25 : v36 < v25;
        *v11 = (int32_t)v26 + (int32_t)v9 + *v11;
        v28 -= 8;
        *(int64_t *)v28 = a2;
        v29 = v24 + v4;
        v30 = __asm_insd(v6);
        v31 = (int32_t *)v29;
        *v31 = v30;
    }
    // 0x3ffb3d
    return function_4b08175d();
}

// Address range: 0x3ffb58 - 0x3ffb59
int64_t function_3ffb58(void) {
    // 0x3ffb58
    int64_t result; // 0x3ffb58
    return result;
}

// Address range: 0x3ffb75 - 0x3ffb76
int64_t function_3ffb75(int64_t a1) {
    // 0x3ffb75
    int64_t result; // 0x3ffb75
    return result;
}

// Address range: 0x3ffbb9 - 0x3ffbd0
int64_t function_3ffbb9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x3ffbb9
    bool v4; // 0x3ffbb9
    if (v4 || v4) {
        v3 = function_3ffb58();
    }
    uint64_t v5 = v3;
    char v6 = *(char *)(a3 - 43); // 0x3ffbbb
    *(char *)0x7ba9ad64 = *(char *)0x7ba9ad64 & (char)(a4 / 256);
    *(char *)a1 = (char)(a4 ^ a1);
    int16_t v7 = a3; // 0x3ffbc6
    *(char *)v2 = __asm_insb(v7);
    int64_t v8 = a4; // 0x3ffbc7
    unsigned char v9; // 0x3ffbcc
    if (a4 == 0) {
        // ._crit_edge
        *(char *)v2 = *(char *)&v2 + 1;
        v9 = *(char *)&v1;
        return 256 * (int64_t)(v6 + (char)v4 + (char)(v5 / 256)) | v5 & -0x10000 | (int64_t)v9;
    }
    *(int32_t *)v2 = __asm_insd(v7);
    v8--;
    while (v8 != 0) {
        // .lr.ph
        *(int32_t *)v2 = __asm_insd(v7);
        v8--;
    }
    // ._crit_edge
    *(char *)v2 = *(char *)&v2 + 1;
    v9 = *(char *)&v1;
    return 256 * (int64_t)(v6 + (char)v4 + (char)(v5 / 256)) | v5 & -0x10000 | (int64_t)v9;
}

// Address range: 0x3ffc16 - 0x3ffd6d
int64_t function_3ffc16(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 + 10); // 0x3ffc16
    *v2 = *v2 ^ (int32_t)a3;
    int64_t v3; // 0x3ffc16
    uint32_t v4 = (int32_t)v3; // 0x3ffc19
    uint32_t result = v4 + 0x5d40f90a; // 0x3ffc19
    if (llvm_ctpop_i8((char)result) % 2 != 0) {
        // 0x3ffc20
        *(char *)a1 = *(char *)&v1;
        return result;
    }
    uint64_t v5 = (int64_t)__asm_in_134(-92); // 0x3ffc51
    int16_t v6 = a3; // 0x3ffcd6
    char v7 = *(char *)&v1;
    __asm_outsb(v6, v7);
    *(char *)v1 = v7 | (char)a3;
    uint64_t v8 = ((a4 - a3 / 256 + (int64_t)(v4 < 0xa2bf06f6)) % 256 | a4 & -256) - 1; // 0x3ffcda
    if (v8 == 0) {
        // 0x3ffcdc
        *(int32_t *)a5 = __asm_insd(v6);
        *(char *)a5 = __asm_insb(v6);
        return (v5 + 175) % 256 | v5 & -256;
    }
    char * v9 = (char *)(v5 + 104); // 0x3ffcfa
    char v10 = *v9 + (char)(v8 / 256); // 0x3ffcfa
    *v9 = v10;
    unsigned char v11 = *(char *)(v5 % 256 + v3); // 0x3ffcfd
    int64_t result2 = __asm_int3(a5); // 0x3ffd01
    if (v10 == 0 || (v5 & 0xffff0000 || (int64_t)(int32_t)&g2 || (int64_t)v11) == 1) {
        int32_t * v12 = (int32_t *)(result2 + 15); // 0x3ffd04
        *v12 = *v12 & (int32_t)v3;
        return result2;
    }
    int32_t * v13 = (int32_t *)a5; // 0x3ffd66
    uint32_t v14 = *v13; // 0x3ffd66
    *v13 = v14 / 0x1000 | 0x100000 * v14;
    return result2;
}

// Address range: 0x3ffd79 - 0x3ffd85
int64_t function_3ffd79(int64_t a1) {
    // 0x3ffd79
    int64_t result; // 0x3ffd79
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x3ffd99 - 0x3ffd9a
int64_t function_3ffd99(void) {
    // 0x3ffd99
    int64_t result; // 0x3ffd99
    return result;
}

// Address range: 0x3ffe01 - 0x3ffe03
int64_t function_3ffe01(void) {
    // 0x3ffe01
    return function_3ffd99();
}

// Address range: 0x3ffe84 - 0x3ffe91
int64_t function_3ffe84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x3ffe84
    int64_t result = v2 & -256 | 58; // 0x3ffe84
    int32_t * v3 = (int32_t *)(a6 + 0x1663cb23); // 0x3ffe86
    int32_t v4 = *v3; // 0x3ffe86
    int32_t v5 = v2; // 0x3ffe86
    int32_t v6 = v4 + v5; // 0x3ffe86
    *v3 = v6;
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        // 0x3ffe94
        return result;
    }
    // 0x3ffe90
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x3ffee5 - 0x3ffee8
int64_t function_3ffee5(void) {
    // 0x3ffee5
    int64_t result; // 0x3ffee5
    return result;
}

// Address range: 0x3fff24 - 0x400084
int64_t function_3fff24(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    bool v2; // 0x3fff24
    if (v2 || v2) {
        // 0x3fff26
        int64_t result; // 0x3fff24
        return result;
    }
    // 0x3fff9e
    int64_t v3; // 0x3fff24
    char v4 = v3; // 0x3fff9e
    char v5 = v4 + 22; // 0x3fff9e
    int64_t result2 = unknown_70af90ba(); // 0x3fffa0
    if (v5 < 0 == (v5 & (v4 ^ -128)) < 0) {
        // 0x3fffb3
        *(int64_t *)0x514aa0638505bde5 = a3;
        float80_t v6; // 0x3fff24
        *(int16_t *)(a4 + 0x5a0019b2) = (int16_t)v6;
        char * v7 = (char *)(v3 + 116); // 0x3fffba
        *v7 = *v7 ^ (char)(a3 / 256);
        return result2;
    }
    int16_t v8 = a3; // 0x400006
    __asm_outsd(v8, (int32_t)a2);
    *(int32_t *)a1 = __asm_insd(v8);
    unsigned char v9 = *(char *)(v1 + result2); // 0x40000d
    if (llvm_ctpop_i8(v9 - 127) % 2 == 0) {
        // 0x400082
        __asm_out_135(87, (char)result2);
        return result2;
    }
    int32_t * v10 = (int32_t *)(a3 - 0x7ebade4a); // 0x400020
    *v10 = *v10 & -0x521b9283;
    *(int32_t *)0x49f1223dbfafa024 = (int32_t)result2 + 0x52332dc + (int32_t)(v9 < 127);
    *(int64_t *)0x514aa0638505bde5 = a4;
    *(int32_t *)a4 = 0;
    __asm_outsb(v8, *(char *)&v1);
    // 0x3fff26
    return 0xe43b420b;
}

// Address range: 0x4002d1 - 0x4002d2
int64_t function_4002d1(void) {
    // 0x4002d1
    int64_t result; // 0x4002d1
    return result;
}

// Address range: 0x4002da - 0x4002dd
int64_t function_4002da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4002da
    int64_t result; // 0x4002da
    return result;
}

// Address range: 0x400304 - 0x400306
int64_t function_400304(void) {
    // 0x400304
    int64_t v1; // 0x400304
    __asm_out_133((char)v1, (int32_t)v1);
    return (int64_t)&g4;
}

// Address range: 0x400330 - 0x400331
int64_t function_400330(void) {
    // 0x400330
    return __asm_sti();
}

// Address range: 0x400331 - 0x400337
int64_t function_400331(int64_t a1, int64_t a2) {
    // 0x400331
    int64_t v1; // 0x400331
    bool v2; // 0x400331
    *(int32_t *)((v2 ? -4 : 4) + a1) = (int32_t)v1;
    int64_t result = v1 | 225; // 0x400333
    __asm_out_133((char)a1, (int32_t)result);
    return result;
}

// Address range: 0x400338 - 0x4003bc
int64_t function_400338(int64_t a1, int64_t a2, int64_t a3) {
    // 0x400338
    int64_t v1; // 0x400338
    *(int64_t *)v1 = a2;
    return a3 & 0xffffff00 | 105;
}

// Address range: 0x400489 - 0x40048b
int64_t function_400489(int64_t a1) {
    // 0x400489
    int64_t result; // 0x400489
    return result;
}

// Address range: 0x400495 - 0x4004bf
int64_t function_400495(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x400495
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x400495
    uint64_t v2 = (v1 & 0xffffffff) * (int64_t)*(int32_t *)&v1; // 0x400498
    int64_t v3 = v2 & 0xffffffff; // 0x400498
    char * v4 = (char *)(v3 - 33); // 0x40049f
    *v4 = *v4 | (char)(a4 / 256);
    int32_t * v5 = (int32_t *)(v3 + 48); // 0x4004a2
    *v5 = *v5 - (int32_t)a4;
    char * v6 = (char *)(v2 / 0x100000000); // 0x4004a9
    int64_t v7; // 0x400495
    *v6 = *v6 | (char)v7;
    int64_t v8; // 0x400495
    return (int64_t)((*(int32_t *)&v8 | 0x72bc382f) - 0x16f3c5b);
}
