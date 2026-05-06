/*
 * Targeted RetDec C for native executable gap queue batch 1275.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xcde60-0xce060 rank=- name=- kind=- bytes=- uncovered=-
 *   0xce060-0xce260 rank=- name=- kind=- bytes=- uncovered=-
 *   0xce260-0xce460 rank=- name=- kind=- bytes=- uncovered=-
 *   0xce460-0xce660 rank=- name=- kind=- bytes=- uncovered=-
 *   0xce660-0xce860 rank=- name=- kind=- bytes=- uncovered=-
 *   0xce860-0xcea60 rank=- name=- kind=- bytes=- uncovered=-
 *   0xcea60-0xcec60 rank=- name=- kind=- bytes=- uncovered=-
 *   0xcec60-0xcee60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a3119-0x2a3319 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a3319-0x2a3519 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a3519-0x2a3719 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a3719-0x2a3919 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a3919-0x2a3b19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a3b19-0x2a3d19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a3d19-0x2a3f19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a3f19-0x2a4119 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_fnstenv();
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_1673b58();
int64_t function_212e27a();
int64_t function_2a30e9();
int64_t function_2a3119(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2a3282(int64_t a1);
int64_t function_2a32a1(void);
int64_t function_2a32a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a32bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a32e3(int64_t a1);
int64_t function_2a3345(void);
int64_t function_2a334d(int64_t a1, int64_t a2);
int64_t function_2a336d(void);
int64_t function_2a3375(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a33aa(void);
int64_t function_2a33af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_2a3439(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a3499(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_2a3504(void);
int64_t function_2a351a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2a354a(int64_t a1);
int64_t function_2a35ab(void);
int64_t function_2a35d0(int64_t a1);
int64_t function_2a3617(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a3631(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a364d(int64_t a1, int64_t a2);
int64_t function_2a36ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2a3744(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2a3750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a37a4(void);
int64_t function_2a37c6(int64_t a1);
int64_t function_2a37f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a3859(void);
int64_t function_2a3871(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a3993(int64_t a1);
int64_t function_2a3995(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a39fe(void);
int64_t function_2a3a6d(void);
int64_t function_2a3a7b(void);
int64_t function_2a3a8c(void);
int64_t function_2a3b53(void);
int64_t function_2a3b59(int64_t a1);
int64_t function_2a3b81(void);
int64_t function_2a3bfc(void);
int64_t function_2a3c95(void);
int64_t function_2a3c96(int64_t a1);
int64_t function_2a3ced(int64_t a1);
int64_t function_2a3d0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a3d4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a3d7b(void);
int64_t function_2a3e03(void);
int64_t function_2a3e24(int64_t a1);
int64_t function_2a3e50(void);
int64_t function_2a3e65(void);
int64_t function_2a3f0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a3f1f(void);
int64_t function_2a3f38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a3fec(void);
int64_t function_2a407e(int64_t a1);
int64_t function_2a4093(void);
int64_t function_2a40a8(int64_t a1);
int64_t function_2a40d2(void);
int64_t function_2a40d9(int64_t a1);
int64_t function_2a40e1(void);
int64_t function_625c08();
int64_t function_7d64bd01();
int64_t function_cde60(void);
int64_t function_cde61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffff82fe3842();
int64_t function_ffffffffe2bb5b4b();
int64_t function_ffffffffe4c31a72();
int64_t function_ffffffffec56417c();
int64_t function_fffffffff3abba20();
int64_t unknown_183622fe();
int64_t unknown_28c21728();
int64_t unknown_2d2b73e8();
int64_t unknown_3d2c1c32();
int64_t unknown_3d70f102();
int64_t unknown_46bef62e();
int64_t unknown_47837e8d();
int64_t unknown_c412de7();
int64_t unknown_ffffffff86570d27();
int64_t unknown_ffffffff9164cb0d();
int64_t unknown_ffffffff9dd74137();
int64_t unknown_ffffffffafc78344();
int64_t unknown_ffffffffc4f67555();
int64_t unknown_ffffffffcd8a2951();
int64_t unknown_ffffffffd52c98ba();
int64_t unknown_ffffffffdd14d785();
int64_t unknown_ffffffffe46fdd2a();
int64_t unknown_fffffffff2b23788();
int64_t unknown_fffffffff5251458();
int64_t unknown_ffffffffffc8f27e();

// Address range: 0xcde60 - 0xcde61
int64_t function_cde60(void) {
    // 0xcde60
    int64_t result; // 0xcde60
    return result;
}

// Address range: 0xcde61 - 0xcee5c
int64_t function_cde61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xcde61
    int64_t v1; // 0xcde61
    int64_t v2 = (int64_t)&v1; // 0xcde68
    int64_t v3 = v2 - 16; // 0xcdea9
    int64_t * v4 = (int64_t *)v3; // 0xcdeb4
    *v4 = v2 - 8;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0xcdeb9
    int64_t v6 = v2 - 32; // 0xcdec0
    int64_t * v7 = (int64_t *)v6; // 0xcdecf
    *v7 = v3;
    *v5 = 0x5bbe920b;
    *v7 = 0x4539c6a1;
    int64_t v8 = v2 - 40; // 0xcdf11
    int64_t * v9 = (int64_t *)v8; // 0xcdf11
    *v9 = a3;
    int64_t * v10 = (int64_t *)(v2 - 48); // 0xcdf12
    int64_t * v11 = (int64_t *)(v2 - 56); // 0xcdf14
    *v11 = a1;
    *v10 = *v10 + 0x417ab4b7;
    *v5 = 0x2426f57b;
    *v7 = 0x529294d1;
    int64_t v12 = *v7; // 0xcdfa3
    *v5 = 0x7a328f19;
    *v7 = a5;
    *v5 = *v4;
    *v7 = *v5;
    *v9 = v6;
    *v7 = v6;
    *v10 = v8;
    int64_t v13 = *v9; // 0xce05f
    *v11 = v13;
    int64_t v14 = *v9; // 0xce068
    int64_t v15 = v14 - 8; // 0xce077
    int64_t * v16 = (int64_t *)v15; // 0xce077
    *v16 = *v7;
    int64_t v17 = v14 - 16; // 0xce079
    int64_t * v18 = (int64_t *)v17; // 0xce079
    *v18 = *v9;
    int64_t v19 = v14 - 24; // 0xce099
    int64_t * v20 = (int64_t *)v19; // 0xce09e
    *v20 = v12;
    int64_t v21 = *v16; // 0xce0ce
    *v16 = 0xe57a1d8;
    *v18 = v13;
    *v20 = v17;
    *v18 = v17;
    *v20 = v21;
    int64_t v22 = *(int64_t *)(v14 + 120); // 0xce114
    *v16 = v22;
    *v18 = v22;
    *v20 = *v18;
    int64_t v23 = v14 - 32; // 0xce12f
    int64_t * v24 = (int64_t *)v23; // 0xce136
    int64_t * v25 = (int64_t *)(v14 - 40); // 0xce152
    *v20 = 0x4a2c23e7;
    *v24 = 0x17b7bfd0;
    *v25 = 0x56666db2;
    int64_t v26 = v14 - 56; // 0xce1a1
    int64_t * v27 = (int64_t *)v26; // 0xce1a1
    *v27 = *v20;
    *(int64_t *)(v14 - 64) = v26;
    int64_t v28 = *v27; // 0xce1b3
    *(int64_t *)(v14 - 72) = v28;
    int64_t * v29 = (int64_t *)(v14 - 48); // 0xce1c1
    *v29 = *v18;
    *(int64_t *)(v14 + 104) = *v18;
    *v18 = v21;
    *v20 = *v7;
    *v18 = *v11;
    *v20 = v17;
    int64_t v30 = *v18; // 0xce2e2
    *v24 = v30;
    *v18 = v28;
    *v20 = 0xcdc60;
    *v18 = *v20;
    *v20 = v12;
    *v20 = 0x6fec1a4e;
    int32_t * v31 = (int32_t *)v19; // 0xce3a3
    *v31 = *v31 - 0x6df316a8;
    int64_t v32 = *v18; // 0xce3bb
    int64_t v33 = *v16; // 0xce3c0
    int64_t v34 = v22 - 0xcdc65 + (*v20 + 0x6df316a8 & 0xffffffff ^ 0x6feb9923); // 0xce45e
    *v16 = 0x7dce1d00;
    *v18 = v15;
    *v24 = *v16;
    *v16 = 0x3a67e2ac;
    *v18 = v30;
    *v20 = 0x787f940b;
    int64_t v35 = *v18; // 0xce4dd
    *v20 = v33;
    *v18 = v35;
    int32_t * v36 = (int32_t *)(v34 + 476); // 0xce5db
    int32_t v37 = *v36; // 0xce5db
    *v36 = v37 == 0 ? 1 : v37;
    if (v37 != 0) {
        __asm_pause();
        int32_t v38 = *v36; // 0xce5db
        *v36 = v38 == 0 ? 1 : v38;
        while (v38 != 0) {
            // 0xce5e6
            __asm_pause();
            v38 = *v36;
            *v36 = v38 == 0 ? 1 : v38;
        }
    }
    int64_t v39 = *v16; // 0xce5ed
    *v18 = v39;
    *v20 = v39;
    *v24 = *v20;
    *v29 = v39;
    *v25 = v32;
    int64_t v40 = *v29; // 0xce615
    int64_t v41 = *v24; // 0xce62c
    *v16 = *v20;
    *v20 = 0;
    *v27 = v41;
    *v25 = v34;
    *v20 = 0x7dbf9215;
    *v16 = 0xb3236be;
    *v18 = v41;
    *v20 = v40;
    *v24 = *v16;
    int64_t v42 = *v20; // 0xce76f
    *v20 = v42 ^ 0x7dab03ba;
    *v20 = v42;
    *(int64_t *)(v34 + 187) = *v18;
    *v16 = 0x5e6ee926;
    *v18 = v35;
    *v24 = *v16;
    *v20 = *v24;
    *v18 = 0x7d7e4178;
    int64_t v43 = *v20; // 0xce7c9
    *v24 = v17;
    *v20 = (*v20 & 0x7fbbf4af) + 0x82c5c0bf & 0xfffff5ff;
    *v31 = *v31 + 0x7f5cb067;
    *v20 = v40;
    int64_t v44 = *(int64_t *)(v14 + 72); // 0xce815
    *v18 = v44;
    *v20 = v44;
    *v29 = v23;
    *v25 = v32;
    *v20 = v44;
    *v24 = *v18;
    int64_t v45 = *v20; // 0xce8a6
    int64_t v46 = v45 - 0x1cfd1000; // 0xce8a6
    *v20 = v46;
    int64_t v47 = *v24; // 0xce8ab
    *v24 = v46;
    *v20 = v45 - 0x5fcec032;
    *(int64_t *)((*v20 + 0x80a34f99 & 0xffffffff) + v34) = v45;
    *v18 = v44;
    *v20 = 10;
    *v31 = *v31 ^ 0x7fffb517;
    *v20 = *v18;
    *v24 = *v18;
    *v25 = v43;
    int64_t v48 = *v20; // 0xce92d
    int64_t v49 = *(int64_t *)(v14 + 136); // 0xce94c
    *v18 = v49;
    int64_t v50 = v49 + v48; // 0xce9fb
    *v20 = v33;
    *v24 = *v18;
    *v25 = *v24;
    *v29 = v34;
    *v25 = v50 ^ 0x15fd6d7b;
    *(int64_t *)((*v20 & 0xffffffff ^ 0x7fffb517) + v34) = v50;
    *v25 = *v20;
    *v20 = *v24;
    *v24 = 0xc3718;
    int32_t * v51 = (int32_t *)v23; // 0xcea9c
    *v51 = *v51 + 0x6fef9dfc;
    *v24 = v48;
    *v25 = v43;
    int64_t v52 = *v24; // 0xceaf1
    int64_t result = v52 + (*v24 + 0x90106204 & 0xffffffff); // 0xceb8a
    *v20 = 0x38dc8a67;
    *v24 = v52;
    *v25 = *v24;
    *v29 = 0x4fe39008;
    *v27 = v43;
    *v25 = v47;
    *v24 = *(int64_t *)((((32 * *v29 | 0x6249f820) ^ 0x11360450) + 0x10b2039f & 0xffffffcf) + v34);
    *v25 = *v24;
    *v24 = *v24 + 0x3fee0665;
    int64_t v53 = *v25; // 0xcec50
    *v27 = v53;
    *v29 = v23;
    if (*v24 - 0x3fee0665 == result) {
        // 0xcef10
        return result;
    }
    // 0xcecad
    *v27 = v26;
    *v20 = v34;
    *v24 = 0x7a09a0c7;
    *v24 = (0x7a09ac07 - *v24) / 8 % 0x20000000;
    *v25 = *v20;
    *v20 = *v24;
    *v24 = result;
    *v25 = v47;
    *v29 = v19;
    *v27 = *v25;
    int64_t v54 = *v25; // 0xceddb
    *(int64_t *)(v54 + 8) = result;
    int64_t * v55 = (int64_t *)v54; // 0xcede4
    if (*v55 == 0) {
        // 0xcef10
        return result;
    }
    int64_t * v56 = (int64_t *)result; // 0xcedee
    *v56 = *v56 - 0x201cb5dd;
    *v55 = v32;
    *(int64_t *)(v54 - 8) = *v24;
    *(int64_t *)(v54 - 16) = -0x6bbd8800;
    *v56 = v53 + 0x6d8fb875 + *v56;
    return result;
}

// Address range: 0x2a3119 - 0x2a323a
int64_t function_2a3119(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2 = a2;
    int64_t v3 = a1;
    char v4; // 0x2a3119
    char v5; // 0x2a3119
    int64_t v6; // 0x2a3119
    int64_t v7; // 0x2a3119
    int64_t v8; // 0x2a3119
    bool v9; // 0x2a3119
    if (!v9) {
        // 0x2a3119
        v4 = v8 / 256;
        v5 = a2;
        v7 = a4;
    } else {
        int64_t v10 = a4 - 1; // 0x2a311b
        if (v10 == 0) {
            char v11 = *(char *)0x22da7824 + (char)(v8 / 256); // 0x2a311d
            *(char *)0x22da7824 = v11;
            int64_t result; // 0x2a3119
            if (v11 < 1) {
                result = function_2a30e9();
            }
            // 0x2a3127
            __asm_int(56);
            char v12 = *(char *)0x7354c13b; // 0x2a3133
            *(char *)0x7354c13b = v12 + (char)((int64_t)&g4 >> 8);
            return result;
        }
        // 0x2a3157
        *(char *)-0x3301ca3718f4ff99 = (char)v8;
        int32_t * v13 = (int32_t *)(a3 + 0x32013d00); // 0x2a3160
        int32_t v14 = v8; // 0x2a3160
        *v13 = *v13 | v14;
        *(int64_t *)(4 * a3 + 98 + v8) = a6;
        uint32_t v15 = (int32_t)v8; // 0x2a316a
        __asm_out(85, v15);
        uint32_t v16 = *(int32_t *)-0x7873c52e + v15; // 0x2a316c
        if (v16 >= v15 && v16 != 0) {
            int64_t result2 = v16; // 0x2a316c
            unsigned char v17 = (char)v10 % 32; // 0x2a31e7
            if (v17 != 0) {
                char * v18 = (char *)(result2 + 8); // 0x2a31e7
                *v18 = *v18 << v17;
            }
            if (v10 < (int64_t)*(int32_t *)&v3) {
                // 0x2a31ee
                return result2;
            }
            int32_t * v19 = (int32_t *)(v3 + 0x98ec33); // 0x2a321d
            *v19 = *v19 + v14;
            unsigned char v20 = (char)v8; // 0x2a3223
            unsigned char v21 = *(char *)-0x13e4c6d5; // 0x2a3223
            char v22 = v21 + v20; // 0x2a3223
            int64_t result3 = v8 & 0xffff00ff | 256 * (64 * (int64_t)(v22 == 0) | (int64_t)(v22 < v20) | 128 * (int64_t)(v22 < 0) | 16 * (int64_t)(v21 % 16 + v20 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v22) % 2 == 0)) | 512; // 0x2a322b
            __asm_out_133((int16_t)a3, (char)v8);
            if (v22 < 0 != ((v22 ^ v20) & (v22 ^ v21)) < 0) {
                // 0x2a31ee
                return result3;
            }
            unsigned char v23 = *(char *)(v2 - 0xf17b571); // 0x2a3230
            int32_t * v24 = (int32_t *)((result2 & 0xffffff00 | (int64_t)v23) + 8 * v10); // 0x2a3236
            *v24 = *v24 + (int32_t)(v8 & 0xffffff00 | (int64_t)v22);
            return result3;
        }
        char v25 = v8 / 256;
        *(char *)0x70d30b80 = *(char *)0x70d30b80 + v25;
        v4 = v25;
        v5 = *(char *)&v2;
        v6 = v16 - 0x639bf45;
        v7 = v10;
    }
    // 0x2a317f
    *(char *)(v6 & -256 | (int64_t)v5) = v4;
    int64_t v26 = unknown_fffffffff2b23788(); // 0x2a3182
    int64_t v27 = a3 & -256 | 181; // 0x2a3187
    *(char *)v1 = (char)v8 - 75 + *(char *)&v1;
    *(int32_t *)(v27 + 0x71d99a67 + v3) = (int32_t)v7;
    return v26 & -0xffe7 | (v26 & 0xff00) + v27 & 0xff00 | 230;
}

// Address range: 0x2a3282 - 0x2a328c
int64_t function_2a3282(int64_t a1) {
    // 0x2a3282
    *(int32_t *)-0x71dc3f75 = *(int32_t *)-0x71dc3f75 + (int32_t)a1;
    int64_t v1; // 0x2a3282
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x2a32a1 - 0x2a32a4
int64_t function_2a32a1(void) {
    // 0x2a32a1
    int64_t v1; // 0x2a32a1
    return function_2a32bb(v1, v1, v1, v1);
}

// Address range: 0x2a32a4 - 0x2a32bb
int64_t function_2a32a4(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 24); // 0x2a32a4
    int64_t v2; // 0x2a32a4
    *v1 = *v1 | (int32_t)v2;
    int32_t v3 = a2; // 0x2a32a7
    int32_t v4 = v2; // 0x2a32a7
    uint32_t v5 = v4 + v3; // 0x2a32a7
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        // 0x2a32b0
        return 0xc8808af7;
    }
    int64_t result = __asm_int1(); // 0x2a32b5
    char v6 = *(char *)(int64_t)(-113 * *(int32_t *)((int64_t)v5 + 51)); // 0x2a32ba
    *(char *)a1 = v6;
    return result;
}

// Address range: 0x2a32bb - 0x2a32c6
int64_t function_2a32bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a32bb
    *(int32_t *)-0x478ff640 = *(int32_t *)-0x478ff640 + (int32_t)a3;
    int64_t result; // 0x2a32bb
    return result;
}

// Address range: 0x2a32e3 - 0x2a32e4
int64_t function_2a32e3(int64_t a1) {
    // 0x2a32e3
    int64_t result; // 0x2a32e3
    return result;
}

// Address range: 0x2a3345 - 0x2a3346
int64_t function_2a3345(void) {
    // 0x2a3345
    int64_t result; // 0x2a3345
    return result;
}

// Address range: 0x2a334d - 0x2a3355
int64_t function_2a334d(int64_t a1, int64_t a2) {
    // 0x2a334d
    *(int32_t *)(a2 + 0x600984bc) = (int32_t)a2;
    return function_2a3345();
}

// Address range: 0x2a336d - 0x2a3372
int64_t function_2a336d(void) {
    // 0x2a336d
    return function_ffffffffe4c31a72();
}

// Address range: 0x2a3375 - 0x2a339b
int64_t function_2a3375(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    unknown_ffffffffffc8f27e();
    int64_t v2 = unknown_47837e8d(); // 0x2a3387
    while (*(int32_t *)&v1 > (int32_t)a1) {
        // continue -> 0x2a3390
    }
    // 0x2a339a
    return v2 + a1 & 0xffffffff;
}

// Address range: 0x2a33aa - 0x2a33ab
int64_t function_2a33aa(void) {
    // 0x2a33aa
    int64_t result; // 0x2a33aa
    return result;
}

// Address range: 0x2a33af - 0x2a3437
int64_t function_2a33af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x2a33af
    int64_t result2; // 0x2a33af
    int64_t v1 = result2;
    int64_t v2 = a6;
    bool v3; // 0x2a33af
    if (v3) {
        // 0x2a33dd
        unknown_c412de7();
        int32_t * v4 = (int32_t *)(a1 - 0x2bfa018e + 8 * a8); // 0x2a33e8
        *v4 = *v4 + (int32_t)v1;
        int64_t v5; // bp+16, 0x2a33af
        uint32_t v6 = (int32_t)a7 + (int32_t)a1 ^ (int32_t)(int64_t)&v5; // 0x2a33f3
        if (v6 == 0) {
            // 0x2a33f8
            return function_ffffffffe2bb5b4b(v6);
        }
        char v7 = *(char *)(v1 - 24 + 2 * v1); // 0x2a341a
        int32_t * v8 = (int32_t *)((256 * (int64_t)((char)(a7 / 256) - v7) | a7 & -0xff01) - 29); // 0x2a341e
        uint32_t v9 = *v8; // 0x2a341e
        uint32_t v10 = v9 + (int32_t)a2; // 0x2a341e
        *v8 = v10;
        int64_t v11 = (v10 < v9 ? -44 : -43) + a4; // 0x2a3421
        int32_t * v12 = (int32_t *)(2 * a7 + (int64_t)v6); // 0x2a3424
        *v12 = *v12 | v6;
        *(char *)(v11 & 0xffffffff) = (char)v11;
        int64_t result = unknown_3d2c1c32(v6); // 0x2a342b
        *(int32_t *)0x22c1c62 = *(int32_t *)0x22c1c62 + v6;
        return result;
    }
    if (!v3) {
        // 0x2a33d4
        __asm_out(44, (int32_t)result2);
        return result2;
    }
    // 0x2a33b4
    unknown_ffffffffd52c98ba();
    __asm_in(-83);
    int32_t * v13 = (int32_t *)a7; // 0x2a33bb
    *v13 = *v13 - (int32_t)v1;
    char v14 = *(char *)&v2 | (char)a5; // 0x2a33bd
    *(char *)v2 = v14;
    if (v14 == 0) {
        function_2a33aa();
    }
    // 0x2a33c2
    float80_t v15; // 0x2a33af
    *(float32_t *)a7 = (float32_t)v15;
    __asm_sti((v3 ? -1 : 1) + a1, 0x5830810);
    return v1 & 0xffffffff;
}

// Address range: 0x2a3439 - 0x2a343d
int64_t function_2a3439(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a3439
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x2a3439
    return result;
}

// Address range: 0x2a3499 - 0x2a34d8
int64_t function_2a3499(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x2a3499
    int64_t v1; // 0x2a3499
    uint64_t v2 = v1;
    char v3 = *(char *)(a1 + 96); // 0x2a3499
    char * v4 = (char *)(a4 - 22); // 0x2a349c
    *v4 = *v4 | (char)(v1 / 256);
    uint32_t v5 = __readgsdword(a5); // 0x2a34a0
    bool v6; // 0x2a3499
    uint32_t v7 = (int32_t)(v2 & 0xffffff00 | (int64_t)((char)v6 + (char)v2 + v3)); // 0x2a34a0
    __writegsdword(a5, v5 - v7);
    float80_t v8; // 0x2a3499
    *(float32_t *)v1 = (float32_t)v8;
    int32_t * v9 = (int32_t *)(a1 - 40 + 2 * v1); // 0x2a34b2
    uint32_t v10 = *v9; // 0x2a34b2
    uint32_t v11 = v10 + (int32_t)a5; // 0x2a34b2
    *v9 = v11;
    *(char *)0x5ca0bc7 = *(char *)0x5ca0bc7 + (char)(v2 / 256);
    __asm_out_134(-80, (char)(v1 - (v5 < v7 ? 186 : 185)) - (v11 < v10 ? 17 : 16));
    *(char *)(a3 - 124 + v1) = (char)(a5 / 256);
    return a5 & 0xffffffff;
}

// Address range: 0x2a3504 - 0x2a350c
int64_t function_2a3504(void) {
    // 0x2a3504
    int64_t v1; // 0x2a3504
    __asm_out(117, (int32_t)v1);
    return v1 + 0xfe175542 & 0xffffffff;
}

// Address range: 0x2a351a - 0x2a3547
int64_t function_2a351a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a3 + 0x243a0294); // 0x2a351a
    int64_t v2; // 0x2a351a
    bool v3; // 0x2a351a
    *v1 = (char)v3 - (char)v2 + *v1;
    int64_t v4 = unknown_ffffffff86570d27(); // 0x2a3520
    char v5 = __asm_in_135((int16_t)a3); // 0x2a3526
    int64_t v6; // 0x2a351a
    *(char *)a1 = *(char *)&v6 - v5;
    int64_t v7 = 256 * (int64_t)v5 | a4 & -0xff01; // 0x2a352b
    int32_t * v8 = (int32_t *)(v7 + 53); // 0x2a352d
    *v8 = *v8 + (int32_t)v2;
    char v9 = *(char *)-0x177ca08e; // 0x2a3532
    *(char *)-0x177ca08e = v9 | (char)((v7 + 0xffff) / 256);
    int32_t * v10 = (int32_t *)(a1 - 0x50ca8100); // 0x2a353a
    *v10 = *v10 + (-1 - (int32_t)v2 < (int32_t)a1 ? 0x502201e9 : 0x502201e8);
    return (v4 | (int64_t)v5) & -256 | a4 / 256 % 256;
}

// Address range: 0x2a354a - 0x2a354c
int64_t function_2a354a(int64_t a1) {
    // 0x2a354a
    int64_t result; // 0x2a354a
    return result;
}

// Address range: 0x2a35ab - 0x2a35ac
int64_t function_2a35ab(void) {
    // 0x2a35ab
    int64_t result; // 0x2a35ab
    return result;
}

// Address range: 0x2a35d0 - 0x2a35d5
int64_t function_2a35d0(int64_t a1) {
    // 0x2a35d0
    int64_t v1; // 0x2a35d0
    return v1 ^ 248;
}

// Address range: 0x2a3617 - 0x2a3631
int64_t function_2a3617(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a361f
    *(char *)a3 = (char)a4;
    int64_t v1; // 0x2a3617
    __asm_out(-84, (int32_t)v1);
    function_2a35ab();
    __asm_hlt();
    int64_t v2 = unknown_28c21728(); // 0x2a3622
    int32_t v3 = v2; // 0x2a3627
    __asm_out(-26, v3);
    return (int64_t)(*(int32_t *)v2 + v3);
}

// Address range: 0x2a3631 - 0x2a363e
int64_t function_2a3631(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffff9dd74137(a1, a2, a3); // 0x2a3631
    int64_t v1; // 0x2a3631
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a3;
    return result;
}

// Address range: 0x2a364d - 0x2a3676
int64_t function_2a364d(int64_t a1, int64_t a2) {
    // 0x2a364d
    __asm_int(-32);
    __asm_out(17, (int32_t)unknown_ffffffffc4f67555());
    bool v1; // 0x2a364d
    int64_t v2 = v1 ? -4 : 4; // 0x2a3667
    int64_t v3; // 0x2a364d
    int64_t result = __asm_iretd() | v3; // 0x2a365b
    int64_t v4 = a2; // 0x2a365b
    int64_t v5; // 0x2a364d
    int64_t v6 = v5;
    int32_t * v7 = (int32_t *)result; // 0x2a365f
    *v7 = *v7 + (int32_t)result;
    char v8 = *(char *)(result - 0x5c3f44de); // 0x2a3661
    int64_t v9 = v6 & -256 | (int64_t)(v8 + (char)v6); // 0x2a3661
    int64_t v10; // 0x2a364d
    uint32_t v11 = *(int32_t *)v10; // 0x2a3667
    result = result - (*(int32_t *)v4 < v11 ? 0xe89d3af9 : 0xe89d3af8) & 0xffffffff;
    int32_t * v12 = (int32_t *)(v9 - 90); // 0x2a366e
    uint32_t v13 = *v12; // 0x2a366e
    uint32_t v14 = v13 + (int32_t)v3; // 0x2a366e
    *v12 = v14;
    v4 += v2;
    v10 += v2;
    while (v14 < v13 || v14 == 0) {
        // 0x2a365f
        v6 = v9;
        v7 = (int32_t *)result;
        *v7 = *v7 + (int32_t)result;
        v8 = *(char *)(result - 0x5c3f44de);
        v9 = v6 & -256 | (int64_t)(v8 + (char)v6);
        v11 = *(int32_t *)v10;
        result = result - (*(int32_t *)v4 < v11 ? 0xe89d3af9 : 0xe89d3af8) & 0xffffffff;
        v12 = (int32_t *)(v9 - 90);
        v13 = *v12;
        v14 = v13 + (int32_t)v3;
        *v12 = v14;
        v4 += v2;
        v10 += v2;
    }
    // 0x2a3673
    return result;
}

// Address range: 0x2a36ca - 0x2a3744
int64_t function_2a36ca(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2a36ca
    unsigned char v3 = (char)v2;
    *(char *)v2 = v3 / 128 | 2 * v3;
    uint32_t v4 = (int32_t)v2; // 0x2a36d4
    int32_t v5 = v4 - 0x7df6b301; // 0x2a36d4
    int64_t v6 = a4 - 1; // 0x2a36d9
    bool v7 = v4 < 0x7df6b301; // 0x2a36d9
    bool v8 = v5 == 0; // 0x2a36d9
    bool v9 = v5 < 0; // 0x2a36d9
    bool v10 = (0x7df6b300 - v4 & v4) < 0; // 0x2a36d9
    int64_t * v11 = (int64_t *)0x885b09e3; // 0x2a36d9
    int64_t v12; // 0x2a36ca
    if (v6 != 0 != (v5 == 0)) {
        int64_t v13 = v2 & -256; // 0x2a36cc
        int32_t v14 = *(int32_t *)(v13 + 0x3d5f01e8 + 2 * v13); // 0x2a36db
        int64_t v15 = unknown_2d2b73e8(); // 0x2a36e2
        *(int32_t *)-0x1758fb0ff85568dc = (int32_t)v15;
        int32_t * v16 = (int32_t *)(4 * v6 - 0x5b1af578 + v13); // 0x2a36f0
        *v16 = *v16 + (int32_t)v6;
        v11 = (int64_t *)((int64_t)(v14 + (v4 < 0x7df6b301 ? -0x77a4f61c : -0x77a4f61d)) - 8);
        *v11 = v1;
        uint64_t v17 = v15 + v2; // 0x2a36fd
        char * v18 = (char *)((v17 & 0xffffffff) + 51); // 0x2a3704
        *v18 = *v18 - (char)(v17 / 256);
        char * v19 = (char *)(unknown_ffffffff9164cb0d() + 0x1e83a2d); // 0x2a370c
        unsigned char v20 = *v19; // 0x2a370c
        char v21 = a3 / 256; // 0x2a370c
        char v22 = v20 + v21; // 0x2a370c
        *v19 = v22;
        v7 = v22 < v20;
        v8 = v22 == 0;
        v9 = v22 < 0;
        v10 = ((v22 ^ v20) & (v22 ^ v21)) < 0;
        v12 = v15 & 0xffffffff;
    }
    int64_t result = __asm_int1(); // 0x2a3712
    if (v9 == v10 != !v8) {
        char v23 = *(char *)&v1;
        __asm_outsb((int16_t)a3, v23);
        *(char *)v1 = v23;
        return result;
    }
    // 0x2a3725
    if (!v7 && !v8) {
        // 0x2a3728
        unknown_46bef62e();
        *v11 = v12;
        return unknown_ffffffffafc78344();
    }
    while (true) {
        // continue -> 0x2a3724
    }
}

// Address range: 0x2a3744 - 0x2a3750
int64_t function_2a3744(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2a3744
    int64_t v1; // 0x2a3744
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 8 * v1); // 0x2a3744
    *v3 = *v3 | (char)(a3 / 256);
    char v4 = *(char *)(a4 + 0xb4201e8); // 0x2a3747
    return 256 * (int64_t)((char)(v2 / 256) - v4) | v2 & -0xff01;
}

// Address range: 0x2a3750 - 0x2a37a4
int64_t function_2a3750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a3750
    int64_t v1; // 0x2a3750
    *(char *)a3 = (char)(v1 / 256);
    int64_t v2 = 256 * v1 & 0xff00 | v1 & -0xff01; // 0x2a3750
    int64_t v3 = unknown_fffffffff5251458(); // 0x2a3752
    float80_t v4; // 0x2a3750
    *(int64_t *)(v2 - 0x11fe17f6) = (int64_t)v4;
    unsigned char v5 = *(char *)-0x2e8212fe1726cd53; // 0x2a3764
    int32_t v6 = *(int32_t *)(a1 - 123); // 0x2a3771
    int32_t v7 = v1; // 0x2a3774
    int64_t result = (0x10000 * (int32_t)v3 >> 16 & -0x10000 | (int32_t)(v1 % 256 | (int64_t)&g3 | (int64_t)v5)) + v6 & v7; // 0x2a3774
    int32_t * v8 = (int32_t *)(v1 + 68); // 0x2a3776
    *v8 = *v8 + v7;
    unsigned char v9 = (char)a4 % 32; // 0x2a3779
    if (v9 != 0) {
        char * v10 = (char *)(v2 + 112 + result); // 0x2a3779
        *v10 = *v10 << v9;
    }
    int32_t * v11 = (int32_t *)(a2 + 0x160099b5); // 0x2a3781
    uint32_t v12 = *v11; // 0x2a3781
    uint32_t v13 = v12 + (int32_t)a2; // 0x2a3781
    *v11 = v13;
    int32_t * v14 = (int32_t *)(a1 + 0x1e8718c); // 0x2a3787
    *v14 = *v14 - (int32_t)v2 + (int32_t)(v13 < v12);
    int32_t * v15 = (int32_t *)(v2 + 0x13571600); // 0x2a378d
    *v15 = *v15 >> 24;
    char * v16 = (char *)result; // 0x2a3798
    *v16 = *v16 - 24;
    int32_t * v17 = (int32_t *)(a5 + 0x68001c00); // 0x2a379b
    int64_t v18; // 0x2a3750
    int64_t v19; // 0x2a3750
    *v17 = *(int32_t *)&v18 + (int32_t)(int64_t)&v19 + *v17;
    return result;
}

// Address range: 0x2a37a4 - 0x2a37a9
int64_t function_2a37a4(void) {
    // 0x2a37a4
    return function_ffffffff82fe3842();
}

// Address range: 0x2a37c6 - 0x2a37c9
int64_t function_2a37c6(int64_t a1) {
    // 0x2a37c6
    int64_t result; // 0x2a37c6
    return result;
}

// Address range: 0x2a37f6 - 0x2a3802
int64_t function_2a37f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a37f6
    unknown_183622fe(a1, a2, a3, a4);
    return function_7d64bd01();
}

// Address range: 0x2a3859 - 0x2a385a
int64_t function_2a3859(void) {
    // 0x2a3859
    int64_t result; // 0x2a3859
    return result;
}

// Address range: 0x2a3871 - 0x2a38c7
int64_t function_2a3871(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a3871
    __asm_int1();
    int32_t v1 = a1;
    int32_t v2 = ((int32_t)a4 & -0xff01 | (int32_t)&g2) + v1; // 0x2a387c
    *(int32_t *)-0x17ac1268 = *(int32_t *)-0x17ac1268 + v1;
    int32_t v3 = v2 + (int32_t)a2; // 0x2a3897
    *(int32_t *)a1 = v3;
    *(char *)0x12501e8a1 = *(char *)0x12501e8a1 + (char)v2;
    int32_t * v4 = (int32_t *)(int64_t)(v3 >> 31); // 0x2a38b8
    int64_t v5; // 0x2a3871
    *v4 = *v4 + (int32_t)(int64_t)&v5;
    int64_t result = v3 - 0x9db6a45 ^ 232; // 0x2a38c0
    if (v2 == 0) {
        result = function_2a3859();
    }
    // 0x2a38c2
    return result;
}

// Address range: 0x2a3993 - 0x2a3994
int64_t function_2a3993(int64_t a1) {
    // 0x2a3993
    int64_t result; // 0x2a3993
    return result;
}

// Address range: 0x2a3995 - 0x2a399e
int64_t function_2a3995(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a3995
    int64_t result; // 0x2a3995
    return result;
}

// Address range: 0x2a39fe - 0x2a3a01
int64_t function_2a39fe(void) {
    // 0x2a39fe
    int64_t result; // 0x2a39fe
    return result;
}

// Address range: 0x2a3a6d - 0x2a3a73
int64_t function_2a3a6d(void) {
    // 0x2a3a6d
    int64_t result; // 0x2a3a6d
    return result;
}

// Address range: 0x2a3a7b - 0x2a3a87
int64_t function_2a3a7b(void) {
    // 0x2a3a7b
    return unknown_ffffffffdd14d785();
}

// Address range: 0x2a3a8c - 0x2a3a8f
int64_t function_2a3a8c(void) {
    // 0x2a3a8c
    int64_t result; // 0x2a3a8c
    return result;
}

// Address range: 0x2a3b53 - 0x2a3b58
int64_t function_2a3b53(void) {
    // 0x2a3b53
    return function_1673b58();
}

// Address range: 0x2a3b59 - 0x2a3b5c
int64_t function_2a3b59(int64_t a1) {
    // 0x2a3b59
    int64_t result; // 0x2a3b59
    return result;
}

// Address range: 0x2a3b81 - 0x2a3b82
int64_t function_2a3b81(void) {
    // 0x2a3b81
    int64_t result; // 0x2a3b81
    return result;
}

// Address range: 0x2a3bfc - 0x2a3bfe
int64_t function_2a3bfc(void) {
    // 0x2a3bfc
    return function_2a3b81();
}

// Address range: 0x2a3c95 - 0x2a3c96
int64_t function_2a3c95(void) {
    // 0x2a3c95
    int64_t result; // 0x2a3c95
    return result;
}

// Address range: 0x2a3c96 - 0x2a3c99
int64_t function_2a3c96(int64_t a1) {
    // 0x2a3c96
    int64_t result; // 0x2a3c96
    return result;
}

// Address range: 0x2a3ced - 0x2a3cf0
int64_t function_2a3ced(int64_t a1) {
    // 0x2a3ced
    int64_t result; // 0x2a3ced
    return result;
}

// Address range: 0x2a3d0e - 0x2a3d1b
int64_t function_2a3d0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a3d0e
    return function_fffffffff3abba20();
}

// Address range: 0x2a3d4b - 0x2a3d70
int64_t function_2a3d4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffcd8a2951(); // 0x2a3d4b
    __asm_out_134(112, (char)result);
    if (a4 != 1 != ((int32_t)result == -0x2fd682ff)) {
        // 0x2a3d62
        return result;
    }
    // 0x2a3d63
    *(char *)a1 = (char)a2;
    int64_t v1; // 0x2a3d4b
    *(char *)&g1 = (char)((uint64_t)v1 / 256);
    return a2 & 0xffffffff;
}

// Address range: 0x2a3d7b - 0x2a3d80
int64_t function_2a3d7b(void) {
    // 0x2a3d7b
    return function_625c08();
}

// Address range: 0x2a3e03 - 0x2a3e06
int64_t function_2a3e03(void) {
    // 0x2a3e03
    int64_t result; // 0x2a3e03
    return result;
}

// Address range: 0x2a3e24 - 0x2a3e2b
int64_t function_2a3e24(int64_t a1) {
    // 0x2a3e24
    return unknown_ffffffffe46fdd2a(a1);
}

// Address range: 0x2a3e50 - 0x2a3e53
int64_t function_2a3e50(void) {
    // 0x2a3e50
    int64_t result; // 0x2a3e50
    return result;
}

// Address range: 0x2a3e65 - 0x2a3e6a
int64_t function_2a3e65(void) {
    // 0x2a3e65
    return function_212e27a();
}

// Address range: 0x2a3f0b - 0x2a3f14
int64_t function_2a3f0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x7bac9291); // 0x2a3f0b
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x2a3f0b
    return result;
}

// Address range: 0x2a3f1f - 0x2a3f20
int64_t function_2a3f1f(void) {
    // 0x2a3f1f
    int64_t result; // 0x2a3f1f
    return result;
}

// Address range: 0x2a3f38 - 0x2a3f4d
int64_t function_2a3f38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a3f38
    int64_t result; // 0x2a3f38
    int32_t * v1 = (int32_t *)(result + 6); // 0x2a3f38
    *v1 = *v1 + (int32_t)result;
    int32_t * v2 = (int32_t *)(a4 - 0x646843b2); // 0x2a3f47
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x2a3fec - 0x2a3fef
int64_t function_2a3fec(void) {
    // 0x2a3fec
    int64_t result; // 0x2a3fec
    return result;
}

// Address range: 0x2a407e - 0x2a4087
int64_t function_2a407e(int64_t a1) {
    // 0x2a407e
    int64_t result; // 0x2a407e
    int32_t * v1 = (int32_t *)(result - 0x3fb47fff); // 0x2a407e
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2a4093 - 0x2a4095
int64_t function_2a4093(void) {
    // 0x2a4093
    int64_t v1; // 0x2a4093
    return function_2a40d9(v1);
}

// Address range: 0x2a40a8 - 0x2a40ab
int64_t function_2a40a8(int64_t a1) {
    // 0x2a40a8
    int64_t result; // 0x2a40a8
    return result;
}

// Address range: 0x2a40d2 - 0x2a40d3
int64_t function_2a40d2(void) {
    // 0x2a40d2
    int64_t result; // 0x2a40d2
    return result;
}

// Address range: 0x2a40d9 - 0x2a40e0
int64_t function_2a40d9(int64_t a1) {
    // 0x2a40d9
    int64_t v1; // 0x2a40d9
    *(char *)a1 = (char)v1;
    return 0x50cebdaa;
}

// Address range: 0x2a40e1 - 0x2a4114
int64_t function_2a40e1(void) {
    int64_t v1 = __asm_wait(); // 0x2a40e6
    uint32_t v2 = (int32_t)v1; // 0x2a40e7
    if (((v2 + 0xf1d54ff ^ v2) & (v2 ^ -0x80000000)) < 0) {
        // 0x2a40ef
        return v1 & -256 | (int64_t)*(char *)-0x296fff97f6b017f6;
    }
    if (v2 >= 0xf0e2ab01) {
        // 0x2a4104
        *(int32_t *)0x1d40d8ab01e5c196 = v2;
        return function_ffffffffec56417c();
    }
    int64_t result = unknown_3d70f102(); // 0x2a40fc
    int32_t * v3 = (int32_t *)result; // 0x2a4101
    *v3 = *v3 + (int32_t)result;
    return result;
}
