/*
 * Targeted RetDec C for native executable gap queue batch 1049.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x22f066-0x22f266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22f266-0x22f466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22f466-0x22f666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22f666-0x22f866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22f866-0x22fa66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22fa66-0x22fc66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22fc66-0x22fe66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22fe66-0x230066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a6339-0x3a6539 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a6539-0x3a6739 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a6739-0x3a6939 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a6939-0x3a6b39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a6b39-0x3a6d39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a6d39-0x3a6f39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a6f39-0x3a7139 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a7139-0x3a7339 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g7;
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

int64_t function_10d8e6c();
int64_t function_13244176();
int64_t function_160cf97();
int64_t function_22f066(void);
int64_t function_22f067(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_22f0dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22f235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22f3bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22f532(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_22f67e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22f7d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_22f916(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22fa49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22fbab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22fceb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22fe24(void);
int64_t function_22fe2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22fe55(void);
int64_t function_22fe5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22ff0a(int64_t a1);
int64_t function_22ff31(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22ff75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22ffa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22ffc3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22fff8(void);
int64_t function_3a6307();
int64_t function_3a6339(void);
int64_t function_3a635f(void);
int64_t function_3a636e(void);
int64_t function_3a6376(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a638c(void);
int64_t function_3a640c(void);
int64_t function_3a642a(int64_t a1);
int64_t function_3a6464(void);
int64_t function_3a64f6(int64_t a1);
int64_t function_3a6514(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a6538(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a65ee(void);
int64_t function_3a65f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a65f3(void);
int64_t function_3a663b(int64_t a1);
int64_t function_3a664a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a67d6(int64_t a1);
int64_t function_3a6801(void);
int64_t function_3a681d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a6899(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a68d5(int64_t a1, int64_t a2);
int64_t function_3a68f8(int64_t a1);
int64_t function_3a6908(void);
int64_t function_3a691e(void);
int64_t function_3a6945(void);
int64_t function_3a6959(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a6a1a(void);
int64_t function_3a6a24(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3a6a58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a6a64(void);
int64_t function_3a6a99(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a6abc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3a6b3e(void);
int64_t function_3a6b56(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a6b80(void);
int64_t function_3a6b9c(void);
int64_t function_3a6bae(int64_t a1);
int64_t function_3a6bc5(void);
int64_t function_3a6bd6(void);
int64_t function_3a6c27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a6ce2(void);
int64_t function_3a6d1d(int64_t a1);
int64_t function_3a6d20(int64_t a1);
int64_t function_3a6d28(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a6d38(int64_t a1, int64_t a2);
int64_t function_3a6db9(int64_t a1);
int64_t function_3a6e17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a6e4e(void);
int64_t function_3a6e78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a6eab(void);
int64_t function_3a6ec1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a6f05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a6f2e(int64_t a1);
int64_t function_3a6f51(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a6f6f(void);
int64_t function_3a6f78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a6fa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a6fc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a7027(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a709c(int64_t a1);
int64_t function_3a70a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a7262(void);
int64_t function_3a728f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a7294(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_46d9f991();
int64_t function_7ab10353();
int64_t function_c9849();
int64_t function_cdc60();
int64_t function_ffffffff80d86c7d();
int64_t function_ffffffffd10f74c6();
int64_t function_fffffffff33b28a7();
int64_t unknown_2fcd335e();
int64_t unknown_30596e5f();
int64_t unknown_307f830d();
int64_t unknown_33b1fe50();
int64_t unknown_3abb7fac();
int64_t unknown_46240035();
int64_t unknown_47393487();
int64_t unknown_4e4700a2();
int64_t unknown_5cbf09dc();
int64_t unknown_7971d9bf();
int64_t unknown_918584();
int64_t unknown_ffffffff90a32aab();
int64_t unknown_ffffffff92477fbc();
int64_t unknown_ffffffff9ba4e4f8();
int64_t unknown_ffffffffabe3ddaa();
int64_t unknown_ffffffffb139f12f();
int64_t unknown_ffffffffb249acc9();
int64_t unknown_ffffffffb50c6890();
int64_t unknown_ffffffffbc906385();
int64_t unknown_ffffffffc62ce00b();
int64_t unknown_ffffffffc8a3fae9();
int64_t unknown_ffffffffc9e0e9a6();
int64_t unknown_ffffffffd42ccc7a();
int64_t unknown_ffffffffd4d8a7ad();
int64_t unknown_ffffffffe0344f5f();
int64_t unknown_ffffffffe03488b0();
int64_t unknown_ffffffffe8ce14a1();
int64_t unknown_ffffffffedaa3070();
int64_t unknown_fffffffff3733747();
int64_t unknown_fffffffffc5c0382();

// Address range: 0x22f066 - 0x22f067
int64_t function_22f066(void) {
    // 0x22f066
    int64_t result; // 0x22f066
    return result;
}

// Address range: 0x22f067 - 0x22f0dd
int64_t function_22f067(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a4 - 127); // 0x22f067
    *v1 = *v1 | (char)a4;
    char v2 = __asm_in((int16_t)a3); // 0x22f06a
    int64_t v3; // 0x22f067
    int64_t v4 = v3 & -256 | (int64_t)v2; // 0x22f06a
    char * v5 = (char *)v4; // 0x22f06b
    *v5 = (*v5 | v2) + v2;
    return function_cdc60(a1, a2, a3, a4, a5, a6, v4);
}

// Address range: 0x22f0dd - 0x22f235
int64_t function_22f0dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22f0dd
    int64_t v1; // bp-32, 0x22f0dd
    int64_t v2 = (int64_t)&v1; // 0x22f140
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x22f15a
    int64_t v4 = v2 - 16; // 0x22f163
    int64_t * v5 = (int64_t *)v4; // 0x22f163
    *v5 = a6;
    int64_t v6 = *(int64_t *)(v2 + 32); // 0x22f185
    *v3 = v6;
    *v5 = 0x2df5d601;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x22f18e
    *v5 = v2;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x22f1a8
    *v5 = *v8;
    *v7 = a1;
    *(int64_t *)(v2 - 32) = v6;
    *v8 = v6;
    *v5 = 0xa59b915;
    *v7 = *v5;
    *(int64_t *)(v2 + 16) = *v5;
    *v5 = a3;
    *v7 = v4;
    *v5 = v2;
    int64_t v9 = *v3; // 0x22f214
    *v5 = v9;
    *v7 = v9;
    return function_cdc60(*v7, a2, *v5, *v5, a5, a6, 0x22ad96);
}

// Address range: 0x22f235 - 0x22f3bb
int64_t function_22f235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22f235
    int64_t v1; // 0x22f235
    return function_cdc60(a1, a2, a3, a4, a5, v1, v1);
}

// Address range: 0x22f3bb - 0x22f532
int64_t function_22f3bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22f3bb
    int64_t v1; // bp-40, 0x22f3bb
    int64_t v2 = (int64_t)&v1; // 0x22f42b
    v1 = 0x22b409;
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x22f44e
    int64_t v4 = v2 - 8; // 0x22f44e
    int64_t * v5 = (int64_t *)v4; // 0x22f44e
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x22f452
    *v6 = v2;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x22f46d
    int64_t v8 = *v7; // 0x22f46d
    *v5 = v8;
    *v6 = v8;
    int64_t * v9 = (int64_t *)(v2 - 24); // 0x22f488
    *v9 = v4;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x22f49a
    *v10 = v3;
    v1 = *v6;
    *v6 = 0x6afac66a;
    *v10 = v8;
    *v7 = *v6;
    *v6 = *v5;
    *v9 = a1;
    *v5 = v2 + 8;
    int64_t v11; // 0x22f3bb
    return function_cdc60(a1, a2, a3, a4, a5, v11, 0x50592b91);
}

// Address range: 0x22f532 - 0x22f67e
int64_t function_22f532(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x22f532
    int64_t v1; // 0x22f532
    return function_cdc60(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x22f67e - 0x22f7d4
int64_t function_22f67e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22f67e
    int64_t v1; // bp-32, 0x22f67e
    int64_t v2 = (int64_t)&v1; // 0x22f6b4
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x22f6d0
    *v3 = 0x22b873;
    v1 = 0x4e07cc30;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x22f6ec
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x22f6f2
    int64_t v6 = v2 - 24; // 0x22f6fb
    int64_t * v7 = (int64_t *)v6; // 0x22f6fb
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x22f6fd
    int64_t v9 = *(int64_t *)(v2 + 24); // 0x22f715
    *v4 = v9;
    *v7 = v9;
    *v8 = v9;
    int64_t v10 = *v3; // 0x22f72e
    *v4 = v10;
    *v8 = v6;
    *v5 = v9;
    *v7 = v10;
    *(int64_t *)(v2 + 16) = *v4;
    *v7 = *v5;
    *v4 = v2;
    *v4 = *v5;
    int64_t v11; // 0x22f67e
    return function_cdc60(a1, a2, 310, v11, v11, v11, a1);
}

// Address range: 0x22f7d4 - 0x22f916
int64_t function_22f7d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x2f5419fb; // bp-24, 0x22f8b0
    int64_t v2 = (int64_t)&v1; // 0x22f8d6
    *(int64_t *)(v2 - 8) = 0x2f5419fb;
    *(int64_t *)(v2 - 16) = v2;
    int64_t v3; // 0x22f7d4
    return function_cdc60(a1, a2, a3, v3, a5, a6, 310);
}

// Address range: 0x22f916 - 0x22fa49
int64_t function_22f916(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22f916
    int64_t v1; // 0x22f916
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x5038fe71);
}

// Address range: 0x22fa49 - 0x22fbab
int64_t function_22fa49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22fa49
    int64_t v1; // 0x22fa49
    return function_cdc60(a1, a2, a3, a4, v1, v1, 0x600b3cc7);
}

// Address range: 0x22fbab - 0x22fceb
int64_t function_22fbab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22fbab
    int64_t v1; // 0x22fbab
    bool v2; // 0x22fbab
    return function_cdc60(a1, a2, a3, v1, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x22fceb - 0x22fe24
int64_t function_22fceb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22fceb
    int64_t v1; // 0x22fceb
    bool v2; // 0x22fceb
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x22fe24 - 0x22fe29
int64_t function_22fe24(void) {
    // 0x22fe24
    int64_t result; // 0x22fe24
    return result;
}

// Address range: 0x22fe2c - 0x22fe37
int64_t function_22fe2c(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 1); // 0x22fe2c
    int64_t v2; // 0x22fe2c
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    return unknown_46240035(a1, a2, a3);
}

// Address range: 0x22fe55 - 0x22fe56
int64_t function_22fe55(void) {
    // 0x22fe55
    int64_t result; // 0x22fe55
    return result;
}

// Address range: 0x22fe5f - 0x22ff01
int64_t function_22fe5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int32_t * v3 = (int32_t *)(a2 - 0x747f890 + 2 * a1); // 0x22fe5f
    uint32_t v4 = *v3; // 0x22fe5f
    uint32_t v5 = v4 + (int32_t)a2; // 0x22fe5f
    *v3 = v5;
    bool v6 = v5 < v4; // 0x22fe5f
    int64_t v7 = a4; // 0x22fe5f
    int64_t v8 = a3;
    int64_t v9 = 256 * (int64_t)*(char *)(v8 + 0x7a0ea57) | v8 & -0xff01; // 0x22fe6d
    int16_t v10 = v9;
    int64_t v11; // 0x22fe5f
    while ((v6 ? -26 : -27) == (char)v11) {
        uint64_t v12 = (int64_t)__asm_in_133(v10); // 0x22fe73
        v7--;
        char * v13 = (char *)(v12 - 72); // 0x22fe79
        unsigned char v14 = *v13; // 0x22fe79
        unsigned char v15 = v14 + (char)(v12 / 256); // 0x22fe79
        unsigned char v16 = llvm_ctpop_i8(v15); // 0x22fe79
        *v13 = v15;
        int64_t v17 = unknown_fffffffffc5c0382(); // 0x22fe7c
        v6 = v15 < v14;
        v11 = v17;
        if (v16 % 2 == 0) {
            // 0x22fe83
            int64_t v18; // 0x22fe5f
            *(int32_t *)0x5f12d936 = *(int32_t *)0x5f12d936 + (int32_t)v18;
            return (v17 + v7 / 256) % 256 | v17 & -256;
        }
        v8 = v9;
        v9 = 256 * (int64_t)*(char *)(v8 + 0x7a0ea57) | v8 & -0xff01;
        v10 = v9;
    }
    char v19 = *(char *)&v1;
    __asm_outsb(v10, v19);
    int64_t v20 = (a5 & (int64_t)&g1) == 0 ? 1 : -1; // 0x22fed3
    int64_t v21 = v1 + v20; // 0x22fed3
    unsigned char v22 = llvm_ctpop_i8(*(char *)v21 - *(char *)&v2); // 0x22fed4
    v1 = v21 + v20;
    __asm_out(v10, v19);
    int64_t result = unknown_5cbf09dc(); // 0x22fed6
    if (v22 % 2 == 0) {
        // 0x22fefe
        return result;
    }
    // 0x22fede
    unknown_ffffffffc8a3fae9();
    __asm_iretd();
    return unknown_ffffffff9ba4e4f8();
}

// Address range: 0x22ff0a - 0x22ff0f
int64_t function_22ff0a(int64_t a1) {
    // 0x22ff0a
    int64_t v1; // 0x22ff0a
    return v1 | 20;
}

// Address range: 0x22ff31 - 0x22ff47
int64_t function_22ff31(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 0x60c0f955); // 0x22ff31
    char v2 = *v1; // 0x22ff31
    int64_t result; // 0x22ff31
    char v3 = result; // 0x22ff31
    char v4 = v2 + v3; // 0x22ff31
    *v1 = v4;
    if (((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // 0x22ff7d
        return result;
    }
    // 0x22ff40
    return function_13244176(a3);
}

// Address range: 0x22ff75 - 0x22ff7d
int64_t function_22ff75(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 0x529dd775); // 0x22ff75
    *v1 = *v1 / 2;
    int64_t result; // 0x22ff75
    *(int32_t *)result = (int32_t)a1;
    return result;
}

// Address range: 0x22ffa2 - 0x22ffc3
int64_t function_22ffa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)0x3f99a726a7fc0804; // 0x22ffa2
    int64_t result = v1; // 0x22ffa2
    int64_t v2; // 0x22ffa2
    int32_t * v3 = (int32_t *)(v2 + 0x6d000000); // 0x22ffb0
    *v3 = *v3 + (int32_t)v2;
    char * v4 = (char *)result; // 0x22ffb6
    *v4 = *v4 + (char)v1;
    return result;
}

// Address range: 0x22ffc3 - 0x22ffd1
int64_t function_22ffc3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22ffc3
    return function_160cf97();
}

// Address range: 0x22fff8 - 0x22fff9
int64_t function_22fff8(void) {
    // 0x22fff8
    int64_t result; // 0x22fff8
    return result;
}

// Address range: 0x3a6339 - 0x3a633a
int64_t function_3a6339(void) {
    // 0x3a6339
    int64_t result; // 0x3a6339
    return result;
}

// Address range: 0x3a635f - 0x3a6360
int64_t function_3a635f(void) {
    // 0x3a635f
    int64_t result; // 0x3a635f
    return result;
}

// Address range: 0x3a636e - 0x3a6374
int64_t function_3a636e(void) {
    // 0x3a636e
    int64_t result; // 0x3a636e
    return result;
}

// Address range: 0x3a6376 - 0x3a6389
int64_t function_3a6376(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = llvm_ctpop_i8((char)a4 + (char)a1); // 0x3a6376
    *(int32_t *)a1 = (int32_t)unknown_918584();
    if (v1 % 2 == 0) {
        function_3a6307();
    }
    // 0x3a6386
    return function_3a635f();
}

// Address range: 0x3a638c - 0x3a6390
int64_t function_3a638c(void) {
    // 0x3a638c
    int64_t result; // 0x3a638c
    return result;
}

// Address range: 0x3a640c - 0x3a640d
int64_t function_3a640c(void) {
    // 0x3a640c
    int64_t result; // 0x3a640c
    return result;
}

// Address range: 0x3a642a - 0x3a642d
int64_t function_3a642a(int64_t a1) {
    // 0x3a642a
    int64_t result; // 0x3a642a
    return result;
}

// Address range: 0x3a6464 - 0x3a646c
int64_t function_3a6464(void) {
    // 0x3a6464
    bool v1; // 0x3a6464
    if (v1 || v1) {
        function_3a640c();
    }
    // 0x3a6466
    return function_7ab10353();
}

// Address range: 0x3a64f6 - 0x3a64f9
int64_t function_3a64f6(int64_t a1) {
    // 0x3a64f6
    int64_t result; // 0x3a64f6
    return result;
}

// Address range: 0x3a6514 - 0x3a6520
int64_t function_3a6514(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a6514
    int64_t v1; // 0x3a6514
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 86); // 0x3a6518
    *v3 = *v3 + (int32_t)((v2 & 240 | 15) & a4 / 256 | v2 & 0xffffff00);
    return function_10d8e6c();
}

// Address range: 0x3a6538 - 0x3a65ca
int64_t function_3a6538(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a6538
    __asm_in((int16_t)a3);
    unknown_ffffffffe8ce14a1();
    int64_t v1 = unknown_3abb7fac(); // 0x3a65a6
    char * v2 = (char *)(v1 + 0x250b000); // 0x3a65ab
    *v2 = *v2 + (char)v1;
    uint64_t v3 = a4 / 256; // 0x3a65b1
    int64_t v4; // 0x3a6538
    int32_t * v5 = (int32_t *)(v4 + 0x69004200); // 0x3a65b3
    *v5 = *v5 + (int32_t)v4;
    uint32_t v6 = 0x10000 * (int32_t)((v1 + v3) % 256 | v1 & 0xff00) >> 16; // 0x3a65b9
    return (v3 + (int64_t)v6) % 256 | (int64_t)(v6 & -256);
}

// Address range: 0x3a65ee - 0x3a65f0
int64_t function_3a65ee(void) {
    // 0x3a65ee
    return function_3a65f3();
}

// Address range: 0x3a65f1 - 0x3a65f3
int64_t function_3a65f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a65f1
    int64_t result; // 0x3a65f1
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3a65f3 - 0x3a65f6
int64_t function_3a65f3(void) {
    // 0x3a65f3
    int64_t result; // 0x3a65f3
    return result;
}

// Address range: 0x3a663b - 0x3a663e
int64_t function_3a663b(int64_t a1) {
    // 0x3a663b
    int64_t result; // 0x3a663b
    return result;
}

// Address range: 0x3a664a - 0x3a6744
int64_t function_3a664a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_33b1fe50(); // 0x3a664a
    int64_t v2; // 0x3a664a
    unsigned char v3 = (char)((uint64_t)v2 / 256); // 0x3a6654
    unsigned char v4 = *(char *)(v1 - 110); // 0x3a6654
    if (v4 <= v3) {
        // 0x3a6659
        unknown_ffffffffe0344f5f();
        return unknown_ffffffffedaa3070();
    }
    int64_t result = __asm_sti(); // 0x3a66d3
    if (v4 > v3) {
        // 0x3a66d6
        return result & 0xffffffff ^ 0xc339405a;
    }
    int16_t v5 = a3; // 0x3a6735
    __asm_outsb(v5, *(char *)0xacaafc59);
    *(char *)0xacaafc59 = *(char *)0xacaafc59 + (char)a4;
    __asm_outsd(v5, *(int32_t *)0xacaafc59);
    char v6 = result; // 0x3a673a
    if (((v6 - (char)a1 ^ v6) & (char)(result ^ a1)) >= 0) {
        // 0x3a673e
        return result;
    }
    // 0x3a6705
    bool v7; // 0x3a664a
    __asm_wait((v7 ? -1 : 1) + a1);
    unknown_307f830d();
    __asm_int(-87);
    return __asm_sti();
}

// Address range: 0x3a67d6 - 0x3a67d9
int64_t function_3a67d6(int64_t a1) {
    // 0x3a67d6
    int64_t result; // 0x3a67d6
    return result;
}

// Address range: 0x3a6801 - 0x3a680a
int64_t function_3a6801(void) {
    // 0x3a6801
    int64_t result; // 0x3a6801
    return result;
}

// Address range: 0x3a681d - 0x3a6887
int64_t function_3a681d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a681d
    int64_t v1; // 0x3a681d
    int32_t * v2 = (int32_t *)(v1 + 0x475f619f); // 0x3a6824
    *v2 = *v2 + (int32_t)v1;
    char v3 = *(char *)0x5e3c6abf + 77; // 0x3a6834
    *(char *)0x5e3c6abf = v3;
    int64_t v4 = a4 - 1; // 0x3a6837
    if (v4 != 0 == v3 == 0) {
        int32_t * v5 = (int32_t *)(a2 - 71); // 0x3a6884
        *v5 = *v5 + (int32_t)a2;
        return (int64_t)(*(int32_t *)v4 & 0x5e3c6abf);
    }
    char * v6 = (char *)(v1 + 0x1c01e800); // 0x3a6839
    *v6 = *v6 + 106;
    char v7 = a3; // 0x3a683f
    *(char *)0x5e3c6abf = *(char *)0x5e3c6abf + v7 | v7;
    return 0x5e3c6abf;
}

// Address range: 0x3a6899 - 0x3a68c4
int64_t function_3a6899(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a6899
    int64_t v1; // 0x3a6899
    int32_t * v2 = (int32_t *)(v1 - 0x50fe4dff); // 0x3a6899
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(a3 - 0x60c14bf7); // 0x3a68a1
    *v3 = *v3 + (int32_t)a1;
    int64_t v4 = unknown_ffffffffd4d8a7ad(); // 0x3a68a7
    __asm_int(56);
    char * v5 = (char *)(v1 + 77); // 0x3a68b3
    *v5 = *v5 + (char)v4;
    unknown_ffffffff92477fbc();
    char * v6 = (char *)(a2 - 46); // 0x3a68bb
    *v6 = *v6 | (char)((int64_t)&g2 >> 8);
    return function_ffffffffd10f74c6();
}

// Address range: 0x3a68d5 - 0x3a68f1
int64_t function_3a68d5(int64_t a1, int64_t a2) {
    // 0x3a68d5
    int64_t v1; // 0x3a68d5
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    int64_t v3 = v1 & 0x5c6d704f | 0xa3928fb0; // 0x3a68d7
    int64_t v4; // 0x3a68d5
    *(int32_t *)a1 = *(int32_t *)&v4 - (int32_t)v3;
    int64_t v5 = 0x100000000 * v3 >> 32; // 0x3a68e0
    int64_t v6 = v5 * v5; // 0x3a68e0
    int32_t * v7 = (int32_t *)(a2 + 0x60015807); // 0x3a68e2
    *v7 = *v7 + (int32_t)v6;
    char v8 = *(char *)(a1 + 0x7d35fcee); // 0x3a68e8
    return v6 & 0xffffff00 | (int64_t)(v8 + (char)v6);
}

// Address range: 0x3a68f8 - 0x3a68fb
int64_t function_3a68f8(int64_t a1) {
    // 0x3a68f8
    int64_t result; // 0x3a68f8
    return result;
}

// Address range: 0x3a6908 - 0x3a6909
int64_t function_3a6908(void) {
    // 0x3a6908
    int64_t result; // 0x3a6908
    return result;
}

// Address range: 0x3a691e - 0x3a691f
int64_t function_3a691e(void) {
    // 0x3a691e
    int64_t result; // 0x3a691e
    return result;
}

// Address range: 0x3a6945 - 0x3a6946
int64_t function_3a6945(void) {
    // 0x3a6945
    int64_t result; // 0x3a6945
    return result;
}

// Address range: 0x3a6959 - 0x3a6972
int64_t function_3a6959(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3a6959
    int64_t * v3 = (int64_t *)(v2 - 0x31fdffbe); // 0x3a6959
    int64_t v4 = *v3 - 0xa571f28; // 0x3a6959
    *v3 = v4;
    int64_t v5 = a4 - 1; // 0x3a6964
    int64_t v6; // 0x3a6959
    if (v5 != 0 && v4 != 0) {
        v6 = function_3a691e();
    }
    uint32_t v7 = (int32_t)v6; // 0x3a6966
    if (v7 >= 0x2afe02) {
        function_3a6908();
    }
    unsigned char v8 = (char)v5 % 32; // 0x3a696d
    if (v8 != 0) {
        int64_t v9; // 0x3a6959
        unsigned char v10 = *(char *)&v9; // 0x3a696d
        *(char *)v9 = v10 >> v8 | (char)(v7 < 0x2afe01) << 8 - v8 | (char)((int16_t)v10 << (int16_t)(9 - v8));
    }
    *(char *)a1 = *(char *)&v1;
    return function_3a6945();
}

// Address range: 0x3a6a1a - 0x3a6a1b
int64_t function_3a6a1a(void) {
    // 0x3a6a1a
    int64_t result; // 0x3a6a1a
    return result;
}

// Address range: 0x3a6a24 - 0x3a6a58
int64_t function_3a6a24(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0xb38b8bb); // 0x3a6a24
    uint32_t v2 = *v1; // 0x3a6a24
    bool v3; // 0x3a6a24
    *v1 = v2 / 128 | 0x4000000 * v2 | 0x2000000 * (int32_t)v3;
    int64_t v4; // 0x3a6a24
    *(int32_t *)0xd90001e8c804f0 = (int32_t)v4 | 80;
    char v5 = *(char *)(a4 + 0x1bc291f0); // 0x3a6a3b
    unknown_fffffffff3733747();
    int64_t v6; // 0x3a6a24
    *(int32_t *)a4 = *(int32_t *)&v6 + (int32_t)a1;
    return function_3a6a99(a1, a2 + 0xd8084885 + 8 * v4 & 0xffffffff, 256 * (int64_t)(v5 + (char)(a3 / 256)) | a3 & -0xff01, a4);
}

// Address range: 0x3a6a58 - 0x3a6a64
int64_t function_3a6a58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_30596e5f(a1, a2, a3, a4, a5); // 0x3a6a5e
    bool v1; // 0x3a6a58
    if (!v1) {
        result = function_3a6a1a();
    }
    // 0x3a6a61
    return result;
}

// Address range: 0x3a6a64 - 0x3a6a67
int64_t function_3a6a64(void) {
    // 0x3a6a64
    int64_t result; // 0x3a6a64
    return result;
}

// Address range: 0x3a6a99 - 0x3a6aab
int64_t function_3a6a99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a6a99
    int64_t v1; // 0x3a6a99
    __asm_outsb((int16_t)a3 % 256 | (int16_t)&g5, (char)v1);
    int64_t v2 = unknown_ffffffffabe3ddaa(); // 0x3a6aa4
    return (v2 + ((int64_t)&g5 >> 8)) % 256 | v2 & -256;
}

// Address range: 0x3a6abc - 0x3a6b36
int64_t function_3a6abc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3a6abc
    int64_t v1; // 0x3a6abc
    int64_t v2 = v1;
    int64_t v3 = a3;
    __asm_out_135((int16_t)a3, (int32_t)v1);
    bool v4; // 0x3a6abc
    if (v4) {
        // 0x3a6b26
        return function_46d9f991(0x999a01e8);
    }
    // 0x3a6abf
    *(char *)a1 = *(char *)(v1 + 0x1e8b3d4 & 0xffffffff);
    uint32_t v5 = (int32_t)a4 % 32; // 0x3a6ac6
    if (v5 != 0) {
        uint32_t v6 = *(int32_t *)&v3; // 0x3a6ac6
        *(int32_t *)v3 = v6 >> v5 | v6 << 32 - v5;
    }
    *(char *)v2 = (char)v2;
    return a2 & 0xffffffff;
}

// Address range: 0x3a6b3e - 0x3a6b3f
int64_t function_3a6b3e(void) {
    // 0x3a6b3e
    int64_t result; // 0x3a6b3e
    return result;
}

// Address range: 0x3a6b56 - 0x3a6b7c
int64_t function_3a6b56(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a6b56
    int64_t v1; // 0x3a6b56
    __asm_out_136(-66, (char)v1);
    int64_t v2 = unknown_2fcd335e(); // 0x3a6b58
    int32_t * v3 = (int32_t *)v2; // 0x3a6b5d
    *v3 = (int32_t)a4;
    int64_t v4 = v2; // 0x3a6b5f
    v4 = function_3a6b3e();
    // 0x3a6b61
    __asm_out((int16_t)a3, (char)v4);
    int32_t * v5 = (int32_t *)(int64_t)*v3; // 0x3a6b6d
    uint32_t v6 = *v5; // 0x3a6b6d
    *v5 = v6 / 2 | 0x80000000 * v6;
    int64_t result = unknown_ffffffffd42ccc7a(); // 0x3a6b74
    __asm_out_134(-86, (int32_t)result);
    return result;
}

// Address range: 0x3a6b80 - 0x3a6b81
int64_t function_3a6b80(void) {
    // 0x3a6b80
    int64_t result; // 0x3a6b80
    return result;
}

// Address range: 0x3a6b9c - 0x3a6ba6
int64_t function_3a6b9c(void) {
    // 0x3a6b9c
    return unknown_ffffffffc9e0e9a6();
}

// Address range: 0x3a6bae - 0x3a6bc5
int64_t function_3a6bae(int64_t a1) {
    // 0x3a6bae
    int64_t v1; // 0x3a6bae
    unsigned char v2 = (char)v1; // 0x3a6bb1
    unsigned char v3 = v2 + 19; // 0x3a6bb1
    int64_t v4 = v1 & -256 | (int64_t)v3; // 0x3a6bb1
    *(int32_t *)a1 = (int32_t)v4;
    int64_t result = v4 & -0xff01 | (int64_t)&g3; // 0x3a6bbd
    if (v2 < 237 || v3 == 0) {
        result = function_3a6b80();
    }
    // 0x3a6bbf
    return result;
}

// Address range: 0x3a6bc5 - 0x3a6bca
int64_t function_3a6bc5(void) {
    // 0x3a6bc5
    return function_ffffffff80d86c7d();
}

// Address range: 0x3a6bd6 - 0x3a6bd9
int64_t function_3a6bd6(void) {
    // 0x3a6bd6
    int64_t result; // 0x3a6bd6
    return result;
}

// Address range: 0x3a6c27 - 0x3a6c39
int64_t function_3a6c27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_ffffffffb139f12f(); // 0x3a6c29
    int64_t v2; // 0x3a6c27
    *(char *)((v1 / 256 % 256 | a4 & -256) + 0x1e89099) = (char)v2;
    return v1 & -0xff01 | 256 * a4 & 0xff00;
}

// Address range: 0x3a6ce2 - 0x3a6ce7
int64_t function_3a6ce2(void) {
    // 0x3a6ce2
    return function_fffffffff33b28a7();
}

// Address range: 0x3a6d1d - 0x3a6d1e
int64_t function_3a6d1d(int64_t a1) {
    // 0x3a6d1d
    int64_t result; // 0x3a6d1d
    return result;
}

// Address range: 0x3a6d20 - 0x3a6d23
int64_t function_3a6d20(int64_t a1) {
    // 0x3a6d20
    int64_t result; // 0x3a6d20
    return result;
}

// Address range: 0x3a6d28 - 0x3a6d2b
int64_t function_3a6d28(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a6d28
    int64_t result; // 0x3a6d28
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3a6d38 - 0x3a6d4a
int64_t function_3a6d38(int64_t a1, int64_t a2) {
    // 0x3a6d38
    int64_t v1; // 0x3a6d38
    int32_t * v2 = (int32_t *)(v1 - 7); // 0x3a6d38
    uint32_t v3 = *v2; // 0x3a6d38
    uint32_t v4 = v3 + (int32_t)a1; // 0x3a6d38
    *v2 = v4;
    int32_t v5 = 2 * (int32_t)v1 | (int32_t)(v4 < v3); // 0x3a6d3b
    *(char *)(a1 - 0x3fe1726) = (char)(v5 >= 0);
    return (int64_t)(v5 & -0xff01) | (int64_t)&g6;
}

// Address range: 0x3a6db9 - 0x3a6dbc
int64_t function_3a6db9(int64_t a1) {
    // 0x3a6db9
    int64_t result; // 0x3a6db9
    return result;
}

// Address range: 0x3a6e17 - 0x3a6e1c
int64_t function_3a6e17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a6e17
    int64_t result; // 0x3a6e17
    return result;
}

// Address range: 0x3a6e4e - 0x3a6e51
int64_t function_3a6e4e(void) {
    // 0x3a6e4e
    int64_t v1; // 0x3a6e4e
    return function_3a6ec1(v1, v1, v1);
}

// Address range: 0x3a6e78 - 0x3a6e91
int64_t function_3a6e78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a6e78
    float80_t v1; // 0x3a6e78
    *(int32_t *)(a2 + 0x5020917b) = (int32_t)v1;
    int64_t v2; // 0x3a6e78
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    unknown_47393487();
    int64_t v3; // 0x3a6e78
    int32_t * v4 = (int32_t *)(v3 + 59); // 0x3a6e86
    uint32_t v5 = *v4; // 0x3a6e86
    *v4 = v5 / 1024 | 0x400000 * v5;
    return unknown_ffffffffb50c6890();
}

// Address range: 0x3a6eab - 0x3a6eac
int64_t function_3a6eab(void) {
    // 0x3a6eab
    int64_t result; // 0x3a6eab
    return result;
}

// Address range: 0x3a6ec1 - 0x3a6ec8
int64_t function_3a6ec1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a6ec1
    bool v1; // 0x3a6ec1
    *(char *)((v1 ? -4 : 4) + a1) = __asm_insb((int16_t)a3);
    return unknown_ffffffffb249acc9();
}

// Address range: 0x3a6f05 - 0x3a6f15
int64_t function_3a6f05(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a6f05
    unknown_ffffffffc62ce00b();
    int64_t v1; // 0x3a6f05
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3a6f05
    if (v2) {
        function_3a6eab();
    }
    // 0x3a6f0e
    int64_t v3; // 0x3a6f05
    int64_t result = (int64_t)&v3; // 0x3a6f0e
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x3a6f2e - 0x3a6f31
int64_t function_3a6f2e(int64_t a1) {
    // 0x3a6f2e
    int64_t result; // 0x3a6f2e
    return result;
}

// Address range: 0x3a6f51 - 0x3a6f56
int64_t function_3a6f51(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a6f51
    int64_t result; // 0x3a6f51
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3a6f6f - 0x3a6f70
int64_t function_3a6f6f(void) {
    // 0x3a6f6f
    int64_t result; // 0x3a6f6f
    return result;
}

// Address range: 0x3a6f78 - 0x3a6f8a
int64_t function_3a6f78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 58 + a3); // 0x3a6f79
    *v1 = *v1 + (int32_t)a2;
    return unknown_ffffffffbc906385() + 0xc82d7e64 & 0xffffffff;
}

// Address range: 0x3a6fa6 - 0x3a6fc1
int64_t function_3a6fa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a6fa6
    int64_t v1; // 0x3a6fa6
    uint32_t v2 = (int32_t)v1 + (int32_t)a4; // 0x3a6fa6
    unknown_ffffffffe03488b0();
    int64_t v3 = __asm_hlt(); // 0x3a6faf
    uint32_t v4 = v2 % 32; // 0x3a6fb0
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)v3; // 0x3a6fb0
        uint32_t v6 = *v5; // 0x3a6fb0
        *v5 = v6 >> 32 - v4 | v6 << v4;
    }
    __asm_in((int16_t)((a3 - v1) % 256 | a3 & 0xff00));
    int64_t v7 = unknown_7971d9bf(); // 0x3a6fb9
    return v7 & -0x10000 | (int64_t)((256 * (int16_t)v7 >> 8) * ((int16_t)v2 >> 8));
}

// Address range: 0x3a6fc7 - 0x3a6fce
int64_t function_3a6fc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a6fc7
    int64_t v1; // 0x3a6fc7
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    return function_3a6f6f();
}

// Address range: 0x3a7027 - 0x3a702c
int64_t function_3a7027(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a7027
    int64_t result; // 0x3a7027
    return result;
}

// Address range: 0x3a709c - 0x3a70a4
int64_t function_3a709c(int64_t a1) {
    // 0x3a709c
    return unknown_4e4700a2(a1);
}

// Address range: 0x3a70a4 - 0x3a7218
int64_t function_3a70a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff90a32aab(); // 0x3a70a4
    int64_t v2; // 0x3a70a4
    int32_t v3 = *(int32_t *)(v2 + 4 * v2); // 0x3a70aa
    *(char *)(v1 + (8 * v2 | 1)) = (char)a3;
    char * v4 = (char *)(v1 - 0x23f9700); // 0x3a70b6
    *v4 = *v4 + (char)v1;
    int64_t v5; // bp-48, 0x3a70a4
    int64_t v6 = (int64_t)&v5; // 0x3a713b
    int64_t v7 = v6 + 8; // 0x3a713f
    v5 = v7;
    int64_t * v8 = (int64_t *)v7; // 0x3a7158
    int64_t v9 = *(int64_t *)(v6 + 40); // 0x3a715c
    v5 = v9;
    int64_t * v10 = (int64_t *)(v6 - 8); // 0x3a7164
    int64_t * v11 = (int64_t *)(v6 - 16); // 0x3a716d
    bool v12; // 0x3a70a4
    *v11 = (v12 ? -1 : 1) + (int64_t)(v3 + (int32_t)a1);
    *v10 = v7;
    int64_t v13 = *(int64_t *)(v6 + 24); // 0x3a7184
    v5 = v13;
    *v11 = v9;
    *v10 = v9;
    *(int64_t *)(v6 + 16) = v5;
    *v10 = a5;
    *v11 = a4;
    v5 = v13;
    *(int64_t *)(v6 + 32) = v13;
    v5 = *v8;
    *v10 = v7;
    int64_t v14 = *v8; // 0x3a7204
    v5 = v14;
    *v10 = v14;
    return function_c9849(v9);
}

// Address range: 0x3a7262 - 0x3a7267
int64_t function_3a7262(void) {
    // 0x3a7262
    int64_t v1; // 0x3a7262
    char * v2 = (char *)(v1 + 104); // 0x3a7262
    *v2 = *v2 | (char)v1;
    return function_3a7294(v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x3a728f - 0x3a7294
int64_t function_3a728f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a728f
    int64_t result; // 0x3a728f
    char * v1 = (char *)(result - 117); // 0x3a7291
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x3a7294 - 0x3a7338
int64_t function_3a7294(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a7294
    int64_t result; // 0x3a7294
    return result;
}
