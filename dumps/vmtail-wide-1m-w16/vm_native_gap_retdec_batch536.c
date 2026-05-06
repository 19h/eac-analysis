/*
 * Targeted RetDec C for native executable gap queue batch 536.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x35148a-0x35168a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35168a-0x35188a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35188a-0x351a8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x351a8a-0x351c8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x464e34-0x465034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x465034-0x465234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x465234-0x465434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x465434-0x465634 rank=- name=- kind=- bytes=- uncovered=-
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
void unknown_b6ccb9(void);
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
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
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

int64_t function_35148a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3515d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3516f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35183e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35198f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_351ac4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_351c41(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_464e34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_464e68(int64_t a1);
int64_t function_464eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_464f03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_464fc7(void);
int64_t function_465002(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46502e(int64_t a1, int64_t a2);
int64_t function_465063(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4650da(int64_t a1);
int64_t function_465100(void);
int64_t function_465118(int64_t a1, int64_t a2);
int64_t function_465135(void);
int64_t function_465172(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_46518f(void);
int64_t function_4651b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4651f8(void);
int64_t function_465293(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_46533e(int64_t a1);
int64_t function_46534c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_465378(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4653b4(int64_t a1);
int64_t function_4653b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_465403(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_465423(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_46549e(int64_t a1);
int64_t function_4654aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4654f6(int64_t a1);
int64_t function_46550d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4655e6(int64_t a1);
int64_t function_587a449f();
int64_t function_782e2750();
int64_t function_cf3c7();
int64_t function_ffffffffea0199a2();

// Address range: 0x35148a - 0x3515d5
int64_t function_35148a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x35148a
    int64_t v1; // 0x35148a
    return function_cf3c7(a1, a2, a3, a4, v1, a6, 0x35153b04);
}

// Address range: 0x3515d5 - 0x3516f9
int64_t function_3515d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3515d5
    int64_t v1; // bp-56, 0x3515d5
    v1 = (int64_t)&v1;
    int64_t v2 = a4; // bp-48, 0x3516c0
    int64_t v3; // 0x3515d5
    return function_cf3c7((int64_t)&v2 + 16, a2, a3, v3, v3, v3, 169);
}

// Address range: 0x3516f9 - 0x35183e
int64_t function_3516f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3516f9
    int64_t v1; // bp-40, 0x3516f9
    int64_t v2; // 0x3516f9
    return function_cf3c7(a1, a2, a3, (int64_t)&v1, v2, v2, v2);
}

// Address range: 0x35183e - 0x35198f
int64_t function_35183e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35183e
    int64_t v1; // bp-48, 0x35183e
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x35183e
    return function_cf3c7(a1, a2, a3, a4, a5, v2, 0x34b433);
}

// Address range: 0x35198f - 0x351ac4
int64_t function_35198f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x35198f
    int64_t v1; // 0x35198f
    return function_cf3c7(a1, a2, v1, a4, a5, a6, 0x34b6a6);
}

// Address range: 0x351ac4 - 0x351bff
int64_t function_351ac4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x351ac4
    int64_t v1; // bp-40, 0x351ac4
    int64_t v2 = (int64_t)&v1; // 0x351bc5
    v1 = 169;
    *(int64_t *)(v2 + 32) = 169;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x351bd5
    int64_t v4 = *v3; // 0x351bd5
    v1 = v4;
    *(int64_t *)(v2 - 8) = v4;
    int64_t v5 = *(int64_t *)(v2 + 16); // 0x351beb
    *v3 = v5;
    v1 = v5;
    int64_t v6; // 0x351ac4
    return function_cf3c7(a1, a2, a3, v6, v6, v6, a4);
}

// Address range: 0x351c41 - 0x351c50
int64_t function_351c41(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x351c41
    int64_t result; // 0x351c41
    bool v1; // 0x351c41
    if (v1) {
        // 0x351ca9
        return result;
    }
    // 0x351c43
    *(int32_t *)a1 = (int32_t)result;
    int64_t v2; // 0x351c41
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    char * v4 = (char *)(a4 - 127); // 0x351c48
    *v4 = *v4 + (char)a4;
    return function_782e2750((v1 ? -4 : 4) + a1);
}

// Address range: 0x464e34 - 0x464e5c
int64_t function_464e34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x464e34
    int64_t v1; // 0x464e34
    *(char *)a1 = (char)(v1 | v1);
    return v1 + 0x25809cd6 & 0xc7f451af | 0x380bae50;
}

// Address range: 0x464e68 - 0x464e69
int64_t function_464e68(int64_t a1) {
    // 0x464e68
    int64_t result; // 0x464e68
    return result;
}

// Address range: 0x464eb0 - 0x464efa
int64_t function_464eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x464eb0
    int64_t result; // 0x464eb0
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x464f03 - 0x464f41
int64_t function_464f03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x464f03
    int64_t v2 = (int64_t)*(int32_t *)(4 * result + a4); // 0x464f03
    uint64_t v3 = -0x2a5b1cb2 * v2; // 0x464f03
    char * v4 = (char *)(a1 + 22); // 0x464f0b
    unsigned char v5 = *v4; // 0x464f0b
    char v6 = v3 != -0x2a5b1cb200000000 * v2 >> 32; // 0x464f0b
    char v7 = v6 + (char)(v3 / 256); // 0x464f0b
    char v8 = v5 - v7; // 0x464f0b
    *v4 = v8;
    if (v5 >= v7) {
        // 0x464f10
        return result;
    }
    bool v9 = v3 != -0x2a5b1cb200000000 * v2 >> 32 ? v7 != -1 | v5 < v8 - v6 : v5 < v7; // 0x464f0b
    char * v10 = (char *)(a1 + 28); // 0x464f32
    *v10 = (char)v9 - (char)(result / 256) + *v10;
    *(int32_t *)a1 = *(int32_t *)&v1;
    return result & 0xd36a2300 | (int64_t)__asm_in((int16_t)a3) & 0xd36a23e6 | 0x2c95dc19;
}

// Address range: 0x464fc7 - 0x464fc8
int64_t function_464fc7(void) {
    // 0x464fc7
    int64_t result; // 0x464fc7
    return result;
}

// Address range: 0x465002 - 0x465012
int64_t function_465002(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x465002
    if (a4 != 1) {
        v1 = function_464fc7();
    }
    int64_t result = v1;
    *(int32_t *)result = 0x2000000 * (int32_t)result;
    return result;
}

// Address range: 0x46502e - 0x465032
int64_t function_46502e(int64_t a1, int64_t a2) {
    // 0x46502e
    int64_t v1; // 0x46502e
    return v1 & -0xff01 | (int64_t)"rerror";
}

// Address range: 0x465063 - 0x4650da
int64_t function_465063(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a3; // 0x465063
    int64_t v3 = a1; // 0x465063
    bool v4; // 0x465063
    if (a4 != 1 != v4) {
        int32_t * v5 = (int32_t *)(a2 - 0x6481ecc2); // 0x465067
        int32_t v6 = a3; // 0x465067
        *v5 = *v5 - v6;
        int64_t v7; // 0x465063
        char v8 = v7; // 0x46506d
        char v9 = 2 * v8; // 0x46506d
        if (v9 < 0 == (v9 ^ v8) < 0) {
            // 0x465089
            return v7 & -256 & -256 | (int64_t)__asm_in((int16_t)a3 & -256 | 217);
        }
        // 0x465071
        *(char *)a1 = *(char *)&v1;
        v3 = (v4 ? -1 : 1) + a1;
        __asm_in_133((int16_t)a3);
        v2 = (int64_t)(*(int32_t *)(2 * v3 + v7) & v6);
    }
    char * v10 = (char *)(v2 + 112); // 0x465084
    *v10 = *v10 | (char)v3;
    int64_t v11 = v3 & 0xffffffff;
    return v11 & -256 | (int64_t)__asm_in((int16_t)v2 & -256 | 217);
}

// Address range: 0x4650da - 0x4650e5
int64_t function_4650da(int64_t a1) {
    // 0x4650da
    return __asm_hlt();
}

// Address range: 0x465100 - 0x465101
int64_t function_465100(void) {
    // 0x465100
    int64_t result; // 0x465100
    return result;
}

// Address range: 0x465118 - 0x46511b
int64_t function_465118(int64_t a1, int64_t a2) {
    // 0x465118
    int64_t result; // 0x465118
    *(char *)a1 = (char)(result / 256 & result);
    return result;
}

// Address range: 0x465135 - 0x465139
int64_t function_465135(void) {
    // 0x465135
    int64_t result; // 0x465135
    return result;
}

// Address range: 0x465172 - 0x465185
int64_t function_465172(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x465172
    int64_t v1; // 0x465172
    int64_t v2 = v1 & 0xffffffff; // 0x465173
    bool v3; // 0x465172
    if (v3) {
        v2 = function_465100();
    }
    int64_t v4 = v2 & 77 | 178; // 0x465175
    char * v5 = (char *)(9 * a3); // 0x465177
    *v5 = *v5 + (char)(v2 / 256);
    char * v6 = (char *)((v4 | v2 & -256) + 25); // 0x46517d
    *v6 = *v6 - (char)v4;
    return function_587a449f();
}

// Address range: 0x46518f - 0x465190
int64_t function_46518f(void) {
    // 0x46518f
    int64_t result; // 0x46518f
    return result;
}

// Address range: 0x4651b7 - 0x4651dc
int64_t function_4651b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4651b7
    int64_t v1; // 0x4651b7
    *(int32_t *)a1 = (int32_t)v1;
    return (int64_t)*(int32_t *)0x41d01d2f4c111061;
}

// Address range: 0x4651f8 - 0x4651fa
int64_t function_4651f8(void) {
    // 0x4651f8
    return function_46518f();
}

// Address range: 0x465293 - 0x46530c
int64_t function_465293(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x465293
    int64_t result; // 0x465293
    bool v1; // 0x465293
    if (true != !v1) {
        // 0x465295
        return result;
    }
    // 0x4652f6
    *(int32_t *)0x2086e833 = *(int32_t *)0x2086e833 ^ 0x3248e81;
    return result & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x46533e - 0x465347
int64_t function_46533e(int64_t a1) {
    // 0x46533e
    int64_t result; // 0x46533e
    return result;
}

// Address range: 0x46534c - 0x46535f
int64_t function_46534c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x46534c
    return function_ffffffffea0199a2(0x8bfaf27a);
}

// Address range: 0x465378 - 0x4653ac
int64_t function_465378(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // bp-8, 0x46537d
    int32_t * v2 = (int32_t *)(a4 - 93); // 0x46537e
    *v2 = *v2 & (int32_t)(int64_t)&v1;
    __asm_outsd((int16_t)a3, *(int32_t *)0x9a2e048e);
    int64_t v3; // 0x465378
    int64_t result = v3 & 0xffffffff; // 0x46539e
    if ((v3 & 225) != 0) {
        result = function_4653b8(a1, 0x9a2e048e, 0x83163865, a4, (int64_t)&g2);
    }
    // 0x4653a0
    float80_t v4; // 0x465378
    *(float80_t *)(a1 + 104) = __asm_fbstp(v4);
    char * v5 = (char *)(a4 + 0x384a010); // 0x4653a5
    *v5 = *v5 + (char)a4;
    return result;
}

// Address range: 0x4653b4 - 0x4653b5
int64_t function_4653b4(int64_t a1) {
    // 0x4653b4
    int64_t result; // 0x4653b4
    return result;
}

// Address range: 0x4653b8 - 0x4653cf
int64_t function_4653b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4653b8
    return a4 & 0xffffff00 | (int64_t)*(char *)a5;
}

// Address range: 0x465403 - 0x46540b
int64_t function_465403(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x465403
    int64_t v1; // 0x465403
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x465423 - 0x46549b
int64_t function_465423(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x465423
    int64_t v1; // 0x465423
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int32_t v4 = a3; // 0x465423
    int32_t v5 = a1;
    bool v6; // 0x465423
    int32_t v7 = v6; // 0x465423
    uint32_t v8 = v4 + v5 + v7; // 0x465423
    int32_t v9 = v8 + v7; // 0x465423
    if (((v9 ^ v4) & (v9 ^ v5)) < 0) {
        // 0x465428
        return v2 + 0x4a853383 & 0xffffffff;
    }
    char * v10 = (char *)(a1 + 0x545c4617); // 0x465450
    char v11 = a4 / 256; // 0x465450
    *v10 = *v10 + v11;
    char * v12 = (char *)(a5 - 0x25685b86 + v3); // 0x465457
    char v13 = *v12 + (char)v1; // 0x465457
    *v12 = v13;
    if (v13 != 0) {
        // 0x465462
        return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
    }
    int64_t v14 = v8; // 0x465423
    int32_t * v15 = (int32_t *)v14; // 0x465492
    *v15 = 0x80000000 * (int32_t)(*(char *)&v3 > -1 - v11) | *v15 / 2;
    char v16 = *(char *)v14; // 0x465496
    *(int32_t *)(v3 + 89) = 256 * (int32_t)(v16 | (char)(v8 / 256)) | v8 & -0xff01;
    return (v2 + 86) % 256 | v2 & -256;
}

// Address range: 0x46549e - 0x4654a2
int64_t function_46549e(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 1); // 0x46549e
    int64_t result; // 0x46549e
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x4654aa - 0x4654b1
int64_t function_4654aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4654aa
    int64_t result; // 0x4654aa
    __asm_outsd((int16_t)a3, (int32_t)result);
    *(char *)a3 = (char)a6;
    return result;
}

// Address range: 0x4654f6 - 0x4654fb
int64_t function_4654f6(int64_t a1) {
    // 0x4654f6
    int64_t result; // 0x4654f6
    __asm_out(112, (char)result);
    return result;
}

// Address range: 0x46550d - 0x4655bc
int64_t function_46550d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x46550d
    int64_t v1; // 0x46550d
    bool v2; // 0x46550d
    if (!v2) {
        // 0x465511
        *(char *)a4 = (char)(v1 ^ a4);
        uint32_t v3 = *(int32_t *)-0x69f2da4f80909b77; // 0x465538
        int64_t result = v3; // 0x465538
        *(char *)a1 = (char)v3;
        int32_t * v4 = (int32_t *)result; // 0x465542
        *v4 = *v4 - (int32_t)v1;
        return result;
    }
    if (v2) {
        // 0x465520
        int64_t result2; // 0x46550d
        return result2;
    }
    unsigned char v5 = (char)v1; // 0x46557b
    char v6 = v5 - 64; // 0x46557b
    int64_t result3 = v1 & -256 | (int64_t)v6; // 0x46557b
    if (v5 < 64 == v6 > -1) {
        // 0x465587
        return result3 & 0xb1cbdc5a ^ 0x4e3423db;
    }
    // 0x465520
    return result3;
}

// Address range: 0x4655e6 - 0x4655e7
int64_t function_4655e6(int64_t a1) {
    // 0x4655e6
    int64_t result; // 0x4655e6
    return result;
}
