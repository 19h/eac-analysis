/*
 * Targeted RetDec C for native executable gap queue batch 836.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xfb19c-0xfb39c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfb39c-0xfb59c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfb59c-0xfb79c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfb79c-0xfb99c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfb99c-0xfbb9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x332a23-0x332c23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x332c23-0x332e23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42501f-0x42521f rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
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
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
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
int128_t __asm_pmulhw(int128_t left, int128_t right);
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

int64_t function_332a23(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_332a9c(int64_t a1, int64_t a2);
int64_t function_332ad2(int64_t a1);
int64_t function_332aef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_332b7f(int64_t a1);
int64_t function_332b94(void);
int64_t function_332bbd(int64_t a1);
int64_t function_332c15(void);
int64_t function_332c8c(void);
int64_t function_332ca5(void);
int64_t function_332cba(void);
int64_t function_332cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_332d64(void);
int64_t function_332db5(void);
int64_t function_332dc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34afb815();
int64_t function_42501f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_425099(void);
int64_t function_4250cf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_425106(void);
int64_t function_425120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_425136(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42513b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6638368f();
int64_t function_71c059ef();
int64_t function_c6d58();
int64_t function_fb19c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_fb2ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fb3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_fb533(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_fb667(void);
int64_t function_fb6b9(void);
int64_t function_fb732(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fb74c(void);
int64_t function_fb7fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_fb824(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_fb8a1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_fb91d(void);
int64_t function_fb987(void);
int64_t function_fb9d4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fba23(void);
int64_t function_fba59(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fba84(void);
int64_t function_fbb44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_fbb7d(int64_t a1);
int64_t function_fbb84(void);
int64_t function_ffffffffe8d81f6d();
int64_t unknown_1417b18a();
int64_t unknown_2906be50();
int64_t unknown_3188e0d9();
int64_t unknown_3d11a002();
int64_t unknown_6071fdfa();
int64_t unknown_66ad87db();
int64_t unknown_ffffffffb404528d();
int64_t unknown_ffffffffd8e53811();

// Address range: 0xfb19c - 0xfb2ba
int64_t function_fb19c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xfb19c
    int64_t v1; // 0xfb19c
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_c6d58(a1, a2, a3, a4, a5, v1, 0x4b68aeb3, 0x942fc21, 0xe108d8a);
}

// Address range: 0xfb2ba - 0xfb3f8
int64_t function_fb2ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 310; // bp-24, 0xfb38d
    int64_t v2; // 0xfb2ba
    int64_t result = function_c6d58(a1, a2, a3, v2, v2, v2, (int64_t)&v1, (int64_t)&g2, (int64_t)&g2); // 0xfb3f3
    return result;
}

// Address range: 0xfb3f8 - 0xfb533
int64_t function_fb3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x38460b9; // bp-32, 0xfb4d6
    int64_t v2 = (int64_t)&v1; // 0xfb508
    *(int64_t *)(v2 - 8) = 0x38460b9;
    *(int64_t *)(v2 - 16) = 0x38460b9;
    int64_t v3; // 0xfb3f8
    int64_t result = function_c6d58(a1, a2, a3, a4, a5, v3, v1, (int64_t)&g2, (int64_t)&g2); // 0xfb52e
    return result;
}

// Address range: 0xfb533 - 0xfb667
int64_t function_fb533(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xfb533
    int64_t v1; // 0xfb533
    int64_t result = function_c6d58(a1, a2, a3, a4, a5, v1, 42, (int64_t)&g2, (int64_t)&g2); // 0xfb662
    return result;
}

// Address range: 0xfb667 - 0xfb66c
int64_t function_fb667(void) {
    // 0xfb667
    int64_t result; // 0xfb667
    return result;
}

// Address range: 0xfb6b9 - 0xfb6c0
int64_t function_fb6b9(void) {
    // 0xfb6b9
    int64_t result; // 0xfb6b9
    int32_t * v1 = (int32_t *)(result + 29); // 0xfb6b9
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xfb732 - 0xfb742
int64_t function_fb732(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfb732
    int64_t v1; // 0xfb732
    *(char *)a4 = (char)(v1 | v1);
    int32_t * v2 = (int32_t *)(v1 - 0x4be24779); // 0xfb736
    *v2 = *v2 + (int32_t)a1;
    __asm_wait();
    return function_34afb815();
}

// Address range: 0xfb74c - 0xfb74f
int64_t function_fb74c(void) {
    // 0xfb74c
    int64_t result; // 0xfb74c
    return result;
}

// Address range: 0xfb7fb - 0xfb824
int64_t function_fb7fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0xfb7fb
    __asm_iretd();
    unknown_3d11a002();
    int32_t * v1 = (int32_t *)(a2 + 0x441345fa); // 0xfb801
    int64_t v2; // 0xfb7fb
    *v1 = *v1 + (int32_t)v2;
    __asm_in(-16);
    int64_t v3 = unknown_ffffffffd8e53811(); // 0xfb80b
    int64_t v4; // 0xfb7fb
    char v5 = *(char *)&v4; // 0xfb810
    int32_t * v6 = (int32_t *)((256 * (int64_t)(v5 | (char)(a3 / 256)) | a3 & -0xff01) + 0x1e85602); // 0xfb813
    int32_t v7 = *v6; // 0xfb813
    *v6 = v7 + (int32_t)v3;
    *(int32_t *)a1 = v7;
    return function_ffffffffe8d81f6d(((a4 & (int64_t)&g1) == 0 ? 4 : -4) + a1);
}

// Address range: 0xfb824 - 0xfb89f
int64_t function_fb824(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a1 - 0x5464b7ae); // 0xfb824
    *v2 = *v2 + (int32_t)a3;
    int64_t v3; // 0xfb824
    int32_t v4 = v3; // 0xfb82a
    int32_t v5 = v4 + 0x2501e83a; // 0xfb82a
    int64_t result = v5; // 0xfb82a
    if (v5 < 0 == (v5 & (v4 ^ -0x80000000)) < 0) {
        // 0xfb89b
        return result;
    }
    // 0xfb831
    *(char *)v1 = *(char *)&v1 | (char)(a4 / 256);
    return result;
}

// Address range: 0xfb8a1 - 0xfb8dd
int64_t function_fb8a1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xfb8a1
    int64_t v1; // 0xfb8a1
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0xfca78d1); // 0xfb8a6
    *v3 = *v3 - 0x1746efef;
    char * v4 = (char *)(v2 + 0x2523600); // 0xfb8ac
    *v4 = *v4 + (char)v2;
    int64_t v5 = (v2 + a4 / 256) % 256 | v2 & -256; // 0xfb8b2
    int32_t * v6 = (int32_t *)(a3 + 1); // 0xfb8b4
    *v6 = *v6 + (int32_t)v1;
    char * v7 = (char *)(a1 - 51); // 0xfb8b8
    *v7 = *v7 + (char)(v1 / 256);
    char * v8 = (char *)(v1 - 65); // 0xfb8bc
    *v8 = *v8 + (char)((int32_t)v2 >> 31);
    int32_t * v9 = (int32_t *)(v5 + 0x586f9376); // 0xfb8c7
    int64_t v10; // 0xfb8a1
    *v9 = *v9 + (int32_t)(int64_t)&v10;
    *(int32_t *)0xe8b9106c = *(int32_t *)0xe8b9106c + (int32_t)v5;
    __asm_out(29, (char)((__asm_wait() & 0xffffffff) * (v1 & 0xffffffff)));
    return unknown_66ad87db();
}

// Address range: 0xfb91d - 0xfb91e
int64_t function_fb91d(void) {
    // 0xfb91d
    int64_t result; // 0xfb91d
    return result;
}

// Address range: 0xfb987 - 0xfb98d
int64_t function_fb987(void) {
    // 0xfb987
    return unknown_ffffffffb404528d();
}

// Address range: 0xfb9d4 - 0xfb9db
int64_t function_fb9d4(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfb9d4
    int64_t v1; // 0xfb9d4
    uint64_t v2 = v1;
    char v3 = *(char *)(a2 - 0x31d3866b); // 0xfb9d4
    return 256 * (int64_t)(v3 & (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0xfba23 - 0xfba24
int64_t function_fba23(void) {
    // 0xfba23
    int64_t result; // 0xfba23
    return result;
}

// Address range: 0xfba59 - 0xfba5e
int64_t function_fba59(int64_t a1, int64_t a2, int64_t a3) {
    // 0xfba59
    int64_t result; // 0xfba59
    return result;
}

// Address range: 0xfba84 - 0xfba88
int64_t function_fba84(void) {
    // 0xfba84
    return function_fba23();
}

// Address range: 0xfbb44 - 0xfbb65
int64_t function_fbb44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = unknown_2906be50(); // 0xfbb4a
    char * v2 = (char *)(v1 - 0x303b61a8); // 0xfbb4f
    *v2 = *v2 + (char)(v1 / 256);
    int64_t v3; // 0xfbb44
    uint32_t v4 = *(int32_t *)&v3; // 0xfbb5a
    uint32_t v5 = v4 + (int32_t)v1; // 0xfbb5a
    *(int32_t *)a4 = v5;
    int32_t v6 = __asm_in_133((int16_t)a3); // 0xfbb5c
    char v7 = *(char *)0xe5d688c5; // 0xfbb5e
    *(char *)0xe5d688c5 = v7 + (char)v6 + (char)(v5 < v4);
    return 0xe86f4e3a;
}

// Address range: 0xfbb7d - 0xfbb83
int64_t function_fbb7d(int64_t a1) {
    // 0xfbb7d
    int64_t result; // 0xfbb7d
    return result;
}

// Address range: 0xfbb84 - 0xfbb8d
int64_t function_fbb84(void) {
    // 0xfbb84
    return unknown_1417b18a() | 0xe200;
}

// Address range: 0x332a23 - 0x332a43
int64_t function_332a23(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x332a23
    int64_t v1; // 0x332a23
    char * v2 = (char *)(v1 + 0x6239957f); // 0x332a23
    *v2 = *v2 + (char)((uint64_t)v1 / 256);
    int64_t v3 = __asm_hlt(); // 0x332a2f
    int32_t * v4 = (int32_t *)(v3 - 50); // 0x332a36
    *v4 = *v4 + (int32_t)a1;
    return (v3 + 23) % 256 | v3 & -256;
}

// Address range: 0x332a9c - 0x332aa0
int64_t function_332a9c(int64_t a1, int64_t a2) {
    // 0x332a9c
    int64_t result; // 0x332a9c
    return result;
}

// Address range: 0x332ad2 - 0x332ad9
int64_t function_332ad2(int64_t a1) {
    // 0x332ad2
    return unknown_3188e0d9(a1);
}

// Address range: 0x332aef - 0x332b35
int64_t function_332aef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    char * v2 = (char *)unknown_6071fdfa(); // 0x332b03
    *v2 = *v2 + (char)a4;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a1;
    return function_71c059ef();
}

// Address range: 0x332b7f - 0x332b80
int64_t function_332b7f(int64_t a1) {
    // 0x332b7f
    int64_t result; // 0x332b7f
    return result;
}

// Address range: 0x332b94 - 0x332b96
int64_t function_332b94(void) {
    // 0x332b94
    int64_t result; // 0x332b94
    return result;
}

// Address range: 0x332bbd - 0x332bc0
int64_t function_332bbd(int64_t a1) {
    // 0x332bbd
    int64_t result; // 0x332bbd
    return result;
}

// Address range: 0x332c15 - 0x332c1a
int64_t function_332c15(void) {
    // 0x332c15
    return __asm_hlt();
}

// Address range: 0x332c8c - 0x332c8f
int64_t function_332c8c(void) {
    // 0x332c8c
    int64_t result; // 0x332c8c
    return result;
}

// Address range: 0x332ca5 - 0x332ca6
int64_t function_332ca5(void) {
    // 0x332ca5
    int64_t result; // 0x332ca5
    return result;
}

// Address range: 0x332cba - 0x332cbb
int64_t function_332cba(void) {
    // 0x332cba
    int64_t result; // 0x332cba
    return result;
}

// Address range: 0x332cd4 - 0x332d58
int64_t function_332cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x332cd4
    int64_t v1; // 0x332cd4
    char * v2 = (char *)(v1 - 8); // 0x332cd4
    *v2 = *v2 + (char)a3;
    return v1 ^ 248;
}

// Address range: 0x332d64 - 0x332d67
int64_t function_332d64(void) {
    // 0x332d64
    int64_t result; // 0x332d64
    return result;
}

// Address range: 0x332db5 - 0x332db9
int64_t function_332db5(void) {
    // 0x332db5
    return __asm_in_135(122);
}

// Address range: 0x332dc2 - 0x332ddf
int64_t function_332dc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x332dc2
    int64_t v1; // 0x332dc2
    float80_t v2; // 0x332dc2
    *(int32_t *)(v1 + 0x73fd25c) = (int32_t)v2;
    int32_t * v3 = (int32_t *)(v1 + 0x3a844ad9); // 0x332dca
    *v3 = *v3 + (int32_t)v1;
    return function_6638368f();
}

// Address range: 0x42501f - 0x425050
int64_t function_42501f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42501f
    int64_t result; // 0x42501f
    bool v1; // 0x42501f
    if (v1) {
        // 0x425088
        return result;
    }
    // 0x425021
    *(int32_t *)a1 = (int32_t)result;
    char * v2 = (char *)(8 * a4 + 66 + result); // 0x425022
    char v3 = *v2;
    int64_t v4 = a3 & -256 | (int64_t)v3; // 0x425022
    char v5 = a3; // 0x42502f
    while ((result & 0x5bdc5de1) == 0) {
        int64_t v6 = v4;
        v4 = v6 & -256 | (int64_t)v5;
        v5 = v6;
    }
    int64_t v7 = (v1 ? -4 : 4) + a1; // 0x425021
    *v2 = (char)a3;
    char * v8 = (char *)(v7 + 16); // 0x425031
    *v8 = *v8 + v3;
    int64_t result2 = __asm_int3(v7 - 4, a2 - 4, v4); // 0x425035
    __asm_int(37);
    int32_t * v9 = (int32_t *)(result + 105); // 0x42503d
    *v9 = *v9 - 0x2b232249;
    return result2;
}

// Address range: 0x425099 - 0x42509b
int64_t function_425099(void) {
    // 0x425099
    int64_t result; // 0x425099
    return result;
}

// Address range: 0x4250cf - 0x425100
int64_t function_4250cf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x4250cf
    bool v1; // 0x4250cf
    bool v2 = v1;
    int64_t v3; // 0x4250cf
    unsigned char v4 = (char)((uint64_t)v3 / 256); // 0x4250cf
    unsigned char v5 = v4 + (char)(a3 / 256); // 0x4250cf
    float80_t v6; // 0x4250cf
    *(float32_t *)(a4 + 55) = (float32_t)v6;
    uint64_t v7 = v3 + 98 + (int64_t)(v2 ? v5 + (char)v2 <= v4 : v5 < v4); // 0x4250d6
    int64_t v8 = v7 % 256 | v3 & -256; // 0x4250d6
    char v9 = *(char *)0x3fe72ab; // 0x4250d8
    int16_t v10 = a3; // 0x4250e0
    int32_t v11 = v8; // 0x4250e0
    __asm_out_134(v10, v11);
    int64_t v12 = a4 & -0x10000 | (int64_t)(v9 ^ (char)a4) | 0xe500; // 0x4250e1
    int32_t * v13 = (int32_t *)(a1 + 49); // 0x4250e4
    *v13 = 2 * *v13;
    char * v14 = (char *)v8; // 0x4250ef
    *v14 = *v14 + (char)v7;
    __asm_out_134(v10, v11);
    *(int32_t *)-0x475e20f39c0fffa5 = v11;
    int64_t v15; // 0x4250cf
    __asm_outsb(v10, *(char *)&v15);
    __asm_rep_stosd_memset((char *)a1, v11, v12);
    return function_425136(v12 * (v1 ? -4 : 4) + a1, a2, a3, 0);
}

// Address range: 0x425106 - 0x425107
int64_t function_425106(void) {
    // 0x425106
    int64_t result; // 0x425106
    return result;
}

// Address range: 0x425120 - 0x425135
int64_t function_425120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x425120
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x425120
    unsigned char v2 = llvm_ctpop_i8((char)(v1 & a4)); // 0x425124
    int64_t result = (int64_t)*(int32_t *)-0xca6fec3964bd8fa; // 0x42512f
    if (v2 % 2 == 0) {
        result = function_425106();
    }
    // 0x425132
    return result;
}

// Address range: 0x425136 - 0x425138
int64_t function_425136(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x425136
    int64_t result; // 0x425136
    return result;
}

// Address range: 0x42513b - 0x4251d6
int64_t function_42513b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42513b
    int64_t v1; // 0x42513b
    int64_t result = v1;
    bool v2; // 0x42513b
    if (true != !v2) {
        // 0x42513d
        float80_t v3; // 0x42513b
        *(int32_t *)(a1 - 1 + result) = (int32_t)v3;
        return result & -256 | (int64_t)__asm_in_136((int16_t)a3);
    }
    if ((char)a2 != (char)a1) {
        // 0x4251c9
        return result + 0xe14557a2 + (int64_t)((char)result < 69) & 0xffffffff;
    }
    // 0x425150
    return result;
}
