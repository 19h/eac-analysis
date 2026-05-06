/*
 * Targeted RetDec C for native executable gap queue batch 602.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1ba7ce-0x1ba9ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ba9ce-0x1babce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1babce-0x1badce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1badce-0x1bafce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1bafce-0x1bb1ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1da25a-0x1da45a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1da45a-0x1da65a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1da65a-0x1da85a rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1ba7ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ba803(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ba96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1baac6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1bac76(void);
int64_t function_1bac9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bace1(int64_t a1);
int64_t function_1bad0e(int64_t a1);
int64_t function_1bae31(void);
int64_t function_1bae4b(void);
int64_t function_1bae54(int64_t a1);
int64_t function_1bae78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1baee9(int64_t a1);
int64_t function_1baeef(void);
int64_t function_1baf08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1baf7a(int64_t a1);
int64_t function_1baf8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1bafd7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1bb123(int64_t a1, int64_t a2);
int64_t function_1bb13a(void);
int64_t function_1bb169(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1bb19a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da235();
int64_t function_1da24b();
int64_t function_1da25a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da2d6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1da2f6(void);
int64_t function_1da312(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da3a4(int64_t a1);
int64_t function_1da3ec(void);
int64_t function_1da423(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1da472(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1da4e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da4ed(void);
int64_t function_1da542(void);
int64_t function_1da563(void);
int64_t function_1da56e(void);
int64_t function_1da581(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da5e5(void);
int64_t function_1da5fe(void);
int64_t function_1da602(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1da638(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1da703(void);
int64_t function_1da709(void);
int64_t function_1da718(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da729(void);
int64_t function_1da74b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da79e(void);
int64_t function_1da7ac(void);
int64_t function_1da7d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1da7e1(void);
int64_t function_1da7e6(void);
int64_t function_1da7f3(int64_t a1);
int64_t function_1da815(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2069db2();
int64_t function_6853b33b();
int64_t function_83a129e();
int64_t function_cdc60();
int64_t function_ffffffffad630927();
int64_t function_ffffffffb472ca9f();
int64_t function_ffffffffbfb8a923();
int64_t function_ffffffffe6a7ad0b();
int64_t function_ffffffffec1d9741();
int64_t unknown_106a993d();
int64_t unknown_1f908d72();
int64_t unknown_205c6b5();
int64_t unknown_20a018de();
int64_t unknown_20faa88a();
int64_t unknown_3123a929();
int64_t unknown_3a4142f2();
int64_t unknown_3ab34af4();
int64_t unknown_3b030788();
int64_t unknown_3b1fe298();
int64_t unknown_3dd8dca3();
int64_t unknown_63642d2f();
int64_t unknown_667cdabd();
int64_t unknown_ffffffff9170f492();
int64_t unknown_ffffffff91eb323e();
int64_t unknown_ffffffff9a660794();
int64_t unknown_ffffffffa07743ac();
int64_t unknown_ffffffffb782eb47();
int64_t unknown_ffffffffc61183fc();
int64_t unknown_ffffffffcc8bd431();
int64_t unknown_ffffffffe3a0aecf();
int64_t unknown_fffffffff51bd9b1();
int64_t unknown_fffffffff5c7c9f9();

// Address range: 0x1ba7ce - 0x1ba803
int64_t function_1ba7ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a1;
    int32_t * v3 = (int32_t *)(a2 + 35 + a3); // 0x1ba7ce
    int32_t v4 = a3; // 0x1ba7ce
    *v3 = *v3 + v4;
    *(int32_t *)a1 = *(int32_t *)&v2 + v4;
    int64_t v5; // 0x1ba7ce
    if ((char)((uint64_t)v5 / 256) < (char)a3) {
        // 0x1ba7e0
        __asm_in(-112);
        unknown_3ab34af4();
    }
    // 0x1ba7f3
    *(int32_t *)v1 = *(int32_t *)&v1 - 0x17d6a1d0;
    return function_ffffffffe6a7ad0b();
}

// Address range: 0x1ba803 - 0x1ba96a
int64_t function_1ba803(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ba803
    int64_t v1; // 0x1ba803
    int64_t v2 = 2 * v1 & 0xfffffffe; // 0x1ba807
    char * v3 = (char *)v2; // 0x1ba80a
    *v3 = *v3 - 100;
    int64_t v4; // bp-24, 0x1ba803
    int64_t v5 = (int64_t)&v4; // 0x1ba86e
    v4 = v5;
    int64_t v6 = v5 - 8; // 0x1ba876
    int64_t * v7 = (int64_t *)v6; // 0x1ba877
    int64_t * v8 = (int64_t *)(v5 - 16); // 0x1ba87f
    *v8 = a2;
    int64_t * v9 = (int64_t *)(v5 - 24); // 0x1ba88c
    *v9 = a1;
    int64_t * v10 = (int64_t *)(v5 - 32); // 0x1ba894
    *v10 = v2;
    *v9 = v6;
    int64_t * v11 = (int64_t *)(v5 + 16); // 0x1ba8a8
    int64_t v12 = *v11; // 0x1ba8a8
    *v9 = v12;
    *v10 = v12;
    *v9 = 0x1f832e34;
    *v10 = v12;
    *v7 = *v9;
    *v9 = v4;
    *v11 = *v8;
    *v9 = *v7;
    *v7 = v5 + 8;
    return function_cdc60(*v9, *v8, (int32_t)a3 + (int32_t)a2, a4, a5);
}

// Address range: 0x1ba96a - 0x1baac6
int64_t function_1ba96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ba96a
    int64_t v1; // bp-56, 0x1ba96a
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x1ba96a
    return function_cdc60(a1, a2, (int32_t)a3, v2, a5);
}

// Address range: 0x1baac6 - 0x1bac76
int64_t function_1baac6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1baac6
    int64_t v1; // bp-32, 0x1baac6
    int64_t v2 = (int64_t)&v1; // 0x1bab53
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x1bab6a
    int64_t * v4 = (int64_t *)v3; // 0x1bab6b
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x1bab6e
    *v4 = v5;
    int64_t v6 = v2 - 16; // 0x1bab72
    int64_t * v7 = (int64_t *)v6; // 0x1bab72
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x1bab7e
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x1bab98
    *v7 = v2;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x1babae
    *v8 = a1;
    *v9 = v6;
    *v4 = *v8;
    *v8 = a2;
    *v8 = v3;
    int64_t v11 = *v7; // 0x1bac58
    *v8 = v11;
    *v9 = v11;
    return function_cdc60(*v8, *v8, (int32_t)a3, a4, a5);
}

// Address range: 0x1bac76 - 0x1bac7b
int64_t function_1bac76(void) {
    // 0x1bac76
    int64_t result; // 0x1bac76
    return result;
}

// Address range: 0x1bac9f - 0x1bacab
int64_t function_1bac9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x7bf57800); // 0x1baca4
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x1bac9f
    return result;
}

// Address range: 0x1bace1 - 0x1bace2
int64_t function_1bace1(int64_t a1) {
    // 0x1bace1
    int64_t result; // 0x1bace1
    return result;
}

// Address range: 0x1bad0e - 0x1bad11
int64_t function_1bad0e(int64_t a1) {
    // 0x1bad0e
    int64_t result; // 0x1bad0e
    return result;
}

// Address range: 0x1bae31 - 0x1bae34
int64_t function_1bae31(void) {
    // 0x1bae31
    int64_t result; // 0x1bae31
    return result;
}

// Address range: 0x1bae4b - 0x1bae4c
int64_t function_1bae4b(void) {
    // 0x1bae4b
    int64_t result; // 0x1bae4b
    return result;
}

// Address range: 0x1bae54 - 0x1bae55
int64_t function_1bae54(int64_t a1) {
    // 0x1bae54
    int64_t result; // 0x1bae54
    return result;
}

// Address range: 0x1bae78 - 0x1baece
int64_t function_1bae78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1bae78
    int64_t v1; // 0x1bae78
    int64_t v2 = v1 + 0xe8a840e8; // 0x1bae78
    if (a4 == 0) {
        // 0x1baeab
        unknown_fffffffff51bd9b1();
        if ((v2 & 224) == 0) {
            function_1bae4b();
        }
        // 0x1baeb2
        *(int32_t *)a1 = (int32_t)(a2 + a1) + (int32_t)a1;
        return unknown_ffffffffe3a0aecf();
    }
    int16_t v3 = a3; // 0x1bae89
    __asm_out(v3, (int32_t)v2);
    char v4 = (char)v2 ^ -94; // 0x1bae8f
    __asm_out_133(-2, v4);
    __asm_out_134(v3, v4);
    int64_t result = unknown_3b1fe298(); // 0x1bae92
    unsigned char v5 = (char)a4 % 32; // 0x1bae97
    if (v5 != 0) {
        char * v6 = (char *)(2 * v1); // 0x1bae97
        unsigned char v7 = *v6; // 0x1bae97
        *v6 = v7 >> v5 | v7 << 8 - v5;
    }
    return result;
}

// Address range: 0x1baee9 - 0x1baeeb
int64_t function_1baee9(int64_t a1) {
    // 0x1baee9
    int64_t result; // 0x1baee9
    return result;
}

// Address range: 0x1baeef - 0x1baefb
int64_t function_1baeef(void) {
    // 0x1baeef
    unknown_fffffffff5c7c9f9();
    return function_ffffffffec1d9741();
}

// Address range: 0x1baf08 - 0x1baf0d
int64_t function_1baf08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1baf08
    int64_t result; // 0x1baf08
    *(int32_t *)a1 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x1baf7a - 0x1baf86
int64_t function_1baf7a(int64_t a1) {
    // 0x1baf7a
    int64_t result; // 0x1baf7a
    return result;
}

// Address range: 0x1baf8d - 0x1bafd3
int64_t function_1baf8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1baf8d
    int64_t v1; // 0x1baf8d
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = unknown_ffffffff9a660794(); // 0x1baf93
    bool v5; // 0x1baf8d
    if (true != !v5) {
        int32_t * v6 = (int32_t *)(unknown_3dd8dca3() + v1 & 0xffffffff); // 0x1bafa4
        *v6 = *v6 - 0x5dba4668;
        unknown_ffffffffa07743ac();
        char v7 = *(char *)&v3; // 0x1bafab
        int3_t v8; // 0x1baf8d
        int3_t v9 = v8 + 2; // 0x1bafad
        __frontend_reg_store_fpr(v9, __frontend_reg_load_fpr(v9) + __frontend_reg_load_fpr(v8));
        int3_t v10 = v8 + 1; // 0x1bafad
        uint64_t v11 = unknown_667cdabd(); // 0x1bafb7
        unsigned char v12 = *(char *)(v11 % 256 + (v2 & -256 | (int64_t)(v7 | (char)v2))); // 0x1bafbc
        *(char *)-0x5025d93c = *(char *)-0x5025d93c + (char)(v2 / 256);
        float80_t v13 = __frontend_reg_load_fpr(v10); // 0x1bafc4
        __frontend_reg_store_fpr(v10, v13 * (float80_t)*(float32_t *)(v3 + 0x1448b7330));
        v4 = v11 & -256 | (int64_t)v12;
    }
    int64_t v14 = v4;
    return (v14 + 201) % 256 | v14 & -256;
}

// Address range: 0x1bafd7 - 0x1bb03e
int64_t function_1bafd7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1bafd7
    int64_t v1; // 0x1bafd7
    uint64_t v2 = v1;
    int64_t v3 = a4;
    char v4 = __asm_in(-86); // 0x1bafdc
    *(int32_t *)a4 = 0;
    int32_t * v5 = (int32_t *)(a6 - 17); // 0x1bafea
    *v5 = 2 * *v5;
    char v6 = *(char *)0x5f7eb4f5 + (char)(v2 / 256); // 0x1bafee
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x1bafee
    *(char *)0x5f7eb4f5 = v6;
    if (v7 % 2 != 0) {
        // 0x1bb030
        return v1 & -256 | (int64_t)v4;
    }
    int64_t v8 = v2 & 0x574e09fb; // 0x1baff6
    int64_t v9 = __asm_int3(); // 0x1baffd
    char v10 = *(char *)&v3; // 0x1bb00a
    unsigned char v11 = (char)v3 % 32; // 0x1bb00e
    if (v11 != 0) {
        char * v12 = (char *)(v8 - 24); // 0x1bb00e
        *v12 = *v12 << v11;
    }
    int64_t v13 = v9 + 0xfff0ed9f; // 0x1baffe
    int32_t * v14 = (int32_t *)(v8 + 8 + 4 * ((v13 - (int64_t)((int32_t)v13 < 0x6ec0f701)) % 256 | v13 & 0xffffff00)); // 0x1bb015
    *v14 = *v14 + (int32_t)a2;
    uint32_t v15 = *(int32_t *)-0x1f7097d9; // 0x1bb020
    uint32_t v16 = v15 + (int32_t)a1; // 0x1bb020
    *(int32_t *)-0x1f7097d9 = v16;
    if (v16 < v15 || v16 == 0) {
        // 0x1bb02a
        int16_t result; // 0x1bafd7
        return result;
    }
    int64_t result2 = unknown_106a993d(); // 0x1bb037
    char * v17 = (char *)v8; // 0x1bb03c
    char v18 = *v17; // 0x1bb03c
    *v17 = v18 | (char)(((256 * (int64_t)(v10 + (char)(a3 / 256)) | a3 % 256) + a1) / 256);
    return result2;
}

// Address range: 0x1bb123 - 0x1bb12d
int64_t function_1bb123(int64_t a1, int64_t a2) {
    // 0x1bb123
    int64_t v1; // 0x1bb123
    *(char *)a1 = (char)v1;
    bool v2; // 0x1bb123
    int64_t v3 = v2 ? -1 : 1; // 0x1bb123
    return unknown_63642d2f(v3 + a1, v3 + a2) & -0xff01 | (int64_t)&g1;
}

// Address range: 0x1bb13a - 0x1bb13d
int64_t function_1bb13a(void) {
    // 0x1bb13a
    int64_t v1; // 0x1bb13a
    return function_1bb19a(v1, v1, v1, v1);
}

// Address range: 0x1bb169 - 0x1bb19a
int64_t function_1bb169(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1bb169
    unknown_1f908d72();
    int64_t v1; // 0x1bb169
    uint64_t v2 = v1 & 0xffffffff; // 0x1bb172
    int32_t v3 = __asm_in_135(-108); // 0x1bb174
    __asm_out_134((int16_t)((v2 | 0x100000000 * a3) % v2), (char)v3);
    *(int32_t *)a1 = v3;
    float80_t v4; // 0x1bb169
    *(float32_t *)(a4 + 0x662bbb00) = (float32_t)v4;
    int64_t result = unknown_ffffffff9170f492((int64_t)(v3 | 0x1e8228e)); // 0x1bb18c
    char * v5 = (char *)(v1 + 0x6a50c99); // 0x1bb191
    *v5 = *v5 + (char)a4;
    return result;
}

// Address range: 0x1bb19a - 0x1bb1a5
int64_t function_1bb19a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 11); // 0x1bb19c
    uint32_t v2 = *v1; // 0x1bb19c
    int64_t v3; // 0x1bb19a
    uint32_t v4 = (int32_t)v3; // 0x1bb19c
    int32_t v5 = v2 + v4; // 0x1bb19c
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x1bb19c
    *v1 = v5;
    return v3 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v2) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v2 % 16 + v4 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | 512;
}

// Address range: 0x1da25a - 0x1da274
int64_t function_1da25a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da25a
    int64_t v1; // 0x1da25a
    bool v2; // 0x1da25a
    if (v2) {
        v1 = function_1da24b();
    }
    uint32_t v3 = (int32_t)a1;
    *(int32_t *)a1 = v3 / 2 | 0x80000000 * v3;
    *(int32_t *)0x54c201e85da13a1a = (int32_t)v1 ^ -0x55fe1751;
    return function_1da235();
}

// Address range: 0x1da2d6 - 0x1da2f6
int64_t function_1da2d6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1da2d6
    int64_t v1; // 0x1da2d6
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x1decb2be); // 0x1da2d8
    *v3 = *v3 + (int32_t)a3;
    char * v4 = (char *)(v2 + 0x4eec0000); // 0x1da2de
    *v4 = *v4 + (char)v2;
    int32_t * v5 = (int32_t *)(v1 + 0x3a013300); // 0x1da2e6
    *v5 = *v5 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x1da2f6 - 0x1da307
int64_t function_1da2f6(void) {
    // 0x1da2f6
    unknown_ffffffffc61183fc();
    return function_2069db2();
}

// Address range: 0x1da312 - 0x1da338
int64_t function_1da312(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da312
    int64_t v1; // 0x1da312
    uint64_t v2 = v1;
    *(char *)0xbcddf68d01e8c8 = (char)v2;
    unknown_3123a929();
    int32_t * v3 = (int32_t *)(v2 % 256 | a4 & -256); // 0x1da333
    *v3 = *v3 + (int32_t)a2;
    return (int64_t)*(int32_t *)-0x72d6fedcf9ebff6d;
}

// Address range: 0x1da3a4 - 0x1da3a7
int64_t function_1da3a4(int64_t a1) {
    // 0x1da3a4
    int64_t result; // 0x1da3a4
    return result;
}

// Address range: 0x1da3ec - 0x1da3f4
int64_t function_1da3ec(void) {
    // 0x1da3ec
    return unknown_3a4142f2();
}

// Address range: 0x1da423 - 0x1da464
int64_t function_1da423(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 67); // 0x1da457
    int64_t v2; // 0x1da423
    *v1 = (char)((uint64_t)v2 / 256);
    *(char *)(a3 + 33) = *v1;
    while (true) {
        // continue -> 0x1da462
    }
}

// Address range: 0x1da472 - 0x1da4e0
int64_t function_1da472(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1da472
    int64_t v1; // 0x1da472
    int32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x1da479
    *(char *)a1 = (char)v1;
    bool v3; // 0x1da472
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x1da47c
    int64_t v5 = v1 & 0xffffffff; // 0x1da481
    int64_t result = unknown_3b030788((v4 + v1) % 256 | v4 & -256, v5); // 0x1da482
    char * v6 = (char *)((int64_t)((v2 + 122) % 256 | v2 & -256) + 16); // 0x1da488
    *v6 = *v6 | (char)(v1 / 256);
    int32_t v7 = (int32_t)result >> 31; // 0x1da48b
    int32_t * v8 = (int32_t *)result; // 0x1da48c
    uint32_t v9 = *v8; // 0x1da48c
    *v8 = v9 / 8 | 0x20000000 * v9;
    int32_t * v10 = (int32_t *)(v5 - 27); // 0x1da48f
    int32_t v11 = *v10; // 0x1da48f
    int32_t v12 = v11 + v7; // 0x1da48f
    *v10 = v12;
    if ((a4 & -0xff01 || (int64_t)&g2) == 1 || v12 == 0) {
        // 0x1da494
        return result;
    }
    if (((v12 ^ v11) & (v12 ^ v7)) < 0) {
        // 0x1da4d8
        return unknown_20a018de();
    }
    // 0x1da499
    return (result + 186) % 256 | result & -256;
}

// Address range: 0x1da4e3 - 0x1da4e9
int64_t function_1da4e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da4e3
    int64_t result; // 0x1da4e3
    return result;
}

// Address range: 0x1da4ed - 0x1da4f3
int64_t function_1da4ed(void) {
    // 0x1da4ed
    int64_t result; // 0x1da4ed
    return result;
}

// Address range: 0x1da542 - 0x1da543
int64_t function_1da542(void) {
    // 0x1da542
    int64_t result; // 0x1da542
    return result;
}

// Address range: 0x1da563 - 0x1da569
int64_t function_1da563(void) {
    // 0x1da563
    int64_t result; // 0x1da563
    return result;
}

// Address range: 0x1da56e - 0x1da580
int64_t function_1da56e(void) {
    // 0x1da56e
    int64_t v1; // 0x1da56e
    if ((int32_t)v1 < 0x34f30c01) {
        function_1da542();
    }
    // 0x1da57b
    return function_6853b33b();
}

// Address range: 0x1da581 - 0x1da58b
int64_t function_1da581(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)((a3 ^ 255) - 0x3fb0f690); // 0x1da583
    int64_t result; // 0x1da581
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1da5e5 - 0x1da5e6
int64_t function_1da5e5(void) {
    // 0x1da5e5
    int64_t result; // 0x1da5e5
    return result;
}

// Address range: 0x1da5fe - 0x1da5ff
int64_t function_1da5fe(void) {
    // 0x1da5fe
    int64_t result; // 0x1da5fe
    return result;
}

// Address range: 0x1da602 - 0x1da636
int64_t function_1da602(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x1da602
    *(int32_t *)a1 = (int32_t)v2 + (int32_t)a1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v3 = (char *)(a1 + 0x1e85dc0); // 0x1da61c
    unsigned char v4 = *v3; // 0x1da61c
    unsigned char v5 = v4 + (char)(a3 / 256); // 0x1da61c
    unsigned char v6 = v5 + (char)((int32_t)v2 < 0x34c9e3e8); // 0x1da61c
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x1da61c
    *v3 = v6;
    if (v7 % 2 != 0) {
        function_1da5fe();
    }
    bool v8 = (int32_t)v2 < 0x34c9e3e8 ? v6 <= v4 : v5 < v4; // 0x1da61c
    int64_t v9 = a4 & -256 | 93; // 0x1da624
    unsigned char v10 = (char)a3; // 0x1da626
    unsigned char v11 = (char)v8 + (char)(v2 / 256); // 0x1da626
    bool v12 = v8 ? v11 != -1 | (char)v8 + v10 - v11 > v10 : v11 > v10; // 0x1da626
    uint32_t v13 = (int32_t)v9; // 0x1da628
    uint32_t v14 = *(int32_t *)v9 + v13; // 0x1da628
    bool v15 = v12 ? v14 + (int32_t)v12 <= v13 : v14 < v13; // 0x1da628
    int64_t v16 = unknown_ffffffffcc8bd431(); // 0x1da62b
    uint64_t v17 = v16 + 117 + (int64_t)v15; // 0x1da630
    while ((char)v17 - *(char *)&v1 >= 0) {
        // continue -> 0x1da633
    }
    // 0x1da635
    return v17 % 256 | v16 & -256;
}

// Address range: 0x1da638 - 0x1da662
int64_t function_1da638(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff91eb323e(); // 0x1da638
    unknown_ffffffffb782eb47();
    if (a4 != 1 && (char)(v1 + a3 / 256) != -14) {
        function_1da5e5();
    }
    // 0x1da649
    unknown_205c6b5();
    int64_t v2; // 0x1da638
    return v2 + 0xb5c8a12 & 0xffffffff;
}

// Address range: 0x1da703 - 0x1da704
int64_t function_1da703(void) {
    // 0x1da703
    int64_t result; // 0x1da703
    return result;
}

// Address range: 0x1da709 - 0x1da70c
int64_t function_1da709(void) {
    // 0x1da709
    int64_t result; // 0x1da709
    return result;
}

// Address range: 0x1da718 - 0x1da727
int64_t function_1da718(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da718
    bool v1; // 0x1da718
    if (!v1) {
        function_1da703();
    }
    int32_t * v2 = (int32_t *)(a3 - 0x7be8d426 + 4 * a4); // 0x1da71b
    *v2 = *v2 + (int32_t)a1;
    return function_83a129e();
}

// Address range: 0x1da729 - 0x1da72e
int64_t function_1da729(void) {
    // 0x1da729
    return function_ffffffffad630927();
}

// Address range: 0x1da74b - 0x1da761
int64_t function_1da74b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da74b
    int64_t v1; // 0x1da74b
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    uint32_t v3 = (int32_t)v1;
    uint32_t v4 = v3 + (int32_t)a3; // 0x1da757
    *(int32_t *)v1 = v4;
    uint32_t v5 = (int32_t)a4 % 32; // 0x1da759
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(v1 + 0x61813501); // 0x1da759
        uint32_t v7 = *v6; // 0x1da759
        *v6 = v7 >> v5 | (int32_t)(v4 < v3) << 32 - v5 | (int32_t)((int64_t)v7 << (int64_t)(33 - v5));
    }
    return v2 & -256 | a4 & 0xff00 | (v2 + 24) % 256;
}

// Address range: 0x1da79e - 0x1da7a6
int64_t function_1da79e(void) {
    // 0x1da79e
    return function_ffffffffb472ca9f();
}

// Address range: 0x1da7ac - 0x1da7b1
int64_t function_1da7ac(void) {
    // 0x1da7ac
    int64_t result; // 0x1da7ac
    return result;
}

// Address range: 0x1da7d5 - 0x1da7d8
int64_t function_1da7d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1da7d5
    return a4 & 0xffffffff;
}

// Address range: 0x1da7e1 - 0x1da7e6
int64_t function_1da7e1(void) {
    // 0x1da7e1
    return function_ffffffffbfb8a923();
}

// Address range: 0x1da7e6 - 0x1da7f3
int64_t function_1da7e6(void) {
    // 0x1da7e6
    int64_t v1; // 0x1da7e6
    bool v2; // 0x1da7e6
    return v1 + 0x870c109a + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x1da7f3 - 0x1da813
int64_t function_1da7f3(int64_t a1) {
    // 0x1da7f3
    int64_t v1; // 0x1da7f3
    uint64_t v2 = (0x100000000 * v1 >> 32) * (int64_t)*(int32_t *)(a1 + 0x13d0072); // 0x1da7f6
    int32_t v3 = v2 / 0x100000000; // 0x1da7f6
    unsigned char v4 = (char)((uint64_t)v1 / 256); // 0x1da7fc
    unsigned char v5 = (char)(v2 / 256) + v4; // 0x1da7fc
    bool v6 = v3 != 0 == (v3 != -1) ? v5 + (char)(v3 != 0 == (v3 != -1)) <= v4 : v5 < v4; // 0x1da7fc
    if (v5 == (char)(v3 != 0 == (v3 != -1)) || v6) {
        // 0x1da803
        return v2 + 0x81bf4d50 & 0xffffffff;
    }
    // 0x1da875
    return v2 & 0xffffffff;
}

// Address range: 0x1da815 - 0x1da857
int64_t function_1da815(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da815
    int64_t v1; // 0x1da815
    uint32_t v2 = (int32_t)v1; // 0x1da815
    uint32_t v3 = (int32_t)v1; // 0x1da815
    int32_t v4 = v3 + v2; // 0x1da815
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x1da815
    int16_t v6 = a3; // 0x1da81b
    __asm_in_136(v6);
    int64_t v7 = unknown_20faa88a(); // 0x1da81c
    int32_t * v8 = (int32_t *)((a4 & -256 | 239) + 0x13d0063); // 0x1da827
    *v8 = *v8 + (int32_t)a3;
    __asm_out(v6, (int32_t)v7);
    *(char *)0x6aa12f49 = *(char *)0x6aa12f49 + (char)(v1 / 256);
    int32_t * v9 = (int32_t *)((v1 & 0xffff00ff | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v2) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v3 % 16 + v2 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512) + 0xffffffce & 0xffffffff); // 0x1da853
    __asm_outsd(v6, *v9);
    __asm_outsd(v6, *v9);
    return 0x2d3199c4;
}
