/*
 * Targeted RetDec C for native executable gap queue batch 655.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x330c23-0x330e23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x330e23-0x331023 rank=- name=- kind=- bytes=- uncovered=-
 *   0x331023-0x331223 rank=- name=- kind=- bytes=- uncovered=-
 *   0x331223-0x331423 rank=- name=- kind=- bytes=- uncovered=-
 *   0x331423-0x331623 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cf1ff-0x3cf3ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cf3ff-0x3cf5ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cf5ff-0x3cf7ff rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_330c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_330d38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_330e96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_331019(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33115a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3312ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33145b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3cf1ff(int64_t a1, int64_t a2);
int64_t function_3cf289(int64_t a1);
int64_t function_3cf29c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cf2cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cf2ed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cf318(void);
int64_t function_3cf31c(int64_t a1);
int64_t function_3cf3f7(int64_t a1, int64_t a2);
int64_t function_3cf41e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cf451(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cf47c(void);
int64_t function_3cf482(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3cf648(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_56a2f659();
int64_t function_c9849();
int64_t function_cdc60();
int64_t function_ffffffff9aafd472();
int64_t function_ffffffffcf5d7466();
int64_t unknown_ffffffffa2cfc68b();
int64_t unknown_ffffffffc02861b4();

// Address range: 0x330c23 - 0x330d38
int64_t function_330c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x330c23
    int64_t v1; // bp-16, 0x330c23
    int64_t v2 = (int64_t)&v1; // 0x330cc4
    v1 = v2;
    *(int64_t *)(v2 + 16) = v1;
    *(int64_t *)(v2 + 32) = a6;
    int64_t v3 = v2 + 8; // 0x330ceb
    int64_t * v4 = (int64_t *)v3; // 0x330cef
    *(int64_t *)(v2 - 8) = v3;
    *v4 = a5;
    *v4 = v2 + 24;
    int64_t v5; // 0x330c23
    return function_c9849(a1, a2, a3, a4, *v4, v5, v5);
}

// Address range: 0x330d38 - 0x330e96
int64_t function_330d38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x330d38
    return function_c9849(a1, 169, a3, a4, a5, a6, 0x14cd07a1);
}

// Address range: 0x330e96 - 0x331019
int64_t function_330e96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x330e96
    int64_t v1; // bp-40, 0x330e96
    int64_t v2 = (int64_t)&v1; // 0x330f1e
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x330f34
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x330f37
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x330f3b
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x330f3e
    *v6 = v4;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x330f4a
    *v3 = v7;
    *v5 = v4;
    int64_t v8 = v2 + 8; // 0x330f8d
    *(int64_t *)v8 = *v3;
    *v3 = 0x7e567cfe;
    *v6 = v7;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = a4;
    *v5 = a3;
    *v3 = v8;
    return function_c9849(a1, a2, *v5, *v3, a5, a6, 0x32e50e);
}

// Address range: 0x331019 - 0x33115a
int64_t function_331019(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x331019
    int64_t v1; // bp-48, 0x331019
    v1 = (int64_t)&v1;
    return function_c9849(a1, a2, a3, a4, a5, a6, 0x4159e815);
}

// Address range: 0x33115a - 0x3312ed
int64_t function_33115a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-40, 0x33120f
    int64_t v2 = (int64_t)&v1; // 0x331244
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x331271
    *(int64_t *)(v2 + 8) = a7;
    int64_t v4 = v2 - 16; // 0x331286
    *(int64_t *)v4 = v4;
    *v3 = 0x32eada;
    *(int64_t *)(v2 + 32) = v1;
    *v3 = v2;
    v1 = v2 + 16;
    return function_c9849(a1, a2, a3, a4, a5, a6, 0x5363f376);
}

// Address range: 0x3312ed - 0x33145b
int64_t function_3312ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3312ed
    int64_t v1; // bp-32, 0x3312ed
    int64_t v2 = (int64_t)&v1; // 0x3313ae
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x3313b6
    *(int64_t *)(v2 - 8) = v3;
    int64_t v4 = v2 - 16; // 0x3313ba
    int64_t * v5 = (int64_t *)v4; // 0x3313ba
    *v5 = 310;
    *(int64_t *)(v2 - 24) = v4;
    int64_t v6 = *v5; // 0x3313ea
    *(int64_t *)(v2 - 32) = v6;
    int64_t v7 = *v5; // 0x3313f3
    int64_t * v8 = (int64_t *)v7; // 0x3313f7
    *(int64_t *)(v7 + 16) = a6;
    *v8 = 0x18679ec3;
    *(int64_t *)(v7 - 16) = v3;
    *(int64_t *)(v7 + 32) = *v8;
    int64_t v9 = v7 + 8; // 0x331412
    int64_t * v10 = (int64_t *)v9; // 0x331416
    *(int64_t *)(v7 - 8) = *v10;
    *v8 = v9;
    *v10 = v7 + 24;
    int64_t v11; // 0x3312ed
    return function_c9849(a1, a2, a3, a4, v6, v11, v1);
}

// Address range: 0x33145b - 0x331585
int64_t function_33145b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x33145b
    int64_t v1; // 0x33145b
    return function_c9849(a1, a2, a3, a4, a5, v1, 0xcc26874);
}

// Address range: 0x3cf1ff - 0x3cf20e
int64_t function_3cf1ff(int64_t a1, int64_t a2) {
    // 0x3cf1ff
    int64_t v1; // 0x3cf1ff
    *(int32_t *)a2 = (int32_t)v1 >> 1;
    *(int32_t *)0x4ddac01e874da7b = (int32_t)v1;
    return __asm_wait(a1, a2);
}

// Address range: 0x3cf289 - 0x3cf28a
int64_t function_3cf289(int64_t a1) {
    // 0x3cf289
    int64_t result; // 0x3cf289
    return result;
}

// Address range: 0x3cf29c - 0x3cf2b7
int64_t function_3cf29c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cf29c
    int64_t v1; // 0x3cf29c
    int32_t * v2 = (int32_t *)(v1 - 0x4cb3c5e3); // 0x3cf2a6
    *v2 = *v2 + (int32_t)a4;
    unknown_ffffffffc02861b4();
    return function_3cf318();
}

// Address range: 0x3cf2cb - 0x3cf2d4
int64_t function_3cf2cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cf2cb
    *(int32_t *)a4 = 0;
    return function_ffffffff9aafd472();
}

// Address range: 0x3cf2ed - 0x3cf2fe
int64_t function_3cf2ed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3cf2ed
    int64_t v1; // 0x3cf2ed
    int64_t result = v1 & -0xff01 | (int64_t)"MCloneTable"; // 0x3cf2ed
    char v2 = *(char *)(a3 - 0x760718f9); // 0x3cf2ef
    char * v3 = (char *)((a3 & -256 | (int64_t)(v2 | (char)a3)) + 0x701e83c); // 0x3cf2f5
    *v3 = *v3 + (char)result;
    return result;
}

// Address range: 0x3cf318 - 0x3cf31a
int64_t function_3cf318(void) {
    // 0x3cf318
    int64_t result; // 0x3cf318
    return result;
}

// Address range: 0x3cf31c - 0x3cf323
int64_t function_3cf31c(int64_t a1) {
    // 0x3cf31c
    __asm_int1(a1);
    bool v1; // 0x3cf31c
    return function_ffffffffcf5d7466((v1 ? -4 : 4) + a1);
}

// Address range: 0x3cf3f7 - 0x3cf401
int64_t function_3cf3f7(int64_t a1, int64_t a2) {
    // 0x3cf3f7
    int64_t v1; // 0x3cf3f7
    int32_t * v2 = (int32_t *)(a2 + 0x329518e5 + 4 * v1); // 0x3cf3f7
    *v2 = *v2 + (int32_t)a1;
    return function_3cf451(a1, a2, v1, v1);
}

// Address range: 0x3cf41e - 0x3cf446
int64_t function_3cf41e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cf41e
    int64_t v1; // 0x3cf41e
    uint64_t v2 = v1;
    if (a4 != 1 != ((int32_t)v2 == -0x44fe17ff)) {
        char * v3 = (char *)(a2 - 0x175e8b5f + 4 * v1); // 0x3cf425
        *v3 = *v3 | (char)(v2 / 256);
        int32_t * v4 = (int32_t *)(v1 - 120 + v1); // 0x3cf42c
        *v4 = *v4 + (int32_t)v1;
        return (v2 + 48) % 256 | v2 & -256;
    }
    uint32_t v5 = (int32_t)a3;
    uint32_t v6 = (int32_t)v1 + v5; // 0x3cf437
    *(int32_t *)a3 = v6;
    int64_t v7; // 0x3cf41e
    if (v6 >= v5 && v6 != 0) {
        v7 = function_3cf47c();
    }
    int64_t v8 = v7;
    return ((v8 + 156) % 256 | v8 & 0xffffff00) + (v1 & 0xffff00ff | (int64_t)(int32_t)&g1) & 0xffffffff;
}

// Address range: 0x3cf451 - 0x3cf471
int64_t function_3cf451(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cf451
    int64_t v1; // 0x3cf451
    int32_t * v2 = (int32_t *)(((uint64_t)v1 % 256 | a4) + 0x3a958c4f); // 0x3cf458
    *v2 = *v2 - 0x17feb477;
    return function_56a2f659(0xe8014b89);
}

// Address range: 0x3cf47c - 0x3cf480
int64_t function_3cf47c(void) {
    // 0x3cf47c
    return __asm_in(-110);
}

// Address range: 0x3cf482 - 0x3cf648
int64_t function_3cf482(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result = unknown_ffffffffa2cfc68b(); // 0x3cf485
    bool v1; // 0x3cf482
    if (v1) {
        // 0x3cf48c
        __asm_out(-27, (int32_t)result);
        return result;
    }
    // 0x3cf4b6
    *(int32_t *)a1 = (int32_t)a1 - 0x178fd659;
    int64_t v2; // 0x3cf482
    int64_t v3 = (int64_t)(0xb01e89c * *(int32_t *)(v2 - 14)); // 0x3cf4c3
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x3cf4d2
    *v4 = 0x4000 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 134;
    int64_t v5 = v3 - 24; // 0x3cf4d7
    int64_t * v6 = (int64_t *)(v3 - 16); // 0x3cf4eb
    *v6 = 0x3cea9e;
    int64_t v7 = v3 - 32; // 0x3cf52e
    int64_t * v8 = (int64_t *)v7; // 0x3cf52e
    int64_t * v9 = (int64_t *)(v3 - 40); // 0x3cf53c
    int64_t * v10 = (int64_t *)(v3 - 48); // 0x3cf564
    int64_t v11 = *(int64_t *)(v3 + 8); // 0x3cf591
    *v8 = v11;
    *v9 = v5;
    *(int64_t *)v5 = v11;
    *v9 = 0x29d46631;
    *v10 = 0x36f38d85;
    int64_t * v12 = (int64_t *)(v3 - 56); // 0x3cf5f8
    *v12 = *v6;
    *v4 = *v9;
    *v9 = *v8;
    *v12 = a2;
    *v10 = v7;
    int64_t v13 = *v8; // 0x3cf62a
    *v9 = v13;
    *v10 = v13;
    return function_cdc60();
}

// Address range: 0x3cf648 - 0x3cf79c
int64_t function_3cf648(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3cf648
    int64_t v1; // bp-48, 0x3cf648
    int64_t v2 = (int64_t)&v1; // 0x3cf74e
    *(int64_t *)(v2 + 8) = v2 + 24;
    return function_cdc60();
}
