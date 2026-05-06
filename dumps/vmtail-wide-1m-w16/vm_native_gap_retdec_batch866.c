/*
 * Targeted RetDec C for native executable gap queue batch 866.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x39ef14-0x39f114 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39f114-0x39f314 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39f314-0x39f514 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39f714-0x39f914 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d54a7-0x3d56a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d56a7-0x3d58a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d58a7-0x3d5aa7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d5ca7-0x3d5ea7 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_32eca06b();
int64_t function_39ef14(int64_t a1);
int64_t function_39ef26(void);
int64_t function_39ef49(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_39ef95(int64_t a1);
int64_t function_39efb7(int64_t a1);
int64_t function_39efc6(void);
int64_t function_39f069(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39f07c(void);
int64_t function_39f084(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39f0cf(void);
int64_t function_39f0f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result, int64_t a6);
int64_t function_39f163(void);
int64_t function_39f170(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_39f1e2(void);
int64_t function_39f1fa(int64_t a1);
int64_t function_39f25c(void);
int64_t function_39f2ec(void);
int64_t function_39f39a(void);
int64_t function_39f3c1(void);
int64_t function_39f3d9(int64_t a1, int64_t a2);
int64_t function_39f471(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39f484(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39f4a8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39f4d9(void);
int64_t function_39f714(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_39f790(int64_t a1);
int64_t function_39f793(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39f7b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39f7ec(int64_t a1, int64_t a2);
int64_t function_39f8b5(void);
int64_t function_39f8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d54a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d54e7(void);
int64_t function_3d54fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d5576(void);
int64_t function_3d55ad(void);
int64_t function_3d55ce(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d55e9(int64_t a1, int64_t a2);
int64_t function_3d565a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3d57e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d594b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d5a9b(int64_t a1);
int64_t function_3d5ca7(void);
int64_t function_3d5ca8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d5d9b(void);
int64_t function_3d5da0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3d5dac(void);
int64_t function_3d5dad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d5db2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d5dba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6fcc854d();
int64_t function_7e746cf7();
int64_t function_b41bb3b();
int64_t function_c4258();
int64_t function_ffffffffaf2f415a();
int64_t unknown_1110ba93();
int64_t unknown_1e2644ef();
int64_t unknown_2ae2105f();
int64_t unknown_3d3bd88b();
int64_t unknown_4124aee3();
int64_t unknown_4977ce77();
int64_t unknown_5014e48c();
int64_t unknown_65de57ce();
int64_t unknown_6cfe7cbe();
int64_t unknown_ffffffff81bd63b3();
int64_t unknown_ffffffff8342d0e6();
int64_t unknown_ffffffff8c3e91be();
int64_t unknown_ffffffffa87d5104();
int64_t unknown_ffffffffadc3baa4();
int64_t unknown_ffffffffc84258a6();
int64_t unknown_ffffffffdac9afd8();
int64_t unknown_fffffffffe3da309();

// Address range: 0x39ef14 - 0x39ef15
int64_t function_39ef14(int64_t a1) {
    // 0x39ef14
    int64_t result; // 0x39ef14
    return result;
}

// Address range: 0x39ef26 - 0x39ef27
int64_t function_39ef26(void) {
    // 0x39ef26
    int64_t result; // 0x39ef26
    return result;
}

// Address range: 0x39ef49 - 0x39ef87
int64_t function_39ef49(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x39ef49
    int32_t v1; // 0x39ef49
    *(int32_t *)a2 = (int32_t)(int64_t)&v1;
    uint32_t v2 = (int32_t)a1; // 0x39ef4d
    int64_t v3; // 0x39ef49
    uint32_t v4 = (int32_t)v3 + v2; // 0x39ef4d
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x39ef4d
    int64_t v6; // 0x39ef49
    *(char *)(int64_t)v4 = *(char *)&v6;
    bool v7; // 0x39ef49
    int64_t v8 = (v7 ? -1 : 1) + a2; // 0x39ef4f
    v6 = v8;
    if (v5 % 2 == 0) {
        function_39ef26();
    }
    int64_t v9 = unknown_2ae2105f(); // 0x39ef58
    int16_t v10 = a3; // 0x39ef5e
    __asm_outsb(v10, *(char *)v8);
    char v11 = *(char *)v9; // 0x39ef5f
    int64_t v12; // 0x39ef49
    unsigned char v13 = *(char *)&v12; // 0x39ef61
    unsigned char v14 = v13 + (char)a3; // 0x39ef61
    *(char *)v12 = v14;
    int64_t v15 = v9 + 0x9a2801e8 + (int64_t)(v14 < v13); // 0x39ef63
    int32_t * v16 = (int32_t *)(v12 - 0x420bf304); // 0x39ef79
    *v16 = *v16 + (int32_t)v12;
    __asm_outsb(v10, *(char *)v6);
    return v15 & 0xffffff00 | (int64_t)(((char)(a4 / 0x4000000 % 64 | 128 * a4 | 64 * (int64_t)(v4 < v2)) - v11 | (char)v15) ^ (char)v12);
}

// Address range: 0x39ef95 - 0x39ef96
int64_t function_39ef95(int64_t a1) {
    // 0x39ef95
    int64_t result; // 0x39ef95
    return result;
}

// Address range: 0x39efb7 - 0x39efba
int64_t function_39efb7(int64_t a1) {
    // 0x39efb7
    int64_t result; // 0x39efb7
    return result;
}

// Address range: 0x39efc6 - 0x39efcb
int64_t function_39efc6(void) {
    // 0x39efc6
    return function_6fcc854d();
}

// Address range: 0x39f069 - 0x39f07b
int64_t function_39f069(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39f069
    int64_t v1; // 0x39f069
    bool v2; // 0x39f069
    return v1 + 0x8837f947 + (int64_t)v2 & 0xa15c0dda;
}

// Address range: 0x39f07c - 0x39f07f
int64_t function_39f07c(void) {
    // 0x39f07c
    int64_t result; // 0x39f07c
    return result;
}

// Address range: 0x39f084 - 0x39f0b0
int64_t function_39f084(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39f084
    unknown_3d3bd88b();
    int64_t v1; // 0x39f084
    int32_t * v2 = (int32_t *)(v1 + 42); // 0x39f08a
    *v2 = *v2 + (int32_t)a2;
    *(char *)a1 = __asm_insb((int16_t)unknown_1110ba93());
    int64_t v3 = __asm_wait(); // 0x39f09b
    int64_t v4 = (a4 & (int64_t)&g1) == 0 ? 1 : 255; // 0x39f09c
    int64_t v5; // 0x39f084
    char * v6 = (char *)(v3 & 0xffffff00 | (int64_t)*(char *)&v5); // 0x39f09e
    *v6 = *v6 & (char)(v4 + a2);
    unknown_ffffffffc84258a6();
    *(char *)-0x43742854 = *(char *)-0x43742854 + (char)(v1 / 256);
    return function_7e746cf7();
}

// Address range: 0x39f0cf - 0x39f0d0
int64_t function_39f0cf(void) {
    // 0x39f0cf
    int64_t result; // 0x39f0cf
    return result;
}

// Address range: 0x39f0f7 - 0x39f160
int64_t function_39f0f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = result;
    int32_t * v3 = (int32_t *)(a1 + 56); // 0x39f101
    uint32_t v4 = *v3; // 0x39f101
    int64_t v5; // 0x39f0f7
    uint32_t v6 = v4 + (int32_t)v5; // 0x39f101
    *v3 = v6;
    v2 = -0x1f683f00;
    bool v7 = v6 < v4 | v6 == 0; // 0x39f10e
    if (v6 >= v4) {
        // 0x39f138
        *(char *)a1 = (char)result;
        if (v7) {
            function_39f0cf();
        }
        int64_t v8 = __asm_sti(); // 0x39f140
        char * v9 = (char *)(v8 - 108); // 0x39f141
        *v9 = *v9 & 69;
        return (int64_t)(*(int32_t *)v8 + (int32_t)v8 ^ 66);
    }
    uint32_t v10 = v7 ? (int32_t)a4 : *(int32_t *)(a2 + 0x397e8f6b); // 0x39f10e
    char v11 = *(char *)(2 * a3 - 0x9ffde38 + (int64_t)&v2); // 0x39f117
    if (llvm_ctpop_i8((char)(v10 / 256) - v11) % 2 == 0) {
        // 0x39f15d
        return (int64_t)*(int32_t *)&v1;
    }
    int32_t * v12 = (int32_t *)(a1 - 101); // 0x39f120
    *v12 = *v12 + (int32_t)a1;
    unsigned char v13 = (char)v10 % 32; // 0x39f12d
    if (v13 != 0) {
        char * v14 = (char *)(4 * result + 0x5bbe7a02 + v1); // 0x39f12d
        *v14 = *v14 << v13;
    }
    return result;
}

// Address range: 0x39f163 - 0x39f164
int64_t function_39f163(void) {
    // 0x39f163
    int64_t result; // 0x39f163
    return result;
}

// Address range: 0x39f170 - 0x39f1c2
int64_t function_39f170(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x39f170
    int32_t * v3 = (int32_t *)(v2 + 100); // 0x39f178
    *v3 = *v3 | 12;
    __asm_in((int16_t)a3);
    int64_t v4 = unknown_ffffffff81bd63b3(); // 0x39f1b2
    if (*(int32_t *)&v1 != (int32_t)v2) {
        v4 = function_39f163();
    }
    // 0x39f1b4
    *(int64_t *)(v2 + 0x1e80700 & 0xffffffff) = v4;
    unsigned char v5 = *(char *)(a3 - 128); // 0x39f1b5
    int64_t v6 = unknown_6cfe7cbe(); // 0x39f1b8
    return (v6 + 13 + (int64_t)(v5 > (char)(a4 / 256))) % 256 | v6 & -256;
}

// Address range: 0x39f1e2 - 0x39f1e3
int64_t function_39f1e2(void) {
    // 0x39f1e2
    int64_t result; // 0x39f1e2
    return result;
}

// Address range: 0x39f1fa - 0x39f1fb
int64_t function_39f1fa(int64_t a1) {
    // 0x39f1fa
    int64_t result; // 0x39f1fa
    return result;
}

// Address range: 0x39f25c - 0x39f261
int64_t function_39f25c(void) {
    // 0x39f25c
    return function_ffffffffaf2f415a();
}

// Address range: 0x39f2ec - 0x39f2f1
int64_t function_39f2ec(void) {
    // 0x39f2ec
    return function_32eca06b();
}

// Address range: 0x39f39a - 0x39f39d
int64_t function_39f39a(void) {
    // 0x39f39a
    int64_t result; // 0x39f39a
    return result;
}

// Address range: 0x39f3c1 - 0x39f3c6
int64_t function_39f3c1(void) {
    // 0x39f3c1
    return function_b41bb3b();
}

// Address range: 0x39f3d9 - 0x39f3dc
int64_t function_39f3d9(int64_t a1, int64_t a2) {
    // 0x39f3d9
    int64_t result; // 0x39f3d9
    *(int32_t *)result = (int32_t)a1;
    return result;
}

// Address range: 0x39f471 - 0x39f483
int64_t function_39f471(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39f471
    int64_t result; // 0x39f471
    uint64_t v1 = result;
    int64_t v2 = a3;
    int64_t v3 = a1;
    unsigned char v4 = (char)a3;
    *(char *)a3 = v4 / 2 | 128 * v4;
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    *(char *)v2 = *(char *)&v2 + (char)(v1 / 256);
    return result;
}

// Address range: 0x39f484 - 0x39f49f
int64_t function_39f484(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39f484
    int64_t v1; // 0x39f484
    __asm_out_133(-50, (char)v1);
    int64_t v2 = unknown_5014e48c(); // 0x39f486
    int64_t result = v2; // 0x39f48b
    int32_t * v3 = (int32_t *)(v1 + 15); // 0x39f48f
    *v3 = *v3 + (int32_t)v1;
    result = v2 + 256 * v1 & 0xff00 | v2 & -0xff01;
    // 0x39f498
    return result;
}

// Address range: 0x39f4a8 - 0x39f4bf
int64_t function_39f4a8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39f4a8
    *(int32_t *)(a2 - 0xa66fe18) = (int32_t)a2;
    return a3 + 0xde5dbf68 & 0xffffffff;
}

// Address range: 0x39f4d9 - 0x39f4e7
int64_t function_39f4d9(void) {
    // 0x39f4d9
    int64_t v1; // 0x39f4d9
    __asm_out_133(-68, (char)v1 ^ 79);
    return unknown_ffffffff8342d0e6();
}

// Address range: 0x39f714 - 0x39f77f
int64_t function_39f714(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x39f714
    int64_t v1; // 0x39f714
    unsigned char v2 = *(char *)(a1 - 24 + 2 * a2) | (char)(v1 / 256); // 0x39f714
    int64_t result = 256 * (int64_t)v2 | v1 & -0xff01; // 0x39f714
    __asm_out(90, (int32_t)result);
    char * v3 = (char *)(a2 - 0x6d5fe2a3); // 0x39f71f
    *v3 = *v3 + v2;
    int64_t v4; // 0x39f714
    uint32_t v5 = *(int32_t *)&v4; // 0x39f727
    int32_t v6 = v1; // 0x39f727
    uint32_t v7 = v5 + v6; // 0x39f727
    *(int32_t *)a1 = v7;
    if (v7 == 0) {
        // 0x39f77d
        return result;
    }
    int64_t v8 = result - (v7 < v5 ? 0x54316150 : 0x5431614f); // 0x39f72b
    int64_t result2 = v8 & 0xffffffff; // 0x39f72b
    int32_t * v9 = (int32_t *)(result2 + 0x2198190a); // 0x39f736
    *v9 = *v9 + v6;
    char * v10 = (char *)result2; // 0x39f73c
    *v10 = *v10 - (char)v8;
    int32_t * v11 = (int32_t *)(a3 + 40); // 0x39f73e
    *v11 = *v11 + 1;
    char * v12 = (char *)((2 * v1 & 0xfffffffe) + 0x4d9401e8); // 0x39f741
    *v12 = *v12 + (char)(a3 / 256);
    return result2;
}

// Address range: 0x39f790 - 0x39f793
int64_t function_39f790(int64_t a1) {
    // 0x39f790
    int64_t result; // 0x39f790
    return result;
}

// Address range: 0x39f793 - 0x39f7b6
int64_t function_39f793(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39f793
    __asm_sti();
    return unknown_ffffffffadc3baa4();
}

// Address range: 0x39f7b6 - 0x39f7e4
int64_t function_39f7b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39f7b6
    float80_t v1; // 0x39f7b6
    *(int16_t *)(a4 + 0x1e8db4e) = (int16_t)v1;
    int64_t v2; // 0x39f7b6
    int32_t v3 = (int32_t)v2 >> 31; // 0x39f7bc
    char * v4 = (char *)(a4 - 0x1762a300); // 0x39f7c6
    *v4 = -1 - *v4;
    int64_t v5 = unknown_fffffffffe3da309(); // 0x39f7d1
    uint32_t v6 = *(int32_t *)v5; // 0x39f7e0
    return (0x100000000 * (int64_t)(v3 - 256 * (int32_t)a4 & 0xff00 | v3 & -0xff01) | v5 & 0xffffffff) / (int64_t)v6 & 0xffffffff;
}

// Address range: 0x39f7ec - 0x39f7f4
int64_t function_39f7ec(int64_t a1, int64_t a2) {
    // 0x39f7ec
    int64_t v1; // 0x39f7ec
    uint64_t v2 = v1;
    *(char *)(v1 + 24 + 2 * v2) = (char)(v2 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x39f8b5 - 0x39f8b6
int64_t function_39f8b5(void) {
    // 0x39f8b5
    int64_t result; // 0x39f8b5
    return result;
}

// Address range: 0x39f8e9 - 0x39f906
int64_t function_39f8e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_1e2644ef(); // 0x39f8e9
    int64_t v2; // 0x39f8e9
    char * v3 = (char *)(v2 - 34); // 0x39f8ee
    *v3 = 2 * *v3;
    int64_t v4; // 0x39f8e9
    __asm_outsb((int16_t)a3, *(char *)&v4);
    int32_t * v5 = (int32_t *)(a2 + 0x300e17dc); // 0x39f8fd
    *v5 = *v5 + (int32_t)v2;
    return (v1 + 12 + ((char)v1 < 244 ? 68 : 69)) % 256 | v1 & -256;
}

// Address range: 0x3d54a7 - 0x3d54e2
int64_t function_3d54a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d54a7
    int64_t v1; // 0x3d54a7
    __asm_outsb((int16_t)a3, (char)v1);
    unknown_ffffffff8c3e91be();
    unsigned char v2 = (char)a4 % 32; // 0x3d54bd
    if (v2 != 0) {
        *(char *)a3 = (char)a3 >> v2;
    }
    *(int224_t *)(v1 + 0x7a01e8c6) = (int224_t)__asm_fnstenv();
    __readgsbyte(v1 + 67);
    unknown_ffffffffdac9afd8();
    return unknown_4124aee3();
}

// Address range: 0x3d54e7 - 0x3d54e9
int64_t function_3d54e7(void) {
    // 0x3d54e7
    int64_t result; // 0x3d54e7
    return result;
}

// Address range: 0x3d54fe - 0x3d5519
int64_t function_3d54fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d54fe
    unknown_ffffffffa87d5104();
    int64_t v1; // 0x3d54fe
    bool v2; // 0x3d54fe
    uint64_t v3 = v1 - (v2 ? 0x1e810d3 : 0x1e810d2) & 0xffffff00; // 0x3d5509
    int64_t result = v3 | (int64_t)*(char *)-0x17ffc7d20dd3f2b2; // 0x3d5509
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a3;
    *(char *)(2 * result + a4) = (char)(v3 / 256);
    return result;
}

// Address range: 0x3d5576 - 0x3d5578
int64_t function_3d5576(void) {
    // 0x3d5576
    int64_t v1; // 0x3d5576
    return function_3d55ce(v1, v1, v1);
}

// Address range: 0x3d55ad - 0x3d55b0
int64_t function_3d55ad(void) {
    // 0x3d55ad
    int64_t result; // 0x3d55ad
    return result;
}

// Address range: 0x3d55ce - 0x3d55e7
int64_t function_3d55ce(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 88); // 0x3d55ce
    int64_t v2; // 0x3d55ce
    *v1 = *v1 | (int32_t)v2;
    int64_t v3 = (int64_t)(0x30039001 * *(int32_t *)(v2 - 0x17beb700)); // 0x3d55d2
    int16_t v4 = a3; // 0x3d55dc
    __asm_outsd(v4, *(int32_t *)v3);
    __asm_outsb(v4, *(char *)v3);
    return unknown_65de57ce() & -256 | (int64_t)__asm_in(v4);
}

// Address range: 0x3d55e9 - 0x3d55f2
int64_t function_3d55e9(int64_t a1, int64_t a2) {
    // 0x3d55e9
    int64_t v1; // 0x3d55e9
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    return v1 & 0xe8ae8baf;
}

// Address range: 0x3d565a - 0x3d57e6
int64_t function_3d565a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x3d565a
    int64_t v1; // 0x3d565a
    int32_t * v2 = (int32_t *)(v1 - 0x542abbf9); // 0x3d565a
    *v2 = *v2 + (int32_t)a4;
    char * v3 = (char *)(a2 - 0x15fe1751); // 0x3d5660
    *v3 = *v3 + (char)(a4 / 256);
    int64_t v4; // 0x3d565a
    int64_t v5 = 2 * a1 & 0xfffffffe | (int64_t)(*(int32_t *)&v4 < (int32_t)a1); // 0x3d566f
    int64_t v6 = unknown_4977ce77(v5); // 0x3d5671
    char * v7 = (char *)(v6 - 0x3c6af100); // 0x3d5676
    unsigned char v8 = *v7; // 0x3d5676
    unsigned char v9 = (char)v6; // 0x3d5676
    char v10 = v8 + v9; // 0x3d5676
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x3d5676
    *v7 = v10;
    bool v12; // 0x3d565a
    *(int64_t *)0x359e99d7 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v10 < v8) | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v8 % 16 + v9 % 16 > 15) | 4 * (int64_t)(v11 % 2 == 0) | 2048 * (int64_t)(((v10 ^ v8) & (v10 ^ v9)) < 0) | 2;
    *(int64_t *)0x359e99cf = 169;
    *(int64_t *)0x359e99bf = v1 - 0x5e7fe6de;
    *(int64_t *)0x359e99b7 = a2;
    *(int64_t *)0x359e99af = a5;
    *(int64_t *)0x359e99bf = 0x3d33fb;
    *(int64_t *)0x359e99b7 = 0x41b9596d;
    *(int64_t *)0x359e99af = 0x2a27280;
    *(int64_t *)0x359e99a7 = a5;
    *(int64_t *)0x359e999f = 0x359e99a7;
    *(int64_t *)0x359e99a7 = 0x359e99a7;
    int64_t v13 = *(int64_t *)0x359e99d7; // 0x3d573d
    *(int64_t *)0x359e99af = v13;
    *(int64_t *)0x359e99a7 = v13;
    *(int64_t *)0x359e999f = v13;
    *(int64_t *)0x359e99bf = v13;
    *(int64_t *)0x359e99af = a3;
    *(int64_t *)0x359e99a7 = *(int64_t *)0x359e99b7;
    *(int64_t *)0x359e999f = a4;
    int64_t v14 = *(int64_t *)0x359e99a7; // 0x3d57a8
    *(int64_t *)0x359e99d7 = *(int64_t *)0x359e99c7;
    int64_t v15 = *(int64_t *)0x359e99af; // 0x3d57ae
    int64_t v16 = *(int64_t *)0x359e99b7; // 0x3d57af
    *(int64_t *)0x359e99af = v16;
    *(int64_t *)0x359e99a7 = v16;
    int64_t v17 = *(int64_t *)0x359e99bf; // 0x3d57cb
    *(int64_t *)0x359e99b7 = v17;
    *(int64_t *)0x359e99af = v17;
    return function_c4258(v5, v14, v15, a4, *(int64_t *)0x359e99a7, a6);
}

// Address range: 0x3d57e6 - 0x3d594b
int64_t function_3d57e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d57e6
    int64_t v1; // bp-32, 0x3d57e6
    int64_t v2 = (int64_t)&v1; // 0x3d58f5
    *(int64_t *)(v2 - 8) = v2;
    v1 = v2 + 16;
    int64_t v3; // 0x3d57e6
    return function_c4258(a1, a2, a3, a4, v3, v3);
}

// Address range: 0x3d594b - 0x3d5a8a
int64_t function_3d594b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d594b
    int64_t v1; // 0x3d594b
    bool v2; // 0x3d594b
    return function_c4258(a1, a2, a3, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2, v1, v1);
}

// Address range: 0x3d5a9b - 0x3d5a9c
int64_t function_3d5a9b(int64_t a1) {
    // 0x3d5a9b
    int64_t result; // 0x3d5a9b
    return result;
}

// Address range: 0x3d5ca7 - 0x3d5ca8
int64_t function_3d5ca7(void) {
    // 0x3d5ca7
    int64_t result; // 0x3d5ca7
    return result;
}

// Address range: 0x3d5ca8 - 0x3d5d45
int64_t function_3d5ca8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d5ca8
    int64_t v1; // 0x3d5ca8
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x3d5ca8
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_c4258(a1, a3, v1, v1, v1, v1);
}

// Address range: 0x3d5d9b - 0x3d5d9e
int64_t function_3d5d9b(void) {
    // 0x3d5d9b
    int64_t v1; // 0x3d5d9b
    int64_t v2 = v1;
    return (v2 + 36) % 256 | v2 & -256;
}

// Address range: 0x3d5da0 - 0x3d5da6
int64_t function_3d5da0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3d5da0
    int64_t result; // 0x3d5da0
    char * v1 = (char *)(result + 53); // 0x3d5da0
    *v1 = *v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0x3d5dac - 0x3d5dad
int64_t function_3d5dac(void) {
    // 0x3d5dac
    int64_t result; // 0x3d5dac
    return result;
}

// Address range: 0x3d5dad - 0x3d5db2
int64_t function_3d5dad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d5dad
    int64_t v1; // 0x3d5dad
    char * v2 = (char *)(v1 - 127); // 0x3d5dad
    *v2 = *v2 | (char)a4;
    return function_3d5dba(a1, a2, a3, a4, (int64_t)&g2);
}

// Address range: 0x3d5db2 - 0x3d5dba
int64_t function_3d5db2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d5db2
    int64_t v1; // 0x3d5db2
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 121); // 0x3d5db4
    unsigned char v4 = *v3; // 0x3d5db4
    unsigned char v5 = v4 + (char)a4; // 0x3d5db4
    *v3 = v5;
    return (v2 - (v5 < v4 ? 37 : 36)) % 256 | v2 & -256;
}

// Address range: 0x3d5dba - 0x3d5ea6
int64_t function_3d5dba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d5dba
    int64_t v1; // bp-16, 0x3d5dba
    int64_t v2 = (int64_t)&v1; // 0x3d5e45
    int64_t v3 = v2 + 8; // 0x3d5e60
    int64_t * v4 = (int64_t *)v3; // 0x3d5e64
    v1 = *v4;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x3d5e67
    *v5 = v3;
    int64_t result = *v4; // 0x3d5e84
    *v5 = result;
    return result;
}
