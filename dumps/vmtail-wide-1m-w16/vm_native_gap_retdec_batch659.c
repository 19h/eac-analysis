/*
 * Targeted RetDec C for native executable gap queue batch 659.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1dae5a-0x1db05a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1db25a-0x1db45a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1db65a-0x1db85a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35328a-0x35348a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35348a-0x35368a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35368a-0x35388a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35388a-0x353a8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x353a8a-0x353c8a rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1dae5a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1daf45(void);
int64_t function_1daf47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1daf63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1daf71(int64_t a1);
int64_t function_1daf78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1daf8e(void);
int64_t function_1dafc8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1db25a(void);
int64_t function_1db2af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1db2d1(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1db30e(void);
int64_t function_1db357(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1db3ff(void);
int64_t function_1db42e(void);
int64_t function_1db65a(void);
int64_t function_1db65b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1db6db(void);
int64_t function_1db6ed(void);
int64_t function_1db70c(void);
int64_t function_1db70f(void);
int64_t function_1db736(void);
int64_t function_1db737(int64_t a1, int64_t a2);
int64_t function_1db799(void);
int64_t function_1db7af(int64_t a1);
int64_t function_1db7f2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35328a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35340c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_353577(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3536e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_353833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3539b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_353afa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_cf3c7();
int64_t function_ffffffffc2cd250d();
int64_t function_ffffffffcb550e33();
int64_t unknown_2716e91e();
int64_t unknown_3a43cad1();
int64_t unknown_3a545d1();
int64_t unknown_7415bf85();
int64_t unknown_eab6ce();
int64_t unknown_ffffffff9d971084();
int64_t unknown_ffffffffd17ad6ba();
int64_t unknown_ffffffffdf179776();
int64_t unknown_ffffffffea281269();
int64_t unknown_ffffffffeee8faee();

// Address range: 0x1dae5a - 0x1daeef
int64_t function_1dae5a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1dae5a
    *(int32_t *)a2 = (int32_t)a2 - 1;
    char v1 = *(char *)(a2 - 98); // 0x1dae60
    uint64_t v2 = __asm_wait(unknown_ffffffffea281269() & 0xffffffff); // 0x1dae69
    *(char *)(a3 + 59) = (char)(v2 / 256);
    unknown_ffffffffdf179776();
    unsigned char v3 = (char)(a3 / 256); // 0x1dae7a
    int16_t v4; // 0x1dae5a
    unsigned char v5 = (char)((uint16_t)v4 / 256) + v3; // 0x1dae7a
    *(int32_t *)(a2 + 8) = (int32_t)(a4 & 0xffff0000 | (int64_t)(v1 + (char)a4)) | (int32_t)&g2;
    int64_t result = unknown_7415bf85(); // 0x1dae7f
    if (v5 < v3 || v5 == 0) {
        // 0x1daee8
        return unknown_ffffffffeee8faee();
    }
    // 0x1dae86
    return result;
}

// Address range: 0x1daf45 - 0x1daf46
int64_t function_1daf45(void) {
    // 0x1daf45
    int64_t result; // 0x1daf45
    return result;
}

// Address range: 0x1daf47 - 0x1daf53
int64_t function_1daf47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1daf47
    int64_t v1; // 0x1daf47
    int64_t v2 = v1;
    char * v3 = (char *)((v2 + 255) % 256 | v2 & -256); // 0x1daf49
    bool v4; // 0x1daf47
    *v3 = *v3 + (char)a4 + (char)v4;
    return unknown_3a545d1(a1, a2, a3, a4, a5);
}

// Address range: 0x1daf63 - 0x1daf67
int64_t function_1daf63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x1daf63
    if (v1 != 0) {
        function_1daf45();
    }
    // 0x1daf65
    int64_t v2; // 0x1daf63
    return function_1dafc8(a1, a2, a3, v1, v2);
}

// Address range: 0x1daf71 - 0x1daf74
int64_t function_1daf71(int64_t a1) {
    // 0x1daf71
    int64_t result; // 0x1daf71
    return result;
}

// Address range: 0x1daf78 - 0x1daf8e
int64_t function_1daf78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1daf78
    unknown_ffffffff9d971084();
    int32_t * v1 = (int32_t *)(a4 + 0x1e82c6b); // 0x1daf83
    int64_t v2; // 0x1daf78
    *v1 = *v1 + (int32_t)v2;
    return __asm_hlt();
}

// Address range: 0x1daf8e - 0x1daf93
int64_t function_1daf8e(void) {
    // 0x1daf8e
    return function_ffffffffc2cd250d();
}

// Address range: 0x1dafc8 - 0x1db036
int64_t function_1dafc8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1dafc8
    unknown_3a43cad1();
    int64_t v1; // 0x1dafc8
    int32_t * v2 = (int32_t *)(v1 + 0x1e812cd); // 0x1dafd0
    int32_t v3 = *v2; // 0x1dafd0
    *v2 = v3 - (int32_t)a4;
    if ((int64_t)v3 <= a4) {
        // 0x1dafdf
        unknown_ffffffffd17ad6ba();
        uint64_t v4 = __asm_iretd(); // 0x1dafdf
        int32_t * v5 = (int32_t *)(a2 + 26); // 0x1dafe2
        *v5 = *v5 + (int32_t)a2;
        char * v6 = (char *)(v1 + 0x23a03df); // 0x1dafe5
        *v6 = *v6 - (char)(v4 / 256);
        return v4 ^ 232;
    }
    int64_t v7 = unknown_2716e91e(); // 0x1db018
    int32_t v8 = __asm_insd((int16_t)a3 % 256 | (int16_t)&g1); // 0x1db01d
    *(int32_t *)a1 = v8;
    int32_t v9 = 0x10000 * (int32_t)v7 >> 16; // 0x1db01e
    *(int32_t *)(a5 & 0xffffffff) = (int32_t)a5;
    char v10 = v9; // 0x1db02a
    unsigned char v11 = v10 - (-1 - (int32_t)a2 < (int32_t)v1 ? 118 : 117); // 0x1db02a
    int64_t result = (int64_t)v11 | (int64_t)(v9 & -256); // 0x1db02a
    if ((-1 - v11 + (char)(-1 - (int32_t)a2 < (int32_t)v1) & v10) >= 0) {
        // 0x1db007
        return result;
    }
    char * v12 = (char *)result; // 0x1db033
    *v12 = *v12 - v11;
    return result;
}

// Address range: 0x1db25a - 0x1db25b
int64_t function_1db25a(void) {
    // 0x1db25a
    int64_t result; // 0x1db25a
    return result;
}

// Address range: 0x1db2af - 0x1db2b4
int64_t function_1db2af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1db2af
    int64_t result; // 0x1db2af
    return result;
}

// Address range: 0x1db2d1 - 0x1db2e2
int64_t function_1db2d1(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1db2d1
    int64_t v1; // 0x1db2d1
    char * v2 = (char *)(v1 + 0x3d00126e); // 0x1db2d1
    *v2 = *v2 - (char)(a3 / 256);
    *(int32_t *)0x3a2bb3c3 = *(int32_t *)0x3a2bb3c3 + (int32_t)v1;
    return function_ffffffffcb550e33();
}

// Address range: 0x1db30e - 0x1db32b
int64_t function_1db30e(void) {
    // 0x1db30e
    int64_t result; // 0x1db30e
    char * v1 = (char *)(result - 0x43b35b00); // 0x1db323
    *v1 = 8 * *v1;
    return result;
}

// Address range: 0x1db357 - 0x1db3a6
int64_t function_1db357(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1db357
    int64_t v1; // 0x1db357
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return 2 * v2 & 254 | v2 & -256;
}

// Address range: 0x1db3ff - 0x1db400
int64_t function_1db3ff(void) {
    // 0x1db3ff
    int64_t result; // 0x1db3ff
    return result;
}

// Address range: 0x1db42e - 0x1db431
int64_t function_1db42e(void) {
    // 0x1db42e
    int64_t result; // 0x1db42e
    return result;
}

// Address range: 0x1db65a - 0x1db65b
int64_t function_1db65a(void) {
    // 0x1db65a
    int64_t result; // 0x1db65a
    return result;
}

// Address range: 0x1db65b - 0x1db6be
int64_t function_1db65b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1db65b
    int64_t v1; // 0x1db65b
    uint64_t v2 = v1;
    int64_t v3 = a1;
    bool v4; // 0x1db65b
    if (v4) {
        // 0x1db69a
        __asm_out(-90, (int32_t)v1);
        uint32_t v5 = (int32_t)a3; // 0x1db6a4
        uint32_t v6 = (int32_t)a2; // 0x1db6a4
        int32_t v7 = v5 + v6; // 0x1db6a4
        unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x1db6a4
        char * v9 = (char *)(a2 - 37); // 0x1db6a6
        *v9 = -1 - *v9;
        unsigned char v10 = *(char *)(v1 % 256 | v2 & -256); // 0x1db6aa
        int64_t v11 = 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | v1 & -0x10000 | (int64_t)v10 | 512; // 0x1db6ab
        *(int32_t *)0x6f080658006f0955 = (int32_t)v11;
        *(char *)0x1fd5ddbf = *(char *)0x1fd5ddbf + (char)(v2 / 256);
        return v11 & -256 | (int64_t)(v10 & -125);
    }
    int32_t * v12 = (int32_t *)(a1 + 10); // 0x1db65d
    *v12 = *v12 + (int32_t)v2;
    int64_t v13 = unknown_eab6ce(); // 0x1db661
    *(int32_t *)v3 = *(int32_t *)&v3 - 0x17ef7cfd;
    return v13 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x1db6db - 0x1db6dc
int64_t function_1db6db(void) {
    // 0x1db6db
    int64_t result; // 0x1db6db
    return result;
}

// Address range: 0x1db6ed - 0x1db6ef
int64_t function_1db6ed(void) {
    // 0x1db6ed
    return function_1db6db();
}

// Address range: 0x1db70c - 0x1db70f
int64_t function_1db70c(void) {
    // 0x1db70c
    int64_t result; // 0x1db70c
    return result;
}

// Address range: 0x1db70f - 0x1db711
int64_t function_1db70f(void) {
    // 0x1db70f
    int64_t result; // 0x1db70f
    return result;
}

// Address range: 0x1db736 - 0x1db737
int64_t function_1db736(void) {
    // 0x1db736
    int64_t result; // 0x1db736
    return result;
}

// Address range: 0x1db737 - 0x1db74a
int64_t function_1db737(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 22); // 0x1db739
    unsigned char v2 = *v1; // 0x1db739
    *v1 = v2 / 32 | 8 * v2;
    int64_t v3; // 0x1db737
    return (int64_t)&v3;
}

// Address range: 0x1db799 - 0x1db79a
int64_t function_1db799(void) {
    // 0x1db799
    int64_t result; // 0x1db799
    return result;
}

// Address range: 0x1db7af - 0x1db7c9
int64_t function_1db7af(int64_t a1) {
    // 0x1db7af
    int64_t v1; // 0x1db7af
    int64_t v2 = v1;
    char v3 = *(char *)-0x42b25f39; // 0x1db7c0
    *(char *)-0x42b25f39 = v3 + (char)((uint64_t)v1 / 256);
    return v2 + 0xf1626e64 & 0xffffff00 | (v2 + 57) % 256;
}

// Address range: 0x1db7f2 - 0x1db7fd
int64_t function_1db7f2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1db7f2
    int64_t v1; // 0x1db7f2
    int32_t * v2 = (int32_t *)(v1 - 2); // 0x1db7f4
    *v2 = *v2 | -32;
    return function_1db799();
}

// Address range: 0x35328a - 0x35340c
int64_t function_35328a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35328a
    int64_t v1; // 0x35328a
    return function_cf3c7(a1, a2, a3, 310, v1, v1, a5);
}

// Address range: 0x35340c - 0x353577
int64_t function_35340c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35340c
    int64_t v1; // 0x35340c
    return function_cf3c7(a1, a2, a3, a4, v1, v1, 0x34e5d7);
}

// Address range: 0x353577 - 0x3536e2
int64_t function_353577(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x3d0a5b59; // bp-24, 0x3535d4
    int64_t v2 = (int64_t)&v1; // 0x353623
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x35362b
    *(int64_t *)(v2 - 8) = v3;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x353633
    *(int64_t *)(v2 - 24) = v2;
    *(int64_t *)(v2 - 32) = *v4;
    int64_t v5 = *v4; // 0x35364e
    int64_t * v6 = (int64_t *)(v5 - 8); // 0x353652
    int64_t v7 = v5 - 16; // 0x353653
    *(int64_t *)v7 = v7;
    *v6 = a7;
    int64_t * v8 = (int64_t *)(v5 + 16); // 0x353674
    *v8 = a7;
    int64_t * v9 = (int64_t *)v5; // 0x353678
    *v6 = v5;
    *v9 = v5;
    int64_t * v10 = (int64_t *)(v5 + 8); // 0x35369d
    *(int64_t *)(v5 + 40) = v3;
    int64_t v11 = v5 + 24; // 0x3536b8
    *v10 = v11;
    int64_t v12 = *(int64_t *)v11; // 0x3536c7
    *v8 = v12;
    *v10 = v12;
    int64_t v13; // 0x353577
    return function_cf3c7(a1, *v9, a3, a4, v13, a6, v1);
}

// Address range: 0x3536e2 - 0x353833
int64_t function_3536e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5; // bp-40, 0x353781
    int64_t v2 = (int64_t)&v1; // 0x3537f9
    int64_t v3 = v2 + 8; // 0x353801
    v1 = *(int64_t *)v3;
    *(int64_t *)(v2 - 8) = v3;
    int64_t v4; // 0x3536e2
    return function_cf3c7(a1, a2, a3, a4, v4, v4, a5);
}

// Address range: 0x353833 - 0x3539b0
int64_t function_353833(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x34ed33; // bp-48, 0x3538d5
    return function_cf3c7(a2, a2, a3, a4, a5, a6, (int64_t)&v1 + 8);
}

// Address range: 0x3539b0 - 0x353afa
int64_t function_3539b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3539b0
    int64_t v1; // bp-48, 0x3539b0
    int64_t v2 = (int64_t)&v1; // 0x353a2b
    v1 = v2 + 8;
    int64_t * v3 = (int64_t *)(v2 + 40); // 0x353a4d
    int64_t v4 = *v3; // 0x353a4d
    v1 = v4;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x353a51
    *v5 = v4;
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x353a63
    v1 = v6;
    *v5 = v4;
    int64_t v7 = v2 + 16; // 0x353a89
    *(int64_t *)v7 = v1;
    v1 = a3;
    *v5 = v6;
    int64_t * v8 = (int64_t *)(v2 - 16); // 0x353a8f
    *v8 = v6;
    *v3 = v6;
    int64_t v9 = v1; // 0x353a9c
    v1 = 0x2ca8204e;
    *v5 = v7;
    *v8 = v1;
    return function_cf3c7(a1, a2, v9, 0x34f005, a5, a6, 0x1649cc07);
}

// Address range: 0x353afa - 0x353c38
int64_t function_353afa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x353afa
    int64_t v1; // bp-32, 0x353afa
    v1 = (int64_t)&v1 + 16;
    bool v2; // 0x353afa
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}
