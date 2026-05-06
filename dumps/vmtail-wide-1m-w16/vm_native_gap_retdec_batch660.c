/*
 * Targeted RetDec C for native executable gap queue batch 660.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3a3139-0x3a3339 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a3339-0x3a3539 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a3539-0x3a3739 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a3939-0x3a3b39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x476aee-0x476cee rank=- name=- kind=- bytes=- uncovered=-
 *   0x476cee-0x476eee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4770ee-0x4772ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4772ee-0x4774ee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_177ecef();
int64_t function_25577924();
int64_t function_3a30f6();
int64_t function_3a3119();
int64_t function_3a3139(void);
int64_t function_3a313c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a315d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3a3190(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3199(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a31a7(int64_t a1);
int64_t function_3a31e1(int64_t a1, int64_t a2);
int64_t function_3a3297(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3a32b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a335b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a337a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3a33cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a33eb(void);
int64_t function_3a33f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3429(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3a34c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a350b(void);
int64_t function_3a352f(void);
int64_t function_3a354a(void);
int64_t function_3a3591(void);
int64_t function_3a3594(int64_t a1, int64_t a2);
int64_t function_3a35a6(int64_t a1, int64_t a2);
int64_t function_3a35d9(int64_t a1);
int64_t function_3a35f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a3689(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a368b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_3a36f3(void);
int64_t function_3a370f(int64_t a1);
int64_t function_3a372a(void);
int64_t function_3a3939(void);
int64_t function_3a393b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a396b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a39a6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3a39c7(void);
int64_t function_3a39d9(void);
int64_t function_3a39ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3a7e(int64_t a1, int64_t a2);
int64_t function_403b6ffe();
int64_t function_476aee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_476af8(int64_t a1);
int64_t function_476c22(void);
int64_t function_476c46(int64_t a1);
int64_t function_476c77(void);
int64_t function_476cb9(void);
int64_t function_476d10(void);
int64_t function_476d63(void);
int64_t function_476d88(int64_t a1);
int64_t function_476ddd(int64_t a1);
int64_t function_476e0e(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4770ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_477114(int64_t a1);
int64_t function_47713c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4771f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_477222(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47723a(int64_t a1);
int64_t function_47727a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47731c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47739d(void);
int64_t function_4773b5(void);
int64_t function_4773ce(void);
int64_t function_47741d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47742e(void);
int64_t function_4774ae(int64_t a1);
int64_t function_4774e9(void);
int64_t function_83b705c();
int64_t function_a6dc89();
int64_t function_ffffffff933fb40f();
int64_t function_ffffffffae5fb053();
int64_t function_ffffffffe914a6ab();
int64_t function_ffffffffff5e35ed();
int64_t unknown_d4e22d();
int64_t unknown_ffffffff95191675();
int64_t unknown_ffffffffd325c11a();
int64_t unknown_fffffffff2702ec1();
int64_t unknown_fffffffff3614919();

// Address range: 0x3a3139 - 0x3a313a
int64_t function_3a3139(void) {
    // 0x3a3139
    int64_t result; // 0x3a3139
    return result;
}

// Address range: 0x3a313c - 0x3a3141
int64_t function_3a313c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a313c
    int64_t result; // 0x3a313c
    return result;
}

// Address range: 0x3a315d - 0x3a318f
int64_t function_3a315d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3a315d
    int64_t v1; // 0x3a315d
    int32_t v2 = v1; // 0x3a3163
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t v3; // 0x3a315d
    if (((v2 + 0x284808ff ^ v2) & (v2 ^ -0x80000000)) >= 0) {
        v3 = function_3a30f6();
    }
    unsigned char v4 = *(char *)0x56a90007; // 0x3a316e
    unsigned char v5 = v4 + (char)(a4 / 256); // 0x3a316e
    *(char *)0x56a90007 = v5;
    int32_t * v6 = (int32_t *)(a3 + 0x24d43abb); // 0x3a3170
    uint32_t v7 = *v6; // 0x3a3170
    *v6 = v7 / 8 | 0x40000000 * v7 | 0x20000000 * (int32_t)(v5 < v4);
    int32_t * v8 = (int32_t *)(2 * v3); // 0x3a3177
    uint32_t v9 = *v8; // 0x3a3177
    *v8 = v9 / 2 | 0x80000000 * v9;
    char * v10 = (char *)(a4 - 0x21d165fa); // 0x3a3181
    *v10 = *v10 + 7;
    unknown_fffffffff3614919();
    return function_3a3119();
}

// Address range: 0x3a3190 - 0x3a3196
int64_t function_3a3190(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 60); // 0x3a3190
    int64_t result; // 0x3a3190
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3a3199 - 0x3a319e
int64_t function_3a3199(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a3199
    int64_t result; // 0x3a3199
    return result;
}

// Address range: 0x3a31a7 - 0x3a31af
int64_t function_3a31a7(int64_t a1) {
    // 0x3a31a7
    int64_t result; // 0x3a31a7
    return result;
}

// Address range: 0x3a31e1 - 0x3a31e8
int64_t function_3a31e1(int64_t a1, int64_t a2) {
    // 0x3a31e1
    int64_t v1; // 0x3a31e1
    int64_t v2 = v1;
    *(int32_t *)(v2 & 0xffffffff) = 2 * (int32_t)v2;
    int16_t result; // 0x3a31e1
    return result;
}

// Address range: 0x3a3297 - 0x3a32b3
int64_t function_3a3297(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3a3297
    int64_t v1; // 0x3a3297
    uint64_t v2 = v1;
    *(char *)-0x6cb7fc62 = *(char *)-0x6cb7fc62 + (char)(v2 / 256);
    char * v3 = (char *)(a1 - 29); // 0x3a32a3
    unsigned char v4 = *v3; // 0x3a32a3
    unsigned char v5 = v4 + (char)v2; // 0x3a32a3
    *v3 = v5;
    int64_t v6; // 0x3a3297
    unsigned char v7 = *(char *)&v6; // 0x3a32a6
    char v8 = v5 < v4; // 0x3a32a6
    unsigned char v9 = v8 + (char)(a3 / 256); // 0x3a32a6
    char v10 = v7 - v9; // 0x3a32a6
    *(char *)v6 = v10;
    uint32_t v11 = (int32_t)a4 % 32; // 0x3a32a8
    if (v11 != 0) {
        int32_t * v12 = (int32_t *)(v2 + 0xdc0768); // 0x3a32a8
        uint32_t v13 = *v12; // 0x3a32a8
        bool v14 = v5 < v4 ? v9 != -1 | v7 < v10 - v8 : v7 < v9; // 0x3a32a6
        *v12 = v13 << v11 | (int32_t)((int64_t)v13 >> (int64_t)(33 - v11)) | (int32_t)v14 << v11 - 1;
    }
    return function_83b705c();
}

// Address range: 0x3a32b4 - 0x3a3341
int64_t function_3a32b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a32b4
    int64_t v1; // 0x3a32b4
    int64_t v2 = v1;
    bool v3; // 0x3a32b4
    if (!v3) {
        char * v4 = (char *)(a1 + 0x3a9ad83a + 2 * a3); // 0x3a32b6
        *v4 = *v4 - (char)v1;
        int16_t v5 = a3; // 0x3a32c3
        __asm_in_133(v5);
        __asm_in(v5);
        return function_177ecef();
    }
    char * v6 = (char *)(v2 + 0x3230c137); // 0x3a32f1
    unsigned char v7 = *v6; // 0x3a32f1
    unsigned char v8 = v7 + (char)(v1 / 256); // 0x3a32f1
    *v6 = v8;
    if (v8 < v7) {
        // 0x3a32f9
        return function_403b6ffe();
    }
    int64_t v9 = (v2 - a3) % 256 | v2 & -256; // 0x3a3314
    int64_t v10 = *(int64_t *)(v1 + 0x7dbc5d2c) ^ a1; // 0x3a3316
    int32_t * v11 = (int32_t *)(a2 - 0x59cf2696); // 0x3a331d
    *v11 = *v11 - (int32_t)v9;
    uint64_t v12 = unknown_d4e22d(v10); // 0x3a3325
    unsigned char v13 = *(char *)(v12 % 256 + v9); // 0x3a3336
    unsigned char v14 = *(char *)(v9 + 0x5e26780a); // 0x3a3337
    int64_t result = (int64_t)v14 * (int64_t)v13 | v12 & -0x10000; // 0x3a3337
    *(int32_t *)v10 = (int32_t)result;
    return result;
}

// Address range: 0x3a335b - 0x3a3379
int64_t function_3a335b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a335b
    int64_t v1; // 0x3a335b
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3; // 0x3a335b
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    char * v5 = (char *)(v3 + 0x60580079); // 0x3a3365
    *v5 = *v5 + (char)v3;
    bool v6; // 0x3a335b
    int64_t v7 = v6 ? -1 : 1; // 0x3a336e
    unknown_ffffffff95191675(v7 + a1, v7 + a2);
    return function_ffffffffff5e35ed();
}

// Address range: 0x3a337a - 0x3a33cf
int64_t function_3a337a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3a337a
    *(char *)a1 = (char)(a3 / 256 | a1);
    unsigned char v1 = *(char *)-0x6309157d; // 0x3a337c
    int64_t v2; // 0x3a337a
    uint64_t v3 = v2 / 256; // 0x3a337c
    char v4 = v3; // 0x3a337c
    char v5 = v1 + v4; // 0x3a337c
    *(char *)-0x6309157d = v5;
    bool v6 = v5 < v1; // 0x3a3388
    int64_t v7; // 0x3a337a
    if (v5 < 0 != ((v5 ^ v1) & (v5 ^ v4)) < 0) {
        uint64_t v8 = __asm_iretd(a1, a2, a3); // 0x3a338a
        uint64_t v9 = v8 / 256; // 0x3a338c
        v7 = 256 * (v9 - v8) & 0xff00 | v8 & -0xff01;
        v6 = (char)v9 < (char)v8;
    }
    int32_t * v10 = (int32_t *)(v2 + 0x4e013db3); // 0x3a3391
    int32_t v11 = *v10; // 0x3a3391
    int32_t v12 = v6; // 0x3a3391
    int32_t v13 = v12 + (int32_t)v2; // 0x3a3391
    int32_t v14 = v11 - v13; // 0x3a3391
    *v10 = v14;
    *(char *)(v7 - 0x2ec11180) = (char)(v14 == 0 | v14 < 0 != ((v14 - v12 ^ v11) & (v13 ^ v11)) < 0);
    int64_t v15 = 256 * (v3 + a2) & 0xff00 | v2 & -0xff01; // 0x3a33a7
    char * v16 = (char *)(v2 + 61 + v2); // 0x3a33a9
    *v16 = *v16 + (char)v2;
    int32_t * v17 = (int32_t *)(v15 - 0x1b36dab6); // 0x3a33ae
    int32_t v18 = v7; // 0x3a33ae
    *v17 = *v17 + v18;
    int64_t v19 = 0x100000000 * a2 >> 32; // 0x3a33be
    int32_t * v20 = (int32_t *)((v7 & 0xffffffff) + 0x3d00b095); // 0x3a33c0
    *v20 = *v20 + v18;
    int32_t * v21 = (int32_t *)(v15 - 0x2dfb78fe); // 0x3a33c6
    *v21 = *v21 - 0x774e26f5;
    return v19 * v19 & 0xffffffff;
}

// Address range: 0x3a33cf - 0x3a33db
int64_t function_3a33cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a33cf
    return function_3a33f0(a1, a2, a3, (int64_t)&g4);
}

// Address range: 0x3a33eb - 0x3a33f0
int64_t function_3a33eb(void) {
    // 0x3a33eb
    int64_t result; // 0x3a33eb
    return result;
}

// Address range: 0x3a33f0 - 0x3a340c
int64_t function_3a33f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a33f0
    int64_t v1; // 0x3a33f0
    unsigned char v2 = (char)v1; // 0x3a33f0
    unsigned char v3 = (char)v1;
    char v4 = v2 - v3; // 0x3a33f0
    int64_t result = v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0)) | 512; // 0x3a33f2
    *(char *)-0x7b108506 = *(char *)-0x7b108506 + (char)(v1 / 256);
    bool v5; // 0x3a33f0
    *(char *)((v5 ? -4 : 4) + a1) = (char)v1;
    int32_t * v6 = (int32_t *)(a2 + 0x49a7f88 + (v5 ? -1 : 1)); // 0x3a3406
    *v6 = *v6 + (int32_t)result;
    return result;
}

// Address range: 0x3a3429 - 0x3a3442
int64_t function_3a3429(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3a3429
    int64_t v1; // 0x3a3429
    char * v2 = (char *)(v1 + 0x3d0dd52c); // 0x3a3429
    *v2 = *v2 + (char)(a3 / 256);
    int64_t result = __asm_int1(); // 0x3a3431
    char * v3 = (char *)result; // 0x3a343a
    *v3 = *v3 + 61;
    int32_t * v4 = (int32_t *)(a1 - 121); // 0x3a343d
    *v4 = *v4 + (int32_t)a1;
    __asm_out_134(65, (char)result);
    return result;
}

// Address range: 0x3a34c7 - 0x3a34d9
int64_t function_3a34c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 37); // 0x3a34c8
    int64_t result; // 0x3a34c7
    *v1 = *v1 + (int32_t)result;
    *(char *)-0x38bacc2e = *(char *)-0x38bacc2e + (char)(result / 256);
    char * v2 = (char *)(a1 + 76); // 0x3a34d1
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x3a350b - 0x3a350d
int64_t function_3a350b(void) {
    // 0x3a350b
    return function_3a354a();
}

// Address range: 0x3a352f - 0x3a3530
int64_t function_3a352f(void) {
    // 0x3a352f
    int64_t result; // 0x3a352f
    return result;
}

// Address range: 0x3a354a - 0x3a354d
int64_t function_3a354a(void) {
    // 0x3a354a
    int64_t result; // 0x3a354a
    return result;
}

// Address range: 0x3a3591 - 0x3a3592
int64_t function_3a3591(void) {
    // 0x3a3591
    int64_t result; // 0x3a3591
    return result;
}

// Address range: 0x3a3594 - 0x3a3598
int64_t function_3a3594(int64_t a1, int64_t a2) {
    // 0x3a3594
    int64_t v1; // 0x3a3594
    *(char *)a2 = 2 * (char)v1;
    return function_3a352f();
}

// Address range: 0x3a35a6 - 0x3a35c8
int64_t function_3a35a6(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)0x1fb760ad; // 0x3a35a6
    int64_t v2; // 0x3a35a6
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x3a35a6
    *(char *)0x1fb760ad = v3;
    if (llvm_ctpop_i8((char)a1 + 68 + (char)(v3 < v1)) % 2 == 0) {
        function_3a3591();
    }
    int64_t result = unknown_fffffffff2702ec1(); // 0x3a35bb
    *(char *)0x1d1435c8 = *(char *)0x1d1435c8 - (char)v2;
    return result;
}

// Address range: 0x3a35d9 - 0x3a35da
int64_t function_3a35d9(int64_t a1) {
    // 0x3a35d9
    int64_t result; // 0x3a35d9
    return result;
}

// Address range: 0x3a35f9 - 0x3a3647
int64_t function_3a35f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    uint32_t v2 = (int32_t)a3; // 0x3a35fd
    int64_t result; // 0x3a35f9
    int32_t v3 = result;
    uint32_t v4 = v3 + v2; // 0x3a35fd
    if (((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // 0x3a363b
        return result;
    }
    // 0x3a3601
    __asm_out_135((int16_t)v4, (char)result);
    *(int32_t *)result = ((int32_t)(int64_t)&v1 | (int32_t)(v4 < v2)) + v3;
    char v5 = *(char *)-0x709651ee; // 0x3a360b
    bool v6; // 0x3a35f9
    *(char *)-0x709651ee = v5 + (char)((2 * result + (int64_t)v6) / 256);
    int64_t v7 = __asm_hlt() & 0xffffff00 | (int64_t)*(char *)0x94ea59ab383c01; // 0x3a361b
    __asm_iretd(v1, v7, 0xd9e655e3);
    return function_3a368b(v1, v7, 0xd9e655e3, a4, (int64_t)&g4);
}

// Address range: 0x3a3689 - 0x3a368b
int64_t function_3a3689(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a3689
    int64_t result; // 0x3a3689
    return result;
}

// Address range: 0x3a368b - 0x3a36d2
int64_t function_3a368b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 71); // 0x3a368b
    int64_t v2; // 0x3a368b
    *v1 = *v1 | (int32_t)v2;
    uint32_t v3 = -0x20fc4be3 * *(int32_t *)(a5 + 0x7f01e80f); // 0x3a368f
    float80_t v4; // 0x3a368b
    *(int16_t *)((int64_t)v3 - 0x746a25db) = (int16_t)v4;
    uint32_t v5 = *(int32_t *)0x5dabb3cc; // 0x3a36ae
    int64_t v6 = v5; // 0x3a36ae
    int64_t v7 = v6 & 0xffffff00 | (int64_t)(*(char *)v6 + (char)v5); // 0x3a36af
    *(char *)0x132867ba = *(char *)0x132867ba + (char)(a5 / 256);
    __asm_out_136(114, (int32_t)v7);
    uint32_t v8 = *(int32_t *)(((int64_t)(v3 % 256) | a4) + 0x42008837); // 0x3a36bb
    char * v9 = (char *)(v7 - 56); // 0x3a36c2
    bool v10; // 0x3a368b
    *v9 = *v9 + (char)v3 + (char)((v10 ? 0x5dabb3c8 : 0x5dabb3d0) < v8);
    int64_t v11 = __asm_wait(); // 0x3a36c5
    return (v11 + 127) % 256 | v11 & -256;
}

// Address range: 0x3a36f3 - 0x3a36f4
int64_t function_3a36f3(void) {
    // 0x3a36f3
    int64_t result; // 0x3a36f3
    return result;
}

// Address range: 0x3a370f - 0x3a3710
int64_t function_3a370f(int64_t a1) {
    // 0x3a370f
    int64_t result; // 0x3a370f
    return result;
}

// Address range: 0x3a372a - 0x3a372f
int64_t function_3a372a(void) {
    // 0x3a372a
    int64_t v1; // 0x3a372a
    return v1 | 142;
}

// Address range: 0x3a3939 - 0x3a393a
int64_t function_3a3939(void) {
    // 0x3a3939
    int64_t result; // 0x3a3939
    return result;
}

// Address range: 0x3a393b - 0x3a3947
int64_t function_3a393b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a393b
    return function_a6dc89();
}

// Address range: 0x3a396b - 0x3a3977
int64_t function_3a396b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 44); // 0x3a396f
    *v1 = *v1 + (char)a3;
    return function_ffffffffe914a6ab();
}

// Address range: 0x3a39a6 - 0x3a39b5
int64_t function_3a39a6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3a39a6
    int64_t v1; // 0x3a39a6
    char * v2 = (char *)(8 * a3 + 0x13df7f1 + v1); // 0x3a39a6
    bool v3; // 0x3a39a6
    *v2 = (char)v3 - (char)(a3 / 256) + *v2;
    int32_t * v4 = (int32_t *)(a4 + 0x5d373e3f); // 0x3a39ad
    *v4 = *v4 ^ (int32_t)v1;
    return function_3a39ec(a1, a2, a3, a4);
}

// Address range: 0x3a39c7 - 0x3a39d2
int64_t function_3a39c7(void) {
    // 0x3a39c7
    int64_t v1; // 0x3a39c7
    return v1 & -256 | (int64_t)*(char *)-0x258e7d14f516f5a2;
}

// Address range: 0x3a39d9 - 0x3a39db
int64_t function_3a39d9(void) {
    // 0x3a39d9
    int64_t result; // 0x3a39d9
    return result;
}

// Address range: 0x3a39ec - 0x3a3a58
int64_t function_3a39ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a39ec
    int64_t v1; // 0x3a39ec
    int64_t v2 = v1;
    *(int32_t *)0xab19013d1716ed = (int32_t)v2;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x3a39ec
    *(char *)a3 = (char)v3;
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    if ((int32_t)v3 < -0x6ae3fffe) {
        uint32_t result = __asm_in_133((int16_t)a3) - 0x36fec300; // 0x3a3a47
        char * v5 = (char *)(v1 + 0x1a416d0f); // 0x3a3a52
        *v5 = *v5 | (char)result;
        return result;
    }
    char * v6 = (char *)(v1 + a3); // 0x3a3a09
    *v6 = *v6 + (char)a4;
    uint64_t v7 = unknown_ffffffffd325c11a(); // 0x3a3a14
    uint64_t v8 = v7 / 256; // 0x3a3a19
    int64_t v9 = 2 * (char)v8 < (char)v8 ? 0x7a48013e : 0x7a48013d; // 0x3a3a1b
    return (512 * v8 & 0xfe00 | v7 & 0xffff00ff) - v9 & 0xffffffff;
}

// Address range: 0x3a3a7e - 0x3a3a85
int64_t function_3a3a7e(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 - 0x4e1a7166); // 0x3a3a7e
    int64_t result; // 0x3a3a7e
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x476aee - 0x476af3
int64_t function_476aee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x476aee
    int64_t v1; // 0x476aee
    return v1 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x476af8 - 0x476afb
int64_t function_476af8(int64_t a1) {
    // 0x476af8
    int64_t result; // 0x476af8
    return result;
}

// Address range: 0x476c22 - 0x476c23
int64_t function_476c22(void) {
    // 0x476c22
    int64_t result; // 0x476c22
    return result;
}

// Address range: 0x476c46 - 0x476c47
int64_t function_476c46(int64_t a1) {
    // 0x476c46
    int64_t result; // 0x476c46
    return result;
}

// Address range: 0x476c77 - 0x476c7b
int64_t function_476c77(void) {
    // 0x476c77
    int64_t result; // 0x476c77
    // 0x476c79
    return result;
}

// Address range: 0x476cb9 - 0x476cbc
int64_t function_476cb9(void) {
    // 0x476cb9
    int64_t result; // 0x476cb9
    return result;
}

// Address range: 0x476d10 - 0x476d13
int64_t function_476d10(void) {
    // 0x476d10
    int64_t result; // 0x476d10
    return result;
}

// Address range: 0x476d63 - 0x476d69
int64_t function_476d63(void) {
    // 0x476d63
    int64_t result; // 0x476d63
    *(int32_t *)result = 0;
    return result;
}

// Address range: 0x476d88 - 0x476d8b
int64_t function_476d88(int64_t a1) {
    // 0x476d88
    int64_t result; // 0x476d88
    return result;
}

// Address range: 0x476ddd - 0x476de0
int64_t function_476ddd(int64_t a1) {
    // 0x476ddd
    int64_t result; // 0x476ddd
    return result;
}

// Address range: 0x476e0e - 0x476eeb
int64_t function_476e0e(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x476e0e
    int64_t result; // 0x476e0e
    int64_t v1 = result;
    bool v2; // 0x476e0e
    // 0x476e10
    *(int32_t *)a4 = (v2 ? 0x175f1522 : 0x175f1521) + (int32_t)a4;
    return result;
    int16_t v3 = a3; // 0x476e25
    __asm_out(v3, (int32_t)result);
    int64_t v4 = v2 ? 0x91492c9c : 0x91492c9b; // 0x476e28
    uint64_t v5 = (result & 0xffff00ff | (int64_t)(int32_t)&g2) - v4 & 0xffffff00; // 0x476e2d
    *(char *)v1 = (char)v1 >> 1;
    char * v6 = (char *)(result + 18); // 0x476e3b
    char v7 = *v6 + (char)(v5 / 256); // 0x476e3b
    *v6 = v7;
    if (v7 == 0) {
        unsigned char v8 = llvm_ctpop_i8(v7); // 0x476e3b
        __asm_in_133(v3);
        int64_t v9 = __asm_int1(); // 0x476e45
        int64_t v10; // 0x476e0e
        if (v8 % 2 == 0) {
            // 0x476eb8
            *(char *)v10 = *(char *)&v10 + (char)a3;
            return __asm_int3();
        }
        char * v11 = (char *)(a2 + 22 + (v2 ? -1 : 1)); // 0x476e48
        unsigned char v12 = *v11; // 0x476e48
        unsigned char v13 = (char)(a4 / 256); // 0x476e48
        *v11 = v12 - v13;
        uint32_t v14 = (int32_t)v9; // 0x476e4b
        int32_t v15 = v12 < v13; // 0x476e4b
        uint32_t v16 = *(int32_t *)(a3 + 0x62601817) + v15; // 0x476e4b
        uint32_t result2 = v14 - v16; // 0x476e4b
        bool v17 = v12 < v13 ? v16 != -1 | result2 - v15 > v14 : v16 > v14; // 0x476e4b
        int32_t * v18 = (int32_t *)(v10 - 0x188188ab); // 0x476e5b
        *v18 = *v18 + (int32_t)a3 + (int32_t)v17;
        return result2;
    }
    char * v19 = (char *)(result + 16); // 0x476e69
    uint64_t v20 = a3;
    int64_t result4 = v5 | a2 % 256;
    int64_t v21 = a4 & -0xff01 | (int64_t)&g1;
    *v19 = *v19 & (char)(result4 / 256);
    unsigned char v22 = (char)(v20 / 256); // 0x476e6c
    unsigned char v23 = *(char *)(result4 - 0x28b62dba); // 0x476e6c
    unsigned char v24 = v22 - v23; // 0x476e6c
    int64_t v25 = 256 * (int64_t)v24 | v20 & -0xff01; // 0x476e6c
    while (v23 <= v22) {
        int32_t v26 = *(int32_t *)(v21 + 0x394b4be2) ^ __asm_in_137(-43); // 0x476e77
        int64_t v27 = v21 - 1; // 0x476e7d
        if (v27 != 0 && v26 != 0) {
            // 0x476ed7
            return v26 + 0x5b23de57;
        }
        int64_t v28 = v26; // 0x476e77
        int64_t result3 = v28; // 0x476e7f
        if (v26 < 0) {
            // 0x476e81
            return result3;
        }
        v20 = v25;
        result4 = v28;
        v21 = v27;
        *v19 = *v19 & (char)(result4 / 256);
        v22 = (char)(v20 / 256);
        v23 = *(char *)(result4 - 0x28b62dba);
        v24 = v22 - v23;
        v25 = 256 * (int64_t)v24 | v20 & -0xff01;
    }
    if (v21 != 1 && v24 != 0) {
        char * v29 = (char *)(result - 0x7005abfb); // 0x476ee0
        *v29 = *v29 + (char)v20;
        return function_ffffffffae5fb053();
    }
    // 0x476e90
    __asm_out_135((int16_t)v25, (char)result4);
    if ((result4 & 186) == 0) {
        // 0x476e81
        return result4;
    }
    int32_t v30 = (int32_t)result4 ^ 0x72523098; // 0x476e97
    int64_t result5 = v30; // 0x476e97
    *(char *)(int64_t)(v30 + 0x4ddd5747) = (char)v20;
    if (v30 < 0) {
        // 0x476e81
        return result5;
    }
    // 0x476ea5
    return result5 & 0xffffffcd ^ 0xfc0d50ee;
}

// Address range: 0x4770ee - 0x4770fc
int64_t function_4770ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4770ee
    int64_t result; // 0x4770ee
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x477114 - 0x477115
int64_t function_477114(int64_t a1) {
    // 0x477114
    int64_t result; // 0x477114
    return result;
}

// Address range: 0x47713c - 0x4771af
int64_t function_47713c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    *(int32_t *)a3 = 0x75de23b;
    int64_t v2; // 0x47713c
    uint64_t v3 = (0x100000000 * v2 >> 32) * (int64_t)*(int32_t *)(a1 + 62); // 0x477146
    int64_t result = v3 & 0xffffffff; // 0x477146
    int64_t v4 = a4 - 1; // 0x477149
    bool v5; // 0x47713c
    if (v4 == 0 || v5) {
        int32_t * v6 = (int32_t *)v4; // 0x47714b
        *v6 = *v6 | (int32_t)v1;
        int32_t v7 = *(int32_t *)(result - 0xc8fac87); // 0x477150
        *(int32_t *)-0x150c7bb6d463ff94 = (int32_t)v3;
        char * v8 = (char *)result; // 0x477163
        *v8 = *v8 + (char)v3 + (char)(*(char *)(result + 6) < 71);
        *(int64_t *)((int64_t)(v7 | (int32_t)v2 + 8) - 8) = v3 / 0x100000000;
        return result;
    }
    // 0x4771ab
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x4771f7 - 0x477210
int64_t function_4771f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4771f7
    int64_t v1; // 0x4771f7
    int64_t result = v1 | 141; // 0x4771f7
    int32_t * v2 = (int32_t *)(result - 0x429f9993); // 0x4771f9
    uint32_t v3 = *v2; // 0x4771f9
    *v2 = v3 / 0x8000 | 0x40000 * v3;
    int32_t * v4 = (int32_t *)(a3 + 93); // 0x477202
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x477222 - 0x47723a
int64_t function_477222(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x477222
    int64_t v1; // 0x477222
    uint64_t v2 = v1;
    char v3 = *(char *)(a3 + 126); // 0x477222
    int64_t result = 256 * (int64_t)((char)(v2 / 256) - v3) | v2 & -0xff01; // 0x477222
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t * v4 = (int32_t *)(result + 0x604f55a6); // 0x47722b
    int64_t v5; // 0x477222
    *v4 = *v4 - (int32_t)(int64_t)&v5;
    __asm_out_134(50, (char)v2);
    return result;
}

// Address range: 0x47723a - 0x47723b
int64_t function_47723a(int64_t a1) {
    // 0x47723a
    int64_t result; // 0x47723a
    return result;
}

// Address range: 0x47727a - 0x47728a
int64_t function_47727a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x477280
    int32_t v2; // 0x47727a
    if (v1 == 0) {
        // 0x47727a
        int64_t v3; // 0x47727a
        v2 = v3;
    } else {
        char * v4 = (char *)(a2 - 55); // 0x477280
        *v4 = *v4 << v1;
        int64_t v5; // 0x47727a
        v2 = *(int32_t *)&v5;
    }
    return function_25577924(v2 & (int32_t)a1);
}

// Address range: 0x47731c - 0x477375
int64_t function_47731c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47731c
    int64_t v1; // 0x47731c
    int64_t result = v1;
    bool v2; // 0x47731c
    bool v3 = v2;
    uint32_t v4 = (int32_t)v1; // 0x47731c
    uint32_t v5 = *(int32_t *)(a2 + 0x62e2699) + v4; // 0x47731c
    if (v3 ? v5 + (int32_t)v3 <= v4 : v5 < v4) {
        // 0x477374
        return result;
    }
    // 0x477324
    *(int32_t *)(a1 + 69) = (int32_t)v1;
    return (result + 95) % 256 | result & -256;
}

// Address range: 0x47739d - 0x47739e
int64_t function_47739d(void) {
    // 0x47739d
    int64_t result; // 0x47739d
    return result;
}

// Address range: 0x4773b5 - 0x4773b9
int64_t function_4773b5(void) {
    // 0x4773b5
    int64_t result; // 0x4773b5
    return result;
}

// Address range: 0x4773ce - 0x4773d1
int64_t function_4773ce(void) {
    // 0x4773ce
    int64_t result; // 0x4773ce
    return result;
}

// Address range: 0x47741d - 0x47742d
int64_t function_47741d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47741d
    int64_t v1; // 0x47741d
    int64_t v2 = v1;
    return (v2 + 161) % 256 | v2 & -256;
}

// Address range: 0x47742e - 0x477431
int64_t function_47742e(void) {
    // 0x47742e
    int64_t result; // 0x47742e
    return result;
}

// Address range: 0x4774ae - 0x4774b1
int64_t function_4774ae(int64_t a1) {
    // 0x4774ae
    int64_t result; // 0x4774ae
    return result;
}

// Address range: 0x4774e9 - 0x4774ee
int64_t function_4774e9(void) {
    // 0x4774e9
    return function_ffffffff933fb40f();
}
