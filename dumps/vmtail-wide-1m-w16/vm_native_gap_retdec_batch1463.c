/*
 * Targeted RetDec C for native executable gap queue batch 1463.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3dcfb9-0x3dd1b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dd3b9-0x3dd5b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dd5b9-0x3dd7b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x486662-0x486862 rank=- name=- kind=- bytes=- uncovered=-
 *   0x486862-0x486a62 rank=- name=- kind=- bytes=- uncovered=-
 *   0x486a62-0x486c62 rank=- name=- kind=- bytes=- uncovered=-
 *   0x486c62-0x486e62 rank=- name=- kind=- bytes=- uncovered=-
 *   0x486e62-0x487062 rank=- name=- kind=- bytes=- uncovered=-
 *   0x487062-0x487214 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5260be-0x5262be rank=- name=- kind=- bytes=- uncovered=-
 *   0x5262be-0x5264be rank=- name=- kind=- bytes=- uncovered=-
 *   0x5264be-0x5266be rank=- name=- kind=- bytes=- uncovered=-
 *   0x5266be-0x5268be rank=- name=- kind=- bytes=- uncovered=-
 *   0x5268be-0x526abe rank=- name=- kind=- bytes=- uncovered=-
 *   0x526abe-0x526cbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x526cbe-0x526ea0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
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

int64_t function_2268e48();
int64_t function_287107d1();
int64_t function_2c5a20d3();
int64_t function_2ffa79a2();
int64_t function_3dcfb9(void);
int64_t function_3dd024(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dd041(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dd0bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3dd111(void);
int64_t function_3dd123(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3dd132(void);
int64_t function_3dd175(int64_t a1);
int64_t function_3dd186(void);
int64_t function_3dd188(void);
int64_t function_3dd195(int64_t a1);
int64_t function_3dd3b9(void);
int64_t function_3dd3e9(void);
int64_t function_3dd407(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dd43e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dd468(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dd4a3(int64_t a1);
int64_t function_3dd565(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40bac030();
int64_t function_486662(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_486707(void);
int64_t function_48670c(void);
int64_t function_486725(void);
int64_t function_486739(int64_t a1);
int64_t function_486740(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48674f(void);
int64_t function_486761(void);
int64_t function_486772(void);
int64_t function_486781(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4868c7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_486926(int64_t a1);
int64_t function_486981(void);
int64_t function_48699d(void);
int64_t function_4869a4(void);
int64_t function_4869ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_486a11(void);
int64_t function_486a1c(void);
int64_t function_486a44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_486a95(int64_t a1);
int64_t function_486ac1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_486ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_486b22(void);
int64_t function_486b39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_486bfc(void);
int64_t function_486c12(void);
int64_t function_486c1a(void);
int64_t function_486c2d(void);
int64_t function_486c31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_486c52(void);
int64_t function_486c73(void);
int64_t function_486c7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_486c85(int64_t a1);
int64_t function_486cbc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_486cc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_486e3e(void);
int64_t function_486e40(void);
int64_t function_486e63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_486e97(void);
int64_t function_486ea0(void);
int64_t function_486f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_486f91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_487129(void);
int64_t function_487150(void);
int64_t function_4871c5(int64_t a1);
int64_t function_524720();
int64_t function_525f7f();
int64_t function_526001();
int64_t function_5260be(void);
int64_t function_5260cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int32_t a10);
int64_t function_533e74d8();
int64_t function_54d560();
int64_t function_554b00();
int64_t function_5e6ad38c();
int64_t function_67917c();
int64_t function_76bf96();
int64_t function_caf2a();
int64_t function_ffffffff84910fe8();
int64_t function_ffffffffd35998be();
int64_t function_ffffffffdf6552bc();
int64_t function_ffffffffe5825960();
int64_t function_ffffffffe8be5098();
int64_t unknown_1c48ad88();
int64_t unknown_3833692c();
int64_t unknown_6a578fcb();
int64_t unknown_75546172();
int64_t unknown_ffffffff9cbde5bf();
int64_t unknown_ffffffffb075e971();

// Address range: 0x3dcfb9 - 0x3dcfba
int64_t function_3dcfb9(void) {
    // 0x3dcfb9
    int64_t result; // 0x3dcfb9
    return result;
}

// Address range: 0x3dd024 - 0x3dd02c
int64_t function_3dd024(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dd024
    int64_t v1; // 0x3dd024
    *(char *)a3 = (char)(v1 & (uint64_t)v1 / 256);
    return unknown_3833692c(a1, a2, a3, a4);
}

// Address range: 0x3dd041 - 0x3dd04a
int64_t function_3dd041(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dd041
    int64_t v1; // 0x3dd041
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 | (uint64_t)v1 / 256);
    return function_2268e48();
}

// Address range: 0x3dd0bf - 0x3dd0d2
int64_t function_3dd0bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3dd0bf
    int64_t v1; // 0x3dd0bf
    int64_t result = v1 & 0xbc55f93a; // 0x3dd0bf
    char * v2 = (char *)(a4 + 32); // 0x3dd0c6
    *v2 = *v2 | (char)result;
    return result;
}

// Address range: 0x3dd111 - 0x3dd116
int64_t function_3dd111(void) {
    // 0x3dd111
    return function_76bf96();
}

// Address range: 0x3dd123 - 0x3dd130
int64_t function_3dd123(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3dd123
    int64_t result; // 0x3dd123
    bool v1; // 0x3dd123
    *(char *)a5 = (char)result + (char)a5 + (char)v1;
    return result;
}

// Address range: 0x3dd132 - 0x3dd133
int64_t function_3dd132(void) {
    // 0x3dd132
    int64_t result; // 0x3dd132
    return result;
}

// Address range: 0x3dd175 - 0x3dd176
int64_t function_3dd175(int64_t a1) {
    // 0x3dd175
    int64_t result; // 0x3dd175
    return result;
}

// Address range: 0x3dd186 - 0x3dd188
int64_t function_3dd186(void) {
    // 0x3dd186
    return function_3dd132();
}

// Address range: 0x3dd188 - 0x3dd193
int64_t function_3dd188(void) {
    char v1 = *(char *)0x53fdac91; // 0x3dd18a
    int64_t result; // 0x3dd188
    *(char *)0x53fdac91 = v1 + (char)(2 * (int32_t)result / 256);
    return result;
}

// Address range: 0x3dd195 - 0x3dd196
int64_t function_3dd195(int64_t a1) {
    // 0x3dd195
    int64_t result; // 0x3dd195
    return result;
}

// Address range: 0x3dd3b9 - 0x3dd3c4
int64_t function_3dd3b9(void) {
    int64_t result = unknown_ffffffff9cbde5bf(); // 0x3dd3b9
    bool v1; // 0x3dd3b9
    if (v1) {
        // 0x3dd3c6
        return result;
    }
    // 0x3dd3c1
    return __asm_int1();
}

// Address range: 0x3dd3e9 - 0x3dd3ee
int64_t function_3dd3e9(void) {
    // 0x3dd3e9
    return function_533e74d8();
}

// Address range: 0x3dd407 - 0x3dd410
int64_t function_3dd407(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dd407
    int64_t result; // 0x3dd407
    int32_t * v1 = (int32_t *)(result + 0x72058803); // 0x3dd407
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x3dd43e - 0x3dd468
int64_t function_3dd43e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x7fffb6bf); // 0x3dd43e
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x3dd43e
    *(char *)0x225f64b = *(char *)0x225f64b + (char)(v2 / 256);
    int32_t * v3 = (int32_t *)(v2 + 7); // 0x3dd44b
    *v3 = *v3 + (int32_t)a1;
    __readgsdword(v2 + 2 * v2);
    char * v4 = (char *)(a3 + 0xbb689c); // 0x3dd458
    *v4 = *v4 + (char)a3;
    int64_t v5; // 0x3dd43e
    *(char *)(v2 & 0xffffffff) = *(char *)&v5;
    return a1 & 0xffffffff;
}

// Address range: 0x3dd468 - 0x3dd482
int64_t function_3dd468(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)((a3 & -0xff01 | (int64_t)&g6) + 26); // 0x3dd479
    int64_t v2; // 0x3dd468
    *v1 = *v1 + (char)v2;
    return v2 & -0xff01 | (int64_t)&g7;
}

// Address range: 0x3dd4a3 - 0x3dd4a6
int64_t function_3dd4a3(int64_t a1) {
    // 0x3dd4a3
    int64_t result; // 0x3dd4a3
    return result;
}

// Address range: 0x3dd565 - 0x3dd710
int64_t function_3dd565(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    unsigned char v1 = (char)(a3 / 256); // 0x3dd565
    int64_t result = unknown_75546172(); // 0x3dd56c
    int64_t v2; // 0x3dd565
    if (*(char *)(v2 + 0x5dcf3784) >= v1) {
        // 0x3dd5b8
        return result;
    }
    int32_t * v3 = (int32_t *)(result - 115); // 0x3dd578
    *v3 = *v3 + (int32_t)v2;
    char v4 = *(char *)((result & -0xff01 | (int64_t)&g9) + 2 * a4); // 0x3dd57d
    char v5 = v4 & v1; // 0x3dd57d
    if (v5 == 0) {
        // 0x3dd582
        unknown_1c48ad88();
        return function_ffffffffe8be5098();
    }
    // 0x3dd5d5
    if (llvm_ctpop_i8(v5) % 2 != 0) {
        // 0x3dd656
        return function_caf2a(a1, 0xe89c29c1);
    }
    // 0x3dd5b8
    return result;
}

// Address range: 0x486662 - 0x4866ff
int64_t function_486662(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = *(int32_t *)-0x709de9bbf74ef3b5; // 0x48667a
    uint32_t v2 = v1 + 202;
    if ((char)v2 >= 238) {
        // 0x48668b
        return v2 % 256 | v1 & -256;
    }
    // 0x4866d3
    bool v3; // 0x486662
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x486679
    uint32_t v5 = __asm_in(-104); // 0x4866d8
    char v6 = *(char *)(v4 - 45); // 0x4866da
    uint32_t v7 = *(int32_t *)v4; // 0x4866f1
    return (int64_t)(0x10000 * (256 * (int32_t)((char)(v5 / 256) - v6) | v5 % 256) / 0x10000 ^ 216) * (int64_t)v7 & 0xffffffff;
}

// Address range: 0x486707 - 0x48670b
int64_t function_486707(void) {
    // 0x486707
    return function_486772();
}

// Address range: 0x48670c - 0x48671d
int64_t function_48670c(void) {
    // 0x48670c
    __asm_int(-42);
    return function_2c5a20d3();
}

// Address range: 0x486725 - 0x486726
int64_t function_486725(void) {
    // 0x486725
    int64_t result; // 0x486725
    return result;
}

// Address range: 0x486739 - 0x48673c
int64_t function_486739(int64_t a1) {
    // 0x486739
    int64_t result; // 0x486739
    return result;
}

// Address range: 0x486740 - 0x486749
int64_t function_486740(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x56d29d6); // 0x486740
    int64_t result; // 0x486740
    bool v2; // 0x486740
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    int64_t v3; // 0x486740
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    return result;
}

// Address range: 0x48674f - 0x48675d
int64_t function_48674f(void) {
    // 0x48674f
    unknown_6a578fcb();
    bool v1; // 0x48674f
    if (v1) {
        int64_t v2; // 0x48674f
        function_486781(v2, v2, v2, v2, v2, (int64_t)&g10);
    }
    // 0x486758
    return function_ffffffffd35998be();
}

// Address range: 0x486761 - 0x486762
int64_t function_486761(void) {
    // 0x486761
    int64_t result; // 0x486761
    return result;
}

// Address range: 0x486772 - 0x486775
int64_t function_486772(void) {
    // 0x486772
    int64_t result; // 0x486772
    return result;
}

// Address range: 0x486781 - 0x4868c6
int64_t function_486781(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x486781
    int64_t v1; // 0x486781
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 0x4adfd8c7); // 0x486781
    uint32_t v4 = *v3; // 0x486781
    *v3 = (int32_t)a3;
    uint32_t v5 = (int32_t)a2; // 0x486787
    bool v6; // 0x486781
    int32_t v7 = v6; // 0x486787
    uint32_t v8 = v4 + v7; // 0x486787
    uint32_t v9 = v5 - v8; // 0x486787
    bool v10 = v6 ? v8 != -1 | v9 - v7 > v5 : v8 > v5; // 0x486787
    int64_t v11 = v9; // 0x486787
    unsigned char v12 = (char)(v4 / 256); // 0x48678a
    char v13 = v10; // 0x48678a
    unsigned char v14 = *(char *)0x21380363 + v13; // 0x48678a
    char v15 = v12 - v14; // 0x48678a
    int64_t v16 = v4 & -0xff01; // 0x48678a
    int64_t v17 = 256 * (int64_t)v15 | v16; // 0x48678a
    uint32_t v18 = *(int32_t *)0xeb4385d3f0062fb; // 0x486790
    if (v15 != 0) {
        int64_t v19 = v18; // 0x48679c
        if (v15 < 0) {
            v19 = function_486725();
        }
        int64_t v20 = v19 & 0xffffffff; // 0x4867a2
        if (v20 == 0) {
            // 0x4867ed
            return 2 * v1 & 0xfffffffe;
        }
        int64_t result = __asm_int3(); // 0x4867b0
        int32_t v21 = result; // 0x4867b3
        if ((0xa2f28d5 - v21 & v21) >= 0) {
            // 0x4867db
            return result;
        }
        int64_t v22 = (int64_t)(0x6f20f193 * *(int32_t *)v11); // 0x4867a3
        char * v23 = (char *)(v20 + 65); // 0x4867be
        unsigned char v24 = *v23; // 0x4867be
        *v23 = v24 / 2 | 128 * v24;
        int32_t v25 = *(int32_t *)(*(int64_t *)(v2 - v17 & 0xffffffff) & 0xffffffff); // 0x4867c2
        __asm_outsd((int16_t)v17, v25);
        int64_t v26 = v22 ^ 65; // 0x4867c3
        return (v26 - (int64_t)((int32_t)v26 < 0xa4cb4a12)) % 256 | v22 & 0xffffff00;
    }
    bool v27 = v10 ? v14 != -1 | v15 - v13 > v12 : v14 > v12; // 0x48678a
    uint32_t result2 = v18 + 0x56a2ade1 + (int32_t)v27; // 0x48681b
    if (result2 == 0) {
        int64_t * v28 = (int64_t *)v2; // 0x48680b
        *v28 = v17;
        if (a4 == 0) {
            // 0x48684b
            return __asm_int3();
        }
        // 0x486816
        *v28 = v17;
        return 0;
    }
    // 0x486822
    if (v27 ? result2 <= v18 : v18 > 0xa95d521e) {
        // 0x4867db
        return result2;
    }
    char * v29 = (char *)(v1 - 4); // 0x486824
    *v29 = *v29 + (char)result2;
    *(char *)(a5 - 0x12c0f0f3) = (char)v1;
    int64_t v30 = (v6 ? -4 : 4) + v11; // 0x48682e
    int64_t v31 = v1 / 256; // 0x48682f
    int64_t result3 = unknown_ffffffffb075e971(); // 0x486831
    if (v1 < v31) {
        // 0x486839
        *(int32_t *)a1 = *(int32_t *)v30;
        return result3;
    }
    char v32 = *(char *)(v2 - 128); // 0x4868b6
    int64_t v33 = 256 * (int64_t)((char)((char)v1 < (char)v31) - v32) | v16; // 0x4868b6
    char * v34 = (char *)(a4 + 92); // 0x4868b9
    unsigned char v35 = *v34; // 0x4868b9
    *v34 = v35 / 2 | 128 * v35;
    uint32_t v36 = *(int32_t *)v30; // 0x4868bd
    int64_t result4 = v36; // 0x4868bd
    int32_t * v37 = (int32_t *)(v33 - 33); // 0x4868be
    uint32_t v38 = *v37; // 0x4868be
    int32_t v39 = v38 < 0; // 0x4868be
    *v37 = 2 * v38 | v39;
    *(int64_t *)(v2 + 8) = v2 + 16;
    int16_t v40 = v33; // 0x4868c2
    __asm_out(v40, v36);
    if (v38 / 0x40000000 % 2 == v39) {
        // 0x486858
        __asm_int(98);
        return result4;
    }
    // 0x4868c5
    *(int32_t *)a1 = __asm_insd(v40);
    return result4;
}

// Address range: 0x4868c7 - 0x486911
int64_t function_4868c7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4868c7
    int64_t v1; // 0x4868c7
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 107); // 0x4868c9
    int32_t v4 = *v3 & (int32_t)a1; // 0x4868c9
    *v3 = v4;
    if (v4 == 0) {
        // 0x48690d
        return __asm_wait(a1);
    }
    // 0x4868ce
    bool v5; // 0x4868c7
    return (v2 + 115 + (int64_t)v5) % 256 | v2 & -256;
}

// Address range: 0x486926 - 0x48692b
int64_t function_486926(int64_t a1) {
    // 0x486926
    return __asm_wait(a1);
}

// Address range: 0x486981 - 0x486986
int64_t function_486981(void) {
    // 0x486981
    return function_5e6ad38c();
}

// Address range: 0x48699d - 0x48699f
int64_t function_48699d(void) {
    // 0x48699d
    int64_t v1; // 0x48699d
    return function_4869ed(v1, v1, v1, v1);
}

// Address range: 0x4869a4 - 0x4869a5
int64_t function_4869a4(void) {
    // 0x4869a4
    int64_t result; // 0x4869a4
    return result;
}

// Address range: 0x4869ed - 0x486a04
int64_t function_4869ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4869ed
    int64_t v1; // 0x4869ed
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    *(int32_t *)((v2 & 0xffffffff) + 94) = (int32_t)v2;
    return 0x10000 * (int32_t)v1 - 0x25f80000 >> 16;
}

// Address range: 0x486a11 - 0x486a12
int64_t function_486a11(void) {
    // 0x486a11
    int64_t result; // 0x486a11
    return result;
}

// Address range: 0x486a1c - 0x486a1d
int64_t function_486a1c(void) {
    // 0x486a1c
    int64_t result; // 0x486a1c
    return result;
}

// Address range: 0x486a44 - 0x486a65
int64_t function_486a44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x486a44
    int64_t v1; // 0x486a44
    unsigned char v2 = llvm_ctpop_i8((char)(v1 & v1)); // 0x486a44
    int64_t v3 = __asm_hlt(a5); // 0x486a4b
    if (v2 % 2 == 0) {
        v3 = function_486a1c();
    }
    char * v4 = (char *)(a5 + 30); // 0x486a4d
    *v4 = -*v4;
    int64_t result = v3 & -256 | (int64_t)__asm_in_133(43); // 0x486a59
    *(int64_t *)v1 = result;
    int64_t * v5 = (int64_t *)(a2 + 113 & 0xffffffff); // 0x486a5d
    *v5 = *v5 | a3;
    return result;
}

// Address range: 0x486a95 - 0x486a96
int64_t function_486a95(int64_t a1) {
    // 0x486a95
    int64_t result; // 0x486a95
    return result;
}

// Address range: 0x486ac1 - 0x486ac6
int64_t function_486ac1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x486ac1
    int64_t v1; // 0x486ac1
    int64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return (v2 + 194) % 256 | v2 & -256;
}

// Address range: 0x486ad0 - 0x486b06
int64_t function_486ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x486b03
    int64_t v1; // 0x486ad0
    return v1 & 0xffffffff;
    // 0x486ad4
    return __asm_int3();
}

// Address range: 0x486b22 - 0x486b23
int64_t function_486b22(void) {
    // 0x486b22
    int64_t result; // 0x486b22
    return result;
}

// Address range: 0x486b39 - 0x486bc9
int64_t function_486b39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x486b39
    int64_t v1; // 0x486b39
    char v2 = v1; // 0x486b3f
    int64_t result; // 0x486b39
    if (v2 != 0) {
        // 0x486b67
        return result;
    }
    if (v2 >= 0) {
        // 0x486bc3
        return v1 ^ 110;
    }
    int32_t v3 = __asm_in(-127); // 0x486b45
    uint32_t v4 = *(int32_t *)(2 * a3 - 0x6ba69bed + v1); // 0x486b4c
    uint32_t v5 = (int32_t)v1; // 0x486b4c
    if (v4 > v5) {
        // 0x486b55
        return function_2ffa79a2();
    }
    // 0x486b65
    result = v3 & 0x459f183b;
    if (a4 != 1 == v4 == v5) {
        result = function_486b22();
    }
    // 0x486b67
    return result;
}

// Address range: 0x486bfc - 0x486c01
int64_t function_486bfc(void) {
    // 0x486bfc
    return function_ffffffff84910fe8();
}

// Address range: 0x486c12 - 0x486c15
int64_t function_486c12(void) {
    // 0x486c12
    int64_t result; // 0x486c12
    return result;
}

// Address range: 0x486c1a - 0x486c1b
int64_t function_486c1a(void) {
    // 0x486c1a
    int64_t result; // 0x486c1a
    return result;
}

// Address range: 0x486c2d - 0x486c30
int64_t function_486c2d(void) {
    // 0x486c2d
    int64_t result; // 0x486c2d
    return result;
}

// Address range: 0x486c31 - 0x486c3b
int64_t function_486c31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x486c31
    int64_t result; // 0x486c31
    *(int32_t *)a1 = (int32_t)result;
    float80_t v1; // 0x486c31
    int16_t v2 = v1; // 0x486c32
    bool v3; // 0x486c31
    *(int16_t *)(a2 + 47 + (v3 ? -4 : 4)) = v2;
    *(int16_t *)(a3 + 31) = v2;
    return result;
}

// Address range: 0x486c52 - 0x486c54
int64_t function_486c52(void) {
    // 0x486c52
    int64_t v1; // 0x486c52
    return function_486c7d(v1, v1, v1, v1);
}

// Address range: 0x486c73 - 0x486c79
int64_t function_486c73(void) {
    // 0x486c73
    return function_ffffffffe5825960();
}

// Address range: 0x486c7d - 0x486c83
int64_t function_486c7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x486c7d
    int64_t result; // 0x486c7d
    int32_t * v1 = (int32_t *)(result - 15); // 0x486c7e
    *v1 = *v1 & (int32_t)a4;
    return result;
}

// Address range: 0x486c85 - 0x486c88
int64_t function_486c85(int64_t a1) {
    // 0x486c85
    int64_t result; // 0x486c85
    return result;
}

// Address range: 0x486cbc - 0x486cc5
int64_t function_486cbc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x486cbc
    return function_40bac030();
}

// Address range: 0x486cc6 - 0x486de7
int64_t function_486cc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x486cc6
    int64_t v1; // 0x486cc6
    int64_t v2 = v1;
    int64_t v3 = a2;
    char * v4 = (char *)(a2 + 0x220a3bf0); // 0x486cc8
    *v4 = *v4 + (char)(a5 / 256);
    unsigned char v5 = (char)v1 & 27; // 0x486cce
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(v2 + 0x662a2030); // 0x486d00
        *v6 = *v6 - (int32_t)v2;
        return a4 & 0xffffff00 | (int64_t)*(char *)&v3;
    }
    int64_t v7 = v1 & -256 | (int64_t)v5; // 0x486cce
    int32_t * v8 = (int32_t *)(v7 - 31); // 0x486cd2
    *v8 = *v8 + (int32_t)v7;
    uint32_t v9 = (int32_t)__asm_sti(a1); // 0x486cdb
    int32_t v10 = *(int32_t *)(a4 - 79); // 0x486cdb
    int32_t v11 = *(int32_t *)&v3; // 0x486cde
    bool v12; // 0x486cc6
    v3 += (v12 ? -4 : 4);
    int32_t v13 = v11 - (v10 != -2 | -2 - v10 + v9 > v9 ? 0x67798ac4 : 0x67798ac3); // 0x486cdf
    __asm_out_134(11, (char)v13);
    if (v13 == 0) {
        // 0x486ceb
        return __asm_wait((a1 + 224) % 256 | a1 & 0xffffff00) & 0xb0526b73;
    }
    // 0x486d44
    __asm_int3();
    char v14 = v2; // 0x486d21
    int64_t result = (v2 + 129) % 256 | v2 & 0xffffff00; // 0x486d21
    if ((126 - v14 & v14) >= 0) {
        // 0x486d77
        return result;
    }
    uint32_t v15 = *(int32_t *)(a3 + 0x6088d646) ^ (int32_t)result; // 0x486d25
    unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x486d25
    int64_t v17 = v15; // 0x486d25
    if (v16 % 2 == 0) {
        char * v18 = (char *)(v17 + 21); // 0x486d2d
        *v18 = *v18 & -111;
        return v17 & 0xffff00ff | 0xc600;
    }
    if (v15 == 0) {
        // 0x486d6a
        __asm_out_135(-2, 0);
        *(char *)((a4 & -256 | 146) - 34) = -111;
        return 0;
    }
    char * v19 = (char *)v17; // 0x486dd2
    unsigned char v20 = *v19; // 0x486dd2
    unsigned char v21 = (char)a3; // 0x486dd2
    *v19 = v20 - v21;
    int64_t v22; // 0x486cc6
    *(int64_t *)((int64_t)&v22 - 8) = v3;
    char v23 = *(char *)(a5 - 85); // 0x486ddf
    __asm_out_134(85, 20);
    int32_t v24 = *(int32_t *)v3; // 0x486de4
    __asm_outsd(256 * (int16_t)((char)(v20 < v21) - 16 - v23) | 57, v24);
    return v17 & 0xffffff00 | 20;
}

// Address range: 0x486e3e - 0x486e3f
int64_t function_486e3e(void) {
    // 0x486e3e
    int64_t result; // 0x486e3e
    return result;
}

// Address range: 0x486e40 - 0x486e43
int64_t function_486e40(void) {
    // 0x486e40
    int64_t result; // 0x486e40
    return result;
}

// Address range: 0x486e63 - 0x486e80
int64_t function_486e63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x486e63
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x486e63
    bool v1; // 0x486e63
    if (v1 || v1) {
        result = function_486e3e();
    }
    // 0x486e7d
    return result;
}

// Address range: 0x486e97 - 0x486e9d
int64_t function_486e97(void) {
    // 0x486e97
    return function_287107d1();
}

// Address range: 0x486ea0 - 0x486ea2
int64_t function_486ea0(void) {
    // 0x486ea0
    return function_486ea0();
}

// Address range: 0x486f51 - 0x486f68
int64_t function_486f51(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 123); // 0x486f52
    *v1 = *v1 & -0x1e2f9cd;
    __asm_hlt(a1);
    int64_t v2; // 0x486f51
    *(int32_t *)a3 = *(int32_t *)&v2 & (int32_t)a4;
    return (int64_t)*(int32_t *)0x2a9d5a2eec024a29;
}

// Address range: 0x486f91 - 0x4870cb
int64_t function_486f91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x486f91
    int64_t result3; // 0x486f91
    unsigned char v1 = (char)(result3 / 256); // 0x486f93
    unsigned char v2 = v1 + (char)a3; // 0x486f93
    int64_t v3 = 256 * (int64_t)v2 | result3 & -0xff01; // 0x486f93
    uint32_t v4 = (int32_t)a2;
    if (v2 < v1 || v2 == 0) {
        unsigned char v5 = (char)result3 - v2; // 0x486f98
        int64_t result = result3 & -256 | (int64_t)v5; // 0x486f98
        int64_t v6 = a2; // bp-16, 0x486f9a
        *(int32_t *)0x3f9b51659d34832b = (int32_t)result;
        if (v5 == 0) {
            // 0x486fd7
            return result;
        }
        int64_t v7 = a3 & -0xff01; // 0x486f9c
        unsigned char v8 = llvm_ctpop_i8(v5); // 0x486f98
        __asm_outsd((int16_t)v7 | (int16_t)&g8, v4);
        if (v8 % 2 == 0) {
            // 0x486fd7
            return result;
        }
        char * v9 = (char *)(a1 + 0x1ed73308); // 0x486fac
        *v9 = -*v9;
        int64_t v10 = __asm_int3(); // 0x486fb2
        char v11 = *(char *)v3; // 0x486fb3
        int64_t v12 = v7 | (int64_t)&g8 & -0xff01 | 256 * (int64_t)(v11 ^ (char)((int64_t)&g8 >> 8)); // 0x486fb3
        char * v13 = (char *)(v10 - 0x62966d37); // 0x486fb7
        char v14 = v10; // 0x486fb7
        *v13 = *v13 ^ v14;
        uint32_t v15 = ((int32_t)v3 & -256 | 47) + v4; // 0x486fc6
        int64_t v16 = v15; // 0x486fc6
        *(char *)(2 * v12 + (int64_t)&v6) = v14 & -15;
        *(int32_t *)a1 = *(int32_t *)v16;
        if (v15 >= v4) {
            // 0x486fd7
            return 256 * (int64_t)*(char *)((a4 & -256 | 166) + 87) | v10 & 0xe9c300f1;
        }
        // 0x48701d
        bool v17; // 0x486f91
        int64_t v18 = v17 ? -4 : 4; // 0x486fcc
        unsigned char v19 = llvm_ctpop_i8((char)v15); // 0x486fc6
        int64_t result2 = __asm_hlt(v18 + a1); // 0x48701d
        if (v19 % 2 != 0) {
            // 0x486fd7
            return result2;
        }
        // 0x48709c
        int64_t v20; // 0x486f91
        *(char *)v20 = *(char *)&v20 - (char)result3;
        __asm_outsb((int16_t)v12, *(char *)(v18 + v16));
        return result2 | 199;
    }
    // 0x486ff3
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t * v21 = (int32_t *)(a1 + 53); // 0x486ff7
    *v21 = *v21 + (int32_t)a4;
    int64_t v22 = (int64_t)(v4 - *(int32_t *)(a3 + 124)); // 0x487006
    char * v23 = (char *)v22; // 0x487009
    char v24 = *v23; // 0x487009
    char v25 = v24 + v2; // 0x487009
    *v23 = v25;
    char v26 = result3 / 256; // 0x48700c
    *(int64_t *)0x4dcf3a17 = 0x4dcf3a1f;
    if (v26 < 0 == ((v25 ^ v24) & (v25 ^ v2)) < 0 != ((v26 & 64) == 0)) {
        // 0x487018
        return result3;
    }
    if ((v26 & 64) != 0) {
        // 0x487047
        return result3 & 0xf6b41587 | 0x94bea78;
    }
    int32_t * v27 = (int32_t *)v22; // 0x48706a
    uint32_t v28 = *v27; // 0x48706a
    *v27 = v28 - 0x635cff13;
    int64_t v29 = result3 - (v28 > 0x635cff12 ? 0x910ac7af : 0x910ac7ae); // 0x48706c
    *(char *)-0x1597d8856bbb73aa = (char)v29;
    int64_t v30 = (int64_t)*(int32_t *)(2 * v22 + v3); // 0x48707d
    *(int64_t *)0x4dcf3a0f = 0x4f7d692b;
    int32_t * v31 = (int32_t *)(a1 + 84); // 0x487087
    uint32_t v32 = *v31; // 0x487087
    uint32_t v33 = v32 + (int32_t)a1; // 0x487087
    uint32_t v34 = v33 + (int32_t)(68 * v30 != 0x4400000000 * v30 >> 32); // 0x487087
    *v31 = v34;
    if (68 * v30 != 0x4400000000 * v30 >> 32 ? v34 <= v32 : v33 < v32) {
        // 0x48708c
        return v29 & 0xffffffff;
    }
    int32_t v35 = -0x635cff13 - *(int32_t *)(a1 + 6); // 0x487071
    int32_t v36 = __asm_in(54); // 0x4870a5
    *(char *)a1 = __asm_insb((int16_t)v35);
    int64_t result4 = v36 & 0x6d86f0da; // 0x4870b2
    int32_t * v37 = (int32_t *)(8 * result4 + v3); // 0x4870b8
    *v37 = *v37 + v35;
    return result4;
}

// Address range: 0x487129 - 0x48712f
int64_t function_487129(void) {
    // 0x487129
    return function_67917c();
}

// Address range: 0x487150 - 0x487155
int64_t function_487150(void) {
    // 0x487150
    return function_ffffffffdf6552bc();
}

// Address range: 0x4871c5 - 0x4871c6
int64_t function_4871c5(int64_t a1) {
    // 0x4871c5
    int64_t result; // 0x4871c5
    return result;
}

// Address range: 0x5260be - 0x5260cf
int64_t function_5260be(void) {
    // 0x5260be
    bool v1; // 0x5260be
    if (v1) {
        function_525f7f();
    }
    // 0x5260c4
    return function_526001();
}

// Address range: 0x5260cf - 0x526ea0
int64_t function_5260cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int32_t a10) {
    // 0x5260cf
    __stack_chk_fail();
    int64_t v1 = a2; // bp-120, 0x5260fb
    __readfsqword(40);
    int64_t v2 = *(int64_t *)(a1 + 64); // 0x52612e
    int64_t v3; // 0x5260cf
    int64_t result2; // 0x5260cf
    int64_t v4; // 0x5260cf
    int64_t v5; // 0x5260cf
    int64_t v6; // 0x5260cf
    int64_t v7; // 0x5260cf
    int64_t v8; // 0x5260cf
    int64_t v9; // 0x5261dd
    int32_t * v10; // 0x526161
    if (v2 != g3) {
        // 0x526310
        result2 = v2;
        v4 = a3;
        v5 = v1;
        goto lab_0x52620e;
    } else {
        int64_t v11 = function_554b00(a6 + 208, a2); // 0x52615c
        v10 = (int32_t *)a7;
        *v10 = 0;
        v6 = a3;
        v7 = a5;
        if (*(char *)(v11 + 56) == 0) {
            // 0x526290
            function_54d560(v11, a2, a3, a4, a5, a6);
            int64_t v12 = *(int64_t *)(*(int64_t *)v11 + 48); // 0x5262c3
            v6 = v12 == g5 ? a5 : a6;
            v7 = v12 == g5 ? a3 : a5;
        }
        // 0x5261a5
        v8 = a3 & 0xffffffff;
        v9 = function_524720(a1, v1, a3, a4, a5, a6);
        if (v9 == 0) {
            goto lab_0x526368;
        } else {
            // 0x5261f5
            v3 = v8;
            if ((int32_t)a3 == -1) {
                uint64_t v13 = *(int64_t *)(v9 + 16); // 0x526270
                if (v13 >= *(int64_t *)(v9 + 24)) {
                    int64_t v14 = *(int64_t *)v9; // 0x526338
                    if ((int32_t)v14 == -1) {
                        goto lab_0x526368;
                    } else {
                        // 0x526347
                        v3 = v14 & 0xffffffff;
                        goto lab_0x5261fa;
                    }
                } else {
                    // 0x52627f
                    v3 = (int64_t)*(char *)v13;
                    goto lab_0x5261fa;
                }
            } else {
                goto lab_0x5261fa;
            }
        }
    }
  lab_0x526da0_4:;
    // 0x526da0
    int64_t * v15; // 0x5260cf
    *(int32_t *)*v15 = 4;
    int64_t v16; // 0x5260cf
    int64_t result = v16; // 0x526dab
    goto lab_0x526586_2;
  lab_0x526586_2:;
    // 0x526586
    int64_t v17; // 0x52639f
    if (*(int64_t *)(v17 + 152) != __readfsqword(40)) {
        // 0x526e8e
        __stack_chk_fail();
        return (int64_t)&g10;
    }
    // 0x526222
    return result;
  lab_0x526532_2:;
    // 0x526532
    int64_t v18; // 0x5260cf
    int64_t v19 = v18; // 0x5260cf
    int64_t v20; // 0x5260cf
    int64_t v21 = v20; // 0x5260cf
    int64_t v22; // 0x5260cf
    int64_t v23 = v22; // 0x5260cf
    int64_t v24; // 0x5260cf
    int64_t v25 = v24; // 0x5260cf
    goto lab_0x526532_3;
  lab_0x526de0:;
    int64_t v188 = 0; // 0x526de5
    int64_t v64; // 0x5260cf
    int64_t v189 = v64; // 0x526de5
    int64_t v66; // 0x5260cf
    int64_t v190 = v66; // 0x526de5
    char v191 = 1; // 0x526de5
    int64_t v174 = 0; // 0x526de5
    int64_t v61; // 0x5260cf
    if (v61 == 0) {
        // break -> 0x52688d
        goto lab_0x52688d_3;
    }
    goto lab_0x52646a;
  lab_0x52646a:;
    char v192 = v191;
    int64_t v193 = v189;
    int64_t v194 = v188;
    char v195 = 0; // 0x526470
    int64_t v196 = v190; // 0x526470
    int64_t v197 = v61; // 0x526470
    int64_t v198; // 0x5260cf
    if ((int32_t)v190 == -1) {
        uint64_t v199 = *(int64_t *)(v61 + 16); // 0x526870
        if (v199 >= *(int64_t *)(v61 + 24)) {
            int64_t v200 = *(int64_t *)v61; // 0x526c98
            int64_t v201 = v200 & 0xffffffff; // 0x526ca4
            v195 = 1;
            v196 = v201;
            v197 = 0;
            v198 = v201;
            if ((int32_t)v200 != -1) {
                goto lab_0x526882;
            } else {
                goto lab_0x526476;
            }
        } else {
            // 0x52687e
            v198 = (int64_t)*(char *)v199;
            goto lab_0x526882;
        }
    } else {
        goto lab_0x526476;
    }
  lab_0x526462:;
    // 0x526462
    int64_t v65; // 0x5260cf
    v188 = v65;
    int64_t v67; // 0x5260cf
    v189 = v67;
    int64_t v68; // 0x5260cf
    v190 = v68;
    v191 = 0;
    int64_t v202 = v65; // 0x526465
    int64_t v203 = v67; // 0x526465
    int64_t v204 = v68; // 0x526465
    int64_t v205 = 0; // 0x526465
    if (v61 == 0) {
        goto lab_0x52647f;
    } else {
        goto lab_0x52646a;
    }
  lab_0x526476:
    // 0x526476
    v202 = v194;
    v203 = v193;
    v204 = v196;
    v205 = v197;
    v174 = v194;
    if (v195 == v192) {
        // break -> 0x52688d
        goto lab_0x52688d_3;
    }
    goto lab_0x52647f;
  lab_0x52647f:;
    int64_t v53 = v205;
    int64_t v206 = v204;
    int64_t v207 = v203;
    v16 = v202;
    int64_t v62; // 0x5260cf
    char * v208 = (char *)v62; // 0x52647f
    unsigned char v209 = *v208; // 0x52647f
    int64_t v210 = v209; // 0x52647f
    int64_t v152; // 0x5260cf
    char * v211 = (char *)(v152 + v210); // 0x526484
    int64_t v212 = v206; // 0x5260cf
    int64_t v213 = 37; // 0x5260cf
    int64_t v214 = v206; // 0x5260cf
    int32_t * v41; // 0x5260cf
    int64_t * v92; // 0x5260cf
    switch (*v211) {
        case 0: {
            int64_t v215 = v206; // 0x52662f
            if (*(int64_t *)(*v92 + 64) != g4) {
                // 0x526b20
                *v41 = (int32_t)v206;
                v215 = v206 & 0xffffffff;
            }
            int64_t v216 = v215;
            v212 = v216;
            if (v209 == 0) {
                goto lab_0x5264a1;
            } else {
                // 0x52663d
                *v211 = v209;
                v212 = v216;
                v213 = v210;
                v214 = v216;
                if (v209 != 37) {
                    goto lab_0x5264a1;
                } else {
                    goto lab_0x526650;
                }
            }
        }
        case 37: {
            goto lab_0x526650;
        }
        default: {
            goto lab_0x5264a1;
        }
    }
  lab_0x526650:;
    int64_t v217 = v214;
    int64_t v218 = v213;
    int64_t v219 = v62 + 1; // 0x526650
    int64_t * v52; // 0x5260cf
    *v52 = v219;
    int64_t * v54; // 0x5260cf
    if (*v54 == v219) {
        goto lab_0x526da0_4;
    }
    int64_t v220 = (int64_t)*(char *)v219; // 0x526665
    char * v221 = (char *)(v152 + v220); // 0x52666b
    unsigned char v222 = *v221; // 0x52666b
    char v223; // 0x5260cf
    char v224; // 0x5260cf
    int64_t v225; // 0x5260cf
    int64_t v226; // 0x5260cf
    int64_t v227; // 0x5260cf
    int64_t v228; // 0x5260cf
    int64_t v229; // 0x5260cf
    int64_t v230; // 0x5260cf
    int32_t * v154; // 0x5260cf
    char * v156; // 0x5260cf
    if (v222 == 0) {
        int64_t v231 = *(int64_t *)(*v92 + 64); // 0x526984
        int64_t v232 = v220; // 0x52698f
        int64_t v233 = v217; // 0x52698f
        if (v231 != g4) {
            // 0x526cc0
            *v154 = (int32_t)v217;
            *v156 = (char)v218;
            v232 = v231 & 0xffffffff;
            v233 = (int64_t)*v154;
        }
        int64_t v234 = v233;
        int64_t v235 = v232;
        char v236 = v235;
        v223 = 0;
        v230 = 0;
        v229 = 0;
        v226 = v234;
        v227 = 0;
        if (v236 == 0) {
            goto lab_0x5266c9;
        } else {
            // 0x52699e
            *v221 = v236;
            v224 = v236;
            v228 = v235;
            v225 = v234;
            goto lab_0x526680;
        }
    } else {
        // 0x526665
        v224 = v222;
        v228 = v222;
        v225 = v217;
        goto lab_0x526680;
    }
  lab_0x5264a1:;
    int64_t v90 = v212;
    int64_t * v39; // 0x5260cf
    int64_t v237 = *v39 + 1; // 0x5264aa
    int64_t * v127; // 0x5260cf
    int64_t * v128; // 0x5260cf
    char v97; // 0x5260cf
    int64_t v133; // 0x5260cf
    int32_t v86; // 0x5260cf
    int32_t v99; // 0x5260cf
    int64_t v123; // 0x5260cf
    int64_t v78; // 0x5260cf
    int64_t v35; // 0x5260cf
    int64_t v134; // 0x5260cf
    int64_t v80; // 0x5260cf
    int64_t v125; // 0x5260cf
    int64_t v88; // 0x5260cf
    int64_t v85; // 0x5260cf
    int64_t v98; // 0x5260cf
    int64_t v76; // 0x5260cf
    int64_t v132; // 0x5260cf
    int64_t v84; // 0x5260cf
    int64_t v121; // 0x5260cf
    int64_t v74; // 0x5260cf
    if ((*(char *)(v237 + 2 * (int64_t)*v208) & 32) == 0) {
        if (v16 == 0) {
            int32_t v238 = v90; // 0x526e59
            *v41 = v238;
            char v239 = (char)*v92;
            v84 = 0;
            v85 = v207;
            v86 = v238;
            v97 = v239;
            v98 = v207;
            v99 = v238;
            if (v239 != (char)*v92) {
                goto lab_0x526d65;
            } else {
                goto lab_0x52695c;
            }
        } else {
            // 0x5268c9
            v88 = v207;
            if ((int32_t)v207 == -1) {
                uint64_t v240 = *(int64_t *)(v16 + 16); // 0x5269d0
                if (v240 >= *(int64_t *)(v16 + 24)) {
                    int64_t v241 = *(int64_t *)v16; // 0x526d18
                    int32_t v242 = v90; // 0x526d1b
                    *v41 = v242;
                    int64_t v243 = v241 & 0xffffffff; // 0x526d26
                    v88 = v243;
                    if ((int32_t)v241 != -1) {
                        goto lab_0x5268d2;
                    } else {
                        int64_t v244 = *v92; // 0x526d36
                        *v41 = v242;
                        int64_t v245 = *v92; // 0x526d49
                        char v246 = v245;
                        v84 = 0;
                        v85 = v243;
                        v86 = v242;
                        v97 = v246;
                        v98 = v243;
                        v99 = v242;
                        if (v246 == (char)v244) {
                            goto lab_0x52695c;
                        } else {
                            goto lab_0x526d65;
                        }
                    }
                } else {
                    // 0x5269de
                    v88 = (int64_t)*(char *)v240;
                    goto lab_0x5268d2;
                }
            } else {
                goto lab_0x5268d2;
            }
        }
    } else {
        int64_t v247 = v62 + 1; // 0x5264b5
        int64_t v248 = *v54; // 0x5264ba
        int64_t v249 = v247; // 0x5264bf
        if (v248 != v247) {
            int64_t v250 = v247; // 0x5264d3
            v249 = v247;
            if ((*(char *)(2 * (int64_t)*(char *)v247 + v237) & 32) != 0) {
                int64_t v251 = v250 + 1; // 0x5264ec
                v249 = v251;
                while (v248 != v251) {
                    // 0x5264e0
                    v250 = v251;
                    v249 = v251;
                    if ((*(char *)(2 * (int64_t)*(char *)v251 + v237) & 32) == 0) {
                        // break -> 0x5264f5
                        break;
                    }
                    v251 = v250 + 1;
                    v249 = v251;
                }
            }
        }
        // 0x5264f5
        v35 = v249;
        v132 = v207;
        v133 = v90;
        v134 = v53;
        if (v16 == 0) {
            goto lab_0x52655f;
        } else {
            // 0x526500
            v80 = v53;
            v74 = v16;
            v76 = v207;
            v78 = v90;
            if ((int32_t)v207 == -1) {
                // 0x526500
                v128 = (int64_t *)(v16 + 24);
                v127 = (int64_t *)(v16 + 16);
                v125 = v53;
                v123 = v90;
                v121 = v16;
                goto lab_0x5265c8;
            } else {
                goto lab_0x526509;
            }
        }
    }
  lab_0x526882:
    // 0x526882
    v202 = v194;
    v203 = v193;
    v204 = v198;
    v205 = v61;
    v174 = v194;
    if (v192 == 0) {
        // break -> 0x52688d
        goto lab_0x52688d_3;
    }
    goto lab_0x52647f;
  lab_0x52655f:;
    int64_t v72 = 1; // 0x526569
    int64_t v73 = 0; // 0x526569
    int64_t v75 = v132; // 0x526569
    int64_t v77 = v133; // 0x526569
    int64_t v79 = v134; // 0x526569
    int64_t v29 = 0; // 0x526569
    int64_t v30 = v132; // 0x526569
    int64_t v32; // 0x5260cf
    int64_t v31 = v32; // 0x526569
    int64_t v33 = v133; // 0x526569
    int64_t v34 = v35; // 0x526569
    int64_t v36 = v134; // 0x526569
    if (v134 != 0) {
        goto lab_0x526510;
    } else {
        goto lab_0x526570;
    }
  lab_0x5266c9:;
    int64_t v252 = v227;
    int64_t v253 = v226;
    int64_t v254 = v230;
    int64_t * v48; // 0x5260cf
    uint64_t v255 = *v48; // 0x5266d8
    int64_t v256 = v255 < 0xffffffff00000001 ? v255 : v255 + 0xffffffff; // 0x5266d8
    char * v161; // 0x5260cf
    *v161 = (char)v229;
    char * v159; // 0x5260cf
    *v159 = (char)v218;
    *v156 = v223;
    int64_t * v160; // 0x5260cf
    int64_t v257 = *(int64_t *)(*(int64_t *)*v160 + 64); // 0x5266ee
    int64_t * v162; // 0x5260cf
    uint64_t v258 = *v162;
    int64_t v259 = v258 < 0xffffffff00000001 ? v258 : v258 + 0xffffffff;
    int32_t v51; // 0x5260cf
    int64_t v50; // 0x5260cf
    int64_t v43; // 0x5260cf
    int64_t v187; // 0x5260cf
    int64_t v49; // 0x5260cf
    int64_t v145; // 0x5267a9
    int64_t v186; // 0x5267c7
    int64_t v137; // 0x5267d6
    int32_t v146; // 0x5267d8
    int32_t * v158; // 0x5260cf
    int32_t * v163; // 0x5260cf
    int64_t * v164; // 0x5260cf
    char * v165; // 0x5260cf
    char * v166; // 0x5260cf
    char * v167; // 0x5260cf
    int32_t * v89; // 0x5260cf
    int64_t * v168; // 0x5260cf
    int64_t * v169; // 0x5260cf
    int64_t * v170; // 0x5260cf
    int64_t * v171; // 0x5260cf
    int64_t * v172; // 0x5260cf
    int64_t * v45; // 0x5260cf
    int64_t * v173; // 0x5260cf
    if (v257 != g3) {
        // 0x526c08
        *v89 = (int32_t)v253;
        int64_t v260 = v256 | v207; // 0x526c25
        *v48 = v260;
        int64_t v261 = v259 | v253 & 0xffffffff; // 0x526c2d
        *v162 = v261;
        *v173 = v252;
        *v168 = v254;
        *v170 = *v169;
        *v171 = *v15;
        *v45 = v260;
        v43 = v257;
        v49 = v207 & 0xffffffff;
        v50 = v261;
        v51 = *v89;
        goto lab_0x526829;
    } else {
        int64_t v262 = v253 & 0xffffffff; // 0x526713
        uint64_t v263 = v256 | v207; // 0x526716
        *v163 = (int32_t)v253;
        *v48 = v263;
        *v164 = v262;
        *v162 = v259 | v262;
        int64_t v264 = function_554b00(*(int64_t *)(v17 + 104), v254); // 0x526730
        *(int32_t *)*v15 = 0;
        unsigned char v265; // 0x526760
        if (*(char *)(v264 + 56) == 0) {
            // 0x526a98
            int32_t v266; // 0x52673a
            int32_t * v267; // 0x5260cf
            *v267 = v266;
            unsigned char v268; // 0x52674a
            char * v269; // 0x5260cf
            *v269 = v268;
            unsigned char v270; // 0x526745
            *v161 = v270;
            char v271; // 0x52673f
            *v159 = v271;
            int64_t * v272; // 0x5260cf
            *v272 = v264;
            int64_t v273; // 0x5260cf
            int64_t v274; // 0x526735
            int64_t v275; // 0x52674a
            function_54d560(v264, v274, v273, (int64_t)v270, v32, v275);
            int64_t v276 = *v272; // 0x526ab8
            char v277 = *v159; // 0x526abd
            unsigned char v278 = *v269; // 0x526ac8
            int32_t v279 = *v267; // 0x526ace
            int64_t v280 = *(int64_t *)v276; // 0x526ad3
            int64_t v281 = *(int64_t *)(v280 + 48); // 0x526ad6
            int64_t v282 = g5; // 0x526ada
            if (v281 != v282) {
                // 0x526ae7
                *v158 = v279;
                *v159 = v278;
                *v156 = v277;
            }
        } else {
            // 0x526760
            v265 = *(char *)(v264 + 94);
        }
        char v283 = *v156;
        int64_t v284 = (int64_t)*v161;
        *(char *)(v17 + 148) = (char)(int64_t)v265;
        if (v284 != 0) {
            // 0x5269b0
            *v165 = (char)v284;
            *v166 = v283;
            *v167 = 0;
        } else {
            // 0x526774
            *v165 = v283;
            *v166 = 0;
        }
        // 0x526784
        *v89 = *v163;
        *v168 = *(int64_t *)(v17 + 112);
        *v170 = *v169;
        *v171 = *v15;
        v145 = *v164 | v259;
        int64_t v285 = v263 < 0xffffffff00000001 ? v263 : v263 + 0xffffffff; // 0x5267ae
        v186 = function_524720(*v160, v16, v285 | v207, v53, v145, *v172);
        v137 = v207 & 0xffffffff;
        v146 = *v89;
        if (v186 == 0) {
            goto lab_0x526e3f;
        } else {
            // 0x5267e3
            v187 = v137;
            if ((int32_t)v207 == -1) {
                uint64_t v286 = *(int64_t *)(v186 + 16); // 0x526a20
                if (v286 >= *(int64_t *)(v186 + 24)) {
                    int64_t v287 = *(int64_t *)v186; // 0x526df6
                    if ((int32_t)v287 == -1) {
                        goto lab_0x526e3f;
                    } else {
                        // 0x526e0e
                        v187 = v287 & 0xffffffff;
                        goto lab_0x5267ec;
                    }
                } else {
                    // 0x526a2e
                    v187 = (int64_t)*(char *)v286;
                    goto lab_0x5267ec;
                }
            } else {
                goto lab_0x5267ec;
            }
        }
    }
  lab_0x526680:;
    int64_t v288 = v225;
    int64_t v289 = v228;
    char v290 = v224;
    if (v290 != 69 == (v290 != 79)) {
        // 0x526bf0
        v223 = v290;
        v230 = 0x100000000000000 * v289 >> 56;
        v229 = 0;
        v226 = v288;
        v227 = 0;
    } else {
        int64_t v291 = v62 + 2; // 0x526690
        *v52 = v291;
        if (*v54 == v291) {
            goto lab_0x526da0_4;
        }
        unsigned char v292 = *(char *)v291; // 0x5266a5
        int64_t v293 = v292; // 0x5266a5
        int64_t v294 = 0x100000000000000 * v289 >> 56; // 0x5266ab
        char * v295 = (char *)(v152 + v293); // 0x5266af
        char v296 = *v295; // 0x5266af
        if (v296 == 0) {
            int64_t v297 = *(int64_t *)(*v92 + 64); // 0x526bb0
            int64_t v298 = v292; // 0x526bbb
            int64_t v299 = v289; // 0x526bbb
            int64_t v300 = v293; // 0x526bbb
            int64_t v301 = v288; // 0x526bbb
            if (v297 != g4) {
                // 0x526db0
                *v158 = (int32_t)v288;
                *v159 = v290;
                *v156 = (char)v218;
                v298 = 0x100000000000000 * v297 >> 56;
                v299 = (int64_t)*v159;
                v300 = v298 & 0xffffffff;
                v301 = (int64_t)*v158;
            }
            int64_t v302 = v301;
            int64_t v303 = v299;
            int64_t v304 = v298;
            char v305 = v300;
            v223 = 0;
            v230 = v304;
            v229 = v303;
            v226 = v302;
            v227 = v294;
            if (v305 != 0) {
                // 0x526bca
                *v295 = v305;
                v223 = v305;
                v230 = v304;
                v229 = v303;
                v226 = v302;
                v227 = v294;
            }
        } else {
            // 0x5266c3
            v223 = v296;
            v230 = v296;
            v229 = v289;
            v226 = v288;
            v227 = v294;
        }
    }
    goto lab_0x5266c9;
  lab_0x526d65:
    // 0x526d65
    *v41 = v99;
    v84 = 0;
    v85 = v98;
    v86 = v99;
    if (v97 != (char)*v92) {
        goto lab_0x526da0_4;
    }
    goto lab_0x52695c;
  lab_0x52695c:
    // 0x52695c
    v29 = v84;
    v30 = v85;
    v31 = v32;
    v33 = v86;
    v34 = v62 + 1;
    v36 = v53;
    goto lab_0x526570;
  lab_0x5268d2:;
    int64_t v87 = v88;
    *v89 = (int32_t)v90;
    char v91 = (char)*v92; // 0x5268e8
    char * v93; // 0x5260cf
    *v93 = v91;
    char v94 = (char)*v92;
    int32_t v83 = *v89; // 0x5268ff
    char v95; // 0x5260cf
    if (v91 == v94) {
        goto lab_0x526941;
    } else {
        // 0x526906
        v95 = v94;
        if ((int32_t)v87 == -1) {
            // 0x526b88
            v95 = v94;
            if (*(int64_t *)(v16 + 16) >= *(int64_t *)(v16 + 24)) {
                int64_t v96 = *(int64_t *)v16; // 0x526e15
                *v41 = v83;
                if ((int32_t)v96 != -1) {
                    // 0x526e15
                    v95 = (char)*v92;
                    goto lab_0x526912;
                } else {
                    // 0x526e15
                    v97 = (char)*v92;
                    v98 = v96 & 0xffffffff;
                    v99 = v83;
                    goto lab_0x526d65;
                }
            } else {
                goto lab_0x526912;
            }
        } else {
            goto lab_0x526912;
        }
    }
  lab_0x526510:;
    int64_t v100 = v79;
    int64_t v101 = v75;
    v18 = v73;
    int64_t v102 = v72;
    char v103 = 0; // 0x526516
    int64_t v104 = v77; // 0x526516
    int64_t v105 = v100; // 0x526516
    uint64_t v106; // 0x5265e0
    int64_t v107; // 0x526a68
    if ((int32_t)v77 == -1) {
        // 0x5265e0
        v106 = *(int64_t *)(v100 + 16);
        if (v106 >= *(int64_t *)(v100 + 24)) {
            // 0x526a68
            v107 = *(int64_t *)v100;
            *v93 = (char)v102;
            v103 = (int32_t)v107 == -1;
            v104 = v107 & 0xffffffff;
            v105 = (int32_t)v107 != -1 ? v100 : 0;
        } else {
            // 0x5265ee
            v103 = 0;
            v104 = (int64_t)*(char *)v106;
            v105 = v100;
        }
    }
    // 0x52651c
    v24 = v105;
    int64_t v108 = v104;
    v29 = v18;
    v30 = v101;
    v31 = v32;
    v33 = v108;
    v34 = v35;
    v36 = v24;
    while (v103 != (char)v102) {
        int64_t v109 = v101; // 0x526523
        int64_t v110 = v108; // 0x526523
        if (v18 != 0) {
            // 0x526529
            v20 = v101;
            v22 = v108;
            if ((int32_t)v101 != -1) {
                goto lab_0x526532_2;
            }
            uint64_t v111 = *(int64_t *)(v18 + 16); // 0x526600
            if (v111 < *(int64_t *)(v18 + 24)) {
                // 0x52660e
                v19 = v18;
                v21 = (int64_t)*(char *)v111;
                v23 = v108;
                v25 = v24;
                goto lab_0x526532_3;
            }
            int64_t v112 = *(int64_t *)v18; // 0x526b40
            *v41 = (int32_t)v108;
            int64_t v113 = v112 & 0xffffffff; // 0x526b4e
            int64_t v114 = v108 & 0xffffffff; // 0x526b50
            v20 = v113;
            v22 = v114;
            v109 = v113;
            v110 = v114;
            if ((int32_t)v112 != -1) {
                goto lab_0x526532_2;
            }
        }
        int64_t v115 = v110;
        int64_t v116 = v109;
        v29 = 0;
        v30 = v116;
        v31 = v32;
        v33 = v115;
        v34 = v35;
        v36 = v24;
        if ((*(char *)(*v39 + 511) & 32) == 0) {
            // break -> 0x526570
            break;
        }
        int64_t v117 = v116; // 0x526b79
        int64_t v118 = v115; // 0x526b79
        int64_t v119 = v24; // 0x526b79
        v29 = 0;
        v30 = v116;
        v31 = v32;
        v33 = v115;
        v34 = v35;
        v36 = v24;
        if (v24 == 0) {
            // break -> 0x526570
            break;
        }
        v100 = v119;
        v101 = v117;
        v18 = 0;
        v102 = 1;
        v103 = 0;
        v104 = v118;
        v105 = v100;
        if ((int32_t)v118 == -1) {
            // 0x5265e0
            v106 = *(int64_t *)(v100 + 16);
            if (v106 >= *(int64_t *)(v100 + 24)) {
                // 0x526a68
                v107 = *(int64_t *)v100;
                *v93 = (char)v102;
                v103 = (int32_t)v107 == -1;
                v104 = v107 & 0xffffffff;
                v105 = (int32_t)v107 != -1 ? v100 : 0;
            } else {
                // 0x5265ee
                v103 = 0;
                v104 = (int64_t)*(char *)v106;
                v105 = v100;
            }
        }
        // 0x52651c
        v24 = v105;
        v108 = v104;
        v29 = v18;
        v30 = v101;
        v31 = v32;
        v33 = v108;
        v34 = v35;
        v36 = v24;
    }
    goto lab_0x526570;
  lab_0x526570:
    // 0x526570
    result = v29;
    if (*v54 == v34) {
        goto lab_0x526586_2;
    }
    int64_t v55 = v29; // 0x526580
    int64_t v56 = v30; // 0x526580
    int64_t v57 = v31; // 0x526580
    int64_t v58 = v33; // 0x526580
    int64_t v59 = v34; // 0x526580
    int64_t v60 = v36; // 0x526580
    result = v29;
    if (*(int32_t *)*v15 != 0) {
        goto lab_0x526586_2;
    }
    goto lab_0x526450;
  lab_0x526509:
    // 0x526509
    v72 = 0;
    v73 = v74;
    v75 = v76;
    v77 = v78;
    v79 = v80;
    v19 = v74;
    v21 = v76;
    v23 = v78;
    v25 = 0;
    if (v80 == 0) {
        goto lab_0x526532_3;
    } else {
        goto lab_0x526510;
    }
  lab_0x526941:;
    int64_t * v81 = (int64_t *)(v16 + 16); // 0x526941
    uint64_t v82 = *v81; // 0x526941
    if (v82 >= *(int64_t *)(v16 + 24)) {
        // 0x526d00
        *v41 = v83;
        v84 = v16;
        v85 = 0xffffffff;
        v86 = v83;
    } else {
        // 0x52694f
        *v81 = v82 + 1;
        v84 = v16;
        v85 = 0xffffffff;
        v86 = v83;
    }
    goto lab_0x52695c;
  lab_0x5265c8:;
    int64_t v120 = v121;
    int64_t v122 = v123;
    int64_t v124 = v125;
    uint64_t v126 = *v127; // 0x5265c8
    if (v126 >= *v128) {
        int64_t v129 = *(int64_t *)v120; // 0x526a40
        *v41 = (int32_t)v122;
        int64_t v130 = v129 & 0xffffffff; // 0x526a4e
        int64_t v131 = v122 & 0xffffffff; // 0x526a50
        v80 = v124;
        v74 = v120;
        v76 = v130;
        v78 = v131;
        v132 = v130;
        v133 = v131;
        v134 = v124;
        if ((int32_t)v129 != -1) {
            goto lab_0x526509;
        } else {
            goto lab_0x52655f;
        }
    } else {
        // 0x5265d6
        v80 = v124;
        v74 = v120;
        v76 = (int64_t)*(char *)v126;
        v78 = v122;
        goto lab_0x526509;
    }
  lab_0x526532_3:;
    int64_t v26 = v25;
    int64_t v27 = v23;
    int64_t v28 = v19;
    v29 = v28;
    v30 = v21;
    v31 = v32;
    v33 = v27;
    v34 = v35;
    v36 = v26;
    int64_t * v37; // 0x5260cf
    int64_t * v38; // 0x5260cf
    if ((*(char *)((2 * v21 & 510 | 1) + *v39) & 32) == 0) {
        goto lab_0x526570;
    } else {
        // 0x526541
        v37 = (int64_t *)(v28 + 16);
        uint64_t v40 = *v37; // 0x526541
        v38 = (int64_t *)(v28 + 24);
        if (v40 >= *v38) {
            // 0x526968
            *v41 = (int32_t)v27;
            goto lab_0x526557;
        } else {
            // 0x52654f
            *v37 = v40 + 1;
            goto lab_0x526557;
        }
    }
  lab_0x526829:;
    // 0x526829
    int64_t * v42; // 0x5260cf
    *v42 = v43;
    int64_t v44 = *v45; // 0x526831
    int64_t * v46; // 0x5260cf
    *v46 = v44;
    uint64_t v47 = *v48; // 0x52684b
    *v48 = (v47 < 0xffffffff00000001 ? v47 : v47 + 0xffffffff) | v44 & 0xffffffff;
    v29 = v43;
    v30 = v49;
    v31 = v50;
    v33 = v51;
    v34 = *v52 + 1;
    v36 = v53;
    goto lab_0x526570;
  lab_0x526e3f:;
    int64_t v135 = 0; // 0x526e44
    int64_t v136 = v137; // 0x526e44
    char v138 = 1; // 0x526e44
    int64_t v139 = 0; // 0x526e44
    int64_t v140 = v137; // 0x526e44
    if (v53 == 0) {
        goto lab_0x526805;
    } else {
        goto lab_0x5267f4;
    }
  lab_0x526912:
    // 0x526912
    *v41 = v83;
    if (v95 != (char)*v92) {
        goto lab_0x526da0_4;
    }
    goto lab_0x526941;
  lab_0x526805:;
    int32_t * v141 = (int32_t *)*v15; // 0x52680a
    *v141 = *v141 | 2;
    int64_t v142 = v139; // 0x52680a
    int64_t v143 = v140; // 0x52680a
    goto lab_0x52680d;
  lab_0x5267f4:
    // 0x5267f4
    if (v146 == -1) {
        uint64_t v184 = *(int64_t *)(v53 + 24); // 0x5269f0
        uint64_t v185 = *(int64_t *)(v53 + 16); // 0x5269f4
        if (v185 >= v184) {
            // 0x5269fe
            *v89 = -1;
        }
    }
    // 0x526800
    v139 = v135;
    v140 = v136;
    v142 = v135;
    v143 = v136;
    if (v138 != 0) {
        goto lab_0x52680d;
    } else {
        goto lab_0x526805;
    }
  lab_0x5267ec:
    // 0x5267ec
    v135 = v186;
    v136 = v187;
    v138 = 0;
    v142 = v186;
    v143 = v187;
    if (v53 == 0) {
        goto lab_0x52680d;
    } else {
        goto lab_0x5267f4;
    }
  lab_0x52680d:;
    uint64_t v144 = *v45; // 0x526817
    *v45 = (v144 < 0xffffffff00000001 ? v144 : v144 + 0xffffffff) | v143 & 0xffffffff;
    v43 = v142;
    v49 = v143;
    v50 = v145;
    v51 = v146;
    goto lab_0x526829;
  lab_0x52620e:
    // 0x52620e
    if (*(int64_t *)((int64_t)&v1 + 56) == __readfsqword(40)) {
        // 0x526222
        return result2;
    }
    // 0x526389
    __stack_chk_fail();
    int64_t v147; // bp-336, 0x5260cf
    v17 = (int64_t)&v147;
    __readfsqword(40);
    int64_t v148 = function_554b00(a6 + 208, v5); // 0x526415
    *(int32_t *)(int64_t)a9 = 0;
    result = v5;
    int64_t v149; // 0x5260cf
    int64_t v150; // 0x5260cf
    if (v150 != v149) {
        int64_t v151 = v17 + 40;
        v41 = (int32_t *)v151;
        v152 = v148 + 313;
        v92 = (int64_t *)v148;
        v54 = (int64_t *)(v17 + 8);
        v52 = (int64_t *)v151;
        int64_t v153 = v17 + 72;
        v154 = (int32_t *)v153;
        int64_t v155 = v17 + 64;
        v156 = (char *)v155;
        int64_t v157 = v17 + 76;
        v158 = (int32_t *)v157;
        v159 = (char *)v153;
        v160 = (int64_t *)(v17 + 48);
        v48 = (int64_t *)(v17 + 24);
        v161 = (char *)v157;
        v162 = (int64_t *)(v17 + 56);
        v163 = (int32_t *)(v17 + 120);
        v164 = (int64_t *)(v17 + 80);
        v15 = (int64_t *)(v17 + 16);
        v165 = (char *)(v17 + 149);
        v166 = (char *)(v17 + 150);
        v167 = (char *)(v17 + 151);
        v89 = (int32_t *)v155;
        v168 = (int64_t *)(v17 - 16);
        v169 = (int64_t *)(v17 + 96);
        v170 = (int64_t *)(v17 - 24);
        v171 = (int64_t *)(v17 - 32);
        v172 = (int64_t *)(v17 + 88);
        v45 = (int64_t *)(v17 + 32);
        v173 = (int64_t *)(v17 - 8);
        v42 = (int64_t *)(v17 + 128);
        v46 = (int64_t *)(v17 + 136);
        v39 = (int64_t *)(v148 + 48);
        v93 = (char *)v151;
        v55 = v5;
        v56 = v4 & 0xffffffff;
        v57 = a5;
        v58 = a5 & 0xffffffff;
        v59 = v150;
        v60 = a4;
        while (true) {
          lab_0x526450:
            // 0x526450
            v61 = v60;
            v62 = v59;
            int64_t v63 = v58;
            v32 = v57;
            v64 = v56;
            v65 = v55;
            v66 = v63;
            if (v65 == 0) {
                goto lab_0x526de0;
            } else {
                // 0x526459
                v67 = v64;
                v68 = v63;
                if ((int32_t)v64 == -1) {
                    uint64_t v69 = *(int64_t *)(v65 + 16); // 0x5268a0
                    if (v69 >= *(int64_t *)(v65 + 24)) {
                        int64_t v70 = *(int64_t *)v65; // 0x526c70
                        *v41 = (int32_t)v63;
                        int64_t v71 = v63 & 0xffffffff; // 0x526c81
                        v66 = v71;
                        if ((int32_t)v70 == -1) {
                            goto lab_0x526de0;
                        } else {
                            // 0x526c8c
                            v67 = v70 & 0xffffffff;
                            v68 = v71;
                            goto lab_0x526462;
                        }
                    } else {
                        // 0x5268ae
                        v67 = (int64_t)*(char *)v69;
                        v68 = v63;
                        goto lab_0x526462;
                    }
                } else {
                    goto lab_0x526462;
                }
            }
        }
      lab_0x52688d_3:
        // 0x52688d
        *(int32_t *)*v15 = 6;
        result = v174;
    }
    goto lab_0x526586_2;
  lab_0x526368:;
    int64_t v175 = 0; // 0x52636e
    int64_t v176 = v8; // 0x52636e
    int64_t v177; // 0x5260cf
    int64_t v178; // 0x5260cf
    int64_t v179; // 0x5260cf
    int64_t v180; // 0x5260cf
    char v181; // 0x5260cf
    if (a4 == 0) {
        goto lab_0x526205;
    } else {
        // 0x526374
        v177 = 0;
        v179 = v8;
        v178 = 0;
        v180 = v8;
        v181 = 1;
        if ((int32_t)a5 != -1) {
            goto lab_0x526208;
        } else {
            goto lab_0x526253;
        }
    }
  lab_0x526205:
    // 0x526205
    *v10 = *v10 | 2;
    v177 = v175;
    v179 = v176;
    goto lab_0x526208;
  lab_0x5261fa:
    // 0x5261fa
    v177 = v9;
    v179 = v3;
    if (a4 == 0) {
        goto lab_0x526208;
    } else {
        // 0x5261ff
        v175 = v9;
        v176 = v3;
        v178 = v9;
        v180 = v3;
        v181 = 0;
        if ((int32_t)a5 == -1) {
            goto lab_0x526253;
        } else {
            goto lab_0x526205;
        }
    }
  lab_0x526208:
    // 0x526208
    v149 = v6;
    v150 = v7;
    result2 = v177;
    v4 = v179 & 0xffffffff;
    v5 = v1;
    goto lab_0x52620e;
  lab_0x526253:;
    uint64_t v182 = *(int64_t *)(a4 + 24); // 0x526255
    uint64_t v183 = *(int64_t *)(a4 + 16); // 0x526259
    v175 = v178;
    v176 = v180;
    v177 = v178;
    v179 = v180;
    if (v181 != (char)((int32_t)a4 == -1 == v183 >= v182)) {
        goto lab_0x526208;
    } else {
        goto lab_0x526205;
    }
  lab_0x526557:
    // 0x526557
    v132 = 0xffffffff;
    v133 = v27;
    v134 = v26;
    v128 = v38;
    v127 = v37;
    v125 = v26;
    v123 = v27;
    v121 = v28;
    if (v28 != 0) {
        goto lab_0x5265c8;
    } else {
        goto lab_0x52655f;
    }
}
