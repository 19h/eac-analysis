/*
 * Targeted RetDec C for native executable gap queue batch 598.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3ac015-0x3ac215 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ac215-0x3ac415 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ac415-0x3ac615 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ac615-0x3ac815 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ce5ff-0x3ce7ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ce7ff-0x3ce9ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ce9ff-0x3cebff rank=- name=- kind=- bytes=- uncovered=-
 *   0x441467-0x441667 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_225b6bc();
int64_t function_3ac015(int64_t a1, int64_t a2);
int64_t function_3ac043(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ac185(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ac2b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ac3f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ac578(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ac696(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ce5ff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3ce644(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ce6cd(void);
int64_t function_3ce6ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ce713(int64_t a1);
int64_t function_3ce729(void);
int64_t function_3ce742(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ce74b(int64_t a1);
int64_t function_3ce760(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ce7f0(void);
int64_t function_3ce832(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ce857(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_3ce92d(int64_t a1);
int64_t function_3ce98f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ce9ac(int64_t a1);
int64_t function_3ceaa2(int64_t a1);
int64_t function_3ceb03(int64_t a1);
int64_t function_3ceb6f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_441467(void);
int64_t function_441474(void);
int64_t function_4414a8(void);
int64_t function_4414aa(void);
int64_t function_4414b2(int64_t a1);
int64_t function_4414dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44151b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4415c5(void);
int64_t function_4415cb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_441627(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5c479df5();
int64_t function_c823b();
int64_t unknown_1cd2d5d();
int64_t unknown_224e77e();
int64_t unknown_2ad2ca1b();
int64_t unknown_32836651();
int64_t unknown_5330c9fb();
int64_t unknown_71b37566();
int64_t unknown_ffffffff8ba2cebe();
int64_t unknown_ffffffffb47a2060();
int64_t unknown_ffffffffb4ca2432();

// Address range: 0x3ac015 - 0x3ac043
int64_t function_3ac015(int64_t a1, int64_t a2) {
    // 0x3ac015
    int64_t v1; // 0x3ac015
    return function_c823b(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x3ac043 - 0x3ac185
int64_t function_3ac043(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ac043
    return function_c823b(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3ac185 - 0x3ac2b6
int64_t function_3ac185(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ac185
    int64_t v1; // bp-32, 0x3ac185
    int64_t v2 = (int64_t)&v1; // 0x3ac1d9
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x3ac1ee
    int64_t * v4 = (int64_t *)v3; // 0x3ac1ef
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3ac1fa
    *v5 = a4;
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x3ac21a
    *v4 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x3ac230
    int64_t v8 = *v7; // 0x3ac230
    *v4 = v8;
    *v5 = 0x2b62c0c2;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x3ac256
    *v9 = v6;
    v1 = *v5;
    *v5 = 0x35c94f9;
    *v9 = v8;
    *v7 = *v5;
    *v5 = *v4;
    int64_t * v10 = (int64_t *)(v2 - 24); // 0x3ac27a
    *v10 = v3;
    int64_t v11 = *v4; // 0x3ac295
    *v5 = v11;
    *v10 = v11;
    int64_t v12; // 0x3ac185
    return function_c823b(a1, a2, a3, a4, a5, v12);
}

// Address range: 0x3ac2b6 - 0x3ac3f5
int64_t function_3ac2b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ac2b6
    int64_t v1; // bp-48, 0x3ac2b6
    int64_t v2 = (int64_t)&v1; // 0x3ac346
    int64_t v3 = v2 + 16; // 0x3ac34d
    v1 = v3;
    int64_t v4 = v2 + 32; // 0x3ac35c
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x3ac35c
    v1 = a6;
    int64_t v6 = v2 + 24; // 0x3ac382
    *(int64_t *)v6 = a6;
    *v5 = 0x4a5a335;
    *(int64_t *)(v2 - 8) = *(int64_t *)v4;
    *(int64_t *)(v2 + 40) = *v5;
    *v5 = v6;
    *(int64_t *)v3 = v4;
    int64_t v7; // 0x3ac2b6
    return function_c823b(a1, a2, a3, a4, a5, v7);
}

// Address range: 0x3ac3f5 - 0x3ac578
int64_t function_3ac3f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ac3f5
    int64_t v1; // bp-56, 0x3ac3f5
    v1 = (int64_t)&v1;
    int64_t v2; // bp-48, 0x3ac3f5
    int64_t v3 = (int64_t)&v2; // 0x3ac527
    v2 = v3;
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x3ac530
    *v4 = 0x3aac35;
    *(int64_t *)(v3 + 32) = v2;
    int64_t v5 = v3 + 8; // 0x3ac533
    int64_t * v6 = (int64_t *)v5; // 0x3ac537
    v2 = *v6;
    *v4 = v5;
    int64_t v7 = *v6; // 0x3ac55d
    v2 = v7;
    *v4 = v7;
    int64_t v8; // 0x3ac3f5
    return function_c823b(a1, a2, a3, a4, v8, v8);
}

// Address range: 0x3ac578 - 0x3ac696
int64_t function_3ac578(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x2fcee3b5; // bp-40, 0x3ac5e1
    int64_t v2 = (int64_t)&v1; // 0x3ac62d
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3ac635
    *v3 = 0x369585e;
    bool v4; // 0x3ac578
    *(int64_t *)(v2 - 24) = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x3ac645
    *v5 = *v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x3ac64d
    *v6 = a5;
    *v3 = 0x3aaec2;
    *(int64_t *)(v2 + 24) = 0x3aaec2;
    *v3 = v1;
    *v6 = v1;
    int64_t v7 = *v5; // 0x3ac67b
    v1 = v7;
    *v3 = v7;
    int64_t v8; // 0x3ac578
    return function_c823b(a1, a2, a3, a4, *v6, v8);
}

// Address range: 0x3ac696 - 0x3ac815
int64_t function_3ac696(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5; // bp-40, 0x3ac71c
    int64_t v2 = (int64_t)&v1; // 0x3ac729
    int64_t v3 = *(int64_t *)(v2 + 24); // 0x3ac75c
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x3ac764
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3ac76d
    int64_t v6 = v2 + 8; // 0x3ac786
    *v4 = 0x33833422;
    *v5 = a5;
    int64_t * v7 = (int64_t *)v6; // 0x3ac7a7
    *v7 = *v4;
    *v4 = a1;
    *v5 = v3;
    *(int64_t *)(v2 + 32) = v3;
    int64_t v8 = *v4; // 0x3ac7c2
    *v5 = v8;
    *v4 = v6;
    int64_t v9 = *v7; // 0x3ac7f7
    v1 = v9;
    *v4 = v9;
    int64_t v10; // 0x3ac696
    return function_c823b(v8, a2, a3, a4, v10, v10);
}

// Address range: 0x3ce5ff - 0x3ce61a
int64_t function_3ce5ff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 109); // 0x3ce5ff
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x3ce5ff
    char * v3 = (char *)(v2 + 0x1e80005); // 0x3ce607
    unsigned char v4 = *v3; // 0x3ce607
    unsigned char v5 = v4 + (char)v2; // 0x3ce607
    *v3 = v5;
    int64_t result = v2 - (v5 < v4 ? 0x88e7fbb9 : 0x88e7fbb8) & 0xffffffff; // 0x3ce60d
    char * v6 = (char *)(a2 + 0x1e8a9d1); // 0x3ce612
    *v6 = *v6 + (char)a4;
    *(char *)result = (char)(a4 / 256);
    return result;
}

// Address range: 0x3ce644 - 0x3ce662
int64_t function_3ce644(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x381cb421); // 0x3ce64e
    int64_t v2; // 0x3ce644
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(-71 * *(int64_t *)(a2 - 0x241c2a2b) - 121); // 0x3ce654
    *v3 = *v3 + (char)v2;
    return unknown_ffffffffb47a2060() & -107;
}

// Address range: 0x3ce6cd - 0x3ce6ce
int64_t function_3ce6cd(void) {
    // 0x3ce6cd
    int64_t result; // 0x3ce6cd
    return result;
}

// Address range: 0x3ce6ce - 0x3ce6ef
int64_t function_3ce6ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_224e77e(); // 0x3ce6ce
    *(int32_t *)v1 = (int32_t)v1;
    char v2 = *(char *)0x1e656660; // 0x3ce6d9
    int32_t * v3 = (int32_t *)(a1 + 0x28198c + 4 * a2); // 0x3ce6e1
    int32_t v4 = *v3; // 0x3ce6e1
    *v3 = v4 + (int32_t)(256 * (int64_t)(v2 ^ (char)(v1 / 256)) | v1 & 0xffff00ff);
    __asm_int1();
    return __asm_int1();
}

// Address range: 0x3ce713 - 0x3ce714
int64_t function_3ce713(int64_t a1) {
    // 0x3ce713
    int64_t result; // 0x3ce713
    return result;
}

// Address range: 0x3ce729 - 0x3ce72a
int64_t function_3ce729(void) {
    // 0x3ce729
    int64_t result; // 0x3ce729
    return result;
}

// Address range: 0x3ce742 - 0x3ce749
int64_t function_3ce742(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ce742
    int64_t result; // 0x3ce742
    *(char *)a1 = (char)(result | result);
    return result;
}

// Address range: 0x3ce74b - 0x3ce75a
int64_t function_3ce74b(int64_t a1) {
    // 0x3ce74b
    unknown_32836651();
    return function_225b6bc();
}

// Address range: 0x3ce760 - 0x3ce7e7
int64_t function_3ce760(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ce760
    int64_t result; // 0x3ce760
    bool v1; // 0x3ce760
    if (v1) {
        // 0x3ce773
        return result;
    }
    // 0x3ce76a
    *(char *)a1 = -1 - (char)a1;
    int64_t v2; // 0x3ce760
    if (llvm_ctpop_i8(2 * (char)v2 + (char)v1) % 2 != 0) {
        result = function_3ce729();
    }
    // 0x3ce773
    return result;
}

// Address range: 0x3ce7f0 - 0x3ce7f1
int64_t function_3ce7f0(void) {
    // 0x3ce7f0
    int64_t result; // 0x3ce7f0
    return result;
}

// Address range: 0x3ce832 - 0x3ce842
int64_t function_3ce832(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ce832
    int64_t result; // 0x3ce832
    bool v1; // 0x3ce832
    if (!v1) {
        result = function_3ce7f0();
    }
    // 0x3ce83a
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3ce857 - 0x3ce92a
int64_t function_3ce857(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    unknown_1cd2d5d();
    int64_t v3; // 0x3ce857
    int32_t v4 = (int32_t)v3 + (int32_t)a2; // 0x3ce85e
    int64_t result = unknown_71b37566(); // 0x3ce860
    int64_t * v5 = (int64_t *)(v3 - 24); // 0x3ce86a
    *v5 = *v5 + v3;
    int32_t v6 = *(int32_t *)&v1; // 0x3ce86e
    int32_t v7 = v6 + v4; // 0x3ce86e
    *(int32_t *)a4 = v7;
    if (v7 < 0 == ((v7 ^ v6) & (v7 ^ v4)) < 0 == (v7 != 0)) {
        // 0x3ce87f
        return result;
    }
    int64_t result2 = result & -256 | (int64_t)*(char *)0x3af352c9cb01e8eb; // 0x3ce873
    if (v7 != 0) {
        // 0x3ce87f
        return result2;
    }
    int32_t * v8 = (int32_t *)(v1 - 14); // 0x3ce8d8
    *v8 = *v8 + (int32_t)v2;
    uint64_t v9 = v1; // 0x3ce8db
    char v10 = *(char *)&v2; // 0x3ce8db
    v1 = 256 * (int64_t)(v10 & (char)(v9 / 256)) | v9 & -0xff01;
    if ((a5 & 4) != 0) {
        char * v11 = (char *)a3; // 0x3ce8e4
        *v11 = *v11 + (char)(*(int32_t *)(result2 - 49) / 256);
        char * v12 = (char *)(v1 - 0x6bd5d6a7); // 0x3ce8ec
        *v12 = *v12 - (char)(a3 / 256);
        char * v13 = (char *)v2; // 0x3ce8f3
        *v13 = *v13 & (char)(a6 / 256);
        return unknown_5330c9fb();
    }
    int32_t v14 = a6; // 0x3ce8ff
    *(int32_t *)a1 = v14;
    uint64_t v15 = v2;
    int32_t v16 = (int32_t)v1 + v14; // 0x3ce907
    v1 = v16;
    *(char *)v15 = (char)a3;
    if (v16 < 0) {
        // 0x3ce8b3
        v2 = a7;
        int64_t result3 = unknown_ffffffff8ba2cebe(); // 0x3ce8b8
        char * v17 = (char *)result3; // 0x3ce8c0
        *v17 = *v17 - 102;
        return result3;
    }
    int64_t v18 = ((a5 & (int64_t)&g1) == 0 ? 4 : 0xfffffffc) + a1 + v15; // 0x3ce900
    int64_t v19 = v1 & -0xff01 | (int64_t)&g4; // 0x3ce913
    v1 = v19;
    int64_t v20 = unknown_2ad2ca1b((int32_t)v18, v2 & 0xffffffff, v15 % 256 | a3 & -256, v19); // 0x3ce915
    uint32_t v21 = (int32_t)v19 % 32; // 0x3ce922
    if (v21 != 0) {
        int32_t * v22 = (int32_t *)(v19 - 0x799bfe18);
        *v22 = *v22 >> v21;
    }
    int64_t v23 = ((v20 + 223) % 256 | v20 & 0xffffff00) + 0x147d7ec; // 0x3ce91d
    *(int32_t *)(v18 & 0xffffffff) = (int32_t)v23;
    return v23 & 0xffffffff;
}

// Address range: 0x3ce92d - 0x3ce930
int64_t function_3ce92d(int64_t a1) {
    // 0x3ce92d
    int64_t result; // 0x3ce92d
    return result;
}

// Address range: 0x3ce98f - 0x3ce9a2
int64_t function_3ce98f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = __asm_in(-61); // 0x3ce996
    int64_t v2; // 0x3ce98f
    *(char *)a3 = (char)v2 + (char)((uint64_t)v2 / 256);
    int64_t v3; // 0x3ce98f
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a5;
    return v2 & -256 | (int64_t)v1;
}

// Address range: 0x3ce9ac - 0x3cea31
int64_t function_3ce9ac(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 106); // 0x3ce9ac
    int64_t v2; // 0x3ce9ac
    *v1 = *v1 + (int32_t)v2;
    *(char *)a1 = ((char)v2 | -4) + (char)v2;
    bool v3; // 0x3ce9ac
    return unknown_ffffffffb4ca2432((v3 ? -1 : 1) + a1);
}

// Address range: 0x3ceaa2 - 0x3ceaa3
int64_t function_3ceaa2(int64_t a1) {
    // 0x3ceaa2
    int64_t result; // 0x3ceaa2
    return result;
}

// Address range: 0x3ceb03 - 0x3ceb04
int64_t function_3ceb03(int64_t a1) {
    // 0x3ceb03
    int64_t result; // 0x3ceb03
    return result;
}

// Address range: 0x3ceb6f - 0x3ceb72
int64_t function_3ceb6f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ceb6f
    int64_t result; // 0x3ceb6f
    return result;
}

// Address range: 0x441467 - 0x441468
int64_t function_441467(void) {
    // 0x441467
    int64_t result; // 0x441467
    return result;
}

// Address range: 0x441474 - 0x441477
int64_t function_441474(void) {
    // 0x441474
    int64_t result; // 0x441474
    return result;
}

// Address range: 0x4414a8 - 0x4414aa
int64_t function_4414a8(void) {
    // 0x4414a8
    int64_t result; // 0x4414a8
    return result;
}

// Address range: 0x4414aa - 0x4414ae
int64_t function_4414aa(void) {
    // 0x4414aa
    __asm_int(52);
    int64_t result; // 0x4414aa
    return result;
}

// Address range: 0x4414b2 - 0x4414b5
int64_t function_4414b2(int64_t a1) {
    // 0x4414b2
    int64_t result; // 0x4414b2
    return result;
}

// Address range: 0x4414dc - 0x4414f2
int64_t function_4414dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4414dc
    int64_t v1; // 0x4414dc
    bool v2; // 0x4414dc
    return v1 & -256 | (int64_t)(*(char *)0x12b45fff + 108 + (char)v2);
}

// Address range: 0x44151b - 0x4415b0
int64_t function_44151b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x44151b
    char * v2 = (char *)(result - 106); // 0x441568
    *v2 = *v2 + (char)result;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v3 = (int32_t)a4 % 32; // 0x441572
    if (v3 != 0) {
        uint32_t v4 = *(int32_t *)&v1; // 0x441572
        *(int32_t *)v1 = v4 >> 32 - v3 | v4 << v3;
    }
    // 0x44151d
    return result;
}

// Address range: 0x4415c5 - 0x4415c8
int64_t function_4415c5(void) {
    // 0x4415c5
    int64_t result; // 0x4415c5
    return result;
}

// Address range: 0x4415cb - 0x4415d7
int64_t function_4415cb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4415cb
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x4415cb
    int32_t * v2 = (int32_t *)(v1 + 8 * a1); // 0x4415cc
    uint32_t v3 = *v2; // 0x4415cc
    bool v4; // 0x4415cb
    *v2 = 2048 * v3 | 1024 * (int32_t)v4 | v3 / 0x400000;
    return function_5c479df5();
}

// Address range: 0x441627 - 0x44162f
int64_t function_441627(int64_t a1, int64_t a2, int64_t a3) {
    // 0x441627
    int64_t result; // 0x441627
    return result;
}
