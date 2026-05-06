/*
 * Targeted RetDec C for native executable gap queue batch 953.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x215233-0x215433 rank=- name=- kind=- bytes=- uncovered=-
 *   0x215433-0x215633 rank=- name=- kind=- bytes=- uncovered=-
 *   0x215633-0x215833 rank=- name=- kind=- bytes=- uncovered=-
 *   0x215833-0x215a33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x215a33-0x215c33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x432693-0x432893 rank=- name=- kind=- bytes=- uncovered=-
 *   0x432893-0x432a93 rank=- name=- kind=- bytes=- uncovered=-
 *   0x432a93-0x432c93 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1ca35ea2();
int64_t function_215233(void);
int64_t function_215234(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2152ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_215434(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_215569(void);
int64_t function_2155ad(void);
int64_t function_2155f3(void);
int64_t function_215660(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2156dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2157b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2157fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_215806(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2158ba(void);
int64_t function_2158cb(void);
int64_t function_2158e1(int64_t a1, int64_t a2);
int64_t function_2158f5(void);
int64_t function_215906(int64_t a1);
int64_t function_215914(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2159c1(void);
int64_t function_215a29(void);
int64_t function_215a2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_215a70(int64_t a1);
int64_t function_215ab0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_215b0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_215b2e(int64_t a1);
int64_t function_215b5f(void);
int64_t function_215b92(void);
int64_t function_215ba8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_215bd0(void);
int64_t function_215bf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_215c2a(void);
int64_t function_3e8959cf();
int64_t function_432693(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_432701(int64_t a1);
int64_t function_432716(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43277c(int64_t a1);
int64_t function_43278a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_432876(int64_t a1);
int64_t function_432886(void);
int64_t function_432900(void);
int64_t function_43291e(void);
int64_t function_432932(int64_t a1);
int64_t function_432946(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4329e4(void);
int64_t function_432a30(int64_t a1);
int64_t function_432a48(void);
int64_t function_432aaf(int64_t a1, int64_t a2);
int64_t function_432ac0(void);
int64_t function_432ad2(void);
int64_t function_432ad5(void);
int64_t function_432ae4(void);
int64_t function_432b0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_432b1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_432bae(void);
int64_t function_432c00(int64_t a1);
int64_t function_432c79(void);
int64_t function_444fbf04();
int64_t function_5e2373a();
int64_t function_7a122e2b();
int64_t function_c823b();
int64_t function_f700f016();
int64_t function_ffffffffeac9ea1c();
int64_t function_ffffffffff53166a();
int64_t unknown_19bb73c1();
int64_t unknown_1b21019();
int64_t unknown_21a1be24();
int64_t unknown_3422936e();
int64_t unknown_45e614aa();
int64_t unknown_5812817d();
int64_t unknown_631a800c();
int64_t unknown_69239961();
int64_t unknown_722938a();
int64_t unknown_760610f();
int64_t unknown_f735e0();
int64_t unknown_ffffffffba1fe2bc();

// Address range: 0x215233 - 0x215234
int64_t function_215233(void) {
    // 0x215233
    int64_t result; // 0x215233
    return result;
}

// Address range: 0x215234 - 0x2152ef
int64_t function_215234(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a4 + 82); // 0x215234
    int64_t v2; // 0x215234
    *v1 = *v1 | (char)v2;
    return function_c823b(a6);
}

// Address range: 0x2152ef - 0x215434
int64_t function_2152ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x7854a841; // bp-32, 0x215365
    int64_t v2 = (int64_t)&v1; // 0x215386
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x21539d
    int64_t v4 = v2 - 8; // 0x21539d
    int64_t * v5 = (int64_t *)v4; // 0x21539d
    *v5 = v3;
    int64_t v6 = v2 - 16; // 0x2153a1
    int64_t * v7 = (int64_t *)v6; // 0x2153a1
    *v7 = a7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x2153c2
    *v8 = v6;
    int64_t v9 = v2 + 8; // 0x2153d7
    *(int64_t *)v9 = *v5;
    *v7 = 0x625d29d1;
    *v8 = v3;
    *(int64_t *)(v2 + 24) = *v5;
    *v7 = v4;
    *v5 = v9;
    return function_c823b(a1);
}

// Address range: 0x215434 - 0x215569
int64_t function_215434(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x215434
    int64_t v1; // bp-24, 0x215434
    int64_t v2 = (int64_t)&v1; // 0x2154de
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2154e6
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x2154ea
    *(int64_t *)(v2 - 24) = a7;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x215507
    *v5 = a7;
    *v4 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v4 = v1;
    int64_t v6 = *v5; // 0x21554b
    v1 = v6;
    *v3 = v6;
    return function_c823b(a1);
}

// Address range: 0x215569 - 0x21556e
int64_t function_215569(void) {
    // 0x215569
    int64_t result; // 0x215569
    return result;
}

// Address range: 0x2155ad - 0x2155b2
int64_t function_2155ad(void) {
    // 0x2155ad
    return function_1ca35ea2();
}

// Address range: 0x2155f3 - 0x2155f9
int64_t function_2155f3(void) {
    // 0x2155f3
    int64_t result; // 0x2155f3
    char * v1 = (char *)(result + 1); // 0x2155f3
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x215660 - 0x215696
int64_t function_215660(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a4 - 11); // 0x215665
    int32_t v3 = a4; // 0x215665
    *v2 = *v2 + v3;
    int32_t * v4 = (int32_t *)unknown_3422936e(); // 0x215681
    *v4 = *v4 + (int32_t)a2;
    int64_t v5 = unknown_722938a() + 0x685a6f; // 0x21568c
    int64_t v6; // 0x215660
    uint32_t v7 = *(int32_t *)&v6; // 0x215691
    int32_t v8 = *(int32_t *)&v1; // 0x215694
    *(int32_t *)v1 = v8 + v3 + (int32_t)(v7 < (int32_t)v5);
    return v5 & 0xffffffff;
}

// Address range: 0x2156dd - 0x21577a
int64_t function_2156dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2156dd
    int64_t v1; // 0x2156dd
    bool v2; // 0x2156dd
    if (v2) {
        // 0x21572b
        return v1 & -256 | 120;
    }
    // 0x2156df
    return v1 & -256 | (int64_t)*(char *)0x13d007de6d3c72c;
}

// Address range: 0x2157b9 - 0x2157fa
int64_t function_2157b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2157b9
    int64_t v1; // 0x2157b9
    int64_t v2 = v1;
    int64_t v3 = unknown_19bb73c1(); // 0x2157bb
    int64_t v4 = v3 & 0xe8fd423a; // 0x2157c2
    int64_t v5 = v1 + a3; // 0x2157c7
    int32_t * v6 = (int32_t *)v4; // 0x2157c9
    int32_t v7 = a1; // 0x2157c9
    *v6 = *v6 + v7;
    char * v8 = (char *)v4; // 0x2157cb
    *v8 = *v8 + (char)a4;
    *(int32_t *)-0x821ddb4 = *(int32_t *)-0x821ddb4 + (int32_t)v5;
    int32_t * v9 = (int32_t *)(v5 & 0xffffffff); // 0x2157d8
    *v9 = *v9 | v7;
    int64_t v10 = unknown_f735e0(); // 0x2157da
    char v11 = *(char *)(4 * a4 - 0x19d4d1c8 + v2); // 0x2157df
    int32_t v12 = *(int32_t *)-0x2735c780; // 0x2157e8
    *(int32_t *)-0x2735c780 = v12 + (int32_t)v1 - (int32_t)(v10 & 0xffffff00 | (int64_t)(v11 + (char)v10));
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1 + (int32_t)v3;
    return function_5e2373a(*v9 & v7);
}

// Address range: 0x2157fa - 0x215803
int64_t function_2157fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2157fa
    int64_t result; // 0x2157fa
    *(char *)a3 = (char)(result | (uint64_t)result / 256);
    int64_t v1; // 0x2157fa
    int32_t v2 = *(int32_t *)&v1; // 0x2157fe
    *(int32_t *)a1 = v2 + (int32_t)(256 * result & 0xff00 | a4 & 0xffff00ff);
    return result;
}

// Address range: 0x215806 - 0x2158b6
int64_t function_215806(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    struct eac_retdec_cpuid_regs v1; // 0x21586e
    // 0x215806
    unknown_631a800c();
    bool v2; // 0x215806
    if (!v2) {
        // 0x215810
        __asm_in_134(65);
        return unknown_1b21019();
    }
    int64_t v3 = unknown_21a1be24(); // 0x21581e
    char * v4 = (char *)(v3 + 0x38bd200); // 0x215823
    char v5 = v3; // 0x215823
    *v4 = *v4 + v5;
    int64_t v6; // 0x215806
    char * v7 = (char *)(v6 + 0x5101e800); // 0x215829
    *v7 = *v7 + (char)((int64_t)&g3 >> 8);
    int32_t * v8 = (int32_t *)(v3 - 107); // 0x21582f
    *v8 = *v8 + (int32_t)v6;
    char * v9 = (char *)(a1 - 82); // 0x215833
    *v9 = *v9 + v5;
    unsigned char v10 = (char)v6; // 0x215837
    unsigned char v11 = (char)(((int32_t)v3 >> 31) / 256); // 0x215837
    unsigned char v12 = v11 + v10; // 0x215837
    unsigned char v13 = llvm_ctpop_i8(v12); // 0x215837
    int64_t v14 = v6 & 0xffffff00 | (int64_t)v12; // 0x215837
    int64_t v15 = 0x4000 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | (int64_t)(v12 < v10) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v11 % 16 + v10 % 16 > 15) | 4 * (int64_t)(v13 % 2 == 0) | 2048 * (int64_t)(((v12 ^ v10) & (v12 ^ v11)) < 0) | 2; // bp-16, 0x215844
    int32_t * v16 = (int32_t *)(v14 - 0x7dfe17fd); // 0x215849
    *v16 = *v16 + (int32_t)v14;
    int64_t v17 = v2 ? -1 : 1; // 0x21584f
    int64_t v18 = v17 + a1; // 0x21584f
    int64_t v19 = unknown_69239961(v18); // 0x21585b
    char * v20 = (char *)v19; // 0x215863
    *v20 = *v20 - (char)v19;
    int32_t * v21 = (int32_t *)v18; // 0x21586b
    *v21 = *v21 + (int32_t)v18;
    v1 = __asm_cpuid((int32_t)v19);
    uint32_t v22 = v1.e2; // 0x21586e
    int64_t v23 = v22; // 0x21587f
    int64_t v24 = unknown_5812817d() & 0xffffffff; // 0x21587f
    int64_t v25 = (int64_t)&v15;
    int64_t v26 = v1.e3;
    int64_t v27 = v24 + (int64_t)((char)v22 < 127) - v25; // 0x215881
    v24 = v27 & 0xffffffff;
    *(char *)v24 = (char)v27;
    *(int64_t *)(v25 - 8) = v25;
    int64_t v28 = v25 - 16; // 0x215886
    *(int64_t *)v28 = v14;
    uint32_t v29 = (int32_t)v28; // 0x215889
    int32_t v30 = v23; // 0x215889
    uint32_t v31 = v29 + v30; // 0x215889
    int64_t v32 = v26 - 256 * (v23 + (int64_t)(v31 < v29)) & 0xff00 | v26 & -0xff01; // 0x215890
    int64_t v33 = v18 + v17; // 0x215892
    *(int32_t *)v33 = v30;
    int64_t v34 = v23 & 0xfe17db02 | 0x1e824fd; // 0x215899
    int32_t v35 = 0x10000 * (int32_t)(v33 + (v2 ? 0xfffc : 4)) >> 16; // 0x21589a
    char v36 = v35; // 0x21589b
    char v37 = v36 + 126; // 0x21589b
    int64_t v38 = (int64_t)v31 - 8; // 0x21589d
    *(int64_t *)v38 = -0xdb4c1c9;
    v23 = (int64_t)v37 | (int64_t)(v35 & -256);
    while (v37 < 0 != (v37 & (v36 ^ -128)) < 0) {
        // 0x215881
        v25 = v38;
        v26 = v32;
        v27 = v24 + (int64_t)((v36 ^ -2) < 126) - v25;
        v24 = v27 & 0xffffffff;
        *(char *)v24 = (char)v27;
        *(int64_t *)(v25 - 8) = v25;
        v28 = v25 - 16;
        *(int64_t *)v28 = v14;
        v29 = (int32_t)v28;
        v30 = v23;
        v31 = v29 + v30;
        v32 = v26 - 256 * (v23 + (int64_t)(v31 < v29)) & 0xff00 | v26 & -0xff01;
        v33 = v34 + v17;
        *(int32_t *)v33 = v30;
        v34 = v23 & 0xfe17db02 | 0x1e824fd;
        v35 = 0x10000 * (int32_t)(v33 + (v2 ? 0xfffc : 4)) >> 16;
        v36 = v35;
        v37 = v36 + 126;
        v38 = (int64_t)v31 - 8;
        *(int64_t *)v38 = -0xdb4c1c9;
        v23 = (int64_t)v37 | (int64_t)(v35 & -256);
    }
    int64_t v39 = unknown_45e614aa(v34, 0x5607d39, v32, (int32_t)v27); // 0x2158a4
    int64_t v40 = v39 & -256 | (int64_t)__asm_in_134(104); // 0x2158ab
    return (int64_t)(*(int32_t *)v40 + (int32_t)v40);
}

// Address range: 0x2158ba - 0x2158bb
int64_t function_2158ba(void) {
    // 0x2158ba
    int64_t result; // 0x2158ba
    return result;
}

// Address range: 0x2158cb - 0x2158cc
int64_t function_2158cb(void) {
    // 0x2158cb
    int64_t result; // 0x2158cb
    return result;
}

// Address range: 0x2158e1 - 0x2158ea
int64_t function_2158e1(int64_t a1, int64_t a2) {
    // 0x2158e1
    bool v1; // 0x2158e1
    if (v1) {
        function_2158cb();
    }
    // 0x2158e3
    return function_444fbf04();
}

// Address range: 0x2158f5 - 0x2158fc
int64_t function_2158f5(void) {
    // 0x2158f5
    return function_3e8959cf();
}

// Address range: 0x215906 - 0x215910
int64_t function_215906(int64_t a1) {
    // 0x215906
    return unknown_760610f(a1);
}

// Address range: 0x215914 - 0x2159b2
int64_t function_215914(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x215914
    int64_t v1; // 0x215914
    uint32_t v2 = (int32_t)v1; // 0x215984
    if ((int32_t)a1 < v2) {
        char v3 = *(char *)(a1 + 0x3a06b872); // 0x21597e
        int32_t v4 = *(int32_t *)(a4 + 73); // 0x21594f
        *(int64_t *)((int64_t)((int32_t)v1 - v4) - 8) = 0x13d0000;
        char v5 = __asm_in_134(26); // 0x215959
        int32_t v6 = *(int32_t *)(a2 - 8); // 0x21595b
        *(char *)-0x2065a3c4 = (char)v1;
        return (v1 | (int64_t)v5) & -256 | (int64_t)__asm_in_136((int16_t)(v6 + (int32_t)(256 * (int64_t)(v3 & (char)(a3 / 256)) | a3 % 256)));
    }
    char * v7 = (char *)(v1 - 83); // 0x215987
    *v7 = *v7 | (char)v1;
    *(char *)(a2 + 0xffffffce & 0xffffffff) = (char)(a4 / 256);
    __asm_out_135(-128, v2);
    int64_t v8 = v1 & -256; // 0x21599a
    int64_t v9 = v8 | 98; // 0x21599a
    int32_t * v10 = (int32_t *)v9; // 0x21599c
    *v10 = *v10 + (int32_t)v9;
    char * v11 = (char *)(a4 + 34); // 0x21599e
    *v11 = *v11 + 43;
    char * v12 = (char *)v9; // 0x2159a1
    *v12 = *v12 + 98;
    return v8 | (int64_t)*(char *)0x5e9500b31e18b00a;
}

// Address range: 0x2159c1 - 0x2159c4
int64_t function_2159c1(void) {
    // 0x2159c1
    int64_t result; // 0x2159c1
    return result;
}

// Address range: 0x215a29 - 0x215a2a
int64_t function_215a29(void) {
    // 0x215a29
    int64_t result; // 0x215a29
    return result;
}

// Address range: 0x215a2e - 0x215a63
int64_t function_215a2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x215a2e
    int64_t v1; // 0x215a2e
    int32_t * v2 = (int32_t *)(v1 - 0x49515dac); // 0x215a37
    bool v3; // 0x215a2e
    *v2 = (int32_t)v3 + (int32_t)a2 + *v2;
    int64_t v4 = a4 & -256 | 142; // 0x215a3e
    char * v5 = (char *)(v4 + 0x7c013d64); // 0x215a4d
    unsigned char v6 = *v5; // 0x215a4d
    *v5 = v6 - 74;
    char * v7 = (char *)(v4 - 0x6c155f92); // 0x215a54
    unsigned char v8 = *v7; // 0x215a54
    unsigned char v9 = v8 - 114 + (char)(v6 > 73); // 0x215a54
    *v7 = v9;
    int32_t v10 = v6 > 73 ? v9 <= v8 : v8 > 113 ? 0xd30177 : 0xd30176; // 0x215a5a
    int64_t result = (int64_t)(*(int32_t *)0x26013d006d11d6d4 - v10); // 0x215a60
    int64_t v11; // 0x215a2e
    if (*(int32_t *)(a2 + 0xffffffa8 & 0xffffffff) > *(int32_t *)&v11) {
        result = function_215a29();
    }
    // 0x215a62
    return result;
}

// Address range: 0x215a70 - 0x215a76
int64_t function_215a70(int64_t a1) {
    // 0x215a70
    int64_t v1; // 0x215a70
    *(char *)a1 = (char)v1;
    bool v2; // 0x215a70
    return function_7a122e2b((v2 ? -1 : 1) + a1);
}

// Address range: 0x215ab0 - 0x215abf
int64_t function_215ab0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x215ab0
    unknown_ffffffffba1fe2bc();
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x215ab6
    if (v1 != 0) {
        char * v2 = (char *)(a2 + 89); // 0x215ab6
        *v2 = *v2 << v1;
    }
    return 0xbbbe9124;
}

// Address range: 0x215b0b - 0x215b2b
int64_t function_215b0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = *(int32_t *)(a1 + 0x610068ea); // 0x215b11
    int64_t v2; // 0x215b0b
    uint32_t v3 = (int32_t)v2; // 0x215b17
    uint32_t v4 = *(int32_t *)(a1 + 0x57bd7fb5); // 0x215b17
    int32_t v5 = v3 - v4; // 0x215b17
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x215b17
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t * v7 = (int32_t *)(v2 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v4 > v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 - v4 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | 512); // 0x215b22
    *v7 = *v7 + 0x13dbcb6;
    return function_215ba8(a1, (int64_t)(v1 | (int32_t)a2), a3, a4);
}

// Address range: 0x215b2e - 0x215b3c
int64_t function_215b2e(int64_t a1) {
    // 0x215b2e
    int64_t result; // 0x215b2e
    int32_t * v1 = (int32_t *)(result - 44); // 0x215b2f
    *v1 = *v1 | (int32_t)result;
    return result;
}

// Address range: 0x215b5f - 0x215b60
int64_t function_215b5f(void) {
    // 0x215b5f
    int64_t result; // 0x215b5f
    return result;
}

// Address range: 0x215b92 - 0x215b93
int64_t function_215b92(void) {
    // 0x215b92
    int64_t result; // 0x215b92
    return result;
}

// Address range: 0x215ba8 - 0x215bc3
int64_t function_215ba8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a4 - 0x40fec2dc); // 0x215bb6
    *v1 = *v1 + (char)(a4 / 256);
    int64_t v2; // 0x215ba8
    return v2 & 0xffffffff;
}

// Address range: 0x215bd0 - 0x215bd2
int64_t function_215bd0(void) {
    // 0x215bd0
    return function_215b92();
}

// Address range: 0x215bf9 - 0x215c14
int64_t function_215bf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a4 + 0x3daaa638); // 0x215bf9
    *v1 = *v1 - (int32_t)a5;
    int64_t v2; // 0x215bf9
    *(int32_t *)a2 = *(int32_t *)&v2 + (int32_t)a3;
    return function_f700f016(a6);
}

// Address range: 0x215c2a - 0x215c2b
int64_t function_215c2a(void) {
    // 0x215c2a
    int64_t result; // 0x215c2a
    return result;
}

// Address range: 0x432693 - 0x4326f5
int64_t function_432693(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x432693
    int64_t v1; // 0x432693
    bool v2; // 0x432693
    unsigned char v3 = llvm_ctpop_i8((char)v1 + 9 + (char)v2 | -36); // 0x432698
    uint32_t v4 = *(int32_t *)-0x1ab5dfd790c7d5aa; // 0x43269a
    int64_t result = v4; // 0x43269a
    if (v3 % 2 == 0) {
        // 0x4326b8
        return result;
    }
    // 0x4326f3
    __asm_out((int16_t)a3, v4);
    return result;
}

// Address range: 0x432701 - 0x432702
int64_t function_432701(int64_t a1) {
    // 0x432701
    int64_t result; // 0x432701
    return result;
}

// Address range: 0x432716 - 0x432748
int64_t function_432716(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x432716
    int64_t v1; // 0x432716
    int64_t result = v1;
    bool v2; // 0x432716
    if (v2) {
        // 0x432718
        return result;
    }
    int64_t v3 = a3; // bp-8, 0x43272b
    int32_t * v4 = (int32_t *)(a1 + 68); // 0x432737
    *v4 = *v4 ^ (int32_t)(int64_t)&v3;
    unsigned char v5 = *(char *)(a1 + 0x36eb1021 + 8 * (int64_t)((int32_t)result >> 31)); // 0x43273c
    return (result + ((int64_t)&g1 >> 8) + 215 + (int64_t)v2 + (int64_t)(v5 > (char)a4)) % 256 | result & -256;
}

// Address range: 0x43277c - 0x43277f
int64_t function_43277c(int64_t a1) {
    // 0x43277c
    int64_t result; // 0x43277c
    return result;
}

// Address range: 0x43278a - 0x43281d
int64_t function_43278a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a3;
    int64_t v2 = a4 - 1; // 0x43278a
    int32_t v3 = a3;
    int32_t v4 = v3; // 0x43278a
    int64_t v5 = v2; // 0x43278a
    int64_t v6 = a1; // 0x43278a
    int64_t v7; // 0x43278a
    int64_t v8; // 0x43278a
    int64_t v9; // 0x43278a
    int64_t v10; // 0x43278a
    bool v11; // 0x43278a
    if (v2 == 0) {
        // 0x43278c
        int64_t v12; // 0x43278a
        int32_t v13 = (int32_t)v12 + v3; // 0x43278c
        *(int32_t *)a3 = v13;
        int64_t v14 = (int64_t)(-0x5060f40c * *(int32_t *)(4 * v12 - 0x3fd5e715)); // 0x4327db
        int64_t v15 = v14; // bp-8, 0x4327e8
        v11 = v13 == 0;
        v7 = v12 & -0xff01 | (int64_t)&g7;
        v5 = v14;
        v8 = v12 & -0xff01 | (int64_t)&g2;
        v10 = (int64_t)&v15;
        v9 = a1;
        goto lab_0x4327e9;
    } else {
        goto lab_0x432800;
    }
  lab_0x432800:;
    // 0x432800
    int64_t v16; // 0x43278a
    int64_t v17 = v16;
    int64_t v18 = v5;
    float80_t v19; // 0x43278a
    float80_t v20 = v19 - (float80_t)*(int16_t *)(v17 - 56); // 0x432800
    *(int32_t *)(a6 + 17) = (int32_t)v20;
    int64_t v21; // 0x43278a
    unsigned char v22 = (char)((int32_t)v21 - v4) + 103; // 0x432809
    *(char *)v6 = __asm_insb((int16_t)v1);
    v11 = v22 == 0;
    float80_t v23 = v20; // 0x43280c
    v7 = v22;
    v5 = v18;
    v8 = v17;
    int64_t v24; // 0x43278a
    v10 = v24;
    v9 = v6;
    if (v22 >= 0) {
        unsigned char v25 = (char)v18 % 32; // 0x432818
        if (v25 != 0) {
            unsigned char v26 = *(char *)&v1; // 0x432818
            *(char *)v1 = v26 >> v25 | (char)((int32_t)v17 < 0x63da4bc9) << 8 - v25 | (char)((int16_t)v26 << (int16_t)(9 - v25));
        }
        return v17 + 0x9c25b437 & 0xffffffff;
    }
    goto lab_0x4327e9;
  lab_0x4327e9:;
    int64_t v27 = v9;
    v6 = v10;
    *(int64_t *)(v6 - 8) = v6;
    if (!v11) {
        // 0x4327ed
        *(char *)v27 = __asm_insb((int16_t)v1);
        return __asm_int1();
    }
    // 0x4327e9
    v4 = *(int32_t *)&v1;
    v19 = v23;
    v21 = v7;
    v16 = v8;
    v24 = v6;
    goto lab_0x432800;
}

// Address range: 0x432876 - 0x432877
int64_t function_432876(int64_t a1) {
    // 0x432876
    int64_t result; // 0x432876
    return result;
}

// Address range: 0x432886 - 0x432887
int64_t function_432886(void) {
    // 0x432886
    int64_t result; // 0x432886
    return result;
}

// Address range: 0x432900 - 0x432903
int64_t function_432900(void) {
    // 0x432900
    return function_432886();
}

// Address range: 0x43291e - 0x43291f
int64_t function_43291e(void) {
    // 0x43291e
    int64_t result; // 0x43291e
    return result;
}

// Address range: 0x432932 - 0x432933
int64_t function_432932(int64_t a1) {
    // 0x432932
    int64_t result; // 0x432932
    return result;
}

// Address range: 0x432946 - 0x432951
int64_t function_432946(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x432946
    int64_t result; // 0x432946
    return result;
}

// Address range: 0x4329e4 - 0x4329e9
int64_t function_4329e4(void) {
    // 0x4329e4
    return function_ffffffffff53166a();
}

// Address range: 0x432a30 - 0x432a40
int64_t function_432a30(int64_t a1) {
    // 0x432a30
    int64_t v1; // 0x432a30
    int64_t v2 = v1;
    __asm_in(-75);
    *(int32_t *)-0x6272972 = *(int32_t *)-0x6272972 + (int32_t)v1;
    bool v3; // 0x432a30
    return 2 * v2 & 254 | (int64_t)v3 | v2 & 0xffffff00;
}

// Address range: 0x432a48 - 0x432a51
int64_t function_432a48(void) {
    // 0x432a48
    int64_t v1; // 0x432a48
    int64_t v2 = v1;
    int64_t result; // 0x432a48
    bool v3; // 0x432a48
    if (!v3) {
        // 0x432a4a
        result = (v2 + 229 + (int64_t)v3) % 256 | v2 & -256;
    }
    // 0x432a4f
    return result;
}

// Address range: 0x432aaf - 0x432ab5
int64_t function_432aaf(int64_t a1, int64_t a2) {
    // 0x432aaf
    int64_t result; // 0x432aaf
    return result;
}

// Address range: 0x432ac0 - 0x432acb
int64_t function_432ac0(void) {
    // 0x432ac0
    return function_ffffffffeac9ea1c();
}

// Address range: 0x432ad2 - 0x432ad3
int64_t function_432ad2(void) {
    // 0x432ad2
    int64_t result; // 0x432ad2
    return result;
}

// Address range: 0x432ad5 - 0x432ad8
int64_t function_432ad5(void) {
    // 0x432ad5
    int64_t result; // 0x432ad5
    return result;
}

// Address range: 0x432ae4 - 0x432ae5
int64_t function_432ae4(void) {
    // 0x432ae4
    int64_t result; // 0x432ae4
    return result;
}

// Address range: 0x432b0c - 0x432b0f
int64_t function_432b0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x432b0c
    int64_t result; // 0x432b0c
    return result;
}

// Address range: 0x432b1e - 0x432b42
int64_t function_432b1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x432b1e
    int32_t v3 = v2;
    *(int32_t *)-0x5b249c9e4d2d30fe = v3;
    int64_t result; // 0x432b1e
    bool v4; // 0x432b1e
    if (!v4) {
        // 0x432b41
        return result;
    }
    int64_t v5 = v2 & 0xffffffff; // 0x432b29
    *(int32_t *)v5 = v3 - (int32_t)a1 + (int32_t)v4;
    __asm_out((int16_t)a3, (int32_t)v2);
    unsigned char v6 = (char)a3; // 0x432b32
    unsigned char v7 = *(char *)(v5 - 28); // 0x432b32
    char * v8 = (char *)((a3 & -256 | (int64_t)(v6 - v7)) - 124); // 0x432b38
    unsigned char v9 = *v8; // 0x432b38
    *v8 = 4 * v9 | v9 / 128 | 2 * (char)(v7 <= v6);
    if ((v9 & 64) == 0) {
        result = function_432ad2();
    } else {
        // 0x432b29
        result = (int64_t)*(int32_t *)&v1;
    }
    // 0x432b41
    return result;
}

// Address range: 0x432bae - 0x432baf
int64_t function_432bae(void) {
    // 0x432bae
    int64_t result; // 0x432bae
    return result;
}

// Address range: 0x432c00 - 0x432c0b
int64_t function_432c00(int64_t a1) {
    // 0x432c00
    int64_t v1; // 0x432c00
    __asm_out_137(-58, (char)v1);
    return function_432bae();
}

// Address range: 0x432c79 - 0x432c7a
int64_t function_432c79(void) {
    // 0x432c79
    int64_t result; // 0x432c79
    return result;
}
